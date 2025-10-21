// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Voxel/Public/VoxelObjectArchive.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeVoxelObjectArchive() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
UPackage* Z_Construct_UPackage__Script_Voxel();
VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelObjectArchiveEntry();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FVoxelObjectArchiveEntry ******************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FVoxelObjectArchiveEntry;
class UScriptStruct* FVoxelObjectArchiveEntry::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FVoxelObjectArchiveEntry.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FVoxelObjectArchiveEntry.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVoxelObjectArchiveEntry, (UObject*)Z_Construct_UPackage__Script_Voxel(), TEXT("VoxelObjectArchiveEntry"));
	}
	return Z_Registration_Info_UScriptStruct_FVoxelObjectArchiveEntry.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FVoxelObjectArchiveEntry_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/VoxelObjectArchive.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Object_MetaData[] = {
		{ "Category", "Entry" },
		{ "ModuleRelativePath", "Public/VoxelObjectArchive.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Index_MetaData[] = {
		{ "Category", "Entry" },
		{ "Comment", "// Zero is reserved for nullptr\n" },
		{ "ModuleRelativePath", "Public/VoxelObjectArchive.h" },
		{ "ToolTip", "Zero is reserved for nullptr" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_Object;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVoxelObjectArchiveEntry>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FVoxelObjectArchiveEntry_Statics::NewProp_Object = { "Object", nullptr, (EPropertyFlags)0x0014000000020001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVoxelObjectArchiveEntry, Object), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Object_MetaData), NewProp_Object_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FVoxelObjectArchiveEntry_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVoxelObjectArchiveEntry, Index), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Index_MetaData), NewProp_Index_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVoxelObjectArchiveEntry_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelObjectArchiveEntry_Statics::NewProp_Object,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelObjectArchiveEntry_Statics::NewProp_Index,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelObjectArchiveEntry_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVoxelObjectArchiveEntry_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
	nullptr,
	&NewStructOps,
	"VoxelObjectArchiveEntry",
	Z_Construct_UScriptStruct_FVoxelObjectArchiveEntry_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelObjectArchiveEntry_Statics::PropPointers),
	sizeof(FVoxelObjectArchiveEntry),
	alignof(FVoxelObjectArchiveEntry),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelObjectArchiveEntry_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVoxelObjectArchiveEntry_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FVoxelObjectArchiveEntry()
{
	if (!Z_Registration_Info_UScriptStruct_FVoxelObjectArchiveEntry.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FVoxelObjectArchiveEntry.InnerSingleton, Z_Construct_UScriptStruct_FVoxelObjectArchiveEntry_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FVoxelObjectArchiveEntry.InnerSingleton;
}
// ********** End ScriptStruct FVoxelObjectArchiveEntry ********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelObjectArchive_h__Script_Voxel_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FVoxelObjectArchiveEntry::StaticStruct, Z_Construct_UScriptStruct_FVoxelObjectArchiveEntry_Statics::NewStructOps, TEXT("VoxelObjectArchiveEntry"), &Z_Registration_Info_UScriptStruct_FVoxelObjectArchiveEntry, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVoxelObjectArchiveEntry), 2793314526U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelObjectArchive_h__Script_Voxel_882928680(TEXT("/Script/Voxel"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelObjectArchive_h__Script_Voxel_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelObjectArchive_h__Script_Voxel_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
