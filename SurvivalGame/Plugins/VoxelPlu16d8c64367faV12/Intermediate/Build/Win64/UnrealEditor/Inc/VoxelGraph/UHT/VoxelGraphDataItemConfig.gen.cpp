// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VoxelGraphDataItemConfig.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeVoxelGraphDataItemConfig() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
UPackage* Z_Construct_UPackage__Script_VoxelGraph();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelGraphDataItemConfig();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelGraphDataItemConfig_NoRegister();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UVoxelGraphDataItemConfig ************************************************
void UVoxelGraphDataItemConfig::StaticRegisterNativesUVoxelGraphDataItemConfig()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UVoxelGraphDataItemConfig;
UClass* UVoxelGraphDataItemConfig::GetPrivateStaticClass()
{
	using TClass = UVoxelGraphDataItemConfig;
	if (!Z_Registration_Info_UClass_UVoxelGraphDataItemConfig.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("VoxelGraphDataItemConfig"),
			Z_Registration_Info_UClass_UVoxelGraphDataItemConfig.InnerSingleton,
			StaticRegisterNativesUVoxelGraphDataItemConfig,
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
	return Z_Registration_Info_UClass_UVoxelGraphDataItemConfig.InnerSingleton;
}
UClass* Z_Construct_UClass_UVoxelGraphDataItemConfig_NoRegister()
{
	return UVoxelGraphDataItemConfig::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UVoxelGraphDataItemConfig_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "VoxelGraphDataItemConfig.h" },
		{ "ModuleRelativePath", "Public/VoxelGraphDataItemConfig.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Parameters_MetaData[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Public/VoxelGraphDataItemConfig.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Parameters_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Parameters;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelGraphDataItemConfig>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UVoxelGraphDataItemConfig_Statics::NewProp_Parameters_Inner = { "Parameters", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UVoxelGraphDataItemConfig_Statics::NewProp_Parameters = { "Parameters", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelGraphDataItemConfig, Parameters), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Parameters_MetaData), NewProp_Parameters_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelGraphDataItemConfig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelGraphDataItemConfig_Statics::NewProp_Parameters_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelGraphDataItemConfig_Statics::NewProp_Parameters,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelGraphDataItemConfig_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UVoxelGraphDataItemConfig_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelGraphDataItemConfig_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelGraphDataItemConfig_Statics::ClassParams = {
	&UVoxelGraphDataItemConfig::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UVoxelGraphDataItemConfig_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelGraphDataItemConfig_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelGraphDataItemConfig_Statics::Class_MetaDataParams), Z_Construct_UClass_UVoxelGraphDataItemConfig_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVoxelGraphDataItemConfig()
{
	if (!Z_Registration_Info_UClass_UVoxelGraphDataItemConfig.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelGraphDataItemConfig.OuterSingleton, Z_Construct_UClass_UVoxelGraphDataItemConfig_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVoxelGraphDataItemConfig.OuterSingleton;
}
UVoxelGraphDataItemConfig::UVoxelGraphDataItemConfig(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelGraphDataItemConfig);
UVoxelGraphDataItemConfig::~UVoxelGraphDataItemConfig() {}
// ********** End Class UVoxelGraphDataItemConfig **************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_VoxelGraph_Public_VoxelGraphDataItemConfig_h__Script_VoxelGraph_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UVoxelGraphDataItemConfig, UVoxelGraphDataItemConfig::StaticClass, TEXT("UVoxelGraphDataItemConfig"), &Z_Registration_Info_UClass_UVoxelGraphDataItemConfig, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelGraphDataItemConfig), 1051816196U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_VoxelGraph_Public_VoxelGraphDataItemConfig_h__Script_VoxelGraph_2353442800(TEXT("/Script/VoxelGraph"),
	Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_VoxelGraph_Public_VoxelGraphDataItemConfig_h__Script_VoxelGraph_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_VoxelGraph_Public_VoxelGraphDataItemConfig_h__Script_VoxelGraph_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
