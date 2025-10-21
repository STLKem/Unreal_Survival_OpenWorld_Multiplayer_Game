// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BlocksInterface.h"
#include "PlacingBlockParent.generated.h"

class UMeshComponent;
class UBoxComponent;

UCLASS()
class PROJECTDELIVERYHELL_API APlacingBlockParent : public AActor, public IBlocksInterface
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APlacingBlockParent();
	virtual void Tick(float DeltaTime) override;

	UPROPERTY()
	bool isPlaced = false;

	UPROPERTY()
	FVector Extent;

	virtual void SetExtend_Implementation(FVector Extend) override;

	virtual FVector GetExtend_Implementation() override;
	
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly);
	UMeshComponent* MeshComp;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly);
	UBoxComponent* BoxCompOne;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly);
	UBoxComponent* BoxCompTwo;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly);
	UBoxComponent* BoxCompThree;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly);
	UBoxComponent* BoxCompFour;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly);
	UBoxComponent* BoxCompFive;

private:
	


};
