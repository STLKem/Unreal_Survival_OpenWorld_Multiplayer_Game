// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Voxel/Public/VoxelTools/Tools/VoxelLevelTool.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeVoxelLevelTool() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
UPackage* Z_Construct_UPackage__Script_Voxel();
VOXEL_API UClass* Z_Construct_UClass_UVoxelLevelTool();
VOXEL_API UClass* Z_Construct_UClass_UVoxelLevelTool_NoRegister();
VOXEL_API UClass* Z_Construct_UClass_UVoxelToolBase();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UVoxelLevelTool **********************************************************
void UVoxelLevelTool::StaticRegisterNativesUVoxelLevelTool()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UVoxelLevelTool;
UClass* UVoxelLevelTool::GetPrivateStaticClass()
{
	using TClass = UVoxelLevelTool;
	if (!Z_Registration_Info_UClass_UVoxelLevelTool.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("VoxelLevelTool"),
			Z_Registration_Info_UClass_UVoxelLevelTool.InnerSingleton,
			StaticRegisterNativesUVoxelLevelTool,
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
	return Z_Registration_Info_UClass_UVoxelLevelTool.InnerSingleton;
}
UClass* Z_Construct_UClass_UVoxelLevelTool_NoRegister()
{
	return UVoxelLevelTool::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UVoxelLevelTool_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "VoxelTools/Tools/VoxelLevelTool.h" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelLevelTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ToolMaterial_MetaData[] = {
		{ "Category", "Tool Preview Settings" },
		{ "HideInPanel", "" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelLevelTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CylinderMesh_MetaData[] = {
		{ "Category", "Tool Preview Settings" },
		{ "HideInPanel", "" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelLevelTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Falloff_MetaData[] = {
		{ "Category", "Tool Settings" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelLevelTool.h" },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Height_MetaData[] = {
		{ "Category", "Tool Settings" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelLevelTool.h" },
		{ "UIMax", "10000" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Offset_MetaData[] = {
		{ "Category", "Tool Settings" },
		{ "Comment", "// Offset, relative to the height\n" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelLevelTool.h" },
		{ "ToolTip", "Offset, relative to the height" },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Stride_MetaData[] = {
		{ "Category", "Tool Settings" },
		{ "Comment", "// Relative to the radius\n" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelLevelTool.h" },
		{ "ToolTip", "Relative to the radius" },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ToolMaterial;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CylinderMesh;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Falloff;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Height;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Offset;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Stride;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelLevelTool>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVoxelLevelTool_Statics::NewProp_ToolMaterial = { "ToolMaterial", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelLevelTool, ToolMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ToolMaterial_MetaData), NewProp_ToolMaterial_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVoxelLevelTool_Statics::NewProp_CylinderMesh = { "CylinderMesh", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelLevelTool, CylinderMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CylinderMesh_MetaData), NewProp_CylinderMesh_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVoxelLevelTool_Statics::NewProp_Falloff = { "Falloff", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelLevelTool, Falloff), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Falloff_MetaData), NewProp_Falloff_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVoxelLevelTool_Statics::NewProp_Height = { "Height", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelLevelTool, Height), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Height_MetaData), NewProp_Height_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVoxelLevelTool_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelLevelTool, Offset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Offset_MetaData), NewProp_Offset_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVoxelLevelTool_Statics::NewProp_Stride = { "Stride", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelLevelTool, Stride), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Stride_MetaData), NewProp_Stride_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelLevelTool_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelLevelTool_Statics::NewProp_ToolMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelLevelTool_Statics::NewProp_CylinderMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelLevelTool_Statics::NewProp_Falloff,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelLevelTool_Statics::NewProp_Height,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelLevelTool_Statics::NewProp_Offset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelLevelTool_Statics::NewProp_Stride,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelLevelTool_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UVoxelLevelTool_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UVoxelToolBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelLevelTool_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelLevelTool_Statics::ClassParams = {
	&UVoxelLevelTool::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UVoxelLevelTool_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelLevelTool_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelLevelTool_Statics::Class_MetaDataParams), Z_Construct_UClass_UVoxelLevelTool_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVoxelLevelTool()
{
	if (!Z_Registration_Info_UClass_UVoxelLevelTool.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelLevelTool.OuterSingleton, Z_Construct_UClass_UVoxelLevelTool_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVoxelLevelTool.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelLevelTool);
UVoxelLevelTool::~UVoxelLevelTool() {}
// ********** End Class UVoxelLevelTool ************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelTools_Tools_VoxelLevelTool_h__Script_Voxel_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UVoxelLevelTool, UVoxelLevelTool::StaticClass, TEXT("UVoxelLevelTool"), &Z_Registration_Info_UClass_UVoxelLevelTool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelLevelTool), 550173766U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelTools_Tools_VoxelLevelTool_h__Script_Voxel_3117417340(TEXT("/Script/Voxel"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelTools_Tools_VoxelLevelTool_h__Script_Voxel_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelTools_Tools_VoxelLevelTool_h__Script_Voxel_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
