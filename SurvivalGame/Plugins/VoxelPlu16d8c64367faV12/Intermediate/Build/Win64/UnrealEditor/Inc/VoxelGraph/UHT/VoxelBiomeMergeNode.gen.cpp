// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VoxelNodes/VoxelBiomeMergeNode.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeVoxelBiomeMergeNode() {}

// ********** Begin Cross Module References ********************************************************
UPackage* Z_Construct_UPackage__Script_VoxelGraph();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_BiomeMerge();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_BiomeMerge_NoRegister();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UVoxelNode_BiomeMerge ****************************************************
void UVoxelNode_BiomeMerge::StaticRegisterNativesUVoxelNode_BiomeMerge()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UVoxelNode_BiomeMerge;
UClass* UVoxelNode_BiomeMerge::GetPrivateStaticClass()
{
	using TClass = UVoxelNode_BiomeMerge;
	if (!Z_Registration_Info_UClass_UVoxelNode_BiomeMerge.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("VoxelNode_BiomeMerge"),
			Z_Registration_Info_UClass_UVoxelNode_BiomeMerge.InnerSingleton,
			StaticRegisterNativesUVoxelNode_BiomeMerge,
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
	return Z_Registration_Info_UClass_UVoxelNode_BiomeMerge.InnerSingleton;
}
UClass* Z_Construct_UClass_UVoxelNode_BiomeMerge_NoRegister()
{
	return UVoxelNode_BiomeMerge::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UVoxelNode_BiomeMerge_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Category", "Biomes" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Merge biomes by generating nodes to do so.\n// Will also generate function separators, so you need to make all your data go through this\n// (check the Additional Data field)\n" },
#endif
		{ "DisplayName", "Biome Merge" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelNodes/VoxelBiomeMergeNode.h" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelBiomeMergeNode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Merge biomes by generating nodes to do so.\nWill also generate function separators, so you need to make all your data go through this\n(check the Additional Data field)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Biomes_MetaData[] = {
		{ "Category", "Biomes" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelBiomeMergeNode.h" },
		{ "ReconstructNode", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Tolerance_MetaData[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelBiomeMergeNode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Biomes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Biomes;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Tolerance;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelNode_BiomeMerge>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UVoxelNode_BiomeMerge_Statics::NewProp_Biomes_Inner = { "Biomes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UVoxelNode_BiomeMerge_Statics::NewProp_Biomes = { "Biomes", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelNode_BiomeMerge, Biomes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Biomes_MetaData), NewProp_Biomes_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVoxelNode_BiomeMerge_Statics::NewProp_Tolerance = { "Tolerance", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelNode_BiomeMerge, Tolerance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tolerance_MetaData), NewProp_Tolerance_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelNode_BiomeMerge_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelNode_BiomeMerge_Statics::NewProp_Biomes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelNode_BiomeMerge_Statics::NewProp_Biomes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelNode_BiomeMerge_Statics::NewProp_Tolerance,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_BiomeMerge_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UVoxelNode_BiomeMerge_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UVoxelNode,
	(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_BiomeMerge_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelNode_BiomeMerge_Statics::ClassParams = {
	&UVoxelNode_BiomeMerge::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UVoxelNode_BiomeMerge_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_BiomeMerge_Statics::PropPointers),
	0,
	0x001010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_BiomeMerge_Statics::Class_MetaDataParams), Z_Construct_UClass_UVoxelNode_BiomeMerge_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVoxelNode_BiomeMerge()
{
	if (!Z_Registration_Info_UClass_UVoxelNode_BiomeMerge.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelNode_BiomeMerge.OuterSingleton, Z_Construct_UClass_UVoxelNode_BiomeMerge_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVoxelNode_BiomeMerge.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelNode_BiomeMerge);
UVoxelNode_BiomeMerge::~UVoxelNode_BiomeMerge() {}
// ********** End Class UVoxelNode_BiomeMerge ******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_VoxelGraph_Public_VoxelNodes_VoxelBiomeMergeNode_h__Script_VoxelGraph_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UVoxelNode_BiomeMerge, UVoxelNode_BiomeMerge::StaticClass, TEXT("UVoxelNode_BiomeMerge"), &Z_Registration_Info_UClass_UVoxelNode_BiomeMerge, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelNode_BiomeMerge), 795295064U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_VoxelGraph_Public_VoxelNodes_VoxelBiomeMergeNode_h__Script_VoxelGraph_1747679196(TEXT("/Script/VoxelGraph"),
	Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_VoxelGraph_Public_VoxelNodes_VoxelBiomeMergeNode_h__Script_VoxelGraph_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_VoxelGraph_Public_VoxelNodes_VoxelBiomeMergeNode_h__Script_VoxelGraph_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
