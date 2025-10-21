// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VoxelOpenAssetsOnStartup.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeVoxelOpenAssetsOnStartup() {}

// ********** Begin Cross Module References ********************************************************
DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
UPackage* Z_Construct_UPackage__Script_VoxelEditor();
VOXELEDITOR_API UClass* Z_Construct_UClass_UVoxelOpenAssetsOnStartup();
VOXELEDITOR_API UClass* Z_Construct_UClass_UVoxelOpenAssetsOnStartup_NoRegister();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UVoxelOpenAssetsOnStartup ************************************************
void UVoxelOpenAssetsOnStartup::StaticRegisterNativesUVoxelOpenAssetsOnStartup()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UVoxelOpenAssetsOnStartup;
UClass* UVoxelOpenAssetsOnStartup::GetPrivateStaticClass()
{
	using TClass = UVoxelOpenAssetsOnStartup;
	if (!Z_Registration_Info_UClass_UVoxelOpenAssetsOnStartup.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("VoxelOpenAssetsOnStartup"),
			Z_Registration_Info_UClass_UVoxelOpenAssetsOnStartup.InnerSingleton,
			StaticRegisterNativesUVoxelOpenAssetsOnStartup,
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
	return Z_Registration_Info_UClass_UVoxelOpenAssetsOnStartup.InnerSingleton;
}
UClass* Z_Construct_UClass_UVoxelOpenAssetsOnStartup_NoRegister()
{
	return UVoxelOpenAssetsOnStartup::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UVoxelOpenAssetsOnStartup_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "DisplayName", "Open Assets On Startup" },
		{ "IncludePath", "VoxelOpenAssetsOnStartup.h" },
		{ "ModuleRelativePath", "Private/VoxelOpenAssetsOnStartup.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableOpenAssetsOnStartup_MetaData[] = {
		{ "Category", "Config" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// If true, will add a Open Asset On Startup option to all assets context menus in the content browser\n// Assets marked as such will automatically open on engine startup\n// Useful to iterate quickly when restarting the editor\n" },
#endif
		{ "ModuleRelativePath", "Private/VoxelOpenAssetsOnStartup.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If true, will add a Open Asset On Startup option to all assets context menus in the content browser\nAssets marked as such will automatically open on engine startup\nUseful to iterate quickly when restarting the editor" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShowSetAsStartupMap_MetaData[] = {
		{ "Category", "Config" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// If true, will show a context menu option to change the project editor startup map in the context menu\n" },
#endif
		{ "ModuleRelativePath", "Private/VoxelOpenAssetsOnStartup.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If true, will show a context menu option to change the project editor startup map in the context menu" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AssetsToOpenOnStartup_MetaData[] = {
		{ "ModuleRelativePath", "Private/VoxelOpenAssetsOnStartup.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bEnableOpenAssetsOnStartup_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableOpenAssetsOnStartup;
	static void NewProp_bShowSetAsStartupMap_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowSetAsStartupMap;
	static const UECodeGen_Private::FBoolPropertyParams NewProp_AssetsToOpenOnStartup_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_AssetsToOpenOnStartup_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_AssetsToOpenOnStartup;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelOpenAssetsOnStartup>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UVoxelOpenAssetsOnStartup_Statics::NewProp_bEnableOpenAssetsOnStartup_SetBit(void* Obj)
{
	((UVoxelOpenAssetsOnStartup*)Obj)->bEnableOpenAssetsOnStartup = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVoxelOpenAssetsOnStartup_Statics::NewProp_bEnableOpenAssetsOnStartup = { "bEnableOpenAssetsOnStartup", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UVoxelOpenAssetsOnStartup), &Z_Construct_UClass_UVoxelOpenAssetsOnStartup_Statics::NewProp_bEnableOpenAssetsOnStartup_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableOpenAssetsOnStartup_MetaData), NewProp_bEnableOpenAssetsOnStartup_MetaData) };
void Z_Construct_UClass_UVoxelOpenAssetsOnStartup_Statics::NewProp_bShowSetAsStartupMap_SetBit(void* Obj)
{
	((UVoxelOpenAssetsOnStartup*)Obj)->bShowSetAsStartupMap = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVoxelOpenAssetsOnStartup_Statics::NewProp_bShowSetAsStartupMap = { "bShowSetAsStartupMap", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UVoxelOpenAssetsOnStartup), &Z_Construct_UClass_UVoxelOpenAssetsOnStartup_Statics::NewProp_bShowSetAsStartupMap_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShowSetAsStartupMap_MetaData), NewProp_bShowSetAsStartupMap_MetaData) };
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVoxelOpenAssetsOnStartup_Statics::NewProp_AssetsToOpenOnStartup_ValueProp = { "AssetsToOpenOnStartup", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UVoxelOpenAssetsOnStartup_Statics::NewProp_AssetsToOpenOnStartup_Key_KeyProp = { "AssetsToOpenOnStartup_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UVoxelOpenAssetsOnStartup_Statics::NewProp_AssetsToOpenOnStartup = { "AssetsToOpenOnStartup", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelOpenAssetsOnStartup, AssetsToOpenOnStartup), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AssetsToOpenOnStartup_MetaData), NewProp_AssetsToOpenOnStartup_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelOpenAssetsOnStartup_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelOpenAssetsOnStartup_Statics::NewProp_bEnableOpenAssetsOnStartup,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelOpenAssetsOnStartup_Statics::NewProp_bShowSetAsStartupMap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelOpenAssetsOnStartup_Statics::NewProp_AssetsToOpenOnStartup_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelOpenAssetsOnStartup_Statics::NewProp_AssetsToOpenOnStartup_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelOpenAssetsOnStartup_Statics::NewProp_AssetsToOpenOnStartup,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelOpenAssetsOnStartup_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UVoxelOpenAssetsOnStartup_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_VoxelEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelOpenAssetsOnStartup_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelOpenAssetsOnStartup_Statics::ClassParams = {
	&UVoxelOpenAssetsOnStartup::StaticClass,
	"EditorPerProjectUserSettings",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UVoxelOpenAssetsOnStartup_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelOpenAssetsOnStartup_Statics::PropPointers),
	0,
	0x000000A6u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelOpenAssetsOnStartup_Statics::Class_MetaDataParams), Z_Construct_UClass_UVoxelOpenAssetsOnStartup_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVoxelOpenAssetsOnStartup()
{
	if (!Z_Registration_Info_UClass_UVoxelOpenAssetsOnStartup.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelOpenAssetsOnStartup.OuterSingleton, Z_Construct_UClass_UVoxelOpenAssetsOnStartup_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVoxelOpenAssetsOnStartup.OuterSingleton;
}
UVoxelOpenAssetsOnStartup::UVoxelOpenAssetsOnStartup(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelOpenAssetsOnStartup);
UVoxelOpenAssetsOnStartup::~UVoxelOpenAssetsOnStartup() {}
// ********** End Class UVoxelOpenAssetsOnStartup **************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_VoxelEditor_Private_VoxelOpenAssetsOnStartup_h__Script_VoxelEditor_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UVoxelOpenAssetsOnStartup, UVoxelOpenAssetsOnStartup::StaticClass, TEXT("UVoxelOpenAssetsOnStartup"), &Z_Registration_Info_UClass_UVoxelOpenAssetsOnStartup, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelOpenAssetsOnStartup), 118124013U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_VoxelEditor_Private_VoxelOpenAssetsOnStartup_h__Script_VoxelEditor_3548584431(TEXT("/Script/VoxelEditor"),
	Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_VoxelEditor_Private_VoxelOpenAssetsOnStartup_h__Script_VoxelEditor_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_VoxelEditor_Private_VoxelOpenAssetsOnStartup_h__Script_VoxelEditor_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
