// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MainInteractInterface.h"
#include "GameFramework/Character.h"
#include "InputActionValue.h"
#include "MainCharacter.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnParameterUpdate);

//class USpringArmComponent;
//class UCameraComponent;
class UInputMappingContext;
class UInputAction;
class UBuildingComponent;
class UInventoryComponent;

UCLASS()
class PROJECTDELIVERYHELL_API AMainCharacter : public ACharacter, public IMainInteractInterface
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AMainCharacter();

	UPROPERTY(BlueprintAssignable)
	FOnParameterUpdate OnParameterUpdate;

	virtual void Jump() override;

	UFUNCTION()
	void GetCameraData(FVector& OutLocation, FVector& OutForwardVector) const;

	virtual void AddToInv_Implementation(int32 ItemID, int32 ItemQuantity) override;

	virtual void ChangeHealth_Implementation(int32 Heal) override;
	
	virtual void ChangeHunger_Implementation(int32 HungerValue) override;
	
	virtual void ChangeWater_Implementation(int32 WaterValue) override;
	
	virtual void ChangeTemperature_Implementation(float TemperatureValue) override;
	
	

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	//UPROPERTY(VisibleAnywhere)
	//USpringArmComponent* CameraBoom;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Camera")
	class UCameraComponent* ViewCamera;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	UBuildingComponent* BuildingComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	UInventoryComponent* InventoryComponent;

	UPROPERTY(VisibleAnywhere, Replicated, BlueprintReadOnly)
	int32 Health = 100;

	UPROPERTY(VisibleAnywhere, Replicated, BlueprintReadOnly)
	int32 MaxHealth = 100;

	UPROPERTY(VisibleAnywhere, Replicated, BlueprintReadOnly)
	int32 Hunger = 100;

	UPROPERTY(VisibleAnywhere, Replicated, BlueprintReadOnly)
	int32 MaxHunger = 100;

	UPROPERTY(VisibleAnywhere, Replicated, BlueprintReadOnly)
	int32 Water = 100;

	UPROPERTY(VisibleAnywhere, Replicated, BlueprintReadOnly)
	int32 MaxWater = 100;

	UPROPERTY(VisibleAnywhere, Replicated, BlueprintReadOnly)
	float Temperature = 36.6f;

	UPROPERTY(VisibleAnywhere, Replicated, BlueprintReadOnly)
	int32 Stamina = 100;
	
	UPROPERTY(VisibleAnywhere, Replicated, BlueprintReadOnly)
    int32 Armor = 0;

	//UFUNCTION()
	//void OnRep_Parameter();
	
	

	UPROPERTY(EditAnywhere, Category = Input)	
	UInputMappingContext* InputMapping;

	UPROPERTY(EditAnywhere, Category = Input)
	UInputAction* MovementAction;

	UPROPERTY(EditAnywhere, Category = Input)
	UInputAction* LookingAction;
	
	UPROPERTY(EditAnywhere, Category = Input)
	UInputAction* Jumping;

	UPROPERTY(EditAnywhere, Category = Input)
	UInputAction* PlacingBlock;

	UPROPERTY(EditAnywhere, Category = Input)
	UInputAction* Interacting;

	UPROPERTY(EditAnywhere, Category = Input)
	UInputAction* Shifting;

	UPROPERTY(EditAnywhere, Category = Input)
	UInputAction* Rotating;

	UPROPERTY(EditAnywhere, Category = Input)
	UInputAction* SwitchBuildMode;
	
	void Move(const FInputActionValue& MovementInput);

	void Look(const FInputActionValue& Value);

	void PlaceBlock();

	void Interact();

	void ShiftPressed();

	void ShiftReleased();

	void Rotate();
	
	void BuildingModeSwitch();
	

	UFUNCTION(Server, Reliable)
	void Server_InteractWithResource(AActor* ResourceActor, AActor* Player);
	
	
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
