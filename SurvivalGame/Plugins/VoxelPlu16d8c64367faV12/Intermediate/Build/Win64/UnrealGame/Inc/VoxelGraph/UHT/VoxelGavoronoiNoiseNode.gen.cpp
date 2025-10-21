// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VoxelGraph/Public/VoxelNodes/VoxelGavoronoiNoiseNode.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeVoxelGavoronoiNoiseNode() {}

// ********** Begin Cross Module References ********************************************************
UPackage* Z_Construct_UPackage__Script_VoxelGraph();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_2DErosion();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_2DErosion_NoRegister();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_2DGavoronoiNoise();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_2DGavoronoiNoise_NoRegister();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_2DGavoronoiNoiseFractal();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_2DGavoronoiNoiseFractal_NoRegister();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_NoiseNode();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_NoiseNodeFractal();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_NoiseNodeWithDerivativeFractal();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UVoxelNode_2DGavoronoiNoise **********************************************
void UVoxelNode_2DGavoronoiNoise::StaticRegisterNativesUVoxelNode_2DGavoronoiNoise()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UVoxelNode_2DGavoronoiNoise;
UClass* UVoxelNode_2DGavoronoiNoise::GetPrivateStaticClass()
{
	using TClass = UVoxelNode_2DGavoronoiNoise;
	if (!Z_Registration_Info_UClass_UVoxelNode_2DGavoronoiNoise.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("VoxelNode_2DGavoronoiNoise"),
			Z_Registration_Info_UClass_UVoxelNode_2DGavoronoiNoise.InnerSingleton,
			StaticRegisterNativesUVoxelNode_2DGavoronoiNoise,
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
	return Z_Registration_Info_UClass_UVoxelNode_2DGavoronoiNoise.InnerSingleton;
}
UClass* Z_Construct_UClass_UVoxelNode_2DGavoronoiNoise_NoRegister()
{
	return UVoxelNode_2DGavoronoiNoise::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UVoxelNode_2DGavoronoiNoise_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Category", "Noise|Gavoronoi Noise" },
		{ "Comment", "// 2D Gavoronoi Noise\n// This noise can be directed, and is used to fake erosion\n// See https://www.shadertoy.com/view/llsGWl\n" },
		{ "DisplayName", "2D Gavoronoi Noise" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelNodes/VoxelGavoronoiNoiseNode.h" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelGavoronoiNoiseNode.h" },
		{ "ToolTip", "2D Gavoronoi Noise\nThis noise can be directed, and is used to fake erosion\nSee https:www.shadertoy.com/view/llsGWl" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Jitter_MetaData[] = {
		{ "Category", "Gavoronoi Noise settings" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelGavoronoiNoiseNode.h" },
		{ "UIMax", "0.500000" },
		{ "UIMin", "0" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Jitter;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelNode_2DGavoronoiNoise>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVoxelNode_2DGavoronoiNoise_Statics::NewProp_Jitter = { "Jitter", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelNode_2DGavoronoiNoise, Jitter), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Jitter_MetaData), NewProp_Jitter_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelNode_2DGavoronoiNoise_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelNode_2DGavoronoiNoise_Statics::NewProp_Jitter,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_2DGavoronoiNoise_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UVoxelNode_2DGavoronoiNoise_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UVoxelNode_NoiseNode,
	(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_2DGavoronoiNoise_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelNode_2DGavoronoiNoise_Statics::ClassParams = {
	&UVoxelNode_2DGavoronoiNoise::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UVoxelNode_2DGavoronoiNoise_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_2DGavoronoiNoise_Statics::PropPointers),
	0,
	0x001010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_2DGavoronoiNoise_Statics::Class_MetaDataParams), Z_Construct_UClass_UVoxelNode_2DGavoronoiNoise_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVoxelNode_2DGavoronoiNoise()
{
	if (!Z_Registration_Info_UClass_UVoxelNode_2DGavoronoiNoise.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelNode_2DGavoronoiNoise.OuterSingleton, Z_Construct_UClass_UVoxelNode_2DGavoronoiNoise_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVoxelNode_2DGavoronoiNoise.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelNode_2DGavoronoiNoise);
UVoxelNode_2DGavoronoiNoise::~UVoxelNode_2DGavoronoiNoise() {}
// ********** End Class UVoxelNode_2DGavoronoiNoise ************************************************

// ********** Begin Class UVoxelNode_2DGavoronoiNoiseFractal ***************************************
void UVoxelNode_2DGavoronoiNoiseFractal::StaticRegisterNativesUVoxelNode_2DGavoronoiNoiseFractal()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UVoxelNode_2DGavoronoiNoiseFractal;
UClass* UVoxelNode_2DGavoronoiNoiseFractal::GetPrivateStaticClass()
{
	using TClass = UVoxelNode_2DGavoronoiNoiseFractal;
	if (!Z_Registration_Info_UClass_UVoxelNode_2DGavoronoiNoiseFractal.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("VoxelNode_2DGavoronoiNoiseFractal"),
			Z_Registration_Info_UClass_UVoxelNode_2DGavoronoiNoiseFractal.InnerSingleton,
			StaticRegisterNativesUVoxelNode_2DGavoronoiNoiseFractal,
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
	return Z_Registration_Info_UClass_UVoxelNode_2DGavoronoiNoiseFractal.InnerSingleton;
}
UClass* Z_Construct_UClass_UVoxelNode_2DGavoronoiNoiseFractal_NoRegister()
{
	return UVoxelNode_2DGavoronoiNoiseFractal::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UVoxelNode_2DGavoronoiNoiseFractal_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Category", "Noise|Gavoronoi Noise" },
		{ "Comment", "// 2D Gavoronoi Noise Fractal\n// This noise can be directed, and is used to fake erosion\n// See https://www.shadertoy.com/view/llsGWl\n" },
		{ "DisplayName", "2D Gavoronoi Noise Fractal" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelNodes/VoxelGavoronoiNoiseNode.h" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelGavoronoiNoiseNode.h" },
		{ "ToolTip", "2D Gavoronoi Noise Fractal\nThis noise can be directed, and is used to fake erosion\nSee https:www.shadertoy.com/view/llsGWl" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Jitter_MetaData[] = {
		{ "Category", "Gavoronoi Noise settings" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelGavoronoiNoiseNode.h" },
		{ "UIMax", "0.500000" },
		{ "UIMin", "0" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Jitter;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelNode_2DGavoronoiNoiseFractal>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVoxelNode_2DGavoronoiNoiseFractal_Statics::NewProp_Jitter = { "Jitter", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelNode_2DGavoronoiNoiseFractal, Jitter), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Jitter_MetaData), NewProp_Jitter_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelNode_2DGavoronoiNoiseFractal_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelNode_2DGavoronoiNoiseFractal_Statics::NewProp_Jitter,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_2DGavoronoiNoiseFractal_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UVoxelNode_2DGavoronoiNoiseFractal_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UVoxelNode_NoiseNodeFractal,
	(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_2DGavoronoiNoiseFractal_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelNode_2DGavoronoiNoiseFractal_Statics::ClassParams = {
	&UVoxelNode_2DGavoronoiNoiseFractal::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UVoxelNode_2DGavoronoiNoiseFractal_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_2DGavoronoiNoiseFractal_Statics::PropPointers),
	0,
	0x001010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_2DGavoronoiNoiseFractal_Statics::Class_MetaDataParams), Z_Construct_UClass_UVoxelNode_2DGavoronoiNoiseFractal_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVoxelNode_2DGavoronoiNoiseFractal()
{
	if (!Z_Registration_Info_UClass_UVoxelNode_2DGavoronoiNoiseFractal.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelNode_2DGavoronoiNoiseFractal.OuterSingleton, Z_Construct_UClass_UVoxelNode_2DGavoronoiNoiseFractal_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVoxelNode_2DGavoronoiNoiseFractal.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelNode_2DGavoronoiNoiseFractal);
UVoxelNode_2DGavoronoiNoiseFractal::~UVoxelNode_2DGavoronoiNoiseFractal() {}
// ********** End Class UVoxelNode_2DGavoronoiNoiseFractal *****************************************

// ********** Begin Class UVoxelNode_2DErosion *****************************************************
void UVoxelNode_2DErosion::StaticRegisterNativesUVoxelNode_2DErosion()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UVoxelNode_2DErosion;
UClass* UVoxelNode_2DErosion::GetPrivateStaticClass()
{
	using TClass = UVoxelNode_2DErosion;
	if (!Z_Registration_Info_UClass_UVoxelNode_2DErosion.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("VoxelNode_2DErosion"),
			Z_Registration_Info_UClass_UVoxelNode_2DErosion.InnerSingleton,
			StaticRegisterNativesUVoxelNode_2DErosion,
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
	return Z_Registration_Info_UClass_UVoxelNode_2DErosion.InnerSingleton;
}
UClass* Z_Construct_UClass_UVoxelNode_2DErosion_NoRegister()
{
	return UVoxelNode_2DErosion::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UVoxelNode_2DErosion_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Category", "Noise|Erosion" },
		{ "Comment", "// 2D Erosion\n// Add this to your noise to fake erosion\n// From https://www.shadertoy.com/view/MtGcWh\n" },
		{ "DisplayName", "2D Erosion" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelNodes/VoxelGavoronoiNoiseNode.h" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelGavoronoiNoiseNode.h" },
		{ "ToolTip", "2D Erosion\nAdd this to your noise to fake erosion\nFrom https:www.shadertoy.com/view/MtGcWh" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Jitter_MetaData[] = {
		{ "Category", "Erosion settings" },
		{ "Comment", "// Controls the jitter of the noise used for the \"ravines\"\n" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelGavoronoiNoiseNode.h" },
		{ "ToolTip", "Controls the jitter of the noise used for the \"ravines\"" },
		{ "UIMax", "0.500000" },
		{ "UIMin", "0" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Jitter;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelNode_2DErosion>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVoxelNode_2DErosion_Statics::NewProp_Jitter = { "Jitter", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelNode_2DErosion, Jitter), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Jitter_MetaData), NewProp_Jitter_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelNode_2DErosion_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelNode_2DErosion_Statics::NewProp_Jitter,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_2DErosion_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UVoxelNode_2DErosion_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UVoxelNode_NoiseNodeWithDerivativeFractal,
	(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_2DErosion_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelNode_2DErosion_Statics::ClassParams = {
	&UVoxelNode_2DErosion::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UVoxelNode_2DErosion_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_2DErosion_Statics::PropPointers),
	0,
	0x001010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_2DErosion_Statics::Class_MetaDataParams), Z_Construct_UClass_UVoxelNode_2DErosion_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVoxelNode_2DErosion()
{
	if (!Z_Registration_Info_UClass_UVoxelNode_2DErosion.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelNode_2DErosion.OuterSingleton, Z_Construct_UClass_UVoxelNode_2DErosion_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVoxelNode_2DErosion.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelNode_2DErosion);
UVoxelNode_2DErosion::~UVoxelNode_2DErosion() {}
// ********** End Class UVoxelNode_2DErosion *******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_VoxelGraph_Public_VoxelNodes_VoxelGavoronoiNoiseNode_h__Script_VoxelGraph_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UVoxelNode_2DGavoronoiNoise, UVoxelNode_2DGavoronoiNoise::StaticClass, TEXT("UVoxelNode_2DGavoronoiNoise"), &Z_Registration_Info_UClass_UVoxelNode_2DGavoronoiNoise, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelNode_2DGavoronoiNoise), 1788836479U) },
		{ Z_Construct_UClass_UVoxelNode_2DGavoronoiNoiseFractal, UVoxelNode_2DGavoronoiNoiseFractal::StaticClass, TEXT("UVoxelNode_2DGavoronoiNoiseFractal"), &Z_Registration_Info_UClass_UVoxelNode_2DGavoronoiNoiseFractal, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelNode_2DGavoronoiNoiseFractal), 2152247196U) },
		{ Z_Construct_UClass_UVoxelNode_2DErosion, UVoxelNode_2DErosion::StaticClass, TEXT("UVoxelNode_2DErosion"), &Z_Registration_Info_UClass_UVoxelNode_2DErosion, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelNode_2DErosion), 2729982356U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_VoxelGraph_Public_VoxelNodes_VoxelGavoronoiNoiseNode_h__Script_VoxelGraph_2478018737(TEXT("/Script/VoxelGraph"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_VoxelGraph_Public_VoxelNodes_VoxelGavoronoiNoiseNode_h__Script_VoxelGraph_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_VoxelGraph_Public_VoxelNodes_VoxelGavoronoiNoiseNode_h__Script_VoxelGraph_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
