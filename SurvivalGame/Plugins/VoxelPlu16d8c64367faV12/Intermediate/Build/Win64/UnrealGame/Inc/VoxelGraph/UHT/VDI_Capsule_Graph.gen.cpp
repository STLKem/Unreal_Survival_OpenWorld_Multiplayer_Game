// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Examples/VDI_Capsule_Graph.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeVDI_Capsule_Graph() {}

// ********** Begin Cross Module References ********************************************************
UPackage* Z_Construct_UPackage__Script_VoxelGraph();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVDI_Capsule_Graph();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVDI_Capsule_Graph_NoRegister();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelGraphGeneratorHelper();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UVDI_Capsule_Graph *******************************************************
void UVDI_Capsule_Graph::StaticRegisterNativesUVDI_Capsule_Graph()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UVDI_Capsule_Graph;
UClass* UVDI_Capsule_Graph::GetPrivateStaticClass()
{
	using TClass = UVDI_Capsule_Graph;
	if (!Z_Registration_Info_UClass_UVDI_Capsule_Graph.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("VDI_Capsule_Graph"),
			Z_Registration_Info_UClass_UVDI_Capsule_Graph.InnerSingleton,
			StaticRegisterNativesUVDI_Capsule_Graph,
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
	return Z_Registration_Info_UClass_UVDI_Capsule_Graph.InnerSingleton;
}
UClass* Z_Construct_UClass_UVDI_Capsule_Graph_NoRegister()
{
	return UVDI_Capsule_Graph::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UVDI_Capsule_Graph_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Examples/VDI_Capsule_Graph.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Private/Examples/VDI_Capsule_Graph.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Noise_Amplitude_MetaData[] = {
		{ "Category", "" },
		{ "Comment", "// Relative to the radius\n" },
		{ "DisplayName", "Noise Amplitude" },
		{ "ModuleRelativePath", "Private/Examples/VDI_Capsule_Graph.h" },
		{ "ToolTip", "Relative to the radius" },
		{ "UIMax", "2" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Seed_MetaData[] = {
		{ "Category", "" },
		{ "Comment", "// \n" },
		{ "DisplayName", "Seed" },
		{ "ModuleRelativePath", "Private/Examples/VDI_Capsule_Graph.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Noise_Amplitude;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Seed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVDI_Capsule_Graph>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVDI_Capsule_Graph_Statics::NewProp_Noise_Amplitude = { "Noise_Amplitude", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVDI_Capsule_Graph, Noise_Amplitude), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Noise_Amplitude_MetaData), NewProp_Noise_Amplitude_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UVDI_Capsule_Graph_Statics::NewProp_Seed = { "Seed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVDI_Capsule_Graph, Seed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Seed_MetaData), NewProp_Seed_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVDI_Capsule_Graph_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVDI_Capsule_Graph_Statics::NewProp_Noise_Amplitude,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVDI_Capsule_Graph_Statics::NewProp_Seed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVDI_Capsule_Graph_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UVDI_Capsule_Graph_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UVoxelGraphGeneratorHelper,
	(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVDI_Capsule_Graph_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVDI_Capsule_Graph_Statics::ClassParams = {
	&UVDI_Capsule_Graph::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UVDI_Capsule_Graph_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UVDI_Capsule_Graph_Statics::PropPointers),
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVDI_Capsule_Graph_Statics::Class_MetaDataParams), Z_Construct_UClass_UVDI_Capsule_Graph_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVDI_Capsule_Graph()
{
	if (!Z_Registration_Info_UClass_UVDI_Capsule_Graph.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVDI_Capsule_Graph.OuterSingleton, Z_Construct_UClass_UVDI_Capsule_Graph_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVDI_Capsule_Graph.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVDI_Capsule_Graph);
UVDI_Capsule_Graph::~UVDI_Capsule_Graph() {}
// ********** End Class UVDI_Capsule_Graph *********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_VoxelGraph_Private_Examples_VDI_Capsule_Graph_h__Script_VoxelGraph_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UVDI_Capsule_Graph, UVDI_Capsule_Graph::StaticClass, TEXT("UVDI_Capsule_Graph"), &Z_Registration_Info_UClass_UVDI_Capsule_Graph, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVDI_Capsule_Graph), 1314693370U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_VoxelGraph_Private_Examples_VDI_Capsule_Graph_h__Script_VoxelGraph_2653461253(TEXT("/Script/VoxelGraph"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_VoxelGraph_Private_Examples_VDI_Capsule_Graph_h__Script_VoxelGraph_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_VoxelGraph_Private_Examples_VDI_Capsule_Graph_h__Script_VoxelGraph_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
