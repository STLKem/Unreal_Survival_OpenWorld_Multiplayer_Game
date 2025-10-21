// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MainInteractInterface.h"
#include "GameFramework/Actor.h"
#include "ChestParent.generated.h"

class UMeshComponent;
class UBoxComponent;
class USceneComponent;
class UInventoryComponent;

UCLASS()
class PROJECTDELIVERYHELL_API AChestParent : public AActor, public IMainInteractInterface
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AChestParent();


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	USceneComponent* RootComp;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	UStaticMeshComponent* MeshComp;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	UBoxComponent* BoxComp;
	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	UInventoryComponent* InventoryComponent;
	

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
