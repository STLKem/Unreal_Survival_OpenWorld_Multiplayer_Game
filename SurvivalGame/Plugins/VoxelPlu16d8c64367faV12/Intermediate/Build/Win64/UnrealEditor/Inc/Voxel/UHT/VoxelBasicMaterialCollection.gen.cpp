// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VoxelRender/MaterialCollections/VoxelBasicMaterialCollection.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeVoxelBasicMaterialCollection() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_Voxel();
VOXEL_API UClass* Z_Construct_UClass_UVoxelBasicMaterialCollection();
VOXEL_API UClass* Z_Construct_UClass_UVoxelBasicMaterialCollection_NoRegister();
VOXEL_API UClass* Z_Construct_UClass_UVoxelMaterialCollectionBase();
VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelBasicMaterialCollectionLayer();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FVoxelBasicMaterialCollectionLayer ********************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FVoxelBasicMaterialCollectionLayer;
class UScriptStruct* FVoxelBasicMaterialCollectionLayer::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FVoxelBasicMaterialCollectionLayer.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FVoxelBasicMaterialCollectionLayer.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVoxelBasicMaterialCollectionLayer, (UObject*)Z_Construct_UPackage__Script_Voxel(), TEXT("VoxelBasicMaterialCollectionLayer"));
	}
	return Z_Registration_Info_UScriptStruct_FVoxelBasicMaterialCollectionLayer.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FVoxelBasicMaterialCollectionLayer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/VoxelRender/MaterialCollections/VoxelBasicMaterialCollection.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LayerIndex_MetaData[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Public/VoxelRender/MaterialCollections/VoxelBasicMaterialCollection.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LayerMaterial_MetaData[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Public/VoxelRender/MaterialCollections/VoxelBasicMaterialCollection.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_LayerIndex;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LayerMaterial;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVoxelBasicMaterialCollectionLayer>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FVoxelBasicMaterialCollectionLayer_Statics::NewProp_LayerIndex = { "LayerIndex", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVoxelBasicMaterialCollectionLayer, LayerIndex), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LayerIndex_MetaData), NewProp_LayerIndex_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FVoxelBasicMaterialCollectionLayer_Statics::NewProp_LayerMaterial = { "LayerMaterial", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVoxelBasicMaterialCollectionLayer, LayerMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LayerMaterial_MetaData), NewProp_LayerMaterial_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVoxelBasicMaterialCollectionLayer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelBasicMaterialCollectionLayer_Statics::NewProp_LayerIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelBasicMaterialCollectionLayer_Statics::NewProp_LayerMaterial,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelBasicMaterialCollectionLayer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVoxelBasicMaterialCollectionLayer_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
	nullptr,
	&NewStructOps,
	"VoxelBasicMaterialCollectionLayer",
	Z_Construct_UScriptStruct_FVoxelBasicMaterialCollectionLayer_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelBasicMaterialCollectionLayer_Statics::PropPointers),
	sizeof(FVoxelBasicMaterialCollectionLayer),
	alignof(FVoxelBasicMaterialCollectionLayer),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelBasicMaterialCollectionLayer_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVoxelBasicMaterialCollectionLayer_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FVoxelBasicMaterialCollectionLayer()
{
	if (!Z_Registration_Info_UScriptStruct_FVoxelBasicMaterialCollectionLayer.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FVoxelBasicMaterialCollectionLayer.InnerSingleton, Z_Construct_UScriptStruct_FVoxelBasicMaterialCollectionLayer_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FVoxelBasicMaterialCollectionLayer.InnerSingleton;
}
// ********** End ScriptStruct FVoxelBasicMaterialCollectionLayer **********************************

// ********** Begin Class UVoxelBasicMaterialCollection ********************************************
void UVoxelBasicMaterialCollection::StaticRegisterNativesUVoxelBasicMaterialCollection()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UVoxelBasicMaterialCollection;
UClass* UVoxelBasicMaterialCollection::GetPrivateStaticClass()
{
	using TClass = UVoxelBasicMaterialCollection;
	if (!Z_Registration_Info_UClass_UVoxelBasicMaterialCollection.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("VoxelBasicMaterialCollection"),
			Z_Registration_Info_UClass_UVoxelBasicMaterialCollection.InnerSingleton,
			StaticRegisterNativesUVoxelBasicMaterialCollection,
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
	return Z_Registration_Info_UClass_UVoxelBasicMaterialCollection.InnerSingleton;
}
UClass* Z_Construct_UClass_UVoxelBasicMaterialCollection_NoRegister()
{
	return UVoxelBasicMaterialCollection::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UVoxelBasicMaterialCollection_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Material collection that does not generate any blending and is just a list of materials\n" },
#endif
		{ "IncludePath", "VoxelRender/MaterialCollections/VoxelBasicMaterialCollection.h" },
		{ "ModuleRelativePath", "Public/VoxelRender/MaterialCollections/VoxelBasicMaterialCollection.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Material collection that does not generate any blending and is just a list of materials" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Layers_MetaData[] = {
		{ "Category", "Layers" },
		{ "ModuleRelativePath", "Public/VoxelRender/MaterialCollections/VoxelBasicMaterialCollection.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Layers_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Layers;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelBasicMaterialCollection>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVoxelBasicMaterialCollection_Statics::NewProp_Layers_Inner = { "Layers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVoxelBasicMaterialCollectionLayer, METADATA_PARAMS(0, nullptr) }; // 943575575
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UVoxelBasicMaterialCollection_Statics::NewProp_Layers = { "Layers", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelBasicMaterialCollection, Layers), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Layers_MetaData), NewProp_Layers_MetaData) }; // 943575575
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelBasicMaterialCollection_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelBasicMaterialCollection_Statics::NewProp_Layers_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelBasicMaterialCollection_Statics::NewProp_Layers,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelBasicMaterialCollection_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UVoxelBasicMaterialCollection_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UVoxelMaterialCollectionBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelBasicMaterialCollection_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelBasicMaterialCollection_Statics::ClassParams = {
	&UVoxelBasicMaterialCollection::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UVoxelBasicMaterialCollection_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelBasicMaterialCollection_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelBasicMaterialCollection_Statics::Class_MetaDataParams), Z_Construct_UClass_UVoxelBasicMaterialCollection_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVoxelBasicMaterialCollection()
{
	if (!Z_Registration_Info_UClass_UVoxelBasicMaterialCollection.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelBasicMaterialCollection.OuterSingleton, Z_Construct_UClass_UVoxelBasicMaterialCollection_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVoxelBasicMaterialCollection.OuterSingleton;
}
UVoxelBasicMaterialCollection::UVoxelBasicMaterialCollection(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelBasicMaterialCollection);
UVoxelBasicMaterialCollection::~UVoxelBasicMaterialCollection() {}
// ********** End Class UVoxelBasicMaterialCollection **********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelRender_MaterialCollections_VoxelBasicMaterialCollection_h__Script_Voxel_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FVoxelBasicMaterialCollectionLayer::StaticStruct, Z_Construct_UScriptStruct_FVoxelBasicMaterialCollectionLayer_Statics::NewStructOps, TEXT("VoxelBasicMaterialCollectionLayer"), &Z_Registration_Info_UScriptStruct_FVoxelBasicMaterialCollectionLayer, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVoxelBasicMaterialCollectionLayer), 943575575U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UVoxelBasicMaterialCollection, UVoxelBasicMaterialCollection::StaticClass, TEXT("UVoxelBasicMaterialCollection"), &Z_Registration_Info_UClass_UVoxelBasicMaterialCollection, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelBasicMaterialCollection), 3158505945U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelRender_MaterialCollections_VoxelBasicMaterialCollection_h__Script_Voxel_3109208075(TEXT("/Script/Voxel"),
	Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelRender_MaterialCollections_VoxelBasicMaterialCollection_h__Script_Voxel_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelRender_MaterialCollections_VoxelBasicMaterialCollection_h__Script_Voxel_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelRender_MaterialCollections_VoxelBasicMaterialCollection_h__Script_Voxel_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelRender_MaterialCollections_VoxelBasicMaterialCollection_h__Script_Voxel_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
