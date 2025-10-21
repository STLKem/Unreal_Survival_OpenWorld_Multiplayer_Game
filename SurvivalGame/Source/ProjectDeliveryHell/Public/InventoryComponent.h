// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "MyOwn_h_Files/InventorySlot.h"
#include "MyOwn_h_Files/ItemRecipes.h"
#include "InventoryComponent.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnInventoryUpdated);

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class PROJECTDELIVERYHELL_API UInventoryComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UInventoryComponent();

	UPROPERTY(BlueprintAssignable, Category="Inventory")
	FOnInventoryUpdated OnInventoryUpdated;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Inventory")
	int32 InventorySize = 10;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_Inventory, Category = "Inventory")
	TArray<FInventoryItem> Inventory;

	UFUNCTION()
	void OnRep_Inventory();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Inventory")
	UDataTable* ItemsDataTable;
	
	UFUNCTION(BlueprintCallable, Category = "Inventory")
	void PrintInventory_TEST();
	
	UFUNCTION(BlueprintCallable)
	int32 AddToInventory(int32 AddItemID, int32 AddQuantity, int32 ThisInventoryIndex = -1, bool SameInvenotry = false);
	
	UFUNCTION(BlueprintCallable)
	void RemoveFromInventoryByInventoryIndex(int32 InventoryIndex, int32 RemoveQuantity, bool bUse = false, bool bAll = false);

	UFUNCTION(BlueprintCallable)
	bool RemoveFromInventorByItemID(int32 ItemID, int32 QuantityToRemove);

	UFUNCTION(BlueprintCallable)
	void SwapInventorySlots(UInventoryComponent* OtherInventoryComponent, int32 OtherInventoryIndex, int32 ThisInventoryIndex);

	UFUNCTION(Server, Reliable, BlueprintCallable)
	void Server_SwapInventorySlots(UInventoryComponent* OtherInventoryComponent, int32 OtherInventoryIndex, int32 ThisInventoryIndex);

	UFUNCTION(BlueprintCallable)
	bool CanCraftItem(int32 CraftItemID, int32 CraftQuantity, const TArray<FRecipeIngredient>& RequiredMaterials);

	UFUNCTION(BlueprintCallable)
	bool CraftItem(int32 CraftItemID, int32 CraftQuantity, const TArray<FRecipeIngredient>& RequiredMaterials);

	UFUNCTION(Server, Reliable, BlueprintCallable)
	void Server_CraftItem(int32 CraftItemID, int32 CraftQuantity, const TArray<FRecipeIngredient>& RequiredMaterials);



protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

		
};
