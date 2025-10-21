// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Voxel/Public/VoxelGenerators/VoxelGeneratorInit.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeVoxelGeneratorInit() {}

// ********** Begin Cross Module References ********************************************************
UPackage* Z_Construct_UPackage__Script_Voxel();
VOXEL_API UClass* Z_Construct_UClass_AVoxelWorld_NoRegister();
VOXEL_API UClass* Z_Construct_UClass_UVoxelMaterialCollectionBase_NoRegister();
VOXEL_API UEnum* Z_Construct_UEnum_Voxel_EVoxelMaterialConfig();
VOXEL_API UEnum* Z_Construct_UEnum_Voxel_EVoxelRenderType();
VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelGeneratorInit();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FVoxelGeneratorInit ***********************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FVoxelGeneratorInit;
class UScriptStruct* FVoxelGeneratorInit::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FVoxelGeneratorInit.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FVoxelGeneratorInit.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVoxelGeneratorInit, (UObject*)Z_Construct_UPackage__Script_Voxel(), TEXT("VoxelGeneratorInit"));
	}
	return Z_Registration_Info_UScriptStruct_FVoxelGeneratorInit.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FVoxelGeneratorInit_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/VoxelGenerators/VoxelGeneratorInit.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VoxelSize_MetaData[] = {
		{ "Category", "Init" },
		{ "ModuleRelativePath", "Public/VoxelGenerators/VoxelGeneratorInit.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldSize_MetaData[] = {
		{ "Category", "Init" },
		{ "ModuleRelativePath", "Public/VoxelGenerators/VoxelGeneratorInit.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RenderType_MetaData[] = {
		{ "Category", "Init" },
		{ "ModuleRelativePath", "Public/VoxelGenerators/VoxelGeneratorInit.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaterialConfig_MetaData[] = {
		{ "Category", "Init" },
		{ "ModuleRelativePath", "Public/VoxelGenerators/VoxelGeneratorInit.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaterialCollection_MetaData[] = {
		{ "Category", "Init" },
		{ "ModuleRelativePath", "Public/VoxelGenerators/VoxelGeneratorInit.h" },
		{ "NativeConstTemplateArg", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_World_MetaData[] = {
		{ "Category", "Init" },
		{ "ModuleRelativePath", "Public/VoxelGenerators/VoxelGeneratorInit.h" },
		{ "NativeConstTemplateArg", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_VoxelSize;
	static const UECodeGen_Private::FIntPropertyParams NewProp_WorldSize;
	static const UECodeGen_Private::FBytePropertyParams NewProp_RenderType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_RenderType;
	static const UECodeGen_Private::FBytePropertyParams NewProp_MaterialConfig_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_MaterialConfig;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MaterialCollection;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVoxelGeneratorInit>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVoxelGeneratorInit_Statics::NewProp_VoxelSize = { "VoxelSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVoxelGeneratorInit, VoxelSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VoxelSize_MetaData), NewProp_VoxelSize_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FVoxelGeneratorInit_Statics::NewProp_WorldSize = { "WorldSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVoxelGeneratorInit, WorldSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldSize_MetaData), NewProp_WorldSize_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FVoxelGeneratorInit_Statics::NewProp_RenderType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FVoxelGeneratorInit_Statics::NewProp_RenderType = { "RenderType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVoxelGeneratorInit, RenderType), Z_Construct_UEnum_Voxel_EVoxelRenderType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RenderType_MetaData), NewProp_RenderType_MetaData) }; // 1529021437
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FVoxelGeneratorInit_Statics::NewProp_MaterialConfig_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FVoxelGeneratorInit_Statics::NewProp_MaterialConfig = { "MaterialConfig", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVoxelGeneratorInit, MaterialConfig), Z_Construct_UEnum_Voxel_EVoxelMaterialConfig, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaterialConfig_MetaData), NewProp_MaterialConfig_MetaData) }; // 762384558
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FVoxelGeneratorInit_Statics::NewProp_MaterialCollection = { "MaterialCollection", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVoxelGeneratorInit, MaterialCollection), Z_Construct_UClass_UVoxelMaterialCollectionBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaterialCollection_MetaData), NewProp_MaterialCollection_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FVoxelGeneratorInit_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVoxelGeneratorInit, World), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_World_MetaData), NewProp_World_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVoxelGeneratorInit_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelGeneratorInit_Statics::NewProp_VoxelSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelGeneratorInit_Statics::NewProp_WorldSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelGeneratorInit_Statics::NewProp_RenderType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelGeneratorInit_Statics::NewProp_RenderType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelGeneratorInit_Statics::NewProp_MaterialConfig_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelGeneratorInit_Statics::NewProp_MaterialConfig,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelGeneratorInit_Statics::NewProp_MaterialCollection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelGeneratorInit_Statics::NewProp_World,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelGeneratorInit_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVoxelGeneratorInit_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
	nullptr,
	&NewStructOps,
	"VoxelGeneratorInit",
	Z_Construct_UScriptStruct_FVoxelGeneratorInit_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelGeneratorInit_Statics::PropPointers),
	sizeof(FVoxelGeneratorInit),
	alignof(FVoxelGeneratorInit),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelGeneratorInit_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVoxelGeneratorInit_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FVoxelGeneratorInit()
{
	if (!Z_Registration_Info_UScriptStruct_FVoxelGeneratorInit.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FVoxelGeneratorInit.InnerSingleton, Z_Construct_UScriptStruct_FVoxelGeneratorInit_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FVoxelGeneratorInit.InnerSingleton;
}
// ********** End ScriptStruct FVoxelGeneratorInit *************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelGenerators_VoxelGeneratorInit_h__Script_Voxel_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FVoxelGeneratorInit::StaticStruct, Z_Construct_UScriptStruct_FVoxelGeneratorInit_Statics::NewStructOps, TEXT("VoxelGeneratorInit"), &Z_Registration_Info_UScriptStruct_FVoxelGeneratorInit, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVoxelGeneratorInit), 2675460303U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelGenerators_VoxelGeneratorInit_h__Script_Voxel_2358436706(TEXT("/Script/Voxel"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelGenerators_VoxelGeneratorInit_h__Script_Voxel_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelGenerators_VoxelGeneratorInit_h__Script_Voxel_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
