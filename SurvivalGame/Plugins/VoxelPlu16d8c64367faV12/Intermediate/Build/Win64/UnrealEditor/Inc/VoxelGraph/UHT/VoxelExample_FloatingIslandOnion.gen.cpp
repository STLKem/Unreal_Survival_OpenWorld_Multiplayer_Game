// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Examples/VoxelExample_FloatingIslandOnion.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeVoxelExample_FloatingIslandOnion() {}

// ********** Begin Cross Module References ********************************************************
UPackage* Z_Construct_UPackage__Script_VoxelGraph();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelExample_FloatingIslandOnion();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelExample_FloatingIslandOnion_NoRegister();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelGraphGeneratorHelper();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UVoxelExample_FloatingIslandOnion ****************************************
void UVoxelExample_FloatingIslandOnion::StaticRegisterNativesUVoxelExample_FloatingIslandOnion()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UVoxelExample_FloatingIslandOnion;
UClass* UVoxelExample_FloatingIslandOnion::GetPrivateStaticClass()
{
	using TClass = UVoxelExample_FloatingIslandOnion;
	if (!Z_Registration_Info_UClass_UVoxelExample_FloatingIslandOnion.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("VoxelExample_FloatingIslandOnion"),
			Z_Registration_Info_UClass_UVoxelExample_FloatingIslandOnion.InnerSingleton,
			StaticRegisterNativesUVoxelExample_FloatingIslandOnion,
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
	return Z_Registration_Info_UClass_UVoxelExample_FloatingIslandOnion.InnerSingleton;
}
UClass* Z_Construct_UClass_UVoxelExample_FloatingIslandOnion_NoRegister()
{
	return UVoxelExample_FloatingIslandOnion::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UVoxelExample_FloatingIslandOnion_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Examples/VoxelExample_FloatingIslandOnion.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Private/Examples/VoxelExample_FloatingIslandOnion.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Height_MetaData[] = {
		{ "Category", "" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \n" },
#endif
		{ "DisplayName", "Height" },
		{ "ModuleRelativePath", "Private/Examples/VoxelExample_FloatingIslandOnion.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Perturb_Amplitude_MetaData[] = {
		{ "Category", "" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \n" },
#endif
		{ "DisplayName", "Perturb Amplitude" },
		{ "ModuleRelativePath", "Private/Examples/VoxelExample_FloatingIslandOnion.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Perturb_Frequency_MetaData[] = {
		{ "Category", "" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \n" },
#endif
		{ "DisplayName", "Perturb Frequency" },
		{ "ModuleRelativePath", "Private/Examples/VoxelExample_FloatingIslandOnion.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Seed_MetaData[] = {
		{ "Category", "" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \n" },
#endif
		{ "DisplayName", "Seed" },
		{ "ModuleRelativePath", "Private/Examples/VoxelExample_FloatingIslandOnion.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Top_Noise_Frequency_MetaData[] = {
		{ "Category", "" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \n" },
#endif
		{ "DisplayName", "Top Noise Frequency" },
		{ "ModuleRelativePath", "Private/Examples/VoxelExample_FloatingIslandOnion.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Top_Noise_Height_MetaData[] = {
		{ "Category", "" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \n" },
#endif
		{ "DisplayName", "Top Noise Height" },
		{ "ModuleRelativePath", "Private/Examples/VoxelExample_FloatingIslandOnion.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Height;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Perturb_Amplitude;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Perturb_Frequency;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Seed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Top_Noise_Frequency;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Top_Noise_Height;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelExample_FloatingIslandOnion>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVoxelExample_FloatingIslandOnion_Statics::NewProp_Height = { "Height", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelExample_FloatingIslandOnion, Height), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Height_MetaData), NewProp_Height_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVoxelExample_FloatingIslandOnion_Statics::NewProp_Perturb_Amplitude = { "Perturb_Amplitude", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelExample_FloatingIslandOnion, Perturb_Amplitude), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Perturb_Amplitude_MetaData), NewProp_Perturb_Amplitude_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVoxelExample_FloatingIslandOnion_Statics::NewProp_Perturb_Frequency = { "Perturb_Frequency", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelExample_FloatingIslandOnion, Perturb_Frequency), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Perturb_Frequency_MetaData), NewProp_Perturb_Frequency_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UVoxelExample_FloatingIslandOnion_Statics::NewProp_Seed = { "Seed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelExample_FloatingIslandOnion, Seed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Seed_MetaData), NewProp_Seed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVoxelExample_FloatingIslandOnion_Statics::NewProp_Top_Noise_Frequency = { "Top_Noise_Frequency", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelExample_FloatingIslandOnion, Top_Noise_Frequency), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Top_Noise_Frequency_MetaData), NewProp_Top_Noise_Frequency_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVoxelExample_FloatingIslandOnion_Statics::NewProp_Top_Noise_Height = { "Top_Noise_Height", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelExample_FloatingIslandOnion, Top_Noise_Height), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Top_Noise_Height_MetaData), NewProp_Top_Noise_Height_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelExample_FloatingIslandOnion_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelExample_FloatingIslandOnion_Statics::NewProp_Height,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelExample_FloatingIslandOnion_Statics::NewProp_Perturb_Amplitude,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelExample_FloatingIslandOnion_Statics::NewProp_Perturb_Frequency,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelExample_FloatingIslandOnion_Statics::NewProp_Seed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelExample_FloatingIslandOnion_Statics::NewProp_Top_Noise_Frequency,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelExample_FloatingIslandOnion_Statics::NewProp_Top_Noise_Height,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelExample_FloatingIslandOnion_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UVoxelExample_FloatingIslandOnion_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UVoxelGraphGeneratorHelper,
	(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelExample_FloatingIslandOnion_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelExample_FloatingIslandOnion_Statics::ClassParams = {
	&UVoxelExample_FloatingIslandOnion::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UVoxelExample_FloatingIslandOnion_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelExample_FloatingIslandOnion_Statics::PropPointers),
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelExample_FloatingIslandOnion_Statics::Class_MetaDataParams), Z_Construct_UClass_UVoxelExample_FloatingIslandOnion_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVoxelExample_FloatingIslandOnion()
{
	if (!Z_Registration_Info_UClass_UVoxelExample_FloatingIslandOnion.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelExample_FloatingIslandOnion.OuterSingleton, Z_Construct_UClass_UVoxelExample_FloatingIslandOnion_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVoxelExample_FloatingIslandOnion.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelExample_FloatingIslandOnion);
UVoxelExample_FloatingIslandOnion::~UVoxelExample_FloatingIslandOnion() {}
// ********** End Class UVoxelExample_FloatingIslandOnion ******************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_VoxelGraph_Private_Examples_VoxelExample_FloatingIslandOnion_h__Script_VoxelGraph_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UVoxelExample_FloatingIslandOnion, UVoxelExample_FloatingIslandOnion::StaticClass, TEXT("UVoxelExample_FloatingIslandOnion"), &Z_Registration_Info_UClass_UVoxelExample_FloatingIslandOnion, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelExample_FloatingIslandOnion), 3830351102U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_VoxelGraph_Private_Examples_VoxelExample_FloatingIslandOnion_h__Script_VoxelGraph_1337541073(TEXT("/Script/VoxelGraph"),
	Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_VoxelGraph_Private_Examples_VoxelExample_FloatingIslandOnion_h__Script_VoxelGraph_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_VoxelGraph_Private_Examples_VoxelExample_FloatingIslandOnion_h__Script_VoxelGraph_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
