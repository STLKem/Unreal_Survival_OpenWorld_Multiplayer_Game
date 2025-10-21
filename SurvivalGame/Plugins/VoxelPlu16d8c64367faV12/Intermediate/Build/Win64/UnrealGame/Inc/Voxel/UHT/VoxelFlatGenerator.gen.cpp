// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Voxel/Public/VoxelGenerators/VoxelFlatGenerator.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeVoxelFlatGenerator() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
UPackage* Z_Construct_UPackage__Script_Voxel();
VOXEL_API UClass* Z_Construct_UClass_UVoxelFlatGenerator();
VOXEL_API UClass* Z_Construct_UClass_UVoxelFlatGenerator_NoRegister();
VOXEL_API UClass* Z_Construct_UClass_UVoxelGenerator();
VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelFlatGeneratorDataItemConfig();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FVoxelFlatGeneratorDataItemConfig *********************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FVoxelFlatGeneratorDataItemConfig;
class UScriptStruct* FVoxelFlatGeneratorDataItemConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FVoxelFlatGeneratorDataItemConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FVoxelFlatGeneratorDataItemConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVoxelFlatGeneratorDataItemConfig, (UObject*)Z_Construct_UPackage__Script_Voxel(), TEXT("VoxelFlatGeneratorDataItemConfig"));
	}
	return Z_Registration_Info_UScriptStruct_FVoxelFlatGeneratorDataItemConfig.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FVoxelFlatGeneratorDataItemConfig_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/VoxelGenerators/VoxelFlatGenerator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Smoothness_MetaData[] = {
		{ "Category", "Config" },
		{ "Comment", "// In voxels, how smooth the intersection with the existing terrain and these items should be\n" },
		{ "ModuleRelativePath", "Public/VoxelGenerators/VoxelFlatGenerator.h" },
		{ "ToolTip", "In voxels, how smooth the intersection with the existing terrain and these items should be" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mask_MetaData[] = {
		{ "Bitmask", "" },
		{ "BitmaskEnum", "/Script/Voxel.EVoxel32BitMask" },
		{ "Category", "Config" },
		{ "Comment", "// Only items matching this mask will be added\n" },
		{ "ModuleRelativePath", "Public/VoxelGenerators/VoxelFlatGenerator.h" },
		{ "ToolTip", "Only items matching this mask will be added" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSubtractItems_MetaData[] = {
		{ "Category", "Config" },
		{ "Comment", "// If true, will subtract the items from the world and will invert their values\n// If false, will add the items to the world and will not invert their values\n" },
		{ "ModuleRelativePath", "Public/VoxelGenerators/VoxelFlatGenerator.h" },
		{ "ToolTip", "If true, will subtract the items from the world and will invert their values\nIf false, will add the items to the world and will not invert their values" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Smoothness;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Mask;
	static void NewProp_bSubtractItems_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSubtractItems;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVoxelFlatGeneratorDataItemConfig>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVoxelFlatGeneratorDataItemConfig_Statics::NewProp_Smoothness = { "Smoothness", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVoxelFlatGeneratorDataItemConfig, Smoothness), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Smoothness_MetaData), NewProp_Smoothness_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FVoxelFlatGeneratorDataItemConfig_Statics::NewProp_Mask = { "Mask", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVoxelFlatGeneratorDataItemConfig, Mask), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mask_MetaData), NewProp_Mask_MetaData) };
void Z_Construct_UScriptStruct_FVoxelFlatGeneratorDataItemConfig_Statics::NewProp_bSubtractItems_SetBit(void* Obj)
{
	((FVoxelFlatGeneratorDataItemConfig*)Obj)->bSubtractItems = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVoxelFlatGeneratorDataItemConfig_Statics::NewProp_bSubtractItems = { "bSubtractItems", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FVoxelFlatGeneratorDataItemConfig), &Z_Construct_UScriptStruct_FVoxelFlatGeneratorDataItemConfig_Statics::NewProp_bSubtractItems_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSubtractItems_MetaData), NewProp_bSubtractItems_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVoxelFlatGeneratorDataItemConfig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelFlatGeneratorDataItemConfig_Statics::NewProp_Smoothness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelFlatGeneratorDataItemConfig_Statics::NewProp_Mask,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelFlatGeneratorDataItemConfig_Statics::NewProp_bSubtractItems,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelFlatGeneratorDataItemConfig_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVoxelFlatGeneratorDataItemConfig_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
	nullptr,
	&NewStructOps,
	"VoxelFlatGeneratorDataItemConfig",
	Z_Construct_UScriptStruct_FVoxelFlatGeneratorDataItemConfig_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelFlatGeneratorDataItemConfig_Statics::PropPointers),
	sizeof(FVoxelFlatGeneratorDataItemConfig),
	alignof(FVoxelFlatGeneratorDataItemConfig),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelFlatGeneratorDataItemConfig_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVoxelFlatGeneratorDataItemConfig_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FVoxelFlatGeneratorDataItemConfig()
{
	if (!Z_Registration_Info_UScriptStruct_FVoxelFlatGeneratorDataItemConfig.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FVoxelFlatGeneratorDataItemConfig.InnerSingleton, Z_Construct_UScriptStruct_FVoxelFlatGeneratorDataItemConfig_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FVoxelFlatGeneratorDataItemConfig.InnerSingleton;
}
// ********** End ScriptStruct FVoxelFlatGeneratorDataItemConfig ***********************************

// ********** Begin Class UVoxelFlatGenerator ******************************************************
void UVoxelFlatGenerator::StaticRegisterNativesUVoxelFlatGenerator()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UVoxelFlatGenerator;
UClass* UVoxelFlatGenerator::GetPrivateStaticClass()
{
	using TClass = UVoxelFlatGenerator;
	if (!Z_Registration_Info_UClass_UVoxelFlatGenerator.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("VoxelFlatGenerator"),
			Z_Registration_Info_UClass_UVoxelFlatGenerator.InnerSingleton,
			StaticRegisterNativesUVoxelFlatGenerator,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_UVoxelFlatGenerator.InnerSingleton;
}
UClass* Z_Construct_UClass_UVoxelFlatGenerator_NoRegister()
{
	return UVoxelFlatGenerator::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UVoxelFlatGenerator_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Flat world\n */" },
		{ "IncludePath", "VoxelGenerators/VoxelFlatGenerator.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/VoxelGenerators/VoxelFlatGenerator.h" },
		{ "ToolTip", "Flat world" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelGenerators/VoxelFlatGenerator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DataItemConfigs_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelGenerators/VoxelFlatGenerator.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DataItemConfigs_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DataItemConfigs;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelFlatGenerator>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVoxelFlatGenerator_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelFlatGenerator, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Color_MetaData), NewProp_Color_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVoxelFlatGenerator_Statics::NewProp_DataItemConfigs_Inner = { "DataItemConfigs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVoxelFlatGeneratorDataItemConfig, METADATA_PARAMS(0, nullptr) }; // 3315750016
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UVoxelFlatGenerator_Statics::NewProp_DataItemConfigs = { "DataItemConfigs", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelFlatGenerator, DataItemConfigs), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DataItemConfigs_MetaData), NewProp_DataItemConfigs_MetaData) }; // 3315750016
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelFlatGenerator_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelFlatGenerator_Statics::NewProp_Color,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelFlatGenerator_Statics::NewProp_DataItemConfigs_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelFlatGenerator_Statics::NewProp_DataItemConfigs,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelFlatGenerator_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UVoxelFlatGenerator_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UVoxelGenerator,
	(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelFlatGenerator_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelFlatGenerator_Statics::ClassParams = {
	&UVoxelFlatGenerator::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UVoxelFlatGenerator_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelFlatGenerator_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelFlatGenerator_Statics::Class_MetaDataParams), Z_Construct_UClass_UVoxelFlatGenerator_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVoxelFlatGenerator()
{
	if (!Z_Registration_Info_UClass_UVoxelFlatGenerator.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelFlatGenerator.OuterSingleton, Z_Construct_UClass_UVoxelFlatGenerator_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVoxelFlatGenerator.OuterSingleton;
}
UVoxelFlatGenerator::UVoxelFlatGenerator(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelFlatGenerator);
UVoxelFlatGenerator::~UVoxelFlatGenerator() {}
// ********** End Class UVoxelFlatGenerator ********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelGenerators_VoxelFlatGenerator_h__Script_Voxel_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FVoxelFlatGeneratorDataItemConfig::StaticStruct, Z_Construct_UScriptStruct_FVoxelFlatGeneratorDataItemConfig_Statics::NewStructOps, TEXT("VoxelFlatGeneratorDataItemConfig"), &Z_Registration_Info_UScriptStruct_FVoxelFlatGeneratorDataItemConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVoxelFlatGeneratorDataItemConfig), 3315750016U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UVoxelFlatGenerator, UVoxelFlatGenerator::StaticClass, TEXT("UVoxelFlatGenerator"), &Z_Registration_Info_UClass_UVoxelFlatGenerator, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelFlatGenerator), 3701482133U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelGenerators_VoxelFlatGenerator_h__Script_Voxel_2790745276(TEXT("/Script/Voxel"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelGenerators_VoxelFlatGenerator_h__Script_Voxel_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelGenerators_VoxelFlatGenerator_h__Script_Voxel_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelGenerators_VoxelFlatGenerator_h__Script_Voxel_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelGenerators_VoxelFlatGenerator_h__Script_Voxel_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
