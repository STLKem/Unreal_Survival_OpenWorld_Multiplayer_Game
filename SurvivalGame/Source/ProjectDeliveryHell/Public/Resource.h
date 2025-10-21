// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MyOwn_h_Files/InventorySlot.h"
#include "MainInteractInterface.h"
#include "GameFramework/Actor.h"
#include "Resource.generated.h"

class UMeshComponent;
class UBoxComponent;
class USceneComponent;


UCLASS()
class PROJECTDELIVERYHELL_API AResource : public AActor, public IMainInteractInterface
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AResource();

	UFUNCTION()
	int32 MineResource();

	virtual void Interact_Implementation(AActor* Player) override;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Resource")
	FDataTableRowHandle ResourceItem;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Resource"/*ReplicatedUsing = OnRep_Remaining*/)
	int32 RemainingAmount = 10;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Resource")
	int32 AmountToAdd = 1;
	


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	USceneComponent* RootComp;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	UStaticMeshComponent* MeshComp;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	UBoxComponent* BoxComp;
	
	UPROPERTY()
	int32 ItemID = 0;
	
	// UFUNCTION()
	// void OnRep_Remaining();

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
