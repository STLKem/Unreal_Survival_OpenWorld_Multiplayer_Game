// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VoxelEdGraph.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeVoxelEdGraph() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UEdGraph();
UPackage* Z_Construct_UPackage__Script_VoxelGraphEditor();
VOXELGRAPHEDITOR_API UClass* Z_Construct_UClass_UVoxelEdGraph();
VOXELGRAPHEDITOR_API UClass* Z_Construct_UClass_UVoxelEdGraph_NoRegister();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UVoxelEdGraph ************************************************************
void UVoxelEdGraph::StaticRegisterNativesUVoxelEdGraph()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UVoxelEdGraph;
UClass* UVoxelEdGraph::GetPrivateStaticClass()
{
	using TClass = UVoxelEdGraph;
	if (!Z_Registration_Info_UClass_UVoxelEdGraph.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("VoxelEdGraph"),
			Z_Registration_Info_UClass_UVoxelEdGraph.InnerSingleton,
			StaticRegisterNativesUVoxelEdGraph,
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
	return Z_Registration_Info_UClass_UVoxelEdGraph.InnerSingleton;
}
UClass* Z_Construct_UClass_UVoxelEdGraph_NoRegister()
{
	return UVoxelEdGraph::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UVoxelEdGraph_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "VoxelEdGraph.h" },
		{ "ModuleRelativePath", "Private/VoxelEdGraph.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelEdGraph>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UVoxelEdGraph_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UEdGraph,
	(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraphEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelEdGraph_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelEdGraph_Statics::ClassParams = {
	&UVoxelEdGraph::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelEdGraph_Statics::Class_MetaDataParams), Z_Construct_UClass_UVoxelEdGraph_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVoxelEdGraph()
{
	if (!Z_Registration_Info_UClass_UVoxelEdGraph.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelEdGraph.OuterSingleton, Z_Construct_UClass_UVoxelEdGraph_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVoxelEdGraph.OuterSingleton;
}
UVoxelEdGraph::UVoxelEdGraph(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelEdGraph);
UVoxelEdGraph::~UVoxelEdGraph() {}
// ********** End Class UVoxelEdGraph **************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_VoxelGraphEditor_Private_VoxelEdGraph_h__Script_VoxelGraphEditor_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UVoxelEdGraph, UVoxelEdGraph::StaticClass, TEXT("UVoxelEdGraph"), &Z_Registration_Info_UClass_UVoxelEdGraph, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelEdGraph), 1863410100U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_VoxelGraphEditor_Private_VoxelEdGraph_h__Script_VoxelGraphEditor_3303580242(TEXT("/Script/VoxelGraphEditor"),
	Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_VoxelGraphEditor_Private_VoxelEdGraph_h__Script_VoxelGraphEditor_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_VoxelGraphEditor_Private_VoxelEdGraph_h__Script_VoxelGraphEditor_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
