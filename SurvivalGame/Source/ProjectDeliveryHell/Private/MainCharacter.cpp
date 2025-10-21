// Fill out your copyright notice in the Description page of Project Settings.


#include "MainCharacter.h"

#include "BuildingComponent.h"
#include "InventoryComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"
#include "Components/InputComponent.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "PlacingBlockParent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/MovementComponent.h"

#include "Net/UnrealNetwork.h"


// Sets default values
AMainCharacter::AMainCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	bReplicates = true;

	bUseControllerRotationPitch = false;	
	bUseControllerRotationYaw = false;
	bUseControllerRotationRoll = false;

	GetCharacterMovement()->bOrientRotationToMovement = true;
	GetCharacterMovement()->RotationRate = FRotator(0.f, 400.f, 0.f);
	

	//CameraBoom = CreateDefaultSubobject<USpringArmComponent>("CameraBoom");
	//CameraBoom->SetupAttachment(GetRootComponent());
	//CameraBoom->TargetArmLength = 300.f;
	
	ViewCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("ViewCamera"));
	ViewCamera->SetupAttachment(GetMesh(), FName("head"));


	BuildingComponent = CreateDefaultSubobject<UBuildingComponent>(TEXT("Building Component"));
	InventoryComponent = CreateDefaultSubobject<UInventoryComponent>(TEXT("Inventory Component"));
	

}

void AMainCharacter::Jump()
{
	Super::Jump();
}

void AMainCharacter::GetCameraData(FVector& OutLocation, FVector& OutForwardVector) const
{

	if (ViewCamera)
	{
		OutLocation = ViewCamera->GetComponentLocation();
		OutForwardVector = ViewCamera->GetForwardVector();
	}
	
}

void AMainCharacter::AddToInv_Implementation(int32 ItemID, int32 ItemQuantity)
{

	InventoryComponent->AddToInventory(ItemID, ItemQuantity);
	
}

void AMainCharacter::ChangeHealth_Implementation(int32 Heal)
{
	Health += Heal;

	Health = FMath::Clamp<int32>(Health, 0, MaxHealth);

	OnParameterUpdate.Broadcast();
}

void AMainCharacter::ChangeHunger_Implementation(int32 HungerValue)
{
	Hunger += HungerValue;

	Hunger = FMath::Clamp<int32>(Hunger, 0, MaxHunger);

	OnParameterUpdate.Broadcast();
}

void AMainCharacter::ChangeWater_Implementation(int32 WaterValue)
{
	Water += WaterValue;

	Water = FMath::Clamp<int32>(Water, 0, MaxWater);

	OnParameterUpdate.Broadcast();
}

void AMainCharacter::ChangeTemperature_Implementation(float TemperatureValue)
{
	Temperature += TemperatureValue;

	OnParameterUpdate.Broadcast();
}

// Called when the game starts or when spawned
void AMainCharacter::BeginPlay()
{
	Super::BeginPlay();

	if (APlayerController* PlayerController = Cast<APlayerController>(Controller))
	{
		if (UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(PlayerController->GetLocalPlayer()))
		{
			Subsystem->AddMappingContext(InputMapping, 0);
		}
	}

	
}

// void AMainCharacter::OnRep_Parameter()
// {
//
// 	OnParameterUpdate.Broadcast();
// 	
// }

void AMainCharacter::Move(const FInputActionValue& MovementInput)
{

	const FVector2D MovementVector = MovementInput.Get<FVector2D>();

	const FRotator Rotation = Controller->GetControlRotation();
	const FRotator YawRotation(0.f, Rotation.Yaw, 0.0f);

	const FVector ForwardDirection = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);
	AddMovementInput(ForwardDirection, MovementVector.Y);

	const FVector RightDirection = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);
	AddMovementInput(RightDirection, MovementVector.X);
	
}

void AMainCharacter::Look(const FInputActionValue& Value)
{

	const FVector2D LookInput = Value.Get<FVector2D>();

	AddControllerPitchInput(LookInput.Y);
	AddControllerYawInput(LookInput.X);
	
}

void AMainCharacter::PlaceBlock()
{
	if (BuildingComponent)
	{
		BuildingComponent->PlaceBlock();
	}
}

void AMainCharacter::Interact()
{
	if (!BuildingComponent->bIsBuilding)
	{
		FVector Start;
		FVector Forward;
		GetCameraData(Start, Forward);
		FVector End = Start + (Forward * 300);
		FHitResult Hit;

		if (GetWorld())
		{
			bool ActorHit = GetWorld()->LineTraceSingleByChannel(Hit, Start, End, ECollisionChannel::ECC_Visibility);
			if (ActorHit)
			{
				if(APlacingBlockParent* Block = Cast<APlacingBlockParent>(Hit.GetActor()))
				{
					if (IsValid(Block) && !Block->isPlaced && !BuildingComponent->hasBlock)
					{
						BuildingComponent->hasBlock = true;
						BuildingComponent->Building = Block->GetClass();
						BuildingComponent->DefaultActor = BuildingComponent->Building->GetDefaultObject<AActor>();
						Block->Destroy();
					}
				}else if (Hit.GetActor()->GetClass()->ImplementsInterface(UMainInteractInterface::StaticClass()))
				{
					Server_InteractWithResource(Hit.GetActor(), this);
				}		
			}
		}
	}
}


void AMainCharacter::Server_InteractWithResource_Implementation(AActor* ResourceActor, AActor* Player)
{

	if (HasAuthority()) // Только сервер будет исполнять
	{
		if(ResourceActor && ResourceActor->GetClass()->ImplementsInterface(UMainInteractInterface::StaticClass()))
		{
			IMainInteractInterface::Execute_Interact(ResourceActor, Player); // обычная функция на сервере
		}
	}
}


void AMainCharacter::ShiftPressed()
{
	if (BuildingComponent->bIsBuilding)
	{
		BuildingComponent->isShifting = !BuildingComponent->isShifting;
		BuildingComponent->DeleteActorFix();
	}
}

void AMainCharacter::ShiftReleased()
{
	// NOT WORKING IT IS JUST SITS HERE FOR NO REASON
	BuildingComponent->isShifting = false;
	
}

void AMainCharacter::Rotate()
{

	BuildingComponent->Rotate();
	
}

void AMainCharacter::BuildingModeSwitch()
{
	
	BuildingComponent->bIsBuilding = !BuildingComponent->bIsBuilding;
	BuildingComponent->DeleteActorFix();
	if (!BuildingComponent->bIsBuilding)
	{
		BuildingComponent->isShifting = false;
	}
	
}



// Called every frame
void AMainCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AMainCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	if (UEnhancedInputComponent* EnhancedInputComponent = CastChecked<UEnhancedInputComponent>(PlayerInputComponent))
	{
		EnhancedInputComponent->BindAction(MovementAction, ETriggerEvent::Triggered, this, &AMainCharacter::Move);

		EnhancedInputComponent->BindAction(LookingAction, ETriggerEvent::Triggered, this, &AMainCharacter::Look);

		EnhancedInputComponent->BindAction(Jumping, ETriggerEvent::Triggered, this, &AMainCharacter::Jump);

		EnhancedInputComponent->BindAction(PlacingBlock, ETriggerEvent::Started, this, &AMainCharacter::PlaceBlock);

		EnhancedInputComponent->BindAction(Interacting, ETriggerEvent::Started, this, &AMainCharacter::Interact);

		EnhancedInputComponent->BindAction(Shifting, ETriggerEvent::Started, this, &AMainCharacter::ShiftPressed);
		
		//EnhancedInputComponent->BindAction(Shifting, ETriggerEvent::Completed, this, &AMainCharacter::ShiftReleased);

		EnhancedInputComponent->BindAction(Rotating, ETriggerEvent::Triggered, this, &AMainCharacter::Rotate);

		EnhancedInputComponent->BindAction(SwitchBuildMode, ETriggerEvent::Started, this, &AMainCharacter::BuildingModeSwitch);

		
	}

}

void AMainCharacter::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(AMainCharacter, Health);
	DOREPLIFETIME(AMainCharacter, MaxHealth);
	DOREPLIFETIME(AMainCharacter, Hunger);
	DOREPLIFETIME(AMainCharacter, MaxHunger);
	DOREPLIFETIME(AMainCharacter, Water);
	DOREPLIFETIME(AMainCharacter, MaxWater);
	DOREPLIFETIME(AMainCharacter, Temperature);
	DOREPLIFETIME(AMainCharacter, Stamina);
}

