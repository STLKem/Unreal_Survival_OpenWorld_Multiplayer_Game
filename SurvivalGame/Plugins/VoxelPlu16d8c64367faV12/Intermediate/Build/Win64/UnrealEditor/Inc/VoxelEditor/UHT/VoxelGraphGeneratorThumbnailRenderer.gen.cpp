// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Thumbnails/VoxelGraphGeneratorThumbnailRenderer.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeVoxelGraphGeneratorThumbnailRenderer() {}

// ********** Begin Cross Module References ********************************************************
UNREALED_API UClass* Z_Construct_UClass_UTextureThumbnailRenderer();
UPackage* Z_Construct_UPackage__Script_VoxelEditor();
VOXELEDITOR_API UClass* Z_Construct_UClass_UVoxelGraphGeneratorThumbnailRenderer();
VOXELEDITOR_API UClass* Z_Construct_UClass_UVoxelGraphGeneratorThumbnailRenderer_NoRegister();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UVoxelGraphGeneratorThumbnailRenderer ************************************
void UVoxelGraphGeneratorThumbnailRenderer::StaticRegisterNativesUVoxelGraphGeneratorThumbnailRenderer()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UVoxelGraphGeneratorThumbnailRenderer;
UClass* UVoxelGraphGeneratorThumbnailRenderer::GetPrivateStaticClass()
{
	using TClass = UVoxelGraphGeneratorThumbnailRenderer;
	if (!Z_Registration_Info_UClass_UVoxelGraphGeneratorThumbnailRenderer.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("VoxelGraphGeneratorThumbnailRenderer"),
			Z_Registration_Info_UClass_UVoxelGraphGeneratorThumbnailRenderer.InnerSingleton,
			StaticRegisterNativesUVoxelGraphGeneratorThumbnailRenderer,
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
	return Z_Registration_Info_UClass_UVoxelGraphGeneratorThumbnailRenderer.InnerSingleton;
}
UClass* Z_Construct_UClass_UVoxelGraphGeneratorThumbnailRenderer_NoRegister()
{
	return UVoxelGraphGeneratorThumbnailRenderer::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UVoxelGraphGeneratorThumbnailRenderer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Thumbnails/VoxelGraphGeneratorThumbnailRenderer.h" },
		{ "ModuleRelativePath", "Private/Thumbnails/VoxelGraphGeneratorThumbnailRenderer.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelGraphGeneratorThumbnailRenderer>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UVoxelGraphGeneratorThumbnailRenderer_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UTextureThumbnailRenderer,
	(UObject* (*)())Z_Construct_UPackage__Script_VoxelEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelGraphGeneratorThumbnailRenderer_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelGraphGeneratorThumbnailRenderer_Statics::ClassParams = {
	&UVoxelGraphGeneratorThumbnailRenderer::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelGraphGeneratorThumbnailRenderer_Statics::Class_MetaDataParams), Z_Construct_UClass_UVoxelGraphGeneratorThumbnailRenderer_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVoxelGraphGeneratorThumbnailRenderer()
{
	if (!Z_Registration_Info_UClass_UVoxelGraphGeneratorThumbnailRenderer.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelGraphGeneratorThumbnailRenderer.OuterSingleton, Z_Construct_UClass_UVoxelGraphGeneratorThumbnailRenderer_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVoxelGraphGeneratorThumbnailRenderer.OuterSingleton;
}
UVoxelGraphGeneratorThumbnailRenderer::UVoxelGraphGeneratorThumbnailRenderer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelGraphGeneratorThumbnailRenderer);
UVoxelGraphGeneratorThumbnailRenderer::~UVoxelGraphGeneratorThumbnailRenderer() {}
// ********** End Class UVoxelGraphGeneratorThumbnailRenderer **************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_VoxelEditor_Private_Thumbnails_VoxelGraphGeneratorThumbnailRenderer_h__Script_VoxelEditor_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UVoxelGraphGeneratorThumbnailRenderer, UVoxelGraphGeneratorThumbnailRenderer::StaticClass, TEXT("UVoxelGraphGeneratorThumbnailRenderer"), &Z_Registration_Info_UClass_UVoxelGraphGeneratorThumbnailRenderer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelGraphGeneratorThumbnailRenderer), 2487532957U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_VoxelEditor_Private_Thumbnails_VoxelGraphGeneratorThumbnailRenderer_h__Script_VoxelEditor_1287091123(TEXT("/Script/VoxelEditor"),
	Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_VoxelEditor_Private_Thumbnails_VoxelGraphGeneratorThumbnailRenderer_h__Script_VoxelEditor_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_VoxelEditor_Private_Thumbnails_VoxelGraphGeneratorThumbnailRenderer_h__Script_VoxelEditor_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
