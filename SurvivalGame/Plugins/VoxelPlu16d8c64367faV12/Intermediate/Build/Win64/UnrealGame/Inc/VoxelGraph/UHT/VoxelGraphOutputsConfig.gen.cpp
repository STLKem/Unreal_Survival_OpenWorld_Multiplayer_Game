// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VoxelGraph/Public/VoxelGraphOutputsConfig.h"
#include "VoxelGraph/Public/VoxelGraphOutputs.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeVoxelGraphOutputsConfig() {}

// ********** Begin Cross Module References ********************************************************
UPackage* Z_Construct_UPackage__Script_VoxelGraph();
VOXEL_API UClass* Z_Construct_UClass_UVoxelSpawnerOutputsConfig();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelGraphOutputsConfig();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelGraphOutputsConfig_NoRegister();
VOXELGRAPH_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelGraphOutput();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UVoxelGraphOutputsConfig *************************************************
void UVoxelGraphOutputsConfig::StaticRegisterNativesUVoxelGraphOutputsConfig()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UVoxelGraphOutputsConfig;
UClass* UVoxelGraphOutputsConfig::GetPrivateStaticClass()
{
	using TClass = UVoxelGraphOutputsConfig;
	if (!Z_Registration_Info_UClass_UVoxelGraphOutputsConfig.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("VoxelGraphOutputsConfig"),
			Z_Registration_Info_UClass_UVoxelGraphOutputsConfig.InnerSingleton,
			StaticRegisterNativesUVoxelGraphOutputsConfig,
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
	return Z_Registration_Info_UClass_UVoxelGraphOutputsConfig.InnerSingleton;
}
UClass* Z_Construct_UClass_UVoxelGraphOutputsConfig_NoRegister()
{
	return UVoxelGraphOutputsConfig::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UVoxelGraphOutputsConfig_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "VoxelGraphOutputsConfig.h" },
		{ "ModuleRelativePath", "Public/VoxelGraphOutputsConfig.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Outputs_MetaData[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Public/VoxelGraphOutputsConfig.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Outputs_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Outputs;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelGraphOutputsConfig>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVoxelGraphOutputsConfig_Statics::NewProp_Outputs_Inner = { "Outputs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVoxelGraphOutput, METADATA_PARAMS(0, nullptr) }; // 506689577
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UVoxelGraphOutputsConfig_Statics::NewProp_Outputs = { "Outputs", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelGraphOutputsConfig, Outputs), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Outputs_MetaData), NewProp_Outputs_MetaData) }; // 506689577
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelGraphOutputsConfig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelGraphOutputsConfig_Statics::NewProp_Outputs_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelGraphOutputsConfig_Statics::NewProp_Outputs,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelGraphOutputsConfig_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UVoxelGraphOutputsConfig_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UVoxelSpawnerOutputsConfig,
	(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelGraphOutputsConfig_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelGraphOutputsConfig_Statics::ClassParams = {
	&UVoxelGraphOutputsConfig::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UVoxelGraphOutputsConfig_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelGraphOutputsConfig_Statics::PropPointers),
	0,
	0x001020A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelGraphOutputsConfig_Statics::Class_MetaDataParams), Z_Construct_UClass_UVoxelGraphOutputsConfig_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVoxelGraphOutputsConfig()
{
	if (!Z_Registration_Info_UClass_UVoxelGraphOutputsConfig.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelGraphOutputsConfig.OuterSingleton, Z_Construct_UClass_UVoxelGraphOutputsConfig_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVoxelGraphOutputsConfig.OuterSingleton;
}
UVoxelGraphOutputsConfig::UVoxelGraphOutputsConfig(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelGraphOutputsConfig);
UVoxelGraphOutputsConfig::~UVoxelGraphOutputsConfig() {}
// ********** End Class UVoxelGraphOutputsConfig ***************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_VoxelGraph_Public_VoxelGraphOutputsConfig_h__Script_VoxelGraph_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UVoxelGraphOutputsConfig, UVoxelGraphOutputsConfig::StaticClass, TEXT("UVoxelGraphOutputsConfig"), &Z_Registration_Info_UClass_UVoxelGraphOutputsConfig, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelGraphOutputsConfig), 1776572650U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_VoxelGraph_Public_VoxelGraphOutputsConfig_h__Script_VoxelGraph_3004376364(TEXT("/Script/VoxelGraph"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_VoxelGraph_Public_VoxelGraphOutputsConfig_h__Script_VoxelGraph_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_VoxelGraph_Public_VoxelGraphOutputsConfig_h__Script_VoxelGraph_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
