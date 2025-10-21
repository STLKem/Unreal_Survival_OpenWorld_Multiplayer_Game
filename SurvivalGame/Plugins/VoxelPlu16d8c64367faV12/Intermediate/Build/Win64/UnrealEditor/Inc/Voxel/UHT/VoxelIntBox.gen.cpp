// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VoxelIntBox.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeVoxelIntBox() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntVector();
UPackage* Z_Construct_UPackage__Script_Voxel();
VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelIntBox();
VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelIntBoxWithValidity();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FVoxelIntBox ******************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FVoxelIntBox;
class UScriptStruct* FVoxelIntBox::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FVoxelIntBox.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FVoxelIntBox.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVoxelIntBox, (UObject*)Z_Construct_UPackage__Script_Voxel(), TEXT("VoxelIntBox"));
	}
	return Z_Registration_Info_UScriptStruct_FVoxelIntBox.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FVoxelIntBox_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * A Box with int32 coordinates\n */" },
#endif
		{ "HasNativeBreak", "/Script/Voxel.VoxelIntBoxLibrary:BreakIntBox" },
		{ "HasNativeMake", "/Script/Voxel.VoxelIntBoxLibrary:MakeIntBox" },
		{ "ModuleRelativePath", "Public/VoxelIntBox.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A Box with int32 coordinates" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Min_MetaData[] = {
		{ "Category", "Voxel" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Min of the box. Inclusive\n" },
#endif
		{ "ModuleRelativePath", "Public/VoxelIntBox.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Min of the box. Inclusive" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Max_MetaData[] = {
		{ "Category", "Voxel" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Max of the box. Exclusive\n" },
#endif
		{ "ModuleRelativePath", "Public/VoxelIntBox.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Max of the box. Exclusive" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Min;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Max;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVoxelIntBox>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVoxelIntBox_Statics::NewProp_Min = { "Min", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVoxelIntBox, Min), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Min_MetaData), NewProp_Min_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVoxelIntBox_Statics::NewProp_Max = { "Max", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVoxelIntBox, Max), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Max_MetaData), NewProp_Max_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVoxelIntBox_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelIntBox_Statics::NewProp_Min,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelIntBox_Statics::NewProp_Max,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelIntBox_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVoxelIntBox_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
	nullptr,
	&NewStructOps,
	"VoxelIntBox",
	Z_Construct_UScriptStruct_FVoxelIntBox_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelIntBox_Statics::PropPointers),
	sizeof(FVoxelIntBox),
	alignof(FVoxelIntBox),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelIntBox_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVoxelIntBox_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FVoxelIntBox()
{
	if (!Z_Registration_Info_UScriptStruct_FVoxelIntBox.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FVoxelIntBox.InnerSingleton, Z_Construct_UScriptStruct_FVoxelIntBox_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FVoxelIntBox.InnerSingleton;
}
// ********** End ScriptStruct FVoxelIntBox ********************************************************

// ********** Begin ScriptStruct FVoxelIntBoxWithValidity ******************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FVoxelIntBoxWithValidity;
class UScriptStruct* FVoxelIntBoxWithValidity::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FVoxelIntBoxWithValidity.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FVoxelIntBoxWithValidity.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVoxelIntBoxWithValidity, (UObject*)Z_Construct_UPackage__Script_Voxel(), TEXT("VoxelIntBoxWithValidity"));
	}
	return Z_Registration_Info_UScriptStruct_FVoxelIntBoxWithValidity.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FVoxelIntBoxWithValidity_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Voxel Int Box with a IsValid flag\n" },
#endif
		{ "HasNativeBreak", "/Script/Voxel.VoxelIntBoxLibrary:BreakIntBoxWithValidity" },
		{ "HasNativeMake", "/Script/Voxel.VoxelIntBoxLibrary:MakeIntBoxWithValidity" },
		{ "ModuleRelativePath", "Public/VoxelIntBox.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Voxel Int Box with a IsValid flag" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Box_MetaData[] = {
		{ "ModuleRelativePath", "Public/VoxelIntBox.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bValid_MetaData[] = {
		{ "ModuleRelativePath", "Public/VoxelIntBox.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Box;
	static void NewProp_bValid_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bValid;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVoxelIntBoxWithValidity>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVoxelIntBoxWithValidity_Statics::NewProp_Box = { "Box", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVoxelIntBoxWithValidity, Box), Z_Construct_UScriptStruct_FVoxelIntBox, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Box_MetaData), NewProp_Box_MetaData) }; // 3520536583
void Z_Construct_UScriptStruct_FVoxelIntBoxWithValidity_Statics::NewProp_bValid_SetBit(void* Obj)
{
	((FVoxelIntBoxWithValidity*)Obj)->bValid = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVoxelIntBoxWithValidity_Statics::NewProp_bValid = { "bValid", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FVoxelIntBoxWithValidity), &Z_Construct_UScriptStruct_FVoxelIntBoxWithValidity_Statics::NewProp_bValid_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bValid_MetaData), NewProp_bValid_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVoxelIntBoxWithValidity_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelIntBoxWithValidity_Statics::NewProp_Box,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelIntBoxWithValidity_Statics::NewProp_bValid,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelIntBoxWithValidity_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVoxelIntBoxWithValidity_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
	nullptr,
	&NewStructOps,
	"VoxelIntBoxWithValidity",
	Z_Construct_UScriptStruct_FVoxelIntBoxWithValidity_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelIntBoxWithValidity_Statics::PropPointers),
	sizeof(FVoxelIntBoxWithValidity),
	alignof(FVoxelIntBoxWithValidity),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelIntBoxWithValidity_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVoxelIntBoxWithValidity_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FVoxelIntBoxWithValidity()
{
	if (!Z_Registration_Info_UScriptStruct_FVoxelIntBoxWithValidity.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FVoxelIntBoxWithValidity.InnerSingleton, Z_Construct_UScriptStruct_FVoxelIntBoxWithValidity_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FVoxelIntBoxWithValidity.InnerSingleton;
}
// ********** End ScriptStruct FVoxelIntBoxWithValidity ********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelIntBox_h__Script_Voxel_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FVoxelIntBox::StaticStruct, Z_Construct_UScriptStruct_FVoxelIntBox_Statics::NewStructOps, TEXT("VoxelIntBox"), &Z_Registration_Info_UScriptStruct_FVoxelIntBox, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVoxelIntBox), 3520536583U) },
		{ FVoxelIntBoxWithValidity::StaticStruct, Z_Construct_UScriptStruct_FVoxelIntBoxWithValidity_Statics::NewStructOps, TEXT("VoxelIntBoxWithValidity"), &Z_Registration_Info_UScriptStruct_FVoxelIntBoxWithValidity, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVoxelIntBoxWithValidity), 3067770411U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelIntBox_h__Script_Voxel_1020287001(TEXT("/Script/Voxel"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelIntBox_h__Script_Voxel_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelIntBox_h__Script_Voxel_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
