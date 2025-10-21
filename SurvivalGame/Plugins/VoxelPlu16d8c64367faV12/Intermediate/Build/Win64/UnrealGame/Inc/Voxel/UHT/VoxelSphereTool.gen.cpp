// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Voxel/Public/VoxelTools/Tools/VoxelSphereTool.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeVoxelSphereTool() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_Voxel();
VOXEL_API UClass* Z_Construct_UClass_UVoxelSphereTool();
VOXEL_API UClass* Z_Construct_UClass_UVoxelSphereTool_NoRegister();
VOXEL_API UClass* Z_Construct_UClass_UVoxelSphereToolBase();
VOXEL_API UEnum* Z_Construct_UEnum_Voxel_EVoxelFalloff();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UVoxelSphereTool *********************************************************
void UVoxelSphereTool::StaticRegisterNativesUVoxelSphereTool()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UVoxelSphereTool;
UClass* UVoxelSphereTool::GetPrivateStaticClass()
{
	using TClass = UVoxelSphereTool;
	if (!Z_Registration_Info_UClass_UVoxelSphereTool.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("VoxelSphereTool"),
			Z_Registration_Info_UClass_UVoxelSphereTool.InnerSingleton,
			StaticRegisterNativesUVoxelSphereTool,
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
	return Z_Registration_Info_UClass_UVoxelSphereTool.InnerSingleton;
}
UClass* Z_Construct_UClass_UVoxelSphereTool_NoRegister()
{
	return UVoxelSphereTool::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UVoxelSphereTool_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "VoxelTools/Tools/VoxelSphereTool.h" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelSphereTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlayMaterial_MetaData[] = {
		{ "Category", "Tool Preview Settings" },
		{ "HideInPanel", "" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelSphereTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSculpt_MetaData[] = {
		{ "Category", "Tool Settings" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelSphereTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPaint_MetaData[] = {
		{ "Category", "Paint Settings" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelSphereTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PaintStrength_MetaData[] = {
		{ "Category", "Paint Settings" },
		{ "EditCondition", "bPaint" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelSphereTool.h" },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FalloffType_MetaData[] = {
		{ "Category", "Paint Settings" },
		{ "Comment", "// Paint falloff type\n" },
		{ "EditCondition", "bPaint && !bSculpt" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelSphereTool.h" },
		{ "ToolTip", "Paint falloff type" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Falloff_MetaData[] = {
		{ "Category", "Paint Settings" },
		{ "Comment", "// Paint falloff\n" },
		{ "EditCondition", "bPaint && !bSculpt" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelSphereTool.h" },
		{ "ToolTip", "Paint falloff" },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlayMaterial;
	static void NewProp_bSculpt_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSculpt;
	static void NewProp_bPaint_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPaint;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PaintStrength;
	static const UECodeGen_Private::FBytePropertyParams NewProp_FalloffType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_FalloffType;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Falloff;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelSphereTool>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVoxelSphereTool_Statics::NewProp_OverlayMaterial = { "OverlayMaterial", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelSphereTool, OverlayMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlayMaterial_MetaData), NewProp_OverlayMaterial_MetaData) };
void Z_Construct_UClass_UVoxelSphereTool_Statics::NewProp_bSculpt_SetBit(void* Obj)
{
	((UVoxelSphereTool*)Obj)->bSculpt = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVoxelSphereTool_Statics::NewProp_bSculpt = { "bSculpt", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UVoxelSphereTool), &Z_Construct_UClass_UVoxelSphereTool_Statics::NewProp_bSculpt_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSculpt_MetaData), NewProp_bSculpt_MetaData) };
void Z_Construct_UClass_UVoxelSphereTool_Statics::NewProp_bPaint_SetBit(void* Obj)
{
	((UVoxelSphereTool*)Obj)->bPaint = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVoxelSphereTool_Statics::NewProp_bPaint = { "bPaint", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UVoxelSphereTool), &Z_Construct_UClass_UVoxelSphereTool_Statics::NewProp_bPaint_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPaint_MetaData), NewProp_bPaint_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVoxelSphereTool_Statics::NewProp_PaintStrength = { "PaintStrength", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelSphereTool, PaintStrength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PaintStrength_MetaData), NewProp_PaintStrength_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UVoxelSphereTool_Statics::NewProp_FalloffType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UVoxelSphereTool_Statics::NewProp_FalloffType = { "FalloffType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelSphereTool, FalloffType), Z_Construct_UEnum_Voxel_EVoxelFalloff, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FalloffType_MetaData), NewProp_FalloffType_MetaData) }; // 103099151
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVoxelSphereTool_Statics::NewProp_Falloff = { "Falloff", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelSphereTool, Falloff), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Falloff_MetaData), NewProp_Falloff_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelSphereTool_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelSphereTool_Statics::NewProp_OverlayMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelSphereTool_Statics::NewProp_bSculpt,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelSphereTool_Statics::NewProp_bPaint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelSphereTool_Statics::NewProp_PaintStrength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelSphereTool_Statics::NewProp_FalloffType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelSphereTool_Statics::NewProp_FalloffType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelSphereTool_Statics::NewProp_Falloff,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelSphereTool_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UVoxelSphereTool_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UVoxelSphereToolBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelSphereTool_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelSphereTool_Statics::ClassParams = {
	&UVoxelSphereTool::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UVoxelSphereTool_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelSphereTool_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelSphereTool_Statics::Class_MetaDataParams), Z_Construct_UClass_UVoxelSphereTool_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVoxelSphereTool()
{
	if (!Z_Registration_Info_UClass_UVoxelSphereTool.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelSphereTool.OuterSingleton, Z_Construct_UClass_UVoxelSphereTool_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVoxelSphereTool.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelSphereTool);
UVoxelSphereTool::~UVoxelSphereTool() {}
// ********** End Class UVoxelSphereTool ***********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelTools_Tools_VoxelSphereTool_h__Script_Voxel_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UVoxelSphereTool, UVoxelSphereTool::StaticClass, TEXT("UVoxelSphereTool"), &Z_Registration_Info_UClass_UVoxelSphereTool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelSphereTool), 3462188554U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelTools_Tools_VoxelSphereTool_h__Script_Voxel_549656843(TEXT("/Script/Voxel"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelTools_Tools_VoxelSphereTool_h__Script_Voxel_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelTools_Tools_VoxelSphereTool_h__Script_Voxel_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
