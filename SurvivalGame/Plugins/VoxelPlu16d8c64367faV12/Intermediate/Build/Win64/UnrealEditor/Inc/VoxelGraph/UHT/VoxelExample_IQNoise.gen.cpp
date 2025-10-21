// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Examples/VoxelExample_IQNoise.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeVoxelExample_IQNoise() {}

// ********** Begin Cross Module References ********************************************************
UPackage* Z_Construct_UPackage__Script_VoxelGraph();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelExample_IQNoise();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelExample_IQNoise_NoRegister();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelGraphGeneratorHelper();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UVoxelExample_IQNoise ****************************************************
void UVoxelExample_IQNoise::StaticRegisterNativesUVoxelExample_IQNoise()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UVoxelExample_IQNoise;
UClass* UVoxelExample_IQNoise::GetPrivateStaticClass()
{
	using TClass = UVoxelExample_IQNoise;
	if (!Z_Registration_Info_UClass_UVoxelExample_IQNoise.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("VoxelExample_IQNoise"),
			Z_Registration_Info_UClass_UVoxelExample_IQNoise.InnerSingleton,
			StaticRegisterNativesUVoxelExample_IQNoise,
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
	return Z_Registration_Info_UClass_UVoxelExample_IQNoise.InnerSingleton;
}
UClass* Z_Construct_UClass_UVoxelExample_IQNoise_NoRegister()
{
	return UVoxelExample_IQNoise::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UVoxelExample_IQNoise_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Examples/VoxelExample_IQNoise.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Private/Examples/VoxelExample_IQNoise.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Frequency_MetaData[] = {
		{ "Category", "" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \n" },
#endif
		{ "DisplayName", "Frequency" },
		{ "ModuleRelativePath", "Private/Examples/VoxelExample_IQNoise.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Height_MetaData[] = {
		{ "Category", "" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \n" },
#endif
		{ "DisplayName", "Height" },
		{ "ModuleRelativePath", "Private/Examples/VoxelExample_IQNoise.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Seed_MetaData[] = {
		{ "Category", "" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \n" },
#endif
		{ "DisplayName", "Seed" },
		{ "ModuleRelativePath", "Private/Examples/VoxelExample_IQNoise.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Frequency;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Height;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Seed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelExample_IQNoise>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVoxelExample_IQNoise_Statics::NewProp_Frequency = { "Frequency", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelExample_IQNoise, Frequency), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Frequency_MetaData), NewProp_Frequency_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVoxelExample_IQNoise_Statics::NewProp_Height = { "Height", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelExample_IQNoise, Height), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Height_MetaData), NewProp_Height_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UVoxelExample_IQNoise_Statics::NewProp_Seed = { "Seed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelExample_IQNoise, Seed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Seed_MetaData), NewProp_Seed_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelExample_IQNoise_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelExample_IQNoise_Statics::NewProp_Frequency,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelExample_IQNoise_Statics::NewProp_Height,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelExample_IQNoise_Statics::NewProp_Seed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelExample_IQNoise_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UVoxelExample_IQNoise_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UVoxelGraphGeneratorHelper,
	(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelExample_IQNoise_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelExample_IQNoise_Statics::ClassParams = {
	&UVoxelExample_IQNoise::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UVoxelExample_IQNoise_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelExample_IQNoise_Statics::PropPointers),
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelExample_IQNoise_Statics::Class_MetaDataParams), Z_Construct_UClass_UVoxelExample_IQNoise_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVoxelExample_IQNoise()
{
	if (!Z_Registration_Info_UClass_UVoxelExample_IQNoise.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelExample_IQNoise.OuterSingleton, Z_Construct_UClass_UVoxelExample_IQNoise_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVoxelExample_IQNoise.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelExample_IQNoise);
UVoxelExample_IQNoise::~UVoxelExample_IQNoise() {}
// ********** End Class UVoxelExample_IQNoise ******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_VoxelGraph_Private_Examples_VoxelExample_IQNoise_h__Script_VoxelGraph_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UVoxelExample_IQNoise, UVoxelExample_IQNoise::StaticClass, TEXT("UVoxelExample_IQNoise"), &Z_Registration_Info_UClass_UVoxelExample_IQNoise, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelExample_IQNoise), 1626277251U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_VoxelGraph_Private_Examples_VoxelExample_IQNoise_h__Script_VoxelGraph_3203923063(TEXT("/Script/VoxelGraph"),
	Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_VoxelGraph_Private_Examples_VoxelExample_IQNoise_h__Script_VoxelGraph_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_VoxelGraph_Private_Examples_VoxelExample_IQNoise_h__Script_VoxelGraph_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
