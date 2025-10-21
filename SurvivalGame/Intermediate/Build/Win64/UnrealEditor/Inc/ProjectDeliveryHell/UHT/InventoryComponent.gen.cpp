// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InventoryComponent.h"
#include "MyOwn_h_Files/InventorySlot.h"
#include "MyOwn_h_Files/ItemRecipes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeInventoryComponent() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
PROJECTDELIVERYHELL_API UClass* Z_Construct_UClass_UInventoryComponent();
PROJECTDELIVERYHELL_API UClass* Z_Construct_UClass_UInventoryComponent_NoRegister();
PROJECTDELIVERYHELL_API UFunction* Z_Construct_UDelegateFunction_ProjectDeliveryHell_OnInventoryUpdated__DelegateSignature();
PROJECTDELIVERYHELL_API UScriptStruct* Z_Construct_UScriptStruct_FInventoryItem();
PROJECTDELIVERYHELL_API UScriptStruct* Z_Construct_UScriptStruct_FRecipeIngredient();
UPackage* Z_Construct_UPackage__Script_ProjectDeliveryHell();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FOnInventoryUpdated ***************************************************
struct Z_Construct_UDelegateFunction_ProjectDeliveryHell_OnInventoryUpdated__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InventoryComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_ProjectDeliveryHell_OnInventoryUpdated__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_ProjectDeliveryHell, nullptr, "OnInventoryUpdated__DelegateSignature", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectDeliveryHell_OnInventoryUpdated__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_ProjectDeliveryHell_OnInventoryUpdated__DelegateSignature_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UDelegateFunction_ProjectDeliveryHell_OnInventoryUpdated__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ProjectDeliveryHell_OnInventoryUpdated__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnInventoryUpdated_DelegateWrapper(const FMulticastScriptDelegate& OnInventoryUpdated)
{
	OnInventoryUpdated.ProcessMulticastDelegate<UObject>(NULL);
}
// ********** End Delegate FOnInventoryUpdated *****************************************************

// ********** Begin Class UInventoryComponent Function AddToInventory ******************************
struct Z_Construct_UFunction_UInventoryComponent_AddToInventory_Statics
{
	struct InventoryComponent_eventAddToInventory_Parms
	{
		int32 AddItemID;
		int32 AddQuantity;
		int32 ThisInventoryIndex;
		bool SameInvenotry;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CPP_Default_SameInvenotry", "false" },
		{ "CPP_Default_ThisInventoryIndex", "-1" },
		{ "ModuleRelativePath", "Public/InventoryComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_AddItemID;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AddQuantity;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ThisInventoryIndex;
	static void NewProp_SameInvenotry_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_SameInvenotry;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInventoryComponent_AddToInventory_Statics::NewProp_AddItemID = { "AddItemID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryComponent_eventAddToInventory_Parms, AddItemID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInventoryComponent_AddToInventory_Statics::NewProp_AddQuantity = { "AddQuantity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryComponent_eventAddToInventory_Parms, AddQuantity), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInventoryComponent_AddToInventory_Statics::NewProp_ThisInventoryIndex = { "ThisInventoryIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryComponent_eventAddToInventory_Parms, ThisInventoryIndex), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInventoryComponent_AddToInventory_Statics::NewProp_SameInvenotry_SetBit(void* Obj)
{
	((InventoryComponent_eventAddToInventory_Parms*)Obj)->SameInvenotry = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInventoryComponent_AddToInventory_Statics::NewProp_SameInvenotry = { "SameInvenotry", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InventoryComponent_eventAddToInventory_Parms), &Z_Construct_UFunction_UInventoryComponent_AddToInventory_Statics::NewProp_SameInvenotry_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInventoryComponent_AddToInventory_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryComponent_eventAddToInventory_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryComponent_AddToInventory_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_AddToInventory_Statics::NewProp_AddItemID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_AddToInventory_Statics::NewProp_AddQuantity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_AddToInventory_Statics::NewProp_ThisInventoryIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_AddToInventory_Statics::NewProp_SameInvenotry,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_AddToInventory_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_AddToInventory_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryComponent_AddToInventory_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInventoryComponent, nullptr, "AddToInventory", Z_Construct_UFunction_UInventoryComponent_AddToInventory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_AddToInventory_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInventoryComponent_AddToInventory_Statics::InventoryComponent_eventAddToInventory_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_AddToInventory_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventoryComponent_AddToInventory_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInventoryComponent_AddToInventory_Statics::InventoryComponent_eventAddToInventory_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInventoryComponent_AddToInventory()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryComponent_AddToInventory_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInventoryComponent::execAddToInventory)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_AddItemID);
	P_GET_PROPERTY(FIntProperty,Z_Param_AddQuantity);
	P_GET_PROPERTY(FIntProperty,Z_Param_ThisInventoryIndex);
	P_GET_UBOOL(Z_Param_SameInvenotry);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->AddToInventory(Z_Param_AddItemID,Z_Param_AddQuantity,Z_Param_ThisInventoryIndex,Z_Param_SameInvenotry);
	P_NATIVE_END;
}
// ********** End Class UInventoryComponent Function AddToInventory ********************************

// ********** Begin Class UInventoryComponent Function CanCraftItem ********************************
struct Z_Construct_UFunction_UInventoryComponent_CanCraftItem_Statics
{
	struct InventoryComponent_eventCanCraftItem_Parms
	{
		int32 CraftItemID;
		int32 CraftQuantity;
		TArray<FRecipeIngredient> RequiredMaterials;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InventoryComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RequiredMaterials_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_CraftItemID;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CraftQuantity;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RequiredMaterials_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_RequiredMaterials;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInventoryComponent_CanCraftItem_Statics::NewProp_CraftItemID = { "CraftItemID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryComponent_eventCanCraftItem_Parms, CraftItemID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInventoryComponent_CanCraftItem_Statics::NewProp_CraftQuantity = { "CraftQuantity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryComponent_eventCanCraftItem_Parms, CraftQuantity), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInventoryComponent_CanCraftItem_Statics::NewProp_RequiredMaterials_Inner = { "RequiredMaterials", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FRecipeIngredient, METADATA_PARAMS(0, nullptr) }; // 1058519744
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInventoryComponent_CanCraftItem_Statics::NewProp_RequiredMaterials = { "RequiredMaterials", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryComponent_eventCanCraftItem_Parms, RequiredMaterials), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RequiredMaterials_MetaData), NewProp_RequiredMaterials_MetaData) }; // 1058519744
void Z_Construct_UFunction_UInventoryComponent_CanCraftItem_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InventoryComponent_eventCanCraftItem_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInventoryComponent_CanCraftItem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InventoryComponent_eventCanCraftItem_Parms), &Z_Construct_UFunction_UInventoryComponent_CanCraftItem_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryComponent_CanCraftItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_CanCraftItem_Statics::NewProp_CraftItemID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_CanCraftItem_Statics::NewProp_CraftQuantity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_CanCraftItem_Statics::NewProp_RequiredMaterials_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_CanCraftItem_Statics::NewProp_RequiredMaterials,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_CanCraftItem_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_CanCraftItem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryComponent_CanCraftItem_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInventoryComponent, nullptr, "CanCraftItem", Z_Construct_UFunction_UInventoryComponent_CanCraftItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_CanCraftItem_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInventoryComponent_CanCraftItem_Statics::InventoryComponent_eventCanCraftItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_CanCraftItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventoryComponent_CanCraftItem_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInventoryComponent_CanCraftItem_Statics::InventoryComponent_eventCanCraftItem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInventoryComponent_CanCraftItem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryComponent_CanCraftItem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInventoryComponent::execCanCraftItem)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_CraftItemID);
	P_GET_PROPERTY(FIntProperty,Z_Param_CraftQuantity);
	P_GET_TARRAY_REF(FRecipeIngredient,Z_Param_Out_RequiredMaterials);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CanCraftItem(Z_Param_CraftItemID,Z_Param_CraftQuantity,Z_Param_Out_RequiredMaterials);
	P_NATIVE_END;
}
// ********** End Class UInventoryComponent Function CanCraftItem **********************************

// ********** Begin Class UInventoryComponent Function CraftItem ***********************************
struct Z_Construct_UFunction_UInventoryComponent_CraftItem_Statics
{
	struct InventoryComponent_eventCraftItem_Parms
	{
		int32 CraftItemID;
		int32 CraftQuantity;
		TArray<FRecipeIngredient> RequiredMaterials;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InventoryComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RequiredMaterials_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_CraftItemID;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CraftQuantity;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RequiredMaterials_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_RequiredMaterials;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInventoryComponent_CraftItem_Statics::NewProp_CraftItemID = { "CraftItemID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryComponent_eventCraftItem_Parms, CraftItemID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInventoryComponent_CraftItem_Statics::NewProp_CraftQuantity = { "CraftQuantity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryComponent_eventCraftItem_Parms, CraftQuantity), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInventoryComponent_CraftItem_Statics::NewProp_RequiredMaterials_Inner = { "RequiredMaterials", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FRecipeIngredient, METADATA_PARAMS(0, nullptr) }; // 1058519744
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInventoryComponent_CraftItem_Statics::NewProp_RequiredMaterials = { "RequiredMaterials", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryComponent_eventCraftItem_Parms, RequiredMaterials), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RequiredMaterials_MetaData), NewProp_RequiredMaterials_MetaData) }; // 1058519744
void Z_Construct_UFunction_UInventoryComponent_CraftItem_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InventoryComponent_eventCraftItem_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInventoryComponent_CraftItem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InventoryComponent_eventCraftItem_Parms), &Z_Construct_UFunction_UInventoryComponent_CraftItem_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryComponent_CraftItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_CraftItem_Statics::NewProp_CraftItemID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_CraftItem_Statics::NewProp_CraftQuantity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_CraftItem_Statics::NewProp_RequiredMaterials_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_CraftItem_Statics::NewProp_RequiredMaterials,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_CraftItem_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_CraftItem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryComponent_CraftItem_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInventoryComponent, nullptr, "CraftItem", Z_Construct_UFunction_UInventoryComponent_CraftItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_CraftItem_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInventoryComponent_CraftItem_Statics::InventoryComponent_eventCraftItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_CraftItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventoryComponent_CraftItem_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInventoryComponent_CraftItem_Statics::InventoryComponent_eventCraftItem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInventoryComponent_CraftItem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryComponent_CraftItem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInventoryComponent::execCraftItem)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_CraftItemID);
	P_GET_PROPERTY(FIntProperty,Z_Param_CraftQuantity);
	P_GET_TARRAY_REF(FRecipeIngredient,Z_Param_Out_RequiredMaterials);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CraftItem(Z_Param_CraftItemID,Z_Param_CraftQuantity,Z_Param_Out_RequiredMaterials);
	P_NATIVE_END;
}
// ********** End Class UInventoryComponent Function CraftItem *************************************

// ********** Begin Class UInventoryComponent Function OnRep_Inventory *****************************
struct Z_Construct_UFunction_UInventoryComponent_OnRep_Inventory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InventoryComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryComponent_OnRep_Inventory_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInventoryComponent, nullptr, "OnRep_Inventory", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_OnRep_Inventory_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventoryComponent_OnRep_Inventory_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UInventoryComponent_OnRep_Inventory()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryComponent_OnRep_Inventory_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInventoryComponent::execOnRep_Inventory)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_Inventory();
	P_NATIVE_END;
}
// ********** End Class UInventoryComponent Function OnRep_Inventory *******************************

// ********** Begin Class UInventoryComponent Function PrintInventory_TEST *************************
struct Z_Construct_UFunction_UInventoryComponent_PrintInventory_TEST_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/InventoryComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryComponent_PrintInventory_TEST_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInventoryComponent, nullptr, "PrintInventory_TEST", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_PrintInventory_TEST_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventoryComponent_PrintInventory_TEST_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UInventoryComponent_PrintInventory_TEST()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryComponent_PrintInventory_TEST_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInventoryComponent::execPrintInventory_TEST)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PrintInventory_TEST();
	P_NATIVE_END;
}
// ********** End Class UInventoryComponent Function PrintInventory_TEST ***************************

// ********** Begin Class UInventoryComponent Function RemoveFromInventorByItemID ******************
struct Z_Construct_UFunction_UInventoryComponent_RemoveFromInventorByItemID_Statics
{
	struct InventoryComponent_eventRemoveFromInventorByItemID_Parms
	{
		int32 ItemID;
		int32 QuantityToRemove;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InventoryComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ItemID;
	static const UECodeGen_Private::FIntPropertyParams NewProp_QuantityToRemove;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInventoryComponent_RemoveFromInventorByItemID_Statics::NewProp_ItemID = { "ItemID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryComponent_eventRemoveFromInventorByItemID_Parms, ItemID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInventoryComponent_RemoveFromInventorByItemID_Statics::NewProp_QuantityToRemove = { "QuantityToRemove", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryComponent_eventRemoveFromInventorByItemID_Parms, QuantityToRemove), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInventoryComponent_RemoveFromInventorByItemID_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InventoryComponent_eventRemoveFromInventorByItemID_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInventoryComponent_RemoveFromInventorByItemID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InventoryComponent_eventRemoveFromInventorByItemID_Parms), &Z_Construct_UFunction_UInventoryComponent_RemoveFromInventorByItemID_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryComponent_RemoveFromInventorByItemID_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_RemoveFromInventorByItemID_Statics::NewProp_ItemID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_RemoveFromInventorByItemID_Statics::NewProp_QuantityToRemove,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_RemoveFromInventorByItemID_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_RemoveFromInventorByItemID_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryComponent_RemoveFromInventorByItemID_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInventoryComponent, nullptr, "RemoveFromInventorByItemID", Z_Construct_UFunction_UInventoryComponent_RemoveFromInventorByItemID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_RemoveFromInventorByItemID_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInventoryComponent_RemoveFromInventorByItemID_Statics::InventoryComponent_eventRemoveFromInventorByItemID_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_RemoveFromInventorByItemID_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventoryComponent_RemoveFromInventorByItemID_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInventoryComponent_RemoveFromInventorByItemID_Statics::InventoryComponent_eventRemoveFromInventorByItemID_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInventoryComponent_RemoveFromInventorByItemID()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryComponent_RemoveFromInventorByItemID_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInventoryComponent::execRemoveFromInventorByItemID)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_ItemID);
	P_GET_PROPERTY(FIntProperty,Z_Param_QuantityToRemove);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->RemoveFromInventorByItemID(Z_Param_ItemID,Z_Param_QuantityToRemove);
	P_NATIVE_END;
}
// ********** End Class UInventoryComponent Function RemoveFromInventorByItemID ********************

// ********** Begin Class UInventoryComponent Function RemoveFromInventoryByInventoryIndex *********
struct Z_Construct_UFunction_UInventoryComponent_RemoveFromInventoryByInventoryIndex_Statics
{
	struct InventoryComponent_eventRemoveFromInventoryByInventoryIndex_Parms
	{
		int32 InventoryIndex;
		int32 RemoveQuantity;
		bool bUse;
		bool bAll;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CPP_Default_bAll", "false" },
		{ "CPP_Default_bUse", "false" },
		{ "ModuleRelativePath", "Public/InventoryComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_InventoryIndex;
	static const UECodeGen_Private::FIntPropertyParams NewProp_RemoveQuantity;
	static void NewProp_bUse_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUse;
	static void NewProp_bAll_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAll;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInventoryComponent_RemoveFromInventoryByInventoryIndex_Statics::NewProp_InventoryIndex = { "InventoryIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryComponent_eventRemoveFromInventoryByInventoryIndex_Parms, InventoryIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInventoryComponent_RemoveFromInventoryByInventoryIndex_Statics::NewProp_RemoveQuantity = { "RemoveQuantity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryComponent_eventRemoveFromInventoryByInventoryIndex_Parms, RemoveQuantity), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInventoryComponent_RemoveFromInventoryByInventoryIndex_Statics::NewProp_bUse_SetBit(void* Obj)
{
	((InventoryComponent_eventRemoveFromInventoryByInventoryIndex_Parms*)Obj)->bUse = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInventoryComponent_RemoveFromInventoryByInventoryIndex_Statics::NewProp_bUse = { "bUse", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InventoryComponent_eventRemoveFromInventoryByInventoryIndex_Parms), &Z_Construct_UFunction_UInventoryComponent_RemoveFromInventoryByInventoryIndex_Statics::NewProp_bUse_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInventoryComponent_RemoveFromInventoryByInventoryIndex_Statics::NewProp_bAll_SetBit(void* Obj)
{
	((InventoryComponent_eventRemoveFromInventoryByInventoryIndex_Parms*)Obj)->bAll = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInventoryComponent_RemoveFromInventoryByInventoryIndex_Statics::NewProp_bAll = { "bAll", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InventoryComponent_eventRemoveFromInventoryByInventoryIndex_Parms), &Z_Construct_UFunction_UInventoryComponent_RemoveFromInventoryByInventoryIndex_Statics::NewProp_bAll_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryComponent_RemoveFromInventoryByInventoryIndex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_RemoveFromInventoryByInventoryIndex_Statics::NewProp_InventoryIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_RemoveFromInventoryByInventoryIndex_Statics::NewProp_RemoveQuantity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_RemoveFromInventoryByInventoryIndex_Statics::NewProp_bUse,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_RemoveFromInventoryByInventoryIndex_Statics::NewProp_bAll,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_RemoveFromInventoryByInventoryIndex_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryComponent_RemoveFromInventoryByInventoryIndex_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInventoryComponent, nullptr, "RemoveFromInventoryByInventoryIndex", Z_Construct_UFunction_UInventoryComponent_RemoveFromInventoryByInventoryIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_RemoveFromInventoryByInventoryIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInventoryComponent_RemoveFromInventoryByInventoryIndex_Statics::InventoryComponent_eventRemoveFromInventoryByInventoryIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_RemoveFromInventoryByInventoryIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventoryComponent_RemoveFromInventoryByInventoryIndex_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInventoryComponent_RemoveFromInventoryByInventoryIndex_Statics::InventoryComponent_eventRemoveFromInventoryByInventoryIndex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInventoryComponent_RemoveFromInventoryByInventoryIndex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryComponent_RemoveFromInventoryByInventoryIndex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInventoryComponent::execRemoveFromInventoryByInventoryIndex)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_InventoryIndex);
	P_GET_PROPERTY(FIntProperty,Z_Param_RemoveQuantity);
	P_GET_UBOOL(Z_Param_bUse);
	P_GET_UBOOL(Z_Param_bAll);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemoveFromInventoryByInventoryIndex(Z_Param_InventoryIndex,Z_Param_RemoveQuantity,Z_Param_bUse,Z_Param_bAll);
	P_NATIVE_END;
}
// ********** End Class UInventoryComponent Function RemoveFromInventoryByInventoryIndex ***********

// ********** Begin Class UInventoryComponent Function Server_CraftItem ****************************
struct InventoryComponent_eventServer_CraftItem_Parms
{
	int32 CraftItemID;
	int32 CraftQuantity;
	TArray<FRecipeIngredient> RequiredMaterials;
};
static FName NAME_UInventoryComponent_Server_CraftItem = FName(TEXT("Server_CraftItem"));
void UInventoryComponent::Server_CraftItem(int32 CraftItemID, int32 CraftQuantity, TArray<FRecipeIngredient> const& RequiredMaterials)
{
	InventoryComponent_eventServer_CraftItem_Parms Parms;
	Parms.CraftItemID=CraftItemID;
	Parms.CraftQuantity=CraftQuantity;
	Parms.RequiredMaterials=RequiredMaterials;
	UFunction* Func = FindFunctionChecked(NAME_UInventoryComponent_Server_CraftItem);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UInventoryComponent_Server_CraftItem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InventoryComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RequiredMaterials_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_CraftItemID;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CraftQuantity;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RequiredMaterials_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_RequiredMaterials;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInventoryComponent_Server_CraftItem_Statics::NewProp_CraftItemID = { "CraftItemID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryComponent_eventServer_CraftItem_Parms, CraftItemID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInventoryComponent_Server_CraftItem_Statics::NewProp_CraftQuantity = { "CraftQuantity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryComponent_eventServer_CraftItem_Parms, CraftQuantity), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInventoryComponent_Server_CraftItem_Statics::NewProp_RequiredMaterials_Inner = { "RequiredMaterials", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FRecipeIngredient, METADATA_PARAMS(0, nullptr) }; // 1058519744
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInventoryComponent_Server_CraftItem_Statics::NewProp_RequiredMaterials = { "RequiredMaterials", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryComponent_eventServer_CraftItem_Parms, RequiredMaterials), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RequiredMaterials_MetaData), NewProp_RequiredMaterials_MetaData) }; // 1058519744
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryComponent_Server_CraftItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_Server_CraftItem_Statics::NewProp_CraftItemID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_Server_CraftItem_Statics::NewProp_CraftQuantity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_Server_CraftItem_Statics::NewProp_RequiredMaterials_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_Server_CraftItem_Statics::NewProp_RequiredMaterials,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_Server_CraftItem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryComponent_Server_CraftItem_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInventoryComponent, nullptr, "Server_CraftItem", Z_Construct_UFunction_UInventoryComponent_Server_CraftItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_Server_CraftItem_Statics::PropPointers), sizeof(InventoryComponent_eventServer_CraftItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_Server_CraftItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventoryComponent_Server_CraftItem_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(InventoryComponent_eventServer_CraftItem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInventoryComponent_Server_CraftItem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryComponent_Server_CraftItem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInventoryComponent::execServer_CraftItem)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_CraftItemID);
	P_GET_PROPERTY(FIntProperty,Z_Param_CraftQuantity);
	P_GET_TARRAY(FRecipeIngredient,Z_Param_RequiredMaterials);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Server_CraftItem_Implementation(Z_Param_CraftItemID,Z_Param_CraftQuantity,Z_Param_RequiredMaterials);
	P_NATIVE_END;
}
// ********** End Class UInventoryComponent Function Server_CraftItem ******************************

// ********** Begin Class UInventoryComponent Function Server_SwapInventorySlots *******************
struct InventoryComponent_eventServer_SwapInventorySlots_Parms
{
	UInventoryComponent* OtherInventoryComponent;
	int32 OtherInventoryIndex;
	int32 ThisInventoryIndex;
};
static FName NAME_UInventoryComponent_Server_SwapInventorySlots = FName(TEXT("Server_SwapInventorySlots"));
void UInventoryComponent::Server_SwapInventorySlots(UInventoryComponent* OtherInventoryComponent, int32 OtherInventoryIndex, int32 ThisInventoryIndex)
{
	InventoryComponent_eventServer_SwapInventorySlots_Parms Parms;
	Parms.OtherInventoryComponent=OtherInventoryComponent;
	Parms.OtherInventoryIndex=OtherInventoryIndex;
	Parms.ThisInventoryIndex=ThisInventoryIndex;
	UFunction* Func = FindFunctionChecked(NAME_UInventoryComponent_Server_SwapInventorySlots);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UInventoryComponent_Server_SwapInventorySlots_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InventoryComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherInventoryComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherInventoryComponent;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OtherInventoryIndex;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ThisInventoryIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInventoryComponent_Server_SwapInventorySlots_Statics::NewProp_OtherInventoryComponent = { "OtherInventoryComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryComponent_eventServer_SwapInventorySlots_Parms, OtherInventoryComponent), Z_Construct_UClass_UInventoryComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherInventoryComponent_MetaData), NewProp_OtherInventoryComponent_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInventoryComponent_Server_SwapInventorySlots_Statics::NewProp_OtherInventoryIndex = { "OtherInventoryIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryComponent_eventServer_SwapInventorySlots_Parms, OtherInventoryIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInventoryComponent_Server_SwapInventorySlots_Statics::NewProp_ThisInventoryIndex = { "ThisInventoryIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryComponent_eventServer_SwapInventorySlots_Parms, ThisInventoryIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryComponent_Server_SwapInventorySlots_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_Server_SwapInventorySlots_Statics::NewProp_OtherInventoryComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_Server_SwapInventorySlots_Statics::NewProp_OtherInventoryIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_Server_SwapInventorySlots_Statics::NewProp_ThisInventoryIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_Server_SwapInventorySlots_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryComponent_Server_SwapInventorySlots_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInventoryComponent, nullptr, "Server_SwapInventorySlots", Z_Construct_UFunction_UInventoryComponent_Server_SwapInventorySlots_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_Server_SwapInventorySlots_Statics::PropPointers), sizeof(InventoryComponent_eventServer_SwapInventorySlots_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_Server_SwapInventorySlots_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventoryComponent_Server_SwapInventorySlots_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(InventoryComponent_eventServer_SwapInventorySlots_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInventoryComponent_Server_SwapInventorySlots()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryComponent_Server_SwapInventorySlots_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInventoryComponent::execServer_SwapInventorySlots)
{
	P_GET_OBJECT(UInventoryComponent,Z_Param_OtherInventoryComponent);
	P_GET_PROPERTY(FIntProperty,Z_Param_OtherInventoryIndex);
	P_GET_PROPERTY(FIntProperty,Z_Param_ThisInventoryIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Server_SwapInventorySlots_Implementation(Z_Param_OtherInventoryComponent,Z_Param_OtherInventoryIndex,Z_Param_ThisInventoryIndex);
	P_NATIVE_END;
}
// ********** End Class UInventoryComponent Function Server_SwapInventorySlots *********************

// ********** Begin Class UInventoryComponent Function SwapInventorySlots **************************
struct Z_Construct_UFunction_UInventoryComponent_SwapInventorySlots_Statics
{
	struct InventoryComponent_eventSwapInventorySlots_Parms
	{
		UInventoryComponent* OtherInventoryComponent;
		int32 OtherInventoryIndex;
		int32 ThisInventoryIndex;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InventoryComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherInventoryComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherInventoryComponent;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OtherInventoryIndex;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ThisInventoryIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInventoryComponent_SwapInventorySlots_Statics::NewProp_OtherInventoryComponent = { "OtherInventoryComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryComponent_eventSwapInventorySlots_Parms, OtherInventoryComponent), Z_Construct_UClass_UInventoryComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherInventoryComponent_MetaData), NewProp_OtherInventoryComponent_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInventoryComponent_SwapInventorySlots_Statics::NewProp_OtherInventoryIndex = { "OtherInventoryIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryComponent_eventSwapInventorySlots_Parms, OtherInventoryIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInventoryComponent_SwapInventorySlots_Statics::NewProp_ThisInventoryIndex = { "ThisInventoryIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryComponent_eventSwapInventorySlots_Parms, ThisInventoryIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryComponent_SwapInventorySlots_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_SwapInventorySlots_Statics::NewProp_OtherInventoryComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_SwapInventorySlots_Statics::NewProp_OtherInventoryIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_SwapInventorySlots_Statics::NewProp_ThisInventoryIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_SwapInventorySlots_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryComponent_SwapInventorySlots_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInventoryComponent, nullptr, "SwapInventorySlots", Z_Construct_UFunction_UInventoryComponent_SwapInventorySlots_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_SwapInventorySlots_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInventoryComponent_SwapInventorySlots_Statics::InventoryComponent_eventSwapInventorySlots_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_SwapInventorySlots_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventoryComponent_SwapInventorySlots_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInventoryComponent_SwapInventorySlots_Statics::InventoryComponent_eventSwapInventorySlots_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInventoryComponent_SwapInventorySlots()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryComponent_SwapInventorySlots_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInventoryComponent::execSwapInventorySlots)
{
	P_GET_OBJECT(UInventoryComponent,Z_Param_OtherInventoryComponent);
	P_GET_PROPERTY(FIntProperty,Z_Param_OtherInventoryIndex);
	P_GET_PROPERTY(FIntProperty,Z_Param_ThisInventoryIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SwapInventorySlots(Z_Param_OtherInventoryComponent,Z_Param_OtherInventoryIndex,Z_Param_ThisInventoryIndex);
	P_NATIVE_END;
}
// ********** End Class UInventoryComponent Function SwapInventorySlots ****************************

// ********** Begin Class UInventoryComponent ******************************************************
void UInventoryComponent::StaticRegisterNativesUInventoryComponent()
{
	UClass* Class = UInventoryComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddToInventory", &UInventoryComponent::execAddToInventory },
		{ "CanCraftItem", &UInventoryComponent::execCanCraftItem },
		{ "CraftItem", &UInventoryComponent::execCraftItem },
		{ "OnRep_Inventory", &UInventoryComponent::execOnRep_Inventory },
		{ "PrintInventory_TEST", &UInventoryComponent::execPrintInventory_TEST },
		{ "RemoveFromInventorByItemID", &UInventoryComponent::execRemoveFromInventorByItemID },
		{ "RemoveFromInventoryByInventoryIndex", &UInventoryComponent::execRemoveFromInventoryByInventoryIndex },
		{ "Server_CraftItem", &UInventoryComponent::execServer_CraftItem },
		{ "Server_SwapInventorySlots", &UInventoryComponent::execServer_SwapInventorySlots },
		{ "SwapInventorySlots", &UInventoryComponent::execSwapInventorySlots },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UInventoryComponent;
UClass* UInventoryComponent::GetPrivateStaticClass()
{
	using TClass = UInventoryComponent;
	if (!Z_Registration_Info_UClass_UInventoryComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("InventoryComponent"),
			Z_Registration_Info_UClass_UInventoryComponent.InnerSingleton,
			StaticRegisterNativesUInventoryComponent,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_UInventoryComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_UInventoryComponent_NoRegister()
{
	return UInventoryComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UInventoryComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "InventoryComponent.h" },
		{ "ModuleRelativePath", "Public/InventoryComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnInventoryUpdated_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/InventoryComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InventorySize_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/InventoryComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Inventory_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/InventoryComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemsDataTable_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/InventoryComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnInventoryUpdated;
	static const UECodeGen_Private::FIntPropertyParams NewProp_InventorySize;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Inventory_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Inventory;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ItemsDataTable;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UInventoryComponent_AddToInventory, "AddToInventory" }, // 713618321
		{ &Z_Construct_UFunction_UInventoryComponent_CanCraftItem, "CanCraftItem" }, // 9688204
		{ &Z_Construct_UFunction_UInventoryComponent_CraftItem, "CraftItem" }, // 2471808748
		{ &Z_Construct_UFunction_UInventoryComponent_OnRep_Inventory, "OnRep_Inventory" }, // 3424762532
		{ &Z_Construct_UFunction_UInventoryComponent_PrintInventory_TEST, "PrintInventory_TEST" }, // 227350712
		{ &Z_Construct_UFunction_UInventoryComponent_RemoveFromInventorByItemID, "RemoveFromInventorByItemID" }, // 4099078324
		{ &Z_Construct_UFunction_UInventoryComponent_RemoveFromInventoryByInventoryIndex, "RemoveFromInventoryByInventoryIndex" }, // 3885153673
		{ &Z_Construct_UFunction_UInventoryComponent_Server_CraftItem, "Server_CraftItem" }, // 2781791882
		{ &Z_Construct_UFunction_UInventoryComponent_Server_SwapInventorySlots, "Server_SwapInventorySlots" }, // 1269305145
		{ &Z_Construct_UFunction_UInventoryComponent_SwapInventorySlots, "SwapInventorySlots" }, // 1854751965
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInventoryComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UInventoryComponent_Statics::NewProp_OnInventoryUpdated = { "OnInventoryUpdated", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInventoryComponent, OnInventoryUpdated), Z_Construct_UDelegateFunction_ProjectDeliveryHell_OnInventoryUpdated__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnInventoryUpdated_MetaData), NewProp_OnInventoryUpdated_MetaData) }; // 1605232813
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UInventoryComponent_Statics::NewProp_InventorySize = { "InventorySize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInventoryComponent, InventorySize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InventorySize_MetaData), NewProp_InventorySize_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInventoryComponent_Statics::NewProp_Inventory_Inner = { "Inventory", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FInventoryItem, METADATA_PARAMS(0, nullptr) }; // 2029437681
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UInventoryComponent_Statics::NewProp_Inventory = { "Inventory", "OnRep_Inventory", (EPropertyFlags)0x0010000100000025, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInventoryComponent, Inventory), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Inventory_MetaData), NewProp_Inventory_MetaData) }; // 2029437681
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInventoryComponent_Statics::NewProp_ItemsDataTable = { "ItemsDataTable", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInventoryComponent, ItemsDataTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemsDataTable_MetaData), NewProp_ItemsDataTable_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInventoryComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryComponent_Statics::NewProp_OnInventoryUpdated,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryComponent_Statics::NewProp_InventorySize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryComponent_Statics::NewProp_Inventory_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryComponent_Statics::NewProp_Inventory,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryComponent_Statics::NewProp_ItemsDataTable,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UInventoryComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectDeliveryHell,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInventoryComponent_Statics::ClassParams = {
	&UInventoryComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UInventoryComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UInventoryComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInventoryComponent()
{
	if (!Z_Registration_Info_UClass_UInventoryComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInventoryComponent.OuterSingleton, Z_Construct_UClass_UInventoryComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInventoryComponent.OuterSingleton;
}
#if VALIDATE_CLASS_REPS
void UInventoryComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static FName Name_Inventory(TEXT("Inventory"));
	const bool bIsValid = true
		&& Name_Inventory == ClassReps[(int32)ENetFields_Private::Inventory].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UInventoryComponent"));
}
#endif
DEFINE_VTABLE_PTR_HELPER_CTOR(UInventoryComponent);
UInventoryComponent::~UInventoryComponent() {}
// ********** End Class UInventoryComponent ********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Source_ProjectDeliveryHell_Public_InventoryComponent_h__Script_ProjectDeliveryHell_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInventoryComponent, UInventoryComponent::StaticClass, TEXT("UInventoryComponent"), &Z_Registration_Info_UClass_UInventoryComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInventoryComponent), 2149406490U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Source_ProjectDeliveryHell_Public_InventoryComponent_h__Script_ProjectDeliveryHell_2080274661(TEXT("/Script/ProjectDeliveryHell"),
	Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Source_ProjectDeliveryHell_Public_InventoryComponent_h__Script_ProjectDeliveryHell_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Source_ProjectDeliveryHell_Public_InventoryComponent_h__Script_ProjectDeliveryHell_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
