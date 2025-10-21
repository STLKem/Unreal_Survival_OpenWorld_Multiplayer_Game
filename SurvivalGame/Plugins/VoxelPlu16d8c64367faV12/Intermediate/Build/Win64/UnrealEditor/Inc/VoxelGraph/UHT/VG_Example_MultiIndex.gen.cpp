// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Examples/VG_Example_MultiIndex.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeVG_Example_MultiIndex() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_VoxelGraph();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVG_Example_MultiIndex();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVG_Example_MultiIndex_NoRegister();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelGraphGeneratorHelper();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UVG_Example_MultiIndex ***************************************************
void UVG_Example_MultiIndex::StaticRegisterNativesUVG_Example_MultiIndex()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UVG_Example_MultiIndex;
UClass* UVG_Example_MultiIndex::GetPrivateStaticClass()
{
	using TClass = UVG_Example_MultiIndex;
	if (!Z_Registration_Info_UClass_UVG_Example_MultiIndex.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("VG_Example_MultiIndex"),
			Z_Registration_Info_UClass_UVG_Example_MultiIndex.InnerSingleton,
			StaticRegisterNativesUVG_Example_MultiIndex,
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
	return Z_Registration_Info_UClass_UVG_Example_MultiIndex.InnerSingleton;
}
UClass* Z_Construct_UClass_UVG_Example_MultiIndex_NoRegister()
{
	return UVG_Example_MultiIndex::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UVG_Example_MultiIndex_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Examples/VG_Example_MultiIndex.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Private/Examples/VG_Example_MultiIndex.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Layer_0_MetaData[] = {
		{ "Category", "" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \n" },
#endif
		{ "DisplayName", "Layer 0" },
		{ "ModuleRelativePath", "Private/Examples/VG_Example_MultiIndex.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Layer_1_MetaData[] = {
		{ "Category", "" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \n" },
#endif
		{ "DisplayName", "Layer 1" },
		{ "ModuleRelativePath", "Private/Examples/VG_Example_MultiIndex.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Layer_2_MetaData[] = {
		{ "Category", "" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \n" },
#endif
		{ "DisplayName", "Layer 2" },
		{ "ModuleRelativePath", "Private/Examples/VG_Example_MultiIndex.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Layer_3_MetaData[] = {
		{ "Category", "" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \n" },
#endif
		{ "DisplayName", "Layer 3" },
		{ "ModuleRelativePath", "Private/Examples/VG_Example_MultiIndex.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_Layer_0;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_Layer_1;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_Layer_2;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_Layer_3;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVG_Example_MultiIndex>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UVG_Example_MultiIndex_Statics::NewProp_Layer_0 = { "Layer_0", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVG_Example_MultiIndex, Layer_0), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Layer_0_MetaData), NewProp_Layer_0_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UVG_Example_MultiIndex_Statics::NewProp_Layer_1 = { "Layer_1", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVG_Example_MultiIndex, Layer_1), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Layer_1_MetaData), NewProp_Layer_1_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UVG_Example_MultiIndex_Statics::NewProp_Layer_2 = { "Layer_2", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVG_Example_MultiIndex, Layer_2), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Layer_2_MetaData), NewProp_Layer_2_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UVG_Example_MultiIndex_Statics::NewProp_Layer_3 = { "Layer_3", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVG_Example_MultiIndex, Layer_3), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Layer_3_MetaData), NewProp_Layer_3_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVG_Example_MultiIndex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVG_Example_MultiIndex_Statics::NewProp_Layer_0,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVG_Example_MultiIndex_Statics::NewProp_Layer_1,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVG_Example_MultiIndex_Statics::NewProp_Layer_2,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVG_Example_MultiIndex_Statics::NewProp_Layer_3,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVG_Example_MultiIndex_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UVG_Example_MultiIndex_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UVoxelGraphGeneratorHelper,
	(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVG_Example_MultiIndex_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVG_Example_MultiIndex_Statics::ClassParams = {
	&UVG_Example_MultiIndex::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UVG_Example_MultiIndex_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UVG_Example_MultiIndex_Statics::PropPointers),
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVG_Example_MultiIndex_Statics::Class_MetaDataParams), Z_Construct_UClass_UVG_Example_MultiIndex_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVG_Example_MultiIndex()
{
	if (!Z_Registration_Info_UClass_UVG_Example_MultiIndex.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVG_Example_MultiIndex.OuterSingleton, Z_Construct_UClass_UVG_Example_MultiIndex_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVG_Example_MultiIndex.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVG_Example_MultiIndex);
UVG_Example_MultiIndex::~UVG_Example_MultiIndex() {}
// ********** End Class UVG_Example_MultiIndex *****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_VoxelGraph_Private_Examples_VG_Example_MultiIndex_h__Script_VoxelGraph_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UVG_Example_MultiIndex, UVG_Example_MultiIndex::StaticClass, TEXT("UVG_Example_MultiIndex"), &Z_Registration_Info_UClass_UVG_Example_MultiIndex, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVG_Example_MultiIndex), 2797315874U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_VoxelGraph_Private_Examples_VG_Example_MultiIndex_h__Script_VoxelGraph_963693578(TEXT("/Script/VoxelGraph"),
	Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_VoxelGraph_Private_Examples_VG_Example_MultiIndex_h__Script_VoxelGraph_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_VoxelGraph_Private_Examples_VG_Example_MultiIndex_h__Script_VoxelGraph_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
