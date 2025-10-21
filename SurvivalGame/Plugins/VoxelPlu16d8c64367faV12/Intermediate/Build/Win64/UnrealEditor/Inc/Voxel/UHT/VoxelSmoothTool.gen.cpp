// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VoxelTools/Tools/VoxelSmoothTool.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeVoxelSmoothTool() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_Voxel();
VOXEL_API UClass* Z_Construct_UClass_UVoxelSmoothTool();
VOXEL_API UClass* Z_Construct_UClass_UVoxelSmoothTool_NoRegister();
VOXEL_API UClass* Z_Construct_UClass_UVoxelToolBase();
VOXEL_API UEnum* Z_Construct_UEnum_Voxel_EVoxelFalloff();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UVoxelSmoothTool *********************************************************
void UVoxelSmoothTool::StaticRegisterNativesUVoxelSmoothTool()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UVoxelSmoothTool;
UClass* UVoxelSmoothTool::GetPrivateStaticClass()
{
	using TClass = UVoxelSmoothTool;
	if (!Z_Registration_Info_UClass_UVoxelSmoothTool.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("VoxelSmoothTool"),
			Z_Registration_Info_UClass_UVoxelSmoothTool.InnerSingleton,
			StaticRegisterNativesUVoxelSmoothTool,
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
	return Z_Registration_Info_UClass_UVoxelSmoothTool.InnerSingleton;
}
UClass* Z_Construct_UClass_UVoxelSmoothTool_NoRegister()
{
	return UVoxelSmoothTool::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UVoxelSmoothTool_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "VoxelTools/Tools/VoxelSmoothTool.h" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelSmoothTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ToolMaterial_MetaData[] = {
		{ "Category", "Tool Preview Settings" },
		{ "HideInPanel", "" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelSmoothTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSculpt_MetaData[] = {
		{ "Category", "Tool Settings" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelSmoothTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPaint_MetaData[] = {
		{ "Category", "Tool Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Doesn't work with multi index yet\n" },
#endif
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelSmoothTool.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Doesn't work with multi index yet" },
#endif
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PaintMask_MetaData[] = {
		{ "Bitmask", "" },
		{ "BitmaskEnum", "/Script/Voxel.EVoxelMaterialMask_BP" },
		{ "Category", "Tool Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Which channels to smooth\n// In Single Index Alpha will be automatically disabled\n" },
#endif
		{ "EditCondition", "bPaint" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelSmoothTool.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Which channels to smooth\nIn Single Index Alpha will be automatically disabled" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Strength_MetaData[] = {
		{ "Category", "Tool Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// NumIterations also affects strength\n" },
#endif
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelSmoothTool.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "NumIterations also affects strength" },
#endif
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumIterations_MetaData[] = {
		{ "Category", "Tool Settings" },
		{ "ClampMin", "1" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Number of times to apply the smooth in a single frame\n// Will be ignored if Shift is pressed\n" },
#endif
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelSmoothTool.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Number of times to apply the smooth in a single frame\nWill be ignored if Shift is pressed" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FalloffType_MetaData[] = {
		{ "Category", "Tool Settings" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelSmoothTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Falloff_MetaData[] = {
		{ "Category", "Tool Settings" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelSmoothTool.h" },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ToolMaterial;
	static void NewProp_bSculpt_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSculpt;
	static void NewProp_bPaint_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPaint;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PaintMask;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Strength;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumIterations;
	static const UECodeGen_Private::FBytePropertyParams NewProp_FalloffType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_FalloffType;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Falloff;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelSmoothTool>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVoxelSmoothTool_Statics::NewProp_ToolMaterial = { "ToolMaterial", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelSmoothTool, ToolMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ToolMaterial_MetaData), NewProp_ToolMaterial_MetaData) };
void Z_Construct_UClass_UVoxelSmoothTool_Statics::NewProp_bSculpt_SetBit(void* Obj)
{
	((UVoxelSmoothTool*)Obj)->bSculpt = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVoxelSmoothTool_Statics::NewProp_bSculpt = { "bSculpt", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UVoxelSmoothTool), &Z_Construct_UClass_UVoxelSmoothTool_Statics::NewProp_bSculpt_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSculpt_MetaData), NewProp_bSculpt_MetaData) };
void Z_Construct_UClass_UVoxelSmoothTool_Statics::NewProp_bPaint_SetBit(void* Obj)
{
	((UVoxelSmoothTool*)Obj)->bPaint = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVoxelSmoothTool_Statics::NewProp_bPaint = { "bPaint", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UVoxelSmoothTool), &Z_Construct_UClass_UVoxelSmoothTool_Statics::NewProp_bPaint_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPaint_MetaData), NewProp_bPaint_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UVoxelSmoothTool_Statics::NewProp_PaintMask = { "PaintMask", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelSmoothTool, PaintMask), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PaintMask_MetaData), NewProp_PaintMask_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVoxelSmoothTool_Statics::NewProp_Strength = { "Strength", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelSmoothTool, Strength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Strength_MetaData), NewProp_Strength_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UVoxelSmoothTool_Statics::NewProp_NumIterations = { "NumIterations", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelSmoothTool, NumIterations), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumIterations_MetaData), NewProp_NumIterations_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UVoxelSmoothTool_Statics::NewProp_FalloffType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UVoxelSmoothTool_Statics::NewProp_FalloffType = { "FalloffType", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelSmoothTool, FalloffType), Z_Construct_UEnum_Voxel_EVoxelFalloff, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FalloffType_MetaData), NewProp_FalloffType_MetaData) }; // 103099151
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVoxelSmoothTool_Statics::NewProp_Falloff = { "Falloff", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelSmoothTool, Falloff), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Falloff_MetaData), NewProp_Falloff_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelSmoothTool_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelSmoothTool_Statics::NewProp_ToolMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelSmoothTool_Statics::NewProp_bSculpt,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelSmoothTool_Statics::NewProp_bPaint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelSmoothTool_Statics::NewProp_PaintMask,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelSmoothTool_Statics::NewProp_Strength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelSmoothTool_Statics::NewProp_NumIterations,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelSmoothTool_Statics::NewProp_FalloffType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelSmoothTool_Statics::NewProp_FalloffType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelSmoothTool_Statics::NewProp_Falloff,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelSmoothTool_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UVoxelSmoothTool_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UVoxelToolBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelSmoothTool_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelSmoothTool_Statics::ClassParams = {
	&UVoxelSmoothTool::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UVoxelSmoothTool_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelSmoothTool_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelSmoothTool_Statics::Class_MetaDataParams), Z_Construct_UClass_UVoxelSmoothTool_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVoxelSmoothTool()
{
	if (!Z_Registration_Info_UClass_UVoxelSmoothTool.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelSmoothTool.OuterSingleton, Z_Construct_UClass_UVoxelSmoothTool_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVoxelSmoothTool.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelSmoothTool);
UVoxelSmoothTool::~UVoxelSmoothTool() {}
// ********** End Class UVoxelSmoothTool ***********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelTools_Tools_VoxelSmoothTool_h__Script_Voxel_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UVoxelSmoothTool, UVoxelSmoothTool::StaticClass, TEXT("UVoxelSmoothTool"), &Z_Registration_Info_UClass_UVoxelSmoothTool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelSmoothTool), 3968640818U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelTools_Tools_VoxelSmoothTool_h__Script_Voxel_4071102280(TEXT("/Script/Voxel"),
	Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelTools_Tools_VoxelSmoothTool_h__Script_Voxel_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelTools_Tools_VoxelSmoothTool_h__Script_Voxel_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
