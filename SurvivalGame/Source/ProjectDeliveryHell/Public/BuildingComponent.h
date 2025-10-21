// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "BuildingComponent.generated.h"



UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class PROJECTDELIVERYHELL_API UBuildingComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UBuildingComponent();

	UFUNCTION(BlueprintCallable)
	void PlaceBlock();
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool hasBlock = true;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool isShifting = false;

	UPROPERTY()
	FHitResult Hit;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bIsBuilding = false;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TSubclassOf<AActor> Building = nullptr;
    
    UPROPERTY()
    AActor* DefaultActor = nullptr;

	void DeleteActorFix();

	void Rotate();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;


	UPROPERTY()
	AActor* SpawnedActor;
	
	
	
		

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

		
};
