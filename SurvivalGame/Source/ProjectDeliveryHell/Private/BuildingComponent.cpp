// Fill out your copyright notice in the Description page of Project Settings.


#include "Public/BuildingComponent.h"

#include "MainCharacter.h"
#include "PlacingBlockParent.h"
#include "PhysicsEngine/PhysicsAsset.h"
#include "Engine/World.h"
#include "Components/BoxComponent.h"

// Sets default values for this component's properties
UBuildingComponent::UBuildingComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}

// Called when the game starts
void UBuildingComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...

	if (Building)
	{
		DefaultActor = Building->GetDefaultObject<AActor>();
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("Building is null in %s"), *GetOwner()->GetName());
	}

}

void UBuildingComponent::DeleteActorFix()
{

	if(SpawnedActor)
	{
		SpawnedActor->Destroy();
		SpawnedActor = nullptr;
	}
	
}

void UBuildingComponent::Rotate()
{

	if (SpawnedActor)
	{
		float Delta = GetWorld()->GetDeltaSeconds();
		FRotator CurrentRotation = SpawnedActor->GetActorRotation();
		FRotator DeltaRotation(0.f, 100.f * Delta, 0.f); // Pitch, Yaw, Roll
		SpawnedActor->SetActorRotation(CurrentRotation + DeltaRotation);

	}
	
	
}


// Called every frame
void UBuildingComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	if(bIsBuilding && hasBlock && GetWorld())
	{
		FVector Start;
		FVector Forward;
		Cast<AMainCharacter>(GetOwner())->GetCameraData(Start, Forward);
		FVector End = Start + (Forward * 300);

		if (GetWorld())
		{
			bool ActorHit;
			if (!isShifting)
			{
				ActorHit = GetWorld()->LineTraceSingleByChannel(Hit, Start, End, ECollisionChannel::ECC_Visibility);
			}else
			{
				ActorHit = GetWorld()->LineTraceSingleByChannel(Hit, Start, End, ECollisionChannel::ECC_GameTraceChannel2);
			}
			DrawDebugLine(GetWorld(), Start, End, FColor::Red, false, 2.f);

			if (ActorHit)
			{
				DrawDebugBox(GetWorld(), Hit.ImpactPoint, FVector(10.f), FColor::Green, false, 2.f);
				
				if (GetWorld() && Building)
				{
					if (SpawnedActor)
					{
						if (!isShifting)
						{
							if (DefaultActor) // ВМЕСТО ТОГО ЧТОБЫ У МЕНЯ КАЖДЫЙ РАЗ БРАТЬ EXTENT НАДО ПРОСТО ЭТО ЧИСЛО КУДА_ТО ЗАСУНУТЬ И БРАТЬ С ПЕРЕМЕННОЙ
							{
								if (UStaticMeshComponent* Mesh = Cast<UStaticMeshComponent>(DefaultActor->GetComponentByClass(UStaticMeshComponent::StaticClass())))
								{
									if (UStaticMesh* StaticMesh = Mesh->GetStaticMesh())
									{
										FBox BoundingBox = StaticMesh->GetBoundingBox();
										FVector Extent = BoundingBox.GetExtent();

										FVector SpawnLocation = Hit.Location;
										SpawnLocation.Z += Extent.Z;
										
										SpawnedActor->SetActorLocation(SpawnLocation);
									}
								}
							}
						}else
						{
							// if (UPrimitiveComponent* HitComp = Hit.GetComponent())
							// {
							// 	FString CompName = HitComp->GetName();
							// 	if (CompName == "BoxComponentOne" || CompName == "BoxComponentTwo" || CompName == "BoxComponentThree" || CompName == "BoxComponentFour")
							// 	{
							// 		FVector HitLocation = HitComp->GetComponentLocation();
							// 		FRotator BoxRotation = HitComp->GetComponentRotation();
							//
							// 		SpawnedActor->SetActorLocation(HitLocation);
							// 		SpawnedActor->SetActorRotation(BoxRotation);
							// 	}
							// }

							//--------------------------------------------------------------------------------------тут можно убрать этот кусок и НАВЕРНОЕ он ничего не сломает надо попробоваться потом в разработке
							if (UPrimitiveComponent* HitComp = Hit.GetComponent())
							{
							    FName CompName = HitComp->GetFName();

							    if (CompName == TEXT("BoxComponentOne") || CompName == TEXT("BoxComponentTwo") ||
							        CompName == TEXT("BoxComponentThree") || CompName == TEXT("BoxComponentFour") ||
							        CompName == TEXT("BoxComponentFive"))
							    {
							        FVector ParentLocation = Hit.GetActor()->GetActorLocation();
							        FRotator ParentRotation = Hit.GetActor()->GetActorRotation();

							        // Получаем Extent родителя
							        FVector ParentExtent(0.f);
							        if (Hit.GetActor()->GetClass()->ImplementsInterface(UBlocksInterface::StaticClass()))
							        {
							            ParentExtent = IBlocksInterface::Execute_GetExtend(Hit.GetActor());
							        }

							        // Получаем Extent для нового актора
							        FVector NewExtent(0.f);
							        if (UStaticMeshComponent* Mesh = Cast<UStaticMeshComponent>(DefaultActor->GetComponentByClass(UStaticMeshComponent::StaticClass())))
							        {
							            if (UStaticMesh* StaticMesh = Mesh->GetStaticMesh())
							            {
							                NewExtent = StaticMesh->GetBoundingBox().GetExtent();
							            }
							        }

							        // Суммарное смещение (локально относительно родителя)
							        FVector LocalOffset(0.f);
							        if (CompName == TEXT("BoxComponentOne"))
							            LocalOffset = FVector(ParentExtent.X + NewExtent.X, 0, 0);
							        else if (CompName == TEXT("BoxComponentTwo"))
							            LocalOffset = FVector(-(ParentExtent.X + NewExtent.X), 0, 0);
							        else if (CompName == TEXT("BoxComponentThree"))
							            LocalOffset = FVector(0, ParentExtent.Y + NewExtent.Y, 0);
							        else if (CompName == TEXT("BoxComponentFour"))
							            LocalOffset = FVector(0, -(ParentExtent.Y + NewExtent.Y), 0);
							        else if (CompName == TEXT("BoxComponentFive"))
							            LocalOffset = FVector(0, 0, ParentExtent.Z + NewExtent.Z);

							        // Переводим локальное смещение в мировую позицию через RotateVector
							        FVector WorldPos = ParentLocation + ParentRotation.RotateVector(LocalOffset);

							        // Параметры спавна
							        FActorSpawnParameters SpawnParams;
							        SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
							    	
							    	SpawnedActor->SetActorLocation(WorldPos);

							    	if (SpawnedActor && SpawnedActor->GetClass()->ImplementsInterface(UBlocksInterface::StaticClass()))
							    	{
							    		IBlocksInterface::Execute_SetExtend(SpawnedActor, NewExtent);
							    	}
							    	
							    }
							}

							//-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
							
						}
						
					}
					else
					{
						if (!isShifting)
						{

							FRotator SpawnRotation = Hit.GetActor()->GetActorRotation();

							FActorSpawnParameters SpawnParams;

							if (Building)
							{
								if (DefaultActor)
								{
									if (UStaticMeshComponent* Mesh = Cast<UStaticMeshComponent>(DefaultActor->GetComponentByClass(UStaticMeshComponent::StaticClass())))
									{
										if (UStaticMesh* StaticMesh = Mesh->GetStaticMesh())
										{
											FBox BoundingBox = StaticMesh->GetBoundingBox();
											FVector Extent = BoundingBox.GetExtent();

											FVector SpawnLocation = Hit.Location;
											SpawnLocation.Z += Extent.Z;
											SpawnedActor = GetWorld()->SpawnActor<AActor>(Building, SpawnLocation, SpawnRotation, SpawnParams);
										}
									}
								}
							}
						}else
						{
							// if (UPrimitiveComponent* HitComp = Hit.GetComponent())
							// {
							// 	FString CompName = HitComp->GetName();
							// 	if (CompName == "BoxComponentOne" || CompName == "BoxComponentTwo" || CompName == "BoxComponentThree" || CompName == "BoxComponentFour")
							// 	{
							// 		FVector ActorLocation = Hit.GetActor()->GetActorLocation();
							// 		FVector MeshExtent;
							// 		if (UStaticMeshComponent* Mesh = Cast<UStaticMeshComponent>(DefaultActor->GetComponentByClass(UStaticMeshComponent::StaticClass())))
							// 		{
							// 			if (UStaticMesh* StaticMesh = Mesh->GetStaticMesh())
							// 			{
							// 				FBox BoundingBox = StaticMesh->GetBoundingBox();
							// 				MeshExtent = BoundingBox.GetExtent();
							// 				if (SpawnedActor->GetClass()->ImplementsInterface(UBlocksInterface::StaticClass())) //Interface
							// 				{
							// 					IBlocksInterface::Execute_SetExtend(Hit.GetActor(), MeshExtent);
							// 				}
							// 			}
							// 		}
							//
							// 		FVector OtherExtent;
							// 		if (Hit.GetActor()->GetClass()->ImplementsInterface(UBlocksInterface::StaticClass()))
							// 		{
							// 			OtherExtent = IBlocksInterface::Execute_GetExtend(Hit.GetActor());
							// 		}
							// 		
							// 		MeshExtent = MeshExtent + OtherExtent;
							// 		FRotator BoxRotation(0.f);
							// 		FActorSpawnParameters SpawnParams;
							//
							// 		SpawnedActor = GetWorld()->SpawnActor<AActor>(Building, ActorLocation + MeshExtent, BoxRotation, SpawnParams);
							// 	}
							// }

							if (UPrimitiveComponent* HitComp = Hit.GetComponent())
							{
							    FName CompName = HitComp->GetFName();

							    if (CompName == TEXT("BoxComponentOne") || CompName == TEXT("BoxComponentTwo") ||
							        CompName == TEXT("BoxComponentThree") || CompName == TEXT("BoxComponentFour") ||
							        CompName == TEXT("BoxComponentFive"))
							    {
							        FVector ParentLocation = Hit.GetActor()->GetActorLocation();
							        FRotator ParentRotation = Hit.GetActor()->GetActorRotation();

							        // Получаем Extent родителя
							        FVector ParentExtent(0.f);
							        if (Hit.GetActor()->GetClass()->ImplementsInterface(UBlocksInterface::StaticClass()))
							        {
							            ParentExtent = IBlocksInterface::Execute_GetExtend(Hit.GetActor());
							        }

							        // Получаем Extent для нового актора
							        FVector NewExtent(0.f);
							        if (UStaticMeshComponent* Mesh = Cast<UStaticMeshComponent>(DefaultActor->GetComponentByClass(UStaticMeshComponent::StaticClass())))
							        {
							            if (UStaticMesh* StaticMesh = Mesh->GetStaticMesh())
							            {
							                NewExtent = StaticMesh->GetBoundingBox().GetExtent();
							            }
							        }

							        // Суммарное смещение (локально относительно родителя)
							        FVector LocalOffset(0.f);
							        if (CompName == TEXT("BoxComponentOne"))
							            LocalOffset = FVector(ParentExtent.X + NewExtent.X, 0, 0);
							        else if (CompName == TEXT("BoxComponentTwo"))
							            LocalOffset = FVector(-(ParentExtent.X + NewExtent.X), 0, 0);
							        else if (CompName == TEXT("BoxComponentThree"))
							            LocalOffset = FVector(0, ParentExtent.Y + NewExtent.Y, 0);
							        else if (CompName == TEXT("BoxComponentFour"))
							            LocalOffset = FVector(0, -(ParentExtent.Y + NewExtent.Y), 0);
							        else if (CompName == TEXT("BoxComponentFive"))
							            LocalOffset = FVector(0, 0, ParentExtent.Z + NewExtent.Z);

							        // Переводим локальное смещение в мировую позицию через RotateVector
							        FVector WorldPos = ParentLocation + ParentRotation.RotateVector(LocalOffset);

							        // Параметры спавна
							        FActorSpawnParameters SpawnParams;
							        SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;

							        // Спавн
							        SpawnedActor = GetWorld()->SpawnActor<AActor>(Building, WorldPos, ParentRotation, SpawnParams);

							        // Если есть интерфейс, передаём Extent
							        if (SpawnedActor && SpawnedActor->GetClass()->ImplementsInterface(UBlocksInterface::StaticClass()))
							        {
							            IBlocksInterface::Execute_SetExtend(SpawnedActor, NewExtent);
							        }
							    }
							}



							
						}
						
						if (SpawnedActor)
						{
							if (UPrimitiveComponent* RootComp = Cast<UPrimitiveComponent>(SpawnedActor->GetRootComponent()))
							{
								RootComp->SetCollisionEnabled(ECollisionEnabled::NoCollision);
							}

						}
					}	
				}
			}
			else if(SpawnedActor)
			{
				SpawnedActor->Destroy();
				SpawnedActor = nullptr;
			}
		}
	}
}




void UBuildingComponent::PlaceBlock()
{
	if (SpawnedActor and bIsBuilding)
	{
		if (UPrimitiveComponent* RootComp = Cast<UPrimitiveComponent>(SpawnedActor->GetRootComponent()))
		{
			RootComp->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
		}

		if (SpawnedActor)
		{
			TArray<UBoxComponent*> BoxComponents;
			SpawnedActor->GetComponents<UBoxComponent>(BoxComponents);
			//-----------------------------------------------------------------------------
			FVector MeshExtent(0.f);
			if (Hit.GetActor()->GetClass()->ImplementsInterface(UBlocksInterface::StaticClass()))
			{
				MeshExtent = IBlocksInterface::Execute_GetExtend(Hit.GetActor());
			}
			if (MeshExtent == FVector(0.f))
			{
				if (UStaticMeshComponent* Mesh = Cast<UStaticMeshComponent>(DefaultActor->GetComponentByClass(UStaticMeshComponent::StaticClass())))
				{
					if (UStaticMesh* StaticMesh = Mesh->GetStaticMesh())
					{
						FBox BoundingBox = StaticMesh->GetBoundingBox();
						MeshExtent = BoundingBox.GetExtent();
						if (SpawnedActor->GetClass()->ImplementsInterface(UBlocksInterface::StaticClass())) //Interface
						{
							IBlocksInterface::Execute_SetExtend(SpawnedActor, MeshExtent);
						}
						MeshExtent = 2*MeshExtent;
					}
				}
			}

			for (UBoxComponent* BoxComponent : BoxComponents)
			{
				if (BoxComponent)
				{
					BoxComponent->SetCollisionResponseToChannel(ECC_GameTraceChannel2, ECollisionResponse::ECR_Block);

					// FRotator ActorRot = SpawnedActor->GetActorRotation();
					//
					// FString Name = BoxComponent->GetName();
					// if (Name == "BoxComponentOne")
					// 	BoxComponent->SetRelativeLocation(FVector(MeshExtent.X, 0, 0));
					// else if (Name == "BoxComponentTwo")
					// 	BoxComponent->SetRelativeLocation(FVector(-MeshExtent.X, 0, 0));
					// else if (Name == "BoxComponentThree")
					// 	BoxComponent->SetRelativeLocation(FVector(0, MeshExtent.Y, 0));
					// else if (Name == "BoxComponentFour")
					// 	BoxComponent->SetRelativeLocation(FVector(0, -MeshExtent.Y, 0));
					// else if (Name == "BoxComponentFive")
					// 	BoxComponent->SetRelativeLocation(FVector(0, 0, MeshExtent.Z));


					//FRotator ActorRot = SpawnedActor->GetActorRotation();
					// FString Name = BoxComponent->GetName();
					// Берём смещение и поворачиваем его в систему координат актёра
					// if (Name == "BoxComponentOne")
					// 	BoxComponent->SetRelativeLocation(ActorRot.RotateVector(FVector(MeshExtent.X, -MeshExtent.Y, 0)));
					// else if (Name == "BoxComponentTwo")
					// 	BoxComponent->SetRelativeLocation(ActorRot.RotateVector(FVector(-MeshExtent.X, MeshExtent.Y, 0)));
					// else if (Name == "BoxComponentThree")
					// 	BoxComponent->SetRelativeLocation(ActorRot.RotateVector(FVector(MeshExtent.X, MeshExtent.Y, 0)));
					// else if (Name == "BoxComponentFour")
					// 	BoxComponent->SetRelativeLocation(ActorRot.RotateVector(FVector(MeshExtent.X, -MeshExtent.Y, 0)));
					// else if (Name == "BoxComponentFive")
					// 	BoxComponent->SetRelativeLocation(ActorRot.RotateVector(FVector(0, 0, MeshExtent.Z)));


					// FRotator ActorRot = SpawnedActor->GetActorRotation();
					// FString Name = BoxComponent->GetName();
					// if (Name == "BoxComponentOne") // вперёд
					// 	BoxComponent->SetRelativeLocation(ActorRot.RotateVector(FVector(MeshExtent.X, 0, 0)));
					// else if (Name == "BoxComponentTwo") // назад
					// 	BoxComponent->SetRelativeLocation(ActorRot.RotateVector(FVector(-MeshExtent.X, 0, 0)));
					// else if (Name == "BoxComponentThree") // вправо
					// 	BoxComponent->SetRelativeLocation(ActorRot.RotateVector(FVector(0, MeshExtent.Y, 0)));
					// else if (Name == "BoxComponentFour") // влево
					// 	BoxComponent->SetRelativeLocation(ActorRot.RotateVector(FVector(0, -MeshExtent.Y, 0)));
					// else if (Name == "BoxComponentFive") // вверх
					// 	BoxComponent->SetRelativeLocation(ActorRot.RotateVector(FVector(0, 0, MeshExtent.Z)));


					FVector Forward = SpawnedActor->GetActorForwardVector(); // локальная ось X
					FVector Right   = SpawnedActor->GetActorRightVector();   // локальная ось Y
					FVector Up      = SpawnedActor->GetActorUpVector();      // локальная ось Z

					FString Name = BoxComponent->GetName();
					if (Name == "BoxComponentOne")
						BoxComponent->SetWorldLocation(SpawnedActor->GetActorLocation() + Forward * MeshExtent.X);
					else if (Name == "BoxComponentTwo")
						BoxComponent->SetWorldLocation(SpawnedActor->GetActorLocation() - Forward * MeshExtent.X);
					else if (Name == "BoxComponentThree")
						BoxComponent->SetWorldLocation(SpawnedActor->GetActorLocation() + Right * MeshExtent.Y);
					else if (Name == "BoxComponentFour")
						BoxComponent->SetWorldLocation(SpawnedActor->GetActorLocation() - Right * MeshExtent.Y);
					else if (Name == "BoxComponentFive")
						BoxComponent->SetWorldLocation(SpawnedActor->GetActorLocation() + Up * MeshExtent.Z);

					BoxComponent->SetHiddenInGame(false);
					BoxComponent->SetVisibility(true);
					BoxComponent->ShapeColor = FColor::Green; // цвет бокса (видно в PIE/Viewport)
					BoxComponent->SetBoxExtent(MeshExtent); // половинные размеры бокса


					
				}
			}
		}

		Cast<APlacingBlockParent>(SpawnedActor)->isPlaced = true;

		SpawnedActor = nullptr;
		bIsBuilding = false;
		isShifting = false;
		hasBlock = false;
		
		
		
	}
}		