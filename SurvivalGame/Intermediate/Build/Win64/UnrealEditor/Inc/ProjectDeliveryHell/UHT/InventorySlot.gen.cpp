// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyOwn_h_Files/InventorySlot.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeInventorySlot() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
PROJECTDELIVERYHELL_API UScriptStruct* Z_Construct_UScriptStruct_FInventoryItem();
PROJECTDELIVERYHELL_API UScriptStruct* Z_Construct_UScriptStruct_FItemData();
UPackage* Z_Construct_UPackage__Script_ProjectDeliveryHell();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FItemData *********************************************************
static_assert(std::is_polymorphic<FItemData>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FItemData cannot be polymorphic unless super FTableRowBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FItemData;
class UScriptStruct* FItemData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FItemData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FItemData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FItemData, (UObject*)Z_Construct_UPackage__Script_ProjectDeliveryHell(), TEXT("ItemData"));
	}
	return Z_Registration_Info_UScriptStruct_FItemData.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FItemData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "MyOwn_h_Files/InventorySlot.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemID_MetaData[] = {
		{ "Category", "ItemData" },
		{ "ModuleRelativePath", "MyOwn_h_Files/InventorySlot.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "Category", "ItemData" },
		{ "ModuleRelativePath", "MyOwn_h_Files/InventorySlot.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Icon_MetaData[] = {
		{ "Category", "ItemData" },
		{ "ModuleRelativePath", "MyOwn_h_Files/InventorySlot.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[] = {
		{ "Category", "ItemData" },
		{ "ModuleRelativePath", "MyOwn_h_Files/InventorySlot.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxStackQuantity_MetaData[] = {
		{ "Category", "ItemData" },
		{ "ModuleRelativePath", "MyOwn_h_Files/InventorySlot.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IsUsable_MetaData[] = {
		{ "Category", "ItemData" },
		{ "ModuleRelativePath", "MyOwn_h_Files/InventorySlot.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Healing_MetaData[] = {
		{ "Category", "ItemData" },
		{ "ModuleRelativePath", "MyOwn_h_Files/InventorySlot.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Hunger_MetaData[] = {
		{ "Category", "ItemData" },
		{ "ModuleRelativePath", "MyOwn_h_Files/InventorySlot.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Water_MetaData[] = {
		{ "Category", "ItemData" },
		{ "ModuleRelativePath", "MyOwn_h_Files/InventorySlot.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Temperature_MetaData[] = {
		{ "Category", "ItemData" },
		{ "ModuleRelativePath", "MyOwn_h_Files/InventorySlot.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IsEquipment_MetaData[] = {
		{ "Category", "ItemData" },
		{ "ModuleRelativePath", "MyOwn_h_Files/InventorySlot.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IsHelmet_MetaData[] = {
		{ "Category", "ItemData" },
		{ "ModuleRelativePath", "MyOwn_h_Files/InventorySlot.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IsChest_MetaData[] = {
		{ "Category", "ItemData" },
		{ "ModuleRelativePath", "MyOwn_h_Files/InventorySlot.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IsPants_MetaData[] = {
		{ "Category", "ItemData" },
		{ "ModuleRelativePath", "MyOwn_h_Files/InventorySlot.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IsWeapon_MetaData[] = {
		{ "Category", "ItemData" },
		{ "ModuleRelativePath", "MyOwn_h_Files/InventorySlot.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ArmorValue_MetaData[] = {
		{ "Category", "ItemData" },
		{ "ModuleRelativePath", "MyOwn_h_Files/InventorySlot.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ItemID;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Icon;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Description;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxStackQuantity;
	static void NewProp_IsUsable_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsUsable;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Healing;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Hunger;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Water;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Temperature;
	static void NewProp_IsEquipment_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsEquipment;
	static void NewProp_IsHelmet_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsHelmet;
	static void NewProp_IsChest_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsChest;
	static void NewProp_IsPants_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsPants;
	static void NewProp_IsWeapon_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsWeapon;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ArmorValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FItemData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FItemData_Statics::NewProp_ItemID = { "ItemID", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FItemData, ItemID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemID_MetaData), NewProp_ItemID_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FItemData_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FItemData, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FItemData_Statics::NewProp_Icon = { "Icon", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FItemData, Icon), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Icon_MetaData), NewProp_Icon_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FItemData_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FItemData, Description), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Description_MetaData), NewProp_Description_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FItemData_Statics::NewProp_MaxStackQuantity = { "MaxStackQuantity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FItemData, MaxStackQuantity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxStackQuantity_MetaData), NewProp_MaxStackQuantity_MetaData) };
void Z_Construct_UScriptStruct_FItemData_Statics::NewProp_IsUsable_SetBit(void* Obj)
{
	((FItemData*)Obj)->IsUsable = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FItemData_Statics::NewProp_IsUsable = { "IsUsable", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FItemData), &Z_Construct_UScriptStruct_FItemData_Statics::NewProp_IsUsable_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IsUsable_MetaData), NewProp_IsUsable_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FItemData_Statics::NewProp_Healing = { "Healing", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FItemData, Healing), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Healing_MetaData), NewProp_Healing_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FItemData_Statics::NewProp_Hunger = { "Hunger", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FItemData, Hunger), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Hunger_MetaData), NewProp_Hunger_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FItemData_Statics::NewProp_Water = { "Water", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FItemData, Water), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Water_MetaData), NewProp_Water_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FItemData_Statics::NewProp_Temperature = { "Temperature", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FItemData, Temperature), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Temperature_MetaData), NewProp_Temperature_MetaData) };
void Z_Construct_UScriptStruct_FItemData_Statics::NewProp_IsEquipment_SetBit(void* Obj)
{
	((FItemData*)Obj)->IsEquipment = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FItemData_Statics::NewProp_IsEquipment = { "IsEquipment", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FItemData), &Z_Construct_UScriptStruct_FItemData_Statics::NewProp_IsEquipment_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IsEquipment_MetaData), NewProp_IsEquipment_MetaData) };
void Z_Construct_UScriptStruct_FItemData_Statics::NewProp_IsHelmet_SetBit(void* Obj)
{
	((FItemData*)Obj)->IsHelmet = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FItemData_Statics::NewProp_IsHelmet = { "IsHelmet", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FItemData), &Z_Construct_UScriptStruct_FItemData_Statics::NewProp_IsHelmet_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IsHelmet_MetaData), NewProp_IsHelmet_MetaData) };
void Z_Construct_UScriptStruct_FItemData_Statics::NewProp_IsChest_SetBit(void* Obj)
{
	((FItemData*)Obj)->IsChest = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FItemData_Statics::NewProp_IsChest = { "IsChest", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FItemData), &Z_Construct_UScriptStruct_FItemData_Statics::NewProp_IsChest_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IsChest_MetaData), NewProp_IsChest_MetaData) };
void Z_Construct_UScriptStruct_FItemData_Statics::NewProp_IsPants_SetBit(void* Obj)
{
	((FItemData*)Obj)->IsPants = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FItemData_Statics::NewProp_IsPants = { "IsPants", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FItemData), &Z_Construct_UScriptStruct_FItemData_Statics::NewProp_IsPants_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IsPants_MetaData), NewProp_IsPants_MetaData) };
void Z_Construct_UScriptStruct_FItemData_Statics::NewProp_IsWeapon_SetBit(void* Obj)
{
	((FItemData*)Obj)->IsWeapon = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FItemData_Statics::NewProp_IsWeapon = { "IsWeapon", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FItemData), &Z_Construct_UScriptStruct_FItemData_Statics::NewProp_IsWeapon_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IsWeapon_MetaData), NewProp_IsWeapon_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FItemData_Statics::NewProp_ArmorValue = { "ArmorValue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FItemData, ArmorValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ArmorValue_MetaData), NewProp_ArmorValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FItemData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemData_Statics::NewProp_ItemID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemData_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemData_Statics::NewProp_Icon,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemData_Statics::NewProp_Description,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemData_Statics::NewProp_MaxStackQuantity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemData_Statics::NewProp_IsUsable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemData_Statics::NewProp_Healing,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemData_Statics::NewProp_Hunger,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemData_Statics::NewProp_Water,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemData_Statics::NewProp_Temperature,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemData_Statics::NewProp_IsEquipment,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemData_Statics::NewProp_IsHelmet,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemData_Statics::NewProp_IsChest,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemData_Statics::NewProp_IsPants,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemData_Statics::NewProp_IsWeapon,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemData_Statics::NewProp_ArmorValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FItemData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectDeliveryHell,
	Z_Construct_UScriptStruct_FTableRowBase,
	&NewStructOps,
	"ItemData",
	Z_Construct_UScriptStruct_FItemData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemData_Statics::PropPointers),
	sizeof(FItemData),
	alignof(FItemData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FItemData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FItemData()
{
	if (!Z_Registration_Info_UScriptStruct_FItemData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FItemData.InnerSingleton, Z_Construct_UScriptStruct_FItemData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FItemData.InnerSingleton;
}
// ********** End ScriptStruct FItemData ***********************************************************

// ********** Begin ScriptStruct FInventoryItem ****************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FInventoryItem;
class UScriptStruct* FInventoryItem::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FInventoryItem.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FInventoryItem.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInventoryItem, (UObject*)Z_Construct_UPackage__Script_ProjectDeliveryHell(), TEXT("InventoryItem"));
	}
	return Z_Registration_Info_UScriptStruct_FInventoryItem.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FInventoryItem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "MyOwn_h_Files/InventorySlot.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemID_MetaData[] = {
		{ "Category", "InventoryItem" },
		{ "ModuleRelativePath", "MyOwn_h_Files/InventorySlot.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Quantity_MetaData[] = {
		{ "Category", "InventoryItem" },
		{ "ModuleRelativePath", "MyOwn_h_Files/InventorySlot.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ItemID;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Quantity;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInventoryItem>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FInventoryItem_Statics::NewProp_ItemID = { "ItemID", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInventoryItem, ItemID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemID_MetaData), NewProp_ItemID_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FInventoryItem_Statics::NewProp_Quantity = { "Quantity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInventoryItem, Quantity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Quantity_MetaData), NewProp_Quantity_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInventoryItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryItem_Statics::NewProp_ItemID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryItem_Statics::NewProp_Quantity,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInventoryItem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInventoryItem_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectDeliveryHell,
	nullptr,
	&NewStructOps,
	"InventoryItem",
	Z_Construct_UScriptStruct_FInventoryItem_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInventoryItem_Statics::PropPointers),
	sizeof(FInventoryItem),
	alignof(FInventoryItem),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInventoryItem_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FInventoryItem_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FInventoryItem()
{
	if (!Z_Registration_Info_UScriptStruct_FInventoryItem.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FInventoryItem.InnerSingleton, Z_Construct_UScriptStruct_FInventoryItem_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FInventoryItem.InnerSingleton;
}
// ********** End ScriptStruct FInventoryItem ******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Source_ProjectDeliveryHell_MyOwn_h_Files_InventorySlot_h__Script_ProjectDeliveryHell_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FItemData::StaticStruct, Z_Construct_UScriptStruct_FItemData_Statics::NewStructOps, TEXT("ItemData"), &Z_Registration_Info_UScriptStruct_FItemData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FItemData), 1940575614U) },
		{ FInventoryItem::StaticStruct, Z_Construct_UScriptStruct_FInventoryItem_Statics::NewStructOps, TEXT("InventoryItem"), &Z_Registration_Info_UScriptStruct_FInventoryItem, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInventoryItem), 2029437681U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Source_ProjectDeliveryHell_MyOwn_h_Files_InventorySlot_h__Script_ProjectDeliveryHell_1391833858(TEXT("/Script/ProjectDeliveryHell"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Source_ProjectDeliveryHell_MyOwn_h_Files_InventorySlot_h__Script_ProjectDeliveryHell_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Source_ProjectDeliveryHell_MyOwn_h_Files_InventorySlot_h__Script_ProjectDeliveryHell_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
