// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Voxel/Public/VoxelStaticWorld.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeVoxelStaticWorld() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_Voxel();
VOXEL_API UClass* Z_Construct_UClass_AVoxelStaticWorld();
VOXEL_API UClass* Z_Construct_UClass_AVoxelStaticWorld_NoRegister();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AVoxelStaticWorld ********************************************************
void AVoxelStaticWorld::StaticRegisterNativesAVoxelStaticWorld()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AVoxelStaticWorld;
UClass* AVoxelStaticWorld::GetPrivateStaticClass()
{
	using TClass = AVoxelStaticWorld;
	if (!Z_Registration_Info_UClass_AVoxelStaticWorld.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("VoxelStaticWorld"),
			Z_Registration_Info_UClass_AVoxelStaticWorld.InnerSingleton,
			StaticRegisterNativesAVoxelStaticWorld,
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
	return Z_Registration_Info_UClass_AVoxelStaticWorld.InnerSingleton;
}
UClass* Z_Construct_UClass_AVoxelStaticWorld_NoRegister()
{
	return AVoxelStaticWorld::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AVoxelStaticWorld_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "VoxelStaticWorld.h" },
		{ "ModuleRelativePath", "Public/VoxelStaticWorld.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BaseMesh_MetaData[] = {
		{ "Category", "Voxel" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/VoxelStaticWorld.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Meshes_MetaData[] = {
		{ "Category", "Voxel" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/VoxelStaticWorld.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BaseMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Meshes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Meshes;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AVoxelStaticWorld>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVoxelStaticWorld_Statics::NewProp_BaseMesh = { "BaseMesh", nullptr, (EPropertyFlags)0x01140000000a000d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVoxelStaticWorld, BaseMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BaseMesh_MetaData), NewProp_BaseMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVoxelStaticWorld_Statics::NewProp_Meshes_Inner = { "Meshes", nullptr, (EPropertyFlags)0x01040000000a0008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AVoxelStaticWorld_Statics::NewProp_Meshes = { "Meshes", nullptr, (EPropertyFlags)0x011400800002000d, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVoxelStaticWorld, Meshes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Meshes_MetaData), NewProp_Meshes_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AVoxelStaticWorld_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelStaticWorld_Statics::NewProp_BaseMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelStaticWorld_Statics::NewProp_Meshes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelStaticWorld_Statics::NewProp_Meshes,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AVoxelStaticWorld_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AVoxelStaticWorld_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AVoxelStaticWorld_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AVoxelStaticWorld_Statics::ClassParams = {
	&AVoxelStaticWorld::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AVoxelStaticWorld_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AVoxelStaticWorld_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AVoxelStaticWorld_Statics::Class_MetaDataParams), Z_Construct_UClass_AVoxelStaticWorld_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AVoxelStaticWorld()
{
	if (!Z_Registration_Info_UClass_AVoxelStaticWorld.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AVoxelStaticWorld.OuterSingleton, Z_Construct_UClass_AVoxelStaticWorld_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AVoxelStaticWorld.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AVoxelStaticWorld);
AVoxelStaticWorld::~AVoxelStaticWorld() {}
// ********** End Class AVoxelStaticWorld **********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelStaticWorld_h__Script_Voxel_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AVoxelStaticWorld, AVoxelStaticWorld::StaticClass, TEXT("AVoxelStaticWorld"), &Z_Registration_Info_UClass_AVoxelStaticWorld, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AVoxelStaticWorld), 593770900U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelStaticWorld_h__Script_Voxel_1999501666(TEXT("/Script/Voxel"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelStaticWorld_h__Script_Voxel_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelStaticWorld_h__Script_Voxel_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
