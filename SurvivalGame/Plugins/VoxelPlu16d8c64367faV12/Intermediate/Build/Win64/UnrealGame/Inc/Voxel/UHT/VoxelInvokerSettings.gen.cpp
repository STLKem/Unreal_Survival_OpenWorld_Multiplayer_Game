// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Voxel/Public/VoxelInvokerSettings.h"
#include "Voxel/Public/VoxelIntBox.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeVoxelInvokerSettings() {}

// ********** Begin Cross Module References ********************************************************
UPackage* Z_Construct_UPackage__Script_Voxel();
VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelIntBox();
VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelInvokerSettings();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FVoxelInvokerSettings *********************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FVoxelInvokerSettings;
class UScriptStruct* FVoxelInvokerSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FVoxelInvokerSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FVoxelInvokerSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVoxelInvokerSettings, (UObject*)Z_Construct_UPackage__Script_Voxel(), TEXT("VoxelInvokerSettings"));
	}
	return Z_Registration_Info_UScriptStruct_FVoxelInvokerSettings.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FVoxelInvokerSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/VoxelInvokerSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseForLOD_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelInvokerSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LODToSet_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelInvokerSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LODBounds_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelInvokerSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseForCollisions_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelInvokerSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollisionsBounds_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelInvokerSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseForNavmesh_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelInvokerSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NavmeshBounds_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelInvokerSettings.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bUseForLOD_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseForLOD;
	static const UECodeGen_Private::FIntPropertyParams NewProp_LODToSet;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LODBounds;
	static void NewProp_bUseForCollisions_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseForCollisions;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CollisionsBounds;
	static void NewProp_bUseForNavmesh_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseForNavmesh;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NavmeshBounds;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVoxelInvokerSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FVoxelInvokerSettings_Statics::NewProp_bUseForLOD_SetBit(void* Obj)
{
	((FVoxelInvokerSettings*)Obj)->bUseForLOD = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVoxelInvokerSettings_Statics::NewProp_bUseForLOD = { "bUseForLOD", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FVoxelInvokerSettings), &Z_Construct_UScriptStruct_FVoxelInvokerSettings_Statics::NewProp_bUseForLOD_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseForLOD_MetaData), NewProp_bUseForLOD_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FVoxelInvokerSettings_Statics::NewProp_LODToSet = { "LODToSet", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVoxelInvokerSettings, LODToSet), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LODToSet_MetaData), NewProp_LODToSet_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVoxelInvokerSettings_Statics::NewProp_LODBounds = { "LODBounds", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVoxelInvokerSettings, LODBounds), Z_Construct_UScriptStruct_FVoxelIntBox, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LODBounds_MetaData), NewProp_LODBounds_MetaData) }; // 3008064533
void Z_Construct_UScriptStruct_FVoxelInvokerSettings_Statics::NewProp_bUseForCollisions_SetBit(void* Obj)
{
	((FVoxelInvokerSettings*)Obj)->bUseForCollisions = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVoxelInvokerSettings_Statics::NewProp_bUseForCollisions = { "bUseForCollisions", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FVoxelInvokerSettings), &Z_Construct_UScriptStruct_FVoxelInvokerSettings_Statics::NewProp_bUseForCollisions_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseForCollisions_MetaData), NewProp_bUseForCollisions_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVoxelInvokerSettings_Statics::NewProp_CollisionsBounds = { "CollisionsBounds", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVoxelInvokerSettings, CollisionsBounds), Z_Construct_UScriptStruct_FVoxelIntBox, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollisionsBounds_MetaData), NewProp_CollisionsBounds_MetaData) }; // 3008064533
void Z_Construct_UScriptStruct_FVoxelInvokerSettings_Statics::NewProp_bUseForNavmesh_SetBit(void* Obj)
{
	((FVoxelInvokerSettings*)Obj)->bUseForNavmesh = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVoxelInvokerSettings_Statics::NewProp_bUseForNavmesh = { "bUseForNavmesh", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FVoxelInvokerSettings), &Z_Construct_UScriptStruct_FVoxelInvokerSettings_Statics::NewProp_bUseForNavmesh_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseForNavmesh_MetaData), NewProp_bUseForNavmesh_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVoxelInvokerSettings_Statics::NewProp_NavmeshBounds = { "NavmeshBounds", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVoxelInvokerSettings, NavmeshBounds), Z_Construct_UScriptStruct_FVoxelIntBox, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NavmeshBounds_MetaData), NewProp_NavmeshBounds_MetaData) }; // 3008064533
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVoxelInvokerSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelInvokerSettings_Statics::NewProp_bUseForLOD,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelInvokerSettings_Statics::NewProp_LODToSet,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelInvokerSettings_Statics::NewProp_LODBounds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelInvokerSettings_Statics::NewProp_bUseForCollisions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelInvokerSettings_Statics::NewProp_CollisionsBounds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelInvokerSettings_Statics::NewProp_bUseForNavmesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelInvokerSettings_Statics::NewProp_NavmeshBounds,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelInvokerSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVoxelInvokerSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
	nullptr,
	&NewStructOps,
	"VoxelInvokerSettings",
	Z_Construct_UScriptStruct_FVoxelInvokerSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelInvokerSettings_Statics::PropPointers),
	sizeof(FVoxelInvokerSettings),
	alignof(FVoxelInvokerSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelInvokerSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVoxelInvokerSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FVoxelInvokerSettings()
{
	if (!Z_Registration_Info_UScriptStruct_FVoxelInvokerSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FVoxelInvokerSettings.InnerSingleton, Z_Construct_UScriptStruct_FVoxelInvokerSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FVoxelInvokerSettings.InnerSingleton;
}
// ********** End ScriptStruct FVoxelInvokerSettings ***********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelInvokerSettings_h__Script_Voxel_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FVoxelInvokerSettings::StaticStruct, Z_Construct_UScriptStruct_FVoxelInvokerSettings_Statics::NewStructOps, TEXT("VoxelInvokerSettings"), &Z_Registration_Info_UScriptStruct_FVoxelInvokerSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVoxelInvokerSettings), 2876168034U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelInvokerSettings_h__Script_Voxel_2240962616(TEXT("/Script/Voxel"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelInvokerSettings_h__Script_Voxel_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelInvokerSettings_h__Script_Voxel_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
