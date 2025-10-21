// Fill out your copyright notice in the Description page of Project Settings.


#include "PlacingBlockParent.h"
#include "Components/MeshComponent.h"
#include "Components/BoxComponent.h"
#include "Engine/EngineTypes.h"

// Sets default values
APlacingBlockParent::APlacingBlockParent()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	

	MeshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshComp"));
	SetRootComponent(MeshComp);
	
	BoxCompOne = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxComponentOne"));
	BoxCompOne->SetupAttachment(GetRootComponent());
	//BoxCompOne->SetCollisionResponseToChannel(ECC_GameTraceChannel2, ECollisionResponse::ECR_Block);

	BoxCompTwo = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxComponentTwo"));
	BoxCompTwo->SetupAttachment(GetRootComponent());
	//BoxCompTwo->SetCollisionResponseToChannel(ECC_GameTraceChannel2, ECollisionResponse::ECR_Block);

	BoxCompThree = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxComponentThree"));
	BoxCompThree->SetupAttachment(GetRootComponent());
	//BoxCompThree->SetCollisionResponseToChannel(ECC_GameTraceChannel2, ECollisionResponse::ECR_Block);

	BoxCompFour = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxComponentFour"));
	BoxCompFour->SetupAttachment(GetRootComponent());
	//BoxCompFour->SetCollisionResponseToChannel(ECC_GameTraceChannel2, ECollisionResponse::ECR_Block);

	BoxCompFive = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxComponentFive"));
	BoxCompFive->SetupAttachment(GetRootComponent());
	//BoxCompFive->SetCollisionResponseToChannel(ECC_GameTraceChannel2, ECollisionResponse::ECR_Block);

	
	// // Получаем размеры меша
	// if (UStaticMeshComponent* Mesh = Cast<UStaticMeshComponent>(MeshComp))
	// {
	// 	if (UStaticMesh* StaticMesh = Mesh->GetStaticMesh())
	// 	{
	// 		FBox BoundingBox = StaticMesh->GetBoundingBox();
	// 		FVector Extent = BoundingBox.GetExtent();
	//
	// 		BoxCompOne->SetRelativeLocation(FVector(Extent.X + 1.0f, 0, 0));
	// 		BoxCompTwo->SetRelativeLocation(FVector(-Extent.X - 1.0f, 0, 0));
	// 		BoxCompThree->SetRelativeLocation(FVector(0, Extent.Y + 1.0f, 0));
	// 		BoxCompFour->SetRelativeLocation(FVector(0, -Extent.Y - 1.0f, 0));
	// 	}
	// }

	// if (UStaticMeshComponent* Mesh = Cast<UStaticMeshComponent>(MeshComp))
	// {
	// 	if (UStaticMesh* StaticMesh = Mesh->GetStaticMesh())
	// 	{
	// 		FBox BoundingBox = StaticMesh->GetBoundingBox();
	// 		FVector Extent = BoundingBox.GetExtent();
	//
	// 		BoxCompOne->SetRelativeLocation(FVector(Extent.X + 1.0f, 0, 0));
	// 		BoxCompTwo->SetRelativeLocation(FVector(-Extent.X - 1.0f, 0, 0));
	// 		BoxCompThree->SetRelativeLocation(FVector(0, Extent.Y + 1.0f, 0));
	// 		BoxCompFour->SetRelativeLocation(FVector(0, -Extent.Y - 1.0f, 0));
	// 	}
	// }
	
	
}

void APlacingBlockParent::SetExtend_Implementation(FVector Extend)
{
	Extent = Extend;
}

FVector APlacingBlockParent::GetExtend_Implementation()
{
	return Extent;
}

// Called when the game starts or when spawned
void APlacingBlockParent::BeginPlay()
{
	Super::BeginPlay();
	
	
}

// Called every frame
void APlacingBlockParent::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

