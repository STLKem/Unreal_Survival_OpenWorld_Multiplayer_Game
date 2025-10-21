// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "WorldGeneration.generated.h"

class UProceduralMeshComponent;

UCLASS()
class PROJECTDELIVERYHELL_API AWorldGeneration : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AWorldGeneration();

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int XVertexCount = 100;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int YVertexCount = 50;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int CellSize = 1000;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UProceduralMeshComponent* TerrainMesh;
	
	
	
	


	UFUNCTION(Blueprintable)
	void GenerateTerrain();
	
	float GetHeight(FVector2D Location);
	float PerlinNoiseExtended(const FVector2D Location, const float Scale, const float Amplitude, const FVector2D offset);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	// virtual void Tick(float DeltaTime) override;

};
