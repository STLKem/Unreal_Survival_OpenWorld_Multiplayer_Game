// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VoxelRender/MaterialCollections/VoxelCachedMaterialCollection.h"
#include "VoxelRender/VoxelMaterialIndices.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeVoxelCachedMaterialCollection() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_Voxel();
VOXEL_API UClass* Z_Construct_UClass_UVoxelCachedMaterialCollection();
VOXEL_API UClass* Z_Construct_UClass_UVoxelCachedMaterialCollection_NoRegister();
VOXEL_API UClass* Z_Construct_UClass_UVoxelMaterialCollectionBase();
VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelMaterialIndices();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UVoxelCachedMaterialCollection *******************************************
void UVoxelCachedMaterialCollection::StaticRegisterNativesUVoxelCachedMaterialCollection()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UVoxelCachedMaterialCollection;
UClass* UVoxelCachedMaterialCollection::GetPrivateStaticClass()
{
	using TClass = UVoxelCachedMaterialCollection;
	if (!Z_Registration_Info_UClass_UVoxelCachedMaterialCollection.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("VoxelCachedMaterialCollection"),
			Z_Registration_Info_UClass_UVoxelCachedMaterialCollection.InnerSingleton,
			StaticRegisterNativesUVoxelCachedMaterialCollection,
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
	return Z_Registration_Info_UClass_UVoxelCachedMaterialCollection.InnerSingleton;
}
UClass* Z_Construct_UClass_UVoxelCachedMaterialCollection_NoRegister()
{
	return UVoxelCachedMaterialCollection::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UVoxelCachedMaterialCollection_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "VoxelRender/MaterialCollections/VoxelCachedMaterialCollection.h" },
		{ "ModuleRelativePath", "Public/VoxelRender/MaterialCollections/VoxelCachedMaterialCollection.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedMaterials_MetaData[] = {
		{ "ModuleRelativePath", "Public/VoxelRender/MaterialCollections/VoxelCachedMaterialCollection.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CachedMaterials_ValueProp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CachedMaterials_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_CachedMaterials;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelCachedMaterialCollection>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVoxelCachedMaterialCollection_Statics::NewProp_CachedMaterials_ValueProp = { "CachedMaterials", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVoxelCachedMaterialCollection_Statics::NewProp_CachedMaterials_Key_KeyProp = { "CachedMaterials_Key", nullptr, (EPropertyFlags)0x0100000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVoxelMaterialIndices, METADATA_PARAMS(0, nullptr) }; // 893231656
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UVoxelCachedMaterialCollection_Statics::NewProp_CachedMaterials = { "CachedMaterials", nullptr, (EPropertyFlags)0x0144000000002000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelCachedMaterialCollection, CachedMaterials), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedMaterials_MetaData), NewProp_CachedMaterials_MetaData) }; // 893231656
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelCachedMaterialCollection_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelCachedMaterialCollection_Statics::NewProp_CachedMaterials_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelCachedMaterialCollection_Statics::NewProp_CachedMaterials_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelCachedMaterialCollection_Statics::NewProp_CachedMaterials,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelCachedMaterialCollection_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UVoxelCachedMaterialCollection_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UVoxelMaterialCollectionBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelCachedMaterialCollection_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelCachedMaterialCollection_Statics::ClassParams = {
	&UVoxelCachedMaterialCollection::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UVoxelCachedMaterialCollection_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelCachedMaterialCollection_Statics::PropPointers),
	0,
	0x001000A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelCachedMaterialCollection_Statics::Class_MetaDataParams), Z_Construct_UClass_UVoxelCachedMaterialCollection_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVoxelCachedMaterialCollection()
{
	if (!Z_Registration_Info_UClass_UVoxelCachedMaterialCollection.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelCachedMaterialCollection.OuterSingleton, Z_Construct_UClass_UVoxelCachedMaterialCollection_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVoxelCachedMaterialCollection.OuterSingleton;
}
UVoxelCachedMaterialCollection::UVoxelCachedMaterialCollection(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelCachedMaterialCollection);
UVoxelCachedMaterialCollection::~UVoxelCachedMaterialCollection() {}
// ********** End Class UVoxelCachedMaterialCollection *********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelRender_MaterialCollections_VoxelCachedMaterialCollection_h__Script_Voxel_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UVoxelCachedMaterialCollection, UVoxelCachedMaterialCollection::StaticClass, TEXT("UVoxelCachedMaterialCollection"), &Z_Registration_Info_UClass_UVoxelCachedMaterialCollection, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelCachedMaterialCollection), 1826663541U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelRender_MaterialCollections_VoxelCachedMaterialCollection_h__Script_Voxel_2379079928(TEXT("/Script/Voxel"),
	Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelRender_MaterialCollections_VoxelCachedMaterialCollection_h__Script_Voxel_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelRender_MaterialCollections_VoxelCachedMaterialCollection_h__Script_Voxel_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
