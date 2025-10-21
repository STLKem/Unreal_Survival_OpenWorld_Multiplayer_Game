// Fill out your copyright notice in the Description page of Project Settings.


#include "InventoryComponent.h"

#include "Net/UnrealNetwork.h"

// Sets default values for this component's properties
UInventoryComponent::UInventoryComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;
	SetIsReplicatedByDefault(true);

	static ConstructorHelpers::FObjectFinder<UDataTable> DataTableObj(TEXT("DataTable'/Game/main/DataTables/ItemsData.ItemsData'"));
	if (DataTableObj.Succeeded())
	{
		ItemsDataTable = DataTableObj.Object;
	}
	// ...
}

void UInventoryComponent::OnRep_Inventory()
{

	OnInventoryUpdated.Broadcast();
	UE_LOG(LogTemp, Warning, TEXT("BROADCASTED"));

}

void UInventoryComponent::PrintInventory_TEST()
{

	if (Inventory.Num() == 0)
	{
	UE_LOG(LogTemp, Warning, TEXT("Inventory is empty."));
	return;
	}

	for (int32 i = 0; i < Inventory.Num(); ++i)
	{
		const FInventoryItem& Item = Inventory[i];

		if (Item.ItemID != 0)
		{
			UE_LOG(LogTemp, Warning, TEXT("Slot %d: ItemID = %d, Quantity = %d"), i, Item.ItemID, Item.Quantity);
		}
		else
		{
			UE_LOG(LogTemp, Warning, TEXT("Slot %d: Empty"), i);
		}
	}
	
}

// Возвращает, сколько осталось (0 = всё добавлено)
int32 UInventoryComponent::AddToInventory(int32 AddItemID, int32 AddQuantity, int32 ThisInventoryIndex, bool SameInvenotry)
{
	UE_LOG(LogTemp, Warning, TEXT("ADDED"));
    // Возвращаем количество, которое не удалось положить (0 = всё добавлено)
    if (AddQuantity <= 0) return 0;

    if (!ItemsDataTable)
    {
        UE_LOG(LogTemp, Warning, TEXT("ItemsDataTable is null!"));
        return AddQuantity;
    }

    FItemData* ItemData = ItemsDataTable->FindRow<FItemData>(
        FName(*FString::FromInt(AddItemID)),
        TEXT("LookupItem")
    );

    if (!ItemData)
    {
        UE_LOG(LogTemp, Warning, TEXT("Item ID %d not found in DataTable!"), AddItemID);
        return AddQuantity; // ничего не добавлено
    }

    const int32 MaxStack = ItemData->MaxStackQuantity;
    int32 Remaining = AddQuantity;

    // 1) если указан конкретный индекс - сначала пробуем туда (если он не равен IgnoreIndex)
    if (Inventory.IsValidIndex(ThisInventoryIndex))
    {
        FInventoryItem& TargetSlot = Inventory[ThisInventoryIndex];

        if (TargetSlot.ItemID == 0) // пустой слот
        {
            int32 ToAdd = FMath::Min(MaxStack, Remaining);
            TargetSlot.ItemID = AddItemID;
            TargetSlot.Quantity = ToAdd;
            Remaining -= ToAdd;
        }
        else if (TargetSlot.ItemID == AddItemID && TargetSlot.Quantity < MaxStack)
        {
            int32 CanAdd = FMath::Min(MaxStack - TargetSlot.Quantity, Remaining);
            TargetSlot.Quantity += CanAdd;
            Remaining -= CanAdd;
        	
        }
    	if (SameInvenotry) // надо посмотреть чет там как делается
    	{
    		//OnInventoryUpdated.Broadcast();
    		return Remaining;
    	}
        // если слот занят другим предметом — ничего не делаем с этим слотом
    }

    // 2) Добавляем к уже существующим неполным стековым слотам (пропуская ThisInventoryIndex и IgnoreIndex)
    for (int32 i = 0; i < Inventory.Num() && Remaining > 0; ++i)
    {
        if (i == ThisInventoryIndex) continue;

        FInventoryItem& Item = Inventory[i];
        if (Item.ItemID == AddItemID && Item.Quantity < MaxStack)
        {
            int32 CanAdd = FMath::Min(MaxStack - Item.Quantity, Remaining);
            Item.Quantity += CanAdd;
            Remaining -= CanAdd;
        }
    }

    // 3) Если осталось — используем пустые слоты (пропуская индексы ThisInventoryIndex и IgnoreIndex)
    for (int32 i = 0; i < Inventory.Num() && Remaining > 0; ++i)
    {
        if (i == ThisInventoryIndex) continue;

        FInventoryItem& Item = Inventory[i];
        if (Item.ItemID == 0)
        {
            int32 ToAdd = FMath::Min(MaxStack, Remaining);
            Item.ItemID = AddItemID;
            Item.Quantity = ToAdd;
            Remaining -= ToAdd;
        }
    }

    // возвращаем, сколько не влезло
    OnInventoryUpdated.Broadcast();
    return Remaining;
}

void UInventoryComponent::RemoveFromInventoryByInventoryIndex(int32 InventoryIndex, int32 RemoveQuantity, bool bUse, bool bAll)
{

	UE_LOG(LogTemp, Warning, TEXT("REMOVED"));
	if (RemoveQuantity <= 0) return;
	if (!Inventory.IsValidIndex(InventoryIndex)) return;
	if (Inventory[InventoryIndex].ItemID == 0) return;

	int32 Local_ToUseItemID = Inventory[InventoryIndex].ItemID;
	int32 Local_CurrentQuantity = Inventory[InventoryIndex].Quantity;
	int32 Local_ToUseQuantity = 0;
	if (bAll)
	{
		Local_ToUseQuantity = Local_CurrentQuantity ;
		Inventory[InventoryIndex] = FInventoryItem();
	}
	else if (Local_CurrentQuantity >= RemoveQuantity)
	{
		Local_ToUseQuantity = RemoveQuantity;
		Inventory[InventoryIndex].Quantity -= RemoveQuantity;

		if (Inventory[InventoryIndex].Quantity == 0)
		{
			Inventory[InventoryIndex] = FInventoryItem(); // освободить слот
		}
	} // TODO: Сделать нормальный ремув если айтема нету или его не зватает НЕ для рецептов а просто пир удалении
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("Inventory Index %d doesnt have %d RemoveQuantity"), InventoryIndex, RemoveQuantity);
		return;
	}

	if (bUse)
	{
		// TODO: add on consume
	}else
	{
		// TODO: add on drop 
	}
	
	OnInventoryUpdated.Broadcast();
	
}

bool UInventoryComponent::RemoveFromInventorByItemID(int32 ItemID, int32 QuantityToRemove)
{
	if (QuantityToRemove <= 0) return false;

	int32 TotalAvailable = 0;
	TArray<int32> MatchingIndexes;

	// Один цикл вместо двух
	for (int32 i = 0; i < Inventory.Num(); i++)
	{
		if (Inventory[i].ItemID == ItemID)
		{
			TotalAvailable += Inventory[i].Quantity;
			MatchingIndexes.Add(i);
		}
	}

	if (TotalAvailable < QuantityToRemove)
	{
		// Недостаточно ресурсов для удаления
		return false;
	}

	// Сортируем слоты по возрастанию количества
	MatchingIndexes.Sort([&](int32 A, int32 B)
	{
		return Inventory[A].Quantity < Inventory[B].Quantity;
	});

	// Удаляем начиная с самых маленьких стопок
	int32 RemainingToRemove = QuantityToRemove;
	for (int32 Index : MatchingIndexes)
	{
		if (RemainingToRemove <= 0) break;

		FInventoryItem& Slot = Inventory[Index];
		int32 RemoveFromThisSlot = FMath::Min(Slot.Quantity, RemainingToRemove);
		Slot.Quantity -= RemoveFromThisSlot;
		RemainingToRemove -= RemoveFromThisSlot;

		if (Slot.Quantity == 0)
		{
			Slot = FInventoryItem(); // очищаем слот
		}
	}

	OnInventoryUpdated.Broadcast();
	return true;
}



void UInventoryComponent::SwapInventorySlots(UInventoryComponent* OtherInventoryComponent, int32 OtherInventoryIndex, int32 ThisInventoryIndex)
{
	
	Server_SwapInventorySlots(OtherInventoryComponent, OtherInventoryIndex, ThisInventoryIndex);
	
}


// SwapInventorySlots
void UInventoryComponent::Server_SwapInventorySlots_Implementation(UInventoryComponent* OtherInventoryComponent, int32 OtherInventoryIndex, int32 ThisInventoryIndex)
{

	
    if (!OtherInventoryComponent) return;

    // Проверки валидности индексов
    if (!OtherInventoryComponent->Inventory.IsValidIndex(OtherInventoryIndex)) return;
    if (!Inventory.IsValidIndex(ThisInventoryIndex)) return;

    // Если это один и тот же индекс в том же компоненте — ничего не делаем
    if (OtherInventoryComponent == this && OtherInventoryIndex == ThisInventoryIndex) return;

    // Получаем локальные данные
    int32 OtherID = OtherInventoryComponent->Inventory[OtherInventoryIndex].ItemID;
    int32 OtherQty = OtherInventoryComponent->Inventory[OtherInventoryIndex].Quantity;


    int32 ThisID = Inventory[ThisInventoryIndex].ItemID;
    int32 ThisQty = Inventory[ThisInventoryIndex].Quantity;

    // Случай: одинаковые ID -> пытаемся слить стеки (merge)
    if (OtherID != 0 && OtherID == ThisID)
    {
        // Если источник и цель — один и тот же компонент, чтобы избежать добавления в исходный слот,
        // временно очистим источник и передадим IgnoreIndex = OtherInventoryIndex
        if (OtherInventoryComponent == this)
        {
            // Сохраняем количество, очищаем источник
            int32 QuantityToMove = OtherQty;
            Inventory[OtherInventoryIndex] = FInventoryItem(); // временно очистили источник

            // Переносим в целевой слот (ThisInventoryIndex) и в другие слоты в этом же инвентаре,
            // при этом игнорируем (не смотрим на) исходный слот (который уже очищен).
        	
            int32 Remaining = AddToInventory(OtherID, QuantityToMove, ThisInventoryIndex, true);

        	//UE_LOG(LogTemp, Warning, TEXT("REMAINING = %d"), Remaining);
            // Обновляем исходный слот: если что осталось — положим туда остаток
            if (Remaining > 0)
            {
	            // TODO: тут скорее всего эти if и else if не нужны но надо проверить
            	//UE_LOG(LogTemp, Warning, TEXT("REMAINING2 = %d"), Remaining);

            	Inventory[OtherInventoryIndex].ItemID = OtherID;
            	Inventory[OtherInventoryIndex].Quantity = Remaining;
            }
        	// else
            // {
            // 	// UE_LOG(LogTemp, Warning, TEXT("REMAINING3 = %d"), Remaining);
            //     Inventory[OtherInventoryIndex] = FInventoryItem(); // остаётся пустым
            // }
        	
        	// TODO: вверху короче запечатаны баги и если открыть то может перестать работать
        	// так что открывать толлько в особых случаях
        }
        else // разные компоненты
        {
            // Пытаемся добавить в this-инвентарь всю стопку из other
            int32 Remaining = AddToInventory(OtherID, OtherQty, ThisInventoryIndex);

            // в other остаётся Remaining
            if (Remaining > 0)
            {
                OtherInventoryComponent->Inventory[OtherInventoryIndex].ItemID = OtherID;
                OtherInventoryComponent->Inventory[OtherInventoryIndex].Quantity = Remaining;
            }else
            {
                OtherInventoryComponent->Inventory[OtherInventoryIndex] = FInventoryItem();
            }
        	
        }
    	if (GetOwner()->HasAuthority())
    	{
    		UE_LOG(LogTemp, Warning, TEXT("SWAPPED | Host (Server)"));
    		OtherInventoryComponent->OnInventoryUpdated.Broadcast();
    	}
    	else
    	{
    		UE_LOG(LogTemp, Warning, TEXT("SWAPPED | Client"));
    	}
    	
		OnInventoryUpdated.Broadcast();
        return;
    }

    // Случай: разные ID -> простая смена (swap)
    // Если это один и тот же компонент и индексы различаются — простой swap
    if (OtherInventoryComponent == this)
    {
        Swap(Inventory[ThisInventoryIndex], Inventory[OtherInventoryIndex]);
    }
    else
    {
        // копируем
        FInventoryItem Temp = OtherInventoryComponent->Inventory[OtherInventoryIndex];
        OtherInventoryComponent->Inventory[OtherInventoryIndex] = Inventory[ThisInventoryIndex];
        Inventory[ThisInventoryIndex] = Temp;
    }
	if (GetOwner()->HasAuthority())
	{
		UE_LOG(LogTemp, Warning, TEXT("SWAPPED | Host (Server)"));
		OtherInventoryComponent->OnInventoryUpdated.Broadcast();
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("SWAPPED | Client"));
	}
	//OtherInventoryComponent->OnInventoryUpdated.Broadcast();	
	OnInventoryUpdated.Broadcast();
	
}


bool UInventoryComponent::CanCraftItem(int32 CraftItemID, int32 CraftQuantity, const TArray<FRecipeIngredient>& RequiredMaterials)
{
    // 1. Проверяем, что таблица предметов загружена и количество крафта валидно
    if (!ItemsDataTable || CraftQuantity <= 0) return false;

    // 2. Получаем данные о предмете, который хотим скрафтить
    FItemData* CraftItemData = ItemsDataTable->FindRow<FItemData>(
        FName(*FString::FromInt(CraftItemID)),
        TEXT("LookupCraftItem") // контекст для логов
    );

    if (!CraftItemData)
    {
        UE_LOG(LogTemp, Warning, TEXT("Craft item %d not found in DataTable"), CraftItemID);
        return false;
    }

    const int32 MaxStack = CraftItemData->MaxStackQuantity;

    // 3. Делаем копию инвентаря для "симуляции" крафта
    TArray<FInventoryItem> TempInventory = Inventory;

    // 4. Проверяем, хватает ли всех материалов
    for (const FRecipeIngredient& Req : RequiredMaterials)  // <-- тут именно FRecipeIngredient
    {
        int32 MatID = Req.ItemID;     // какой предмет нужен
        int32 MatQty = Req.Quantity;  // сколько нужно

        // Подсчёт общего количества этого материала в инвентаре
        int32 TotalAvailable = 0;
    	TArray<int32> MatchingIndexes;
        for (int32 i = 0; i < TempInventory.Num(); i++)
        {
            if (TempInventory[i].ItemID == MatID)
            {
            	TotalAvailable += TempInventory[i].Quantity;
            	MatchingIndexes.Add(i);
            }
        }
        // Если не хватает — сразу false
        if (TotalAvailable < MatQty)
        {
            return false;
        }
    	
        // Сортируем слоты от меньшего к большему количеству
        MatchingIndexes.Sort([&](int32 A, int32 B)
        {
            return TempInventory[A].Quantity < TempInventory[B].Quantity;
        });

        // Вычитаем материал из временного инвентаря в отсортированном порядке
        int32 RemainingToRemove = MatQty;
        for (int32 Index : MatchingIndexes)
        {
            if (RemainingToRemove <= 0) break;

            int32 RemoveFromThisSlot = FMath::Min(TempInventory[Index].Quantity, RemainingToRemove);
            TempInventory[Index].Quantity -= RemoveFromThisSlot;
            RemainingToRemove -= RemoveFromThisSlot;

            if (TempInventory[Index].Quantity == 0)
            {
                TempInventory[Index] = FInventoryItem(); // очищаем слот
            }
        }
    }

    // 5. Теперь проверяем, влезет ли результат крафта в инвентарь
    int32 Remaining = CraftQuantity;

    // Сначала пытаемся "доложить" в существующие стаки
    for (FInventoryItem& Slot : TempInventory)
    {
        if (Remaining <= 0) break;

        if (Slot.ItemID == CraftItemID && Slot.Quantity < MaxStack)
        {
            int32 CanAdd = FMath::Min(MaxStack - Slot.Quantity, Remaining);
            Slot.Quantity += CanAdd;
            Remaining -= CanAdd;
        }
    }

    // Потом ищем пустые слоты
    for (FInventoryItem& Slot : TempInventory)
    {
        if (Remaining <= 0) break;

        if (Slot.ItemID == 0) // пустой слот
        {
            int32 ToAdd = FMath::Min(MaxStack, Remaining);
            Slot.ItemID = CraftItemID;
            Slot.Quantity = ToAdd;
            Remaining -= ToAdd;
        }
    }

    // 6. Если всё вместилось — крафт возможен
    return Remaining == 0;
}


bool UInventoryComponent::CraftItem(int32 CraftItemID, int32 CraftQuantity, const TArray<FRecipeIngredient>& RequiredMaterials)
{
	
	// 1. Проверка, можно ли крафтить
	if (!CanCraftItem(CraftItemID, CraftQuantity, RequiredMaterials))
	{
		UE_LOG(LogTemp, Warning, TEXT("Cannot craft item %d (not enough resources or no space)."), CraftItemID);
		return false;
	}

	// 2. Удаляем необходимые материалы
	for (const FRecipeIngredient& Req : RequiredMaterials)
	{
		if (!RemoveFromInventorByItemID(Req.ItemID, Req.Quantity))
		{
			// Это не должно произойти, потому что мы проверили через CanCraftItem
			UE_LOG(LogTemp, Error, TEXT("Failed to remove material %d x%d"), Req.ItemID, Req.Quantity);
			return false;
		}
	}

	// 3. Добавляем скрафченный предмет
	int32 Remaining = AddToInventory(CraftItemID, CraftQuantity);

	if (Remaining > 0)
	{
		// Теоретически не должно случиться, т.к. проверяли CanCraftItem
		UE_LOG(LogTemp, Error, TEXT("Crafted item %d didn't fully fit! Remaining = %d"), CraftItemID, Remaining);
		return false;
	}

	UE_LOG(LogTemp, Log, TEXT("Crafted item %d x%d successfully!"), CraftItemID, CraftQuantity);

	OnInventoryUpdated.Broadcast();
	return true;
	
}

void UInventoryComponent::Server_CraftItem_Implementation(int32 CraftItemID, int32 CraftQuantity, const TArray<FRecipeIngredient>& RequiredMaterials)
{

	CraftItem(CraftItemID, CraftQuantity, RequiredMaterials);
	
}


// Called when the game starts
void UInventoryComponent::BeginPlay()
{
	Super::BeginPlay();

	Inventory.SetNum(10);
	// ...
	
}


// Called every frame
void UInventoryComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

void UInventoryComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(UInventoryComponent, Inventory);
}

