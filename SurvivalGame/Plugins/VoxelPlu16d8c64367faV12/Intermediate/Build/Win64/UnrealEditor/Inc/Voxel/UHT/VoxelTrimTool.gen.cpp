// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VoxelTools/Tools/VoxelTrimTool.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeVoxelTrimTool() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_Voxel();
VOXEL_API UClass* Z_Construct_UClass_UVoxelToolBase();
VOXEL_API UClass* Z_Construct_UClass_UVoxelTrimTool();
VOXEL_API UClass* Z_Construct_UClass_UVoxelTrimTool_NoRegister();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UVoxelTrimTool ***********************************************************
void UVoxelTrimTool::StaticRegisterNativesUVoxelTrimTool()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UVoxelTrimTool;
UClass* UVoxelTrimTool::GetPrivateStaticClass()
{
	using TClass = UVoxelTrimTool;
	if (!Z_Registration_Info_UClass_UVoxelTrimTool.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("VoxelTrimTool"),
			Z_Registration_Info_UClass_UVoxelTrimTool.InnerSingleton,
			StaticRegisterNativesUVoxelTrimTool,
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
	return Z_Registration_Info_UClass_UVoxelTrimTool.InnerSingleton;
}
UClass* Z_Construct_UClass_UVoxelTrimTool_NoRegister()
{
	return UVoxelTrimTool::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UVoxelTrimTool_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "VoxelTools/Tools/VoxelTrimTool.h" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelTrimTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ToolMaterial_MetaData[] = {
		{ "Category", "Tool Preview Settings" },
		{ "HideInPanel", "" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelTrimTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Falloff_MetaData[] = {
		{ "Category", "Tool Settings" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelTrimTool.h" },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Roughness_MetaData[] = {
		{ "Category", "Tool Settings" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelTrimTool.h" },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ToolMaterial;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Falloff;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Roughness;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelTrimTool>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVoxelTrimTool_Statics::NewProp_ToolMaterial = { "ToolMaterial", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelTrimTool, ToolMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ToolMaterial_MetaData), NewProp_ToolMaterial_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVoxelTrimTool_Statics::NewProp_Falloff = { "Falloff", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelTrimTool, Falloff), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Falloff_MetaData), NewProp_Falloff_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVoxelTrimTool_Statics::NewProp_Roughness = { "Roughness", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelTrimTool, Roughness), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Roughness_MetaData), NewProp_Roughness_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelTrimTool_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelTrimTool_Statics::NewProp_ToolMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelTrimTool_Statics::NewProp_Falloff,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelTrimTool_Statics::NewProp_Roughness,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelTrimTool_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UVoxelTrimTool_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UVoxelToolBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelTrimTool_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelTrimTool_Statics::ClassParams = {
	&UVoxelTrimTool::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UVoxelTrimTool_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelTrimTool_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelTrimTool_Statics::Class_MetaDataParams), Z_Construct_UClass_UVoxelTrimTool_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVoxelTrimTool()
{
	if (!Z_Registration_Info_UClass_UVoxelTrimTool.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelTrimTool.OuterSingleton, Z_Construct_UClass_UVoxelTrimTool_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVoxelTrimTool.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelTrimTool);
UVoxelTrimTool::~UVoxelTrimTool() {}
// ********** End Class UVoxelTrimTool *************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelTools_Tools_VoxelTrimTool_h__Script_Voxel_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UVoxelTrimTool, UVoxelTrimTool::StaticClass, TEXT("UVoxelTrimTool"), &Z_Registration_Info_UClass_UVoxelTrimTool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelTrimTool), 1479349852U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelTools_Tools_VoxelTrimTool_h__Script_Voxel_2770691508(TEXT("/Script/Voxel"),
	Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelTools_Tools_VoxelTrimTool_h__Script_Voxel_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelTools_Tools_VoxelTrimTool_h__Script_Voxel_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
