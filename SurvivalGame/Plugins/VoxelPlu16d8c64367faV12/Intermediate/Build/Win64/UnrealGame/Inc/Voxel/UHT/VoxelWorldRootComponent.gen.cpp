// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Voxel/Public/VoxelWorldRootComponent.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeVoxelWorldRootComponent() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UBodySetup_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent();
UPackage* Z_Construct_UPackage__Script_Voxel();
VOXEL_API UClass* Z_Construct_UClass_UVoxelWorldRootComponent();
VOXEL_API UClass* Z_Construct_UClass_UVoxelWorldRootComponent_NoRegister();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UVoxelWorldRootComponent *************************************************
void UVoxelWorldRootComponent::StaticRegisterNativesUVoxelWorldRootComponent()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UVoxelWorldRootComponent;
UClass* UVoxelWorldRootComponent::GetPrivateStaticClass()
{
	using TClass = UVoxelWorldRootComponent;
	if (!Z_Registration_Info_UClass_UVoxelWorldRootComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("VoxelWorldRootComponent"),
			Z_Registration_Info_UClass_UVoxelWorldRootComponent.InnerSingleton,
			StaticRegisterNativesUVoxelWorldRootComponent,
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
	return Z_Registration_Info_UClass_UVoxelWorldRootComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_UVoxelWorldRootComponent_NoRegister()
{
	return UVoxelWorldRootComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UVoxelWorldRootComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Mobility VirtualTexture Trigger" },
		{ "IncludePath", "VoxelWorldRootComponent.h" },
		{ "ModuleRelativePath", "Public/VoxelWorldRootComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BodySetup_MetaData[] = {
		{ "ModuleRelativePath", "Public/VoxelWorldRootComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BodySetup;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelWorldRootComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVoxelWorldRootComponent_Statics::NewProp_BodySetup = { "BodySetup", nullptr, (EPropertyFlags)0x0144000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelWorldRootComponent, BodySetup), Z_Construct_UClass_UBodySetup_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BodySetup_MetaData), NewProp_BodySetup_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelWorldRootComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelWorldRootComponent_Statics::NewProp_BodySetup,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelWorldRootComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UVoxelWorldRootComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPrimitiveComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelWorldRootComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelWorldRootComponent_Statics::ClassParams = {
	&UVoxelWorldRootComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UVoxelWorldRootComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelWorldRootComponent_Statics::PropPointers),
	0,
	0x00B010A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelWorldRootComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UVoxelWorldRootComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVoxelWorldRootComponent()
{
	if (!Z_Registration_Info_UClass_UVoxelWorldRootComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelWorldRootComponent.OuterSingleton, Z_Construct_UClass_UVoxelWorldRootComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVoxelWorldRootComponent.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelWorldRootComponent);
// ********** End Class UVoxelWorldRootComponent ***************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelWorldRootComponent_h__Script_Voxel_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UVoxelWorldRootComponent, UVoxelWorldRootComponent::StaticClass, TEXT("UVoxelWorldRootComponent"), &Z_Registration_Info_UClass_UVoxelWorldRootComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelWorldRootComponent), 4277428073U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelWorldRootComponent_h__Script_Voxel_849252583(TEXT("/Script/Voxel"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelWorldRootComponent_h__Script_Voxel_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelWorldRootComponent_h__Script_Voxel_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
