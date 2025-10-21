// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Voxel/Public/VoxelMultiplayer/VoxelMultiplayerInterface.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeVoxelMultiplayerInterface() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
UPackage* Z_Construct_UPackage__Script_Voxel();
VOXEL_API UClass* Z_Construct_UClass_UVoxelMultiplayerInterface();
VOXEL_API UClass* Z_Construct_UClass_UVoxelMultiplayerInterface_NoRegister();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UVoxelMultiplayerInterface ***********************************************
void UVoxelMultiplayerInterface::StaticRegisterNativesUVoxelMultiplayerInterface()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UVoxelMultiplayerInterface;
UClass* UVoxelMultiplayerInterface::GetPrivateStaticClass()
{
	using TClass = UVoxelMultiplayerInterface;
	if (!Z_Registration_Info_UClass_UVoxelMultiplayerInterface.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("VoxelMultiplayerInterface"),
			Z_Registration_Info_UClass_UVoxelMultiplayerInterface.InnerSingleton,
			StaticRegisterNativesUVoxelMultiplayerInterface,
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
	return Z_Registration_Info_UClass_UVoxelMultiplayerInterface.InnerSingleton;
}
UClass* Z_Construct_UClass_UVoxelMultiplayerInterface_NoRegister()
{
	return UVoxelMultiplayerInterface::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UVoxelMultiplayerInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "VoxelMultiplayer/VoxelMultiplayerInterface.h" },
		{ "ModuleRelativePath", "Public/VoxelMultiplayer/VoxelMultiplayerInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelMultiplayerInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UVoxelMultiplayerInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelMultiplayerInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelMultiplayerInterface_Statics::ClassParams = {
	&UVoxelMultiplayerInterface::StaticClass,
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
	0x001000A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelMultiplayerInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UVoxelMultiplayerInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVoxelMultiplayerInterface()
{
	if (!Z_Registration_Info_UClass_UVoxelMultiplayerInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelMultiplayerInterface.OuterSingleton, Z_Construct_UClass_UVoxelMultiplayerInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVoxelMultiplayerInterface.OuterSingleton;
}
UVoxelMultiplayerInterface::UVoxelMultiplayerInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelMultiplayerInterface);
UVoxelMultiplayerInterface::~UVoxelMultiplayerInterface() {}
// ********** End Class UVoxelMultiplayerInterface *************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelMultiplayer_VoxelMultiplayerInterface_h__Script_Voxel_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UVoxelMultiplayerInterface, UVoxelMultiplayerInterface::StaticClass, TEXT("UVoxelMultiplayerInterface"), &Z_Registration_Info_UClass_UVoxelMultiplayerInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelMultiplayerInterface), 3077307108U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelMultiplayer_VoxelMultiplayerInterface_h__Script_Voxel_2816084606(TEXT("/Script/Voxel"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelMultiplayer_VoxelMultiplayerInterface_h__Script_Voxel_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelMultiplayer_VoxelMultiplayerInterface_h__Script_Voxel_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
