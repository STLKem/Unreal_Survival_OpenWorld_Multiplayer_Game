// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VoxelTools/Tools/VoxelFlattenTool.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeVoxelFlattenTool() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_Voxel();
VOXEL_API UClass* Z_Construct_UClass_UVoxelFlattenTool();
VOXEL_API UClass* Z_Construct_UClass_UVoxelFlattenTool_NoRegister();
VOXEL_API UClass* Z_Construct_UClass_UVoxelToolBase();
VOXEL_API UEnum* Z_Construct_UEnum_Voxel_EVoxelFalloff();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UVoxelFlattenTool ********************************************************
void UVoxelFlattenTool::StaticRegisterNativesUVoxelFlattenTool()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UVoxelFlattenTool;
UClass* UVoxelFlattenTool::GetPrivateStaticClass()
{
	using TClass = UVoxelFlattenTool;
	if (!Z_Registration_Info_UClass_UVoxelFlattenTool.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("VoxelFlattenTool"),
			Z_Registration_Info_UClass_UVoxelFlattenTool.InnerSingleton,
			StaticRegisterNativesUVoxelFlattenTool,
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
	return Z_Registration_Info_UClass_UVoxelFlattenTool.InnerSingleton;
}
UClass* Z_Construct_UClass_UVoxelFlattenTool_NoRegister()
{
	return UVoxelFlattenTool::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UVoxelFlattenTool_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "VoxelTools/Tools/VoxelFlattenTool.h" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelFlattenTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ToolMaterial_MetaData[] = {
		{ "Category", "Tool Preview Settings" },
		{ "HideInPanel", "" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelFlattenTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Strength_MetaData[] = {
		{ "Category", "Tool Settings" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelFlattenTool.h" },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bFreezeOnClick_MetaData[] = {
		{ "Category", "Tool Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// If true, the plane used for flatten will be the same while clicking\n" },
#endif
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelFlattenTool.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If true, the plane used for flatten will be the same while clicking" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseAverage_MetaData[] = {
		{ "Category", "Tool Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Use Average Position & Normal\n// If true, use linetraces to find average position/normal under the cursor\n// If false, use a single linetrace from the cursor\n" },
#endif
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelFlattenTool.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Use Average Position & Normal\nIf true, use linetraces to find average position/normal under the cursor\nIf false, use a single linetrace from the cursor" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseFixedRotation_MetaData[] = {
		{ "Category", "Tool Settings" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelFlattenTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FixedRotation_MetaData[] = {
		{ "Category", "Tool Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Override the normal by a fixed rotation\n// The rotation is apply to Up Vector to find the plane normal\n" },
#endif
		{ "EditCondition", "bUseFixedRotation" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelFlattenTool.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Override the normal by a fixed rotation\nThe rotation is apply to Up Vector to find the plane normal" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPropagateMaterials_MetaData[] = {
		{ "Category", "Tool Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// If true, will propagate materials so that the surface stays correctly painted. Expensive.\n" },
#endif
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelFlattenTool.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If true, will propagate materials so that the surface stays correctly painted. Expensive." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableFalloff_MetaData[] = {
		{ "Category", "Falloff" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelFlattenTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FalloffType_MetaData[] = {
		{ "Category", "Falloff" },
		{ "EditCondition", "bEnableFalloff" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelFlattenTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Falloff_MetaData[] = {
		{ "Category", "Falloff" },
		{ "EditCondition", "bEnableFalloff" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelFlattenTool.h" },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ToolMaterial;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Strength;
	static void NewProp_bFreezeOnClick_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFreezeOnClick;
	static void NewProp_bUseAverage_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseAverage;
	static void NewProp_bUseFixedRotation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseFixedRotation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FixedRotation;
	static void NewProp_bPropagateMaterials_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPropagateMaterials;
	static void NewProp_bEnableFalloff_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableFalloff;
	static const UECodeGen_Private::FBytePropertyParams NewProp_FalloffType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_FalloffType;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Falloff;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelFlattenTool>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVoxelFlattenTool_Statics::NewProp_ToolMaterial = { "ToolMaterial", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelFlattenTool, ToolMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ToolMaterial_MetaData), NewProp_ToolMaterial_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVoxelFlattenTool_Statics::NewProp_Strength = { "Strength", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelFlattenTool, Strength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Strength_MetaData), NewProp_Strength_MetaData) };
void Z_Construct_UClass_UVoxelFlattenTool_Statics::NewProp_bFreezeOnClick_SetBit(void* Obj)
{
	((UVoxelFlattenTool*)Obj)->bFreezeOnClick = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVoxelFlattenTool_Statics::NewProp_bFreezeOnClick = { "bFreezeOnClick", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UVoxelFlattenTool), &Z_Construct_UClass_UVoxelFlattenTool_Statics::NewProp_bFreezeOnClick_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bFreezeOnClick_MetaData), NewProp_bFreezeOnClick_MetaData) };
void Z_Construct_UClass_UVoxelFlattenTool_Statics::NewProp_bUseAverage_SetBit(void* Obj)
{
	((UVoxelFlattenTool*)Obj)->bUseAverage = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVoxelFlattenTool_Statics::NewProp_bUseAverage = { "bUseAverage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UVoxelFlattenTool), &Z_Construct_UClass_UVoxelFlattenTool_Statics::NewProp_bUseAverage_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseAverage_MetaData), NewProp_bUseAverage_MetaData) };
void Z_Construct_UClass_UVoxelFlattenTool_Statics::NewProp_bUseFixedRotation_SetBit(void* Obj)
{
	((UVoxelFlattenTool*)Obj)->bUseFixedRotation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVoxelFlattenTool_Statics::NewProp_bUseFixedRotation = { "bUseFixedRotation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UVoxelFlattenTool), &Z_Construct_UClass_UVoxelFlattenTool_Statics::NewProp_bUseFixedRotation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseFixedRotation_MetaData), NewProp_bUseFixedRotation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVoxelFlattenTool_Statics::NewProp_FixedRotation = { "FixedRotation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelFlattenTool, FixedRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FixedRotation_MetaData), NewProp_FixedRotation_MetaData) };
void Z_Construct_UClass_UVoxelFlattenTool_Statics::NewProp_bPropagateMaterials_SetBit(void* Obj)
{
	((UVoxelFlattenTool*)Obj)->bPropagateMaterials = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVoxelFlattenTool_Statics::NewProp_bPropagateMaterials = { "bPropagateMaterials", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UVoxelFlattenTool), &Z_Construct_UClass_UVoxelFlattenTool_Statics::NewProp_bPropagateMaterials_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPropagateMaterials_MetaData), NewProp_bPropagateMaterials_MetaData) };
void Z_Construct_UClass_UVoxelFlattenTool_Statics::NewProp_bEnableFalloff_SetBit(void* Obj)
{
	((UVoxelFlattenTool*)Obj)->bEnableFalloff = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVoxelFlattenTool_Statics::NewProp_bEnableFalloff = { "bEnableFalloff", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UVoxelFlattenTool), &Z_Construct_UClass_UVoxelFlattenTool_Statics::NewProp_bEnableFalloff_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableFalloff_MetaData), NewProp_bEnableFalloff_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UVoxelFlattenTool_Statics::NewProp_FalloffType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UVoxelFlattenTool_Statics::NewProp_FalloffType = { "FalloffType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelFlattenTool, FalloffType), Z_Construct_UEnum_Voxel_EVoxelFalloff, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FalloffType_MetaData), NewProp_FalloffType_MetaData) }; // 103099151
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVoxelFlattenTool_Statics::NewProp_Falloff = { "Falloff", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelFlattenTool, Falloff), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Falloff_MetaData), NewProp_Falloff_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelFlattenTool_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelFlattenTool_Statics::NewProp_ToolMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelFlattenTool_Statics::NewProp_Strength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelFlattenTool_Statics::NewProp_bFreezeOnClick,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelFlattenTool_Statics::NewProp_bUseAverage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelFlattenTool_Statics::NewProp_bUseFixedRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelFlattenTool_Statics::NewProp_FixedRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelFlattenTool_Statics::NewProp_bPropagateMaterials,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelFlattenTool_Statics::NewProp_bEnableFalloff,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelFlattenTool_Statics::NewProp_FalloffType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelFlattenTool_Statics::NewProp_FalloffType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelFlattenTool_Statics::NewProp_Falloff,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelFlattenTool_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UVoxelFlattenTool_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UVoxelToolBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelFlattenTool_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelFlattenTool_Statics::ClassParams = {
	&UVoxelFlattenTool::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UVoxelFlattenTool_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelFlattenTool_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelFlattenTool_Statics::Class_MetaDataParams), Z_Construct_UClass_UVoxelFlattenTool_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVoxelFlattenTool()
{
	if (!Z_Registration_Info_UClass_UVoxelFlattenTool.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelFlattenTool.OuterSingleton, Z_Construct_UClass_UVoxelFlattenTool_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVoxelFlattenTool.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelFlattenTool);
UVoxelFlattenTool::~UVoxelFlattenTool() {}
// ********** End Class UVoxelFlattenTool **********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelTools_Tools_VoxelFlattenTool_h__Script_Voxel_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UVoxelFlattenTool, UVoxelFlattenTool::StaticClass, TEXT("UVoxelFlattenTool"), &Z_Registration_Info_UClass_UVoxelFlattenTool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelFlattenTool), 1285118336U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelTools_Tools_VoxelFlattenTool_h__Script_Voxel_3384975306(TEXT("/Script/Voxel"),
	Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelTools_Tools_VoxelFlattenTool_h__Script_Voxel_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelTools_Tools_VoxelFlattenTool_h__Script_Voxel_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
