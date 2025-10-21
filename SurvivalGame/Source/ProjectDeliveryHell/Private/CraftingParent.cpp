// Fill out your copyright notice in the Description page of Project Settings.


#include "CraftingParent.h"
#include "Components/BoxComponent.h"
#include "Components/MeshComponent.h"
#include "Components/SceneComponent.h"


// Sets default values
ACraftingParent::ACraftingParent()
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
	
	static ConstructorHelpers::FObjectFinder<UDataTable> DataTableObj(TEXT("DataTable'/Game/main/DataTables/CraftingRecipe.CraftingRecipe'"));
	if (DataTableObj.Succeeded())
	{
		RecipesDataTable = DataTableObj.Object;
	}

	static ConstructorHelpers::FObjectFinder<UDataTable> DataTableObj2(TEXT("DataTable'/Game/main/DataTables/ItemsData.ItemsData'"));
	if (DataTableObj.Succeeded())
	{
		ItemsDataTable = DataTableObj2.Object;
	}
	

}

// Called when the game starts or when spawned
void ACraftingParent::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACraftingParent::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

