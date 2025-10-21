// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "EntitySystem/MovieSceneEntitySystemRunner.h"
#include "GameFramework/Actor.h"
#include "BlockSpawner.generated.h"

class UMeshComponent;
class UBoxComponent;
class USceneComponent;

UCLASS()
class PROJECTDELIVERYHELL_API ABlockSpawner : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABlockSpawner();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	USceneComponent* RootComp;
	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	UMeshComponent* MeshComp;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	UBoxComponent* BoxComp;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Building")
	TArray<TSubclassOf<AActor>> SpawningBlocks;


	UFUNCTION()
	void SpawnBlock();
	
	UFUNCTION()
	void OnOverlapEnd(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);

	UPROPERTY()
	bool canSpawn = true;

	UPROPERTY(EditAnywhere, Category = Spawn)
	float SpawnTime = 10.f;

	UPROPERTY()
	float LeftToSpawn = SpawnTime;

	UPROPERTY()
	TSubclassOf<AActor> SelectedClass = nullptr;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
