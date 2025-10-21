// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VoxelNodes/VoxelWhiteNoiseNodes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeVoxelWhiteNoiseNodes() {}

// ********** Begin Cross Module References ********************************************************
UPackage* Z_Construct_UPackage__Script_VoxelGraph();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_2DWhiteNoise();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_2DWhiteNoise_NoRegister();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_3DWhiteNoise();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_3DWhiteNoise_NoRegister();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNodeHelper();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UVoxelNode_2DWhiteNoise **************************************************
void UVoxelNode_2DWhiteNoise::StaticRegisterNativesUVoxelNode_2DWhiteNoise()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UVoxelNode_2DWhiteNoise;
UClass* UVoxelNode_2DWhiteNoise::GetPrivateStaticClass()
{
	using TClass = UVoxelNode_2DWhiteNoise;
	if (!Z_Registration_Info_UClass_UVoxelNode_2DWhiteNoise.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("VoxelNode_2DWhiteNoise"),
			Z_Registration_Info_UClass_UVoxelNode_2DWhiteNoise.InnerSingleton,
			StaticRegisterNativesUVoxelNode_2DWhiteNoise,
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
	return Z_Registration_Info_UClass_UVoxelNode_2DWhiteNoise.InnerSingleton;
}
UClass* Z_Construct_UClass_UVoxelNode_2DWhiteNoise_NoRegister()
{
	return UVoxelNode_2DWhiteNoise::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UVoxelNode_2DWhiteNoise_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Category", "Noise|White Noise" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// 2D White Noise\n" },
#endif
		{ "DisplayName", "2D White Noise" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelNodes/VoxelWhiteNoiseNodes.h" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelWhiteNoiseNodes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "2D White Noise" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelNode_2DWhiteNoise>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UVoxelNode_2DWhiteNoise_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UVoxelNodeHelper,
	(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_2DWhiteNoise_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelNode_2DWhiteNoise_Statics::ClassParams = {
	&UVoxelNode_2DWhiteNoise::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_2DWhiteNoise_Statics::Class_MetaDataParams), Z_Construct_UClass_UVoxelNode_2DWhiteNoise_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVoxelNode_2DWhiteNoise()
{
	if (!Z_Registration_Info_UClass_UVoxelNode_2DWhiteNoise.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelNode_2DWhiteNoise.OuterSingleton, Z_Construct_UClass_UVoxelNode_2DWhiteNoise_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVoxelNode_2DWhiteNoise.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelNode_2DWhiteNoise);
UVoxelNode_2DWhiteNoise::~UVoxelNode_2DWhiteNoise() {}
// ********** End Class UVoxelNode_2DWhiteNoise ****************************************************

// ********** Begin Class UVoxelNode_3DWhiteNoise **************************************************
void UVoxelNode_3DWhiteNoise::StaticRegisterNativesUVoxelNode_3DWhiteNoise()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UVoxelNode_3DWhiteNoise;
UClass* UVoxelNode_3DWhiteNoise::GetPrivateStaticClass()
{
	using TClass = UVoxelNode_3DWhiteNoise;
	if (!Z_Registration_Info_UClass_UVoxelNode_3DWhiteNoise.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("VoxelNode_3DWhiteNoise"),
			Z_Registration_Info_UClass_UVoxelNode_3DWhiteNoise.InnerSingleton,
			StaticRegisterNativesUVoxelNode_3DWhiteNoise,
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
	return Z_Registration_Info_UClass_UVoxelNode_3DWhiteNoise.InnerSingleton;
}
UClass* Z_Construct_UClass_UVoxelNode_3DWhiteNoise_NoRegister()
{
	return UVoxelNode_3DWhiteNoise::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UVoxelNode_3DWhiteNoise_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Category", "Noise|White Noise" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// 3D White Noise\n" },
#endif
		{ "DisplayName", "3D White Noise" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelNodes/VoxelWhiteNoiseNodes.h" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelWhiteNoiseNodes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "3D White Noise" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelNode_3DWhiteNoise>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UVoxelNode_3DWhiteNoise_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UVoxelNodeHelper,
	(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_3DWhiteNoise_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelNode_3DWhiteNoise_Statics::ClassParams = {
	&UVoxelNode_3DWhiteNoise::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_3DWhiteNoise_Statics::Class_MetaDataParams), Z_Construct_UClass_UVoxelNode_3DWhiteNoise_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVoxelNode_3DWhiteNoise()
{
	if (!Z_Registration_Info_UClass_UVoxelNode_3DWhiteNoise.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelNode_3DWhiteNoise.OuterSingleton, Z_Construct_UClass_UVoxelNode_3DWhiteNoise_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVoxelNode_3DWhiteNoise.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelNode_3DWhiteNoise);
UVoxelNode_3DWhiteNoise::~UVoxelNode_3DWhiteNoise() {}
// ********** End Class UVoxelNode_3DWhiteNoise ****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_VoxelGraph_Public_VoxelNodes_VoxelWhiteNoiseNodes_h__Script_VoxelGraph_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UVoxelNode_2DWhiteNoise, UVoxelNode_2DWhiteNoise::StaticClass, TEXT("UVoxelNode_2DWhiteNoise"), &Z_Registration_Info_UClass_UVoxelNode_2DWhiteNoise, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelNode_2DWhiteNoise), 2862217804U) },
		{ Z_Construct_UClass_UVoxelNode_3DWhiteNoise, UVoxelNode_3DWhiteNoise::StaticClass, TEXT("UVoxelNode_3DWhiteNoise"), &Z_Registration_Info_UClass_UVoxelNode_3DWhiteNoise, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelNode_3DWhiteNoise), 285708779U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_VoxelGraph_Public_VoxelNodes_VoxelWhiteNoiseNodes_h__Script_VoxelGraph_3638178218(TEXT("/Script/VoxelGraph"),
	Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_VoxelGraph_Public_VoxelNodes_VoxelWhiteNoiseNodes_h__Script_VoxelGraph_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_VoxelGraph_Public_VoxelNodes_VoxelWhiteNoiseNodes_h__Script_VoxelGraph_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
