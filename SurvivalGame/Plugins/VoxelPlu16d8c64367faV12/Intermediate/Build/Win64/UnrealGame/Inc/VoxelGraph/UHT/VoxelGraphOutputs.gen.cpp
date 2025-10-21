// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VoxelGraph/Public/VoxelGraphOutputs.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeVoxelGraphOutputs() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
UPackage* Z_Construct_UPackage__Script_VoxelGraph();
VOXELGRAPH_API UEnum* Z_Construct_UEnum_VoxelGraph_EVoxelDataPinCategory();
VOXELGRAPH_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelGraphOutput();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FVoxelGraphOutput *************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FVoxelGraphOutput;
class UScriptStruct* FVoxelGraphOutput::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FVoxelGraphOutput.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FVoxelGraphOutput.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVoxelGraphOutput, (UObject*)Z_Construct_UPackage__Script_VoxelGraph(), TEXT("VoxelGraphOutput"));
	}
	return Z_Registration_Info_UScriptStruct_FVoxelGraphOutput.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FVoxelGraphOutput_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/VoxelGraphOutputs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "Category", "Outputs" },
		{ "ModuleRelativePath", "Public/VoxelGraphOutputs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Category_MetaData[] = {
		{ "Category", "Outputs" },
		{ "ModuleRelativePath", "Public/VoxelGraphOutputs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GUID_MetaData[] = {
		{ "ModuleRelativePath", "Public/VoxelGraphOutputs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Index_MetaData[] = {
		{ "ModuleRelativePath", "Public/VoxelGraphOutputs.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Category_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Category;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GUID;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_Index;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVoxelGraphOutput>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FVoxelGraphOutput_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVoxelGraphOutput, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FVoxelGraphOutput_Statics::NewProp_Category_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FVoxelGraphOutput_Statics::NewProp_Category = { "Category", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVoxelGraphOutput, Category), Z_Construct_UEnum_VoxelGraph_EVoxelDataPinCategory, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Category_MetaData), NewProp_Category_MetaData) }; // 860201619
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVoxelGraphOutput_Statics::NewProp_GUID = { "GUID", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVoxelGraphOutput, GUID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GUID_MetaData), NewProp_GUID_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FVoxelGraphOutput_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVoxelGraphOutput, Index), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Index_MetaData), NewProp_Index_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVoxelGraphOutput_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelGraphOutput_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelGraphOutput_Statics::NewProp_Category_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelGraphOutput_Statics::NewProp_Category,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelGraphOutput_Statics::NewProp_GUID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelGraphOutput_Statics::NewProp_Index,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelGraphOutput_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVoxelGraphOutput_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
	nullptr,
	&NewStructOps,
	"VoxelGraphOutput",
	Z_Construct_UScriptStruct_FVoxelGraphOutput_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelGraphOutput_Statics::PropPointers),
	sizeof(FVoxelGraphOutput),
	alignof(FVoxelGraphOutput),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelGraphOutput_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVoxelGraphOutput_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FVoxelGraphOutput()
{
	if (!Z_Registration_Info_UScriptStruct_FVoxelGraphOutput.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FVoxelGraphOutput.InnerSingleton, Z_Construct_UScriptStruct_FVoxelGraphOutput_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FVoxelGraphOutput.InnerSingleton;
}
// ********** End ScriptStruct FVoxelGraphOutput ***************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_VoxelGraph_Public_VoxelGraphOutputs_h__Script_VoxelGraph_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FVoxelGraphOutput::StaticStruct, Z_Construct_UScriptStruct_FVoxelGraphOutput_Statics::NewStructOps, TEXT("VoxelGraphOutput"), &Z_Registration_Info_UScriptStruct_FVoxelGraphOutput, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVoxelGraphOutput), 506689577U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_VoxelGraph_Public_VoxelGraphOutputs_h__Script_VoxelGraph_1574742845(TEXT("/Script/VoxelGraph"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_VoxelGraph_Public_VoxelGraphOutputs_h__Script_VoxelGraph_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_VoxelGraph_Public_VoxelGraphOutputs_h__Script_VoxelGraph_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
