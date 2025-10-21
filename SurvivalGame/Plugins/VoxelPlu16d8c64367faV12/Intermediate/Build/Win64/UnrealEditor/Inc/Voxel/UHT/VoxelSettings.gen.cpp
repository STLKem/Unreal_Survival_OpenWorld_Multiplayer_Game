// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VoxelSettings.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeVoxelSettings() {}

// ********** Begin Cross Module References ********************************************************
DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
UPackage* Z_Construct_UPackage__Script_Voxel();
VOXEL_API UClass* Z_Construct_UClass_UVoxelSettings();
VOXEL_API UClass* Z_Construct_UClass_UVoxelSettings_NoRegister();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UVoxelSettings ***********************************************************
void UVoxelSettings::StaticRegisterNativesUVoxelSettings()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UVoxelSettings;
UClass* UVoxelSettings::GetPrivateStaticClass()
{
	using TClass = UVoxelSettings;
	if (!Z_Registration_Info_UClass_UVoxelSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("VoxelSettings"),
			Z_Registration_Info_UClass_UVoxelSettings.InnerSingleton,
			StaticRegisterNativesUVoxelSettings,
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
	return Z_Registration_Info_UClass_UVoxelSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UVoxelSettings_NoRegister()
{
	return UVoxelSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UVoxelSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Usage example: In DefaultEngine.ini\n * [/Script/Voxel.VoxelSettings]\n * bDisableAutoPreview=True\n */" },
#endif
		{ "DisplayName", "Voxel Plugin" },
		{ "IncludePath", "VoxelSettings.h" },
		{ "ModuleRelativePath", "Public/VoxelSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Usage example: In DefaultEngine.ini\n[/Script/Voxel.VoxelSettings]\nbDisableAutoPreview=True" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShowNotifications_MetaData[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Public/VoxelSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDisableAutoPreview_MetaData[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Public/VoxelSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRoundBeforeSaving_MetaData[] = {
		{ "Category", "Config" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Round voxels that do not affect surface nor normals to improve compression\n// Takes a while when saving\n" },
#endif
		{ "ModuleRelativePath", "Public/VoxelSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Round voxels that do not affect surface nor normals to improve compression\nTakes a while when saving" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultCompressionLevel_MetaData[] = {
		{ "Category", "Compression" },
		{ "ClampMax", "9" },
		{ "ClampMin", "-1" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// -1 = ZLib default compression\n// 0 = No compression\n// 1 = Best speed\n// 9 = Best compression\n// Used when compressing voxel save, heightmaps, data assets...\n// Compression speed is written to the log\n// In my tests a compression level of 1 was very fast without compromising too much compression\n" },
#endif
		{ "ModuleRelativePath", "Public/VoxelSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "-1 = ZLib default compression\n0 = No compression\n1 = Best speed\n9 = Best compression\nUsed when compressing voxel save, heightmaps, data assets...\nCompression speed is written to the log\nIn my tests a compression level of 1 was very fast without compromising too much compression" },
#endif
		{ "UIMax", "9" },
		{ "UIMin", "-1" },
	};
#endif // WITH_METADATA
	static void NewProp_bShowNotifications_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowNotifications;
	static void NewProp_bDisableAutoPreview_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDisableAutoPreview;
	static void NewProp_bRoundBeforeSaving_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRoundBeforeSaving;
	static const UECodeGen_Private::FIntPropertyParams NewProp_DefaultCompressionLevel;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UVoxelSettings_Statics::NewProp_bShowNotifications_SetBit(void* Obj)
{
	((UVoxelSettings*)Obj)->bShowNotifications = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVoxelSettings_Statics::NewProp_bShowNotifications = { "bShowNotifications", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UVoxelSettings), &Z_Construct_UClass_UVoxelSettings_Statics::NewProp_bShowNotifications_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShowNotifications_MetaData), NewProp_bShowNotifications_MetaData) };
void Z_Construct_UClass_UVoxelSettings_Statics::NewProp_bDisableAutoPreview_SetBit(void* Obj)
{
	((UVoxelSettings*)Obj)->bDisableAutoPreview = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVoxelSettings_Statics::NewProp_bDisableAutoPreview = { "bDisableAutoPreview", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UVoxelSettings), &Z_Construct_UClass_UVoxelSettings_Statics::NewProp_bDisableAutoPreview_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDisableAutoPreview_MetaData), NewProp_bDisableAutoPreview_MetaData) };
void Z_Construct_UClass_UVoxelSettings_Statics::NewProp_bRoundBeforeSaving_SetBit(void* Obj)
{
	((UVoxelSettings*)Obj)->bRoundBeforeSaving = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVoxelSettings_Statics::NewProp_bRoundBeforeSaving = { "bRoundBeforeSaving", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UVoxelSettings), &Z_Construct_UClass_UVoxelSettings_Statics::NewProp_bRoundBeforeSaving_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRoundBeforeSaving_MetaData), NewProp_bRoundBeforeSaving_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UVoxelSettings_Statics::NewProp_DefaultCompressionLevel = { "DefaultCompressionLevel", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelSettings, DefaultCompressionLevel), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultCompressionLevel_MetaData), NewProp_DefaultCompressionLevel_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelSettings_Statics::NewProp_bShowNotifications,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelSettings_Statics::NewProp_bDisableAutoPreview,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelSettings_Statics::NewProp_bRoundBeforeSaving,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelSettings_Statics::NewProp_DefaultCompressionLevel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UVoxelSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelSettings_Statics::ClassParams = {
	&UVoxelSettings::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UVoxelSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelSettings_Statics::PropPointers),
	0,
	0x001000A6u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UVoxelSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVoxelSettings()
{
	if (!Z_Registration_Info_UClass_UVoxelSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelSettings.OuterSingleton, Z_Construct_UClass_UVoxelSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVoxelSettings.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelSettings);
UVoxelSettings::~UVoxelSettings() {}
// ********** End Class UVoxelSettings *************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelSettings_h__Script_Voxel_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UVoxelSettings, UVoxelSettings::StaticClass, TEXT("UVoxelSettings"), &Z_Registration_Info_UClass_UVoxelSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelSettings), 2469690568U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelSettings_h__Script_Voxel_3321512081(TEXT("/Script/Voxel"),
	Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelSettings_h__Script_Voxel_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelSettings_h__Script_Voxel_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
