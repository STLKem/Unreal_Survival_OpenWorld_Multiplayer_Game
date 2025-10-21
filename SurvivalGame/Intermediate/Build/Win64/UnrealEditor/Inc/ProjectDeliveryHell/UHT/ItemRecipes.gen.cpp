// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyOwn_h_Files/ItemRecipes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeItemRecipes() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
PROJECTDELIVERYHELL_API UScriptStruct* Z_Construct_UScriptStruct_FCraftingRecipe();
PROJECTDELIVERYHELL_API UScriptStruct* Z_Construct_UScriptStruct_FRecipeIngredient();
UPackage* Z_Construct_UPackage__Script_ProjectDeliveryHell();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FRecipeIngredient *************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FRecipeIngredient;
class UScriptStruct* FRecipeIngredient::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FRecipeIngredient.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FRecipeIngredient.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRecipeIngredient, (UObject*)Z_Construct_UPackage__Script_ProjectDeliveryHell(), TEXT("RecipeIngredient"));
	}
	return Z_Registration_Info_UScriptStruct_FRecipeIngredient.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FRecipeIngredient_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "MyOwn_h_Files/ItemRecipes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemID_MetaData[] = {
		{ "Category", "RecipeIngredient" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ID \xd0\xbf\xd1\x80\xd0\xb5\xd0\xb4\xd0\xbc\xd0\xb5\xd1\x82\xd0\xb0 (\xd0\xbc\xd0\xbe\xd0\xb6\xd0\xbd\xd0\xbe FName, \xd0\xb5\xd1\x81\xd0\xbb\xd0\xb8 \xd1\x82\xd1\x8b \xd1\x85\xd1\x80\xd0\xb0\xd0\xbd\xd0\xb8\xd1\x88\xd1\x8c \xd0\xbf\xd1\x80\xd0\xb5\xd0\xb4\xd0\xbc\xd0\xb5\xd1\x82\xd1\x8b \xd0\xb2 DataTable)\n" },
#endif
		{ "ModuleRelativePath", "MyOwn_h_Files/ItemRecipes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "ID \xd0\xbf\xd1\x80\xd0\xb5\xd0\xb4\xd0\xbc\xd0\xb5\xd1\x82\xd0\xb0 (\xd0\xbc\xd0\xbe\xd0\xb6\xd0\xbd\xd0\xbe FName, \xd0\xb5\xd1\x81\xd0\xbb\xd0\xb8 \xd1\x82\xd1\x8b \xd1\x85\xd1\x80\xd0\xb0\xd0\xbd\xd0\xb8\xd1\x88\xd1\x8c \xd0\xbf\xd1\x80\xd0\xb5\xd0\xb4\xd0\xbc\xd0\xb5\xd1\x82\xd1\x8b \xd0\xb2 DataTable)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Quantity_MetaData[] = {
		{ "Category", "RecipeIngredient" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xd0\xa1\xd0\xba\xd0\xbe\xd0\xbb\xd1\x8c\xd0\xba\xd0\xbe \xd0\xbd\xd1\x83\xd0\xb6\xd0\xbd\xd0\xbe\n" },
#endif
		{ "ModuleRelativePath", "MyOwn_h_Files/ItemRecipes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xd0\xa1\xd0\xba\xd0\xbe\xd0\xbb\xd1\x8c\xd0\xba\xd0\xbe \xd0\xbd\xd1\x83\xd0\xb6\xd0\xbd\xd0\xbe" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ItemID;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Quantity;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRecipeIngredient>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRecipeIngredient_Statics::NewProp_ItemID = { "ItemID", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRecipeIngredient, ItemID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemID_MetaData), NewProp_ItemID_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRecipeIngredient_Statics::NewProp_Quantity = { "Quantity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRecipeIngredient, Quantity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Quantity_MetaData), NewProp_Quantity_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRecipeIngredient_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRecipeIngredient_Statics::NewProp_ItemID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRecipeIngredient_Statics::NewProp_Quantity,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRecipeIngredient_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRecipeIngredient_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectDeliveryHell,
	nullptr,
	&NewStructOps,
	"RecipeIngredient",
	Z_Construct_UScriptStruct_FRecipeIngredient_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRecipeIngredient_Statics::PropPointers),
	sizeof(FRecipeIngredient),
	alignof(FRecipeIngredient),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRecipeIngredient_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRecipeIngredient_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRecipeIngredient()
{
	if (!Z_Registration_Info_UScriptStruct_FRecipeIngredient.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FRecipeIngredient.InnerSingleton, Z_Construct_UScriptStruct_FRecipeIngredient_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FRecipeIngredient.InnerSingleton;
}
// ********** End ScriptStruct FRecipeIngredient ***************************************************

// ********** Begin ScriptStruct FCraftingRecipe ***************************************************
static_assert(std::is_polymorphic<FCraftingRecipe>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FCraftingRecipe cannot be polymorphic unless super FTableRowBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FCraftingRecipe;
class UScriptStruct* FCraftingRecipe::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FCraftingRecipe.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FCraftingRecipe.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCraftingRecipe, (UObject*)Z_Construct_UPackage__Script_ProjectDeliveryHell(), TEXT("CraftingRecipe"));
	}
	return Z_Registration_Info_UScriptStruct_FCraftingRecipe.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FCraftingRecipe_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "MyOwn_h_Files/ItemRecipes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ResultItemID_MetaData[] = {
		{ "Category", "CraftingRecipe" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xd0\xa7\xd1\x82\xd0\xbe \xd0\xbf\xd0\xbe\xd0\xbb\xd1\x83\xd1\x87\xd0\xb8\xd1\x82\xd1\x81\xd1\x8f \xd0\xb2 \xd0\xb8\xd1\x82\xd0\xbe\xd0\xb3\xd0\xb5\n" },
#endif
		{ "ModuleRelativePath", "MyOwn_h_Files/ItemRecipes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xd0\xa7\xd1\x82\xd0\xbe \xd0\xbf\xd0\xbe\xd0\xbb\xd1\x83\xd1\x87\xd0\xb8\xd1\x82\xd1\x81\xd1\x8f \xd0\xb2 \xd0\xb8\xd1\x82\xd0\xbe\xd0\xb3\xd0\xb5" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ResultQuantity_MetaData[] = {
		{ "Category", "CraftingRecipe" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xd0\xa1\xd0\xba\xd0\xbe\xd0\xbb\xd1\x8c\xd0\xba\xd0\xbe \xd1\x88\xd1\x82\xd1\x83\xd0\xba \xd0\xbf\xd0\xbe\xd0\xbb\xd1\x83\xd1\x87\xd0\xb8\xd1\x82\xd1\x81\xd1\x8f (\xd0\xbd\xd0\xb0\xd0\xbf\xd1\x80\xd0\xb8\xd0\xbc\xd0\xb5\xd1\x80, 1 \xd0\xbc\xd0\xb5\xd1\x87 \xd0\xb8\xd0\xbb\xd0\xb8 10 \xd1\x81\xd1\x82\xd1\x80\xd0\xb5\xd0\xbb)\n" },
#endif
		{ "ModuleRelativePath", "MyOwn_h_Files/ItemRecipes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xd0\xa1\xd0\xba\xd0\xbe\xd0\xbb\xd1\x8c\xd0\xba\xd0\xbe \xd1\x88\xd1\x82\xd1\x83\xd0\xba \xd0\xbf\xd0\xbe\xd0\xbb\xd1\x83\xd1\x87\xd0\xb8\xd1\x82\xd1\x81\xd1\x8f (\xd0\xbd\xd0\xb0\xd0\xbf\xd1\x80\xd0\xb8\xd0\xbc\xd0\xb5\xd1\x80, 1 \xd0\xbc\xd0\xb5\xd1\x87 \xd0\xb8\xd0\xbb\xd0\xb8 10 \xd1\x81\xd1\x82\xd1\x80\xd0\xb5\xd0\xbb)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Ingredients_MetaData[] = {
		{ "Category", "CraftingRecipe" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xd0\x98\xd0\xbd\xd0\xb3\xd1\x80\xd0\xb5\xd0\xb4\xd0\xb8\xd0\xb5\xd0\xbd\xd1\x82\xd1\x8b\n" },
#endif
		{ "ModuleRelativePath", "MyOwn_h_Files/ItemRecipes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xd0\x98\xd0\xbd\xd0\xb3\xd1\x80\xd0\xb5\xd0\xb4\xd0\xb8\xd0\xb5\xd0\xbd\xd1\x82\xd1\x8b" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_ResultItemID;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ResultQuantity;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Ingredients_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Ingredients;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCraftingRecipe>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCraftingRecipe_Statics::NewProp_ResultItemID = { "ResultItemID", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCraftingRecipe, ResultItemID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ResultItemID_MetaData), NewProp_ResultItemID_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCraftingRecipe_Statics::NewProp_ResultQuantity = { "ResultQuantity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCraftingRecipe, ResultQuantity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ResultQuantity_MetaData), NewProp_ResultQuantity_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCraftingRecipe_Statics::NewProp_Ingredients_Inner = { "Ingredients", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FRecipeIngredient, METADATA_PARAMS(0, nullptr) }; // 1058519744
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCraftingRecipe_Statics::NewProp_Ingredients = { "Ingredients", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCraftingRecipe, Ingredients), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Ingredients_MetaData), NewProp_Ingredients_MetaData) }; // 1058519744
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCraftingRecipe_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCraftingRecipe_Statics::NewProp_ResultItemID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCraftingRecipe_Statics::NewProp_ResultQuantity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCraftingRecipe_Statics::NewProp_Ingredients_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCraftingRecipe_Statics::NewProp_Ingredients,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCraftingRecipe_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCraftingRecipe_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectDeliveryHell,
	Z_Construct_UScriptStruct_FTableRowBase,
	&NewStructOps,
	"CraftingRecipe",
	Z_Construct_UScriptStruct_FCraftingRecipe_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCraftingRecipe_Statics::PropPointers),
	sizeof(FCraftingRecipe),
	alignof(FCraftingRecipe),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCraftingRecipe_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCraftingRecipe_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCraftingRecipe()
{
	if (!Z_Registration_Info_UScriptStruct_FCraftingRecipe.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FCraftingRecipe.InnerSingleton, Z_Construct_UScriptStruct_FCraftingRecipe_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FCraftingRecipe.InnerSingleton;
}
// ********** End ScriptStruct FCraftingRecipe *****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Source_ProjectDeliveryHell_MyOwn_h_Files_ItemRecipes_h__Script_ProjectDeliveryHell_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FRecipeIngredient::StaticStruct, Z_Construct_UScriptStruct_FRecipeIngredient_Statics::NewStructOps, TEXT("RecipeIngredient"), &Z_Registration_Info_UScriptStruct_FRecipeIngredient, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRecipeIngredient), 1058519744U) },
		{ FCraftingRecipe::StaticStruct, Z_Construct_UScriptStruct_FCraftingRecipe_Statics::NewStructOps, TEXT("CraftingRecipe"), &Z_Registration_Info_UScriptStruct_FCraftingRecipe, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCraftingRecipe), 3420816581U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Source_ProjectDeliveryHell_MyOwn_h_Files_ItemRecipes_h__Script_ProjectDeliveryHell_239988665(TEXT("/Script/ProjectDeliveryHell"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Source_ProjectDeliveryHell_MyOwn_h_Files_ItemRecipes_h__Script_ProjectDeliveryHell_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Source_ProjectDeliveryHell_MyOwn_h_Files_ItemRecipes_h__Script_ProjectDeliveryHell_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
