// Fill out your copyright notice in the Description page of Project Settings.


#include "Resource.h"
#include "Components/BoxComponent.h"
#include "Components/MeshComponent.h"
#include "Components/SceneComponent.h"

// Sets default values
AResource::AResource()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	bReplicates = true;

	RootComp = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
	SetRootComponent(RootComp);
	
	MeshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshComp"));
	MeshComp->SetupAttachment(GetRootComponent());

	BoxComp = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxComp"));
	BoxComp->SetupAttachment(GetRootComponent());

}

// TODO: это все поля отвечающие за репликацию

// #include "Net/UnrealNetwork.h"
//
// void AResource::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
// {
// 	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
//
// 	DOREPLIFETIME(AResource, RemainingAmount);
// }

int32 AResource::MineResource()
{
	if (RemainingAmount > 0)
	{
		RemainingAmount -= AmountToAdd;

		if (RemainingAmount <= 0)
		{
			Destroy();
		}
	}

	return AmountToAdd;
}


void AResource::Interact_Implementation(AActor* Player)
{
	
	int32 ResourcesToAdd = MineResource();
	if (HasAuthority()) // Только сервер будет исполнять
	{
		if (AmountToAdd != 0 && Player->GetClass()->ImplementsInterface(UMainInteractInterface::StaticClass()))
		{
			IMainInteractInterface::Execute_AddToInv(Player, ItemID, ResourcesToAdd);
		}
	}
	
}

// Called when the game starts or when spawned
void AResource::BeginPlay()
{
	Super::BeginPlay();

	if (ResourceItem.DataTable) // если таблица назначена
	{
		// получаем указатель на строку в DataTable
		FItemData* ItemRow = ResourceItem.DataTable->FindRow<FItemData>(ResourceItem.RowName,(TEXT("LookupResource")));

		if (ItemRow)
		{
			ItemID = ItemRow->ItemID; // вот здесь ItemID из самой структуры
		}
	}
	
}

// void AResource::OnRep_Remaining()
// {
// }

// Called every frame
void AResource::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

