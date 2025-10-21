// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "ResourceInterface.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UResourceInterface : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class PROJECTDELIVERYHELL_API IResourceInterface
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

};
