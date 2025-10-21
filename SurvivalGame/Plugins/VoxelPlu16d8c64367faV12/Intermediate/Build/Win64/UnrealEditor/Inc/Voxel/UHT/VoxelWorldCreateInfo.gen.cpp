// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VoxelWorldCreateInfo.h"
#include "VoxelData/VoxelSave.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeVoxelWorldCreateInfo() {}

// ********** Begin Cross Module References ********************************************************
UPackage* Z_Construct_UPackage__Script_Voxel();
VOXEL_API UClass* Z_Construct_UClass_AVoxelWorld_NoRegister();
VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelUncompressedWorldSave();
VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelWorldCreateInfo();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FVoxelWorldCreateInfo *********************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FVoxelWorldCreateInfo;
class UScriptStruct* FVoxelWorldCreateInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FVoxelWorldCreateInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FVoxelWorldCreateInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVoxelWorldCreateInfo, (UObject*)Z_Construct_UPackage__Script_Voxel(), TEXT("VoxelWorldCreateInfo"));
	}
	return Z_Registration_Info_UScriptStruct_FVoxelWorldCreateInfo.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FVoxelWorldCreateInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/VoxelWorldCreateInfo.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideSave_MetaData[] = {
		{ "Category", "Voxel" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// If OverrideSave is true, the world will load SaveOverride instead of the save object\n" },
#endif
		{ "ModuleRelativePath", "Public/VoxelWorldCreateInfo.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If OverrideSave is true, the world will load SaveOverride instead of the save object" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SaveOverride_MetaData[] = {
		{ "Category", "Voxel" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// If OverrideSave is true, the world will load SaveOverride instead of the save object\n" },
#endif
		{ "ModuleRelativePath", "Public/VoxelWorldCreateInfo.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If OverrideSave is true, the world will load SaveOverride instead of the save object" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideData_MetaData[] = {
		{ "Category", "Voxel" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// If bOverrideData is true, will use DataSource data instead of creating a new data\n" },
#endif
		{ "ModuleRelativePath", "Public/VoxelWorldCreateInfo.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If bOverrideData is true, will use DataSource data instead of creating a new data" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DataOverride_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelWorldCreateInfo.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bOverrideSave_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideSave;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SaveOverride;
	static void NewProp_bOverrideData_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideData;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DataOverride;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVoxelWorldCreateInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FVoxelWorldCreateInfo_Statics::NewProp_bOverrideSave_SetBit(void* Obj)
{
	((FVoxelWorldCreateInfo*)Obj)->bOverrideSave = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVoxelWorldCreateInfo_Statics::NewProp_bOverrideSave = { "bOverrideSave", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FVoxelWorldCreateInfo), &Z_Construct_UScriptStruct_FVoxelWorldCreateInfo_Statics::NewProp_bOverrideSave_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverrideSave_MetaData), NewProp_bOverrideSave_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVoxelWorldCreateInfo_Statics::NewProp_SaveOverride = { "SaveOverride", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVoxelWorldCreateInfo, SaveOverride), Z_Construct_UScriptStruct_FVoxelUncompressedWorldSave, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SaveOverride_MetaData), NewProp_SaveOverride_MetaData) }; // 1260233769
void Z_Construct_UScriptStruct_FVoxelWorldCreateInfo_Statics::NewProp_bOverrideData_SetBit(void* Obj)
{
	((FVoxelWorldCreateInfo*)Obj)->bOverrideData = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVoxelWorldCreateInfo_Statics::NewProp_bOverrideData = { "bOverrideData", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FVoxelWorldCreateInfo), &Z_Construct_UScriptStruct_FVoxelWorldCreateInfo_Statics::NewProp_bOverrideData_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverrideData_MetaData), NewProp_bOverrideData_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FVoxelWorldCreateInfo_Statics::NewProp_DataOverride = { "DataOverride", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVoxelWorldCreateInfo, DataOverride), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DataOverride_MetaData), NewProp_DataOverride_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVoxelWorldCreateInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelWorldCreateInfo_Statics::NewProp_bOverrideSave,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelWorldCreateInfo_Statics::NewProp_SaveOverride,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelWorldCreateInfo_Statics::NewProp_bOverrideData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelWorldCreateInfo_Statics::NewProp_DataOverride,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelWorldCreateInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVoxelWorldCreateInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
	nullptr,
	&NewStructOps,
	"VoxelWorldCreateInfo",
	Z_Construct_UScriptStruct_FVoxelWorldCreateInfo_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelWorldCreateInfo_Statics::PropPointers),
	sizeof(FVoxelWorldCreateInfo),
	alignof(FVoxelWorldCreateInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelWorldCreateInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVoxelWorldCreateInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FVoxelWorldCreateInfo()
{
	if (!Z_Registration_Info_UScriptStruct_FVoxelWorldCreateInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FVoxelWorldCreateInfo.InnerSingleton, Z_Construct_UScriptStruct_FVoxelWorldCreateInfo_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FVoxelWorldCreateInfo.InnerSingleton;
}
// ********** End ScriptStruct FVoxelWorldCreateInfo ***********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelWorldCreateInfo_h__Script_Voxel_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FVoxelWorldCreateInfo::StaticStruct, Z_Construct_UScriptStruct_FVoxelWorldCreateInfo_Statics::NewStructOps, TEXT("VoxelWorldCreateInfo"), &Z_Registration_Info_UScriptStruct_FVoxelWorldCreateInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVoxelWorldCreateInfo), 4101309925U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelWorldCreateInfo_h__Script_Voxel_1451212463(TEXT("/Script/Voxel"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelWorldCreateInfo_h__Script_Voxel_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelWorldCreateInfo_h__Script_Voxel_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
