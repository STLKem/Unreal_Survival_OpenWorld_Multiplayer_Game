// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VoxelGraph/Public/VoxelNodes/VoxelGeneratorMergeNode.h"
#include "Voxel/Public/VoxelGenerators/VoxelGeneratorPicker.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeVoxelGeneratorMergeNode() {}

// ********** Begin Cross Module References ********************************************************
UPackage* Z_Construct_UPackage__Script_VoxelGraph();
VOXEL_API UEnum* Z_Construct_UEnum_Voxel_EVoxelMaterialConfig();
VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelGeneratorPicker();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelGraphOutputsConfig_NoRegister();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_GeneratorMerge();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_GeneratorMerge_NoRegister();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_GeneratorSamplerBase();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UVoxelNode_GeneratorMerge ************************************************
void UVoxelNode_GeneratorMerge::StaticRegisterNativesUVoxelNode_GeneratorMerge()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UVoxelNode_GeneratorMerge;
UClass* UVoxelNode_GeneratorMerge::GetPrivateStaticClass()
{
	using TClass = UVoxelNode_GeneratorMerge;
	if (!Z_Registration_Info_UClass_UVoxelNode_GeneratorMerge.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("VoxelNode_GeneratorMerge"),
			Z_Registration_Info_UClass_UVoxelNode_GeneratorMerge.InnerSingleton,
			StaticRegisterNativesUVoxelNode_GeneratorMerge,
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
	return Z_Registration_Info_UClass_UVoxelNode_GeneratorMerge.InnerSingleton;
}
UClass* Z_Construct_UClass_UVoxelNode_GeneratorMerge_NoRegister()
{
	return UVoxelNode_GeneratorMerge::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UVoxelNode_GeneratorMerge_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Category", "Generator" },
		{ "DisplayName", "Generator Merge" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelNodes/VoxelGeneratorMergeNode.h" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelGeneratorMergeNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Outputs_MetaData[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelGeneratorMergeNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaterialConfig_MetaData[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelGeneratorMergeNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Generators_MetaData[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelGeneratorMergeNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Tolerance_MetaData[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelGeneratorMergeNode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Outputs;
	static const UECodeGen_Private::FBytePropertyParams NewProp_MaterialConfig_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_MaterialConfig;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Generators_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Generators;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Tolerance;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelNode_GeneratorMerge>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVoxelNode_GeneratorMerge_Statics::NewProp_Outputs = { "Outputs", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelNode_GeneratorMerge, Outputs), Z_Construct_UClass_UVoxelGraphOutputsConfig_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Outputs_MetaData), NewProp_Outputs_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UVoxelNode_GeneratorMerge_Statics::NewProp_MaterialConfig_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UVoxelNode_GeneratorMerge_Statics::NewProp_MaterialConfig = { "MaterialConfig", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelNode_GeneratorMerge, MaterialConfig), Z_Construct_UEnum_Voxel_EVoxelMaterialConfig, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaterialConfig_MetaData), NewProp_MaterialConfig_MetaData) }; // 762384558
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVoxelNode_GeneratorMerge_Statics::NewProp_Generators_Inner = { "Generators", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVoxelGeneratorPicker, METADATA_PARAMS(0, nullptr) }; // 3276742823
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UVoxelNode_GeneratorMerge_Statics::NewProp_Generators = { "Generators", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelNode_GeneratorMerge, Generators), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Generators_MetaData), NewProp_Generators_MetaData) }; // 3276742823
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVoxelNode_GeneratorMerge_Statics::NewProp_Tolerance = { "Tolerance", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelNode_GeneratorMerge, Tolerance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tolerance_MetaData), NewProp_Tolerance_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelNode_GeneratorMerge_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelNode_GeneratorMerge_Statics::NewProp_Outputs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelNode_GeneratorMerge_Statics::NewProp_MaterialConfig_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelNode_GeneratorMerge_Statics::NewProp_MaterialConfig,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelNode_GeneratorMerge_Statics::NewProp_Generators_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelNode_GeneratorMerge_Statics::NewProp_Generators,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelNode_GeneratorMerge_Statics::NewProp_Tolerance,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_GeneratorMerge_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UVoxelNode_GeneratorMerge_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UVoxelNode_GeneratorSamplerBase,
	(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_GeneratorMerge_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelNode_GeneratorMerge_Statics::ClassParams = {
	&UVoxelNode_GeneratorMerge::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UVoxelNode_GeneratorMerge_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_GeneratorMerge_Statics::PropPointers),
	0,
	0x001010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_GeneratorMerge_Statics::Class_MetaDataParams), Z_Construct_UClass_UVoxelNode_GeneratorMerge_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVoxelNode_GeneratorMerge()
{
	if (!Z_Registration_Info_UClass_UVoxelNode_GeneratorMerge.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelNode_GeneratorMerge.OuterSingleton, Z_Construct_UClass_UVoxelNode_GeneratorMerge_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVoxelNode_GeneratorMerge.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelNode_GeneratorMerge);
UVoxelNode_GeneratorMerge::~UVoxelNode_GeneratorMerge() {}
// ********** End Class UVoxelNode_GeneratorMerge **************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_VoxelGraph_Public_VoxelNodes_VoxelGeneratorMergeNode_h__Script_VoxelGraph_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UVoxelNode_GeneratorMerge, UVoxelNode_GeneratorMerge::StaticClass, TEXT("UVoxelNode_GeneratorMerge"), &Z_Registration_Info_UClass_UVoxelNode_GeneratorMerge, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelNode_GeneratorMerge), 343066887U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_VoxelGraph_Public_VoxelNodes_VoxelGeneratorMergeNode_h__Script_VoxelGraph_4169436304(TEXT("/Script/VoxelGraph"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_VoxelGraph_Public_VoxelNodes_VoxelGeneratorMergeNode_h__Script_VoxelGraph_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_VoxelGraph_Public_VoxelNodes_VoxelGeneratorMergeNode_h__Script_VoxelGraph_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
