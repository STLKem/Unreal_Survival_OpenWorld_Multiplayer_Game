// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VoxelGraph/Public/VoxelNodes/VoxelNodeStructs.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeVoxelNodeStructs() {}

// ********** Begin Cross Module References ********************************************************
UPackage* Z_Construct_UPackage__Script_VoxelGraph();
VOXELGRAPH_API UEnum* Z_Construct_UEnum_VoxelGraph_EVoxelDataPinCategory();
VOXELGRAPH_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelNamedDataPin();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FVoxelNamedDataPin ************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FVoxelNamedDataPin;
class UScriptStruct* FVoxelNamedDataPin::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FVoxelNamedDataPin.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FVoxelNamedDataPin.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVoxelNamedDataPin, (UObject*)Z_Construct_UPackage__Script_VoxelGraph(), TEXT("VoxelNamedDataPin"));
	}
	return Z_Registration_Info_UScriptStruct_FVoxelNamedDataPin.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FVoxelNamedDataPin_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelNodeStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelNodeStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelNodeStructs.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVoxelNamedDataPin>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FVoxelNamedDataPin_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FVoxelNamedDataPin_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVoxelNamedDataPin, Type), Z_Construct_UEnum_VoxelGraph_EVoxelDataPinCategory, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Type_MetaData), NewProp_Type_MetaData) }; // 860201619
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FVoxelNamedDataPin_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVoxelNamedDataPin, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVoxelNamedDataPin_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelNamedDataPin_Statics::NewProp_Type_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelNamedDataPin_Statics::NewProp_Type,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelNamedDataPin_Statics::NewProp_Name,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelNamedDataPin_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVoxelNamedDataPin_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
	nullptr,
	&NewStructOps,
	"VoxelNamedDataPin",
	Z_Construct_UScriptStruct_FVoxelNamedDataPin_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelNamedDataPin_Statics::PropPointers),
	sizeof(FVoxelNamedDataPin),
	alignof(FVoxelNamedDataPin),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelNamedDataPin_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVoxelNamedDataPin_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FVoxelNamedDataPin()
{
	if (!Z_Registration_Info_UScriptStruct_FVoxelNamedDataPin.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FVoxelNamedDataPin.InnerSingleton, Z_Construct_UScriptStruct_FVoxelNamedDataPin_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FVoxelNamedDataPin.InnerSingleton;
}
// ********** End ScriptStruct FVoxelNamedDataPin **************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_VoxelGraph_Public_VoxelNodes_VoxelNodeStructs_h__Script_VoxelGraph_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FVoxelNamedDataPin::StaticStruct, Z_Construct_UScriptStruct_FVoxelNamedDataPin_Statics::NewStructOps, TEXT("VoxelNamedDataPin"), &Z_Registration_Info_UScriptStruct_FVoxelNamedDataPin, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVoxelNamedDataPin), 1855088112U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_VoxelGraph_Public_VoxelNodes_VoxelNodeStructs_h__Script_VoxelGraph_3334222693(TEXT("/Script/VoxelGraph"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_VoxelGraph_Public_VoxelNodes_VoxelNodeStructs_h__Script_VoxelGraph_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_VoxelGraph_Public_VoxelNodes_VoxelNodeStructs_h__Script_VoxelGraph_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
