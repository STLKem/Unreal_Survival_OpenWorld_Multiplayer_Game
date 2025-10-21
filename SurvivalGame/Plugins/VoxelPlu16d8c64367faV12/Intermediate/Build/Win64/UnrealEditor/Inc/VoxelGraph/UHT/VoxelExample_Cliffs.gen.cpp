// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Examples/VoxelExample_Cliffs.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeVoxelExample_Cliffs() {}

// ********** Begin Cross Module References ********************************************************
UPackage* Z_Construct_UPackage__Script_VoxelGraph();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelExample_Cliffs();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelExample_Cliffs_NoRegister();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelGraphGeneratorHelper();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UVoxelExample_Cliffs *****************************************************
void UVoxelExample_Cliffs::StaticRegisterNativesUVoxelExample_Cliffs()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UVoxelExample_Cliffs;
UClass* UVoxelExample_Cliffs::GetPrivateStaticClass()
{
	using TClass = UVoxelExample_Cliffs;
	if (!Z_Registration_Info_UClass_UVoxelExample_Cliffs.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("VoxelExample_Cliffs"),
			Z_Registration_Info_UClass_UVoxelExample_Cliffs.InnerSingleton,
			StaticRegisterNativesUVoxelExample_Cliffs,
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
	return Z_Registration_Info_UClass_UVoxelExample_Cliffs.InnerSingleton;
}
UClass* Z_Construct_UClass_UVoxelExample_Cliffs_NoRegister()
{
	return UVoxelExample_Cliffs::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UVoxelExample_Cliffs_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Examples/VoxelExample_Cliffs.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Private/Examples/VoxelExample_Cliffs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Cliffs_Slope_MetaData[] = {
		{ "Category", "Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \n" },
#endif
		{ "DisplayName", "Cliffs Slope" },
		{ "ModuleRelativePath", "Private/Examples/VoxelExample_Cliffs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Height_MetaData[] = {
		{ "Category", "Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \n" },
#endif
		{ "DisplayName", "Height" },
		{ "ModuleRelativePath", "Private/Examples/VoxelExample_Cliffs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Overhangs_MetaData[] = {
		{ "Category", "Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \n" },
#endif
		{ "DisplayName", "Overhangs" },
		{ "ModuleRelativePath", "Private/Examples/VoxelExample_Cliffs.h" },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Base_Shape_Frequency_MetaData[] = {
		{ "Category", "Base Shape" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \n" },
#endif
		{ "DisplayName", "Base Shape Frequency" },
		{ "ModuleRelativePath", "Private/Examples/VoxelExample_Cliffs.h" },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Base_Shape_Offset_MetaData[] = {
		{ "Category", "Base Shape" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// < 0 : more holes; > 0: less holes\n" },
#endif
		{ "DisplayName", "Base Shape Offset" },
		{ "ModuleRelativePath", "Private/Examples/VoxelExample_Cliffs.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "< 0 : more holes; > 0: less holes" },
#endif
		{ "UIMax", "10" },
		{ "UIMin", "-10" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Base_Shape_Seed_MetaData[] = {
		{ "Category", "" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \n" },
#endif
		{ "DisplayName", "Base Shape Seed" },
		{ "ModuleRelativePath", "Private/Examples/VoxelExample_Cliffs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Sides_Noise_Seed_MetaData[] = {
		{ "Category", "" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \n" },
#endif
		{ "DisplayName", "Sides Noise Seed" },
		{ "ModuleRelativePath", "Private/Examples/VoxelExample_Cliffs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Top_Noise_Seed_MetaData[] = {
		{ "Category", "" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \n" },
#endif
		{ "DisplayName", "Top Noise Seed" },
		{ "ModuleRelativePath", "Private/Examples/VoxelExample_Cliffs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Sides_Noise_Amplitude_MetaData[] = {
		{ "Category", "Side Noise" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \n" },
#endif
		{ "DisplayName", "Sides Noise Amplitude" },
		{ "ModuleRelativePath", "Private/Examples/VoxelExample_Cliffs.h" },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Sides_Noise_Frequency_MetaData[] = {
		{ "Category", "Side Noise" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \n" },
#endif
		{ "DisplayName", "Sides Noise Frequency" },
		{ "ModuleRelativePath", "Private/Examples/VoxelExample_Cliffs.h" },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Top_Noise_Frequency_MetaData[] = {
		{ "Category", "Top Noise" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \n" },
#endif
		{ "DisplayName", "Top Noise Frequency" },
		{ "ModuleRelativePath", "Private/Examples/VoxelExample_Cliffs.h" },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Top_Noise_Scale_MetaData[] = {
		{ "Category", "Top Noise" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \n" },
#endif
		{ "DisplayName", "Top Noise Scale" },
		{ "ModuleRelativePath", "Private/Examples/VoxelExample_Cliffs.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Cliffs_Slope;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Height;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Overhangs;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Base_Shape_Frequency;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Base_Shape_Offset;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Base_Shape_Seed;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Sides_Noise_Seed;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Top_Noise_Seed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Sides_Noise_Amplitude;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Sides_Noise_Frequency;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Top_Noise_Frequency;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Top_Noise_Scale;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelExample_Cliffs>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVoxelExample_Cliffs_Statics::NewProp_Cliffs_Slope = { "Cliffs_Slope", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelExample_Cliffs, Cliffs_Slope), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Cliffs_Slope_MetaData), NewProp_Cliffs_Slope_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVoxelExample_Cliffs_Statics::NewProp_Height = { "Height", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelExample_Cliffs, Height), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Height_MetaData), NewProp_Height_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVoxelExample_Cliffs_Statics::NewProp_Overhangs = { "Overhangs", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelExample_Cliffs, Overhangs), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Overhangs_MetaData), NewProp_Overhangs_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVoxelExample_Cliffs_Statics::NewProp_Base_Shape_Frequency = { "Base_Shape_Frequency", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelExample_Cliffs, Base_Shape_Frequency), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Base_Shape_Frequency_MetaData), NewProp_Base_Shape_Frequency_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVoxelExample_Cliffs_Statics::NewProp_Base_Shape_Offset = { "Base_Shape_Offset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelExample_Cliffs, Base_Shape_Offset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Base_Shape_Offset_MetaData), NewProp_Base_Shape_Offset_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UVoxelExample_Cliffs_Statics::NewProp_Base_Shape_Seed = { "Base_Shape_Seed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelExample_Cliffs, Base_Shape_Seed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Base_Shape_Seed_MetaData), NewProp_Base_Shape_Seed_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UVoxelExample_Cliffs_Statics::NewProp_Sides_Noise_Seed = { "Sides_Noise_Seed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelExample_Cliffs, Sides_Noise_Seed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Sides_Noise_Seed_MetaData), NewProp_Sides_Noise_Seed_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UVoxelExample_Cliffs_Statics::NewProp_Top_Noise_Seed = { "Top_Noise_Seed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelExample_Cliffs, Top_Noise_Seed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Top_Noise_Seed_MetaData), NewProp_Top_Noise_Seed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVoxelExample_Cliffs_Statics::NewProp_Sides_Noise_Amplitude = { "Sides_Noise_Amplitude", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelExample_Cliffs, Sides_Noise_Amplitude), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Sides_Noise_Amplitude_MetaData), NewProp_Sides_Noise_Amplitude_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVoxelExample_Cliffs_Statics::NewProp_Sides_Noise_Frequency = { "Sides_Noise_Frequency", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelExample_Cliffs, Sides_Noise_Frequency), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Sides_Noise_Frequency_MetaData), NewProp_Sides_Noise_Frequency_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVoxelExample_Cliffs_Statics::NewProp_Top_Noise_Frequency = { "Top_Noise_Frequency", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelExample_Cliffs, Top_Noise_Frequency), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Top_Noise_Frequency_MetaData), NewProp_Top_Noise_Frequency_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVoxelExample_Cliffs_Statics::NewProp_Top_Noise_Scale = { "Top_Noise_Scale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelExample_Cliffs, Top_Noise_Scale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Top_Noise_Scale_MetaData), NewProp_Top_Noise_Scale_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelExample_Cliffs_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelExample_Cliffs_Statics::NewProp_Cliffs_Slope,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelExample_Cliffs_Statics::NewProp_Height,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelExample_Cliffs_Statics::NewProp_Overhangs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelExample_Cliffs_Statics::NewProp_Base_Shape_Frequency,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelExample_Cliffs_Statics::NewProp_Base_Shape_Offset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelExample_Cliffs_Statics::NewProp_Base_Shape_Seed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelExample_Cliffs_Statics::NewProp_Sides_Noise_Seed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelExample_Cliffs_Statics::NewProp_Top_Noise_Seed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelExample_Cliffs_Statics::NewProp_Sides_Noise_Amplitude,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelExample_Cliffs_Statics::NewProp_Sides_Noise_Frequency,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelExample_Cliffs_Statics::NewProp_Top_Noise_Frequency,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelExample_Cliffs_Statics::NewProp_Top_Noise_Scale,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelExample_Cliffs_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UVoxelExample_Cliffs_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UVoxelGraphGeneratorHelper,
	(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelExample_Cliffs_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelExample_Cliffs_Statics::ClassParams = {
	&UVoxelExample_Cliffs::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UVoxelExample_Cliffs_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelExample_Cliffs_Statics::PropPointers),
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelExample_Cliffs_Statics::Class_MetaDataParams), Z_Construct_UClass_UVoxelExample_Cliffs_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVoxelExample_Cliffs()
{
	if (!Z_Registration_Info_UClass_UVoxelExample_Cliffs.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelExample_Cliffs.OuterSingleton, Z_Construct_UClass_UVoxelExample_Cliffs_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVoxelExample_Cliffs.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelExample_Cliffs);
UVoxelExample_Cliffs::~UVoxelExample_Cliffs() {}
// ********** End Class UVoxelExample_Cliffs *******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_VoxelGraph_Private_Examples_VoxelExample_Cliffs_h__Script_VoxelGraph_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UVoxelExample_Cliffs, UVoxelExample_Cliffs::StaticClass, TEXT("UVoxelExample_Cliffs"), &Z_Registration_Info_UClass_UVoxelExample_Cliffs, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelExample_Cliffs), 3383799150U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_VoxelGraph_Private_Examples_VoxelExample_Cliffs_h__Script_VoxelGraph_4141603912(TEXT("/Script/VoxelGraph"),
	Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_VoxelGraph_Private_Examples_VoxelExample_Cliffs_h__Script_VoxelGraph_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_VoxelGraph_Private_Examples_VoxelExample_Cliffs_h__Script_VoxelGraph_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
