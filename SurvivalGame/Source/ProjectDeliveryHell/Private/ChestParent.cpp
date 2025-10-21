// Fill out your copyright notice in the Description page of Project Settings.

#include "ChestParent.h"
#include "InventoryComponent.h"
#include "Components/BoxComponent.h"
#include "Components/MeshComponent.h"
#include "Components/SceneComponent.h"



// Sets default values
AChestParent::AChestParent()
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

	InventoryComponent = CreateDefaultSubobject<UInventoryComponent>(TEXT("InventoryComponent"));

}

// Called when the game starts or when spawned
void AChestParent::BeginPlay()
{
	Super::BeginPlay();
	
	
}

// Called every frame
void AChestParent::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

