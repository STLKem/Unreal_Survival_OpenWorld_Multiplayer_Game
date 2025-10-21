// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VoxelGraph/Public/VoxelNodes/VoxelDataAssetSamplerNode.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeVoxelDataAssetSamplerNode() {}

// ********** Begin Cross Module References ********************************************************
UPackage* Z_Construct_UPackage__Script_VoxelGraph();
VOXEL_API UClass* Z_Construct_UClass_UVoxelDataAsset_NoRegister();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelExposedNode();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_DataAssetSampler();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_DataAssetSampler_NoRegister();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UVoxelNode_DataAssetSampler **********************************************
void UVoxelNode_DataAssetSampler::StaticRegisterNativesUVoxelNode_DataAssetSampler()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UVoxelNode_DataAssetSampler;
UClass* UVoxelNode_DataAssetSampler::GetPrivateStaticClass()
{
	using TClass = UVoxelNode_DataAssetSampler;
	if (!Z_Registration_Info_UClass_UVoxelNode_DataAssetSampler.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("VoxelNode_DataAssetSampler"),
			Z_Registration_Info_UClass_UVoxelNode_DataAssetSampler.InnerSingleton,
			StaticRegisterNativesUVoxelNode_DataAssetSampler,
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
	return Z_Registration_Info_UClass_UVoxelNode_DataAssetSampler.InnerSingleton;
}
UClass* Z_Construct_UClass_UVoxelNode_DataAssetSampler_NoRegister()
{
	return UVoxelNode_DataAssetSampler::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UVoxelNode_DataAssetSampler_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Category", "Heightmap" },
		{ "Comment", "// Voxel data asset sampler\n" },
		{ "DisplayName", "Data Asset Sampler" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelNodes/VoxelDataAssetSamplerNode.h" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelDataAssetSamplerNode.h" },
		{ "ToolTip", "Voxel data asset sampler" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Asset_MetaData[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelDataAssetSamplerNode.h" },
		{ "NonNull", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bBilinearInterpolation_MetaData[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelDataAssetSamplerNode.h" },
		{ "ReconstructNode", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Asset;
	static void NewProp_bBilinearInterpolation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bBilinearInterpolation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelNode_DataAssetSampler>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVoxelNode_DataAssetSampler_Statics::NewProp_Asset = { "Asset", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelNode_DataAssetSampler, Asset), Z_Construct_UClass_UVoxelDataAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Asset_MetaData), NewProp_Asset_MetaData) };
void Z_Construct_UClass_UVoxelNode_DataAssetSampler_Statics::NewProp_bBilinearInterpolation_SetBit(void* Obj)
{
	((UVoxelNode_DataAssetSampler*)Obj)->bBilinearInterpolation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVoxelNode_DataAssetSampler_Statics::NewProp_bBilinearInterpolation = { "bBilinearInterpolation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UVoxelNode_DataAssetSampler), &Z_Construct_UClass_UVoxelNode_DataAssetSampler_Statics::NewProp_bBilinearInterpolation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bBilinearInterpolation_MetaData), NewProp_bBilinearInterpolation_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelNode_DataAssetSampler_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelNode_DataAssetSampler_Statics::NewProp_Asset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelNode_DataAssetSampler_Statics::NewProp_bBilinearInterpolation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_DataAssetSampler_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UVoxelNode_DataAssetSampler_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UVoxelExposedNode,
	(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_DataAssetSampler_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelNode_DataAssetSampler_Statics::ClassParams = {
	&UVoxelNode_DataAssetSampler::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UVoxelNode_DataAssetSampler_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_DataAssetSampler_Statics::PropPointers),
	0,
	0x001010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_DataAssetSampler_Statics::Class_MetaDataParams), Z_Construct_UClass_UVoxelNode_DataAssetSampler_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVoxelNode_DataAssetSampler()
{
	if (!Z_Registration_Info_UClass_UVoxelNode_DataAssetSampler.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelNode_DataAssetSampler.OuterSingleton, Z_Construct_UClass_UVoxelNode_DataAssetSampler_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVoxelNode_DataAssetSampler.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelNode_DataAssetSampler);
UVoxelNode_DataAssetSampler::~UVoxelNode_DataAssetSampler() {}
// ********** End Class UVoxelNode_DataAssetSampler ************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_VoxelGraph_Public_VoxelNodes_VoxelDataAssetSamplerNode_h__Script_VoxelGraph_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UVoxelNode_DataAssetSampler, UVoxelNode_DataAssetSampler::StaticClass, TEXT("UVoxelNode_DataAssetSampler"), &Z_Registration_Info_UClass_UVoxelNode_DataAssetSampler, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelNode_DataAssetSampler), 3554717484U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_VoxelGraph_Public_VoxelNodes_VoxelDataAssetSamplerNode_h__Script_VoxelGraph_1672043225(TEXT("/Script/VoxelGraph"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_VoxelGraph_Public_VoxelNodes_VoxelDataAssetSamplerNode_h__Script_VoxelGraph_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_VoxelGraph_Public_VoxelNodes_VoxelDataAssetSamplerNode_h__Script_VoxelGraph_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
