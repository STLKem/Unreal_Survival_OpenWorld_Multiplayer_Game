// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VoxelSpawners/VoxelHierarchicalInstancedStaticMeshComponent.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeVoxelHierarchicalInstancedStaticMeshComponent() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_Voxel();
VOXEL_API UClass* Z_Construct_UClass_UVoxelHierarchicalInstancedStaticMeshComponent();
VOXEL_API UClass* Z_Construct_UClass_UVoxelHierarchicalInstancedStaticMeshComponent_NoRegister();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UVoxelHierarchicalInstancedStaticMeshComponent ***************************
void UVoxelHierarchicalInstancedStaticMeshComponent::StaticRegisterNativesUVoxelHierarchicalInstancedStaticMeshComponent()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UVoxelHierarchicalInstancedStaticMeshComponent;
UClass* UVoxelHierarchicalInstancedStaticMeshComponent::GetPrivateStaticClass()
{
	using TClass = UVoxelHierarchicalInstancedStaticMeshComponent;
	if (!Z_Registration_Info_UClass_UVoxelHierarchicalInstancedStaticMeshComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("VoxelHierarchicalInstancedStaticMeshComponent"),
			Z_Registration_Info_UClass_UVoxelHierarchicalInstancedStaticMeshComponent.InnerSingleton,
			StaticRegisterNativesUVoxelHierarchicalInstancedStaticMeshComponent,
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
	return Z_Registration_Info_UClass_UVoxelHierarchicalInstancedStaticMeshComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_UVoxelHierarchicalInstancedStaticMeshComponent_NoRegister()
{
	return UVoxelHierarchicalInstancedStaticMeshComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UVoxelHierarchicalInstancedStaticMeshComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Need to prefix names with Voxel to avoid collisions with normal HISM\n" },
#endif
		{ "HideCategories", "Object Activation Components|Activation Trigger" },
		{ "IncludePath", "VoxelSpawners/VoxelHierarchicalInstancedStaticMeshComponent.h" },
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelHierarchicalInstancedStaticMeshComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Need to prefix names with Voxel to avoid collisions with normal HISM" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Voxel_BuildDelay_MetaData[] = {
		{ "Category", "Voxel" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// How long to wait for new instances before triggering a new cull tree/render update\n" },
#endif
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelHierarchicalInstancedStaticMeshComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "How long to wait for new instances before triggering a new cull tree/render update" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Voxel_DebugMaterial_MetaData[] = {
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelHierarchicalInstancedStaticMeshComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Voxel_BuildDelay;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Voxel_DebugMaterial;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelHierarchicalInstancedStaticMeshComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVoxelHierarchicalInstancedStaticMeshComponent_Statics::NewProp_Voxel_BuildDelay = { "Voxel_BuildDelay", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelHierarchicalInstancedStaticMeshComponent, Voxel_BuildDelay), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Voxel_BuildDelay_MetaData), NewProp_Voxel_BuildDelay_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVoxelHierarchicalInstancedStaticMeshComponent_Statics::NewProp_Voxel_DebugMaterial = { "Voxel_DebugMaterial", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelHierarchicalInstancedStaticMeshComponent, Voxel_DebugMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Voxel_DebugMaterial_MetaData), NewProp_Voxel_DebugMaterial_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelHierarchicalInstancedStaticMeshComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelHierarchicalInstancedStaticMeshComponent_Statics::NewProp_Voxel_BuildDelay,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelHierarchicalInstancedStaticMeshComponent_Statics::NewProp_Voxel_DebugMaterial,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelHierarchicalInstancedStaticMeshComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UVoxelHierarchicalInstancedStaticMeshComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelHierarchicalInstancedStaticMeshComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelHierarchicalInstancedStaticMeshComponent_Statics::ClassParams = {
	&UVoxelHierarchicalInstancedStaticMeshComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UVoxelHierarchicalInstancedStaticMeshComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelHierarchicalInstancedStaticMeshComponent_Statics::PropPointers),
	0,
	0x00B010A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelHierarchicalInstancedStaticMeshComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UVoxelHierarchicalInstancedStaticMeshComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVoxelHierarchicalInstancedStaticMeshComponent()
{
	if (!Z_Registration_Info_UClass_UVoxelHierarchicalInstancedStaticMeshComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelHierarchicalInstancedStaticMeshComponent.OuterSingleton, Z_Construct_UClass_UVoxelHierarchicalInstancedStaticMeshComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVoxelHierarchicalInstancedStaticMeshComponent.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelHierarchicalInstancedStaticMeshComponent);
// ********** End Class UVoxelHierarchicalInstancedStaticMeshComponent *****************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelSpawners_VoxelHierarchicalInstancedStaticMeshComponent_h__Script_Voxel_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UVoxelHierarchicalInstancedStaticMeshComponent, UVoxelHierarchicalInstancedStaticMeshComponent::StaticClass, TEXT("UVoxelHierarchicalInstancedStaticMeshComponent"), &Z_Registration_Info_UClass_UVoxelHierarchicalInstancedStaticMeshComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelHierarchicalInstancedStaticMeshComponent), 3157112355U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelSpawners_VoxelHierarchicalInstancedStaticMeshComponent_h__Script_Voxel_1004715152(TEXT("/Script/Voxel"),
	Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelSpawners_VoxelHierarchicalInstancedStaticMeshComponent_h__Script_Voxel_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelSpawners_VoxelHierarchicalInstancedStaticMeshComponent_h__Script_Voxel_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
