// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Examples/VoxelExample_HollowPlanet.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeVoxelExample_HollowPlanet() {}

// ********** Begin Cross Module References ********************************************************
UPackage* Z_Construct_UPackage__Script_VoxelGraph();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelExample_HollowPlanet();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelExample_HollowPlanet_NoRegister();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelGraphGeneratorHelper();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UVoxelExample_HollowPlanet ***********************************************
void UVoxelExample_HollowPlanet::StaticRegisterNativesUVoxelExample_HollowPlanet()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UVoxelExample_HollowPlanet;
UClass* UVoxelExample_HollowPlanet::GetPrivateStaticClass()
{
	using TClass = UVoxelExample_HollowPlanet;
	if (!Z_Registration_Info_UClass_UVoxelExample_HollowPlanet.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("VoxelExample_HollowPlanet"),
			Z_Registration_Info_UClass_UVoxelExample_HollowPlanet.InnerSingleton,
			StaticRegisterNativesUVoxelExample_HollowPlanet,
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
	return Z_Registration_Info_UClass_UVoxelExample_HollowPlanet.InnerSingleton;
}
UClass* Z_Construct_UClass_UVoxelExample_HollowPlanet_NoRegister()
{
	return UVoxelExample_HollowPlanet::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UVoxelExample_HollowPlanet_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Examples/VoxelExample_HollowPlanet.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Private/Examples/VoxelExample_HollowPlanet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Intersection_Smoothness_MetaData[] = {
		{ "Category", "" },
		{ "Comment", "// \n" },
		{ "DisplayName", "Intersection Smoothness" },
		{ "ModuleRelativePath", "Private/Examples/VoxelExample_HollowPlanet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Noise_Bias_MetaData[] = {
		{ "Category", "" },
		{ "Comment", "// Above 0: More ground. Below zero: less ground\n" },
		{ "DisplayName", "Noise Bias" },
		{ "ModuleRelativePath", "Private/Examples/VoxelExample_HollowPlanet.h" },
		{ "ToolTip", "Above 0: More ground. Below zero: less ground" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Noise_Frequency_MetaData[] = {
		{ "Category", "" },
		{ "Comment", "// \n" },
		{ "DisplayName", "Noise Frequency" },
		{ "ModuleRelativePath", "Private/Examples/VoxelExample_HollowPlanet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Noise_Scale_MetaData[] = {
		{ "Category", "" },
		{ "Comment", "// \n" },
		{ "DisplayName", "Noise Scale" },
		{ "ModuleRelativePath", "Private/Examples/VoxelExample_HollowPlanet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Radius_MetaData[] = {
		{ "Category", "" },
		{ "Comment", "// \n" },
		{ "DisplayName", "Radius" },
		{ "ModuleRelativePath", "Private/Examples/VoxelExample_HollowPlanet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Seed_MetaData[] = {
		{ "Category", "" },
		{ "Comment", "// \n" },
		{ "DisplayName", "Seed" },
		{ "ModuleRelativePath", "Private/Examples/VoxelExample_HollowPlanet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Use_IQ_Noise_MetaData[] = {
		{ "Category", "" },
		{ "Comment", "// \n" },
		{ "DisplayName", "Use IQ Noise" },
		{ "ModuleRelativePath", "Private/Examples/VoxelExample_HollowPlanet.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Intersection_Smoothness;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Noise_Bias;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Noise_Frequency;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Noise_Scale;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Seed;
	static void NewProp_Use_IQ_Noise_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Use_IQ_Noise;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelExample_HollowPlanet>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVoxelExample_HollowPlanet_Statics::NewProp_Intersection_Smoothness = { "Intersection_Smoothness", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelExample_HollowPlanet, Intersection_Smoothness), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Intersection_Smoothness_MetaData), NewProp_Intersection_Smoothness_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVoxelExample_HollowPlanet_Statics::NewProp_Noise_Bias = { "Noise_Bias", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelExample_HollowPlanet, Noise_Bias), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Noise_Bias_MetaData), NewProp_Noise_Bias_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVoxelExample_HollowPlanet_Statics::NewProp_Noise_Frequency = { "Noise_Frequency", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelExample_HollowPlanet, Noise_Frequency), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Noise_Frequency_MetaData), NewProp_Noise_Frequency_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVoxelExample_HollowPlanet_Statics::NewProp_Noise_Scale = { "Noise_Scale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelExample_HollowPlanet, Noise_Scale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Noise_Scale_MetaData), NewProp_Noise_Scale_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVoxelExample_HollowPlanet_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelExample_HollowPlanet, Radius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Radius_MetaData), NewProp_Radius_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UVoxelExample_HollowPlanet_Statics::NewProp_Seed = { "Seed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelExample_HollowPlanet, Seed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Seed_MetaData), NewProp_Seed_MetaData) };
void Z_Construct_UClass_UVoxelExample_HollowPlanet_Statics::NewProp_Use_IQ_Noise_SetBit(void* Obj)
{
	((UVoxelExample_HollowPlanet*)Obj)->Use_IQ_Noise = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVoxelExample_HollowPlanet_Statics::NewProp_Use_IQ_Noise = { "Use_IQ_Noise", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UVoxelExample_HollowPlanet), &Z_Construct_UClass_UVoxelExample_HollowPlanet_Statics::NewProp_Use_IQ_Noise_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Use_IQ_Noise_MetaData), NewProp_Use_IQ_Noise_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelExample_HollowPlanet_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelExample_HollowPlanet_Statics::NewProp_Intersection_Smoothness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelExample_HollowPlanet_Statics::NewProp_Noise_Bias,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelExample_HollowPlanet_Statics::NewProp_Noise_Frequency,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelExample_HollowPlanet_Statics::NewProp_Noise_Scale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelExample_HollowPlanet_Statics::NewProp_Radius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelExample_HollowPlanet_Statics::NewProp_Seed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelExample_HollowPlanet_Statics::NewProp_Use_IQ_Noise,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelExample_HollowPlanet_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UVoxelExample_HollowPlanet_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UVoxelGraphGeneratorHelper,
	(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelExample_HollowPlanet_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelExample_HollowPlanet_Statics::ClassParams = {
	&UVoxelExample_HollowPlanet::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UVoxelExample_HollowPlanet_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelExample_HollowPlanet_Statics::PropPointers),
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelExample_HollowPlanet_Statics::Class_MetaDataParams), Z_Construct_UClass_UVoxelExample_HollowPlanet_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVoxelExample_HollowPlanet()
{
	if (!Z_Registration_Info_UClass_UVoxelExample_HollowPlanet.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelExample_HollowPlanet.OuterSingleton, Z_Construct_UClass_UVoxelExample_HollowPlanet_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVoxelExample_HollowPlanet.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelExample_HollowPlanet);
UVoxelExample_HollowPlanet::~UVoxelExample_HollowPlanet() {}
// ********** End Class UVoxelExample_HollowPlanet *************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_VoxelGraph_Private_Examples_VoxelExample_HollowPlanet_h__Script_VoxelGraph_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UVoxelExample_HollowPlanet, UVoxelExample_HollowPlanet::StaticClass, TEXT("UVoxelExample_HollowPlanet"), &Z_Registration_Info_UClass_UVoxelExample_HollowPlanet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelExample_HollowPlanet), 2382660638U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_VoxelGraph_Private_Examples_VoxelExample_HollowPlanet_h__Script_VoxelGraph_1357728041(TEXT("/Script/VoxelGraph"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_VoxelGraph_Private_Examples_VoxelExample_HollowPlanet_h__Script_VoxelGraph_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_VoxelGraph_Private_Examples_VoxelExample_HollowPlanet_h__Script_VoxelGraph_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
