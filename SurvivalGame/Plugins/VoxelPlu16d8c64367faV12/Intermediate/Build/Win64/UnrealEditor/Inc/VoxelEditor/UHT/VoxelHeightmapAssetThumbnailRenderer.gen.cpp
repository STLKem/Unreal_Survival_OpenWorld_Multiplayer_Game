// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Thumbnails/VoxelHeightmapAssetThumbnailRenderer.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeVoxelHeightmapAssetThumbnailRenderer() {}

// ********** Begin Cross Module References ********************************************************
UNREALED_API UClass* Z_Construct_UClass_UTextureThumbnailRenderer();
UPackage* Z_Construct_UPackage__Script_VoxelEditor();
VOXELEDITOR_API UClass* Z_Construct_UClass_UVoxelHeightmapAssetThumbnailRenderer();
VOXELEDITOR_API UClass* Z_Construct_UClass_UVoxelHeightmapAssetThumbnailRenderer_NoRegister();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UVoxelHeightmapAssetThumbnailRenderer ************************************
void UVoxelHeightmapAssetThumbnailRenderer::StaticRegisterNativesUVoxelHeightmapAssetThumbnailRenderer()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UVoxelHeightmapAssetThumbnailRenderer;
UClass* UVoxelHeightmapAssetThumbnailRenderer::GetPrivateStaticClass()
{
	using TClass = UVoxelHeightmapAssetThumbnailRenderer;
	if (!Z_Registration_Info_UClass_UVoxelHeightmapAssetThumbnailRenderer.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("VoxelHeightmapAssetThumbnailRenderer"),
			Z_Registration_Info_UClass_UVoxelHeightmapAssetThumbnailRenderer.InnerSingleton,
			StaticRegisterNativesUVoxelHeightmapAssetThumbnailRenderer,
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
	return Z_Registration_Info_UClass_UVoxelHeightmapAssetThumbnailRenderer.InnerSingleton;
}
UClass* Z_Construct_UClass_UVoxelHeightmapAssetThumbnailRenderer_NoRegister()
{
	return UVoxelHeightmapAssetThumbnailRenderer::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UVoxelHeightmapAssetThumbnailRenderer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Thumbnails/VoxelHeightmapAssetThumbnailRenderer.h" },
		{ "ModuleRelativePath", "Private/Thumbnails/VoxelHeightmapAssetThumbnailRenderer.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelHeightmapAssetThumbnailRenderer>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UVoxelHeightmapAssetThumbnailRenderer_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UTextureThumbnailRenderer,
	(UObject* (*)())Z_Construct_UPackage__Script_VoxelEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelHeightmapAssetThumbnailRenderer_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelHeightmapAssetThumbnailRenderer_Statics::ClassParams = {
	&UVoxelHeightmapAssetThumbnailRenderer::StaticClass,
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
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelHeightmapAssetThumbnailRenderer_Statics::Class_MetaDataParams), Z_Construct_UClass_UVoxelHeightmapAssetThumbnailRenderer_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVoxelHeightmapAssetThumbnailRenderer()
{
	if (!Z_Registration_Info_UClass_UVoxelHeightmapAssetThumbnailRenderer.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelHeightmapAssetThumbnailRenderer.OuterSingleton, Z_Construct_UClass_UVoxelHeightmapAssetThumbnailRenderer_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVoxelHeightmapAssetThumbnailRenderer.OuterSingleton;
}
UVoxelHeightmapAssetThumbnailRenderer::UVoxelHeightmapAssetThumbnailRenderer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelHeightmapAssetThumbnailRenderer);
UVoxelHeightmapAssetThumbnailRenderer::~UVoxelHeightmapAssetThumbnailRenderer() {}
// ********** End Class UVoxelHeightmapAssetThumbnailRenderer **************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_VoxelEditor_Private_Thumbnails_VoxelHeightmapAssetThumbnailRenderer_h__Script_VoxelEditor_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UVoxelHeightmapAssetThumbnailRenderer, UVoxelHeightmapAssetThumbnailRenderer::StaticClass, TEXT("UVoxelHeightmapAssetThumbnailRenderer"), &Z_Registration_Info_UClass_UVoxelHeightmapAssetThumbnailRenderer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelHeightmapAssetThumbnailRenderer), 3570345004U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_VoxelEditor_Private_Thumbnails_VoxelHeightmapAssetThumbnailRenderer_h__Script_VoxelEditor_4197929723(TEXT("/Script/VoxelEditor"),
	Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_VoxelEditor_Private_Thumbnails_VoxelHeightmapAssetThumbnailRenderer_h__Script_VoxelEditor_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_VoxelEditor_Private_Thumbnails_VoxelHeightmapAssetThumbnailRenderer_h__Script_VoxelEditor_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
