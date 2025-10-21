// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VoxelSpawners/VoxelInstancedMeshSettings.h"
#include "Engine/EngineTypes.h"
#include "PhysicsEngine/BodyInstance.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeVoxelInstancedMeshSettings() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EHasCustomNavigableGeometry();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBodyInstance();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FLightingChannels();
UPackage* Z_Construct_UPackage__Script_Voxel();
VOXEL_API UClass* Z_Construct_UClass_AVoxelSpawnerActor_NoRegister();
VOXEL_API UClass* Z_Construct_UClass_UVoxelHierarchicalInstancedStaticMeshComponent_NoRegister();
VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelInstancedMeshSettings();
VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelInt32Interval();
VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelSpawnerActorSettings();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FVoxelInt32Interval ***********************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FVoxelInt32Interval;
class UScriptStruct* FVoxelInt32Interval::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FVoxelInt32Interval.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FVoxelInt32Interval.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVoxelInt32Interval, (UObject*)Z_Construct_UPackage__Script_Voxel(), TEXT("VoxelInt32Interval"));
	}
	return Z_Registration_Info_UScriptStruct_FVoxelInt32Interval.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FVoxelInt32Interval_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelInstancedMeshSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Min_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelInstancedMeshSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Max_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelInstancedMeshSettings.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Min;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Max;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVoxelInt32Interval>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FVoxelInt32Interval_Statics::NewProp_Min = { "Min", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVoxelInt32Interval, Min), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Min_MetaData), NewProp_Min_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FVoxelInt32Interval_Statics::NewProp_Max = { "Max", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVoxelInt32Interval, Max), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Max_MetaData), NewProp_Max_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVoxelInt32Interval_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelInt32Interval_Statics::NewProp_Min,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelInt32Interval_Statics::NewProp_Max,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelInt32Interval_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVoxelInt32Interval_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
	nullptr,
	&NewStructOps,
	"VoxelInt32Interval",
	Z_Construct_UScriptStruct_FVoxelInt32Interval_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelInt32Interval_Statics::PropPointers),
	sizeof(FVoxelInt32Interval),
	alignof(FVoxelInt32Interval),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelInt32Interval_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVoxelInt32Interval_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FVoxelInt32Interval()
{
	if (!Z_Registration_Info_UScriptStruct_FVoxelInt32Interval.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FVoxelInt32Interval.InnerSingleton, Z_Construct_UScriptStruct_FVoxelInt32Interval_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FVoxelInt32Interval.InnerSingleton;
}
// ********** End ScriptStruct FVoxelInt32Interval *************************************************

// ********** Begin ScriptStruct FVoxelInstancedMeshSettings ***************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FVoxelInstancedMeshSettings;
class UScriptStruct* FVoxelInstancedMeshSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FVoxelInstancedMeshSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FVoxelInstancedMeshSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVoxelInstancedMeshSettings, (UObject*)Z_Construct_UPackage__Script_Voxel(), TEXT("VoxelInstancedMeshSettings"));
	}
	return Z_Registration_Info_UScriptStruct_FVoxelInstancedMeshSettings.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FVoxelInstancedMeshSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelInstancedMeshSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CullDistance_MetaData[] = {
		{ "Category", "Instance Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Distance from camera at which each instance begins/completely to fade out\n" },
#endif
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelInstancedMeshSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Distance from camera at which each instance begins/completely to fade out" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCastShadow_MetaData[] = {
		{ "Category", "Instance Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Controls whether the foliage should cast a shadow or not. */" },
#endif
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelInstancedMeshSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Controls whether the foliage should cast a shadow or not." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAffectDynamicIndirectLighting_MetaData[] = {
		{ "Category", "Instance Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Controls whether the foliage should inject light into the Light Propagation Volume.  This flag is only used if CastShadow is true. */" },
#endif
		{ "EditCondition", "bCastShadow" },
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelInstancedMeshSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Controls whether the foliage should inject light into the Light Propagation Volume.  This flag is only used if CastShadow is true." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAffectDistanceFieldLighting_MetaData[] = {
		{ "Category", "Instance Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Controls whether the primitive should affect dynamic distance field lighting methods.  This flag is only used if CastShadow is true. */" },
#endif
		{ "EditCondition", "bCastShadow" },
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelInstancedMeshSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Controls whether the primitive should affect dynamic distance field lighting methods.  This flag is only used if CastShadow is true." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCastShadowAsTwoSided_MetaData[] = {
		{ "Category", "Instance Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Whether this foliage should cast dynamic shadows as if it were a two sided material. */" },
#endif
		{ "EditCondition", "bCastShadow" },
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelInstancedMeshSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether this foliage should cast dynamic shadows as if it were a two sided material." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bReceivesDecals_MetaData[] = {
		{ "Category", "Instance Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Whether the foliage receives decals. */" },
#endif
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelInstancedMeshSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether the foliage receives decals." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseAsOccluder_MetaData[] = {
		{ "Category", "Instance Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * If enabled, foliage will render a pre-pass which allows it to occlude other primitives, and also allows \n\x09 * it to correctly receive DBuffer decals. Enabling this setting may have a negative performance impact.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelInstancedMeshSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If enabled, foliage will render a pre-pass which allows it to occlude other primitives, and also allows\nit to correctly receive DBuffer decals. Enabling this setting may have a negative performance impact." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BodyInstance_MetaData[] = {
		{ "Category", "Instance Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Custom collision for foliage */" },
#endif
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelInstancedMeshSettings.h" },
		{ "ShowOnlyInnerProperties", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Custom collision for foliage" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomNavigableGeometry_MetaData[] = {
		{ "Category", "Instance Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Force navmesh */" },
#endif
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelInstancedMeshSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Force navmesh" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LightingChannels_MetaData[] = {
		{ "Category", "Instance Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Lighting channels that placed foliage will be assigned. Lights with matching channels will affect the foliage.\n\x09 * These channels only apply to opaque materials, direct lighting, and dynamic lighting and shadowing.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelInstancedMeshSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Lighting channels that placed foliage will be assigned. Lights with matching channels will affect the foliage.\nThese channels only apply to opaque materials, direct lighting, and dynamic lighting and shadowing." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRenderCustomDepth_MetaData[] = {
		{ "Category", "Instance Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** If true, the foliage will be rendered in the CustomDepth pass (usually used for outlines) */" },
#endif
		{ "DisplayName", "Render CustomDepth Pass" },
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelInstancedMeshSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If true, the foliage will be rendered in the CustomDepth pass (usually used for outlines)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomDepthStencilValue_MetaData[] = {
		{ "Category", "Instance Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Optionally write this 0-255 value to the stencil buffer in CustomDepth pass (Requires project setting or r.CustomDepth == 3) */" },
#endif
		{ "DisplayName", "CustomDepth Stencil Value" },
		{ "editcondition", "bRenderCustomDepth" },
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelInstancedMeshSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Optionally write this 0-255 value to the stencil buffer in CustomDepth pass (Requires project setting or r.CustomDepth == 3)" },
#endif
		{ "UIMax", "255" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BuildDelay_MetaData[] = {
		{ "Category", "Instance Settings" },
		{ "ClampMin", "0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// If more instances are added before BuildDelay seconds elapsed, the tree build is queued\n// This is useful to avoid spending lots of time building the tree for nothing.\n// However, it can lead to delays in foliage spawning.\n// To disable this feature entirely, set it to 0\n" },
#endif
		{ "DisplayName", "Culling Tree Build Delay" },
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelInstancedMeshSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If more instances are added before BuildDelay seconds elapsed, the tree build is queued\nThis is useful to avoid spending lots of time building the tree for nothing.\nHowever, it can lead to delays in foliage spawning.\nTo disable this feature entirely, set it to 0" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HISMTemplate_MetaData[] = {
		{ "Category", "Instance Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// If you want to edit the HISM properties create a BP inheriting from HierarchicalInstancedStaticMeshComponent and set it here\n" },
#endif
		{ "DisplayName", "HISM Template" },
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelInstancedMeshSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If you want to edit the HISM properties create a BP inheriting from HierarchicalInstancedStaticMeshComponent and set it here" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_CullDistance;
	static void NewProp_bCastShadow_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCastShadow;
	static void NewProp_bAffectDynamicIndirectLighting_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAffectDynamicIndirectLighting;
	static void NewProp_bAffectDistanceFieldLighting_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAffectDistanceFieldLighting;
	static void NewProp_bCastShadowAsTwoSided_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCastShadowAsTwoSided;
	static void NewProp_bReceivesDecals_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bReceivesDecals;
	static void NewProp_bUseAsOccluder_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseAsOccluder;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BodyInstance;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CustomNavigableGeometry;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LightingChannels;
	static void NewProp_bRenderCustomDepth_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRenderCustomDepth;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CustomDepthStencilValue;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BuildDelay;
	static const UECodeGen_Private::FClassPropertyParams NewProp_HISMTemplate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVoxelInstancedMeshSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVoxelInstancedMeshSettings_Statics::NewProp_CullDistance = { "CullDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVoxelInstancedMeshSettings, CullDistance), Z_Construct_UScriptStruct_FVoxelInt32Interval, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CullDistance_MetaData), NewProp_CullDistance_MetaData) }; // 1708367730
void Z_Construct_UScriptStruct_FVoxelInstancedMeshSettings_Statics::NewProp_bCastShadow_SetBit(void* Obj)
{
	((FVoxelInstancedMeshSettings*)Obj)->bCastShadow = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVoxelInstancedMeshSettings_Statics::NewProp_bCastShadow = { "bCastShadow", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FVoxelInstancedMeshSettings), &Z_Construct_UScriptStruct_FVoxelInstancedMeshSettings_Statics::NewProp_bCastShadow_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCastShadow_MetaData), NewProp_bCastShadow_MetaData) };
void Z_Construct_UScriptStruct_FVoxelInstancedMeshSettings_Statics::NewProp_bAffectDynamicIndirectLighting_SetBit(void* Obj)
{
	((FVoxelInstancedMeshSettings*)Obj)->bAffectDynamicIndirectLighting = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVoxelInstancedMeshSettings_Statics::NewProp_bAffectDynamicIndirectLighting = { "bAffectDynamicIndirectLighting", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FVoxelInstancedMeshSettings), &Z_Construct_UScriptStruct_FVoxelInstancedMeshSettings_Statics::NewProp_bAffectDynamicIndirectLighting_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAffectDynamicIndirectLighting_MetaData), NewProp_bAffectDynamicIndirectLighting_MetaData) };
void Z_Construct_UScriptStruct_FVoxelInstancedMeshSettings_Statics::NewProp_bAffectDistanceFieldLighting_SetBit(void* Obj)
{
	((FVoxelInstancedMeshSettings*)Obj)->bAffectDistanceFieldLighting = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVoxelInstancedMeshSettings_Statics::NewProp_bAffectDistanceFieldLighting = { "bAffectDistanceFieldLighting", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FVoxelInstancedMeshSettings), &Z_Construct_UScriptStruct_FVoxelInstancedMeshSettings_Statics::NewProp_bAffectDistanceFieldLighting_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAffectDistanceFieldLighting_MetaData), NewProp_bAffectDistanceFieldLighting_MetaData) };
void Z_Construct_UScriptStruct_FVoxelInstancedMeshSettings_Statics::NewProp_bCastShadowAsTwoSided_SetBit(void* Obj)
{
	((FVoxelInstancedMeshSettings*)Obj)->bCastShadowAsTwoSided = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVoxelInstancedMeshSettings_Statics::NewProp_bCastShadowAsTwoSided = { "bCastShadowAsTwoSided", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FVoxelInstancedMeshSettings), &Z_Construct_UScriptStruct_FVoxelInstancedMeshSettings_Statics::NewProp_bCastShadowAsTwoSided_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCastShadowAsTwoSided_MetaData), NewProp_bCastShadowAsTwoSided_MetaData) };
void Z_Construct_UScriptStruct_FVoxelInstancedMeshSettings_Statics::NewProp_bReceivesDecals_SetBit(void* Obj)
{
	((FVoxelInstancedMeshSettings*)Obj)->bReceivesDecals = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVoxelInstancedMeshSettings_Statics::NewProp_bReceivesDecals = { "bReceivesDecals", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FVoxelInstancedMeshSettings), &Z_Construct_UScriptStruct_FVoxelInstancedMeshSettings_Statics::NewProp_bReceivesDecals_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bReceivesDecals_MetaData), NewProp_bReceivesDecals_MetaData) };
void Z_Construct_UScriptStruct_FVoxelInstancedMeshSettings_Statics::NewProp_bUseAsOccluder_SetBit(void* Obj)
{
	((FVoxelInstancedMeshSettings*)Obj)->bUseAsOccluder = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVoxelInstancedMeshSettings_Statics::NewProp_bUseAsOccluder = { "bUseAsOccluder", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FVoxelInstancedMeshSettings), &Z_Construct_UScriptStruct_FVoxelInstancedMeshSettings_Statics::NewProp_bUseAsOccluder_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseAsOccluder_MetaData), NewProp_bUseAsOccluder_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVoxelInstancedMeshSettings_Statics::NewProp_BodyInstance = { "BodyInstance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVoxelInstancedMeshSettings, BodyInstance), Z_Construct_UScriptStruct_FBodyInstance, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BodyInstance_MetaData), NewProp_BodyInstance_MetaData) }; // 289277017
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FVoxelInstancedMeshSettings_Statics::NewProp_CustomNavigableGeometry = { "CustomNavigableGeometry", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVoxelInstancedMeshSettings, CustomNavigableGeometry), Z_Construct_UEnum_Engine_EHasCustomNavigableGeometry, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomNavigableGeometry_MetaData), NewProp_CustomNavigableGeometry_MetaData) }; // 2809952948
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVoxelInstancedMeshSettings_Statics::NewProp_LightingChannels = { "LightingChannels", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVoxelInstancedMeshSettings, LightingChannels), Z_Construct_UScriptStruct_FLightingChannels, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LightingChannels_MetaData), NewProp_LightingChannels_MetaData) }; // 3420985076
void Z_Construct_UScriptStruct_FVoxelInstancedMeshSettings_Statics::NewProp_bRenderCustomDepth_SetBit(void* Obj)
{
	((FVoxelInstancedMeshSettings*)Obj)->bRenderCustomDepth = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVoxelInstancedMeshSettings_Statics::NewProp_bRenderCustomDepth = { "bRenderCustomDepth", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FVoxelInstancedMeshSettings), &Z_Construct_UScriptStruct_FVoxelInstancedMeshSettings_Statics::NewProp_bRenderCustomDepth_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRenderCustomDepth_MetaData), NewProp_bRenderCustomDepth_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FVoxelInstancedMeshSettings_Statics::NewProp_CustomDepthStencilValue = { "CustomDepthStencilValue", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVoxelInstancedMeshSettings, CustomDepthStencilValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomDepthStencilValue_MetaData), NewProp_CustomDepthStencilValue_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVoxelInstancedMeshSettings_Statics::NewProp_BuildDelay = { "BuildDelay", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVoxelInstancedMeshSettings, BuildDelay), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BuildDelay_MetaData), NewProp_BuildDelay_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FVoxelInstancedMeshSettings_Statics::NewProp_HISMTemplate = { "HISMTemplate", nullptr, (EPropertyFlags)0x0014040000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVoxelInstancedMeshSettings, HISMTemplate), Z_Construct_UClass_UClass, Z_Construct_UClass_UVoxelHierarchicalInstancedStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HISMTemplate_MetaData), NewProp_HISMTemplate_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVoxelInstancedMeshSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelInstancedMeshSettings_Statics::NewProp_CullDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelInstancedMeshSettings_Statics::NewProp_bCastShadow,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelInstancedMeshSettings_Statics::NewProp_bAffectDynamicIndirectLighting,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelInstancedMeshSettings_Statics::NewProp_bAffectDistanceFieldLighting,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelInstancedMeshSettings_Statics::NewProp_bCastShadowAsTwoSided,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelInstancedMeshSettings_Statics::NewProp_bReceivesDecals,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelInstancedMeshSettings_Statics::NewProp_bUseAsOccluder,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelInstancedMeshSettings_Statics::NewProp_BodyInstance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelInstancedMeshSettings_Statics::NewProp_CustomNavigableGeometry,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelInstancedMeshSettings_Statics::NewProp_LightingChannels,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelInstancedMeshSettings_Statics::NewProp_bRenderCustomDepth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelInstancedMeshSettings_Statics::NewProp_CustomDepthStencilValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelInstancedMeshSettings_Statics::NewProp_BuildDelay,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelInstancedMeshSettings_Statics::NewProp_HISMTemplate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelInstancedMeshSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVoxelInstancedMeshSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
	nullptr,
	&NewStructOps,
	"VoxelInstancedMeshSettings",
	Z_Construct_UScriptStruct_FVoxelInstancedMeshSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelInstancedMeshSettings_Statics::PropPointers),
	sizeof(FVoxelInstancedMeshSettings),
	alignof(FVoxelInstancedMeshSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelInstancedMeshSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVoxelInstancedMeshSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FVoxelInstancedMeshSettings()
{
	if (!Z_Registration_Info_UScriptStruct_FVoxelInstancedMeshSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FVoxelInstancedMeshSettings.InnerSingleton, Z_Construct_UScriptStruct_FVoxelInstancedMeshSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FVoxelInstancedMeshSettings.InnerSingleton;
}
// ********** End ScriptStruct FVoxelInstancedMeshSettings *****************************************

// ********** Begin ScriptStruct FVoxelSpawnerActorSettings ****************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FVoxelSpawnerActorSettings;
class UScriptStruct* FVoxelSpawnerActorSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FVoxelSpawnerActorSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FVoxelSpawnerActorSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVoxelSpawnerActorSettings, (UObject*)Z_Construct_UPackage__Script_Voxel(), TEXT("VoxelSpawnerActorSettings"));
	}
	return Z_Registration_Info_UScriptStruct_FVoxelSpawnerActorSettings.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FVoxelSpawnerActorSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelInstancedMeshSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActorClass_MetaData[] = {
		{ "Category", "Actor Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Actor to spawn to replace the instanced mesh. After spawn, the SetStaticMesh event will be called on the actor with Mesh as argument\n" },
#endif
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelInstancedMeshSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Actor to spawn to replace the instanced mesh. After spawn, the SetStaticMesh event will be called on the actor with Mesh as argument" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BodyInstance_MetaData[] = {
		{ "Category", "Actor Settings" },
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelInstancedMeshSettings.h" },
		{ "ShowOnlyInnerProperties", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Lifespan_MetaData[] = {
		{ "Category", "Actor Settings" },
		{ "ClampMin", "0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Set the lifespan of this actor. When it expires the object will be destroyed.\n// Set to 0 to disable\n" },
#endif
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelInstancedMeshSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set the lifespan of this actor. When it expires the object will be destroyed.\nSet to 0 to disable" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_ActorClass;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BodyInstance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Lifespan;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVoxelSpawnerActorSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FVoxelSpawnerActorSettings_Statics::NewProp_ActorClass = { "ActorClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVoxelSpawnerActorSettings, ActorClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AVoxelSpawnerActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActorClass_MetaData), NewProp_ActorClass_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVoxelSpawnerActorSettings_Statics::NewProp_BodyInstance = { "BodyInstance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVoxelSpawnerActorSettings, BodyInstance), Z_Construct_UScriptStruct_FBodyInstance, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BodyInstance_MetaData), NewProp_BodyInstance_MetaData) }; // 289277017
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVoxelSpawnerActorSettings_Statics::NewProp_Lifespan = { "Lifespan", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVoxelSpawnerActorSettings, Lifespan), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Lifespan_MetaData), NewProp_Lifespan_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVoxelSpawnerActorSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelSpawnerActorSettings_Statics::NewProp_ActorClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelSpawnerActorSettings_Statics::NewProp_BodyInstance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelSpawnerActorSettings_Statics::NewProp_Lifespan,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelSpawnerActorSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVoxelSpawnerActorSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
	nullptr,
	&NewStructOps,
	"VoxelSpawnerActorSettings",
	Z_Construct_UScriptStruct_FVoxelSpawnerActorSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelSpawnerActorSettings_Statics::PropPointers),
	sizeof(FVoxelSpawnerActorSettings),
	alignof(FVoxelSpawnerActorSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelSpawnerActorSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVoxelSpawnerActorSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FVoxelSpawnerActorSettings()
{
	if (!Z_Registration_Info_UScriptStruct_FVoxelSpawnerActorSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FVoxelSpawnerActorSettings.InnerSingleton, Z_Construct_UScriptStruct_FVoxelSpawnerActorSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FVoxelSpawnerActorSettings.InnerSingleton;
}
// ********** End ScriptStruct FVoxelSpawnerActorSettings ******************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelSpawners_VoxelInstancedMeshSettings_h__Script_Voxel_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FVoxelInt32Interval::StaticStruct, Z_Construct_UScriptStruct_FVoxelInt32Interval_Statics::NewStructOps, TEXT("VoxelInt32Interval"), &Z_Registration_Info_UScriptStruct_FVoxelInt32Interval, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVoxelInt32Interval), 1708367730U) },
		{ FVoxelInstancedMeshSettings::StaticStruct, Z_Construct_UScriptStruct_FVoxelInstancedMeshSettings_Statics::NewStructOps, TEXT("VoxelInstancedMeshSettings"), &Z_Registration_Info_UScriptStruct_FVoxelInstancedMeshSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVoxelInstancedMeshSettings), 3799635786U) },
		{ FVoxelSpawnerActorSettings::StaticStruct, Z_Construct_UScriptStruct_FVoxelSpawnerActorSettings_Statics::NewStructOps, TEXT("VoxelSpawnerActorSettings"), &Z_Registration_Info_UScriptStruct_FVoxelSpawnerActorSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVoxelSpawnerActorSettings), 2216116063U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelSpawners_VoxelInstancedMeshSettings_h__Script_Voxel_1517601771(TEXT("/Script/Voxel"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelSpawners_VoxelInstancedMeshSettings_h__Script_Voxel_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelSpawners_VoxelInstancedMeshSettings_h__Script_Voxel_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
