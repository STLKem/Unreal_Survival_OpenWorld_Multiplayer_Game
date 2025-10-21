// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VoxelNodes/VoxelVoronoiNoiseNodes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeVoxelVoronoiNoiseNodes() {}

// ********** Begin Cross Module References ********************************************************
UPackage* Z_Construct_UPackage__Script_VoxelGraph();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_2DVoronoiNoise();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_2DVoronoiNoise_NoRegister();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_VoronoiNoiseBase();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_VoronoiNoiseBase_NoRegister();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNodeHelper();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UVoxelNode_VoronoiNoiseBase **********************************************
void UVoxelNode_VoronoiNoiseBase::StaticRegisterNativesUVoxelNode_VoronoiNoiseBase()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UVoxelNode_VoronoiNoiseBase;
UClass* UVoxelNode_VoronoiNoiseBase::GetPrivateStaticClass()
{
	using TClass = UVoxelNode_VoronoiNoiseBase;
	if (!Z_Registration_Info_UClass_UVoxelNode_VoronoiNoiseBase.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("VoxelNode_VoronoiNoiseBase"),
			Z_Registration_Info_UClass_UVoxelNode_VoronoiNoiseBase.InnerSingleton,
			StaticRegisterNativesUVoxelNode_VoronoiNoiseBase,
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
	return Z_Registration_Info_UClass_UVoxelNode_VoronoiNoiseBase.InnerSingleton;
}
UClass* Z_Construct_UClass_UVoxelNode_VoronoiNoiseBase_NoRegister()
{
	return UVoxelNode_VoronoiNoiseBase::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UVoxelNode_VoronoiNoiseBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelNodes/VoxelVoronoiNoiseNodes.h" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelVoronoiNoiseNodes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bComputeNeighbors_MetaData[] = {
		{ "Category", "Voronoi settings" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelVoronoiNoiseNodes.h" },
		{ "ReconstructNode", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Dimension_MetaData[] = {
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelVoronoiNoiseNodes.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bComputeNeighbors_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bComputeNeighbors;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Dimension;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelNode_VoronoiNoiseBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UVoxelNode_VoronoiNoiseBase_Statics::NewProp_bComputeNeighbors_SetBit(void* Obj)
{
	((UVoxelNode_VoronoiNoiseBase*)Obj)->bComputeNeighbors = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVoxelNode_VoronoiNoiseBase_Statics::NewProp_bComputeNeighbors = { "bComputeNeighbors", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UVoxelNode_VoronoiNoiseBase), &Z_Construct_UClass_UVoxelNode_VoronoiNoiseBase_Statics::NewProp_bComputeNeighbors_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bComputeNeighbors_MetaData), NewProp_bComputeNeighbors_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UVoxelNode_VoronoiNoiseBase_Statics::NewProp_Dimension = { "Dimension", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelNode_VoronoiNoiseBase, Dimension), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Dimension_MetaData), NewProp_Dimension_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelNode_VoronoiNoiseBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelNode_VoronoiNoiseBase_Statics::NewProp_bComputeNeighbors,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelNode_VoronoiNoiseBase_Statics::NewProp_Dimension,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_VoronoiNoiseBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UVoxelNode_VoronoiNoiseBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UVoxelNodeHelper,
	(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_VoronoiNoiseBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelNode_VoronoiNoiseBase_Statics::ClassParams = {
	&UVoxelNode_VoronoiNoiseBase::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UVoxelNode_VoronoiNoiseBase_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_VoronoiNoiseBase_Statics::PropPointers),
	0,
	0x001010A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_VoronoiNoiseBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UVoxelNode_VoronoiNoiseBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVoxelNode_VoronoiNoiseBase()
{
	if (!Z_Registration_Info_UClass_UVoxelNode_VoronoiNoiseBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelNode_VoronoiNoiseBase.OuterSingleton, Z_Construct_UClass_UVoxelNode_VoronoiNoiseBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVoxelNode_VoronoiNoiseBase.OuterSingleton;
}
UVoxelNode_VoronoiNoiseBase::UVoxelNode_VoronoiNoiseBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelNode_VoronoiNoiseBase);
UVoxelNode_VoronoiNoiseBase::~UVoxelNode_VoronoiNoiseBase() {}
// ********** End Class UVoxelNode_VoronoiNoiseBase ************************************************

// ********** Begin Class UVoxelNode_2DVoronoiNoise ************************************************
void UVoxelNode_2DVoronoiNoise::StaticRegisterNativesUVoxelNode_2DVoronoiNoise()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UVoxelNode_2DVoronoiNoise;
UClass* UVoxelNode_2DVoronoiNoise::GetPrivateStaticClass()
{
	using TClass = UVoxelNode_2DVoronoiNoise;
	if (!Z_Registration_Info_UClass_UVoxelNode_2DVoronoiNoise.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("VoxelNode_2DVoronoiNoise"),
			Z_Registration_Info_UClass_UVoxelNode_2DVoronoiNoise.InnerSingleton,
			StaticRegisterNativesUVoxelNode_2DVoronoiNoise,
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
	return Z_Registration_Info_UClass_UVoxelNode_2DVoronoiNoise.InnerSingleton;
}
UClass* Z_Construct_UClass_UVoxelNode_2DVoronoiNoise_NoRegister()
{
	return UVoxelNode_2DVoronoiNoise::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UVoxelNode_2DVoronoiNoise_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Category", "Noise|Voronoi Noise" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// 2D Voronoi Noise\n" },
#endif
		{ "DisplayName", "2D Voronoi Noise" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelNodes/VoxelVoronoiNoiseNodes.h" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelVoronoiNoiseNodes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "2D Voronoi Noise" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelNode_2DVoronoiNoise>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UVoxelNode_2DVoronoiNoise_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UVoxelNode_VoronoiNoiseBase,
	(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_2DVoronoiNoise_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelNode_2DVoronoiNoise_Statics::ClassParams = {
	&UVoxelNode_2DVoronoiNoise::StaticClass,
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
	0x001010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_2DVoronoiNoise_Statics::Class_MetaDataParams), Z_Construct_UClass_UVoxelNode_2DVoronoiNoise_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVoxelNode_2DVoronoiNoise()
{
	if (!Z_Registration_Info_UClass_UVoxelNode_2DVoronoiNoise.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelNode_2DVoronoiNoise.OuterSingleton, Z_Construct_UClass_UVoxelNode_2DVoronoiNoise_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVoxelNode_2DVoronoiNoise.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelNode_2DVoronoiNoise);
UVoxelNode_2DVoronoiNoise::~UVoxelNode_2DVoronoiNoise() {}
// ********** End Class UVoxelNode_2DVoronoiNoise **************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_VoxelGraph_Public_VoxelNodes_VoxelVoronoiNoiseNodes_h__Script_VoxelGraph_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UVoxelNode_VoronoiNoiseBase, UVoxelNode_VoronoiNoiseBase::StaticClass, TEXT("UVoxelNode_VoronoiNoiseBase"), &Z_Registration_Info_UClass_UVoxelNode_VoronoiNoiseBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelNode_VoronoiNoiseBase), 1691462191U) },
		{ Z_Construct_UClass_UVoxelNode_2DVoronoiNoise, UVoxelNode_2DVoronoiNoise::StaticClass, TEXT("UVoxelNode_2DVoronoiNoise"), &Z_Registration_Info_UClass_UVoxelNode_2DVoronoiNoise, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelNode_2DVoronoiNoise), 1801370845U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_VoxelGraph_Public_VoxelNodes_VoxelVoronoiNoiseNodes_h__Script_VoxelGraph_1912995822(TEXT("/Script/VoxelGraph"),
	Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_VoxelGraph_Public_VoxelNodes_VoxelVoronoiNoiseNodes_h__Script_VoxelGraph_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_VoxelGraph_Public_VoxelNodes_VoxelVoronoiNoiseNodes_h__Script_VoxelGraph_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
