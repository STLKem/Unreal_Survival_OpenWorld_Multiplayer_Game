// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Voxel/Public/VoxelRender/VoxelMaterialIndices.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeVoxelMaterialIndices() {}

// ********** Begin Cross Module References ********************************************************
UPackage* Z_Construct_UPackage__Script_Voxel();
VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelMaterialIndices();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FVoxelMaterialIndices *********************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FVoxelMaterialIndices;
class UScriptStruct* FVoxelMaterialIndices::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FVoxelMaterialIndices.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FVoxelMaterialIndices.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVoxelMaterialIndices, (UObject*)Z_Construct_UPackage__Script_Voxel(), TEXT("VoxelMaterialIndices"));
	}
	return Z_Registration_Info_UScriptStruct_FVoxelMaterialIndices.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FVoxelMaterialIndices_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "// UStruct to use it in TMap for GC\n" },
		{ "ModuleRelativePath", "Public/VoxelRender/VoxelMaterialIndices.h" },
		{ "ToolTip", "UStruct to use it in TMap for GC" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVoxelMaterialIndices>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVoxelMaterialIndices_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
	nullptr,
	&NewStructOps,
	"VoxelMaterialIndices",
	nullptr,
	0,
	sizeof(FVoxelMaterialIndices),
	alignof(FVoxelMaterialIndices),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelMaterialIndices_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVoxelMaterialIndices_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FVoxelMaterialIndices()
{
	if (!Z_Registration_Info_UScriptStruct_FVoxelMaterialIndices.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FVoxelMaterialIndices.InnerSingleton, Z_Construct_UScriptStruct_FVoxelMaterialIndices_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FVoxelMaterialIndices.InnerSingleton;
}
// ********** End ScriptStruct FVoxelMaterialIndices ***********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelRender_VoxelMaterialIndices_h__Script_Voxel_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FVoxelMaterialIndices::StaticStruct, Z_Construct_UScriptStruct_FVoxelMaterialIndices_Statics::NewStructOps, TEXT("VoxelMaterialIndices"), &Z_Registration_Info_UScriptStruct_FVoxelMaterialIndices, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVoxelMaterialIndices), 2761319086U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelRender_VoxelMaterialIndices_h__Script_Voxel_3954634995(TEXT("/Script/Voxel"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelRender_VoxelMaterialIndices_h__Script_Voxel_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelRender_VoxelMaterialIndices_h__Script_Voxel_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
