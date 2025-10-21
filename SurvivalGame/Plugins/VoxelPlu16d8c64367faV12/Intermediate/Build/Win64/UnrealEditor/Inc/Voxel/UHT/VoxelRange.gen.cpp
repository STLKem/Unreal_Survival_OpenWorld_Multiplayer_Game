// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VoxelRange.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeVoxelRange() {}

// ********** Begin Cross Module References ********************************************************
UPackage* Z_Construct_UPackage__Script_Voxel();
VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelRange();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FVoxelRange *******************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FVoxelRange;
class UScriptStruct* FVoxelRange::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FVoxelRange.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FVoxelRange.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVoxelRange, (UObject*)Z_Construct_UPackage__Script_Voxel(), TEXT("VoxelRange"));
	}
	return Z_Registration_Info_UScriptStruct_FVoxelRange.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FVoxelRange_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// For display and serialization\n" },
#endif
		{ "ModuleRelativePath", "Public/VoxelRange.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "For display and serialization" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Min_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelRange.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Max_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelRange.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDoublePropertyParams NewProp_Min;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_Max;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVoxelRange>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FVoxelRange_Statics::NewProp_Min = { "Min", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVoxelRange, Min), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Min_MetaData), NewProp_Min_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FVoxelRange_Statics::NewProp_Max = { "Max", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVoxelRange, Max), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Max_MetaData), NewProp_Max_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVoxelRange_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelRange_Statics::NewProp_Min,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelRange_Statics::NewProp_Max,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelRange_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVoxelRange_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
	nullptr,
	&NewStructOps,
	"VoxelRange",
	Z_Construct_UScriptStruct_FVoxelRange_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelRange_Statics::PropPointers),
	sizeof(FVoxelRange),
	alignof(FVoxelRange),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelRange_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVoxelRange_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FVoxelRange()
{
	if (!Z_Registration_Info_UScriptStruct_FVoxelRange.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FVoxelRange.InnerSingleton, Z_Construct_UScriptStruct_FVoxelRange_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FVoxelRange.InnerSingleton;
}
// ********** End ScriptStruct FVoxelRange *********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelRange_h__Script_Voxel_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FVoxelRange::StaticStruct, Z_Construct_UScriptStruct_FVoxelRange_Statics::NewStructOps, TEXT("VoxelRange"), &Z_Registration_Info_UScriptStruct_FVoxelRange, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVoxelRange), 1004030673U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelRange_h__Script_Voxel_1338106575(TEXT("/Script/Voxel"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelRange_h__Script_Voxel_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelRange_h__Script_Voxel_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
