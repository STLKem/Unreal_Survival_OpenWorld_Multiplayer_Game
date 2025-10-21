// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "MainInteractInterface.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UMainInteractInterface : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class PROJECTDELIVERYHELL_API IMainInteractInterface
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void Interact(AActor* Player);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void AddToInv(int32 ItemID, int32 ItemQuantity);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void RemoveFromInv();

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void ChangeHealth(int32 Heal);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void ChangeHunger(int32 HungerValue);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void ChangeWater(int32 WaterValue);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void ChangeTemperature(float TemperatureValue);
	
};
