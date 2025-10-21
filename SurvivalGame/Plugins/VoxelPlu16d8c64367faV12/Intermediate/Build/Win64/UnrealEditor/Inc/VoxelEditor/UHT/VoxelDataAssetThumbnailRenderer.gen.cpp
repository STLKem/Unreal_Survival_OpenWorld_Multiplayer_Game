// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Thumbnails/VoxelDataAssetThumbnailRenderer.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeVoxelDataAssetThumbnailRenderer() {}

// ********** Begin Cross Module References ********************************************************
UNREALED_API UClass* Z_Construct_UClass_UTextureThumbnailRenderer();
UPackage* Z_Construct_UPackage__Script_VoxelEditor();
VOXELEDITOR_API UClass* Z_Construct_UClass_UVoxelDataAssetThumbnailRenderer();
VOXELEDITOR_API UClass* Z_Construct_UClass_UVoxelDataAssetThumbnailRenderer_NoRegister();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UVoxelDataAssetThumbnailRenderer *****************************************
void UVoxelDataAssetThumbnailRenderer::StaticRegisterNativesUVoxelDataAssetThumbnailRenderer()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UVoxelDataAssetThumbnailRenderer;
UClass* UVoxelDataAssetThumbnailRenderer::GetPrivateStaticClass()
{
	using TClass = UVoxelDataAssetThumbnailRenderer;
	if (!Z_Registration_Info_UClass_UVoxelDataAssetThumbnailRenderer.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("VoxelDataAssetThumbnailRenderer"),
			Z_Registration_Info_UClass_UVoxelDataAssetThumbnailRenderer.InnerSingleton,
			StaticRegisterNativesUVoxelDataAssetThumbnailRenderer,
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
	return Z_Registration_Info_UClass_UVoxelDataAssetThumbnailRenderer.InnerSingleton;
}
UClass* Z_Construct_UClass_UVoxelDataAssetThumbnailRenderer_NoRegister()
{
	return UVoxelDataAssetThumbnailRenderer::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UVoxelDataAssetThumbnailRenderer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Thumbnails/VoxelDataAssetThumbnailRenderer.h" },
		{ "ModuleRelativePath", "Private/Thumbnails/VoxelDataAssetThumbnailRenderer.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelDataAssetThumbnailRenderer>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UVoxelDataAssetThumbnailRenderer_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UTextureThumbnailRenderer,
	(UObject* (*)())Z_Construct_UPackage__Script_VoxelEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelDataAssetThumbnailRenderer_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelDataAssetThumbnailRenderer_Statics::ClassParams = {
	&UVoxelDataAssetThumbnailRenderer::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelDataAssetThumbnailRenderer_Statics::Class_MetaDataParams), Z_Construct_UClass_UVoxelDataAssetThumbnailRenderer_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVoxelDataAssetThumbnailRenderer()
{
	if (!Z_Registration_Info_UClass_UVoxelDataAssetThumbnailRenderer.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelDataAssetThumbnailRenderer.OuterSingleton, Z_Construct_UClass_UVoxelDataAssetThumbnailRenderer_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVoxelDataAssetThumbnailRenderer.OuterSingleton;
}
UVoxelDataAssetThumbnailRenderer::UVoxelDataAssetThumbnailRenderer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelDataAssetThumbnailRenderer);
UVoxelDataAssetThumbnailRenderer::~UVoxelDataAssetThumbnailRenderer() {}
// ********** End Class UVoxelDataAssetThumbnailRenderer *******************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_VoxelEditor_Private_Thumbnails_VoxelDataAssetThumbnailRenderer_h__Script_VoxelEditor_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UVoxelDataAssetThumbnailRenderer, UVoxelDataAssetThumbnailRenderer::StaticClass, TEXT("UVoxelDataAssetThumbnailRenderer"), &Z_Registration_Info_UClass_UVoxelDataAssetThumbnailRenderer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelDataAssetThumbnailRenderer), 2592055047U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_VoxelEditor_Private_Thumbnails_VoxelDataAssetThumbnailRenderer_h__Script_VoxelEditor_1683575874(TEXT("/Script/VoxelEditor"),
	Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_VoxelEditor_Private_Thumbnails_VoxelDataAssetThumbnailRenderer_h__Script_VoxelEditor_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_VoxelEditor_Private_Thumbnails_VoxelDataAssetThumbnailRenderer_h__Script_VoxelEditor_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
