// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Examples/VG_Example_Erosion.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeVG_Example_Erosion() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_VoxelGraph();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVG_Example_Erosion();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVG_Example_Erosion_NoRegister();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelGraphGeneratorHelper();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UVG_Example_Erosion ******************************************************
void UVG_Example_Erosion::StaticRegisterNativesUVG_Example_Erosion()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UVG_Example_Erosion;
UClass* UVG_Example_Erosion::GetPrivateStaticClass()
{
	using TClass = UVG_Example_Erosion;
	if (!Z_Registration_Info_UClass_UVG_Example_Erosion.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("VG_Example_Erosion"),
			Z_Registration_Info_UClass_UVG_Example_Erosion.InnerSingleton,
			StaticRegisterNativesUVG_Example_Erosion,
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
	return Z_Registration_Info_UClass_UVG_Example_Erosion.InnerSingleton;
}
UClass* Z_Construct_UClass_UVG_Example_Erosion_NoRegister()
{
	return UVG_Example_Erosion::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UVG_Example_Erosion_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Examples/VG_Example_Erosion.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Private/Examples/VG_Example_Erosion.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Erosion_Material_Offset_MetaData[] = {
		{ "Category", "" },
		{ "Comment", "// \n" },
		{ "DisplayName", "Erosion Material Offset" },
		{ "ModuleRelativePath", "Private/Examples/VG_Example_Erosion.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Erosion_Material_Strength_MetaData[] = {
		{ "Category", "" },
		{ "Comment", "// \n" },
		{ "DisplayName", "Erosion Material Strength" },
		{ "ModuleRelativePath", "Private/Examples/VG_Example_Erosion.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Erosion_Strength_MetaData[] = {
		{ "Category", "" },
		{ "Comment", "// \n" },
		{ "DisplayName", "Erosion Strength" },
		{ "ModuleRelativePath", "Private/Examples/VG_Example_Erosion.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Height_MetaData[] = {
		{ "Category", "" },
		{ "Comment", "// \n" },
		{ "DisplayName", "Height" },
		{ "ModuleRelativePath", "Private/Examples/VG_Example_Erosion.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Rocks_MetaData[] = {
		{ "Category", "" },
		{ "Comment", "// \n" },
		{ "DisplayName", "Rocks" },
		{ "ModuleRelativePath", "Private/Examples/VG_Example_Erosion.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Snow_MetaData[] = {
		{ "Category", "" },
		{ "Comment", "// \n" },
		{ "DisplayName", "Snow" },
		{ "ModuleRelativePath", "Private/Examples/VG_Example_Erosion.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Valleys_Height_MetaData[] = {
		{ "Category", "" },
		{ "Comment", "// \n" },
		{ "DisplayName", "Valleys Height" },
		{ "ModuleRelativePath", "Private/Examples/VG_Example_Erosion.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Erosion_Material_Offset;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Erosion_Material_Strength;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Erosion_Strength;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Height;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_Rocks;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_Snow;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Valleys_Height;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVG_Example_Erosion>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVG_Example_Erosion_Statics::NewProp_Erosion_Material_Offset = { "Erosion_Material_Offset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVG_Example_Erosion, Erosion_Material_Offset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Erosion_Material_Offset_MetaData), NewProp_Erosion_Material_Offset_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVG_Example_Erosion_Statics::NewProp_Erosion_Material_Strength = { "Erosion_Material_Strength", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVG_Example_Erosion, Erosion_Material_Strength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Erosion_Material_Strength_MetaData), NewProp_Erosion_Material_Strength_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVG_Example_Erosion_Statics::NewProp_Erosion_Strength = { "Erosion_Strength", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVG_Example_Erosion, Erosion_Strength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Erosion_Strength_MetaData), NewProp_Erosion_Strength_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVG_Example_Erosion_Statics::NewProp_Height = { "Height", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVG_Example_Erosion, Height), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Height_MetaData), NewProp_Height_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UVG_Example_Erosion_Statics::NewProp_Rocks = { "Rocks", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVG_Example_Erosion, Rocks), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Rocks_MetaData), NewProp_Rocks_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UVG_Example_Erosion_Statics::NewProp_Snow = { "Snow", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVG_Example_Erosion, Snow), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Snow_MetaData), NewProp_Snow_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVG_Example_Erosion_Statics::NewProp_Valleys_Height = { "Valleys_Height", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVG_Example_Erosion, Valleys_Height), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Valleys_Height_MetaData), NewProp_Valleys_Height_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVG_Example_Erosion_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVG_Example_Erosion_Statics::NewProp_Erosion_Material_Offset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVG_Example_Erosion_Statics::NewProp_Erosion_Material_Strength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVG_Example_Erosion_Statics::NewProp_Erosion_Strength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVG_Example_Erosion_Statics::NewProp_Height,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVG_Example_Erosion_Statics::NewProp_Rocks,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVG_Example_Erosion_Statics::NewProp_Snow,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVG_Example_Erosion_Statics::NewProp_Valleys_Height,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVG_Example_Erosion_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UVG_Example_Erosion_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UVoxelGraphGeneratorHelper,
	(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVG_Example_Erosion_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVG_Example_Erosion_Statics::ClassParams = {
	&UVG_Example_Erosion::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UVG_Example_Erosion_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UVG_Example_Erosion_Statics::PropPointers),
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVG_Example_Erosion_Statics::Class_MetaDataParams), Z_Construct_UClass_UVG_Example_Erosion_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVG_Example_Erosion()
{
	if (!Z_Registration_Info_UClass_UVG_Example_Erosion.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVG_Example_Erosion.OuterSingleton, Z_Construct_UClass_UVG_Example_Erosion_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVG_Example_Erosion.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVG_Example_Erosion);
UVG_Example_Erosion::~UVG_Example_Erosion() {}
// ********** End Class UVG_Example_Erosion ********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_VoxelGraph_Private_Examples_VG_Example_Erosion_h__Script_VoxelGraph_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UVG_Example_Erosion, UVG_Example_Erosion::StaticClass, TEXT("UVG_Example_Erosion"), &Z_Registration_Info_UClass_UVG_Example_Erosion, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVG_Example_Erosion), 3357276157U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_VoxelGraph_Private_Examples_VG_Example_Erosion_h__Script_VoxelGraph_692015705(TEXT("/Script/VoxelGraph"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_VoxelGraph_Private_Examples_VG_Example_Erosion_h__Script_VoxelGraph_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_VoxelGraph_Private_Examples_VG_Example_Erosion_h__Script_VoxelGraph_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
