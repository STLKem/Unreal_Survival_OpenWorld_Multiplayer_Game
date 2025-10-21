// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MyOwn_h_Files/ItemRecipes.h"
#include "MainInteractInterface.h"
#include "CraftingParent.generated.h"

class UMeshComponent;
class UBoxComponent;
class USceneComponent;

UCLASS()
class PROJECTDELIVERYHELL_API ACraftingParent : public AActor, public IMainInteractInterface
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACraftingParent();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Inventory")
	UDataTable* RecipesDataTable;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Inventory")
	UDataTable* ItemsDataTable;
	

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	USceneComponent* RootComp;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	UStaticMeshComponent* MeshComp;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	UBoxComponent* BoxComp;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
