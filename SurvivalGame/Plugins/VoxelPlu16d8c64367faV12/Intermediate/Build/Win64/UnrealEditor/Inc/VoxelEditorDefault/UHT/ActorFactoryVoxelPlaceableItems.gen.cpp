// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ActorFactoryVoxelPlaceableItems.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeActorFactoryVoxelPlaceableItems() {}

// ********** Begin Cross Module References ********************************************************
UNREALED_API UClass* Z_Construct_UClass_UActorFactory();
UPackage* Z_Construct_UPackage__Script_VoxelEditorDefault();
VOXELEDITORDEFAULT_API UClass* Z_Construct_UClass_UActorFactoryVoxelAssetActor();
VOXELEDITORDEFAULT_API UClass* Z_Construct_UClass_UActorFactoryVoxelAssetActor_NoRegister();
VOXELEDITORDEFAULT_API UClass* Z_Construct_UClass_UActorFactoryVoxelDisableEditsBox();
VOXELEDITORDEFAULT_API UClass* Z_Construct_UClass_UActorFactoryVoxelDisableEditsBox_NoRegister();
VOXELEDITORDEFAULT_API UClass* Z_Construct_UClass_UActorFactoryVoxelPlaceableItem();
VOXELEDITORDEFAULT_API UClass* Z_Construct_UClass_UActorFactoryVoxelPlaceableItem_NoRegister();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UActorFactoryVoxelPlaceableItem ******************************************
void UActorFactoryVoxelPlaceableItem::StaticRegisterNativesUActorFactoryVoxelPlaceableItem()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UActorFactoryVoxelPlaceableItem;
UClass* UActorFactoryVoxelPlaceableItem::GetPrivateStaticClass()
{
	using TClass = UActorFactoryVoxelPlaceableItem;
	if (!Z_Registration_Info_UClass_UActorFactoryVoxelPlaceableItem.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ActorFactoryVoxelPlaceableItem"),
			Z_Registration_Info_UClass_UActorFactoryVoxelPlaceableItem.InnerSingleton,
			StaticRegisterNativesUActorFactoryVoxelPlaceableItem,
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
	return Z_Registration_Info_UClass_UActorFactoryVoxelPlaceableItem.InnerSingleton;
}
UClass* Z_Construct_UClass_UActorFactoryVoxelPlaceableItem_NoRegister()
{
	return UActorFactoryVoxelPlaceableItem::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UActorFactoryVoxelPlaceableItem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "ActorFactoryVoxelPlaceableItems.h" },
		{ "ModuleRelativePath", "Public/ActorFactoryVoxelPlaceableItems.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UActorFactoryVoxelPlaceableItem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UActorFactoryVoxelPlaceableItem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorFactory,
	(UObject* (*)())Z_Construct_UPackage__Script_VoxelEditorDefault,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UActorFactoryVoxelPlaceableItem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UActorFactoryVoxelPlaceableItem_Statics::ClassParams = {
	&UActorFactoryVoxelPlaceableItem::StaticClass,
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
	0x001030ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UActorFactoryVoxelPlaceableItem_Statics::Class_MetaDataParams), Z_Construct_UClass_UActorFactoryVoxelPlaceableItem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UActorFactoryVoxelPlaceableItem()
{
	if (!Z_Registration_Info_UClass_UActorFactoryVoxelPlaceableItem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UActorFactoryVoxelPlaceableItem.OuterSingleton, Z_Construct_UClass_UActorFactoryVoxelPlaceableItem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UActorFactoryVoxelPlaceableItem.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UActorFactoryVoxelPlaceableItem);
UActorFactoryVoxelPlaceableItem::~UActorFactoryVoxelPlaceableItem() {}
// ********** End Class UActorFactoryVoxelPlaceableItem ********************************************

// ********** Begin Class UActorFactoryVoxelDisableEditsBox ****************************************
void UActorFactoryVoxelDisableEditsBox::StaticRegisterNativesUActorFactoryVoxelDisableEditsBox()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UActorFactoryVoxelDisableEditsBox;
UClass* UActorFactoryVoxelDisableEditsBox::GetPrivateStaticClass()
{
	using TClass = UActorFactoryVoxelDisableEditsBox;
	if (!Z_Registration_Info_UClass_UActorFactoryVoxelDisableEditsBox.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ActorFactoryVoxelDisableEditsBox"),
			Z_Registration_Info_UClass_UActorFactoryVoxelDisableEditsBox.InnerSingleton,
			StaticRegisterNativesUActorFactoryVoxelDisableEditsBox,
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
	return Z_Registration_Info_UClass_UActorFactoryVoxelDisableEditsBox.InnerSingleton;
}
UClass* Z_Construct_UClass_UActorFactoryVoxelDisableEditsBox_NoRegister()
{
	return UActorFactoryVoxelDisableEditsBox::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UActorFactoryVoxelDisableEditsBox_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "ActorFactoryVoxelPlaceableItems.h" },
		{ "ModuleRelativePath", "Public/ActorFactoryVoxelPlaceableItems.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UActorFactoryVoxelDisableEditsBox>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UActorFactoryVoxelDisableEditsBox_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorFactoryVoxelPlaceableItem,
	(UObject* (*)())Z_Construct_UPackage__Script_VoxelEditorDefault,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UActorFactoryVoxelDisableEditsBox_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UActorFactoryVoxelDisableEditsBox_Statics::ClassParams = {
	&UActorFactoryVoxelDisableEditsBox::StaticClass,
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
	0x001030ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UActorFactoryVoxelDisableEditsBox_Statics::Class_MetaDataParams), Z_Construct_UClass_UActorFactoryVoxelDisableEditsBox_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UActorFactoryVoxelDisableEditsBox()
{
	if (!Z_Registration_Info_UClass_UActorFactoryVoxelDisableEditsBox.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UActorFactoryVoxelDisableEditsBox.OuterSingleton, Z_Construct_UClass_UActorFactoryVoxelDisableEditsBox_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UActorFactoryVoxelDisableEditsBox.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UActorFactoryVoxelDisableEditsBox);
UActorFactoryVoxelDisableEditsBox::~UActorFactoryVoxelDisableEditsBox() {}
// ********** End Class UActorFactoryVoxelDisableEditsBox ******************************************

// ********** Begin Class UActorFactoryVoxelAssetActor *********************************************
void UActorFactoryVoxelAssetActor::StaticRegisterNativesUActorFactoryVoxelAssetActor()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UActorFactoryVoxelAssetActor;
UClass* UActorFactoryVoxelAssetActor::GetPrivateStaticClass()
{
	using TClass = UActorFactoryVoxelAssetActor;
	if (!Z_Registration_Info_UClass_UActorFactoryVoxelAssetActor.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ActorFactoryVoxelAssetActor"),
			Z_Registration_Info_UClass_UActorFactoryVoxelAssetActor.InnerSingleton,
			StaticRegisterNativesUActorFactoryVoxelAssetActor,
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
	return Z_Registration_Info_UClass_UActorFactoryVoxelAssetActor.InnerSingleton;
}
UClass* Z_Construct_UClass_UActorFactoryVoxelAssetActor_NoRegister()
{
	return UActorFactoryVoxelAssetActor::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UActorFactoryVoxelAssetActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "ActorFactoryVoxelPlaceableItems.h" },
		{ "ModuleRelativePath", "Public/ActorFactoryVoxelPlaceableItems.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UActorFactoryVoxelAssetActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UActorFactoryVoxelAssetActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorFactoryVoxelPlaceableItem,
	(UObject* (*)())Z_Construct_UPackage__Script_VoxelEditorDefault,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UActorFactoryVoxelAssetActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UActorFactoryVoxelAssetActor_Statics::ClassParams = {
	&UActorFactoryVoxelAssetActor::StaticClass,
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
	0x001030ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UActorFactoryVoxelAssetActor_Statics::Class_MetaDataParams), Z_Construct_UClass_UActorFactoryVoxelAssetActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UActorFactoryVoxelAssetActor()
{
	if (!Z_Registration_Info_UClass_UActorFactoryVoxelAssetActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UActorFactoryVoxelAssetActor.OuterSingleton, Z_Construct_UClass_UActorFactoryVoxelAssetActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UActorFactoryVoxelAssetActor.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UActorFactoryVoxelAssetActor);
UActorFactoryVoxelAssetActor::~UActorFactoryVoxelAssetActor() {}
// ********** End Class UActorFactoryVoxelAssetActor ***********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_VoxelEditorDefault_Public_ActorFactoryVoxelPlaceableItems_h__Script_VoxelEditorDefault_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UActorFactoryVoxelPlaceableItem, UActorFactoryVoxelPlaceableItem::StaticClass, TEXT("UActorFactoryVoxelPlaceableItem"), &Z_Registration_Info_UClass_UActorFactoryVoxelPlaceableItem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UActorFactoryVoxelPlaceableItem), 1623383291U) },
		{ Z_Construct_UClass_UActorFactoryVoxelDisableEditsBox, UActorFactoryVoxelDisableEditsBox::StaticClass, TEXT("UActorFactoryVoxelDisableEditsBox"), &Z_Registration_Info_UClass_UActorFactoryVoxelDisableEditsBox, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UActorFactoryVoxelDisableEditsBox), 348057414U) },
		{ Z_Construct_UClass_UActorFactoryVoxelAssetActor, UActorFactoryVoxelAssetActor::StaticClass, TEXT("UActorFactoryVoxelAssetActor"), &Z_Registration_Info_UClass_UActorFactoryVoxelAssetActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UActorFactoryVoxelAssetActor), 1239898054U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_VoxelEditorDefault_Public_ActorFactoryVoxelPlaceableItems_h__Script_VoxelEditorDefault_3221172808(TEXT("/Script/VoxelEditorDefault"),
	Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_VoxelEditorDefault_Public_ActorFactoryVoxelPlaceableItems_h__Script_VoxelEditorDefault_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_VoxelEditorDefault_Public_ActorFactoryVoxelPlaceableItems_h__Script_VoxelEditorDefault_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
