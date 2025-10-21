// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VoxelTexture.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeVoxelTexture() {}

// ********** Begin Cross Module References ********************************************************
UPackage* Z_Construct_UPackage__Script_Voxel();
VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelColorTexture();
VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelFloatTexture();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FVoxelFloatTexture ************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FVoxelFloatTexture;
class UScriptStruct* FVoxelFloatTexture::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FVoxelFloatTexture.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FVoxelFloatTexture.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVoxelFloatTexture, (UObject*)Z_Construct_UPackage__Script_Voxel(), TEXT("VoxelFloatTexture"));
	}
	return Z_Registration_Info_UScriptStruct_FVoxelFloatTexture.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FVoxelFloatTexture_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/VoxelTexture.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVoxelFloatTexture>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVoxelFloatTexture_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
	nullptr,
	&NewStructOps,
	"VoxelFloatTexture",
	nullptr,
	0,
	sizeof(FVoxelFloatTexture),
	alignof(FVoxelFloatTexture),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelFloatTexture_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVoxelFloatTexture_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FVoxelFloatTexture()
{
	if (!Z_Registration_Info_UScriptStruct_FVoxelFloatTexture.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FVoxelFloatTexture.InnerSingleton, Z_Construct_UScriptStruct_FVoxelFloatTexture_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FVoxelFloatTexture.InnerSingleton;
}
// ********** End ScriptStruct FVoxelFloatTexture **************************************************

// ********** Begin ScriptStruct FVoxelColorTexture ************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FVoxelColorTexture;
class UScriptStruct* FVoxelColorTexture::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FVoxelColorTexture.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FVoxelColorTexture.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVoxelColorTexture, (UObject*)Z_Construct_UPackage__Script_Voxel(), TEXT("VoxelColorTexture"));
	}
	return Z_Registration_Info_UScriptStruct_FVoxelColorTexture.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FVoxelColorTexture_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/VoxelTexture.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVoxelColorTexture>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVoxelColorTexture_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
	nullptr,
	&NewStructOps,
	"VoxelColorTexture",
	nullptr,
	0,
	sizeof(FVoxelColorTexture),
	alignof(FVoxelColorTexture),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelColorTexture_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVoxelColorTexture_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FVoxelColorTexture()
{
	if (!Z_Registration_Info_UScriptStruct_FVoxelColorTexture.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FVoxelColorTexture.InnerSingleton, Z_Construct_UScriptStruct_FVoxelColorTexture_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FVoxelColorTexture.InnerSingleton;
}
// ********** End ScriptStruct FVoxelColorTexture **************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelTexture_h__Script_Voxel_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FVoxelFloatTexture::StaticStruct, Z_Construct_UScriptStruct_FVoxelFloatTexture_Statics::NewStructOps, TEXT("VoxelFloatTexture"), &Z_Registration_Info_UScriptStruct_FVoxelFloatTexture, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVoxelFloatTexture), 369089072U) },
		{ FVoxelColorTexture::StaticStruct, Z_Construct_UScriptStruct_FVoxelColorTexture_Statics::NewStructOps, TEXT("VoxelColorTexture"), &Z_Registration_Info_UScriptStruct_FVoxelColorTexture, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVoxelColorTexture), 40891338U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelTexture_h__Script_Voxel_2130249630(TEXT("/Script/Voxel"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelTexture_h__Script_Voxel_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelTexture_h__Script_Voxel_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
