// Fill out your copyright notice in the Description page of Project Settings.


#include "BlockSpawner.h"
#include "Components/BoxComponent.h"
#include "Components/MeshComponent.h"
#include "Components/SceneComponent.h"

// Sets default values
ABlockSpawner::ABlockSpawner()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	RootComp = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
	SetRootComponent(RootComp);
	
	MeshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshComp"));
	MeshComp->SetupAttachment(GetRootComponent());

	BoxComp = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxComp"));
	BoxComp->SetupAttachment(GetRootComponent());
	BoxComp->OnComponentEndOverlap.AddDynamic(this, &ABlockSpawner::OnOverlapEnd);

}

// Called when the game starts or when spawned
void ABlockSpawner::BeginPlay()
{
	Super::BeginPlay();
	
}

void ABlockSpawner::SpawnBlock()
{

	if (canSpawn)
	{
		canSpawn = false;
		LeftToSpawn = SpawnTime;
		FVector SpawnLocation = BoxComp->GetComponentLocation();
		FRotator SpawnRotation = BoxComp->GetComponentRotation();
		FActorSpawnParameters SpawnParams;

		if (SpawningBlocks.Num() > 0)
		{
			int32 RandomIndex = FMath::RandRange(0, SpawningBlocks.Num() - 1);
			SelectedClass = SpawningBlocks[RandomIndex];

			if (SelectedClass)
			{
				AActor* NewActor = GetWorld()->SpawnActor<AActor>(SelectedClass, SpawnLocation, SpawnRotation, SpawnParams);
			}
		}
	}
	
}


void ABlockSpawner::OnOverlapEnd(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	if (OtherActor && OtherActor->IsA(SelectedClass))
	{
		canSpawn = true;
	}
}

// Called every frame
void ABlockSpawner::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	TArray<AActor*> OverlappingActors;

	BoxComp->GetOverlappingActors(OverlappingActors);

	if (OverlappingActors.Num() <= 0)
	{
		LeftToSpawn -= DeltaTime;
		canSpawn = true;

		if (LeftToSpawn <= 0)
		{
			SpawnBlock();
		}
	}else
	{
		canSpawn = false;
	}

	
		
	
}

