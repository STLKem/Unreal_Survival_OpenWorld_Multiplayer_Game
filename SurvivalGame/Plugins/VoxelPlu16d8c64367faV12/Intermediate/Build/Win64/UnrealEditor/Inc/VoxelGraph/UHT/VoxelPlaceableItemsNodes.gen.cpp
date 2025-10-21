// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VoxelNodes/VoxelPlaceableItemsNodes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeVoxelPlaceableItemsNodes() {}

// ********** Begin Cross Module References ********************************************************
UPackage* Z_Construct_UPackage__Script_VoxelGraph();
VOXEL_API UEnum* Z_Construct_UEnum_Voxel_EVoxelDataItemCombineMode();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelGraphDataItemConfig_NoRegister();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_DataItemParameters();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_DataItemParameters_NoRegister();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_DataItemSample();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_DataItemSample_NoRegister();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNodeWithContext();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UVoxelNode_DataItemSample ************************************************
void UVoxelNode_DataItemSample::StaticRegisterNativesUVoxelNode_DataItemSample()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UVoxelNode_DataItemSample;
UClass* UVoxelNode_DataItemSample::GetPrivateStaticClass()
{
	using TClass = UVoxelNode_DataItemSample;
	if (!Z_Registration_Info_UClass_UVoxelNode_DataItemSample.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("VoxelNode_DataItemSample"),
			Z_Registration_Info_UClass_UVoxelNode_DataItemSample.InnerSingleton,
			StaticRegisterNativesUVoxelNode_DataItemSample,
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
	return Z_Registration_Info_UClass_UVoxelNode_DataItemSample.InnerSingleton;
}
UClass* Z_Construct_UClass_UVoxelNode_DataItemSample_NoRegister()
{
	return UVoxelNode_DataItemSample::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UVoxelNode_DataItemSample_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Category", "Placeable Items" },
		{ "DisplayName", "Data Item Sample" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelNodes/VoxelPlaceableItemsNodes.h" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelPlaceableItemsNodes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mask_MetaData[] = {
		{ "Bitmask", "" },
		{ "BitmaskEnum", "/Script/Voxel.EVoxel32BitMask" },
		{ "Category", "Config" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Only items matching the channels ticked here will be sampled (only the items matching (Mask & Item.Mask) != 0)\n" },
#endif
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelPlaceableItemsNodes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Only items matching the channels ticked here will be sampled (only the items matching (Mask & Item.Mask) != 0)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CombineMode_MetaData[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelPlaceableItemsNodes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Mask;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CombineMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CombineMode;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelNode_DataItemSample>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UVoxelNode_DataItemSample_Statics::NewProp_Mask = { "Mask", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelNode_DataItemSample, Mask), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mask_MetaData), NewProp_Mask_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UVoxelNode_DataItemSample_Statics::NewProp_CombineMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UVoxelNode_DataItemSample_Statics::NewProp_CombineMode = { "CombineMode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelNode_DataItemSample, CombineMode), Z_Construct_UEnum_Voxel_EVoxelDataItemCombineMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CombineMode_MetaData), NewProp_CombineMode_MetaData) }; // 1000854904
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelNode_DataItemSample_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelNode_DataItemSample_Statics::NewProp_Mask,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelNode_DataItemSample_Statics::NewProp_CombineMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelNode_DataItemSample_Statics::NewProp_CombineMode,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_DataItemSample_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UVoxelNode_DataItemSample_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UVoxelNodeWithContext,
	(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_DataItemSample_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelNode_DataItemSample_Statics::ClassParams = {
	&UVoxelNode_DataItemSample::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UVoxelNode_DataItemSample_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_DataItemSample_Statics::PropPointers),
	0,
	0x001010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_DataItemSample_Statics::Class_MetaDataParams), Z_Construct_UClass_UVoxelNode_DataItemSample_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVoxelNode_DataItemSample()
{
	if (!Z_Registration_Info_UClass_UVoxelNode_DataItemSample.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelNode_DataItemSample.OuterSingleton, Z_Construct_UClass_UVoxelNode_DataItemSample_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVoxelNode_DataItemSample.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelNode_DataItemSample);
UVoxelNode_DataItemSample::~UVoxelNode_DataItemSample() {}
// ********** End Class UVoxelNode_DataItemSample **************************************************

// ********** Begin Class UVoxelNode_DataItemParameters ********************************************
void UVoxelNode_DataItemParameters::StaticRegisterNativesUVoxelNode_DataItemParameters()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UVoxelNode_DataItemParameters;
UClass* UVoxelNode_DataItemParameters::GetPrivateStaticClass()
{
	using TClass = UVoxelNode_DataItemParameters;
	if (!Z_Registration_Info_UClass_UVoxelNode_DataItemParameters.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("VoxelNode_DataItemParameters"),
			Z_Registration_Info_UClass_UVoxelNode_DataItemParameters.InnerSingleton,
			StaticRegisterNativesUVoxelNode_DataItemParameters,
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
	return Z_Registration_Info_UClass_UVoxelNode_DataItemParameters.InnerSingleton;
}
UClass* Z_Construct_UClass_UVoxelNode_DataItemParameters_NoRegister()
{
	return UVoxelNode_DataItemParameters::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UVoxelNode_DataItemParameters_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Category", "Placeable Items" },
		{ "DisplayName", "Data Item Parameters" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelNodes/VoxelPlaceableItemsNodes.h" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelPlaceableItemsNodes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Config_MetaData[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelPlaceableItemsNodes.h" },
		{ "NonNull", "" },
		{ "ReconstructNode", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PreviewValues_MetaData[] = {
		{ "Category", "Preview" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// If no parameters are provided these will be used\n" },
#endif
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelPlaceableItemsNodes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If no parameters are provided these will be used" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Config;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PreviewValues_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_PreviewValues_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_PreviewValues;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelNode_DataItemParameters>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVoxelNode_DataItemParameters_Statics::NewProp_Config = { "Config", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelNode_DataItemParameters, Config), Z_Construct_UClass_UVoxelGraphDataItemConfig_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Config_MetaData), NewProp_Config_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVoxelNode_DataItemParameters_Statics::NewProp_PreviewValues_ValueProp = { "PreviewValues", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UVoxelNode_DataItemParameters_Statics::NewProp_PreviewValues_Key_KeyProp = { "PreviewValues_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UVoxelNode_DataItemParameters_Statics::NewProp_PreviewValues = { "PreviewValues", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelNode_DataItemParameters, PreviewValues), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PreviewValues_MetaData), NewProp_PreviewValues_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelNode_DataItemParameters_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelNode_DataItemParameters_Statics::NewProp_Config,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelNode_DataItemParameters_Statics::NewProp_PreviewValues_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelNode_DataItemParameters_Statics::NewProp_PreviewValues_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelNode_DataItemParameters_Statics::NewProp_PreviewValues,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_DataItemParameters_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UVoxelNode_DataItemParameters_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UVoxelNodeWithContext,
	(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_DataItemParameters_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelNode_DataItemParameters_Statics::ClassParams = {
	&UVoxelNode_DataItemParameters::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UVoxelNode_DataItemParameters_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_DataItemParameters_Statics::PropPointers),
	0,
	0x001010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_DataItemParameters_Statics::Class_MetaDataParams), Z_Construct_UClass_UVoxelNode_DataItemParameters_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVoxelNode_DataItemParameters()
{
	if (!Z_Registration_Info_UClass_UVoxelNode_DataItemParameters.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelNode_DataItemParameters.OuterSingleton, Z_Construct_UClass_UVoxelNode_DataItemParameters_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVoxelNode_DataItemParameters.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelNode_DataItemParameters);
UVoxelNode_DataItemParameters::~UVoxelNode_DataItemParameters() {}
// ********** End Class UVoxelNode_DataItemParameters **********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_VoxelGraph_Public_VoxelNodes_VoxelPlaceableItemsNodes_h__Script_VoxelGraph_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UVoxelNode_DataItemSample, UVoxelNode_DataItemSample::StaticClass, TEXT("UVoxelNode_DataItemSample"), &Z_Registration_Info_UClass_UVoxelNode_DataItemSample, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelNode_DataItemSample), 1345125555U) },
		{ Z_Construct_UClass_UVoxelNode_DataItemParameters, UVoxelNode_DataItemParameters::StaticClass, TEXT("UVoxelNode_DataItemParameters"), &Z_Registration_Info_UClass_UVoxelNode_DataItemParameters, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelNode_DataItemParameters), 3527814752U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_VoxelGraph_Public_VoxelNodes_VoxelPlaceableItemsNodes_h__Script_VoxelGraph_2703094651(TEXT("/Script/VoxelGraph"),
	Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_VoxelGraph_Public_VoxelNodes_VoxelPlaceableItemsNodes_h__Script_VoxelGraph_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_VoxelGraph_Public_VoxelNodes_VoxelPlaceableItemsNodes_h__Script_VoxelGraph_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
