// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VoxelTools/Gen/VoxelLevelTools.h"
#include "Engine/LatentActionManager.h"
#include "VoxelIntBox.h"
#include "VoxelTools/Gen/VoxelToolsBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeVoxelLevelTools() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FLatentActionInfo();
UPackage* Z_Construct_UPackage__Script_Voxel();
VOXEL_API UClass* Z_Construct_UClass_AVoxelWorld_NoRegister();
VOXEL_API UClass* Z_Construct_UClass_UVoxelLevelTools();
VOXEL_API UClass* Z_Construct_UClass_UVoxelLevelTools_NoRegister();
VOXEL_API UClass* Z_Construct_UClass_UVoxelToolsBase();
VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FModifiedVoxelValue();
VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelIntBox();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UVoxelLevelTools Function Level ******************************************
struct Z_Construct_UFunction_UVoxelLevelTools_Level_Statics
{
	struct VoxelLevelTools_eventLevel_Parms
	{
		TArray<FModifiedVoxelValue> ModifiedValues;
		FVoxelIntBox EditedBounds;
		AVoxelWorld* VoxelWorld;
		FVector Position;
		float Radius;
		float Falloff;
		float Height;
		bool bAdditive;
		bool bMultiThreaded;
		bool bRecordModifiedValues;
		bool bConvertToVoxelSpace;
		bool bUpdateRender;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "bMultiThreaded, bRecordModifiedValues, bConvertToVoxelSpace, bUpdateRender" },
		{ "Category", "Voxel|Tools|Level Tools" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Stamps a cylinder, to quickly level parts of the world\n\x09 * If additive, will stamp a smooth cylinder above Position. Else will remove one below Position\n\x09 * @see Level, LevelAsync and FVoxelLevelToolsImpl::Level\n\x09 * @param\x09ModifiedValues       \x09Record the Values modified by this function. Useful to track the amount of edit done, for instance to give resources when digging\n\x09 * @param\x09""EditedBounds         \x09Returns the bounds edited by this function\n\x09 * @param\x09VoxelWorld           \x09The voxel world to do the edit to\n\x09 * @param\x09Position             \x09The position of the top (or bottom if subtractive) of the cylinder. In world space (unreal units) if bConvertToVoxelSpace is true. In voxel space if false.\n\x09 * @param\x09Radius               \x09The radius of the cylinder. In unreal units if bConvertToVoxelSpace is true. In voxels if false.\n\x09 * @param\x09""Falloff              \x09The falloff between 0 and 1. The higher the smoother the cylinder edge.\n\x09 * @param\x09Height               \x09The height of the cylinder. In unreal units if bConvertToVoxelSpace is true. In voxels if false.\n\x09 * @param\x09""bAdditive            \x09""Additive or subtractive edit, see node comment\n\x09 * @param\x09""bMultiThreaded       \x09If true, multiple threads will be used to make the edit faster.\n\x09 * @param\x09""bRecordModifiedValues\x09If false, will not fill ModifiedValues, making the edit faster.\n\x09 * @param\x09""bConvertToVoxelSpace \x09If true, Position, Radius and Height will be converted to voxel space. Else they will be used directly.\n\x09 * @param\x09""bUpdateRender        \x09If false, will only edit the data and not update the render. Rarely needed.\n\x09*/" },
#endif
		{ "CPP_Default_bConvertToVoxelSpace", "true" },
		{ "CPP_Default_bMultiThreaded", "true" },
		{ "CPP_Default_bRecordModifiedValues", "true" },
		{ "CPP_Default_bUpdateRender", "true" },
		{ "DefaultToSelf", "VoxelWorld" },
		{ "ModuleRelativePath", "Public/VoxelTools/Gen/VoxelLevelTools.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Stamps a cylinder, to quickly level parts of the world\nIf additive, will stamp a smooth cylinder above Position. Else will remove one below Position\n@see Level, LevelAsync and FVoxelLevelToolsImpl::Level\n@param       ModifiedValues          Record the Values modified by this function. Useful to track the amount of edit done, for instance to give resources when digging\n@param       EditedBounds            Returns the bounds edited by this function\n@param       VoxelWorld              The voxel world to do the edit to\n@param       Position                The position of the top (or bottom if subtractive) of the cylinder. In world space (unreal units) if bConvertToVoxelSpace is true. In voxel space if false.\n@param       Radius                  The radius of the cylinder. In unreal units if bConvertToVoxelSpace is true. In voxels if false.\n@param       Falloff                 The falloff between 0 and 1. The higher the smoother the cylinder edge.\n@param       Height                  The height of the cylinder. In unreal units if bConvertToVoxelSpace is true. In voxels if false.\n@param       bAdditive               Additive or subtractive edit, see node comment\n@param       bMultiThreaded          If true, multiple threads will be used to make the edit faster.\n@param       bRecordModifiedValues   If false, will not fill ModifiedValues, making the edit faster.\n@param       bConvertToVoxelSpace    If true, Position, Radius and Height will be converted to voxel space. Else they will be used directly.\n@param       bUpdateRender           If false, will only edit the data and not update the render. Rarely needed." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ModifiedValues_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ModifiedValues;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EditedBounds;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_VoxelWorld;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Position;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Falloff;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Height;
	static void NewProp_bAdditive_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAdditive;
	static void NewProp_bMultiThreaded_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bMultiThreaded;
	static void NewProp_bRecordModifiedValues_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRecordModifiedValues;
	static void NewProp_bConvertToVoxelSpace_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bConvertToVoxelSpace;
	static void NewProp_bUpdateRender_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUpdateRender;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelLevelTools_Level_Statics::NewProp_ModifiedValues_Inner = { "ModifiedValues", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FModifiedVoxelValue, METADATA_PARAMS(0, nullptr) }; // 1075743150
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVoxelLevelTools_Level_Statics::NewProp_ModifiedValues = { "ModifiedValues", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelLevelTools_eventLevel_Parms, ModifiedValues), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 1075743150
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelLevelTools_Level_Statics::NewProp_EditedBounds = { "EditedBounds", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelLevelTools_eventLevel_Parms, EditedBounds), Z_Construct_UScriptStruct_FVoxelIntBox, METADATA_PARAMS(0, nullptr) }; // 3520536583
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelLevelTools_Level_Statics::NewProp_VoxelWorld = { "VoxelWorld", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelLevelTools_eventLevel_Parms, VoxelWorld), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelLevelTools_Level_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelLevelTools_eventLevel_Parms, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Position_MetaData), NewProp_Position_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoxelLevelTools_Level_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelLevelTools_eventLevel_Parms, Radius), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoxelLevelTools_Level_Statics::NewProp_Falloff = { "Falloff", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelLevelTools_eventLevel_Parms, Falloff), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoxelLevelTools_Level_Statics::NewProp_Height = { "Height", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelLevelTools_eventLevel_Parms, Height), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UVoxelLevelTools_Level_Statics::NewProp_bAdditive_SetBit(void* Obj)
{
	((VoxelLevelTools_eventLevel_Parms*)Obj)->bAdditive = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelLevelTools_Level_Statics::NewProp_bAdditive = { "bAdditive", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VoxelLevelTools_eventLevel_Parms), &Z_Construct_UFunction_UVoxelLevelTools_Level_Statics::NewProp_bAdditive_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UVoxelLevelTools_Level_Statics::NewProp_bMultiThreaded_SetBit(void* Obj)
{
	((VoxelLevelTools_eventLevel_Parms*)Obj)->bMultiThreaded = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelLevelTools_Level_Statics::NewProp_bMultiThreaded = { "bMultiThreaded", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VoxelLevelTools_eventLevel_Parms), &Z_Construct_UFunction_UVoxelLevelTools_Level_Statics::NewProp_bMultiThreaded_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UVoxelLevelTools_Level_Statics::NewProp_bRecordModifiedValues_SetBit(void* Obj)
{
	((VoxelLevelTools_eventLevel_Parms*)Obj)->bRecordModifiedValues = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelLevelTools_Level_Statics::NewProp_bRecordModifiedValues = { "bRecordModifiedValues", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VoxelLevelTools_eventLevel_Parms), &Z_Construct_UFunction_UVoxelLevelTools_Level_Statics::NewProp_bRecordModifiedValues_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UVoxelLevelTools_Level_Statics::NewProp_bConvertToVoxelSpace_SetBit(void* Obj)
{
	((VoxelLevelTools_eventLevel_Parms*)Obj)->bConvertToVoxelSpace = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelLevelTools_Level_Statics::NewProp_bConvertToVoxelSpace = { "bConvertToVoxelSpace", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VoxelLevelTools_eventLevel_Parms), &Z_Construct_UFunction_UVoxelLevelTools_Level_Statics::NewProp_bConvertToVoxelSpace_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UVoxelLevelTools_Level_Statics::NewProp_bUpdateRender_SetBit(void* Obj)
{
	((VoxelLevelTools_eventLevel_Parms*)Obj)->bUpdateRender = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelLevelTools_Level_Statics::NewProp_bUpdateRender = { "bUpdateRender", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VoxelLevelTools_eventLevel_Parms), &Z_Construct_UFunction_UVoxelLevelTools_Level_Statics::NewProp_bUpdateRender_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelLevelTools_Level_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelLevelTools_Level_Statics::NewProp_ModifiedValues_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelLevelTools_Level_Statics::NewProp_ModifiedValues,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelLevelTools_Level_Statics::NewProp_EditedBounds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelLevelTools_Level_Statics::NewProp_VoxelWorld,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelLevelTools_Level_Statics::NewProp_Position,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelLevelTools_Level_Statics::NewProp_Radius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelLevelTools_Level_Statics::NewProp_Falloff,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelLevelTools_Level_Statics::NewProp_Height,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelLevelTools_Level_Statics::NewProp_bAdditive,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelLevelTools_Level_Statics::NewProp_bMultiThreaded,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelLevelTools_Level_Statics::NewProp_bRecordModifiedValues,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelLevelTools_Level_Statics::NewProp_bConvertToVoxelSpace,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelLevelTools_Level_Statics::NewProp_bUpdateRender,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelLevelTools_Level_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelLevelTools_Level_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelLevelTools, nullptr, "Level", Z_Construct_UFunction_UVoxelLevelTools_Level_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelLevelTools_Level_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVoxelLevelTools_Level_Statics::VoxelLevelTools_eventLevel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelLevelTools_Level_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelLevelTools_Level_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVoxelLevelTools_Level_Statics::VoxelLevelTools_eventLevel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVoxelLevelTools_Level()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelLevelTools_Level_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelLevelTools::execLevel)
{
	P_GET_TARRAY_REF(FModifiedVoxelValue,Z_Param_Out_ModifiedValues);
	P_GET_STRUCT_REF(FVoxelIntBox,Z_Param_Out_EditedBounds);
	P_GET_OBJECT(AVoxelWorld,Z_Param_VoxelWorld);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_Position);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Radius);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Falloff);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Height);
	P_GET_UBOOL(Z_Param_bAdditive);
	P_GET_UBOOL(Z_Param_bMultiThreaded);
	P_GET_UBOOL(Z_Param_bRecordModifiedValues);
	P_GET_UBOOL(Z_Param_bConvertToVoxelSpace);
	P_GET_UBOOL(Z_Param_bUpdateRender);
	P_FINISH;
	P_NATIVE_BEGIN;
	UVoxelLevelTools::Level(Z_Param_Out_ModifiedValues,Z_Param_Out_EditedBounds,Z_Param_VoxelWorld,Z_Param_Out_Position,Z_Param_Radius,Z_Param_Falloff,Z_Param_Height,Z_Param_bAdditive,Z_Param_bMultiThreaded,Z_Param_bRecordModifiedValues,Z_Param_bConvertToVoxelSpace,Z_Param_bUpdateRender);
	P_NATIVE_END;
}
// ********** End Class UVoxelLevelTools Function Level ********************************************

// ********** Begin Class UVoxelLevelTools Function LevelAsync *************************************
struct Z_Construct_UFunction_UVoxelLevelTools_LevelAsync_Statics
{
	struct VoxelLevelTools_eventLevelAsync_Parms
	{
		UObject* WorldContextObject;
		FLatentActionInfo LatentInfo;
		TArray<FModifiedVoxelValue> ModifiedValues;
		FVoxelIntBox EditedBounds;
		AVoxelWorld* VoxelWorld;
		FVector Position;
		float Radius;
		float Falloff;
		float Height;
		bool bAdditive;
		bool bMultiThreaded;
		bool bRecordModifiedValues;
		bool bConvertToVoxelSpace;
		bool bUpdateRender;
		bool bHideLatentWarnings;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "bMultiThreaded, bRecordModifiedValues, bConvertToVoxelSpace, bUpdateRender, bHideLatentWarnings" },
		{ "Category", "Voxel|Tools|Level Tools" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Stamps a cylinder, to quickly level parts of the world\n\x09 * If additive, will stamp a smooth cylinder above Position. Else will remove one below Position\n\x09 * Runs asynchronously in a background thread\n\x09 * @see Level, LevelAsync and FVoxelLevelToolsImpl::Level\n\x09 * @param\x09ModifiedValues       \x09Record the Values modified by this function. Useful to track the amount of edit done, for instance to give resources when digging\n\x09 * @param\x09""EditedBounds         \x09Returns the bounds edited by this function\n\x09 * @param\x09VoxelWorld           \x09The voxel world to do the edit to\n\x09 * @param\x09Position             \x09The position of the top (or bottom if subtractive) of the cylinder. In world space (unreal units) if bConvertToVoxelSpace is true. In voxel space if false.\n\x09 * @param\x09Radius               \x09The radius of the cylinder. In unreal units if bConvertToVoxelSpace is true. In voxels if false.\n\x09 * @param\x09""Falloff              \x09The falloff between 0 and 1. The higher the smoother the cylinder edge.\n\x09 * @param\x09Height               \x09The height of the cylinder. In unreal units if bConvertToVoxelSpace is true. In voxels if false.\n\x09 * @param\x09""bAdditive            \x09""Additive or subtractive edit, see node comment\n\x09 * @param\x09""bMultiThreaded       \x09If true, multiple threads will be used to make the edit faster. Not recommended on async functions, as it might cause lag.\n\x09 * @param\x09""bRecordModifiedValues\x09If false, will not fill ModifiedValues, making the edit faster.\n\x09 * @param\x09""bConvertToVoxelSpace \x09If true, Position, Radius and Height will be converted to voxel space. Else they will be used directly.\n\x09 * @param\x09""bUpdateRender        \x09If false, will only edit the data and not update the render. Rarely needed.\n\x09 * @param\x09""bHideLatentWarnings  \x09Hide latent warnings caused by calling a node before its previous call completion.\n\x09*/" },
#endif
		{ "CPP_Default_bConvertToVoxelSpace", "true" },
		{ "CPP_Default_bHideLatentWarnings", "false" },
		{ "CPP_Default_bMultiThreaded", "false" },
		{ "CPP_Default_bRecordModifiedValues", "true" },
		{ "CPP_Default_bUpdateRender", "true" },
		{ "DefaultToSelf", "VoxelWorld" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Public/VoxelTools/Gen/VoxelLevelTools.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Stamps a cylinder, to quickly level parts of the world\nIf additive, will stamp a smooth cylinder above Position. Else will remove one below Position\nRuns asynchronously in a background thread\n@see Level, LevelAsync and FVoxelLevelToolsImpl::Level\n@param       ModifiedValues          Record the Values modified by this function. Useful to track the amount of edit done, for instance to give resources when digging\n@param       EditedBounds            Returns the bounds edited by this function\n@param       VoxelWorld              The voxel world to do the edit to\n@param       Position                The position of the top (or bottom if subtractive) of the cylinder. In world space (unreal units) if bConvertToVoxelSpace is true. In voxel space if false.\n@param       Radius                  The radius of the cylinder. In unreal units if bConvertToVoxelSpace is true. In voxels if false.\n@param       Falloff                 The falloff between 0 and 1. The higher the smoother the cylinder edge.\n@param       Height                  The height of the cylinder. In unreal units if bConvertToVoxelSpace is true. In voxels if false.\n@param       bAdditive               Additive or subtractive edit, see node comment\n@param       bMultiThreaded          If true, multiple threads will be used to make the edit faster. Not recommended on async functions, as it might cause lag.\n@param       bRecordModifiedValues   If false, will not fill ModifiedValues, making the edit faster.\n@param       bConvertToVoxelSpace    If true, Position, Radius and Height will be converted to voxel space. Else they will be used directly.\n@param       bUpdateRender           If false, will only edit the data and not update the render. Rarely needed.\n@param       bHideLatentWarnings     Hide latent warnings caused by calling a node before its previous call completion." },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ModifiedValues_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ModifiedValues;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EditedBounds;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_VoxelWorld;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Position;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Falloff;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Height;
	static void NewProp_bAdditive_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAdditive;
	static void NewProp_bMultiThreaded_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bMultiThreaded;
	static void NewProp_bRecordModifiedValues_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRecordModifiedValues;
	static void NewProp_bConvertToVoxelSpace_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bConvertToVoxelSpace;
	static void NewProp_bUpdateRender_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUpdateRender;
	static void NewProp_bHideLatentWarnings_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHideLatentWarnings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelLevelTools_LevelAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelLevelTools_eventLevelAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelLevelTools_LevelAsync_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelLevelTools_eventLevelAsync_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(0, nullptr) }; // 4146275481
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelLevelTools_LevelAsync_Statics::NewProp_ModifiedValues_Inner = { "ModifiedValues", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FModifiedVoxelValue, METADATA_PARAMS(0, nullptr) }; // 1075743150
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVoxelLevelTools_LevelAsync_Statics::NewProp_ModifiedValues = { "ModifiedValues", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelLevelTools_eventLevelAsync_Parms, ModifiedValues), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 1075743150
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelLevelTools_LevelAsync_Statics::NewProp_EditedBounds = { "EditedBounds", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelLevelTools_eventLevelAsync_Parms, EditedBounds), Z_Construct_UScriptStruct_FVoxelIntBox, METADATA_PARAMS(0, nullptr) }; // 3520536583
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelLevelTools_LevelAsync_Statics::NewProp_VoxelWorld = { "VoxelWorld", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelLevelTools_eventLevelAsync_Parms, VoxelWorld), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelLevelTools_LevelAsync_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelLevelTools_eventLevelAsync_Parms, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Position_MetaData), NewProp_Position_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoxelLevelTools_LevelAsync_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelLevelTools_eventLevelAsync_Parms, Radius), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoxelLevelTools_LevelAsync_Statics::NewProp_Falloff = { "Falloff", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelLevelTools_eventLevelAsync_Parms, Falloff), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoxelLevelTools_LevelAsync_Statics::NewProp_Height = { "Height", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelLevelTools_eventLevelAsync_Parms, Height), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UVoxelLevelTools_LevelAsync_Statics::NewProp_bAdditive_SetBit(void* Obj)
{
	((VoxelLevelTools_eventLevelAsync_Parms*)Obj)->bAdditive = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelLevelTools_LevelAsync_Statics::NewProp_bAdditive = { "bAdditive", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VoxelLevelTools_eventLevelAsync_Parms), &Z_Construct_UFunction_UVoxelLevelTools_LevelAsync_Statics::NewProp_bAdditive_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UVoxelLevelTools_LevelAsync_Statics::NewProp_bMultiThreaded_SetBit(void* Obj)
{
	((VoxelLevelTools_eventLevelAsync_Parms*)Obj)->bMultiThreaded = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelLevelTools_LevelAsync_Statics::NewProp_bMultiThreaded = { "bMultiThreaded", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VoxelLevelTools_eventLevelAsync_Parms), &Z_Construct_UFunction_UVoxelLevelTools_LevelAsync_Statics::NewProp_bMultiThreaded_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UVoxelLevelTools_LevelAsync_Statics::NewProp_bRecordModifiedValues_SetBit(void* Obj)
{
	((VoxelLevelTools_eventLevelAsync_Parms*)Obj)->bRecordModifiedValues = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelLevelTools_LevelAsync_Statics::NewProp_bRecordModifiedValues = { "bRecordModifiedValues", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VoxelLevelTools_eventLevelAsync_Parms), &Z_Construct_UFunction_UVoxelLevelTools_LevelAsync_Statics::NewProp_bRecordModifiedValues_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UVoxelLevelTools_LevelAsync_Statics::NewProp_bConvertToVoxelSpace_SetBit(void* Obj)
{
	((VoxelLevelTools_eventLevelAsync_Parms*)Obj)->bConvertToVoxelSpace = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelLevelTools_LevelAsync_Statics::NewProp_bConvertToVoxelSpace = { "bConvertToVoxelSpace", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VoxelLevelTools_eventLevelAsync_Parms), &Z_Construct_UFunction_UVoxelLevelTools_LevelAsync_Statics::NewProp_bConvertToVoxelSpace_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UVoxelLevelTools_LevelAsync_Statics::NewProp_bUpdateRender_SetBit(void* Obj)
{
	((VoxelLevelTools_eventLevelAsync_Parms*)Obj)->bUpdateRender = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelLevelTools_LevelAsync_Statics::NewProp_bUpdateRender = { "bUpdateRender", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VoxelLevelTools_eventLevelAsync_Parms), &Z_Construct_UFunction_UVoxelLevelTools_LevelAsync_Statics::NewProp_bUpdateRender_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UVoxelLevelTools_LevelAsync_Statics::NewProp_bHideLatentWarnings_SetBit(void* Obj)
{
	((VoxelLevelTools_eventLevelAsync_Parms*)Obj)->bHideLatentWarnings = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelLevelTools_LevelAsync_Statics::NewProp_bHideLatentWarnings = { "bHideLatentWarnings", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VoxelLevelTools_eventLevelAsync_Parms), &Z_Construct_UFunction_UVoxelLevelTools_LevelAsync_Statics::NewProp_bHideLatentWarnings_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelLevelTools_LevelAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelLevelTools_LevelAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelLevelTools_LevelAsync_Statics::NewProp_LatentInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelLevelTools_LevelAsync_Statics::NewProp_ModifiedValues_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelLevelTools_LevelAsync_Statics::NewProp_ModifiedValues,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelLevelTools_LevelAsync_Statics::NewProp_EditedBounds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelLevelTools_LevelAsync_Statics::NewProp_VoxelWorld,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelLevelTools_LevelAsync_Statics::NewProp_Position,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelLevelTools_LevelAsync_Statics::NewProp_Radius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelLevelTools_LevelAsync_Statics::NewProp_Falloff,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelLevelTools_LevelAsync_Statics::NewProp_Height,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelLevelTools_LevelAsync_Statics::NewProp_bAdditive,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelLevelTools_LevelAsync_Statics::NewProp_bMultiThreaded,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelLevelTools_LevelAsync_Statics::NewProp_bRecordModifiedValues,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelLevelTools_LevelAsync_Statics::NewProp_bConvertToVoxelSpace,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelLevelTools_LevelAsync_Statics::NewProp_bUpdateRender,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelLevelTools_LevelAsync_Statics::NewProp_bHideLatentWarnings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelLevelTools_LevelAsync_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelLevelTools_LevelAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelLevelTools, nullptr, "LevelAsync", Z_Construct_UFunction_UVoxelLevelTools_LevelAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelLevelTools_LevelAsync_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVoxelLevelTools_LevelAsync_Statics::VoxelLevelTools_eventLevelAsync_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelLevelTools_LevelAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelLevelTools_LevelAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVoxelLevelTools_LevelAsync_Statics::VoxelLevelTools_eventLevelAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVoxelLevelTools_LevelAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelLevelTools_LevelAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelLevelTools::execLevelAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
	P_GET_TARRAY_REF(FModifiedVoxelValue,Z_Param_Out_ModifiedValues);
	P_GET_STRUCT_REF(FVoxelIntBox,Z_Param_Out_EditedBounds);
	P_GET_OBJECT(AVoxelWorld,Z_Param_VoxelWorld);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_Position);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Radius);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Falloff);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Height);
	P_GET_UBOOL(Z_Param_bAdditive);
	P_GET_UBOOL(Z_Param_bMultiThreaded);
	P_GET_UBOOL(Z_Param_bRecordModifiedValues);
	P_GET_UBOOL(Z_Param_bConvertToVoxelSpace);
	P_GET_UBOOL(Z_Param_bUpdateRender);
	P_GET_UBOOL(Z_Param_bHideLatentWarnings);
	P_FINISH;
	P_NATIVE_BEGIN;
	UVoxelLevelTools::LevelAsync(Z_Param_WorldContextObject,Z_Param_LatentInfo,Z_Param_Out_ModifiedValues,Z_Param_Out_EditedBounds,Z_Param_VoxelWorld,Z_Param_Out_Position,Z_Param_Radius,Z_Param_Falloff,Z_Param_Height,Z_Param_bAdditive,Z_Param_bMultiThreaded,Z_Param_bRecordModifiedValues,Z_Param_bConvertToVoxelSpace,Z_Param_bUpdateRender,Z_Param_bHideLatentWarnings);
	P_NATIVE_END;
}
// ********** End Class UVoxelLevelTools Function LevelAsync ***************************************

// ********** Begin Class UVoxelLevelTools *********************************************************
void UVoxelLevelTools::StaticRegisterNativesUVoxelLevelTools()
{
	UClass* Class = UVoxelLevelTools::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Level", &UVoxelLevelTools::execLevel },
		{ "LevelAsync", &UVoxelLevelTools::execLevelAsync },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UVoxelLevelTools;
UClass* UVoxelLevelTools::GetPrivateStaticClass()
{
	using TClass = UVoxelLevelTools;
	if (!Z_Registration_Info_UClass_UVoxelLevelTools.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("VoxelLevelTools"),
			Z_Registration_Info_UClass_UVoxelLevelTools.InnerSingleton,
			StaticRegisterNativesUVoxelLevelTools,
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
	return Z_Registration_Info_UClass_UVoxelLevelTools.InnerSingleton;
}
UClass* Z_Construct_UClass_UVoxelLevelTools_NoRegister()
{
	return UVoxelLevelTools::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UVoxelLevelTools_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "VoxelTools/Gen/VoxelLevelTools.h" },
		{ "ModuleRelativePath", "Public/VoxelTools/Gen/VoxelLevelTools.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UVoxelLevelTools_Level, "Level" }, // 1955682342
		{ &Z_Construct_UFunction_UVoxelLevelTools_LevelAsync, "LevelAsync" }, // 2380358804
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelLevelTools>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UVoxelLevelTools_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UVoxelToolsBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelLevelTools_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelLevelTools_Statics::ClassParams = {
	&UVoxelLevelTools::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelLevelTools_Statics::Class_MetaDataParams), Z_Construct_UClass_UVoxelLevelTools_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVoxelLevelTools()
{
	if (!Z_Registration_Info_UClass_UVoxelLevelTools.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelLevelTools.OuterSingleton, Z_Construct_UClass_UVoxelLevelTools_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVoxelLevelTools.OuterSingleton;
}
UVoxelLevelTools::UVoxelLevelTools(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelLevelTools);
UVoxelLevelTools::~UVoxelLevelTools() {}
// ********** End Class UVoxelLevelTools ***********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelTools_Gen_VoxelLevelTools_h__Script_Voxel_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UVoxelLevelTools, UVoxelLevelTools::StaticClass, TEXT("UVoxelLevelTools"), &Z_Registration_Info_UClass_UVoxelLevelTools, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelLevelTools), 758973357U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelTools_Gen_VoxelLevelTools_h__Script_Voxel_1882626901(TEXT("/Script/Voxel"),
	Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelTools_Gen_VoxelLevelTools_h__Script_Voxel_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelTools_Gen_VoxelLevelTools_h__Script_Voxel_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
