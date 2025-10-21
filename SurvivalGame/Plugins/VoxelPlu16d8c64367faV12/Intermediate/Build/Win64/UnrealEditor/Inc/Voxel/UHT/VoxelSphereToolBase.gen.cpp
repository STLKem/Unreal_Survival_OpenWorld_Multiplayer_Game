// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VoxelTools/Tools/VoxelSphereToolBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeVoxelSphereToolBase() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
UPackage* Z_Construct_UPackage__Script_Voxel();
VOXEL_API UClass* Z_Construct_UClass_UVoxelSphereToolBase();
VOXEL_API UClass* Z_Construct_UClass_UVoxelSphereToolBase_NoRegister();
VOXEL_API UClass* Z_Construct_UClass_UVoxelToolWithAlignment();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UVoxelSphereToolBase *****************************************************
void UVoxelSphereToolBase::StaticRegisterNativesUVoxelSphereToolBase()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UVoxelSphereToolBase;
UClass* UVoxelSphereToolBase::GetPrivateStaticClass()
{
	using TClass = UVoxelSphereToolBase;
	if (!Z_Registration_Info_UClass_UVoxelSphereToolBase.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("VoxelSphereToolBase"),
			Z_Registration_Info_UClass_UVoxelSphereToolBase.InnerSingleton,
			StaticRegisterNativesUVoxelSphereToolBase,
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
	return Z_Registration_Info_UClass_UVoxelSphereToolBase.InnerSingleton;
}
UClass* Z_Construct_UClass_UVoxelSphereToolBase_NoRegister()
{
	return UVoxelSphereToolBase::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UVoxelSphereToolBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "VoxelTools/Tools/VoxelSphereToolBase.h" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelSphereToolBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ToolMaterial_MetaData[] = {
		{ "Category", "Tool Preview Settings" },
		{ "HideInPanel", "" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelSphereToolBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SphereMesh_MetaData[] = {
		{ "Category", "Tool Preview Settings" },
		{ "HideInPanel", "" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelSphereToolBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ToolMaterial;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SphereMesh;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelSphereToolBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVoxelSphereToolBase_Statics::NewProp_ToolMaterial = { "ToolMaterial", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelSphereToolBase, ToolMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ToolMaterial_MetaData), NewProp_ToolMaterial_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVoxelSphereToolBase_Statics::NewProp_SphereMesh = { "SphereMesh", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelSphereToolBase, SphereMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SphereMesh_MetaData), NewProp_SphereMesh_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelSphereToolBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelSphereToolBase_Statics::NewProp_ToolMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelSphereToolBase_Statics::NewProp_SphereMesh,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelSphereToolBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UVoxelSphereToolBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UVoxelToolWithAlignment,
	(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelSphereToolBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelSphereToolBase_Statics::ClassParams = {
	&UVoxelSphereToolBase::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UVoxelSphereToolBase_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelSphereToolBase_Statics::PropPointers),
	0,
	0x001000A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelSphereToolBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UVoxelSphereToolBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVoxelSphereToolBase()
{
	if (!Z_Registration_Info_UClass_UVoxelSphereToolBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelSphereToolBase.OuterSingleton, Z_Construct_UClass_UVoxelSphereToolBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVoxelSphereToolBase.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelSphereToolBase);
UVoxelSphereToolBase::~UVoxelSphereToolBase() {}
// ********** End Class UVoxelSphereToolBase *******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelTools_Tools_VoxelSphereToolBase_h__Script_Voxel_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UVoxelSphereToolBase, UVoxelSphereToolBase::StaticClass, TEXT("UVoxelSphereToolBase"), &Z_Registration_Info_UClass_UVoxelSphereToolBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelSphereToolBase), 837146076U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelTools_Tools_VoxelSphereToolBase_h__Script_Voxel_3108196251(TEXT("/Script/Voxel"),
	Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelTools_Tools_VoxelSphereToolBase_h__Script_Voxel_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelTools_Tools_VoxelSphereToolBase_h__Script_Voxel_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
