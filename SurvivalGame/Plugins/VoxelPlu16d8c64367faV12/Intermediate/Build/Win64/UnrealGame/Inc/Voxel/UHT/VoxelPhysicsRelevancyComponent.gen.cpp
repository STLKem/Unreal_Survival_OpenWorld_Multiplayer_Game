// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Voxel/Public/VoxelComponents/VoxelPhysicsRelevancyComponent.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeVoxelPhysicsRelevancyComponent() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
UPackage* Z_Construct_UPackage__Script_Voxel();
VOXEL_API UClass* Z_Construct_UClass_UVoxelPhysicsRelevancyComponent();
VOXEL_API UClass* Z_Construct_UClass_UVoxelPhysicsRelevancyComponent_NoRegister();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UVoxelPhysicsRelevancyComponent ******************************************
void UVoxelPhysicsRelevancyComponent::StaticRegisterNativesUVoxelPhysicsRelevancyComponent()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UVoxelPhysicsRelevancyComponent;
UClass* UVoxelPhysicsRelevancyComponent::GetPrivateStaticClass()
{
	using TClass = UVoxelPhysicsRelevancyComponent;
	if (!Z_Registration_Info_UClass_UVoxelPhysicsRelevancyComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("VoxelPhysicsRelevancyComponent"),
			Z_Registration_Info_UClass_UVoxelPhysicsRelevancyComponent.InnerSingleton,
			StaticRegisterNativesUVoxelPhysicsRelevancyComponent,
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
	return Z_Registration_Info_UClass_UVoxelPhysicsRelevancyComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_UVoxelPhysicsRelevancyComponent_NoRegister()
{
	return UVoxelPhysicsRelevancyComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UVoxelPhysicsRelevancyComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Voxel" },
		{ "Comment", "/**\n * Disable physics on actors that are out of the Voxel World collision range\n */" },
		{ "IncludePath", "VoxelComponents/VoxelPhysicsRelevancyComponent.h" },
		{ "Keywords", "voxel auto disable component" },
		{ "ModuleRelativePath", "Public/VoxelComponents/VoxelPhysicsRelevancyComponent.h" },
		{ "ToolTip", "Disable physics on actors that are out of the Voxel World collision range" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxVoxelChunksLODForPhysics_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ClampMax", "24" },
		{ "ClampMin", "0" },
		{ "Comment", "// Inclusive\n" },
		{ "DisplayName", "Max LOD For Physics" },
		{ "ModuleRelativePath", "Public/VoxelComponents/VoxelPhysicsRelevancyComponent.h" },
		{ "ToolTip", "Inclusive" },
		{ "UIMax", "24" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TimeToWaitBeforeActivating_MetaData[] = {
		{ "Category", "Voxel" },
		{ "Comment", "// Delay to allow the voxel chunks collisions to be updated. In seconds\n" },
		{ "ModuleRelativePath", "Public/VoxelComponents/VoxelPhysicsRelevancyComponent.h" },
		{ "ToolTip", "Delay to allow the voxel chunks collisions to be updated. In seconds" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TickInterval_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelComponents/VoxelPhysicsRelevancyComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_MaxVoxelChunksLODForPhysics;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeToWaitBeforeActivating;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TickInterval;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelPhysicsRelevancyComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UVoxelPhysicsRelevancyComponent_Statics::NewProp_MaxVoxelChunksLODForPhysics = { "MaxVoxelChunksLODForPhysics", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelPhysicsRelevancyComponent, MaxVoxelChunksLODForPhysics), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxVoxelChunksLODForPhysics_MetaData), NewProp_MaxVoxelChunksLODForPhysics_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVoxelPhysicsRelevancyComponent_Statics::NewProp_TimeToWaitBeforeActivating = { "TimeToWaitBeforeActivating", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelPhysicsRelevancyComponent, TimeToWaitBeforeActivating), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TimeToWaitBeforeActivating_MetaData), NewProp_TimeToWaitBeforeActivating_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVoxelPhysicsRelevancyComponent_Statics::NewProp_TickInterval = { "TickInterval", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelPhysicsRelevancyComponent, TickInterval), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TickInterval_MetaData), NewProp_TickInterval_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelPhysicsRelevancyComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelPhysicsRelevancyComponent_Statics::NewProp_MaxVoxelChunksLODForPhysics,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelPhysicsRelevancyComponent_Statics::NewProp_TimeToWaitBeforeActivating,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelPhysicsRelevancyComponent_Statics::NewProp_TickInterval,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelPhysicsRelevancyComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UVoxelPhysicsRelevancyComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelPhysicsRelevancyComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelPhysicsRelevancyComponent_Statics::ClassParams = {
	&UVoxelPhysicsRelevancyComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UVoxelPhysicsRelevancyComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelPhysicsRelevancyComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelPhysicsRelevancyComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UVoxelPhysicsRelevancyComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVoxelPhysicsRelevancyComponent()
{
	if (!Z_Registration_Info_UClass_UVoxelPhysicsRelevancyComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelPhysicsRelevancyComponent.OuterSingleton, Z_Construct_UClass_UVoxelPhysicsRelevancyComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVoxelPhysicsRelevancyComponent.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelPhysicsRelevancyComponent);
UVoxelPhysicsRelevancyComponent::~UVoxelPhysicsRelevancyComponent() {}
// ********** End Class UVoxelPhysicsRelevancyComponent ********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelComponents_VoxelPhysicsRelevancyComponent_h__Script_Voxel_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UVoxelPhysicsRelevancyComponent, UVoxelPhysicsRelevancyComponent::StaticClass, TEXT("UVoxelPhysicsRelevancyComponent"), &Z_Registration_Info_UClass_UVoxelPhysicsRelevancyComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelPhysicsRelevancyComponent), 2833121614U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelComponents_VoxelPhysicsRelevancyComponent_h__Script_Voxel_3479402787(TEXT("/Script/Voxel"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelComponents_VoxelPhysicsRelevancyComponent_h__Script_Voxel_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelComponents_VoxelPhysicsRelevancyComponent_h__Script_Voxel_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
