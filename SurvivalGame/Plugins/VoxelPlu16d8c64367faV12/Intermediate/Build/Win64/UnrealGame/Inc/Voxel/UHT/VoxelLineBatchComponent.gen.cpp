// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Voxel/Public/VoxelDebug/VoxelLineBatchComponent.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeVoxelLineBatchComponent() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent();
UPackage* Z_Construct_UPackage__Script_Voxel();
VOXEL_API UClass* Z_Construct_UClass_UVoxelLineBatchComponent();
VOXEL_API UClass* Z_Construct_UClass_UVoxelLineBatchComponent_NoRegister();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UVoxelLineBatchComponent *************************************************
void UVoxelLineBatchComponent::StaticRegisterNativesUVoxelLineBatchComponent()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UVoxelLineBatchComponent;
UClass* UVoxelLineBatchComponent::GetPrivateStaticClass()
{
	using TClass = UVoxelLineBatchComponent;
	if (!Z_Registration_Info_UClass_UVoxelLineBatchComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("VoxelLineBatchComponent"),
			Z_Registration_Info_UClass_UVoxelLineBatchComponent.InnerSingleton,
			StaticRegisterNativesUVoxelLineBatchComponent,
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
	return Z_Registration_Info_UClass_UVoxelLineBatchComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_UVoxelLineBatchComponent_NoRegister()
{
	return UVoxelLineBatchComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UVoxelLineBatchComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Mobility VirtualTexture Trigger" },
		{ "IncludePath", "VoxelDebug/VoxelLineBatchComponent.h" },
		{ "ModuleRelativePath", "Public/VoxelDebug/VoxelLineBatchComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultLifeTime_MetaData[] = {
		{ "Category", "Voxel" },
		{ "Comment", "// Default time that lines/points will draw for\n" },
		{ "ModuleRelativePath", "Public/VoxelDebug/VoxelLineBatchComponent.h" },
		{ "ToolTip", "Default time that lines/points will draw for" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCalculateAccurateBounds_MetaData[] = {
		{ "Category", "Voxel" },
		{ "Comment", "// Whether to calculate a tight accurate bounds (encompassing all points), or use a giant bounds that is fast to compute\n" },
		{ "ModuleRelativePath", "Public/VoxelDebug/VoxelLineBatchComponent.h" },
		{ "ToolTip", "Whether to calculate a tight accurate bounds (encompassing all points), or use a giant bounds that is fast to compute" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DefaultLifeTime;
	static void NewProp_bCalculateAccurateBounds_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCalculateAccurateBounds;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelLineBatchComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVoxelLineBatchComponent_Statics::NewProp_DefaultLifeTime = { "DefaultLifeTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelLineBatchComponent, DefaultLifeTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultLifeTime_MetaData), NewProp_DefaultLifeTime_MetaData) };
void Z_Construct_UClass_UVoxelLineBatchComponent_Statics::NewProp_bCalculateAccurateBounds_SetBit(void* Obj)
{
	((UVoxelLineBatchComponent*)Obj)->bCalculateAccurateBounds = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVoxelLineBatchComponent_Statics::NewProp_bCalculateAccurateBounds = { "bCalculateAccurateBounds", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UVoxelLineBatchComponent), &Z_Construct_UClass_UVoxelLineBatchComponent_Statics::NewProp_bCalculateAccurateBounds_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCalculateAccurateBounds_MetaData), NewProp_bCalculateAccurateBounds_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelLineBatchComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelLineBatchComponent_Statics::NewProp_DefaultLifeTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelLineBatchComponent_Statics::NewProp_bCalculateAccurateBounds,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelLineBatchComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UVoxelLineBatchComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPrimitiveComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelLineBatchComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelLineBatchComponent_Statics::ClassParams = {
	&UVoxelLineBatchComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UVoxelLineBatchComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelLineBatchComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelLineBatchComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UVoxelLineBatchComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVoxelLineBatchComponent()
{
	if (!Z_Registration_Info_UClass_UVoxelLineBatchComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelLineBatchComponent.OuterSingleton, Z_Construct_UClass_UVoxelLineBatchComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVoxelLineBatchComponent.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelLineBatchComponent);
UVoxelLineBatchComponent::~UVoxelLineBatchComponent() {}
// ********** End Class UVoxelLineBatchComponent ***************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelDebug_VoxelLineBatchComponent_h__Script_Voxel_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UVoxelLineBatchComponent, UVoxelLineBatchComponent::StaticClass, TEXT("UVoxelLineBatchComponent"), &Z_Registration_Info_UClass_UVoxelLineBatchComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelLineBatchComponent), 1442584264U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelDebug_VoxelLineBatchComponent_h__Script_Voxel_829988794(TEXT("/Script/Voxel"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelDebug_VoxelLineBatchComponent_h__Script_Voxel_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelDebug_VoxelLineBatchComponent_h__Script_Voxel_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
