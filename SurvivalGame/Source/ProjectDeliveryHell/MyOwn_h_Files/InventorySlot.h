#pragma once

#include "CoreMinimal.h"
#include "Engine/DataTable.h" // для FTableRowBase
#include "InventorySlot.generated.h" // всегда последний include


USTRUCT(BlueprintType)
struct FItemData : public FTableRowBase
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 ItemID;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString Name;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UTexture2D* Icon;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString Description;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 MaxStackQuantity;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IsUsable = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Healing = 0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Hunger = 0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Water = 0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Temperature = .0f;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool IsEquipment = false;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool IsHelmet = false;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool IsChest = false;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool IsPants = false;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool IsWeapon = false;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    int32 ArmorValue = 0;
	
};

USTRUCT(BlueprintType)
struct FInventoryItem
{
	GENERATED_BODY()
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 ItemID;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Quantity;

	FInventoryItem() : ItemID(0) ,Quantity(0){}
	
};