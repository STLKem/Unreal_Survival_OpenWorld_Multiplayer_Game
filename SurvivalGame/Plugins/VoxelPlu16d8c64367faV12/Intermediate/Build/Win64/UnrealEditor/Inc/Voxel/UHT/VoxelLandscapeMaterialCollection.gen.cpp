// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VoxelRender/MaterialCollections/VoxelLandscapeMaterialCollection.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeVoxelLandscapeMaterialCollection() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceConstant_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_Voxel();
VOXEL_API UClass* Z_Construct_UClass_UVoxelLandscapeMaterialCollection();
VOXEL_API UClass* Z_Construct_UClass_UVoxelLandscapeMaterialCollection_NoRegister();
VOXEL_API UClass* Z_Construct_UClass_UVoxelMaterialCollectionBase();
VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelLandscapeMaterialCollectionLayer();
VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelLandscapeMaterialCollectionPermutation();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FVoxelLandscapeMaterialCollectionLayer ****************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FVoxelLandscapeMaterialCollectionLayer;
class UScriptStruct* FVoxelLandscapeMaterialCollectionLayer::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FVoxelLandscapeMaterialCollectionLayer.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FVoxelLandscapeMaterialCollectionLayer.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVoxelLandscapeMaterialCollectionLayer, (UObject*)Z_Construct_UPackage__Script_Voxel(), TEXT("VoxelLandscapeMaterialCollectionLayer"));
	}
	return Z_Registration_Info_UScriptStruct_FVoxelLandscapeMaterialCollectionLayer.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FVoxelLandscapeMaterialCollectionLayer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/VoxelRender/MaterialCollections/VoxelLandscapeMaterialCollection.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Public/VoxelRender/MaterialCollections/VoxelLandscapeMaterialCollection.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Index_MetaData[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Public/VoxelRender/MaterialCollections/VoxelLandscapeMaterialCollection.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Index;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVoxelLandscapeMaterialCollectionLayer>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FVoxelLandscapeMaterialCollectionLayer_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVoxelLandscapeMaterialCollectionLayer, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FVoxelLandscapeMaterialCollectionLayer_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVoxelLandscapeMaterialCollectionLayer, Index), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Index_MetaData), NewProp_Index_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVoxelLandscapeMaterialCollectionLayer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelLandscapeMaterialCollectionLayer_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelLandscapeMaterialCollectionLayer_Statics::NewProp_Index,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelLandscapeMaterialCollectionLayer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVoxelLandscapeMaterialCollectionLayer_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
	nullptr,
	&NewStructOps,
	"VoxelLandscapeMaterialCollectionLayer",
	Z_Construct_UScriptStruct_FVoxelLandscapeMaterialCollectionLayer_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelLandscapeMaterialCollectionLayer_Statics::PropPointers),
	sizeof(FVoxelLandscapeMaterialCollectionLayer),
	alignof(FVoxelLandscapeMaterialCollectionLayer),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelLandscapeMaterialCollectionLayer_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVoxelLandscapeMaterialCollectionLayer_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FVoxelLandscapeMaterialCollectionLayer()
{
	if (!Z_Registration_Info_UScriptStruct_FVoxelLandscapeMaterialCollectionLayer.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FVoxelLandscapeMaterialCollectionLayer.InnerSingleton, Z_Construct_UScriptStruct_FVoxelLandscapeMaterialCollectionLayer_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FVoxelLandscapeMaterialCollectionLayer.InnerSingleton;
}
// ********** End ScriptStruct FVoxelLandscapeMaterialCollectionLayer ******************************

// ********** Begin ScriptStruct FVoxelLandscapeMaterialCollectionPermutation **********************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FVoxelLandscapeMaterialCollectionPermutation;
class UScriptStruct* FVoxelLandscapeMaterialCollectionPermutation::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FVoxelLandscapeMaterialCollectionPermutation.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FVoxelLandscapeMaterialCollectionPermutation.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVoxelLandscapeMaterialCollectionPermutation, (UObject*)Z_Construct_UPackage__Script_Voxel(), TEXT("VoxelLandscapeMaterialCollectionPermutation"));
	}
	return Z_Registration_Info_UScriptStruct_FVoxelLandscapeMaterialCollectionPermutation.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FVoxelLandscapeMaterialCollectionPermutation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/VoxelRender/MaterialCollections/VoxelLandscapeMaterialCollection.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Names_MetaData[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Public/VoxelRender/MaterialCollections/VoxelLandscapeMaterialCollection.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Names;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVoxelLandscapeMaterialCollectionPermutation>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FVoxelLandscapeMaterialCollectionPermutation_Statics::NewProp_Names = { "Names", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, CPP_ARRAY_DIM(Names, FVoxelLandscapeMaterialCollectionPermutation), STRUCT_OFFSET(FVoxelLandscapeMaterialCollectionPermutation, Names), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Names_MetaData), NewProp_Names_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVoxelLandscapeMaterialCollectionPermutation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelLandscapeMaterialCollectionPermutation_Statics::NewProp_Names,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelLandscapeMaterialCollectionPermutation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVoxelLandscapeMaterialCollectionPermutation_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
	nullptr,
	&NewStructOps,
	"VoxelLandscapeMaterialCollectionPermutation",
	Z_Construct_UScriptStruct_FVoxelLandscapeMaterialCollectionPermutation_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelLandscapeMaterialCollectionPermutation_Statics::PropPointers),
	sizeof(FVoxelLandscapeMaterialCollectionPermutation),
	alignof(FVoxelLandscapeMaterialCollectionPermutation),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelLandscapeMaterialCollectionPermutation_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVoxelLandscapeMaterialCollectionPermutation_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FVoxelLandscapeMaterialCollectionPermutation()
{
	if (!Z_Registration_Info_UScriptStruct_FVoxelLandscapeMaterialCollectionPermutation.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FVoxelLandscapeMaterialCollectionPermutation.InnerSingleton, Z_Construct_UScriptStruct_FVoxelLandscapeMaterialCollectionPermutation_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FVoxelLandscapeMaterialCollectionPermutation.InnerSingleton;
}
// ********** End ScriptStruct FVoxelLandscapeMaterialCollectionPermutation ************************

// ********** Begin Class UVoxelLandscapeMaterialCollection ****************************************
void UVoxelLandscapeMaterialCollection::StaticRegisterNativesUVoxelLandscapeMaterialCollection()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UVoxelLandscapeMaterialCollection;
UClass* UVoxelLandscapeMaterialCollection::GetPrivateStaticClass()
{
	using TClass = UVoxelLandscapeMaterialCollection;
	if (!Z_Registration_Info_UClass_UVoxelLandscapeMaterialCollection.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("VoxelLandscapeMaterialCollection"),
			Z_Registration_Info_UClass_UVoxelLandscapeMaterialCollection.InnerSingleton,
			StaticRegisterNativesUVoxelLandscapeMaterialCollection,
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
	return Z_Registration_Info_UClass_UVoxelLandscapeMaterialCollection.InnerSingleton;
}
UClass* Z_Construct_UClass_UVoxelLandscapeMaterialCollection_NoRegister()
{
	return UVoxelLandscapeMaterialCollection::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UVoxelLandscapeMaterialCollection_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Material collection that does not generate any blending and is just a list of materials\n" },
#endif
		{ "IncludePath", "VoxelRender/MaterialCollections/VoxelLandscapeMaterialCollection.h" },
		{ "ModuleRelativePath", "Public/VoxelRender/MaterialCollections/VoxelLandscapeMaterialCollection.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Material collection that does not generate any blending and is just a list of materials" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxMaterialsToBlendAtOnce_MetaData[] = {
		{ "Category", "Config" },
		{ "ClampMax", "6" },
		{ "ClampMin", "1" },
		{ "ModuleRelativePath", "Public/VoxelRender/MaterialCollections/VoxelLandscapeMaterialCollection.h" },
		{ "UIMax", "6" },
		{ "UIMin", "1" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Material_MetaData[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Public/VoxelRender/MaterialCollections/VoxelLandscapeMaterialCollection.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Layers_MetaData[] = {
		{ "Category", "Layers" },
		{ "ModuleRelativePath", "Public/VoxelRender/MaterialCollections/VoxelLandscapeMaterialCollection.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaterialCache_MetaData[] = {
		{ "Category", "Cache" },
		{ "ModuleRelativePath", "Public/VoxelRender/MaterialCollections/VoxelLandscapeMaterialCollection.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IndicesToLayers_MetaData[] = {
		{ "ModuleRelativePath", "Public/VoxelRender/MaterialCollections/VoxelLandscapeMaterialCollection.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxMaterialsToBlendAtOnce;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Material;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Layers_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Layers;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MaterialCache_ValueProp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MaterialCache_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_MaterialCache;
	static const UECodeGen_Private::FStructPropertyParams NewProp_IndicesToLayers_ValueProp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_IndicesToLayers_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_IndicesToLayers;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelLandscapeMaterialCollection>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UVoxelLandscapeMaterialCollection_Statics::NewProp_MaxMaterialsToBlendAtOnce = { "MaxMaterialsToBlendAtOnce", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelLandscapeMaterialCollection, MaxMaterialsToBlendAtOnce), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxMaterialsToBlendAtOnce_MetaData), NewProp_MaxMaterialsToBlendAtOnce_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVoxelLandscapeMaterialCollection_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelLandscapeMaterialCollection, Material), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Material_MetaData), NewProp_Material_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVoxelLandscapeMaterialCollection_Statics::NewProp_Layers_Inner = { "Layers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVoxelLandscapeMaterialCollectionLayer, METADATA_PARAMS(0, nullptr) }; // 24850839
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UVoxelLandscapeMaterialCollection_Statics::NewProp_Layers = { "Layers", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelLandscapeMaterialCollection, Layers), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Layers_MetaData), NewProp_Layers_MetaData) }; // 24850839
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVoxelLandscapeMaterialCollection_Statics::NewProp_MaterialCache_ValueProp = { "MaterialCache", nullptr, (EPropertyFlags)0x0104000000020001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UMaterialInstanceConstant_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVoxelLandscapeMaterialCollection_Statics::NewProp_MaterialCache_Key_KeyProp = { "MaterialCache_Key", nullptr, (EPropertyFlags)0x0100000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVoxelLandscapeMaterialCollectionPermutation, METADATA_PARAMS(0, nullptr) }; // 37203029
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UVoxelLandscapeMaterialCollection_Statics::NewProp_MaterialCache = { "MaterialCache", nullptr, (EPropertyFlags)0x0114000000020015, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelLandscapeMaterialCollection, MaterialCache), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaterialCache_MetaData), NewProp_MaterialCache_MetaData) }; // 37203029
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVoxelLandscapeMaterialCollection_Statics::NewProp_IndicesToLayers_ValueProp = { "IndicesToLayers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FVoxelLandscapeMaterialCollectionLayer, METADATA_PARAMS(0, nullptr) }; // 24850839
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UVoxelLandscapeMaterialCollection_Statics::NewProp_IndicesToLayers_Key_KeyProp = { "IndicesToLayers_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UVoxelLandscapeMaterialCollection_Statics::NewProp_IndicesToLayers = { "IndicesToLayers", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelLandscapeMaterialCollection, IndicesToLayers), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IndicesToLayers_MetaData), NewProp_IndicesToLayers_MetaData) }; // 24850839
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelLandscapeMaterialCollection_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelLandscapeMaterialCollection_Statics::NewProp_MaxMaterialsToBlendAtOnce,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelLandscapeMaterialCollection_Statics::NewProp_Material,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelLandscapeMaterialCollection_Statics::NewProp_Layers_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelLandscapeMaterialCollection_Statics::NewProp_Layers,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelLandscapeMaterialCollection_Statics::NewProp_MaterialCache_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelLandscapeMaterialCollection_Statics::NewProp_MaterialCache_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelLandscapeMaterialCollection_Statics::NewProp_MaterialCache,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelLandscapeMaterialCollection_Statics::NewProp_IndicesToLayers_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelLandscapeMaterialCollection_Statics::NewProp_IndicesToLayers_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelLandscapeMaterialCollection_Statics::NewProp_IndicesToLayers,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelLandscapeMaterialCollection_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UVoxelLandscapeMaterialCollection_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UVoxelMaterialCollectionBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelLandscapeMaterialCollection_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelLandscapeMaterialCollection_Statics::ClassParams = {
	&UVoxelLandscapeMaterialCollection::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UVoxelLandscapeMaterialCollection_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelLandscapeMaterialCollection_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelLandscapeMaterialCollection_Statics::Class_MetaDataParams), Z_Construct_UClass_UVoxelLandscapeMaterialCollection_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVoxelLandscapeMaterialCollection()
{
	if (!Z_Registration_Info_UClass_UVoxelLandscapeMaterialCollection.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelLandscapeMaterialCollection.OuterSingleton, Z_Construct_UClass_UVoxelLandscapeMaterialCollection_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVoxelLandscapeMaterialCollection.OuterSingleton;
}
UVoxelLandscapeMaterialCollection::UVoxelLandscapeMaterialCollection(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelLandscapeMaterialCollection);
UVoxelLandscapeMaterialCollection::~UVoxelLandscapeMaterialCollection() {}
// ********** End Class UVoxelLandscapeMaterialCollection ******************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelRender_MaterialCollections_VoxelLandscapeMaterialCollection_h__Script_Voxel_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FVoxelLandscapeMaterialCollectionLayer::StaticStruct, Z_Construct_UScriptStruct_FVoxelLandscapeMaterialCollectionLayer_Statics::NewStructOps, TEXT("VoxelLandscapeMaterialCollectionLayer"), &Z_Registration_Info_UScriptStruct_FVoxelLandscapeMaterialCollectionLayer, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVoxelLandscapeMaterialCollectionLayer), 24850839U) },
		{ FVoxelLandscapeMaterialCollectionPermutation::StaticStruct, Z_Construct_UScriptStruct_FVoxelLandscapeMaterialCollectionPermutation_Statics::NewStructOps, TEXT("VoxelLandscapeMaterialCollectionPermutation"), &Z_Registration_Info_UScriptStruct_FVoxelLandscapeMaterialCollectionPermutation, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVoxelLandscapeMaterialCollectionPermutation), 37203029U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UVoxelLandscapeMaterialCollection, UVoxelLandscapeMaterialCollection::StaticClass, TEXT("UVoxelLandscapeMaterialCollection"), &Z_Registration_Info_UClass_UVoxelLandscapeMaterialCollection, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelLandscapeMaterialCollection), 2149154676U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelRender_MaterialCollections_VoxelLandscapeMaterialCollection_h__Script_Voxel_1223610397(TEXT("/Script/Voxel"),
	Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelRender_MaterialCollections_VoxelLandscapeMaterialCollection_h__Script_Voxel_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelRender_MaterialCollections_VoxelLandscapeMaterialCollection_h__Script_Voxel_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelRender_MaterialCollections_VoxelLandscapeMaterialCollection_h__Script_Voxel_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelRender_MaterialCollections_VoxelLandscapeMaterialCollection_h__Script_Voxel_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
