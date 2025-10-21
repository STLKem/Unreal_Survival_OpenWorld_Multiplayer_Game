// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Voxel/Public/VoxelEditorDelegatesInterface.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeVoxelEditorDelegatesInterface() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
UPackage* Z_Construct_UPackage__Script_Voxel();
VOXEL_API UClass* Z_Construct_UClass_UVoxelEditorDelegatesInterface();
VOXEL_API UClass* Z_Construct_UClass_UVoxelEditorDelegatesInterface_NoRegister();
// ********** End Cross Module References **********************************************************

// ********** Begin Interface UVoxelEditorDelegatesInterface ***************************************
void UVoxelEditorDelegatesInterface::StaticRegisterNativesUVoxelEditorDelegatesInterface()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UVoxelEditorDelegatesInterface;
UClass* UVoxelEditorDelegatesInterface::GetPrivateStaticClass()
{
	using TClass = UVoxelEditorDelegatesInterface;
	if (!Z_Registration_Info_UClass_UVoxelEditorDelegatesInterface.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("VoxelEditorDelegatesInterface"),
			Z_Registration_Info_UClass_UVoxelEditorDelegatesInterface.InnerSingleton,
			StaticRegisterNativesUVoxelEditorDelegatesInterface,
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
	return Z_Registration_Info_UClass_UVoxelEditorDelegatesInterface.InnerSingleton;
}
UClass* Z_Construct_UClass_UVoxelEditorDelegatesInterface_NoRegister()
{
	return UVoxelEditorDelegatesInterface::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UVoxelEditorDelegatesInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/VoxelEditorDelegatesInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IVoxelEditorDelegatesInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UVoxelEditorDelegatesInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelEditorDelegatesInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelEditorDelegatesInterface_Statics::ClassParams = {
	&UVoxelEditorDelegatesInterface::StaticClass,
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
	0x001040A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelEditorDelegatesInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UVoxelEditorDelegatesInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVoxelEditorDelegatesInterface()
{
	if (!Z_Registration_Info_UClass_UVoxelEditorDelegatesInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelEditorDelegatesInterface.OuterSingleton, Z_Construct_UClass_UVoxelEditorDelegatesInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVoxelEditorDelegatesInterface.OuterSingleton;
}
UVoxelEditorDelegatesInterface::UVoxelEditorDelegatesInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelEditorDelegatesInterface);
// ********** End Interface UVoxelEditorDelegatesInterface *****************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelEditorDelegatesInterface_h__Script_Voxel_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UVoxelEditorDelegatesInterface, UVoxelEditorDelegatesInterface::StaticClass, TEXT("UVoxelEditorDelegatesInterface"), &Z_Registration_Info_UClass_UVoxelEditorDelegatesInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelEditorDelegatesInterface), 1557566173U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelEditorDelegatesInterface_h__Script_Voxel_2791106906(TEXT("/Script/Voxel"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelEditorDelegatesInterface_h__Script_Voxel_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelEditorDelegatesInterface_h__Script_Voxel_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
