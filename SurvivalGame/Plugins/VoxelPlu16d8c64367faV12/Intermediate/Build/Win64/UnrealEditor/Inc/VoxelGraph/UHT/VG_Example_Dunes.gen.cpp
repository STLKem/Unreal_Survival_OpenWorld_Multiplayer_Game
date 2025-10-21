// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Examples/VG_Example_Dunes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeVG_Example_Dunes() {}

// ********** Begin Cross Module References ********************************************************
UPackage* Z_Construct_UPackage__Script_VoxelGraph();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVG_Example_Dunes();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVG_Example_Dunes_NoRegister();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelGraphGeneratorHelper();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UVG_Example_Dunes ********************************************************
void UVG_Example_Dunes::StaticRegisterNativesUVG_Example_Dunes()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UVG_Example_Dunes;
UClass* UVG_Example_Dunes::GetPrivateStaticClass()
{
	using TClass = UVG_Example_Dunes;
	if (!Z_Registration_Info_UClass_UVG_Example_Dunes.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("VG_Example_Dunes"),
			Z_Registration_Info_UClass_UVG_Example_Dunes.InnerSingleton,
			StaticRegisterNativesUVG_Example_Dunes,
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
	return Z_Registration_Info_UClass_UVG_Example_Dunes.InnerSingleton;
}
UClass* Z_Construct_UClass_UVG_Example_Dunes_NoRegister()
{
	return UVG_Example_Dunes::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UVG_Example_Dunes_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Examples/VG_Example_Dunes.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Private/Examples/VG_Example_Dunes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Direction_X_MetaData[] = {
		{ "Category", "" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The direction of the noise. Will be normalized\n" },
#endif
		{ "DisplayName", "Direction X" },
		{ "ModuleRelativePath", "Private/Examples/VG_Example_Dunes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The direction of the noise. Will be normalized" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Direction_Y_MetaData[] = {
		{ "Category", "" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The direction of the noise. Will be normalized\n" },
#endif
		{ "DisplayName", "Direction Y" },
		{ "ModuleRelativePath", "Private/Examples/VG_Example_Dunes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The direction of the noise. Will be normalized" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Dune_Frequency_MetaData[] = {
		{ "Category", "" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \n" },
#endif
		{ "DisplayName", "Dune Frequency" },
		{ "ModuleRelativePath", "Private/Examples/VG_Example_Dunes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Height_MetaData[] = {
		{ "Category", "" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \n" },
#endif
		{ "DisplayName", "Height" },
		{ "ModuleRelativePath", "Private/Examples/VG_Example_Dunes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Noise_Frequency_MetaData[] = {
		{ "Category", "" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \n" },
#endif
		{ "DisplayName", "Noise Frequency" },
		{ "ModuleRelativePath", "Private/Examples/VG_Example_Dunes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Direction_X;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Direction_Y;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Dune_Frequency;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Height;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Noise_Frequency;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVG_Example_Dunes>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVG_Example_Dunes_Statics::NewProp_Direction_X = { "Direction_X", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVG_Example_Dunes, Direction_X), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Direction_X_MetaData), NewProp_Direction_X_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVG_Example_Dunes_Statics::NewProp_Direction_Y = { "Direction_Y", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVG_Example_Dunes, Direction_Y), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Direction_Y_MetaData), NewProp_Direction_Y_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVG_Example_Dunes_Statics::NewProp_Dune_Frequency = { "Dune_Frequency", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVG_Example_Dunes, Dune_Frequency), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Dune_Frequency_MetaData), NewProp_Dune_Frequency_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVG_Example_Dunes_Statics::NewProp_Height = { "Height", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVG_Example_Dunes, Height), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Height_MetaData), NewProp_Height_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVG_Example_Dunes_Statics::NewProp_Noise_Frequency = { "Noise_Frequency", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVG_Example_Dunes, Noise_Frequency), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Noise_Frequency_MetaData), NewProp_Noise_Frequency_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVG_Example_Dunes_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVG_Example_Dunes_Statics::NewProp_Direction_X,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVG_Example_Dunes_Statics::NewProp_Direction_Y,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVG_Example_Dunes_Statics::NewProp_Dune_Frequency,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVG_Example_Dunes_Statics::NewProp_Height,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVG_Example_Dunes_Statics::NewProp_Noise_Frequency,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVG_Example_Dunes_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UVG_Example_Dunes_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UVoxelGraphGeneratorHelper,
	(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVG_Example_Dunes_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVG_Example_Dunes_Statics::ClassParams = {
	&UVG_Example_Dunes::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UVG_Example_Dunes_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UVG_Example_Dunes_Statics::PropPointers),
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVG_Example_Dunes_Statics::Class_MetaDataParams), Z_Construct_UClass_UVG_Example_Dunes_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVG_Example_Dunes()
{
	if (!Z_Registration_Info_UClass_UVG_Example_Dunes.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVG_Example_Dunes.OuterSingleton, Z_Construct_UClass_UVG_Example_Dunes_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVG_Example_Dunes.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVG_Example_Dunes);
UVG_Example_Dunes::~UVG_Example_Dunes() {}
// ********** End Class UVG_Example_Dunes **********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_VoxelGraph_Private_Examples_VG_Example_Dunes_h__Script_VoxelGraph_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UVG_Example_Dunes, UVG_Example_Dunes::StaticClass, TEXT("UVG_Example_Dunes"), &Z_Registration_Info_UClass_UVG_Example_Dunes, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVG_Example_Dunes), 3680679120U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_VoxelGraph_Private_Examples_VG_Example_Dunes_h__Script_VoxelGraph_1411678260(TEXT("/Script/VoxelGraph"),
	Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_VoxelGraph_Private_Examples_VG_Example_Dunes_h__Script_VoxelGraph_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_VoxelGraph_Private_Examples_VG_Example_Dunes_h__Script_VoxelGraph_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
