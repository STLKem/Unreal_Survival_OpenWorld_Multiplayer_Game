// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VoxelBoolVector.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeVoxelBoolVector() {}

// ********** Begin Cross Module References ********************************************************
UPackage* Z_Construct_UPackage__Script_Voxel();
VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelBoolVector();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FVoxelBoolVector **************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FVoxelBoolVector;
class UScriptStruct* FVoxelBoolVector::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FVoxelBoolVector.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FVoxelBoolVector.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVoxelBoolVector, (UObject*)Z_Construct_UPackage__Script_Voxel(), TEXT("VoxelBoolVector"));
	}
	return Z_Registration_Info_UScriptStruct_FVoxelBoolVector.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FVoxelBoolVector_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/VoxelBoolVector.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bX_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelBoolVector.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bY_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelBoolVector.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bZ_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelBoolVector.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bX_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bX;
	static void NewProp_bY_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bY;
	static void NewProp_bZ_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bZ;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVoxelBoolVector>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FVoxelBoolVector_Statics::NewProp_bX_SetBit(void* Obj)
{
	((FVoxelBoolVector*)Obj)->bX = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVoxelBoolVector_Statics::NewProp_bX = { "bX", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FVoxelBoolVector), &Z_Construct_UScriptStruct_FVoxelBoolVector_Statics::NewProp_bX_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bX_MetaData), NewProp_bX_MetaData) };
void Z_Construct_UScriptStruct_FVoxelBoolVector_Statics::NewProp_bY_SetBit(void* Obj)
{
	((FVoxelBoolVector*)Obj)->bY = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVoxelBoolVector_Statics::NewProp_bY = { "bY", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FVoxelBoolVector), &Z_Construct_UScriptStruct_FVoxelBoolVector_Statics::NewProp_bY_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bY_MetaData), NewProp_bY_MetaData) };
void Z_Construct_UScriptStruct_FVoxelBoolVector_Statics::NewProp_bZ_SetBit(void* Obj)
{
	((FVoxelBoolVector*)Obj)->bZ = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVoxelBoolVector_Statics::NewProp_bZ = { "bZ", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FVoxelBoolVector), &Z_Construct_UScriptStruct_FVoxelBoolVector_Statics::NewProp_bZ_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bZ_MetaData), NewProp_bZ_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVoxelBoolVector_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelBoolVector_Statics::NewProp_bX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelBoolVector_Statics::NewProp_bY,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelBoolVector_Statics::NewProp_bZ,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelBoolVector_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVoxelBoolVector_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
	nullptr,
	&NewStructOps,
	"VoxelBoolVector",
	Z_Construct_UScriptStruct_FVoxelBoolVector_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelBoolVector_Statics::PropPointers),
	sizeof(FVoxelBoolVector),
	alignof(FVoxelBoolVector),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelBoolVector_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVoxelBoolVector_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FVoxelBoolVector()
{
	if (!Z_Registration_Info_UScriptStruct_FVoxelBoolVector.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FVoxelBoolVector.InnerSingleton, Z_Construct_UScriptStruct_FVoxelBoolVector_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FVoxelBoolVector.InnerSingleton;
}
// ********** End ScriptStruct FVoxelBoolVector ****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelBoolVector_h__Script_Voxel_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FVoxelBoolVector::StaticStruct, Z_Construct_UScriptStruct_FVoxelBoolVector_Statics::NewStructOps, TEXT("VoxelBoolVector"), &Z_Registration_Info_UScriptStruct_FVoxelBoolVector, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVoxelBoolVector), 523699893U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelBoolVector_h__Script_Voxel_844206938(TEXT("/Script/Voxel"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelBoolVector_h__Script_Voxel_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelBoolVector_h__Script_Voxel_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
