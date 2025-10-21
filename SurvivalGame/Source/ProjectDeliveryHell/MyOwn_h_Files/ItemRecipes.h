#pragma once

#include "CoreMinimal.h"
#include "Engine/DataTable.h" // для FTableRowBase
#include "ItemRecipes.generated.h" // всегда последний include

USTRUCT(BlueprintType)
struct FRecipeIngredient
{
	GENERATED_BODY()

	// ID предмета (можно FName, если ты хранишь предметы в DataTable)
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 ItemID;

	// Сколько нужно
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Quantity = 1;
};

USTRUCT(BlueprintType)
struct FCraftingRecipe : public FTableRowBase
{
	GENERATED_BODY()

	// Что получится в итоге
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName ResultItemID;

	// Сколько штук получится (например, 1 меч или 10 стрел)
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 ResultQuantity;

	// Ингредиенты
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FRecipeIngredient> Ingredients;
};


