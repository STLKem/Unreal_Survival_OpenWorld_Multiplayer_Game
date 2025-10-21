// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Voxel/Public/VoxelTools/Tools/VoxelToolBase.h"
#include "Voxel/Public/VoxelIntBox.h"
#include "Voxel/Public/VoxelTools/Tools/VoxelTool.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeVoxelToolBase() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBox();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
UPackage* Z_Construct_UPackage__Script_Voxel();
VOXEL_API UClass* Z_Construct_UClass_AVoxelWorld_NoRegister();
VOXEL_API UClass* Z_Construct_UClass_UVoxelTool();
VOXEL_API UClass* Z_Construct_UClass_UVoxelToolBase();
VOXEL_API UClass* Z_Construct_UClass_UVoxelToolBase_NoRegister();
VOXEL_API UEnum* Z_Construct_UEnum_Voxel_EVoxelToolAlignment();
VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelIntBox();
VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelIntBoxWithValidity();
VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelToolBaseConfig();
VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelToolTickData();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EVoxelToolAlignment *******************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EVoxelToolAlignment;
static UEnum* EVoxelToolAlignment_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EVoxelToolAlignment.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EVoxelToolAlignment.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Voxel_EVoxelToolAlignment, (UObject*)Z_Construct_UPackage__Script_Voxel(), TEXT("EVoxelToolAlignment"));
	}
	return Z_Registration_Info_UEnum_EVoxelToolAlignment.OuterSingleton;
}
template<> VOXEL_API UEnum* StaticEnum<EVoxelToolAlignment>()
{
	return EVoxelToolAlignment_StaticEnum();
}
struct Z_Construct_UEnum_Voxel_EVoxelToolAlignment_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Ground.Comment", "// Align with XY plane\n" },
		{ "Ground.Name", "EVoxelToolAlignment::Ground" },
		{ "Ground.ToolTip", "Align with XY plane" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelToolBase.h" },
		{ "Surface.Comment", "// The tool follow the surface. The surface is frozen until the next click.\n" },
		{ "Surface.Name", "EVoxelToolAlignment::Surface" },
		{ "Surface.ToolTip", "The tool follow the surface. The surface is frozen until the next click." },
		{ "Up.Comment", "// Align with the camera view plane, with the Z component zeroed out\n" },
		{ "Up.Name", "EVoxelToolAlignment::Up" },
		{ "Up.ToolTip", "Align with the camera view plane, with the Z component zeroed out" },
		{ "View.Comment", "// Align with the camera view plane\n" },
		{ "View.Name", "EVoxelToolAlignment::View" },
		{ "View.ToolTip", "Align with the camera view plane" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EVoxelToolAlignment::Surface", (int64)EVoxelToolAlignment::Surface },
		{ "EVoxelToolAlignment::View", (int64)EVoxelToolAlignment::View },
		{ "EVoxelToolAlignment::Ground", (int64)EVoxelToolAlignment::Ground },
		{ "EVoxelToolAlignment::Up", (int64)EVoxelToolAlignment::Up },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Voxel_EVoxelToolAlignment_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Voxel,
	nullptr,
	"EVoxelToolAlignment",
	"EVoxelToolAlignment",
	Z_Construct_UEnum_Voxel_EVoxelToolAlignment_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Voxel_EVoxelToolAlignment_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Voxel_EVoxelToolAlignment_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Voxel_EVoxelToolAlignment_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Voxel_EVoxelToolAlignment()
{
	if (!Z_Registration_Info_UEnum_EVoxelToolAlignment.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EVoxelToolAlignment.InnerSingleton, Z_Construct_UEnum_Voxel_EVoxelToolAlignment_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EVoxelToolAlignment.InnerSingleton;
}
// ********** End Enum EVoxelToolAlignment *********************************************************

// ********** Begin ScriptStruct FVoxelToolBaseConfig **********************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FVoxelToolBaseConfig;
class UScriptStruct* FVoxelToolBaseConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FVoxelToolBaseConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FVoxelToolBaseConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVoxelToolBaseConfig, (UObject*)Z_Construct_UPackage__Script_Voxel(), TEXT("VoxelToolBaseConfig"));
	}
	return Z_Registration_Info_UScriptStruct_FVoxelToolBaseConfig.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FVoxelToolBaseConfig_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelToolBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlayMaterial_MetaData[] = {
		{ "Category", "Materials" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelToolBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeshMaterial_MetaData[] = {
		{ "Category", "Materials" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelToolBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Stride_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "// Set to 0 to disable\n" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelToolBase.h" },
		{ "ToolTip", "Set to 0 to disable" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseFixedDirection_MetaData[] = {
		{ "Category", "Direction" },
		{ "Comment", "// If false will align to movement\n" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelToolBase.h" },
		{ "ToolTip", "If false will align to movement" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FixedDirection_MetaData[] = {
		{ "Category", "Direction" },
		{ "Comment", "// If bUseFixedDirection = true\n" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelToolBase.h" },
		{ "ToolTip", "If bUseFixedDirection = true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseFixedNormal_MetaData[] = {
		{ "Category", "Normal" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelToolBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FixedNormal_MetaData[] = {
		{ "Category", "Normal" },
		{ "Comment", "// If UseFixedNormal = true\n" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelToolBase.h" },
		{ "ToolTip", "If UseFixedNormal = true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHasAlignment_MetaData[] = {
		{ "Category", "Aligment" },
		{ "Comment", "// Whether this tool has an alignment setting\n" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelToolBase.h" },
		{ "ToolTip", "Whether this tool has an alignment setting" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Alignment_MetaData[] = {
		{ "Category", "Aligment" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelToolBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAirMode_MetaData[] = {
		{ "Category", "Aligment" },
		{ "Comment", "// If Alignment != Surface\n" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelToolBase.h" },
		{ "ToolTip", "If Alignment != Surface" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DistanceToCamera_MetaData[] = {
		{ "Category", "Aligment" },
		{ "Comment", "// If Alignment != Surface and AirMode = true\n" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelToolBase.h" },
		{ "ToolTip", "If Alignment != Surface and AirMode = true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShowPlanePreview_MetaData[] = {
		{ "Category", "Aligment" },
		{ "Comment", "// If Alignment != Surface\n" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelToolBase.h" },
		{ "ToolTip", "If Alignment != Surface" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlayMaterial;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MeshMaterial;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Stride;
	static void NewProp_bUseFixedDirection_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseFixedDirection;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FixedDirection;
	static void NewProp_bUseFixedNormal_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseFixedNormal;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FixedNormal;
	static void NewProp_bHasAlignment_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasAlignment;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Alignment_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Alignment;
	static void NewProp_bAirMode_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAirMode;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DistanceToCamera;
	static void NewProp_bShowPlanePreview_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowPlanePreview;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVoxelToolBaseConfig>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FVoxelToolBaseConfig_Statics::NewProp_OverlayMaterial = { "OverlayMaterial", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVoxelToolBaseConfig, OverlayMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlayMaterial_MetaData), NewProp_OverlayMaterial_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FVoxelToolBaseConfig_Statics::NewProp_MeshMaterial = { "MeshMaterial", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVoxelToolBaseConfig, MeshMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshMaterial_MetaData), NewProp_MeshMaterial_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVoxelToolBaseConfig_Statics::NewProp_Stride = { "Stride", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVoxelToolBaseConfig, Stride), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Stride_MetaData), NewProp_Stride_MetaData) };
void Z_Construct_UScriptStruct_FVoxelToolBaseConfig_Statics::NewProp_bUseFixedDirection_SetBit(void* Obj)
{
	((FVoxelToolBaseConfig*)Obj)->bUseFixedDirection = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVoxelToolBaseConfig_Statics::NewProp_bUseFixedDirection = { "bUseFixedDirection", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FVoxelToolBaseConfig), &Z_Construct_UScriptStruct_FVoxelToolBaseConfig_Statics::NewProp_bUseFixedDirection_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseFixedDirection_MetaData), NewProp_bUseFixedDirection_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVoxelToolBaseConfig_Statics::NewProp_FixedDirection = { "FixedDirection", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVoxelToolBaseConfig, FixedDirection), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FixedDirection_MetaData), NewProp_FixedDirection_MetaData) };
void Z_Construct_UScriptStruct_FVoxelToolBaseConfig_Statics::NewProp_bUseFixedNormal_SetBit(void* Obj)
{
	((FVoxelToolBaseConfig*)Obj)->bUseFixedNormal = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVoxelToolBaseConfig_Statics::NewProp_bUseFixedNormal = { "bUseFixedNormal", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FVoxelToolBaseConfig), &Z_Construct_UScriptStruct_FVoxelToolBaseConfig_Statics::NewProp_bUseFixedNormal_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseFixedNormal_MetaData), NewProp_bUseFixedNormal_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVoxelToolBaseConfig_Statics::NewProp_FixedNormal = { "FixedNormal", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVoxelToolBaseConfig, FixedNormal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FixedNormal_MetaData), NewProp_FixedNormal_MetaData) };
void Z_Construct_UScriptStruct_FVoxelToolBaseConfig_Statics::NewProp_bHasAlignment_SetBit(void* Obj)
{
	((FVoxelToolBaseConfig*)Obj)->bHasAlignment = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVoxelToolBaseConfig_Statics::NewProp_bHasAlignment = { "bHasAlignment", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FVoxelToolBaseConfig), &Z_Construct_UScriptStruct_FVoxelToolBaseConfig_Statics::NewProp_bHasAlignment_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHasAlignment_MetaData), NewProp_bHasAlignment_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FVoxelToolBaseConfig_Statics::NewProp_Alignment_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FVoxelToolBaseConfig_Statics::NewProp_Alignment = { "Alignment", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVoxelToolBaseConfig, Alignment), Z_Construct_UEnum_Voxel_EVoxelToolAlignment, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Alignment_MetaData), NewProp_Alignment_MetaData) }; // 239877237
void Z_Construct_UScriptStruct_FVoxelToolBaseConfig_Statics::NewProp_bAirMode_SetBit(void* Obj)
{
	((FVoxelToolBaseConfig*)Obj)->bAirMode = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVoxelToolBaseConfig_Statics::NewProp_bAirMode = { "bAirMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FVoxelToolBaseConfig), &Z_Construct_UScriptStruct_FVoxelToolBaseConfig_Statics::NewProp_bAirMode_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAirMode_MetaData), NewProp_bAirMode_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVoxelToolBaseConfig_Statics::NewProp_DistanceToCamera = { "DistanceToCamera", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVoxelToolBaseConfig, DistanceToCamera), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DistanceToCamera_MetaData), NewProp_DistanceToCamera_MetaData) };
void Z_Construct_UScriptStruct_FVoxelToolBaseConfig_Statics::NewProp_bShowPlanePreview_SetBit(void* Obj)
{
	((FVoxelToolBaseConfig*)Obj)->bShowPlanePreview = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVoxelToolBaseConfig_Statics::NewProp_bShowPlanePreview = { "bShowPlanePreview", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FVoxelToolBaseConfig), &Z_Construct_UScriptStruct_FVoxelToolBaseConfig_Statics::NewProp_bShowPlanePreview_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShowPlanePreview_MetaData), NewProp_bShowPlanePreview_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVoxelToolBaseConfig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelToolBaseConfig_Statics::NewProp_OverlayMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelToolBaseConfig_Statics::NewProp_MeshMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelToolBaseConfig_Statics::NewProp_Stride,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelToolBaseConfig_Statics::NewProp_bUseFixedDirection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelToolBaseConfig_Statics::NewProp_FixedDirection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelToolBaseConfig_Statics::NewProp_bUseFixedNormal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelToolBaseConfig_Statics::NewProp_FixedNormal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelToolBaseConfig_Statics::NewProp_bHasAlignment,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelToolBaseConfig_Statics::NewProp_Alignment_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelToolBaseConfig_Statics::NewProp_Alignment,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelToolBaseConfig_Statics::NewProp_bAirMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelToolBaseConfig_Statics::NewProp_DistanceToCamera,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelToolBaseConfig_Statics::NewProp_bShowPlanePreview,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelToolBaseConfig_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVoxelToolBaseConfig_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
	nullptr,
	&NewStructOps,
	"VoxelToolBaseConfig",
	Z_Construct_UScriptStruct_FVoxelToolBaseConfig_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelToolBaseConfig_Statics::PropPointers),
	sizeof(FVoxelToolBaseConfig),
	alignof(FVoxelToolBaseConfig),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelToolBaseConfig_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVoxelToolBaseConfig_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FVoxelToolBaseConfig()
{
	if (!Z_Registration_Info_UScriptStruct_FVoxelToolBaseConfig.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FVoxelToolBaseConfig.InnerSingleton, Z_Construct_UScriptStruct_FVoxelToolBaseConfig_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FVoxelToolBaseConfig.InnerSingleton;
}
// ********** End ScriptStruct FVoxelToolBaseConfig ************************************************

// ********** Begin Class UVoxelToolBase Function CanEdit ******************************************
struct Z_Construct_UFunction_UVoxelToolBase_CanEdit_Statics
{
	struct VoxelToolBase_eventCanEdit_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Tool" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelToolBase.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UVoxelToolBase_CanEdit_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((VoxelToolBase_eventCanEdit_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelToolBase_CanEdit_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VoxelToolBase_eventCanEdit_Parms), &Z_Construct_UFunction_UVoxelToolBase_CanEdit_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelToolBase_CanEdit_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelToolBase_CanEdit_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelToolBase_CanEdit_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelToolBase_CanEdit_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelToolBase, nullptr, "CanEdit", Z_Construct_UFunction_UVoxelToolBase_CanEdit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelToolBase_CanEdit_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVoxelToolBase_CanEdit_Statics::VoxelToolBase_eventCanEdit_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelToolBase_CanEdit_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelToolBase_CanEdit_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVoxelToolBase_CanEdit_Statics::VoxelToolBase_eventCanEdit_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVoxelToolBase_CanEdit()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelToolBase_CanEdit_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelToolBase::execCanEdit)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CanEdit();
	P_NATIVE_END;
}
// ********** End Class UVoxelToolBase Function CanEdit ********************************************

// ********** Begin Class UVoxelToolBase Function GetBoundsToCache *********************************
struct Z_Construct_UFunction_UVoxelToolBase_GetBoundsToCache_Statics
{
	struct VoxelToolBase_eventGetBoundsToCache_Parms
	{
		FVoxelIntBox Bounds;
		FVoxelIntBox ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Tool" },
		{ "Comment", "// Will also debug them\n" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelToolBase.h" },
		{ "ToolTip", "Will also debug them" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Bounds_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Bounds;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelToolBase_GetBoundsToCache_Statics::NewProp_Bounds = { "Bounds", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelToolBase_eventGetBoundsToCache_Parms, Bounds), Z_Construct_UScriptStruct_FVoxelIntBox, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Bounds_MetaData), NewProp_Bounds_MetaData) }; // 3008064533
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelToolBase_GetBoundsToCache_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelToolBase_eventGetBoundsToCache_Parms, ReturnValue), Z_Construct_UScriptStruct_FVoxelIntBox, METADATA_PARAMS(0, nullptr) }; // 3008064533
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelToolBase_GetBoundsToCache_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelToolBase_GetBoundsToCache_Statics::NewProp_Bounds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelToolBase_GetBoundsToCache_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelToolBase_GetBoundsToCache_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelToolBase_GetBoundsToCache_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelToolBase, nullptr, "GetBoundsToCache", Z_Construct_UFunction_UVoxelToolBase_GetBoundsToCache_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelToolBase_GetBoundsToCache_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVoxelToolBase_GetBoundsToCache_Statics::VoxelToolBase_eventGetBoundsToCache_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelToolBase_GetBoundsToCache_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelToolBase_GetBoundsToCache_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVoxelToolBase_GetBoundsToCache_Statics::VoxelToolBase_eventGetBoundsToCache_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVoxelToolBase_GetBoundsToCache()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelToolBase_GetBoundsToCache_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelToolBase::execGetBoundsToCache)
{
	P_GET_STRUCT_REF(FVoxelIntBox,Z_Param_Out_Bounds);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVoxelIntBox*)Z_Param__Result=P_THIS->GetBoundsToCache(Z_Param_Out_Bounds);
	P_NATIVE_END;
}
// ********** End Class UVoxelToolBase Function GetBoundsToCache ***********************************

// ********** Begin Class UVoxelToolBase Function GetDeltaTime *************************************
struct Z_Construct_UFunction_UVoxelToolBase_GetDeltaTime_Statics
{
	struct VoxelToolBase_eventGetDeltaTime_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Tool" },
		{ "Comment", "// Delta time accounting for the skipped frame waiting for updates\n" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelToolBase.h" },
		{ "ToolTip", "Delta time accounting for the skipped frame waiting for updates" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoxelToolBase_GetDeltaTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelToolBase_eventGetDeltaTime_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelToolBase_GetDeltaTime_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelToolBase_GetDeltaTime_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelToolBase_GetDeltaTime_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelToolBase_GetDeltaTime_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelToolBase, nullptr, "GetDeltaTime", Z_Construct_UFunction_UVoxelToolBase_GetDeltaTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelToolBase_GetDeltaTime_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVoxelToolBase_GetDeltaTime_Statics::VoxelToolBase_eventGetDeltaTime_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelToolBase_GetDeltaTime_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelToolBase_GetDeltaTime_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVoxelToolBase_GetDeltaTime_Statics::VoxelToolBase_eventGetDeltaTime_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVoxelToolBase_GetDeltaTime()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelToolBase_GetDeltaTime_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelToolBase::execGetDeltaTime)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetDeltaTime();
	P_NATIVE_END;
}
// ********** End Class UVoxelToolBase Function GetDeltaTime ***************************************

// ********** Begin Class UVoxelToolBase Function GetLastFrameTickData *****************************
struct Z_Construct_UFunction_UVoxelToolBase_GetLastFrameTickData_Statics
{
	struct VoxelToolBase_eventGetLastFrameTickData_Parms
	{
		FVoxelToolTickData ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Tool" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelToolBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelToolBase_GetLastFrameTickData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelToolBase_eventGetLastFrameTickData_Parms, ReturnValue), Z_Construct_UScriptStruct_FVoxelToolTickData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) }; // 3851510337
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelToolBase_GetLastFrameTickData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelToolBase_GetLastFrameTickData_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelToolBase_GetLastFrameTickData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelToolBase_GetLastFrameTickData_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelToolBase, nullptr, "GetLastFrameTickData", Z_Construct_UFunction_UVoxelToolBase_GetLastFrameTickData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelToolBase_GetLastFrameTickData_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVoxelToolBase_GetLastFrameTickData_Statics::VoxelToolBase_eventGetLastFrameTickData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelToolBase_GetLastFrameTickData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelToolBase_GetLastFrameTickData_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVoxelToolBase_GetLastFrameTickData_Statics::VoxelToolBase_eventGetLastFrameTickData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVoxelToolBase_GetLastFrameTickData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelToolBase_GetLastFrameTickData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelToolBase::execGetLastFrameTickData)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVoxelToolTickData*)Z_Param__Result=P_THIS->GetLastFrameTickData();
	P_NATIVE_END;
}
// ********** End Class UVoxelToolBase Function GetLastFrameTickData *******************************

// ********** Begin Class UVoxelToolBase Function GetMouseMovementSize *****************************
struct Z_Construct_UFunction_UVoxelToolBase_GetMouseMovementSize_Statics
{
	struct VoxelToolBase_eventGetMouseMovementSize_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Tool" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelToolBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoxelToolBase_GetMouseMovementSize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelToolBase_eventGetMouseMovementSize_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelToolBase_GetMouseMovementSize_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelToolBase_GetMouseMovementSize_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelToolBase_GetMouseMovementSize_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelToolBase_GetMouseMovementSize_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelToolBase, nullptr, "GetMouseMovementSize", Z_Construct_UFunction_UVoxelToolBase_GetMouseMovementSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelToolBase_GetMouseMovementSize_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVoxelToolBase_GetMouseMovementSize_Statics::VoxelToolBase_eventGetMouseMovementSize_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelToolBase_GetMouseMovementSize_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelToolBase_GetMouseMovementSize_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVoxelToolBase_GetMouseMovementSize_Statics::VoxelToolBase_eventGetMouseMovementSize_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVoxelToolBase_GetMouseMovementSize()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelToolBase_GetMouseMovementSize_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelToolBase::execGetMouseMovementSize)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetMouseMovementSize();
	P_NATIVE_END;
}
// ********** End Class UVoxelToolBase Function GetMouseMovementSize *******************************

// ********** Begin Class UVoxelToolBase Function GetTickData **************************************
struct Z_Construct_UFunction_UVoxelToolBase_GetTickData_Statics
{
	struct VoxelToolBase_eventGetTickData_Parms
	{
		FVoxelToolTickData ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Tool" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelToolBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelToolBase_GetTickData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelToolBase_eventGetTickData_Parms, ReturnValue), Z_Construct_UScriptStruct_FVoxelToolTickData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) }; // 3851510337
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelToolBase_GetTickData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelToolBase_GetTickData_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelToolBase_GetTickData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelToolBase_GetTickData_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelToolBase, nullptr, "GetTickData", Z_Construct_UFunction_UVoxelToolBase_GetTickData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelToolBase_GetTickData_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVoxelToolBase_GetTickData_Statics::VoxelToolBase_eventGetTickData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelToolBase_GetTickData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelToolBase_GetTickData_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVoxelToolBase_GetTickData_Statics::VoxelToolBase_eventGetTickData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVoxelToolBase_GetTickData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelToolBase_GetTickData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelToolBase::execGetTickData)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVoxelToolTickData*)Z_Param__Result=P_THIS->GetTickData();
	P_NATIVE_END;
}
// ********** End Class UVoxelToolBase Function GetTickData ****************************************

// ********** Begin Class UVoxelToolBase Function GetToolDirection *********************************
struct Z_Construct_UFunction_UVoxelToolBase_GetToolDirection_Statics
{
	struct VoxelToolBase_eventGetToolDirection_Parms
	{
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Tool|Transform" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelToolBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelToolBase_GetToolDirection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelToolBase_eventGetToolDirection_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelToolBase_GetToolDirection_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelToolBase_GetToolDirection_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelToolBase_GetToolDirection_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelToolBase_GetToolDirection_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelToolBase, nullptr, "GetToolDirection", Z_Construct_UFunction_UVoxelToolBase_GetToolDirection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelToolBase_GetToolDirection_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVoxelToolBase_GetToolDirection_Statics::VoxelToolBase_eventGetToolDirection_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelToolBase_GetToolDirection_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelToolBase_GetToolDirection_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVoxelToolBase_GetToolDirection_Statics::VoxelToolBase_eventGetToolDirection_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVoxelToolBase_GetToolDirection()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelToolBase_GetToolDirection_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelToolBase::execGetToolDirection)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=P_THIS->GetToolDirection();
	P_NATIVE_END;
}
// ********** End Class UVoxelToolBase Function GetToolDirection ***********************************

// ********** Begin Class UVoxelToolBase Function GetToolNormal ************************************
struct Z_Construct_UFunction_UVoxelToolBase_GetToolNormal_Statics
{
	struct VoxelToolBase_eventGetToolNormal_Parms
	{
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Tool|Transform" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelToolBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelToolBase_GetToolNormal_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelToolBase_eventGetToolNormal_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelToolBase_GetToolNormal_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelToolBase_GetToolNormal_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelToolBase_GetToolNormal_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelToolBase_GetToolNormal_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelToolBase, nullptr, "GetToolNormal", Z_Construct_UFunction_UVoxelToolBase_GetToolNormal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelToolBase_GetToolNormal_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVoxelToolBase_GetToolNormal_Statics::VoxelToolBase_eventGetToolNormal_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelToolBase_GetToolNormal_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelToolBase_GetToolNormal_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVoxelToolBase_GetToolNormal_Statics::VoxelToolBase_eventGetToolNormal_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVoxelToolBase_GetToolNormal()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelToolBase_GetToolNormal_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelToolBase::execGetToolNormal)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=P_THIS->GetToolNormal();
	P_NATIVE_END;
}
// ********** End Class UVoxelToolBase Function GetToolNormal **************************************

// ********** Begin Class UVoxelToolBase Function GetToolPosition **********************************
struct Z_Construct_UFunction_UVoxelToolBase_GetToolPosition_Statics
{
	struct VoxelToolBase_eventGetToolPosition_Parms
	{
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Tool|Transform" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelToolBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelToolBase_GetToolPosition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelToolBase_eventGetToolPosition_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelToolBase_GetToolPosition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelToolBase_GetToolPosition_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelToolBase_GetToolPosition_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelToolBase_GetToolPosition_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelToolBase, nullptr, "GetToolPosition", Z_Construct_UFunction_UVoxelToolBase_GetToolPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelToolBase_GetToolPosition_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVoxelToolBase_GetToolPosition_Statics::VoxelToolBase_eventGetToolPosition_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelToolBase_GetToolPosition_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelToolBase_GetToolPosition_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVoxelToolBase_GetToolPosition_Statics::VoxelToolBase_eventGetToolPosition_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVoxelToolBase_GetToolPosition()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelToolBase_GetToolPosition_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelToolBase::execGetToolPosition)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=P_THIS->GetToolPosition();
	P_NATIVE_END;
}
// ********** End Class UVoxelToolBase Function GetToolPosition ************************************

// ********** Begin Class UVoxelToolBase Function GetToolPreviewPosition ***************************
struct Z_Construct_UFunction_UVoxelToolBase_GetToolPreviewPosition_Statics
{
	struct VoxelToolBase_eventGetToolPreviewPosition_Parms
	{
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Tool|Transform" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelToolBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelToolBase_GetToolPreviewPosition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelToolBase_eventGetToolPreviewPosition_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelToolBase_GetToolPreviewPosition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelToolBase_GetToolPreviewPosition_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelToolBase_GetToolPreviewPosition_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelToolBase_GetToolPreviewPosition_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelToolBase, nullptr, "GetToolPreviewPosition", Z_Construct_UFunction_UVoxelToolBase_GetToolPreviewPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelToolBase_GetToolPreviewPosition_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVoxelToolBase_GetToolPreviewPosition_Statics::VoxelToolBase_eventGetToolPreviewPosition_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelToolBase_GetToolPreviewPosition_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelToolBase_GetToolPreviewPosition_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVoxelToolBase_GetToolPreviewPosition_Statics::VoxelToolBase_eventGetToolPreviewPosition_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVoxelToolBase_GetToolPreviewPosition()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelToolBase_GetToolPreviewPosition_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelToolBase::execGetToolPreviewPosition)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=P_THIS->GetToolPreviewPosition();
	P_NATIVE_END;
}
// ********** End Class UVoxelToolBase Function GetToolPreviewPosition *****************************

// ********** Begin Class UVoxelToolBase Function GetValueAfterAxisInput ***************************
struct Z_Construct_UFunction_UVoxelToolBase_GetValueAfterAxisInput_Statics
{
	struct VoxelToolBase_eventGetValueAfterAxisInput_Parms
	{
		FName AxisName;
		float CurrentValue;
		float Min;
		float Max;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Tool" },
		{ "CPP_Default_Max", "1.000000" },
		{ "CPP_Default_Min", "0.000000" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelToolBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_AxisName;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentValue;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Min;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Max;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UVoxelToolBase_GetValueAfterAxisInput_Statics::NewProp_AxisName = { "AxisName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelToolBase_eventGetValueAfterAxisInput_Parms, AxisName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoxelToolBase_GetValueAfterAxisInput_Statics::NewProp_CurrentValue = { "CurrentValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelToolBase_eventGetValueAfterAxisInput_Parms, CurrentValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoxelToolBase_GetValueAfterAxisInput_Statics::NewProp_Min = { "Min", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelToolBase_eventGetValueAfterAxisInput_Parms, Min), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoxelToolBase_GetValueAfterAxisInput_Statics::NewProp_Max = { "Max", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelToolBase_eventGetValueAfterAxisInput_Parms, Max), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoxelToolBase_GetValueAfterAxisInput_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelToolBase_eventGetValueAfterAxisInput_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelToolBase_GetValueAfterAxisInput_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelToolBase_GetValueAfterAxisInput_Statics::NewProp_AxisName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelToolBase_GetValueAfterAxisInput_Statics::NewProp_CurrentValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelToolBase_GetValueAfterAxisInput_Statics::NewProp_Min,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelToolBase_GetValueAfterAxisInput_Statics::NewProp_Max,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelToolBase_GetValueAfterAxisInput_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelToolBase_GetValueAfterAxisInput_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelToolBase_GetValueAfterAxisInput_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelToolBase, nullptr, "GetValueAfterAxisInput", Z_Construct_UFunction_UVoxelToolBase_GetValueAfterAxisInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelToolBase_GetValueAfterAxisInput_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVoxelToolBase_GetValueAfterAxisInput_Statics::VoxelToolBase_eventGetValueAfterAxisInput_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelToolBase_GetValueAfterAxisInput_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelToolBase_GetValueAfterAxisInput_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVoxelToolBase_GetValueAfterAxisInput_Statics::VoxelToolBase_eventGetValueAfterAxisInput_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVoxelToolBase_GetValueAfterAxisInput()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelToolBase_GetValueAfterAxisInput_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelToolBase::execGetValueAfterAxisInput)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_AxisName);
	P_GET_PROPERTY(FFloatProperty,Z_Param_CurrentValue);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Min);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Max);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetValueAfterAxisInput(Z_Param_AxisName,Z_Param_CurrentValue,Z_Param_Min,Z_Param_Max);
	P_NATIVE_END;
}
// ********** End Class UVoxelToolBase Function GetValueAfterAxisInput *****************************

// ********** Begin Class UVoxelToolBase Function K2_DoEdit ****************************************
struct VoxelToolBase_eventK2_DoEdit_Parms
{
	FVoxelIntBoxWithValidity ReturnValue;
};
static FName NAME_UVoxelToolBase_K2_DoEdit = FName(TEXT("K2_DoEdit"));
FVoxelIntBoxWithValidity UVoxelToolBase::K2_DoEdit()
{
	UFunction* Func = FindFunctionChecked(NAME_UVoxelToolBase_K2_DoEdit);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		VoxelToolBase_eventK2_DoEdit_Parms Parms;
	ProcessEvent(Func,&Parms);
		return Parms.ReturnValue;
	}
	else
	{
		return K2_DoEdit_Implementation();
	}
}
struct Z_Construct_UFunction_UVoxelToolBase_K2_DoEdit_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "// Returned bounds will be updated & SaveFrame called on them, as well as RegenerateSpawners if enabled\n// Tick will always be called before\n" },
		{ "DisplayName", "DoEdit" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelToolBase.h" },
		{ "ToolTip", "Returned bounds will be updated & SaveFrame called on them, as well as RegenerateSpawners if enabled\nTick will always be called before" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelToolBase_K2_DoEdit_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelToolBase_eventK2_DoEdit_Parms, ReturnValue), Z_Construct_UScriptStruct_FVoxelIntBoxWithValidity, METADATA_PARAMS(0, nullptr) }; // 367286648
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelToolBase_K2_DoEdit_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelToolBase_K2_DoEdit_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelToolBase_K2_DoEdit_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelToolBase_K2_DoEdit_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelToolBase, nullptr, "K2_DoEdit", Z_Construct_UFunction_UVoxelToolBase_K2_DoEdit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelToolBase_K2_DoEdit_Statics::PropPointers), sizeof(VoxelToolBase_eventK2_DoEdit_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelToolBase_K2_DoEdit_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelToolBase_K2_DoEdit_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(VoxelToolBase_eventK2_DoEdit_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVoxelToolBase_K2_DoEdit()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelToolBase_K2_DoEdit_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelToolBase::execK2_DoEdit)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVoxelIntBoxWithValidity*)Z_Param__Result=P_THIS->K2_DoEdit_Implementation();
	P_NATIVE_END;
}
// ********** End Class UVoxelToolBase Function K2_DoEdit ******************************************

// ********** Begin Class UVoxelToolBase Function K2_GetToolConfig *********************************
struct VoxelToolBase_eventK2_GetToolConfig_Parms
{
	FVoxelToolBaseConfig InConfig;
	FVoxelToolBaseConfig OutConfig;
};
static FName NAME_UVoxelToolBase_K2_GetToolConfig = FName(TEXT("K2_GetToolConfig"));
void UVoxelToolBase::K2_GetToolConfig(FVoxelToolBaseConfig InConfig, FVoxelToolBaseConfig& OutConfig) const
{
	UFunction* Func = FindFunctionChecked(NAME_UVoxelToolBase_K2_GetToolConfig);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		VoxelToolBase_eventK2_GetToolConfig_Parms Parms;
		Parms.InConfig=InConfig;
		Parms.OutConfig=OutConfig;
		const_cast<UVoxelToolBase*>(this)->ProcessEvent(Func,&Parms);
		OutConfig=Parms.OutConfig;
	}
	else
	{
		const_cast<UVoxelToolBase*>(this)->K2_GetToolConfig_Implementation(InConfig, OutConfig);
	}
}
struct Z_Construct_UFunction_UVoxelToolBase_K2_GetToolConfig_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "// Called on tick\n" },
		{ "DisplayName", "GetToolConfig" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelToolBase.h" },
		{ "ToolTip", "Called on tick" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InConfig;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutConfig;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelToolBase_K2_GetToolConfig_Statics::NewProp_InConfig = { "InConfig", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelToolBase_eventK2_GetToolConfig_Parms, InConfig), Z_Construct_UScriptStruct_FVoxelToolBaseConfig, METADATA_PARAMS(0, nullptr) }; // 3502902606
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelToolBase_K2_GetToolConfig_Statics::NewProp_OutConfig = { "OutConfig", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelToolBase_eventK2_GetToolConfig_Parms, OutConfig), Z_Construct_UScriptStruct_FVoxelToolBaseConfig, METADATA_PARAMS(0, nullptr) }; // 3502902606
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelToolBase_K2_GetToolConfig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelToolBase_K2_GetToolConfig_Statics::NewProp_InConfig,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelToolBase_K2_GetToolConfig_Statics::NewProp_OutConfig,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelToolBase_K2_GetToolConfig_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelToolBase_K2_GetToolConfig_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelToolBase, nullptr, "K2_GetToolConfig", Z_Construct_UFunction_UVoxelToolBase_K2_GetToolConfig_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelToolBase_K2_GetToolConfig_Statics::PropPointers), sizeof(VoxelToolBase_eventK2_GetToolConfig_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelToolBase_K2_GetToolConfig_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelToolBase_K2_GetToolConfig_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(VoxelToolBase_eventK2_GetToolConfig_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVoxelToolBase_K2_GetToolConfig()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelToolBase_K2_GetToolConfig_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelToolBase::execK2_GetToolConfig)
{
	P_GET_STRUCT(FVoxelToolBaseConfig,Z_Param_InConfig);
	P_GET_STRUCT_REF(FVoxelToolBaseConfig,Z_Param_Out_OutConfig);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->K2_GetToolConfig_Implementation(Z_Param_InConfig,Z_Param_Out_OutConfig);
	P_NATIVE_END;
}
// ********** End Class UVoxelToolBase Function K2_GetToolConfig ***********************************

// ********** Begin Class UVoxelToolBase Function K2_Tick ******************************************
static FName NAME_UVoxelToolBase_K2_Tick = FName(TEXT("K2_Tick"));
void UVoxelToolBase::K2_Tick()
{
	UFunction* Func = FindFunctionChecked(NAME_UVoxelToolBase_K2_Tick);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_UVoxelToolBase_K2_Tick_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "// Called first, before DoEdit and UpdateRender\n// Note: Tick is a BlueprintImplementableEvent. The native Tick will always be called before.\n" },
		{ "DisplayName", "Tick" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelToolBase.h" },
		{ "ToolTip", "Called first, before DoEdit and UpdateRender\nNote: Tick is a BlueprintImplementableEvent. The native Tick will always be called before." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelToolBase_K2_Tick_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelToolBase, nullptr, "K2_Tick", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelToolBase_K2_Tick_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelToolBase_K2_Tick_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UVoxelToolBase_K2_Tick()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelToolBase_K2_Tick_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class UVoxelToolBase Function K2_Tick ********************************************

// ********** Begin Class UVoxelToolBase Function K2_UpdateRender **********************************
struct VoxelToolBase_eventK2_UpdateRender_Parms
{
	UMaterialInstanceDynamic* OverlayMaterialInstance;
	UMaterialInstanceDynamic* MeshMaterialInstance;
};
static FName NAME_UVoxelToolBase_K2_UpdateRender = FName(TEXT("K2_UpdateRender"));
void UVoxelToolBase::K2_UpdateRender(UMaterialInstanceDynamic* OverlayMaterialInstance, UMaterialInstanceDynamic* MeshMaterialInstance)
{
	UFunction* Func = FindFunctionChecked(NAME_UVoxelToolBase_K2_UpdateRender);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		VoxelToolBase_eventK2_UpdateRender_Parms Parms;
		Parms.OverlayMaterialInstance=OverlayMaterialInstance;
		Parms.MeshMaterialInstance=MeshMaterialInstance;
	ProcessEvent(Func,&Parms);
	}
	else
	{
		K2_UpdateRender_Implementation(OverlayMaterialInstance, MeshMaterialInstance);
	}
}
struct Z_Construct_UFunction_UVoxelToolBase_K2_UpdateRender_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "// Might not always be called - if you want to compute things for the frame, use Tick\n" },
		{ "DisplayName", "UpdateRender" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelToolBase.h" },
		{ "ToolTip", "Might not always be called - if you want to compute things for the frame, use Tick" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlayMaterialInstance;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MeshMaterialInstance;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelToolBase_K2_UpdateRender_Statics::NewProp_OverlayMaterialInstance = { "OverlayMaterialInstance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelToolBase_eventK2_UpdateRender_Parms, OverlayMaterialInstance), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelToolBase_K2_UpdateRender_Statics::NewProp_MeshMaterialInstance = { "MeshMaterialInstance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelToolBase_eventK2_UpdateRender_Parms, MeshMaterialInstance), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelToolBase_K2_UpdateRender_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelToolBase_K2_UpdateRender_Statics::NewProp_OverlayMaterialInstance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelToolBase_K2_UpdateRender_Statics::NewProp_MeshMaterialInstance,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelToolBase_K2_UpdateRender_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelToolBase_K2_UpdateRender_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelToolBase, nullptr, "K2_UpdateRender", Z_Construct_UFunction_UVoxelToolBase_K2_UpdateRender_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelToolBase_K2_UpdateRender_Statics::PropPointers), sizeof(VoxelToolBase_eventK2_UpdateRender_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelToolBase_K2_UpdateRender_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelToolBase_K2_UpdateRender_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(VoxelToolBase_eventK2_UpdateRender_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVoxelToolBase_K2_UpdateRender()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelToolBase_K2_UpdateRender_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelToolBase::execK2_UpdateRender)
{
	P_GET_OBJECT(UMaterialInstanceDynamic,Z_Param_OverlayMaterialInstance);
	P_GET_OBJECT(UMaterialInstanceDynamic,Z_Param_MeshMaterialInstance);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->K2_UpdateRender_Implementation(Z_Param_OverlayMaterialInstance,Z_Param_MeshMaterialInstance);
	P_NATIVE_END;
}
// ********** End Class UVoxelToolBase Function K2_UpdateRender ************************************

// ********** Begin Class UVoxelToolBase Function LastFrameCanEdit *********************************
struct Z_Construct_UFunction_UVoxelToolBase_LastFrameCanEdit_Statics
{
	struct VoxelToolBase_eventLastFrameCanEdit_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Tool" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelToolBase.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UVoxelToolBase_LastFrameCanEdit_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((VoxelToolBase_eventLastFrameCanEdit_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelToolBase_LastFrameCanEdit_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VoxelToolBase_eventLastFrameCanEdit_Parms), &Z_Construct_UFunction_UVoxelToolBase_LastFrameCanEdit_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelToolBase_LastFrameCanEdit_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelToolBase_LastFrameCanEdit_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelToolBase_LastFrameCanEdit_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelToolBase_LastFrameCanEdit_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelToolBase, nullptr, "LastFrameCanEdit", Z_Construct_UFunction_UVoxelToolBase_LastFrameCanEdit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelToolBase_LastFrameCanEdit_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVoxelToolBase_LastFrameCanEdit_Statics::VoxelToolBase_eventLastFrameCanEdit_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelToolBase_LastFrameCanEdit_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelToolBase_LastFrameCanEdit_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVoxelToolBase_LastFrameCanEdit_Statics::VoxelToolBase_eventLastFrameCanEdit_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVoxelToolBase_LastFrameCanEdit()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelToolBase_LastFrameCanEdit_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelToolBase::execLastFrameCanEdit)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->LastFrameCanEdit();
	P_NATIVE_END;
}
// ********** End Class UVoxelToolBase Function LastFrameCanEdit ***********************************

// ********** Begin Class UVoxelToolBase Function SetToolOverlayBounds *****************************
struct Z_Construct_UFunction_UVoxelToolBase_SetToolOverlayBounds_Statics
{
	struct VoxelToolBase_eventSetToolOverlayBounds_Parms
	{
		FBox Bounds;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Tool|Render" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelToolBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Bounds_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Bounds;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelToolBase_SetToolOverlayBounds_Statics::NewProp_Bounds = { "Bounds", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelToolBase_eventSetToolOverlayBounds_Parms, Bounds), Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Bounds_MetaData), NewProp_Bounds_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelToolBase_SetToolOverlayBounds_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelToolBase_SetToolOverlayBounds_Statics::NewProp_Bounds,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelToolBase_SetToolOverlayBounds_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelToolBase_SetToolOverlayBounds_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelToolBase, nullptr, "SetToolOverlayBounds", Z_Construct_UFunction_UVoxelToolBase_SetToolOverlayBounds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelToolBase_SetToolOverlayBounds_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVoxelToolBase_SetToolOverlayBounds_Statics::VoxelToolBase_eventSetToolOverlayBounds_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelToolBase_SetToolOverlayBounds_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelToolBase_SetToolOverlayBounds_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVoxelToolBase_SetToolOverlayBounds_Statics::VoxelToolBase_eventSetToolOverlayBounds_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVoxelToolBase_SetToolOverlayBounds()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelToolBase_SetToolOverlayBounds_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelToolBase::execSetToolOverlayBounds)
{
	P_GET_STRUCT_REF(FBox,Z_Param_Out_Bounds);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetToolOverlayBounds(Z_Param_Out_Bounds);
	P_NATIVE_END;
}
// ********** End Class UVoxelToolBase Function SetToolOverlayBounds *******************************

// ********** Begin Class UVoxelToolBase Function UpdateToolMesh ***********************************
struct Z_Construct_UFunction_UVoxelToolBase_UpdateToolMesh_Statics
{
	struct VoxelToolBase_eventUpdateToolMesh_Parms
	{
		UStaticMesh* Mesh;
		UMaterialInterface* Material;
		FTransform Transform;
		FName Id;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Tool|Render" },
		{ "Comment", "// Note: Material will not be updated if the mesh did not change\n" },
		{ "CPP_Default_Id", "None" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelToolBase.h" },
		{ "ToolTip", "Note: Material will not be updated if the mesh did not change" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Transform_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Mesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Material;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Id;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelToolBase_UpdateToolMesh_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelToolBase_eventUpdateToolMesh_Parms, Mesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelToolBase_UpdateToolMesh_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelToolBase_eventUpdateToolMesh_Parms, Material), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelToolBase_UpdateToolMesh_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelToolBase_eventUpdateToolMesh_Parms, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Transform_MetaData), NewProp_Transform_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UVoxelToolBase_UpdateToolMesh_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelToolBase_eventUpdateToolMesh_Parms, Id), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelToolBase_UpdateToolMesh_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelToolBase_UpdateToolMesh_Statics::NewProp_Mesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelToolBase_UpdateToolMesh_Statics::NewProp_Material,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelToolBase_UpdateToolMesh_Statics::NewProp_Transform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelToolBase_UpdateToolMesh_Statics::NewProp_Id,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelToolBase_UpdateToolMesh_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelToolBase_UpdateToolMesh_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelToolBase, nullptr, "UpdateToolMesh", Z_Construct_UFunction_UVoxelToolBase_UpdateToolMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelToolBase_UpdateToolMesh_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVoxelToolBase_UpdateToolMesh_Statics::VoxelToolBase_eventUpdateToolMesh_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelToolBase_UpdateToolMesh_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelToolBase_UpdateToolMesh_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVoxelToolBase_UpdateToolMesh_Statics::VoxelToolBase_eventUpdateToolMesh_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVoxelToolBase_UpdateToolMesh()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelToolBase_UpdateToolMesh_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelToolBase::execUpdateToolMesh)
{
	P_GET_OBJECT(UStaticMesh,Z_Param_Mesh);
	P_GET_OBJECT(UMaterialInterface,Z_Param_Material);
	P_GET_STRUCT_REF(FTransform,Z_Param_Out_Transform);
	P_GET_PROPERTY(FNameProperty,Z_Param_Id);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateToolMesh(Z_Param_Mesh,Z_Param_Material,Z_Param_Out_Transform,Z_Param_Id);
	P_NATIVE_END;
}
// ********** End Class UVoxelToolBase Function UpdateToolMesh *************************************

// ********** Begin Class UVoxelToolBase ***********************************************************
void UVoxelToolBase::StaticRegisterNativesUVoxelToolBase()
{
	UClass* Class = UVoxelToolBase::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CanEdit", &UVoxelToolBase::execCanEdit },
		{ "GetBoundsToCache", &UVoxelToolBase::execGetBoundsToCache },
		{ "GetDeltaTime", &UVoxelToolBase::execGetDeltaTime },
		{ "GetLastFrameTickData", &UVoxelToolBase::execGetLastFrameTickData },
		{ "GetMouseMovementSize", &UVoxelToolBase::execGetMouseMovementSize },
		{ "GetTickData", &UVoxelToolBase::execGetTickData },
		{ "GetToolDirection", &UVoxelToolBase::execGetToolDirection },
		{ "GetToolNormal", &UVoxelToolBase::execGetToolNormal },
		{ "GetToolPosition", &UVoxelToolBase::execGetToolPosition },
		{ "GetToolPreviewPosition", &UVoxelToolBase::execGetToolPreviewPosition },
		{ "GetValueAfterAxisInput", &UVoxelToolBase::execGetValueAfterAxisInput },
		{ "K2_DoEdit", &UVoxelToolBase::execK2_DoEdit },
		{ "K2_GetToolConfig", &UVoxelToolBase::execK2_GetToolConfig },
		{ "K2_UpdateRender", &UVoxelToolBase::execK2_UpdateRender },
		{ "LastFrameCanEdit", &UVoxelToolBase::execLastFrameCanEdit },
		{ "SetToolOverlayBounds", &UVoxelToolBase::execSetToolOverlayBounds },
		{ "UpdateToolMesh", &UVoxelToolBase::execUpdateToolMesh },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UVoxelToolBase;
UClass* UVoxelToolBase::GetPrivateStaticClass()
{
	using TClass = UVoxelToolBase;
	if (!Z_Registration_Info_UClass_UVoxelToolBase.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("VoxelToolBase"),
			Z_Registration_Info_UClass_UVoxelToolBase.InnerSingleton,
			StaticRegisterNativesUVoxelToolBase,
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
	return Z_Registration_Info_UClass_UVoxelToolBase.InnerSingleton;
}
UClass* Z_Construct_UClass_UVoxelToolBase_NoRegister()
{
	return UVoxelToolBase::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UVoxelToolBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "///////////////////////////////////////////////////////////////////////////////\n///////////////////////////////////////////////////////////////////////////////\n///////////////////////////////////////////////////////////////////////////////\n" },
		{ "IncludePath", "VoxelTools/Tools/VoxelToolBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelToolBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VoxelWorld_MetaData[] = {
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelToolBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ToolOverlayMaterialInstance_MetaData[] = {
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelToolBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ToolMeshMaterialInstance_MetaData[] = {
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelToolBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlaneMeshMaterialInstance_MetaData[] = {
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelToolBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_VoxelWorld;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ToolOverlayMaterialInstance;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ToolMeshMaterialInstance;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlaneMeshMaterialInstance;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UVoxelToolBase_CanEdit, "CanEdit" }, // 3590353294
		{ &Z_Construct_UFunction_UVoxelToolBase_GetBoundsToCache, "GetBoundsToCache" }, // 3291877145
		{ &Z_Construct_UFunction_UVoxelToolBase_GetDeltaTime, "GetDeltaTime" }, // 2506832566
		{ &Z_Construct_UFunction_UVoxelToolBase_GetLastFrameTickData, "GetLastFrameTickData" }, // 1253795670
		{ &Z_Construct_UFunction_UVoxelToolBase_GetMouseMovementSize, "GetMouseMovementSize" }, // 177648214
		{ &Z_Construct_UFunction_UVoxelToolBase_GetTickData, "GetTickData" }, // 4163177243
		{ &Z_Construct_UFunction_UVoxelToolBase_GetToolDirection, "GetToolDirection" }, // 1327574659
		{ &Z_Construct_UFunction_UVoxelToolBase_GetToolNormal, "GetToolNormal" }, // 2412457586
		{ &Z_Construct_UFunction_UVoxelToolBase_GetToolPosition, "GetToolPosition" }, // 1866946710
		{ &Z_Construct_UFunction_UVoxelToolBase_GetToolPreviewPosition, "GetToolPreviewPosition" }, // 1024879866
		{ &Z_Construct_UFunction_UVoxelToolBase_GetValueAfterAxisInput, "GetValueAfterAxisInput" }, // 3762796132
		{ &Z_Construct_UFunction_UVoxelToolBase_K2_DoEdit, "K2_DoEdit" }, // 1386648412
		{ &Z_Construct_UFunction_UVoxelToolBase_K2_GetToolConfig, "K2_GetToolConfig" }, // 830420539
		{ &Z_Construct_UFunction_UVoxelToolBase_K2_Tick, "K2_Tick" }, // 4129003321
		{ &Z_Construct_UFunction_UVoxelToolBase_K2_UpdateRender, "K2_UpdateRender" }, // 1194330250
		{ &Z_Construct_UFunction_UVoxelToolBase_LastFrameCanEdit, "LastFrameCanEdit" }, // 295506553
		{ &Z_Construct_UFunction_UVoxelToolBase_SetToolOverlayBounds, "SetToolOverlayBounds" }, // 550186800
		{ &Z_Construct_UFunction_UVoxelToolBase_UpdateToolMesh, "UpdateToolMesh" }, // 1336613568
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelToolBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVoxelToolBase_Statics::NewProp_VoxelWorld = { "VoxelWorld", nullptr, (EPropertyFlags)0x0144000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelToolBase, VoxelWorld), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VoxelWorld_MetaData), NewProp_VoxelWorld_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVoxelToolBase_Statics::NewProp_ToolOverlayMaterialInstance = { "ToolOverlayMaterialInstance", nullptr, (EPropertyFlags)0x0144000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelToolBase, ToolOverlayMaterialInstance), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ToolOverlayMaterialInstance_MetaData), NewProp_ToolOverlayMaterialInstance_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVoxelToolBase_Statics::NewProp_ToolMeshMaterialInstance = { "ToolMeshMaterialInstance", nullptr, (EPropertyFlags)0x0144000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelToolBase, ToolMeshMaterialInstance), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ToolMeshMaterialInstance_MetaData), NewProp_ToolMeshMaterialInstance_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVoxelToolBase_Statics::NewProp_PlaneMeshMaterialInstance = { "PlaneMeshMaterialInstance", nullptr, (EPropertyFlags)0x0144000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelToolBase, PlaneMeshMaterialInstance), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlaneMeshMaterialInstance_MetaData), NewProp_PlaneMeshMaterialInstance_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelToolBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelToolBase_Statics::NewProp_VoxelWorld,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelToolBase_Statics::NewProp_ToolOverlayMaterialInstance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelToolBase_Statics::NewProp_ToolMeshMaterialInstance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelToolBase_Statics::NewProp_PlaneMeshMaterialInstance,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelToolBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UVoxelToolBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UVoxelTool,
	(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelToolBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelToolBase_Statics::ClassParams = {
	&UVoxelToolBase::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UVoxelToolBase_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelToolBase_Statics::PropPointers),
	0,
	0x001000A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelToolBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UVoxelToolBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVoxelToolBase()
{
	if (!Z_Registration_Info_UClass_UVoxelToolBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelToolBase.OuterSingleton, Z_Construct_UClass_UVoxelToolBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVoxelToolBase.OuterSingleton;
}
UVoxelToolBase::UVoxelToolBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelToolBase);
UVoxelToolBase::~UVoxelToolBase() {}
// ********** End Class UVoxelToolBase *************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelTools_Tools_VoxelToolBase_h__Script_Voxel_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EVoxelToolAlignment_StaticEnum, TEXT("EVoxelToolAlignment"), &Z_Registration_Info_UEnum_EVoxelToolAlignment, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 239877237U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FVoxelToolBaseConfig::StaticStruct, Z_Construct_UScriptStruct_FVoxelToolBaseConfig_Statics::NewStructOps, TEXT("VoxelToolBaseConfig"), &Z_Registration_Info_UScriptStruct_FVoxelToolBaseConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVoxelToolBaseConfig), 3502902606U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UVoxelToolBase, UVoxelToolBase::StaticClass, TEXT("UVoxelToolBase"), &Z_Registration_Info_UClass_UVoxelToolBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelToolBase), 3220552694U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelTools_Tools_VoxelToolBase_h__Script_Voxel_3666241253(TEXT("/Script/Voxel"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelTools_Tools_VoxelToolBase_h__Script_Voxel_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelTools_Tools_VoxelToolBase_h__Script_Voxel_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelTools_Tools_VoxelToolBase_h__Script_Voxel_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelTools_Tools_VoxelToolBase_h__Script_Voxel_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelTools_Tools_VoxelToolBase_h__Script_Voxel_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelTools_Tools_VoxelToolBase_h__Script_Voxel_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
