// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Voxel/Public/VoxelDebug/VoxelDebugUtilities.h"
#include "Voxel/Public/VoxelIntBox.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeVoxelDebugUtilities() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
UPackage* Z_Construct_UPackage__Script_Voxel();
VOXEL_API UClass* Z_Construct_UClass_AVoxelWorld_NoRegister();
VOXEL_API UClass* Z_Construct_UClass_UVoxelDebugUtilities();
VOXEL_API UClass* Z_Construct_UClass_UVoxelDebugUtilities_NoRegister();
VOXEL_API UEnum* Z_Construct_UEnum_Voxel_EVoxelDataType();
VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelIntBox();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UVoxelDebugUtilities Function DebugVoxelsInsideBounds ********************
struct Z_Construct_UFunction_UVoxelDebugUtilities_DebugVoxelsInsideBounds_Statics
{
	struct VoxelDebugUtilities_eventDebugVoxelsInsideBounds_Parms
	{
		AVoxelWorld* World;
		FVoxelIntBox Bounds;
		FLinearColor Color;
		float Lifetime;
		float Thickness;
		bool bDebugDensities;
		FLinearColor TextColor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Voxel|Debug" },
		{ "CPP_Default_bDebugDensities", "true" },
		{ "CPP_Default_Color", "(R=1.000000,G=0.000000,B=0.000000,A=1.000000)" },
		{ "CPP_Default_Lifetime", "1.000000" },
		{ "CPP_Default_TextColor", "(R=0.000000,G=0.000000,B=0.000000,A=1.000000)" },
		{ "CPP_Default_Thickness", "1.000000" },
		{ "DefaultToSelf", "World" },
		{ "ModuleRelativePath", "Public/VoxelDebug/VoxelDebugUtilities.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Bounds;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Lifetime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Thickness;
	static void NewProp_bDebugDensities_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDebugDensities;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TextColor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelDebugUtilities_DebugVoxelsInsideBounds_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelDebugUtilities_eventDebugVoxelsInsideBounds_Parms, World), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelDebugUtilities_DebugVoxelsInsideBounds_Statics::NewProp_Bounds = { "Bounds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelDebugUtilities_eventDebugVoxelsInsideBounds_Parms, Bounds), Z_Construct_UScriptStruct_FVoxelIntBox, METADATA_PARAMS(0, nullptr) }; // 3008064533
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelDebugUtilities_DebugVoxelsInsideBounds_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelDebugUtilities_eventDebugVoxelsInsideBounds_Parms, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoxelDebugUtilities_DebugVoxelsInsideBounds_Statics::NewProp_Lifetime = { "Lifetime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelDebugUtilities_eventDebugVoxelsInsideBounds_Parms, Lifetime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoxelDebugUtilities_DebugVoxelsInsideBounds_Statics::NewProp_Thickness = { "Thickness", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelDebugUtilities_eventDebugVoxelsInsideBounds_Parms, Thickness), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UVoxelDebugUtilities_DebugVoxelsInsideBounds_Statics::NewProp_bDebugDensities_SetBit(void* Obj)
{
	((VoxelDebugUtilities_eventDebugVoxelsInsideBounds_Parms*)Obj)->bDebugDensities = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelDebugUtilities_DebugVoxelsInsideBounds_Statics::NewProp_bDebugDensities = { "bDebugDensities", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VoxelDebugUtilities_eventDebugVoxelsInsideBounds_Parms), &Z_Construct_UFunction_UVoxelDebugUtilities_DebugVoxelsInsideBounds_Statics::NewProp_bDebugDensities_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelDebugUtilities_DebugVoxelsInsideBounds_Statics::NewProp_TextColor = { "TextColor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelDebugUtilities_eventDebugVoxelsInsideBounds_Parms, TextColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelDebugUtilities_DebugVoxelsInsideBounds_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDebugUtilities_DebugVoxelsInsideBounds_Statics::NewProp_World,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDebugUtilities_DebugVoxelsInsideBounds_Statics::NewProp_Bounds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDebugUtilities_DebugVoxelsInsideBounds_Statics::NewProp_Color,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDebugUtilities_DebugVoxelsInsideBounds_Statics::NewProp_Lifetime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDebugUtilities_DebugVoxelsInsideBounds_Statics::NewProp_Thickness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDebugUtilities_DebugVoxelsInsideBounds_Statics::NewProp_bDebugDensities,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDebugUtilities_DebugVoxelsInsideBounds_Statics::NewProp_TextColor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelDebugUtilities_DebugVoxelsInsideBounds_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelDebugUtilities_DebugVoxelsInsideBounds_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelDebugUtilities, nullptr, "DebugVoxelsInsideBounds", Z_Construct_UFunction_UVoxelDebugUtilities_DebugVoxelsInsideBounds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelDebugUtilities_DebugVoxelsInsideBounds_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVoxelDebugUtilities_DebugVoxelsInsideBounds_Statics::VoxelDebugUtilities_eventDebugVoxelsInsideBounds_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelDebugUtilities_DebugVoxelsInsideBounds_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelDebugUtilities_DebugVoxelsInsideBounds_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVoxelDebugUtilities_DebugVoxelsInsideBounds_Statics::VoxelDebugUtilities_eventDebugVoxelsInsideBounds_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVoxelDebugUtilities_DebugVoxelsInsideBounds()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelDebugUtilities_DebugVoxelsInsideBounds_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelDebugUtilities::execDebugVoxelsInsideBounds)
{
	P_GET_OBJECT(AVoxelWorld,Z_Param_World);
	P_GET_STRUCT(FVoxelIntBox,Z_Param_Bounds);
	P_GET_STRUCT(FLinearColor,Z_Param_Color);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Lifetime);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Thickness);
	P_GET_UBOOL(Z_Param_bDebugDensities);
	P_GET_STRUCT(FLinearColor,Z_Param_TextColor);
	P_FINISH;
	P_NATIVE_BEGIN;
	UVoxelDebugUtilities::DebugVoxelsInsideBounds(Z_Param_World,Z_Param_Bounds,Z_Param_Color,Z_Param_Lifetime,Z_Param_Thickness,Z_Param_bDebugDensities,Z_Param_TextColor);
	P_NATIVE_END;
}
// ********** End Class UVoxelDebugUtilities Function DebugVoxelsInsideBounds **********************

// ********** Begin Class UVoxelDebugUtilities Function DrawDataOctree *****************************
struct Z_Construct_UFunction_UVoxelDebugUtilities_DrawDataOctree_Statics
{
	struct VoxelDebugUtilities_eventDrawDataOctree_Parms
	{
		AVoxelWorld* World;
		EVoxelDataType DataType;
		float Lifetime;
		bool bShowSingle;
		bool bShowCached;
		FColor SingleColor;
		FColor SingleDirtyColor;
		FColor CachedColor;
		FColor DirtyColor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Voxel|Debug" },
		{ "CPP_Default_bShowCached", "false" },
		{ "CPP_Default_bShowSingle", "false" },
		{ "CPP_Default_CachedColor", "(R=255,G=0,B=0,A=255)" },
		{ "CPP_Default_DirtyColor", "(R=255,G=0,B=0,A=255)" },
		{ "CPP_Default_Lifetime", "0.000000" },
		{ "CPP_Default_SingleColor", "(R=255,G=0,B=0,A=255)" },
		{ "CPP_Default_SingleDirtyColor", "(R=255,G=0,B=0,A=255)" },
		{ "DefaultToSelf", "World" },
		{ "ModuleRelativePath", "Public/VoxelDebug/VoxelDebugUtilities.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
	static const UECodeGen_Private::FBytePropertyParams NewProp_DataType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_DataType;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Lifetime;
	static void NewProp_bShowSingle_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowSingle;
	static void NewProp_bShowCached_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowCached;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SingleColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SingleDirtyColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CachedColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DirtyColor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelDebugUtilities_DrawDataOctree_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelDebugUtilities_eventDrawDataOctree_Parms, World), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVoxelDebugUtilities_DrawDataOctree_Statics::NewProp_DataType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UVoxelDebugUtilities_DrawDataOctree_Statics::NewProp_DataType = { "DataType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelDebugUtilities_eventDrawDataOctree_Parms, DataType), Z_Construct_UEnum_Voxel_EVoxelDataType, METADATA_PARAMS(0, nullptr) }; // 3319484269
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoxelDebugUtilities_DrawDataOctree_Statics::NewProp_Lifetime = { "Lifetime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelDebugUtilities_eventDrawDataOctree_Parms, Lifetime), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UVoxelDebugUtilities_DrawDataOctree_Statics::NewProp_bShowSingle_SetBit(void* Obj)
{
	((VoxelDebugUtilities_eventDrawDataOctree_Parms*)Obj)->bShowSingle = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelDebugUtilities_DrawDataOctree_Statics::NewProp_bShowSingle = { "bShowSingle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VoxelDebugUtilities_eventDrawDataOctree_Parms), &Z_Construct_UFunction_UVoxelDebugUtilities_DrawDataOctree_Statics::NewProp_bShowSingle_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UVoxelDebugUtilities_DrawDataOctree_Statics::NewProp_bShowCached_SetBit(void* Obj)
{
	((VoxelDebugUtilities_eventDrawDataOctree_Parms*)Obj)->bShowCached = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelDebugUtilities_DrawDataOctree_Statics::NewProp_bShowCached = { "bShowCached", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VoxelDebugUtilities_eventDrawDataOctree_Parms), &Z_Construct_UFunction_UVoxelDebugUtilities_DrawDataOctree_Statics::NewProp_bShowCached_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelDebugUtilities_DrawDataOctree_Statics::NewProp_SingleColor = { "SingleColor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelDebugUtilities_eventDrawDataOctree_Parms, SingleColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelDebugUtilities_DrawDataOctree_Statics::NewProp_SingleDirtyColor = { "SingleDirtyColor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelDebugUtilities_eventDrawDataOctree_Parms, SingleDirtyColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelDebugUtilities_DrawDataOctree_Statics::NewProp_CachedColor = { "CachedColor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelDebugUtilities_eventDrawDataOctree_Parms, CachedColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelDebugUtilities_DrawDataOctree_Statics::NewProp_DirtyColor = { "DirtyColor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelDebugUtilities_eventDrawDataOctree_Parms, DirtyColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelDebugUtilities_DrawDataOctree_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDebugUtilities_DrawDataOctree_Statics::NewProp_World,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDebugUtilities_DrawDataOctree_Statics::NewProp_DataType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDebugUtilities_DrawDataOctree_Statics::NewProp_DataType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDebugUtilities_DrawDataOctree_Statics::NewProp_Lifetime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDebugUtilities_DrawDataOctree_Statics::NewProp_bShowSingle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDebugUtilities_DrawDataOctree_Statics::NewProp_bShowCached,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDebugUtilities_DrawDataOctree_Statics::NewProp_SingleColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDebugUtilities_DrawDataOctree_Statics::NewProp_SingleDirtyColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDebugUtilities_DrawDataOctree_Statics::NewProp_CachedColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDebugUtilities_DrawDataOctree_Statics::NewProp_DirtyColor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelDebugUtilities_DrawDataOctree_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelDebugUtilities_DrawDataOctree_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelDebugUtilities, nullptr, "DrawDataOctree", Z_Construct_UFunction_UVoxelDebugUtilities_DrawDataOctree_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelDebugUtilities_DrawDataOctree_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVoxelDebugUtilities_DrawDataOctree_Statics::VoxelDebugUtilities_eventDrawDataOctree_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelDebugUtilities_DrawDataOctree_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelDebugUtilities_DrawDataOctree_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVoxelDebugUtilities_DrawDataOctree_Statics::VoxelDebugUtilities_eventDrawDataOctree_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVoxelDebugUtilities_DrawDataOctree()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelDebugUtilities_DrawDataOctree_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelDebugUtilities::execDrawDataOctree)
{
	P_GET_OBJECT(AVoxelWorld,Z_Param_World);
	P_GET_ENUM(EVoxelDataType,Z_Param_DataType);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Lifetime);
	P_GET_UBOOL(Z_Param_bShowSingle);
	P_GET_UBOOL(Z_Param_bShowCached);
	P_GET_STRUCT(FColor,Z_Param_SingleColor);
	P_GET_STRUCT(FColor,Z_Param_SingleDirtyColor);
	P_GET_STRUCT(FColor,Z_Param_CachedColor);
	P_GET_STRUCT(FColor,Z_Param_DirtyColor);
	P_FINISH;
	P_NATIVE_BEGIN;
	UVoxelDebugUtilities::DrawDataOctree(Z_Param_World,EVoxelDataType(Z_Param_DataType),Z_Param_Lifetime,Z_Param_bShowSingle,Z_Param_bShowCached,Z_Param_SingleColor,Z_Param_SingleDirtyColor,Z_Param_CachedColor,Z_Param_DirtyColor);
	P_NATIVE_END;
}
// ********** End Class UVoxelDebugUtilities Function DrawDataOctree *******************************

// ********** Begin Class UVoxelDebugUtilities Function DrawDebugIntBox ****************************
struct Z_Construct_UFunction_UVoxelDebugUtilities_DrawDebugIntBox_Statics
{
	struct VoxelDebugUtilities_eventDrawDebugIntBox_Parms
	{
		AVoxelWorld* World;
		FVoxelIntBox Bounds;
		FTransform Transform;
		float Lifetime;
		float Thickness;
		FLinearColor Color;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "Transform" },
		{ "Category", "Voxel|Debug" },
		{ "CPP_Default_Color", "(R=1.000000,G=0.000000,B=0.000000,A=1.000000)" },
		{ "CPP_Default_Lifetime", "1.000000" },
		{ "CPP_Default_Thickness", "0.000000" },
		{ "DefaultToSelf", "World" },
		{ "ModuleRelativePath", "Public/VoxelDebug/VoxelDebugUtilities.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Bounds;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Lifetime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Thickness;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelDebugUtilities_DrawDebugIntBox_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelDebugUtilities_eventDrawDebugIntBox_Parms, World), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelDebugUtilities_DrawDebugIntBox_Statics::NewProp_Bounds = { "Bounds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelDebugUtilities_eventDrawDebugIntBox_Parms, Bounds), Z_Construct_UScriptStruct_FVoxelIntBox, METADATA_PARAMS(0, nullptr) }; // 3008064533
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelDebugUtilities_DrawDebugIntBox_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelDebugUtilities_eventDrawDebugIntBox_Parms, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoxelDebugUtilities_DrawDebugIntBox_Statics::NewProp_Lifetime = { "Lifetime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelDebugUtilities_eventDrawDebugIntBox_Parms, Lifetime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoxelDebugUtilities_DrawDebugIntBox_Statics::NewProp_Thickness = { "Thickness", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelDebugUtilities_eventDrawDebugIntBox_Parms, Thickness), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelDebugUtilities_DrawDebugIntBox_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelDebugUtilities_eventDrawDebugIntBox_Parms, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelDebugUtilities_DrawDebugIntBox_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDebugUtilities_DrawDebugIntBox_Statics::NewProp_World,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDebugUtilities_DrawDebugIntBox_Statics::NewProp_Bounds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDebugUtilities_DrawDebugIntBox_Statics::NewProp_Transform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDebugUtilities_DrawDebugIntBox_Statics::NewProp_Lifetime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDebugUtilities_DrawDebugIntBox_Statics::NewProp_Thickness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDebugUtilities_DrawDebugIntBox_Statics::NewProp_Color,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelDebugUtilities_DrawDebugIntBox_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelDebugUtilities_DrawDebugIntBox_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelDebugUtilities, nullptr, "DrawDebugIntBox", Z_Construct_UFunction_UVoxelDebugUtilities_DrawDebugIntBox_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelDebugUtilities_DrawDebugIntBox_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVoxelDebugUtilities_DrawDebugIntBox_Statics::VoxelDebugUtilities_eventDrawDebugIntBox_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelDebugUtilities_DrawDebugIntBox_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelDebugUtilities_DrawDebugIntBox_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVoxelDebugUtilities_DrawDebugIntBox_Statics::VoxelDebugUtilities_eventDrawDebugIntBox_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVoxelDebugUtilities_DrawDebugIntBox()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelDebugUtilities_DrawDebugIntBox_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelDebugUtilities::execDrawDebugIntBox)
{
	P_GET_OBJECT(AVoxelWorld,Z_Param_World);
	P_GET_STRUCT(FVoxelIntBox,Z_Param_Bounds);
	P_GET_STRUCT(FTransform,Z_Param_Transform);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Lifetime);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Thickness);
	P_GET_STRUCT(FLinearColor,Z_Param_Color);
	P_FINISH;
	P_NATIVE_BEGIN;
	UVoxelDebugUtilities::DrawDebugIntBox(Z_Param_World,Z_Param_Bounds,Z_Param_Transform,Z_Param_Lifetime,Z_Param_Thickness,Z_Param_Color);
	P_NATIVE_END;
}
// ********** End Class UVoxelDebugUtilities Function DrawDebugIntBox ******************************

// ********** Begin Class UVoxelDebugUtilities *****************************************************
void UVoxelDebugUtilities::StaticRegisterNativesUVoxelDebugUtilities()
{
	UClass* Class = UVoxelDebugUtilities::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "DebugVoxelsInsideBounds", &UVoxelDebugUtilities::execDebugVoxelsInsideBounds },
		{ "DrawDataOctree", &UVoxelDebugUtilities::execDrawDataOctree },
		{ "DrawDebugIntBox", &UVoxelDebugUtilities::execDrawDebugIntBox },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UVoxelDebugUtilities;
UClass* UVoxelDebugUtilities::GetPrivateStaticClass()
{
	using TClass = UVoxelDebugUtilities;
	if (!Z_Registration_Info_UClass_UVoxelDebugUtilities.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("VoxelDebugUtilities"),
			Z_Registration_Info_UClass_UVoxelDebugUtilities.InnerSingleton,
			StaticRegisterNativesUVoxelDebugUtilities,
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
	return Z_Registration_Info_UClass_UVoxelDebugUtilities.InnerSingleton;
}
UClass* Z_Construct_UClass_UVoxelDebugUtilities_NoRegister()
{
	return UVoxelDebugUtilities::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UVoxelDebugUtilities_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "VoxelDebug/VoxelDebugUtilities.h" },
		{ "ModuleRelativePath", "Public/VoxelDebug/VoxelDebugUtilities.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UVoxelDebugUtilities_DebugVoxelsInsideBounds, "DebugVoxelsInsideBounds" }, // 3966202993
		{ &Z_Construct_UFunction_UVoxelDebugUtilities_DrawDataOctree, "DrawDataOctree" }, // 1953797600
		{ &Z_Construct_UFunction_UVoxelDebugUtilities_DrawDebugIntBox, "DrawDebugIntBox" }, // 2492049816
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelDebugUtilities>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UVoxelDebugUtilities_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelDebugUtilities_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelDebugUtilities_Statics::ClassParams = {
	&UVoxelDebugUtilities::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelDebugUtilities_Statics::Class_MetaDataParams), Z_Construct_UClass_UVoxelDebugUtilities_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVoxelDebugUtilities()
{
	if (!Z_Registration_Info_UClass_UVoxelDebugUtilities.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelDebugUtilities.OuterSingleton, Z_Construct_UClass_UVoxelDebugUtilities_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVoxelDebugUtilities.OuterSingleton;
}
UVoxelDebugUtilities::UVoxelDebugUtilities(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelDebugUtilities);
UVoxelDebugUtilities::~UVoxelDebugUtilities() {}
// ********** End Class UVoxelDebugUtilities *******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelDebug_VoxelDebugUtilities_h__Script_Voxel_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UVoxelDebugUtilities, UVoxelDebugUtilities::StaticClass, TEXT("UVoxelDebugUtilities"), &Z_Registration_Info_UClass_UVoxelDebugUtilities, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelDebugUtilities), 399539192U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelDebug_VoxelDebugUtilities_h__Script_Voxel_3880576161(TEXT("/Script/Voxel"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelDebug_VoxelDebugUtilities_h__Script_Voxel_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelDebug_VoxelDebugUtilities_h__Script_Voxel_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
