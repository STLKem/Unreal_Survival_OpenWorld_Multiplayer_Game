// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Examples/VDI_Sphere_Graph.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeVDI_Sphere_Graph() {}

// ********** Begin Cross Module References ********************************************************
UPackage* Z_Construct_UPackage__Script_VoxelGraph();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVDI_Sphere_Graph();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVDI_Sphere_Graph_NoRegister();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelGraphGeneratorHelper();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UVDI_Sphere_Graph ********************************************************
void UVDI_Sphere_Graph::StaticRegisterNativesUVDI_Sphere_Graph()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UVDI_Sphere_Graph;
UClass* UVDI_Sphere_Graph::GetPrivateStaticClass()
{
	using TClass = UVDI_Sphere_Graph;
	if (!Z_Registration_Info_UClass_UVDI_Sphere_Graph.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("VDI_Sphere_Graph"),
			Z_Registration_Info_UClass_UVDI_Sphere_Graph.InnerSingleton,
			StaticRegisterNativesUVDI_Sphere_Graph,
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
	return Z_Registration_Info_UClass_UVDI_Sphere_Graph.InnerSingleton;
}
UClass* Z_Construct_UClass_UVDI_Sphere_Graph_NoRegister()
{
	return UVDI_Sphere_Graph::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UVDI_Sphere_Graph_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Examples/VDI_Sphere_Graph.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Private/Examples/VDI_Sphere_Graph.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVDI_Sphere_Graph>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UVDI_Sphere_Graph_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UVoxelGraphGeneratorHelper,
	(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVDI_Sphere_Graph_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVDI_Sphere_Graph_Statics::ClassParams = {
	&UVDI_Sphere_Graph::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVDI_Sphere_Graph_Statics::Class_MetaDataParams), Z_Construct_UClass_UVDI_Sphere_Graph_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVDI_Sphere_Graph()
{
	if (!Z_Registration_Info_UClass_UVDI_Sphere_Graph.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVDI_Sphere_Graph.OuterSingleton, Z_Construct_UClass_UVDI_Sphere_Graph_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVDI_Sphere_Graph.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVDI_Sphere_Graph);
UVDI_Sphere_Graph::~UVDI_Sphere_Graph() {}
// ********** End Class UVDI_Sphere_Graph **********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_VoxelGraph_Private_Examples_VDI_Sphere_Graph_h__Script_VoxelGraph_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UVDI_Sphere_Graph, UVDI_Sphere_Graph::StaticClass, TEXT("UVDI_Sphere_Graph"), &Z_Registration_Info_UClass_UVDI_Sphere_Graph, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVDI_Sphere_Graph), 3225808738U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_VoxelGraph_Private_Examples_VDI_Sphere_Graph_h__Script_VoxelGraph_159558561(TEXT("/Script/VoxelGraph"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_VoxelGraph_Private_Examples_VDI_Sphere_Graph_h__Script_VoxelGraph_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_VoxelGraph_Private_Examples_VDI_Sphere_Graph_h__Script_VoxelGraph_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
