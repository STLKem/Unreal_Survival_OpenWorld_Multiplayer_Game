// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Examples/VoxelExample_Ravines.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeVoxelExample_Ravines() {}

// ********** Begin Cross Module References ********************************************************
UPackage* Z_Construct_UPackage__Script_VoxelGraph();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelExample_Ravines();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelExample_Ravines_NoRegister();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelGraphGeneratorHelper();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UVoxelExample_Ravines ****************************************************
void UVoxelExample_Ravines::StaticRegisterNativesUVoxelExample_Ravines()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UVoxelExample_Ravines;
UClass* UVoxelExample_Ravines::GetPrivateStaticClass()
{
	using TClass = UVoxelExample_Ravines;
	if (!Z_Registration_Info_UClass_UVoxelExample_Ravines.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("VoxelExample_Ravines"),
			Z_Registration_Info_UClass_UVoxelExample_Ravines.InnerSingleton,
			StaticRegisterNativesUVoxelExample_Ravines,
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
	return Z_Registration_Info_UClass_UVoxelExample_Ravines.InnerSingleton;
}
UClass* Z_Construct_UClass_UVoxelExample_Ravines_NoRegister()
{
	return UVoxelExample_Ravines::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UVoxelExample_Ravines_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Examples/VoxelExample_Ravines.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Private/Examples/VoxelExample_Ravines.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__3D_Noise_Frequency_MetaData[] = {
		{ "Category", "" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \n" },
#endif
		{ "DisplayName", "3D Noise Frequency" },
		{ "ModuleRelativePath", "Private/Examples/VoxelExample_Ravines.h" },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__3D_Noise_Seed_MetaData[] = {
		{ "Category", "" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \n" },
#endif
		{ "DisplayName", "3D Noise Seed" },
		{ "ModuleRelativePath", "Private/Examples/VoxelExample_Ravines.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Bottom_Transition_Smoothness_MetaData[] = {
		{ "Category", "" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \n" },
#endif
		{ "DisplayName", "Bottom Transition Smoothness" },
		{ "ModuleRelativePath", "Private/Examples/VoxelExample_Ravines.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Height_MetaData[] = {
		{ "Category", "" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \n" },
#endif
		{ "DisplayName", "Height" },
		{ "ModuleRelativePath", "Private/Examples/VoxelExample_Ravines.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Top_Transition_Smoothness_MetaData[] = {
		{ "Category", "" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \n" },
#endif
		{ "DisplayName", "Top Transition Smoothness" },
		{ "ModuleRelativePath", "Private/Examples/VoxelExample_Ravines.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp__3D_Noise_Frequency;
	static const UECodeGen_Private::FIntPropertyParams NewProp__3D_Noise_Seed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Bottom_Transition_Smoothness;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Height;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Top_Transition_Smoothness;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelExample_Ravines>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVoxelExample_Ravines_Statics::NewProp__3D_Noise_Frequency = { "_3D_Noise_Frequency", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelExample_Ravines, _3D_Noise_Frequency), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__3D_Noise_Frequency_MetaData), NewProp__3D_Noise_Frequency_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UVoxelExample_Ravines_Statics::NewProp__3D_Noise_Seed = { "_3D_Noise_Seed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelExample_Ravines, _3D_Noise_Seed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__3D_Noise_Seed_MetaData), NewProp__3D_Noise_Seed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVoxelExample_Ravines_Statics::NewProp_Bottom_Transition_Smoothness = { "Bottom_Transition_Smoothness", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelExample_Ravines, Bottom_Transition_Smoothness), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Bottom_Transition_Smoothness_MetaData), NewProp_Bottom_Transition_Smoothness_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVoxelExample_Ravines_Statics::NewProp_Height = { "Height", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelExample_Ravines, Height), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Height_MetaData), NewProp_Height_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVoxelExample_Ravines_Statics::NewProp_Top_Transition_Smoothness = { "Top_Transition_Smoothness", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelExample_Ravines, Top_Transition_Smoothness), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Top_Transition_Smoothness_MetaData), NewProp_Top_Transition_Smoothness_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelExample_Ravines_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelExample_Ravines_Statics::NewProp__3D_Noise_Frequency,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelExample_Ravines_Statics::NewProp__3D_Noise_Seed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelExample_Ravines_Statics::NewProp_Bottom_Transition_Smoothness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelExample_Ravines_Statics::NewProp_Height,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelExample_Ravines_Statics::NewProp_Top_Transition_Smoothness,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelExample_Ravines_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UVoxelExample_Ravines_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UVoxelGraphGeneratorHelper,
	(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelExample_Ravines_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelExample_Ravines_Statics::ClassParams = {
	&UVoxelExample_Ravines::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UVoxelExample_Ravines_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelExample_Ravines_Statics::PropPointers),
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelExample_Ravines_Statics::Class_MetaDataParams), Z_Construct_UClass_UVoxelExample_Ravines_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVoxelExample_Ravines()
{
	if (!Z_Registration_Info_UClass_UVoxelExample_Ravines.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelExample_Ravines.OuterSingleton, Z_Construct_UClass_UVoxelExample_Ravines_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVoxelExample_Ravines.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelExample_Ravines);
UVoxelExample_Ravines::~UVoxelExample_Ravines() {}
// ********** End Class UVoxelExample_Ravines ******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_VoxelGraph_Private_Examples_VoxelExample_Ravines_h__Script_VoxelGraph_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UVoxelExample_Ravines, UVoxelExample_Ravines::StaticClass, TEXT("UVoxelExample_Ravines"), &Z_Registration_Info_UClass_UVoxelExample_Ravines, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelExample_Ravines), 723363805U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_VoxelGraph_Private_Examples_VoxelExample_Ravines_h__Script_VoxelGraph_4180997932(TEXT("/Script/VoxelGraph"),
	Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_VoxelGraph_Private_Examples_VoxelExample_Ravines_h__Script_VoxelGraph_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_VoxelGraph_Private_Examples_VoxelExample_Ravines_h__Script_VoxelGraph_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
