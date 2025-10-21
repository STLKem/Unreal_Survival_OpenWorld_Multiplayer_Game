// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VoxelPlaceableItems/Actors/VoxelPlaceableItemActorHelper.h"
#include "VoxelWorld.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeVoxelPlaceableItemActorHelper() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
UPackage* Z_Construct_UPackage__Script_Voxel();
VOXEL_API UClass* Z_Construct_UClass_UVoxelPlaceableItemActorHelper();
VOXEL_API UClass* Z_Construct_UClass_UVoxelPlaceableItemActorHelper_NoRegister();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UVoxelPlaceableItemActorHelper *******************************************
void UVoxelPlaceableItemActorHelper::StaticRegisterNativesUVoxelPlaceableItemActorHelper()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UVoxelPlaceableItemActorHelper;
UClass* UVoxelPlaceableItemActorHelper::GetPrivateStaticClass()
{
	using TClass = UVoxelPlaceableItemActorHelper;
	if (!Z_Registration_Info_UClass_UVoxelPlaceableItemActorHelper.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("VoxelPlaceableItemActorHelper"),
			Z_Registration_Info_UClass_UVoxelPlaceableItemActorHelper.InnerSingleton,
			StaticRegisterNativesUVoxelPlaceableItemActorHelper,
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
	return Z_Registration_Info_UClass_UVoxelPlaceableItemActorHelper.InnerSingleton;
}
UClass* Z_Construct_UClass_UVoxelPlaceableItemActorHelper_NoRegister()
{
	return UVoxelPlaceableItemActorHelper::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UVoxelPlaceableItemActorHelper_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "VoxelPlaceableItems/Actors/VoxelPlaceableItemActorHelper.h" },
		{ "ModuleRelativePath", "Public/VoxelPlaceableItems/Actors/VoxelPlaceableItemActorHelper.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelPlaceableItemActorHelper>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UVoxelPlaceableItemActorHelper_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelPlaceableItemActorHelper_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelPlaceableItemActorHelper_Statics::ClassParams = {
	&UVoxelPlaceableItemActorHelper::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelPlaceableItemActorHelper_Statics::Class_MetaDataParams), Z_Construct_UClass_UVoxelPlaceableItemActorHelper_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVoxelPlaceableItemActorHelper()
{
	if (!Z_Registration_Info_UClass_UVoxelPlaceableItemActorHelper.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelPlaceableItemActorHelper.OuterSingleton, Z_Construct_UClass_UVoxelPlaceableItemActorHelper_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVoxelPlaceableItemActorHelper.OuterSingleton;
}
UVoxelPlaceableItemActorHelper::UVoxelPlaceableItemActorHelper(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelPlaceableItemActorHelper);
UVoxelPlaceableItemActorHelper::~UVoxelPlaceableItemActorHelper() {}
// ********** End Class UVoxelPlaceableItemActorHelper *********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelPlaceableItems_Actors_VoxelPlaceableItemActorHelper_h__Script_Voxel_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UVoxelPlaceableItemActorHelper, UVoxelPlaceableItemActorHelper::StaticClass, TEXT("UVoxelPlaceableItemActorHelper"), &Z_Registration_Info_UClass_UVoxelPlaceableItemActorHelper, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelPlaceableItemActorHelper), 3302828821U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelPlaceableItems_Actors_VoxelPlaceableItemActorHelper_h__Script_Voxel_3179063150(TEXT("/Script/Voxel"),
	Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelPlaceableItems_Actors_VoxelPlaceableItemActorHelper_h__Script_Voxel_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelPlaceableItems_Actors_VoxelPlaceableItemActorHelper_h__Script_Voxel_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
