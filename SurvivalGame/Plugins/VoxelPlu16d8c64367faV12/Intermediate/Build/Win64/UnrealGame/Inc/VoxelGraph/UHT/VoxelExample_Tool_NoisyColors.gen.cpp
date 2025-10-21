// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Examples/VoxelExample_Tool_NoisyColors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeVoxelExample_Tool_NoisyColors() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
UPackage* Z_Construct_UPackage__Script_VoxelGraph();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelExample_Tool_NoisyColors();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelExample_Tool_NoisyColors_NoRegister();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelGraphGeneratorHelper();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UVoxelExample_Tool_NoisyColors *******************************************
void UVoxelExample_Tool_NoisyColors::StaticRegisterNativesUVoxelExample_Tool_NoisyColors()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UVoxelExample_Tool_NoisyColors;
UClass* UVoxelExample_Tool_NoisyColors::GetPrivateStaticClass()
{
	using TClass = UVoxelExample_Tool_NoisyColors;
	if (!Z_Registration_Info_UClass_UVoxelExample_Tool_NoisyColors.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("VoxelExample_Tool_NoisyColors"),
			Z_Registration_Info_UClass_UVoxelExample_Tool_NoisyColors.InnerSingleton,
			StaticRegisterNativesUVoxelExample_Tool_NoisyColors,
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
	return Z_Registration_Info_UClass_UVoxelExample_Tool_NoisyColors.InnerSingleton;
}
UClass* Z_Construct_UClass_UVoxelExample_Tool_NoisyColors_NoRegister()
{
	return UVoxelExample_Tool_NoisyColors::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UVoxelExample_Tool_NoisyColors_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Examples/VoxelExample_Tool_NoisyColors.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Private/Examples/VoxelExample_Tool_NoisyColors.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[] = {
		{ "Category", "" },
		{ "Comment", "// \n" },
		{ "DisplayName", "Color" },
		{ "ModuleRelativePath", "Private/Examples/VoxelExample_Tool_NoisyColors.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelExample_Tool_NoisyColors>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVoxelExample_Tool_NoisyColors_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelExample_Tool_NoisyColors, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Color_MetaData), NewProp_Color_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelExample_Tool_NoisyColors_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelExample_Tool_NoisyColors_Statics::NewProp_Color,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelExample_Tool_NoisyColors_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UVoxelExample_Tool_NoisyColors_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UVoxelGraphGeneratorHelper,
	(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelExample_Tool_NoisyColors_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelExample_Tool_NoisyColors_Statics::ClassParams = {
	&UVoxelExample_Tool_NoisyColors::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UVoxelExample_Tool_NoisyColors_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelExample_Tool_NoisyColors_Statics::PropPointers),
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelExample_Tool_NoisyColors_Statics::Class_MetaDataParams), Z_Construct_UClass_UVoxelExample_Tool_NoisyColors_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVoxelExample_Tool_NoisyColors()
{
	if (!Z_Registration_Info_UClass_UVoxelExample_Tool_NoisyColors.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelExample_Tool_NoisyColors.OuterSingleton, Z_Construct_UClass_UVoxelExample_Tool_NoisyColors_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVoxelExample_Tool_NoisyColors.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelExample_Tool_NoisyColors);
UVoxelExample_Tool_NoisyColors::~UVoxelExample_Tool_NoisyColors() {}
// ********** End Class UVoxelExample_Tool_NoisyColors *********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_VoxelGraph_Private_Examples_VoxelExample_Tool_NoisyColors_h__Script_VoxelGraph_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UVoxelExample_Tool_NoisyColors, UVoxelExample_Tool_NoisyColors::StaticClass, TEXT("UVoxelExample_Tool_NoisyColors"), &Z_Registration_Info_UClass_UVoxelExample_Tool_NoisyColors, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelExample_Tool_NoisyColors), 270866476U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_VoxelGraph_Private_Examples_VoxelExample_Tool_NoisyColors_h__Script_VoxelGraph_2270430150(TEXT("/Script/VoxelGraph"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_VoxelGraph_Private_Examples_VoxelExample_Tool_NoisyColors_h__Script_VoxelGraph_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_VoxelGraph_Private_Examples_VoxelExample_Tool_NoisyColors_h__Script_VoxelGraph_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
