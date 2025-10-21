// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Voxel/Public/VoxelCharacter.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeVoxelCharacter() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
UPackage* Z_Construct_UPackage__Script_Voxel();
VOXEL_API UClass* Z_Construct_UClass_AVoxelCharacter();
VOXEL_API UClass* Z_Construct_UClass_AVoxelCharacter_NoRegister();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AVoxelCharacter **********************************************************
void AVoxelCharacter::StaticRegisterNativesAVoxelCharacter()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AVoxelCharacter;
UClass* AVoxelCharacter::GetPrivateStaticClass()
{
	using TClass = AVoxelCharacter;
	if (!Z_Registration_Info_UClass_AVoxelCharacter.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("VoxelCharacter"),
			Z_Registration_Info_UClass_AVoxelCharacter.InnerSingleton,
			StaticRegisterNativesAVoxelCharacter,
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
	return Z_Registration_Info_UClass_AVoxelCharacter.InnerSingleton;
}
UClass* Z_Construct_UClass_AVoxelCharacter_NoRegister()
{
	return AVoxelCharacter::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AVoxelCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "VoxelCharacter.h" },
		{ "ModuleRelativePath", "Public/VoxelCharacter.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AVoxelCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AVoxelCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AVoxelCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AVoxelCharacter_Statics::ClassParams = {
	&AVoxelCharacter::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AVoxelCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_AVoxelCharacter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AVoxelCharacter()
{
	if (!Z_Registration_Info_UClass_AVoxelCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AVoxelCharacter.OuterSingleton, Z_Construct_UClass_AVoxelCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AVoxelCharacter.OuterSingleton;
}
AVoxelCharacter::AVoxelCharacter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AVoxelCharacter);
AVoxelCharacter::~AVoxelCharacter() {}
// ********** End Class AVoxelCharacter ************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelCharacter_h__Script_Voxel_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AVoxelCharacter, AVoxelCharacter::StaticClass, TEXT("AVoxelCharacter"), &Z_Registration_Info_UClass_AVoxelCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AVoxelCharacter), 2228573119U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelCharacter_h__Script_Voxel_256346979(TEXT("/Script/Voxel"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelCharacter_h__Script_Voxel_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelCharacter_h__Script_Voxel_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
