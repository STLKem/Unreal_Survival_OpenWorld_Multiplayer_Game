// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VoxelRender/VoxelLODMaterials.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeVoxelLODMaterials() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_Voxel();
VOXEL_API UClass* Z_Construct_UClass_UVoxelMaterialCollectionBase_NoRegister();
VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelLODMaterialCollections();
VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelLODMaterials();
VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelLODMaterialsBase();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FVoxelLODMaterialsBase ********************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FVoxelLODMaterialsBase;
class UScriptStruct* FVoxelLODMaterialsBase::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FVoxelLODMaterialsBase.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FVoxelLODMaterialsBase.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVoxelLODMaterialsBase, (UObject*)Z_Construct_UPackage__Script_Voxel(), TEXT("VoxelLODMaterialsBase"));
	}
	return Z_Registration_Info_UScriptStruct_FVoxelLODMaterialsBase.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FVoxelLODMaterialsBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/VoxelRender/VoxelLODMaterials.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartLOD_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ClampMax", "26" },
		{ "ClampMin", "0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Inclusive\n" },
#endif
		{ "ModuleRelativePath", "Public/VoxelRender/VoxelLODMaterials.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Inclusive" },
#endif
		{ "UIMax", "26" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EndLOD_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ClampMax", "26" },
		{ "ClampMin", "0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Inclusive\n" },
#endif
		{ "ModuleRelativePath", "Public/VoxelRender/VoxelLODMaterials.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Inclusive" },
#endif
		{ "UIMax", "26" },
		{ "UIMin", "0" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_StartLOD;
	static const UECodeGen_Private::FIntPropertyParams NewProp_EndLOD;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVoxelLODMaterialsBase>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FVoxelLODMaterialsBase_Statics::NewProp_StartLOD = { "StartLOD", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVoxelLODMaterialsBase, StartLOD), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartLOD_MetaData), NewProp_StartLOD_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FVoxelLODMaterialsBase_Statics::NewProp_EndLOD = { "EndLOD", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVoxelLODMaterialsBase, EndLOD), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EndLOD_MetaData), NewProp_EndLOD_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVoxelLODMaterialsBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelLODMaterialsBase_Statics::NewProp_StartLOD,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelLODMaterialsBase_Statics::NewProp_EndLOD,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelLODMaterialsBase_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVoxelLODMaterialsBase_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
	nullptr,
	&NewStructOps,
	"VoxelLODMaterialsBase",
	Z_Construct_UScriptStruct_FVoxelLODMaterialsBase_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelLODMaterialsBase_Statics::PropPointers),
	sizeof(FVoxelLODMaterialsBase),
	alignof(FVoxelLODMaterialsBase),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelLODMaterialsBase_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVoxelLODMaterialsBase_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FVoxelLODMaterialsBase()
{
	if (!Z_Registration_Info_UScriptStruct_FVoxelLODMaterialsBase.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FVoxelLODMaterialsBase.InnerSingleton, Z_Construct_UScriptStruct_FVoxelLODMaterialsBase_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FVoxelLODMaterialsBase.InnerSingleton;
}
// ********** End ScriptStruct FVoxelLODMaterialsBase **********************************************

// ********** Begin ScriptStruct FVoxelLODMaterials ************************************************
static_assert(std::is_polymorphic<FVoxelLODMaterials>() == std::is_polymorphic<FVoxelLODMaterialsBase>(), "USTRUCT FVoxelLODMaterials cannot be polymorphic unless super FVoxelLODMaterialsBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FVoxelLODMaterials;
class UScriptStruct* FVoxelLODMaterials::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FVoxelLODMaterials.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FVoxelLODMaterials.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVoxelLODMaterials, (UObject*)Z_Construct_UPackage__Script_Voxel(), TEXT("VoxelLODMaterials"));
	}
	return Z_Registration_Info_UScriptStruct_FVoxelLODMaterials.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FVoxelLODMaterials_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/VoxelRender/VoxelLODMaterials.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Material_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelRender/VoxelLODMaterials.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Material;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVoxelLODMaterials>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FVoxelLODMaterials_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVoxelLODMaterials, Material), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Material_MetaData), NewProp_Material_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVoxelLODMaterials_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelLODMaterials_Statics::NewProp_Material,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelLODMaterials_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVoxelLODMaterials_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
	Z_Construct_UScriptStruct_FVoxelLODMaterialsBase,
	&NewStructOps,
	"VoxelLODMaterials",
	Z_Construct_UScriptStruct_FVoxelLODMaterials_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelLODMaterials_Statics::PropPointers),
	sizeof(FVoxelLODMaterials),
	alignof(FVoxelLODMaterials),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelLODMaterials_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVoxelLODMaterials_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FVoxelLODMaterials()
{
	if (!Z_Registration_Info_UScriptStruct_FVoxelLODMaterials.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FVoxelLODMaterials.InnerSingleton, Z_Construct_UScriptStruct_FVoxelLODMaterials_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FVoxelLODMaterials.InnerSingleton;
}
// ********** End ScriptStruct FVoxelLODMaterials **************************************************

// ********** Begin ScriptStruct FVoxelLODMaterialCollections **************************************
static_assert(std::is_polymorphic<FVoxelLODMaterialCollections>() == std::is_polymorphic<FVoxelLODMaterialsBase>(), "USTRUCT FVoxelLODMaterialCollections cannot be polymorphic unless super FVoxelLODMaterialsBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FVoxelLODMaterialCollections;
class UScriptStruct* FVoxelLODMaterialCollections::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FVoxelLODMaterialCollections.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FVoxelLODMaterialCollections.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVoxelLODMaterialCollections, (UObject*)Z_Construct_UPackage__Script_Voxel(), TEXT("VoxelLODMaterialCollections"));
	}
	return Z_Registration_Info_UScriptStruct_FVoxelLODMaterialCollections.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FVoxelLODMaterialCollections_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/VoxelRender/VoxelLODMaterials.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaterialCollection_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelRender/VoxelLODMaterials.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MaterialCollection;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVoxelLODMaterialCollections>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FVoxelLODMaterialCollections_Statics::NewProp_MaterialCollection = { "MaterialCollection", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVoxelLODMaterialCollections, MaterialCollection), Z_Construct_UClass_UVoxelMaterialCollectionBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaterialCollection_MetaData), NewProp_MaterialCollection_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVoxelLODMaterialCollections_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelLODMaterialCollections_Statics::NewProp_MaterialCollection,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelLODMaterialCollections_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVoxelLODMaterialCollections_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
	Z_Construct_UScriptStruct_FVoxelLODMaterialsBase,
	&NewStructOps,
	"VoxelLODMaterialCollections",
	Z_Construct_UScriptStruct_FVoxelLODMaterialCollections_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelLODMaterialCollections_Statics::PropPointers),
	sizeof(FVoxelLODMaterialCollections),
	alignof(FVoxelLODMaterialCollections),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelLODMaterialCollections_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVoxelLODMaterialCollections_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FVoxelLODMaterialCollections()
{
	if (!Z_Registration_Info_UScriptStruct_FVoxelLODMaterialCollections.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FVoxelLODMaterialCollections.InnerSingleton, Z_Construct_UScriptStruct_FVoxelLODMaterialCollections_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FVoxelLODMaterialCollections.InnerSingleton;
}
// ********** End ScriptStruct FVoxelLODMaterialCollections ****************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelRender_VoxelLODMaterials_h__Script_Voxel_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FVoxelLODMaterialsBase::StaticStruct, Z_Construct_UScriptStruct_FVoxelLODMaterialsBase_Statics::NewStructOps, TEXT("VoxelLODMaterialsBase"), &Z_Registration_Info_UScriptStruct_FVoxelLODMaterialsBase, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVoxelLODMaterialsBase), 3973802884U) },
		{ FVoxelLODMaterials::StaticStruct, Z_Construct_UScriptStruct_FVoxelLODMaterials_Statics::NewStructOps, TEXT("VoxelLODMaterials"), &Z_Registration_Info_UScriptStruct_FVoxelLODMaterials, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVoxelLODMaterials), 1458254023U) },
		{ FVoxelLODMaterialCollections::StaticStruct, Z_Construct_UScriptStruct_FVoxelLODMaterialCollections_Statics::NewStructOps, TEXT("VoxelLODMaterialCollections"), &Z_Registration_Info_UScriptStruct_FVoxelLODMaterialCollections, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVoxelLODMaterialCollections), 1346999118U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelRender_VoxelLODMaterials_h__Script_Voxel_151060439(TEXT("/Script/Voxel"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelRender_VoxelLODMaterials_h__Script_Voxel_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelRender_VoxelLODMaterials_h__Script_Voxel_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
