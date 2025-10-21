// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Thumbnails/VoxelSpawnersThumbnailRenderer.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeVoxelSpawnersThumbnailRenderer() {}

// ********** Begin Cross Module References ********************************************************
UNREALED_API UClass* Z_Construct_UClass_UDefaultSizedThumbnailRenderer();
UNREALED_API UClass* Z_Construct_UClass_UStaticMeshThumbnailRenderer();
UPackage* Z_Construct_UPackage__Script_VoxelEditor();
VOXELEDITOR_API UClass* Z_Construct_UClass_UVoxelAssetSpawnerThumbnailRenderer();
VOXELEDITOR_API UClass* Z_Construct_UClass_UVoxelAssetSpawnerThumbnailRenderer_NoRegister();
VOXELEDITOR_API UClass* Z_Construct_UClass_UVoxelMeshSpawnerGroupThumbnailRenderer();
VOXELEDITOR_API UClass* Z_Construct_UClass_UVoxelMeshSpawnerGroupThumbnailRenderer_NoRegister();
VOXELEDITOR_API UClass* Z_Construct_UClass_UVoxelMeshSpawnerThumbnailRenderer();
VOXELEDITOR_API UClass* Z_Construct_UClass_UVoxelMeshSpawnerThumbnailRenderer_NoRegister();
VOXELEDITOR_API UClass* Z_Construct_UClass_UVoxelSpawnerGroupThumbnailRenderer();
VOXELEDITOR_API UClass* Z_Construct_UClass_UVoxelSpawnerGroupThumbnailRenderer_NoRegister();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UVoxelMeshSpawnerThumbnailRenderer ***************************************
void UVoxelMeshSpawnerThumbnailRenderer::StaticRegisterNativesUVoxelMeshSpawnerThumbnailRenderer()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UVoxelMeshSpawnerThumbnailRenderer;
UClass* UVoxelMeshSpawnerThumbnailRenderer::GetPrivateStaticClass()
{
	using TClass = UVoxelMeshSpawnerThumbnailRenderer;
	if (!Z_Registration_Info_UClass_UVoxelMeshSpawnerThumbnailRenderer.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("VoxelMeshSpawnerThumbnailRenderer"),
			Z_Registration_Info_UClass_UVoxelMeshSpawnerThumbnailRenderer.InnerSingleton,
			StaticRegisterNativesUVoxelMeshSpawnerThumbnailRenderer,
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
	return Z_Registration_Info_UClass_UVoxelMeshSpawnerThumbnailRenderer.InnerSingleton;
}
UClass* Z_Construct_UClass_UVoxelMeshSpawnerThumbnailRenderer_NoRegister()
{
	return UVoxelMeshSpawnerThumbnailRenderer::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UVoxelMeshSpawnerThumbnailRenderer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Thumbnails/VoxelSpawnersThumbnailRenderer.h" },
		{ "ModuleRelativePath", "Private/Thumbnails/VoxelSpawnersThumbnailRenderer.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelMeshSpawnerThumbnailRenderer>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UVoxelMeshSpawnerThumbnailRenderer_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UStaticMeshThumbnailRenderer,
	(UObject* (*)())Z_Construct_UPackage__Script_VoxelEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelMeshSpawnerThumbnailRenderer_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelMeshSpawnerThumbnailRenderer_Statics::ClassParams = {
	&UVoxelMeshSpawnerThumbnailRenderer::StaticClass,
	"Editor",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelMeshSpawnerThumbnailRenderer_Statics::Class_MetaDataParams), Z_Construct_UClass_UVoxelMeshSpawnerThumbnailRenderer_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVoxelMeshSpawnerThumbnailRenderer()
{
	if (!Z_Registration_Info_UClass_UVoxelMeshSpawnerThumbnailRenderer.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelMeshSpawnerThumbnailRenderer.OuterSingleton, Z_Construct_UClass_UVoxelMeshSpawnerThumbnailRenderer_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVoxelMeshSpawnerThumbnailRenderer.OuterSingleton;
}
UVoxelMeshSpawnerThumbnailRenderer::UVoxelMeshSpawnerThumbnailRenderer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelMeshSpawnerThumbnailRenderer);
UVoxelMeshSpawnerThumbnailRenderer::~UVoxelMeshSpawnerThumbnailRenderer() {}
// ********** End Class UVoxelMeshSpawnerThumbnailRenderer *****************************************

// ********** Begin Class UVoxelAssetSpawnerThumbnailRenderer **************************************
void UVoxelAssetSpawnerThumbnailRenderer::StaticRegisterNativesUVoxelAssetSpawnerThumbnailRenderer()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UVoxelAssetSpawnerThumbnailRenderer;
UClass* UVoxelAssetSpawnerThumbnailRenderer::GetPrivateStaticClass()
{
	using TClass = UVoxelAssetSpawnerThumbnailRenderer;
	if (!Z_Registration_Info_UClass_UVoxelAssetSpawnerThumbnailRenderer.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("VoxelAssetSpawnerThumbnailRenderer"),
			Z_Registration_Info_UClass_UVoxelAssetSpawnerThumbnailRenderer.InnerSingleton,
			StaticRegisterNativesUVoxelAssetSpawnerThumbnailRenderer,
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
	return Z_Registration_Info_UClass_UVoxelAssetSpawnerThumbnailRenderer.InnerSingleton;
}
UClass* Z_Construct_UClass_UVoxelAssetSpawnerThumbnailRenderer_NoRegister()
{
	return UVoxelAssetSpawnerThumbnailRenderer::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UVoxelAssetSpawnerThumbnailRenderer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Thumbnails/VoxelSpawnersThumbnailRenderer.h" },
		{ "ModuleRelativePath", "Private/Thumbnails/VoxelSpawnersThumbnailRenderer.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelAssetSpawnerThumbnailRenderer>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UVoxelAssetSpawnerThumbnailRenderer_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDefaultSizedThumbnailRenderer,
	(UObject* (*)())Z_Construct_UPackage__Script_VoxelEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelAssetSpawnerThumbnailRenderer_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelAssetSpawnerThumbnailRenderer_Statics::ClassParams = {
	&UVoxelAssetSpawnerThumbnailRenderer::StaticClass,
	"Editor",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelAssetSpawnerThumbnailRenderer_Statics::Class_MetaDataParams), Z_Construct_UClass_UVoxelAssetSpawnerThumbnailRenderer_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVoxelAssetSpawnerThumbnailRenderer()
{
	if (!Z_Registration_Info_UClass_UVoxelAssetSpawnerThumbnailRenderer.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelAssetSpawnerThumbnailRenderer.OuterSingleton, Z_Construct_UClass_UVoxelAssetSpawnerThumbnailRenderer_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVoxelAssetSpawnerThumbnailRenderer.OuterSingleton;
}
UVoxelAssetSpawnerThumbnailRenderer::UVoxelAssetSpawnerThumbnailRenderer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelAssetSpawnerThumbnailRenderer);
UVoxelAssetSpawnerThumbnailRenderer::~UVoxelAssetSpawnerThumbnailRenderer() {}
// ********** End Class UVoxelAssetSpawnerThumbnailRenderer ****************************************

// ********** Begin Class UVoxelSpawnerGroupThumbnailRenderer **************************************
void UVoxelSpawnerGroupThumbnailRenderer::StaticRegisterNativesUVoxelSpawnerGroupThumbnailRenderer()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UVoxelSpawnerGroupThumbnailRenderer;
UClass* UVoxelSpawnerGroupThumbnailRenderer::GetPrivateStaticClass()
{
	using TClass = UVoxelSpawnerGroupThumbnailRenderer;
	if (!Z_Registration_Info_UClass_UVoxelSpawnerGroupThumbnailRenderer.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("VoxelSpawnerGroupThumbnailRenderer"),
			Z_Registration_Info_UClass_UVoxelSpawnerGroupThumbnailRenderer.InnerSingleton,
			StaticRegisterNativesUVoxelSpawnerGroupThumbnailRenderer,
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
	return Z_Registration_Info_UClass_UVoxelSpawnerGroupThumbnailRenderer.InnerSingleton;
}
UClass* Z_Construct_UClass_UVoxelSpawnerGroupThumbnailRenderer_NoRegister()
{
	return UVoxelSpawnerGroupThumbnailRenderer::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UVoxelSpawnerGroupThumbnailRenderer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Thumbnails/VoxelSpawnersThumbnailRenderer.h" },
		{ "ModuleRelativePath", "Private/Thumbnails/VoxelSpawnersThumbnailRenderer.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelSpawnerGroupThumbnailRenderer>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UVoxelSpawnerGroupThumbnailRenderer_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDefaultSizedThumbnailRenderer,
	(UObject* (*)())Z_Construct_UPackage__Script_VoxelEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelSpawnerGroupThumbnailRenderer_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelSpawnerGroupThumbnailRenderer_Statics::ClassParams = {
	&UVoxelSpawnerGroupThumbnailRenderer::StaticClass,
	"Editor",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelSpawnerGroupThumbnailRenderer_Statics::Class_MetaDataParams), Z_Construct_UClass_UVoxelSpawnerGroupThumbnailRenderer_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVoxelSpawnerGroupThumbnailRenderer()
{
	if (!Z_Registration_Info_UClass_UVoxelSpawnerGroupThumbnailRenderer.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelSpawnerGroupThumbnailRenderer.OuterSingleton, Z_Construct_UClass_UVoxelSpawnerGroupThumbnailRenderer_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVoxelSpawnerGroupThumbnailRenderer.OuterSingleton;
}
UVoxelSpawnerGroupThumbnailRenderer::UVoxelSpawnerGroupThumbnailRenderer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelSpawnerGroupThumbnailRenderer);
UVoxelSpawnerGroupThumbnailRenderer::~UVoxelSpawnerGroupThumbnailRenderer() {}
// ********** End Class UVoxelSpawnerGroupThumbnailRenderer ****************************************

// ********** Begin Class UVoxelMeshSpawnerGroupThumbnailRenderer **********************************
void UVoxelMeshSpawnerGroupThumbnailRenderer::StaticRegisterNativesUVoxelMeshSpawnerGroupThumbnailRenderer()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UVoxelMeshSpawnerGroupThumbnailRenderer;
UClass* UVoxelMeshSpawnerGroupThumbnailRenderer::GetPrivateStaticClass()
{
	using TClass = UVoxelMeshSpawnerGroupThumbnailRenderer;
	if (!Z_Registration_Info_UClass_UVoxelMeshSpawnerGroupThumbnailRenderer.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("VoxelMeshSpawnerGroupThumbnailRenderer"),
			Z_Registration_Info_UClass_UVoxelMeshSpawnerGroupThumbnailRenderer.InnerSingleton,
			StaticRegisterNativesUVoxelMeshSpawnerGroupThumbnailRenderer,
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
	return Z_Registration_Info_UClass_UVoxelMeshSpawnerGroupThumbnailRenderer.InnerSingleton;
}
UClass* Z_Construct_UClass_UVoxelMeshSpawnerGroupThumbnailRenderer_NoRegister()
{
	return UVoxelMeshSpawnerGroupThumbnailRenderer::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UVoxelMeshSpawnerGroupThumbnailRenderer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Thumbnails/VoxelSpawnersThumbnailRenderer.h" },
		{ "ModuleRelativePath", "Private/Thumbnails/VoxelSpawnersThumbnailRenderer.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelMeshSpawnerGroupThumbnailRenderer>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UVoxelMeshSpawnerGroupThumbnailRenderer_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UStaticMeshThumbnailRenderer,
	(UObject* (*)())Z_Construct_UPackage__Script_VoxelEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelMeshSpawnerGroupThumbnailRenderer_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelMeshSpawnerGroupThumbnailRenderer_Statics::ClassParams = {
	&UVoxelMeshSpawnerGroupThumbnailRenderer::StaticClass,
	"Editor",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelMeshSpawnerGroupThumbnailRenderer_Statics::Class_MetaDataParams), Z_Construct_UClass_UVoxelMeshSpawnerGroupThumbnailRenderer_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVoxelMeshSpawnerGroupThumbnailRenderer()
{
	if (!Z_Registration_Info_UClass_UVoxelMeshSpawnerGroupThumbnailRenderer.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelMeshSpawnerGroupThumbnailRenderer.OuterSingleton, Z_Construct_UClass_UVoxelMeshSpawnerGroupThumbnailRenderer_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVoxelMeshSpawnerGroupThumbnailRenderer.OuterSingleton;
}
UVoxelMeshSpawnerGroupThumbnailRenderer::UVoxelMeshSpawnerGroupThumbnailRenderer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelMeshSpawnerGroupThumbnailRenderer);
UVoxelMeshSpawnerGroupThumbnailRenderer::~UVoxelMeshSpawnerGroupThumbnailRenderer() {}
// ********** End Class UVoxelMeshSpawnerGroupThumbnailRenderer ************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_VoxelEditor_Private_Thumbnails_VoxelSpawnersThumbnailRenderer_h__Script_VoxelEditor_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UVoxelMeshSpawnerThumbnailRenderer, UVoxelMeshSpawnerThumbnailRenderer::StaticClass, TEXT("UVoxelMeshSpawnerThumbnailRenderer"), &Z_Registration_Info_UClass_UVoxelMeshSpawnerThumbnailRenderer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelMeshSpawnerThumbnailRenderer), 2546147933U) },
		{ Z_Construct_UClass_UVoxelAssetSpawnerThumbnailRenderer, UVoxelAssetSpawnerThumbnailRenderer::StaticClass, TEXT("UVoxelAssetSpawnerThumbnailRenderer"), &Z_Registration_Info_UClass_UVoxelAssetSpawnerThumbnailRenderer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelAssetSpawnerThumbnailRenderer), 2517965102U) },
		{ Z_Construct_UClass_UVoxelSpawnerGroupThumbnailRenderer, UVoxelSpawnerGroupThumbnailRenderer::StaticClass, TEXT("UVoxelSpawnerGroupThumbnailRenderer"), &Z_Registration_Info_UClass_UVoxelSpawnerGroupThumbnailRenderer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelSpawnerGroupThumbnailRenderer), 2527893653U) },
		{ Z_Construct_UClass_UVoxelMeshSpawnerGroupThumbnailRenderer, UVoxelMeshSpawnerGroupThumbnailRenderer::StaticClass, TEXT("UVoxelMeshSpawnerGroupThumbnailRenderer"), &Z_Registration_Info_UClass_UVoxelMeshSpawnerGroupThumbnailRenderer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelMeshSpawnerGroupThumbnailRenderer), 583436389U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_VoxelEditor_Private_Thumbnails_VoxelSpawnersThumbnailRenderer_h__Script_VoxelEditor_1239286283(TEXT("/Script/VoxelEditor"),
	Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_VoxelEditor_Private_Thumbnails_VoxelSpawnersThumbnailRenderer_h__Script_VoxelEditor_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_VoxelEditor_Private_Thumbnails_VoxelSpawnersThumbnailRenderer_h__Script_VoxelEditor_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
