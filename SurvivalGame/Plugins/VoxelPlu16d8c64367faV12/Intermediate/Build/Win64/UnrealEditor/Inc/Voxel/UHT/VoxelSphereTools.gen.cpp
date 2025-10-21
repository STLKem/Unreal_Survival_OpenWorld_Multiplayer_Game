// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VoxelTools/Gen/VoxelSphereTools.h"
#include "Engine/LatentActionManager.h"
#include "VoxelIntBox.h"
#include "VoxelTools/Gen/VoxelToolsBase.h"
#include "VoxelTools/VoxelPaintMaterial.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeVoxelSphereTools() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FLatentActionInfo();
UPackage* Z_Construct_UPackage__Script_Voxel();
VOXEL_API UClass* Z_Construct_UClass_AVoxelWorld_NoRegister();
VOXEL_API UClass* Z_Construct_UClass_UVoxelSphereTools();
VOXEL_API UClass* Z_Construct_UClass_UVoxelSphereTools_NoRegister();
VOXEL_API UClass* Z_Construct_UClass_UVoxelToolsBase();
VOXEL_API UEnum* Z_Construct_UEnum_Voxel_EVoxelFalloff();
VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FModifiedVoxelMaterial();
VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FModifiedVoxelValue();
VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelIntBox();
VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelPaintMaterial();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UVoxelSphereTools Function AddSphere *************************************
struct Z_Construct_UFunction_UVoxelSphereTools_AddSphere_Statics
{
	struct VoxelSphereTools_eventAddSphere_Parms
	{
		TArray<FModifiedVoxelValue> ModifiedValues;
		FVoxelIntBox EditedBounds;
		AVoxelWorld* VoxelWorld;
		FVector Position;
		float Radius;
		bool bMultiThreaded;
		bool bRecordModifiedValues;
		bool bConvertToVoxelSpace;
		bool bUpdateRender;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "bMultiThreaded, bRecordModifiedValues, bConvertToVoxelSpace, bUpdateRender" },
		{ "Category", "Voxel|Tools|Sphere Tools" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Add a sphere\n\x09 * @see AddSphere, AddSphereAsync and FVoxelSphereToolsImpl::AddSphere\n\x09 * @param\x09ModifiedValues       \x09Record the Values modified by this function. Useful to track the amount of edit done, for instance to give resources when digging\n\x09 * @param\x09""EditedBounds         \x09Returns the bounds edited by this function\n\x09 * @param\x09VoxelWorld           \x09The voxel world to do the edit to\n\x09 * @param\x09Position             \x09The position of the center. In world space (unreal units) if bConvertToVoxelSpace is true. In voxel space if false.\n\x09 * @param\x09Radius               \x09The radius. In unreal units if bConvertToVoxelSpace is true. In voxels if false.\n\x09 * @param\x09""bMultiThreaded       \x09If true, multiple threads will be used to make the edit faster.\n\x09 * @param\x09""bRecordModifiedValues\x09If false, will not fill ModifiedValues, making the edit faster.\n\x09 * @param\x09""bConvertToVoxelSpace \x09If true, Position and Radius will be converted to voxel space. Else they will be used directly.\n\x09 * @param\x09""bUpdateRender        \x09If false, will only edit the data and not update the render. Rarely needed.\n\x09*/" },
#endif
		{ "CPP_Default_bConvertToVoxelSpace", "true" },
		{ "CPP_Default_bMultiThreaded", "true" },
		{ "CPP_Default_bRecordModifiedValues", "true" },
		{ "CPP_Default_bUpdateRender", "true" },
		{ "DefaultToSelf", "VoxelWorld" },
		{ "ModuleRelativePath", "Public/VoxelTools/Gen/VoxelSphereTools.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Add a sphere\n@see AddSphere, AddSphereAsync and FVoxelSphereToolsImpl::AddSphere\n@param       ModifiedValues          Record the Values modified by this function. Useful to track the amount of edit done, for instance to give resources when digging\n@param       EditedBounds            Returns the bounds edited by this function\n@param       VoxelWorld              The voxel world to do the edit to\n@param       Position                The position of the center. In world space (unreal units) if bConvertToVoxelSpace is true. In voxel space if false.\n@param       Radius                  The radius. In unreal units if bConvertToVoxelSpace is true. In voxels if false.\n@param       bMultiThreaded          If true, multiple threads will be used to make the edit faster.\n@param       bRecordModifiedValues   If false, will not fill ModifiedValues, making the edit faster.\n@param       bConvertToVoxelSpace    If true, Position and Radius will be converted to voxel space. Else they will be used directly.\n@param       bUpdateRender           If false, will only edit the data and not update the render. Rarely needed." },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSphereTools_AddSphere_Statics::NewProp_ModifiedValues_Inner = { "ModifiedValues", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FModifiedVoxelValue, METADATA_PARAMS(0, nullptr) }; // 1075743150
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVoxelSphereTools_AddSphere_Statics::NewProp_ModifiedValues = { "ModifiedValues", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelSphereTools_eventAddSphere_Parms, ModifiedValues), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 1075743150
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSphereTools_AddSphere_Statics::NewProp_EditedBounds = { "EditedBounds", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelSphereTools_eventAddSphere_Parms, EditedBounds), Z_Construct_UScriptStruct_FVoxelIntBox, METADATA_PARAMS(0, nullptr) }; // 3520536583
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelSphereTools_AddSphere_Statics::NewProp_VoxelWorld = { "VoxelWorld", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelSphereTools_eventAddSphere_Parms, VoxelWorld), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSphereTools_AddSphere_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelSphereTools_eventAddSphere_Parms, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Position_MetaData), NewProp_Position_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoxelSphereTools_AddSphere_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelSphereTools_eventAddSphere_Parms, Radius), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UVoxelSphereTools_AddSphere_Statics::NewProp_bMultiThreaded_SetBit(void* Obj)
{
	((VoxelSphereTools_eventAddSphere_Parms*)Obj)->bMultiThreaded = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelSphereTools_AddSphere_Statics::NewProp_bMultiThreaded = { "bMultiThreaded", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VoxelSphereTools_eventAddSphere_Parms), &Z_Construct_UFunction_UVoxelSphereTools_AddSphere_Statics::NewProp_bMultiThreaded_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UVoxelSphereTools_AddSphere_Statics::NewProp_bRecordModifiedValues_SetBit(void* Obj)
{
	((VoxelSphereTools_eventAddSphere_Parms*)Obj)->bRecordModifiedValues = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelSphereTools_AddSphere_Statics::NewProp_bRecordModifiedValues = { "bRecordModifiedValues", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VoxelSphereTools_eventAddSphere_Parms), &Z_Construct_UFunction_UVoxelSphereTools_AddSphere_Statics::NewProp_bRecordModifiedValues_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UVoxelSphereTools_AddSphere_Statics::NewProp_bConvertToVoxelSpace_SetBit(void* Obj)
{
	((VoxelSphereTools_eventAddSphere_Parms*)Obj)->bConvertToVoxelSpace = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelSphereTools_AddSphere_Statics::NewProp_bConvertToVoxelSpace = { "bConvertToVoxelSpace", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VoxelSphereTools_eventAddSphere_Parms), &Z_Construct_UFunction_UVoxelSphereTools_AddSphere_Statics::NewProp_bConvertToVoxelSpace_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UVoxelSphereTools_AddSphere_Statics::NewProp_bUpdateRender_SetBit(void* Obj)
{
	((VoxelSphereTools_eventAddSphere_Parms*)Obj)->bUpdateRender = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelSphereTools_AddSphere_Statics::NewProp_bUpdateRender = { "bUpdateRender", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VoxelSphereTools_eventAddSphere_Parms), &Z_Construct_UFunction_UVoxelSphereTools_AddSphere_Statics::NewProp_bUpdateRender_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelSphereTools_AddSphere_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_AddSphere_Statics::NewProp_ModifiedValues_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_AddSphere_Statics::NewProp_ModifiedValues,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_AddSphere_Statics::NewProp_EditedBounds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_AddSphere_Statics::NewProp_VoxelWorld,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_AddSphere_Statics::NewProp_Position,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_AddSphere_Statics::NewProp_Radius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_AddSphere_Statics::NewProp_bMultiThreaded,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_AddSphere_Statics::NewProp_bRecordModifiedValues,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_AddSphere_Statics::NewProp_bConvertToVoxelSpace,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_AddSphere_Statics::NewProp_bUpdateRender,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSphereTools_AddSphere_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelSphereTools_AddSphere_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelSphereTools, nullptr, "AddSphere", Z_Construct_UFunction_UVoxelSphereTools_AddSphere_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSphereTools_AddSphere_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVoxelSphereTools_AddSphere_Statics::VoxelSphereTools_eventAddSphere_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSphereTools_AddSphere_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelSphereTools_AddSphere_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVoxelSphereTools_AddSphere_Statics::VoxelSphereTools_eventAddSphere_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVoxelSphereTools_AddSphere()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelSphereTools_AddSphere_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelSphereTools::execAddSphere)
{
	P_GET_TARRAY_REF(FModifiedVoxelValue,Z_Param_Out_ModifiedValues);
	P_GET_STRUCT_REF(FVoxelIntBox,Z_Param_Out_EditedBounds);
	P_GET_OBJECT(AVoxelWorld,Z_Param_VoxelWorld);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_Position);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Radius);
	P_GET_UBOOL(Z_Param_bMultiThreaded);
	P_GET_UBOOL(Z_Param_bRecordModifiedValues);
	P_GET_UBOOL(Z_Param_bConvertToVoxelSpace);
	P_GET_UBOOL(Z_Param_bUpdateRender);
	P_FINISH;
	P_NATIVE_BEGIN;
	UVoxelSphereTools::AddSphere(Z_Param_Out_ModifiedValues,Z_Param_Out_EditedBounds,Z_Param_VoxelWorld,Z_Param_Out_Position,Z_Param_Radius,Z_Param_bMultiThreaded,Z_Param_bRecordModifiedValues,Z_Param_bConvertToVoxelSpace,Z_Param_bUpdateRender);
	P_NATIVE_END;
}
// ********** End Class UVoxelSphereTools Function AddSphere ***************************************

// ********** Begin Class UVoxelSphereTools Function AddSphereAsync ********************************
struct Z_Construct_UFunction_UVoxelSphereTools_AddSphereAsync_Statics
{
	struct VoxelSphereTools_eventAddSphereAsync_Parms
	{
		UObject* WorldContextObject;
		FLatentActionInfo LatentInfo;
		TArray<FModifiedVoxelValue> ModifiedValues;
		FVoxelIntBox EditedBounds;
		AVoxelWorld* VoxelWorld;
		FVector Position;
		float Radius;
		bool bMultiThreaded;
		bool bRecordModifiedValues;
		bool bConvertToVoxelSpace;
		bool bUpdateRender;
		bool bHideLatentWarnings;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "bMultiThreaded, bRecordModifiedValues, bConvertToVoxelSpace, bUpdateRender, bHideLatentWarnings" },
		{ "Category", "Voxel|Tools|Sphere Tools" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Add a sphere\n\x09 * Runs asynchronously in a background thread\n\x09 * @see AddSphere, AddSphereAsync and FVoxelSphereToolsImpl::AddSphere\n\x09 * @param\x09ModifiedValues       \x09Record the Values modified by this function. Useful to track the amount of edit done, for instance to give resources when digging\n\x09 * @param\x09""EditedBounds         \x09Returns the bounds edited by this function\n\x09 * @param\x09VoxelWorld           \x09The voxel world to do the edit to\n\x09 * @param\x09Position             \x09The position of the center. In world space (unreal units) if bConvertToVoxelSpace is true. In voxel space if false.\n\x09 * @param\x09Radius               \x09The radius. In unreal units if bConvertToVoxelSpace is true. In voxels if false.\n\x09 * @param\x09""bMultiThreaded       \x09If true, multiple threads will be used to make the edit faster. Not recommended on async functions, as it might cause lag.\n\x09 * @param\x09""bRecordModifiedValues\x09If false, will not fill ModifiedValues, making the edit faster.\n\x09 * @param\x09""bConvertToVoxelSpace \x09If true, Position and Radius will be converted to voxel space. Else they will be used directly.\n\x09 * @param\x09""bUpdateRender        \x09If false, will only edit the data and not update the render. Rarely needed.\n\x09 * @param\x09""bHideLatentWarnings  \x09Hide latent warnings caused by calling a node before its previous call completion.\n\x09*/" },
#endif
		{ "CPP_Default_bConvertToVoxelSpace", "true" },
		{ "CPP_Default_bHideLatentWarnings", "false" },
		{ "CPP_Default_bMultiThreaded", "false" },
		{ "CPP_Default_bRecordModifiedValues", "true" },
		{ "CPP_Default_bUpdateRender", "true" },
		{ "DefaultToSelf", "VoxelWorld" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Public/VoxelTools/Gen/VoxelSphereTools.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Add a sphere\nRuns asynchronously in a background thread\n@see AddSphere, AddSphereAsync and FVoxelSphereToolsImpl::AddSphere\n@param       ModifiedValues          Record the Values modified by this function. Useful to track the amount of edit done, for instance to give resources when digging\n@param       EditedBounds            Returns the bounds edited by this function\n@param       VoxelWorld              The voxel world to do the edit to\n@param       Position                The position of the center. In world space (unreal units) if bConvertToVoxelSpace is true. In voxel space if false.\n@param       Radius                  The radius. In unreal units if bConvertToVoxelSpace is true. In voxels if false.\n@param       bMultiThreaded          If true, multiple threads will be used to make the edit faster. Not recommended on async functions, as it might cause lag.\n@param       bRecordModifiedValues   If false, will not fill ModifiedValues, making the edit faster.\n@param       bConvertToVoxelSpace    If true, Position and Radius will be converted to voxel space. Else they will be used directly.\n@param       bUpdateRender           If false, will only edit the data and not update the render. Rarely needed.\n@param       bHideLatentWarnings     Hide latent warnings caused by calling a node before its previous call completion." },
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
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelSphereTools_AddSphereAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelSphereTools_eventAddSphereAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSphereTools_AddSphereAsync_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelSphereTools_eventAddSphereAsync_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(0, nullptr) }; // 4146275481
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSphereTools_AddSphereAsync_Statics::NewProp_ModifiedValues_Inner = { "ModifiedValues", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FModifiedVoxelValue, METADATA_PARAMS(0, nullptr) }; // 1075743150
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVoxelSphereTools_AddSphereAsync_Statics::NewProp_ModifiedValues = { "ModifiedValues", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelSphereTools_eventAddSphereAsync_Parms, ModifiedValues), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 1075743150
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSphereTools_AddSphereAsync_Statics::NewProp_EditedBounds = { "EditedBounds", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelSphereTools_eventAddSphereAsync_Parms, EditedBounds), Z_Construct_UScriptStruct_FVoxelIntBox, METADATA_PARAMS(0, nullptr) }; // 3520536583
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelSphereTools_AddSphereAsync_Statics::NewProp_VoxelWorld = { "VoxelWorld", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelSphereTools_eventAddSphereAsync_Parms, VoxelWorld), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSphereTools_AddSphereAsync_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelSphereTools_eventAddSphereAsync_Parms, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Position_MetaData), NewProp_Position_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoxelSphereTools_AddSphereAsync_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelSphereTools_eventAddSphereAsync_Parms, Radius), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UVoxelSphereTools_AddSphereAsync_Statics::NewProp_bMultiThreaded_SetBit(void* Obj)
{
	((VoxelSphereTools_eventAddSphereAsync_Parms*)Obj)->bMultiThreaded = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelSphereTools_AddSphereAsync_Statics::NewProp_bMultiThreaded = { "bMultiThreaded", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VoxelSphereTools_eventAddSphereAsync_Parms), &Z_Construct_UFunction_UVoxelSphereTools_AddSphereAsync_Statics::NewProp_bMultiThreaded_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UVoxelSphereTools_AddSphereAsync_Statics::NewProp_bRecordModifiedValues_SetBit(void* Obj)
{
	((VoxelSphereTools_eventAddSphereAsync_Parms*)Obj)->bRecordModifiedValues = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelSphereTools_AddSphereAsync_Statics::NewProp_bRecordModifiedValues = { "bRecordModifiedValues", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VoxelSphereTools_eventAddSphereAsync_Parms), &Z_Construct_UFunction_UVoxelSphereTools_AddSphereAsync_Statics::NewProp_bRecordModifiedValues_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UVoxelSphereTools_AddSphereAsync_Statics::NewProp_bConvertToVoxelSpace_SetBit(void* Obj)
{
	((VoxelSphereTools_eventAddSphereAsync_Parms*)Obj)->bConvertToVoxelSpace = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelSphereTools_AddSphereAsync_Statics::NewProp_bConvertToVoxelSpace = { "bConvertToVoxelSpace", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VoxelSphereTools_eventAddSphereAsync_Parms), &Z_Construct_UFunction_UVoxelSphereTools_AddSphereAsync_Statics::NewProp_bConvertToVoxelSpace_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UVoxelSphereTools_AddSphereAsync_Statics::NewProp_bUpdateRender_SetBit(void* Obj)
{
	((VoxelSphereTools_eventAddSphereAsync_Parms*)Obj)->bUpdateRender = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelSphereTools_AddSphereAsync_Statics::NewProp_bUpdateRender = { "bUpdateRender", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VoxelSphereTools_eventAddSphereAsync_Parms), &Z_Construct_UFunction_UVoxelSphereTools_AddSphereAsync_Statics::NewProp_bUpdateRender_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UVoxelSphereTools_AddSphereAsync_Statics::NewProp_bHideLatentWarnings_SetBit(void* Obj)
{
	((VoxelSphereTools_eventAddSphereAsync_Parms*)Obj)->bHideLatentWarnings = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelSphereTools_AddSphereAsync_Statics::NewProp_bHideLatentWarnings = { "bHideLatentWarnings", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VoxelSphereTools_eventAddSphereAsync_Parms), &Z_Construct_UFunction_UVoxelSphereTools_AddSphereAsync_Statics::NewProp_bHideLatentWarnings_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelSphereTools_AddSphereAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_AddSphereAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_AddSphereAsync_Statics::NewProp_LatentInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_AddSphereAsync_Statics::NewProp_ModifiedValues_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_AddSphereAsync_Statics::NewProp_ModifiedValues,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_AddSphereAsync_Statics::NewProp_EditedBounds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_AddSphereAsync_Statics::NewProp_VoxelWorld,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_AddSphereAsync_Statics::NewProp_Position,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_AddSphereAsync_Statics::NewProp_Radius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_AddSphereAsync_Statics::NewProp_bMultiThreaded,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_AddSphereAsync_Statics::NewProp_bRecordModifiedValues,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_AddSphereAsync_Statics::NewProp_bConvertToVoxelSpace,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_AddSphereAsync_Statics::NewProp_bUpdateRender,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_AddSphereAsync_Statics::NewProp_bHideLatentWarnings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSphereTools_AddSphereAsync_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelSphereTools_AddSphereAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelSphereTools, nullptr, "AddSphereAsync", Z_Construct_UFunction_UVoxelSphereTools_AddSphereAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSphereTools_AddSphereAsync_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVoxelSphereTools_AddSphereAsync_Statics::VoxelSphereTools_eventAddSphereAsync_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSphereTools_AddSphereAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelSphereTools_AddSphereAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVoxelSphereTools_AddSphereAsync_Statics::VoxelSphereTools_eventAddSphereAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVoxelSphereTools_AddSphereAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelSphereTools_AddSphereAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelSphereTools::execAddSphereAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
	P_GET_TARRAY_REF(FModifiedVoxelValue,Z_Param_Out_ModifiedValues);
	P_GET_STRUCT_REF(FVoxelIntBox,Z_Param_Out_EditedBounds);
	P_GET_OBJECT(AVoxelWorld,Z_Param_VoxelWorld);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_Position);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Radius);
	P_GET_UBOOL(Z_Param_bMultiThreaded);
	P_GET_UBOOL(Z_Param_bRecordModifiedValues);
	P_GET_UBOOL(Z_Param_bConvertToVoxelSpace);
	P_GET_UBOOL(Z_Param_bUpdateRender);
	P_GET_UBOOL(Z_Param_bHideLatentWarnings);
	P_FINISH;
	P_NATIVE_BEGIN;
	UVoxelSphereTools::AddSphereAsync(Z_Param_WorldContextObject,Z_Param_LatentInfo,Z_Param_Out_ModifiedValues,Z_Param_Out_EditedBounds,Z_Param_VoxelWorld,Z_Param_Out_Position,Z_Param_Radius,Z_Param_bMultiThreaded,Z_Param_bRecordModifiedValues,Z_Param_bConvertToVoxelSpace,Z_Param_bUpdateRender,Z_Param_bHideLatentWarnings);
	P_NATIVE_END;
}
// ********** End Class UVoxelSphereTools Function AddSphereAsync **********************************

// ********** Begin Class UVoxelSphereTools Function ApplyKernelSphere *****************************
struct Z_Construct_UFunction_UVoxelSphereTools_ApplyKernelSphere_Statics
{
	struct VoxelSphereTools_eventApplyKernelSphere_Parms
	{
		TArray<FModifiedVoxelValue> ModifiedValues;
		FVoxelIntBox EditedBounds;
		AVoxelWorld* VoxelWorld;
		FVector Position;
		float Radius;
		float CenterMultiplier;
		float FirstDegreeNeighborMultiplier;
		float SecondDegreeNeighborMultiplier;
		float ThirdDegreeNeighborMultiplier;
		int32 NumIterations;
		bool bMultiThreaded;
		bool bRecordModifiedValues;
		bool bConvertToVoxelSpace;
		bool bUpdateRender;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "bMultiThreaded, bRecordModifiedValues, bConvertToVoxelSpace, bUpdateRender" },
		{ "Category", "Voxel|Tools|Sphere Tools" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Apply a 3x3x3 kernel\n\x09 * @see ApplyKernelSphere, ApplyKernelSphereAsync and FVoxelSphereToolsImpl::ApplyKernelSphere\n\x09 * @param\x09ModifiedValues                \x09Record the Values modified by this function. Useful to track the amount of edit done, for instance to give resources when digging\n\x09 * @param\x09""EditedBounds                  \x09Returns the bounds edited by this function\n\x09 * @param\x09VoxelWorld                    \x09The voxel world to do the edit to\n\x09 * @param\x09Position                      \x09The position of the center. In world space (unreal units) if bConvertToVoxelSpace is true. In voxel space if false.\n\x09 * @param\x09Radius                        \x09The radius. In unreal units if bConvertToVoxelSpace is true. In voxels if false.\n\x09 * @param\x09""CenterMultiplier              \x09Multiplier of the center value\n\x09 * @param\x09""FirstDegreeNeighborMultiplier \x09Multiplier of the immediate neighbors, which share 2 coordinates with the center\n\x09 * @param\x09SecondDegreeNeighborMultiplier\x09Multiplier of the near corners neighbors, which share 1 coordinates with the center\n\x09 * @param\x09ThirdDegreeNeighborMultiplier \x09Multiplier of the far corners neighbors, which share 0 coordinates with the center\n\x09 * @param\x09NumIterations                 \x09The number of times the kernel is going to be applied. Increase to make the effect faster, but more expensive.\n\x09 * @param\x09""bMultiThreaded                \x09If true, multiple threads will be used to make the edit faster.\n\x09 * @param\x09""bRecordModifiedValues         \x09If false, will not fill ModifiedValues, making the edit faster.\n\x09 * @param\x09""bConvertToVoxelSpace          \x09If true, Position and Radius will be converted to voxel space. Else they will be used directly.\n\x09 * @param\x09""bUpdateRender                 \x09If false, will only edit the data and not update the render. Rarely needed.\n\x09*/" },
#endif
		{ "CPP_Default_bConvertToVoxelSpace", "true" },
		{ "CPP_Default_bMultiThreaded", "true" },
		{ "CPP_Default_bRecordModifiedValues", "true" },
		{ "CPP_Default_bUpdateRender", "true" },
		{ "CPP_Default_CenterMultiplier", "0.037000" },
		{ "CPP_Default_FirstDegreeNeighborMultiplier", "0.037000" },
		{ "CPP_Default_NumIterations", "1" },
		{ "CPP_Default_SecondDegreeNeighborMultiplier", "0.037000" },
		{ "CPP_Default_ThirdDegreeNeighborMultiplier", "0.037000" },
		{ "DefaultToSelf", "VoxelWorld" },
		{ "ModuleRelativePath", "Public/VoxelTools/Gen/VoxelSphereTools.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Apply a 3x3x3 kernel\n@see ApplyKernelSphere, ApplyKernelSphereAsync and FVoxelSphereToolsImpl::ApplyKernelSphere\n@param       ModifiedValues                  Record the Values modified by this function. Useful to track the amount of edit done, for instance to give resources when digging\n@param       EditedBounds                    Returns the bounds edited by this function\n@param       VoxelWorld                      The voxel world to do the edit to\n@param       Position                        The position of the center. In world space (unreal units) if bConvertToVoxelSpace is true. In voxel space if false.\n@param       Radius                          The radius. In unreal units if bConvertToVoxelSpace is true. In voxels if false.\n@param       CenterMultiplier                Multiplier of the center value\n@param       FirstDegreeNeighborMultiplier   Multiplier of the immediate neighbors, which share 2 coordinates with the center\n@param       SecondDegreeNeighborMultiplier  Multiplier of the near corners neighbors, which share 1 coordinates with the center\n@param       ThirdDegreeNeighborMultiplier   Multiplier of the far corners neighbors, which share 0 coordinates with the center\n@param       NumIterations                   The number of times the kernel is going to be applied. Increase to make the effect faster, but more expensive.\n@param       bMultiThreaded                  If true, multiple threads will be used to make the edit faster.\n@param       bRecordModifiedValues           If false, will not fill ModifiedValues, making the edit faster.\n@param       bConvertToVoxelSpace            If true, Position and Radius will be converted to voxel space. Else they will be used directly.\n@param       bUpdateRender                   If false, will only edit the data and not update the render. Rarely needed." },
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
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CenterMultiplier;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FirstDegreeNeighborMultiplier;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SecondDegreeNeighborMultiplier;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ThirdDegreeNeighborMultiplier;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumIterations;
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSphereTools_ApplyKernelSphere_Statics::NewProp_ModifiedValues_Inner = { "ModifiedValues", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FModifiedVoxelValue, METADATA_PARAMS(0, nullptr) }; // 1075743150
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVoxelSphereTools_ApplyKernelSphere_Statics::NewProp_ModifiedValues = { "ModifiedValues", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelSphereTools_eventApplyKernelSphere_Parms, ModifiedValues), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 1075743150
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSphereTools_ApplyKernelSphere_Statics::NewProp_EditedBounds = { "EditedBounds", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelSphereTools_eventApplyKernelSphere_Parms, EditedBounds), Z_Construct_UScriptStruct_FVoxelIntBox, METADATA_PARAMS(0, nullptr) }; // 3520536583
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelSphereTools_ApplyKernelSphere_Statics::NewProp_VoxelWorld = { "VoxelWorld", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelSphereTools_eventApplyKernelSphere_Parms, VoxelWorld), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSphereTools_ApplyKernelSphere_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelSphereTools_eventApplyKernelSphere_Parms, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Position_MetaData), NewProp_Position_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoxelSphereTools_ApplyKernelSphere_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelSphereTools_eventApplyKernelSphere_Parms, Radius), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoxelSphereTools_ApplyKernelSphere_Statics::NewProp_CenterMultiplier = { "CenterMultiplier", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelSphereTools_eventApplyKernelSphere_Parms, CenterMultiplier), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoxelSphereTools_ApplyKernelSphere_Statics::NewProp_FirstDegreeNeighborMultiplier = { "FirstDegreeNeighborMultiplier", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelSphereTools_eventApplyKernelSphere_Parms, FirstDegreeNeighborMultiplier), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoxelSphereTools_ApplyKernelSphere_Statics::NewProp_SecondDegreeNeighborMultiplier = { "SecondDegreeNeighborMultiplier", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelSphereTools_eventApplyKernelSphere_Parms, SecondDegreeNeighborMultiplier), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoxelSphereTools_ApplyKernelSphere_Statics::NewProp_ThirdDegreeNeighborMultiplier = { "ThirdDegreeNeighborMultiplier", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelSphereTools_eventApplyKernelSphere_Parms, ThirdDegreeNeighborMultiplier), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVoxelSphereTools_ApplyKernelSphere_Statics::NewProp_NumIterations = { "NumIterations", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelSphereTools_eventApplyKernelSphere_Parms, NumIterations), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UVoxelSphereTools_ApplyKernelSphere_Statics::NewProp_bMultiThreaded_SetBit(void* Obj)
{
	((VoxelSphereTools_eventApplyKernelSphere_Parms*)Obj)->bMultiThreaded = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelSphereTools_ApplyKernelSphere_Statics::NewProp_bMultiThreaded = { "bMultiThreaded", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VoxelSphereTools_eventApplyKernelSphere_Parms), &Z_Construct_UFunction_UVoxelSphereTools_ApplyKernelSphere_Statics::NewProp_bMultiThreaded_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UVoxelSphereTools_ApplyKernelSphere_Statics::NewProp_bRecordModifiedValues_SetBit(void* Obj)
{
	((VoxelSphereTools_eventApplyKernelSphere_Parms*)Obj)->bRecordModifiedValues = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelSphereTools_ApplyKernelSphere_Statics::NewProp_bRecordModifiedValues = { "bRecordModifiedValues", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VoxelSphereTools_eventApplyKernelSphere_Parms), &Z_Construct_UFunction_UVoxelSphereTools_ApplyKernelSphere_Statics::NewProp_bRecordModifiedValues_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UVoxelSphereTools_ApplyKernelSphere_Statics::NewProp_bConvertToVoxelSpace_SetBit(void* Obj)
{
	((VoxelSphereTools_eventApplyKernelSphere_Parms*)Obj)->bConvertToVoxelSpace = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelSphereTools_ApplyKernelSphere_Statics::NewProp_bConvertToVoxelSpace = { "bConvertToVoxelSpace", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VoxelSphereTools_eventApplyKernelSphere_Parms), &Z_Construct_UFunction_UVoxelSphereTools_ApplyKernelSphere_Statics::NewProp_bConvertToVoxelSpace_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UVoxelSphereTools_ApplyKernelSphere_Statics::NewProp_bUpdateRender_SetBit(void* Obj)
{
	((VoxelSphereTools_eventApplyKernelSphere_Parms*)Obj)->bUpdateRender = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelSphereTools_ApplyKernelSphere_Statics::NewProp_bUpdateRender = { "bUpdateRender", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VoxelSphereTools_eventApplyKernelSphere_Parms), &Z_Construct_UFunction_UVoxelSphereTools_ApplyKernelSphere_Statics::NewProp_bUpdateRender_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelSphereTools_ApplyKernelSphere_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_ApplyKernelSphere_Statics::NewProp_ModifiedValues_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_ApplyKernelSphere_Statics::NewProp_ModifiedValues,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_ApplyKernelSphere_Statics::NewProp_EditedBounds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_ApplyKernelSphere_Statics::NewProp_VoxelWorld,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_ApplyKernelSphere_Statics::NewProp_Position,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_ApplyKernelSphere_Statics::NewProp_Radius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_ApplyKernelSphere_Statics::NewProp_CenterMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_ApplyKernelSphere_Statics::NewProp_FirstDegreeNeighborMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_ApplyKernelSphere_Statics::NewProp_SecondDegreeNeighborMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_ApplyKernelSphere_Statics::NewProp_ThirdDegreeNeighborMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_ApplyKernelSphere_Statics::NewProp_NumIterations,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_ApplyKernelSphere_Statics::NewProp_bMultiThreaded,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_ApplyKernelSphere_Statics::NewProp_bRecordModifiedValues,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_ApplyKernelSphere_Statics::NewProp_bConvertToVoxelSpace,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_ApplyKernelSphere_Statics::NewProp_bUpdateRender,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSphereTools_ApplyKernelSphere_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelSphereTools_ApplyKernelSphere_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelSphereTools, nullptr, "ApplyKernelSphere", Z_Construct_UFunction_UVoxelSphereTools_ApplyKernelSphere_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSphereTools_ApplyKernelSphere_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVoxelSphereTools_ApplyKernelSphere_Statics::VoxelSphereTools_eventApplyKernelSphere_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSphereTools_ApplyKernelSphere_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelSphereTools_ApplyKernelSphere_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVoxelSphereTools_ApplyKernelSphere_Statics::VoxelSphereTools_eventApplyKernelSphere_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVoxelSphereTools_ApplyKernelSphere()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelSphereTools_ApplyKernelSphere_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelSphereTools::execApplyKernelSphere)
{
	P_GET_TARRAY_REF(FModifiedVoxelValue,Z_Param_Out_ModifiedValues);
	P_GET_STRUCT_REF(FVoxelIntBox,Z_Param_Out_EditedBounds);
	P_GET_OBJECT(AVoxelWorld,Z_Param_VoxelWorld);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_Position);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Radius);
	P_GET_PROPERTY(FFloatProperty,Z_Param_CenterMultiplier);
	P_GET_PROPERTY(FFloatProperty,Z_Param_FirstDegreeNeighborMultiplier);
	P_GET_PROPERTY(FFloatProperty,Z_Param_SecondDegreeNeighborMultiplier);
	P_GET_PROPERTY(FFloatProperty,Z_Param_ThirdDegreeNeighborMultiplier);
	P_GET_PROPERTY(FIntProperty,Z_Param_NumIterations);
	P_GET_UBOOL(Z_Param_bMultiThreaded);
	P_GET_UBOOL(Z_Param_bRecordModifiedValues);
	P_GET_UBOOL(Z_Param_bConvertToVoxelSpace);
	P_GET_UBOOL(Z_Param_bUpdateRender);
	P_FINISH;
	P_NATIVE_BEGIN;
	UVoxelSphereTools::ApplyKernelSphere(Z_Param_Out_ModifiedValues,Z_Param_Out_EditedBounds,Z_Param_VoxelWorld,Z_Param_Out_Position,Z_Param_Radius,Z_Param_CenterMultiplier,Z_Param_FirstDegreeNeighborMultiplier,Z_Param_SecondDegreeNeighborMultiplier,Z_Param_ThirdDegreeNeighborMultiplier,Z_Param_NumIterations,Z_Param_bMultiThreaded,Z_Param_bRecordModifiedValues,Z_Param_bConvertToVoxelSpace,Z_Param_bUpdateRender);
	P_NATIVE_END;
}
// ********** End Class UVoxelSphereTools Function ApplyKernelSphere *******************************

// ********** Begin Class UVoxelSphereTools Function ApplyKernelSphereAsync ************************
struct Z_Construct_UFunction_UVoxelSphereTools_ApplyKernelSphereAsync_Statics
{
	struct VoxelSphereTools_eventApplyKernelSphereAsync_Parms
	{
		UObject* WorldContextObject;
		FLatentActionInfo LatentInfo;
		TArray<FModifiedVoxelValue> ModifiedValues;
		FVoxelIntBox EditedBounds;
		AVoxelWorld* VoxelWorld;
		FVector Position;
		float Radius;
		float CenterMultiplier;
		float FirstDegreeNeighborMultiplier;
		float SecondDegreeNeighborMultiplier;
		float ThirdDegreeNeighborMultiplier;
		int32 NumIterations;
		bool bMultiThreaded;
		bool bRecordModifiedValues;
		bool bConvertToVoxelSpace;
		bool bUpdateRender;
		bool bHideLatentWarnings;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "bMultiThreaded, bRecordModifiedValues, bConvertToVoxelSpace, bUpdateRender, bHideLatentWarnings" },
		{ "Category", "Voxel|Tools|Sphere Tools" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Apply a 3x3x3 kernel\n\x09 * Runs asynchronously in a background thread\n\x09 * @see ApplyKernelSphere, ApplyKernelSphereAsync and FVoxelSphereToolsImpl::ApplyKernelSphere\n\x09 * @param\x09ModifiedValues                \x09Record the Values modified by this function. Useful to track the amount of edit done, for instance to give resources when digging\n\x09 * @param\x09""EditedBounds                  \x09Returns the bounds edited by this function\n\x09 * @param\x09VoxelWorld                    \x09The voxel world to do the edit to\n\x09 * @param\x09Position                      \x09The position of the center. In world space (unreal units) if bConvertToVoxelSpace is true. In voxel space if false.\n\x09 * @param\x09Radius                        \x09The radius. In unreal units if bConvertToVoxelSpace is true. In voxels if false.\n\x09 * @param\x09""CenterMultiplier              \x09Multiplier of the center value\n\x09 * @param\x09""FirstDegreeNeighborMultiplier \x09Multiplier of the immediate neighbors, which share 2 coordinates with the center\n\x09 * @param\x09SecondDegreeNeighborMultiplier\x09Multiplier of the near corners neighbors, which share 1 coordinates with the center\n\x09 * @param\x09ThirdDegreeNeighborMultiplier \x09Multiplier of the far corners neighbors, which share 0 coordinates with the center\n\x09 * @param\x09NumIterations                 \x09The number of times the kernel is going to be applied. Increase to make the effect faster, but more expensive.\n\x09 * @param\x09""bMultiThreaded                \x09If true, multiple threads will be used to make the edit faster. Not recommended on async functions, as it might cause lag.\n\x09 * @param\x09""bRecordModifiedValues         \x09If false, will not fill ModifiedValues, making the edit faster.\n\x09 * @param\x09""bConvertToVoxelSpace          \x09If true, Position and Radius will be converted to voxel space. Else they will be used directly.\n\x09 * @param\x09""bUpdateRender                 \x09If false, will only edit the data and not update the render. Rarely needed.\n\x09 * @param\x09""bHideLatentWarnings           \x09Hide latent warnings caused by calling a node before its previous call completion.\n\x09*/" },
#endif
		{ "CPP_Default_bConvertToVoxelSpace", "true" },
		{ "CPP_Default_bHideLatentWarnings", "false" },
		{ "CPP_Default_bMultiThreaded", "false" },
		{ "CPP_Default_bRecordModifiedValues", "true" },
		{ "CPP_Default_bUpdateRender", "true" },
		{ "CPP_Default_CenterMultiplier", "0.037000" },
		{ "CPP_Default_FirstDegreeNeighborMultiplier", "0.037000" },
		{ "CPP_Default_NumIterations", "1" },
		{ "CPP_Default_SecondDegreeNeighborMultiplier", "0.037000" },
		{ "CPP_Default_ThirdDegreeNeighborMultiplier", "0.037000" },
		{ "DefaultToSelf", "VoxelWorld" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Public/VoxelTools/Gen/VoxelSphereTools.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Apply a 3x3x3 kernel\nRuns asynchronously in a background thread\n@see ApplyKernelSphere, ApplyKernelSphereAsync and FVoxelSphereToolsImpl::ApplyKernelSphere\n@param       ModifiedValues                  Record the Values modified by this function. Useful to track the amount of edit done, for instance to give resources when digging\n@param       EditedBounds                    Returns the bounds edited by this function\n@param       VoxelWorld                      The voxel world to do the edit to\n@param       Position                        The position of the center. In world space (unreal units) if bConvertToVoxelSpace is true. In voxel space if false.\n@param       Radius                          The radius. In unreal units if bConvertToVoxelSpace is true. In voxels if false.\n@param       CenterMultiplier                Multiplier of the center value\n@param       FirstDegreeNeighborMultiplier   Multiplier of the immediate neighbors, which share 2 coordinates with the center\n@param       SecondDegreeNeighborMultiplier  Multiplier of the near corners neighbors, which share 1 coordinates with the center\n@param       ThirdDegreeNeighborMultiplier   Multiplier of the far corners neighbors, which share 0 coordinates with the center\n@param       NumIterations                   The number of times the kernel is going to be applied. Increase to make the effect faster, but more expensive.\n@param       bMultiThreaded                  If true, multiple threads will be used to make the edit faster. Not recommended on async functions, as it might cause lag.\n@param       bRecordModifiedValues           If false, will not fill ModifiedValues, making the edit faster.\n@param       bConvertToVoxelSpace            If true, Position and Radius will be converted to voxel space. Else they will be used directly.\n@param       bUpdateRender                   If false, will only edit the data and not update the render. Rarely needed.\n@param       bHideLatentWarnings             Hide latent warnings caused by calling a node before its previous call completion." },
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
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CenterMultiplier;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FirstDegreeNeighborMultiplier;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SecondDegreeNeighborMultiplier;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ThirdDegreeNeighborMultiplier;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumIterations;
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
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelSphereTools_ApplyKernelSphereAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelSphereTools_eventApplyKernelSphereAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSphereTools_ApplyKernelSphereAsync_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelSphereTools_eventApplyKernelSphereAsync_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(0, nullptr) }; // 4146275481
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSphereTools_ApplyKernelSphereAsync_Statics::NewProp_ModifiedValues_Inner = { "ModifiedValues", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FModifiedVoxelValue, METADATA_PARAMS(0, nullptr) }; // 1075743150
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVoxelSphereTools_ApplyKernelSphereAsync_Statics::NewProp_ModifiedValues = { "ModifiedValues", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelSphereTools_eventApplyKernelSphereAsync_Parms, ModifiedValues), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 1075743150
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSphereTools_ApplyKernelSphereAsync_Statics::NewProp_EditedBounds = { "EditedBounds", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelSphereTools_eventApplyKernelSphereAsync_Parms, EditedBounds), Z_Construct_UScriptStruct_FVoxelIntBox, METADATA_PARAMS(0, nullptr) }; // 3520536583
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelSphereTools_ApplyKernelSphereAsync_Statics::NewProp_VoxelWorld = { "VoxelWorld", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelSphereTools_eventApplyKernelSphereAsync_Parms, VoxelWorld), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSphereTools_ApplyKernelSphereAsync_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelSphereTools_eventApplyKernelSphereAsync_Parms, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Position_MetaData), NewProp_Position_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoxelSphereTools_ApplyKernelSphereAsync_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelSphereTools_eventApplyKernelSphereAsync_Parms, Radius), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoxelSphereTools_ApplyKernelSphereAsync_Statics::NewProp_CenterMultiplier = { "CenterMultiplier", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelSphereTools_eventApplyKernelSphereAsync_Parms, CenterMultiplier), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoxelSphereTools_ApplyKernelSphereAsync_Statics::NewProp_FirstDegreeNeighborMultiplier = { "FirstDegreeNeighborMultiplier", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelSphereTools_eventApplyKernelSphereAsync_Parms, FirstDegreeNeighborMultiplier), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoxelSphereTools_ApplyKernelSphereAsync_Statics::NewProp_SecondDegreeNeighborMultiplier = { "SecondDegreeNeighborMultiplier", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelSphereTools_eventApplyKernelSphereAsync_Parms, SecondDegreeNeighborMultiplier), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoxelSphereTools_ApplyKernelSphereAsync_Statics::NewProp_ThirdDegreeNeighborMultiplier = { "ThirdDegreeNeighborMultiplier", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelSphereTools_eventApplyKernelSphereAsync_Parms, ThirdDegreeNeighborMultiplier), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVoxelSphereTools_ApplyKernelSphereAsync_Statics::NewProp_NumIterations = { "NumIterations", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelSphereTools_eventApplyKernelSphereAsync_Parms, NumIterations), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UVoxelSphereTools_ApplyKernelSphereAsync_Statics::NewProp_bMultiThreaded_SetBit(void* Obj)
{
	((VoxelSphereTools_eventApplyKernelSphereAsync_Parms*)Obj)->bMultiThreaded = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelSphereTools_ApplyKernelSphereAsync_Statics::NewProp_bMultiThreaded = { "bMultiThreaded", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VoxelSphereTools_eventApplyKernelSphereAsync_Parms), &Z_Construct_UFunction_UVoxelSphereTools_ApplyKernelSphereAsync_Statics::NewProp_bMultiThreaded_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UVoxelSphereTools_ApplyKernelSphereAsync_Statics::NewProp_bRecordModifiedValues_SetBit(void* Obj)
{
	((VoxelSphereTools_eventApplyKernelSphereAsync_Parms*)Obj)->bRecordModifiedValues = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelSphereTools_ApplyKernelSphereAsync_Statics::NewProp_bRecordModifiedValues = { "bRecordModifiedValues", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VoxelSphereTools_eventApplyKernelSphereAsync_Parms), &Z_Construct_UFunction_UVoxelSphereTools_ApplyKernelSphereAsync_Statics::NewProp_bRecordModifiedValues_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UVoxelSphereTools_ApplyKernelSphereAsync_Statics::NewProp_bConvertToVoxelSpace_SetBit(void* Obj)
{
	((VoxelSphereTools_eventApplyKernelSphereAsync_Parms*)Obj)->bConvertToVoxelSpace = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelSphereTools_ApplyKernelSphereAsync_Statics::NewProp_bConvertToVoxelSpace = { "bConvertToVoxelSpace", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VoxelSphereTools_eventApplyKernelSphereAsync_Parms), &Z_Construct_UFunction_UVoxelSphereTools_ApplyKernelSphereAsync_Statics::NewProp_bConvertToVoxelSpace_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UVoxelSphereTools_ApplyKernelSphereAsync_Statics::NewProp_bUpdateRender_SetBit(void* Obj)
{
	((VoxelSphereTools_eventApplyKernelSphereAsync_Parms*)Obj)->bUpdateRender = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelSphereTools_ApplyKernelSphereAsync_Statics::NewProp_bUpdateRender = { "bUpdateRender", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VoxelSphereTools_eventApplyKernelSphereAsync_Parms), &Z_Construct_UFunction_UVoxelSphereTools_ApplyKernelSphereAsync_Statics::NewProp_bUpdateRender_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UVoxelSphereTools_ApplyKernelSphereAsync_Statics::NewProp_bHideLatentWarnings_SetBit(void* Obj)
{
	((VoxelSphereTools_eventApplyKernelSphereAsync_Parms*)Obj)->bHideLatentWarnings = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelSphereTools_ApplyKernelSphereAsync_Statics::NewProp_bHideLatentWarnings = { "bHideLatentWarnings", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VoxelSphereTools_eventApplyKernelSphereAsync_Parms), &Z_Construct_UFunction_UVoxelSphereTools_ApplyKernelSphereAsync_Statics::NewProp_bHideLatentWarnings_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelSphereTools_ApplyKernelSphereAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_ApplyKernelSphereAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_ApplyKernelSphereAsync_Statics::NewProp_LatentInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_ApplyKernelSphereAsync_Statics::NewProp_ModifiedValues_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_ApplyKernelSphereAsync_Statics::NewProp_ModifiedValues,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_ApplyKernelSphereAsync_Statics::NewProp_EditedBounds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_ApplyKernelSphereAsync_Statics::NewProp_VoxelWorld,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_ApplyKernelSphereAsync_Statics::NewProp_Position,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_ApplyKernelSphereAsync_Statics::NewProp_Radius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_ApplyKernelSphereAsync_Statics::NewProp_CenterMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_ApplyKernelSphereAsync_Statics::NewProp_FirstDegreeNeighborMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_ApplyKernelSphereAsync_Statics::NewProp_SecondDegreeNeighborMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_ApplyKernelSphereAsync_Statics::NewProp_ThirdDegreeNeighborMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_ApplyKernelSphereAsync_Statics::NewProp_NumIterations,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_ApplyKernelSphereAsync_Statics::NewProp_bMultiThreaded,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_ApplyKernelSphereAsync_Statics::NewProp_bRecordModifiedValues,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_ApplyKernelSphereAsync_Statics::NewProp_bConvertToVoxelSpace,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_ApplyKernelSphereAsync_Statics::NewProp_bUpdateRender,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_ApplyKernelSphereAsync_Statics::NewProp_bHideLatentWarnings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSphereTools_ApplyKernelSphereAsync_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelSphereTools_ApplyKernelSphereAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelSphereTools, nullptr, "ApplyKernelSphereAsync", Z_Construct_UFunction_UVoxelSphereTools_ApplyKernelSphereAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSphereTools_ApplyKernelSphereAsync_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVoxelSphereTools_ApplyKernelSphereAsync_Statics::VoxelSphereTools_eventApplyKernelSphereAsync_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSphereTools_ApplyKernelSphereAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelSphereTools_ApplyKernelSphereAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVoxelSphereTools_ApplyKernelSphereAsync_Statics::VoxelSphereTools_eventApplyKernelSphereAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVoxelSphereTools_ApplyKernelSphereAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelSphereTools_ApplyKernelSphereAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelSphereTools::execApplyKernelSphereAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
	P_GET_TARRAY_REF(FModifiedVoxelValue,Z_Param_Out_ModifiedValues);
	P_GET_STRUCT_REF(FVoxelIntBox,Z_Param_Out_EditedBounds);
	P_GET_OBJECT(AVoxelWorld,Z_Param_VoxelWorld);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_Position);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Radius);
	P_GET_PROPERTY(FFloatProperty,Z_Param_CenterMultiplier);
	P_GET_PROPERTY(FFloatProperty,Z_Param_FirstDegreeNeighborMultiplier);
	P_GET_PROPERTY(FFloatProperty,Z_Param_SecondDegreeNeighborMultiplier);
	P_GET_PROPERTY(FFloatProperty,Z_Param_ThirdDegreeNeighborMultiplier);
	P_GET_PROPERTY(FIntProperty,Z_Param_NumIterations);
	P_GET_UBOOL(Z_Param_bMultiThreaded);
	P_GET_UBOOL(Z_Param_bRecordModifiedValues);
	P_GET_UBOOL(Z_Param_bConvertToVoxelSpace);
	P_GET_UBOOL(Z_Param_bUpdateRender);
	P_GET_UBOOL(Z_Param_bHideLatentWarnings);
	P_FINISH;
	P_NATIVE_BEGIN;
	UVoxelSphereTools::ApplyKernelSphereAsync(Z_Param_WorldContextObject,Z_Param_LatentInfo,Z_Param_Out_ModifiedValues,Z_Param_Out_EditedBounds,Z_Param_VoxelWorld,Z_Param_Out_Position,Z_Param_Radius,Z_Param_CenterMultiplier,Z_Param_FirstDegreeNeighborMultiplier,Z_Param_SecondDegreeNeighborMultiplier,Z_Param_ThirdDegreeNeighborMultiplier,Z_Param_NumIterations,Z_Param_bMultiThreaded,Z_Param_bRecordModifiedValues,Z_Param_bConvertToVoxelSpace,Z_Param_bUpdateRender,Z_Param_bHideLatentWarnings);
	P_NATIVE_END;
}
// ********** End Class UVoxelSphereTools Function ApplyKernelSphereAsync **************************

// ********** Begin Class UVoxelSphereTools Function ApplyMaterialKernelSphere *********************
struct Z_Construct_UFunction_UVoxelSphereTools_ApplyMaterialKernelSphere_Statics
{
	struct VoxelSphereTools_eventApplyMaterialKernelSphere_Parms
	{
		TArray<FModifiedVoxelMaterial> ModifiedMaterials;
		FVoxelIntBox EditedBounds;
		AVoxelWorld* VoxelWorld;
		FVector Position;
		float Radius;
		float CenterMultiplier;
		float FirstDegreeNeighborMultiplier;
		float SecondDegreeNeighborMultiplier;
		float ThirdDegreeNeighborMultiplier;
		int32 NumIterations;
		int32 Mask;
		bool bMultiThreaded;
		bool bRecordModifiedMaterials;
		bool bConvertToVoxelSpace;
		bool bUpdateRender;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "bMultiThreaded, bRecordModifiedMaterials, bConvertToVoxelSpace, bUpdateRender" },
		{ "Category", "Voxel|Tools|Sphere Tools" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Apply a 3x3x3 kernel to the materials\n\x09 * @see ApplyMaterialKernelSphere, ApplyMaterialKernelSphereAsync and FVoxelSphereToolsImpl::ApplyMaterialKernelSphere\n\x09 * @param\x09ModifiedMaterials             \x09Record the Materials modified by this function. Useful to track the amount of edit done, for instance to give resources when digging\n\x09 * @param\x09""EditedBounds                  \x09Returns the bounds edited by this function\n\x09 * @param\x09VoxelWorld                    \x09The voxel world to do the edit to\n\x09 * @param\x09Position                      \x09The position of the center. In world space (unreal units) if bConvertToVoxelSpace is true. In voxel space if false.\n\x09 * @param\x09Radius                        \x09The radius. In unreal units if bConvertToVoxelSpace is true. In voxels if false.\n\x09 * @param\x09""CenterMultiplier              \x09Multiplier of the center value\n\x09 * @param\x09""FirstDegreeNeighborMultiplier \x09Multiplier of the immediate neighbors, which share 2 coordinates with the center\n\x09 * @param\x09SecondDegreeNeighborMultiplier\x09Multiplier of the near corners neighbors, which share 1 coordinates with the center\n\x09 * @param\x09ThirdDegreeNeighborMultiplier \x09Multiplier of the far corners neighbors, which share 0 coordinates with the center\n\x09 * @param\x09NumIterations                 \x09The number of times the kernel is going to be applied. Increase to make the effect faster, but more expensive.\n\x09 * @param\x09Mask                          \x09The material channels to affect\n\x09 * @param\x09""bMultiThreaded                \x09If true, multiple threads will be used to make the edit faster.\n\x09 * @param\x09""bRecordModifiedMaterials      \x09If false, will not fill ModifiedMaterials, making the edit faster.\n\x09 * @param\x09""bConvertToVoxelSpace          \x09If true, Position and Radius will be converted to voxel space. Else they will be used directly.\n\x09 * @param\x09""bUpdateRender                 \x09If false, will only edit the data and not update the render. Rarely needed.\n\x09*/" },
#endif
		{ "CPP_Default_bConvertToVoxelSpace", "true" },
		{ "CPP_Default_bMultiThreaded", "true" },
		{ "CPP_Default_bRecordModifiedMaterials", "true" },
		{ "CPP_Default_bUpdateRender", "true" },
		{ "CPP_Default_CenterMultiplier", "0.037000" },
		{ "CPP_Default_FirstDegreeNeighborMultiplier", "0.037000" },
		{ "CPP_Default_Mask", "4095" },
		{ "CPP_Default_NumIterations", "1" },
		{ "CPP_Default_SecondDegreeNeighborMultiplier", "0.037000" },
		{ "CPP_Default_ThirdDegreeNeighborMultiplier", "0.037000" },
		{ "DefaultToSelf", "VoxelWorld" },
		{ "ModuleRelativePath", "Public/VoxelTools/Gen/VoxelSphereTools.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Apply a 3x3x3 kernel to the materials\n@see ApplyMaterialKernelSphere, ApplyMaterialKernelSphereAsync and FVoxelSphereToolsImpl::ApplyMaterialKernelSphere\n@param       ModifiedMaterials               Record the Materials modified by this function. Useful to track the amount of edit done, for instance to give resources when digging\n@param       EditedBounds                    Returns the bounds edited by this function\n@param       VoxelWorld                      The voxel world to do the edit to\n@param       Position                        The position of the center. In world space (unreal units) if bConvertToVoxelSpace is true. In voxel space if false.\n@param       Radius                          The radius. In unreal units if bConvertToVoxelSpace is true. In voxels if false.\n@param       CenterMultiplier                Multiplier of the center value\n@param       FirstDegreeNeighborMultiplier   Multiplier of the immediate neighbors, which share 2 coordinates with the center\n@param       SecondDegreeNeighborMultiplier  Multiplier of the near corners neighbors, which share 1 coordinates with the center\n@param       ThirdDegreeNeighborMultiplier   Multiplier of the far corners neighbors, which share 0 coordinates with the center\n@param       NumIterations                   The number of times the kernel is going to be applied. Increase to make the effect faster, but more expensive.\n@param       Mask                            The material channels to affect\n@param       bMultiThreaded                  If true, multiple threads will be used to make the edit faster.\n@param       bRecordModifiedMaterials        If false, will not fill ModifiedMaterials, making the edit faster.\n@param       bConvertToVoxelSpace            If true, Position and Radius will be converted to voxel space. Else they will be used directly.\n@param       bUpdateRender                   If false, will only edit the data and not update the render. Rarely needed." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mask_MetaData[] = {
		{ "Bitmask", "" },
		{ "BitmaskEnum", "EVoxelMaterialMask_BP" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ModifiedMaterials_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ModifiedMaterials;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EditedBounds;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_VoxelWorld;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Position;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CenterMultiplier;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FirstDegreeNeighborMultiplier;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SecondDegreeNeighborMultiplier;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ThirdDegreeNeighborMultiplier;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumIterations;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Mask;
	static void NewProp_bMultiThreaded_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bMultiThreaded;
	static void NewProp_bRecordModifiedMaterials_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRecordModifiedMaterials;
	static void NewProp_bConvertToVoxelSpace_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bConvertToVoxelSpace;
	static void NewProp_bUpdateRender_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUpdateRender;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSphereTools_ApplyMaterialKernelSphere_Statics::NewProp_ModifiedMaterials_Inner = { "ModifiedMaterials", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FModifiedVoxelMaterial, METADATA_PARAMS(0, nullptr) }; // 2111187622
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVoxelSphereTools_ApplyMaterialKernelSphere_Statics::NewProp_ModifiedMaterials = { "ModifiedMaterials", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelSphereTools_eventApplyMaterialKernelSphere_Parms, ModifiedMaterials), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 2111187622
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSphereTools_ApplyMaterialKernelSphere_Statics::NewProp_EditedBounds = { "EditedBounds", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelSphereTools_eventApplyMaterialKernelSphere_Parms, EditedBounds), Z_Construct_UScriptStruct_FVoxelIntBox, METADATA_PARAMS(0, nullptr) }; // 3520536583
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelSphereTools_ApplyMaterialKernelSphere_Statics::NewProp_VoxelWorld = { "VoxelWorld", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelSphereTools_eventApplyMaterialKernelSphere_Parms, VoxelWorld), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSphereTools_ApplyMaterialKernelSphere_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelSphereTools_eventApplyMaterialKernelSphere_Parms, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Position_MetaData), NewProp_Position_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoxelSphereTools_ApplyMaterialKernelSphere_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelSphereTools_eventApplyMaterialKernelSphere_Parms, Radius), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoxelSphereTools_ApplyMaterialKernelSphere_Statics::NewProp_CenterMultiplier = { "CenterMultiplier", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelSphereTools_eventApplyMaterialKernelSphere_Parms, CenterMultiplier), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoxelSphereTools_ApplyMaterialKernelSphere_Statics::NewProp_FirstDegreeNeighborMultiplier = { "FirstDegreeNeighborMultiplier", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelSphereTools_eventApplyMaterialKernelSphere_Parms, FirstDegreeNeighborMultiplier), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoxelSphereTools_ApplyMaterialKernelSphere_Statics::NewProp_SecondDegreeNeighborMultiplier = { "SecondDegreeNeighborMultiplier", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelSphereTools_eventApplyMaterialKernelSphere_Parms, SecondDegreeNeighborMultiplier), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoxelSphereTools_ApplyMaterialKernelSphere_Statics::NewProp_ThirdDegreeNeighborMultiplier = { "ThirdDegreeNeighborMultiplier", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelSphereTools_eventApplyMaterialKernelSphere_Parms, ThirdDegreeNeighborMultiplier), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVoxelSphereTools_ApplyMaterialKernelSphere_Statics::NewProp_NumIterations = { "NumIterations", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelSphereTools_eventApplyMaterialKernelSphere_Parms, NumIterations), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVoxelSphereTools_ApplyMaterialKernelSphere_Statics::NewProp_Mask = { "Mask", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelSphereTools_eventApplyMaterialKernelSphere_Parms, Mask), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mask_MetaData), NewProp_Mask_MetaData) };
void Z_Construct_UFunction_UVoxelSphereTools_ApplyMaterialKernelSphere_Statics::NewProp_bMultiThreaded_SetBit(void* Obj)
{
	((VoxelSphereTools_eventApplyMaterialKernelSphere_Parms*)Obj)->bMultiThreaded = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelSphereTools_ApplyMaterialKernelSphere_Statics::NewProp_bMultiThreaded = { "bMultiThreaded", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VoxelSphereTools_eventApplyMaterialKernelSphere_Parms), &Z_Construct_UFunction_UVoxelSphereTools_ApplyMaterialKernelSphere_Statics::NewProp_bMultiThreaded_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UVoxelSphereTools_ApplyMaterialKernelSphere_Statics::NewProp_bRecordModifiedMaterials_SetBit(void* Obj)
{
	((VoxelSphereTools_eventApplyMaterialKernelSphere_Parms*)Obj)->bRecordModifiedMaterials = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelSphereTools_ApplyMaterialKernelSphere_Statics::NewProp_bRecordModifiedMaterials = { "bRecordModifiedMaterials", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VoxelSphereTools_eventApplyMaterialKernelSphere_Parms), &Z_Construct_UFunction_UVoxelSphereTools_ApplyMaterialKernelSphere_Statics::NewProp_bRecordModifiedMaterials_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UVoxelSphereTools_ApplyMaterialKernelSphere_Statics::NewProp_bConvertToVoxelSpace_SetBit(void* Obj)
{
	((VoxelSphereTools_eventApplyMaterialKernelSphere_Parms*)Obj)->bConvertToVoxelSpace = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelSphereTools_ApplyMaterialKernelSphere_Statics::NewProp_bConvertToVoxelSpace = { "bConvertToVoxelSpace", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VoxelSphereTools_eventApplyMaterialKernelSphere_Parms), &Z_Construct_UFunction_UVoxelSphereTools_ApplyMaterialKernelSphere_Statics::NewProp_bConvertToVoxelSpace_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UVoxelSphereTools_ApplyMaterialKernelSphere_Statics::NewProp_bUpdateRender_SetBit(void* Obj)
{
	((VoxelSphereTools_eventApplyMaterialKernelSphere_Parms*)Obj)->bUpdateRender = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelSphereTools_ApplyMaterialKernelSphere_Statics::NewProp_bUpdateRender = { "bUpdateRender", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VoxelSphereTools_eventApplyMaterialKernelSphere_Parms), &Z_Construct_UFunction_UVoxelSphereTools_ApplyMaterialKernelSphere_Statics::NewProp_bUpdateRender_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelSphereTools_ApplyMaterialKernelSphere_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_ApplyMaterialKernelSphere_Statics::NewProp_ModifiedMaterials_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_ApplyMaterialKernelSphere_Statics::NewProp_ModifiedMaterials,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_ApplyMaterialKernelSphere_Statics::NewProp_EditedBounds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_ApplyMaterialKernelSphere_Statics::NewProp_VoxelWorld,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_ApplyMaterialKernelSphere_Statics::NewProp_Position,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_ApplyMaterialKernelSphere_Statics::NewProp_Radius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_ApplyMaterialKernelSphere_Statics::NewProp_CenterMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_ApplyMaterialKernelSphere_Statics::NewProp_FirstDegreeNeighborMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_ApplyMaterialKernelSphere_Statics::NewProp_SecondDegreeNeighborMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_ApplyMaterialKernelSphere_Statics::NewProp_ThirdDegreeNeighborMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_ApplyMaterialKernelSphere_Statics::NewProp_NumIterations,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_ApplyMaterialKernelSphere_Statics::NewProp_Mask,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_ApplyMaterialKernelSphere_Statics::NewProp_bMultiThreaded,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_ApplyMaterialKernelSphere_Statics::NewProp_bRecordModifiedMaterials,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_ApplyMaterialKernelSphere_Statics::NewProp_bConvertToVoxelSpace,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_ApplyMaterialKernelSphere_Statics::NewProp_bUpdateRender,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSphereTools_ApplyMaterialKernelSphere_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelSphereTools_ApplyMaterialKernelSphere_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelSphereTools, nullptr, "ApplyMaterialKernelSphere", Z_Construct_UFunction_UVoxelSphereTools_ApplyMaterialKernelSphere_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSphereTools_ApplyMaterialKernelSphere_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVoxelSphereTools_ApplyMaterialKernelSphere_Statics::VoxelSphereTools_eventApplyMaterialKernelSphere_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSphereTools_ApplyMaterialKernelSphere_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelSphereTools_ApplyMaterialKernelSphere_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVoxelSphereTools_ApplyMaterialKernelSphere_Statics::VoxelSphereTools_eventApplyMaterialKernelSphere_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVoxelSphereTools_ApplyMaterialKernelSphere()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelSphereTools_ApplyMaterialKernelSphere_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelSphereTools::execApplyMaterialKernelSphere)
{
	P_GET_TARRAY_REF(FModifiedVoxelMaterial,Z_Param_Out_ModifiedMaterials);
	P_GET_STRUCT_REF(FVoxelIntBox,Z_Param_Out_EditedBounds);
	P_GET_OBJECT(AVoxelWorld,Z_Param_VoxelWorld);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_Position);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Radius);
	P_GET_PROPERTY(FFloatProperty,Z_Param_CenterMultiplier);
	P_GET_PROPERTY(FFloatProperty,Z_Param_FirstDegreeNeighborMultiplier);
	P_GET_PROPERTY(FFloatProperty,Z_Param_SecondDegreeNeighborMultiplier);
	P_GET_PROPERTY(FFloatProperty,Z_Param_ThirdDegreeNeighborMultiplier);
	P_GET_PROPERTY(FIntProperty,Z_Param_NumIterations);
	P_GET_PROPERTY(FIntProperty,Z_Param_Mask);
	P_GET_UBOOL(Z_Param_bMultiThreaded);
	P_GET_UBOOL(Z_Param_bRecordModifiedMaterials);
	P_GET_UBOOL(Z_Param_bConvertToVoxelSpace);
	P_GET_UBOOL(Z_Param_bUpdateRender);
	P_FINISH;
	P_NATIVE_BEGIN;
	UVoxelSphereTools::ApplyMaterialKernelSphere(Z_Param_Out_ModifiedMaterials,Z_Param_Out_EditedBounds,Z_Param_VoxelWorld,Z_Param_Out_Position,Z_Param_Radius,Z_Param_CenterMultiplier,Z_Param_FirstDegreeNeighborMultiplier,Z_Param_SecondDegreeNeighborMultiplier,Z_Param_ThirdDegreeNeighborMultiplier,Z_Param_NumIterations,Z_Param_Mask,Z_Param_bMultiThreaded,Z_Param_bRecordModifiedMaterials,Z_Param_bConvertToVoxelSpace,Z_Param_bUpdateRender);
	P_NATIVE_END;
}
// ********** End Class UVoxelSphereTools Function ApplyMaterialKernelSphere ***********************

// ********** Begin Class UVoxelSphereTools Function ApplyMaterialKernelSphereAsync ****************
struct Z_Construct_UFunction_UVoxelSphereTools_ApplyMaterialKernelSphereAsync_Statics
{
	struct VoxelSphereTools_eventApplyMaterialKernelSphereAsync_Parms
	{
		UObject* WorldContextObject;
		FLatentActionInfo LatentInfo;
		TArray<FModifiedVoxelMaterial> ModifiedMaterials;
		FVoxelIntBox EditedBounds;
		AVoxelWorld* VoxelWorld;
		FVector Position;
		float Radius;
		float CenterMultiplier;
		float FirstDegreeNeighborMultiplier;
		float SecondDegreeNeighborMultiplier;
		float ThirdDegreeNeighborMultiplier;
		int32 NumIterations;
		int32 Mask;
		bool bMultiThreaded;
		bool bRecordModifiedMaterials;
		bool bConvertToVoxelSpace;
		bool bUpdateRender;
		bool bHideLatentWarnings;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "bMultiThreaded, bRecordModifiedMaterials, bConvertToVoxelSpace, bUpdateRender, bHideLatentWarnings" },
		{ "Category", "Voxel|Tools|Sphere Tools" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Apply a 3x3x3 kernel to the materials\n\x09 * Runs asynchronously in a background thread\n\x09 * @see ApplyMaterialKernelSphere, ApplyMaterialKernelSphereAsync and FVoxelSphereToolsImpl::ApplyMaterialKernelSphere\n\x09 * @param\x09ModifiedMaterials             \x09Record the Materials modified by this function. Useful to track the amount of edit done, for instance to give resources when digging\n\x09 * @param\x09""EditedBounds                  \x09Returns the bounds edited by this function\n\x09 * @param\x09VoxelWorld                    \x09The voxel world to do the edit to\n\x09 * @param\x09Position                      \x09The position of the center. In world space (unreal units) if bConvertToVoxelSpace is true. In voxel space if false.\n\x09 * @param\x09Radius                        \x09The radius. In unreal units if bConvertToVoxelSpace is true. In voxels if false.\n\x09 * @param\x09""CenterMultiplier              \x09Multiplier of the center value\n\x09 * @param\x09""FirstDegreeNeighborMultiplier \x09Multiplier of the immediate neighbors, which share 2 coordinates with the center\n\x09 * @param\x09SecondDegreeNeighborMultiplier\x09Multiplier of the near corners neighbors, which share 1 coordinates with the center\n\x09 * @param\x09ThirdDegreeNeighborMultiplier \x09Multiplier of the far corners neighbors, which share 0 coordinates with the center\n\x09 * @param\x09NumIterations                 \x09The number of times the kernel is going to be applied. Increase to make the effect faster, but more expensive.\n\x09 * @param\x09Mask                          \x09The material channels to affect\n\x09 * @param\x09""bMultiThreaded                \x09If true, multiple threads will be used to make the edit faster. Not recommended on async functions, as it might cause lag.\n\x09 * @param\x09""bRecordModifiedMaterials      \x09If false, will not fill ModifiedMaterials, making the edit faster.\n\x09 * @param\x09""bConvertToVoxelSpace          \x09If true, Position and Radius will be converted to voxel space. Else they will be used directly.\n\x09 * @param\x09""bUpdateRender                 \x09If false, will only edit the data and not update the render. Rarely needed.\n\x09 * @param\x09""bHideLatentWarnings           \x09Hide latent warnings caused by calling a node before its previous call completion.\n\x09*/" },
#endif
		{ "CPP_Default_bConvertToVoxelSpace", "true" },
		{ "CPP_Default_bHideLatentWarnings", "false" },
		{ "CPP_Default_bMultiThreaded", "false" },
		{ "CPP_Default_bRecordModifiedMaterials", "true" },
		{ "CPP_Default_bUpdateRender", "true" },
		{ "CPP_Default_CenterMultiplier", "0.037000" },
		{ "CPP_Default_FirstDegreeNeighborMultiplier", "0.037000" },
		{ "CPP_Default_Mask", "4095" },
		{ "CPP_Default_NumIterations", "1" },
		{ "CPP_Default_SecondDegreeNeighborMultiplier", "0.037000" },
		{ "CPP_Default_ThirdDegreeNeighborMultiplier", "0.037000" },
		{ "DefaultToSelf", "VoxelWorld" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Public/VoxelTools/Gen/VoxelSphereTools.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Apply a 3x3x3 kernel to the materials\nRuns asynchronously in a background thread\n@see ApplyMaterialKernelSphere, ApplyMaterialKernelSphereAsync and FVoxelSphereToolsImpl::ApplyMaterialKernelSphere\n@param       ModifiedMaterials               Record the Materials modified by this function. Useful to track the amount of edit done, for instance to give resources when digging\n@param       EditedBounds                    Returns the bounds edited by this function\n@param       VoxelWorld                      The voxel world to do the edit to\n@param       Position                        The position of the center. In world space (unreal units) if bConvertToVoxelSpace is true. In voxel space if false.\n@param       Radius                          The radius. In unreal units if bConvertToVoxelSpace is true. In voxels if false.\n@param       CenterMultiplier                Multiplier of the center value\n@param       FirstDegreeNeighborMultiplier   Multiplier of the immediate neighbors, which share 2 coordinates with the center\n@param       SecondDegreeNeighborMultiplier  Multiplier of the near corners neighbors, which share 1 coordinates with the center\n@param       ThirdDegreeNeighborMultiplier   Multiplier of the far corners neighbors, which share 0 coordinates with the center\n@param       NumIterations                   The number of times the kernel is going to be applied. Increase to make the effect faster, but more expensive.\n@param       Mask                            The material channels to affect\n@param       bMultiThreaded                  If true, multiple threads will be used to make the edit faster. Not recommended on async functions, as it might cause lag.\n@param       bRecordModifiedMaterials        If false, will not fill ModifiedMaterials, making the edit faster.\n@param       bConvertToVoxelSpace            If true, Position and Radius will be converted to voxel space. Else they will be used directly.\n@param       bUpdateRender                   If false, will only edit the data and not update the render. Rarely needed.\n@param       bHideLatentWarnings             Hide latent warnings caused by calling a node before its previous call completion." },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mask_MetaData[] = {
		{ "Bitmask", "" },
		{ "BitmaskEnum", "EVoxelMaterialMask_BP" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ModifiedMaterials_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ModifiedMaterials;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EditedBounds;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_VoxelWorld;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Position;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CenterMultiplier;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FirstDegreeNeighborMultiplier;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SecondDegreeNeighborMultiplier;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ThirdDegreeNeighborMultiplier;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumIterations;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Mask;
	static void NewProp_bMultiThreaded_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bMultiThreaded;
	static void NewProp_bRecordModifiedMaterials_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRecordModifiedMaterials;
	static void NewProp_bConvertToVoxelSpace_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bConvertToVoxelSpace;
	static void NewProp_bUpdateRender_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUpdateRender;
	static void NewProp_bHideLatentWarnings_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHideLatentWarnings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelSphereTools_ApplyMaterialKernelSphereAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelSphereTools_eventApplyMaterialKernelSphereAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSphereTools_ApplyMaterialKernelSphereAsync_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelSphereTools_eventApplyMaterialKernelSphereAsync_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(0, nullptr) }; // 4146275481
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSphereTools_ApplyMaterialKernelSphereAsync_Statics::NewProp_ModifiedMaterials_Inner = { "ModifiedMaterials", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FModifiedVoxelMaterial, METADATA_PARAMS(0, nullptr) }; // 2111187622
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVoxelSphereTools_ApplyMaterialKernelSphereAsync_Statics::NewProp_ModifiedMaterials = { "ModifiedMaterials", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelSphereTools_eventApplyMaterialKernelSphereAsync_Parms, ModifiedMaterials), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 2111187622
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSphereTools_ApplyMaterialKernelSphereAsync_Statics::NewProp_EditedBounds = { "EditedBounds", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelSphereTools_eventApplyMaterialKernelSphereAsync_Parms, EditedBounds), Z_Construct_UScriptStruct_FVoxelIntBox, METADATA_PARAMS(0, nullptr) }; // 3520536583
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelSphereTools_ApplyMaterialKernelSphereAsync_Statics::NewProp_VoxelWorld = { "VoxelWorld", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelSphereTools_eventApplyMaterialKernelSphereAsync_Parms, VoxelWorld), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSphereTools_ApplyMaterialKernelSphereAsync_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelSphereTools_eventApplyMaterialKernelSphereAsync_Parms, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Position_MetaData), NewProp_Position_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoxelSphereTools_ApplyMaterialKernelSphereAsync_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelSphereTools_eventApplyMaterialKernelSphereAsync_Parms, Radius), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoxelSphereTools_ApplyMaterialKernelSphereAsync_Statics::NewProp_CenterMultiplier = { "CenterMultiplier", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelSphereTools_eventApplyMaterialKernelSphereAsync_Parms, CenterMultiplier), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoxelSphereTools_ApplyMaterialKernelSphereAsync_Statics::NewProp_FirstDegreeNeighborMultiplier = { "FirstDegreeNeighborMultiplier", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelSphereTools_eventApplyMaterialKernelSphereAsync_Parms, FirstDegreeNeighborMultiplier), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoxelSphereTools_ApplyMaterialKernelSphereAsync_Statics::NewProp_SecondDegreeNeighborMultiplier = { "SecondDegreeNeighborMultiplier", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelSphereTools_eventApplyMaterialKernelSphereAsync_Parms, SecondDegreeNeighborMultiplier), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoxelSphereTools_ApplyMaterialKernelSphereAsync_Statics::NewProp_ThirdDegreeNeighborMultiplier = { "ThirdDegreeNeighborMultiplier", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelSphereTools_eventApplyMaterialKernelSphereAsync_Parms, ThirdDegreeNeighborMultiplier), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVoxelSphereTools_ApplyMaterialKernelSphereAsync_Statics::NewProp_NumIterations = { "NumIterations", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelSphereTools_eventApplyMaterialKernelSphereAsync_Parms, NumIterations), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVoxelSphereTools_ApplyMaterialKernelSphereAsync_Statics::NewProp_Mask = { "Mask", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelSphereTools_eventApplyMaterialKernelSphereAsync_Parms, Mask), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mask_MetaData), NewProp_Mask_MetaData) };
void Z_Construct_UFunction_UVoxelSphereTools_ApplyMaterialKernelSphereAsync_Statics::NewProp_bMultiThreaded_SetBit(void* Obj)
{
	((VoxelSphereTools_eventApplyMaterialKernelSphereAsync_Parms*)Obj)->bMultiThreaded = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelSphereTools_ApplyMaterialKernelSphereAsync_Statics::NewProp_bMultiThreaded = { "bMultiThreaded", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VoxelSphereTools_eventApplyMaterialKernelSphereAsync_Parms), &Z_Construct_UFunction_UVoxelSphereTools_ApplyMaterialKernelSphereAsync_Statics::NewProp_bMultiThreaded_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UVoxelSphereTools_ApplyMaterialKernelSphereAsync_Statics::NewProp_bRecordModifiedMaterials_SetBit(void* Obj)
{
	((VoxelSphereTools_eventApplyMaterialKernelSphereAsync_Parms*)Obj)->bRecordModifiedMaterials = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelSphereTools_ApplyMaterialKernelSphereAsync_Statics::NewProp_bRecordModifiedMaterials = { "bRecordModifiedMaterials", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VoxelSphereTools_eventApplyMaterialKernelSphereAsync_Parms), &Z_Construct_UFunction_UVoxelSphereTools_ApplyMaterialKernelSphereAsync_Statics::NewProp_bRecordModifiedMaterials_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UVoxelSphereTools_ApplyMaterialKernelSphereAsync_Statics::NewProp_bConvertToVoxelSpace_SetBit(void* Obj)
{
	((VoxelSphereTools_eventApplyMaterialKernelSphereAsync_Parms*)Obj)->bConvertToVoxelSpace = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelSphereTools_ApplyMaterialKernelSphereAsync_Statics::NewProp_bConvertToVoxelSpace = { "bConvertToVoxelSpace", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VoxelSphereTools_eventApplyMaterialKernelSphereAsync_Parms), &Z_Construct_UFunction_UVoxelSphereTools_ApplyMaterialKernelSphereAsync_Statics::NewProp_bConvertToVoxelSpace_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UVoxelSphereTools_ApplyMaterialKernelSphereAsync_Statics::NewProp_bUpdateRender_SetBit(void* Obj)
{
	((VoxelSphereTools_eventApplyMaterialKernelSphereAsync_Parms*)Obj)->bUpdateRender = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelSphereTools_ApplyMaterialKernelSphereAsync_Statics::NewProp_bUpdateRender = { "bUpdateRender", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VoxelSphereTools_eventApplyMaterialKernelSphereAsync_Parms), &Z_Construct_UFunction_UVoxelSphereTools_ApplyMaterialKernelSphereAsync_Statics::NewProp_bUpdateRender_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UVoxelSphereTools_ApplyMaterialKernelSphereAsync_Statics::NewProp_bHideLatentWarnings_SetBit(void* Obj)
{
	((VoxelSphereTools_eventApplyMaterialKernelSphereAsync_Parms*)Obj)->bHideLatentWarnings = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelSphereTools_ApplyMaterialKernelSphereAsync_Statics::NewProp_bHideLatentWarnings = { "bHideLatentWarnings", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VoxelSphereTools_eventApplyMaterialKernelSphereAsync_Parms), &Z_Construct_UFunction_UVoxelSphereTools_ApplyMaterialKernelSphereAsync_Statics::NewProp_bHideLatentWarnings_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelSphereTools_ApplyMaterialKernelSphereAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_ApplyMaterialKernelSphereAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_ApplyMaterialKernelSphereAsync_Statics::NewProp_LatentInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_ApplyMaterialKernelSphereAsync_Statics::NewProp_ModifiedMaterials_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_ApplyMaterialKernelSphereAsync_Statics::NewProp_ModifiedMaterials,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_ApplyMaterialKernelSphereAsync_Statics::NewProp_EditedBounds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_ApplyMaterialKernelSphereAsync_Statics::NewProp_VoxelWorld,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_ApplyMaterialKernelSphereAsync_Statics::NewProp_Position,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_ApplyMaterialKernelSphereAsync_Statics::NewProp_Radius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_ApplyMaterialKernelSphereAsync_Statics::NewProp_CenterMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_ApplyMaterialKernelSphereAsync_Statics::NewProp_FirstDegreeNeighborMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_ApplyMaterialKernelSphereAsync_Statics::NewProp_SecondDegreeNeighborMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_ApplyMaterialKernelSphereAsync_Statics::NewProp_ThirdDegreeNeighborMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_ApplyMaterialKernelSphereAsync_Statics::NewProp_NumIterations,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_ApplyMaterialKernelSphereAsync_Statics::NewProp_Mask,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_ApplyMaterialKernelSphereAsync_Statics::NewProp_bMultiThreaded,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_ApplyMaterialKernelSphereAsync_Statics::NewProp_bRecordModifiedMaterials,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_ApplyMaterialKernelSphereAsync_Statics::NewProp_bConvertToVoxelSpace,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_ApplyMaterialKernelSphereAsync_Statics::NewProp_bUpdateRender,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_ApplyMaterialKernelSphereAsync_Statics::NewProp_bHideLatentWarnings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSphereTools_ApplyMaterialKernelSphereAsync_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelSphereTools_ApplyMaterialKernelSphereAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelSphereTools, nullptr, "ApplyMaterialKernelSphereAsync", Z_Construct_UFunction_UVoxelSphereTools_ApplyMaterialKernelSphereAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSphereTools_ApplyMaterialKernelSphereAsync_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVoxelSphereTools_ApplyMaterialKernelSphereAsync_Statics::VoxelSphereTools_eventApplyMaterialKernelSphereAsync_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSphereTools_ApplyMaterialKernelSphereAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelSphereTools_ApplyMaterialKernelSphereAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVoxelSphereTools_ApplyMaterialKernelSphereAsync_Statics::VoxelSphereTools_eventApplyMaterialKernelSphereAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVoxelSphereTools_ApplyMaterialKernelSphereAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelSphereTools_ApplyMaterialKernelSphereAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelSphereTools::execApplyMaterialKernelSphereAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
	P_GET_TARRAY_REF(FModifiedVoxelMaterial,Z_Param_Out_ModifiedMaterials);
	P_GET_STRUCT_REF(FVoxelIntBox,Z_Param_Out_EditedBounds);
	P_GET_OBJECT(AVoxelWorld,Z_Param_VoxelWorld);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_Position);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Radius);
	P_GET_PROPERTY(FFloatProperty,Z_Param_CenterMultiplier);
	P_GET_PROPERTY(FFloatProperty,Z_Param_FirstDegreeNeighborMultiplier);
	P_GET_PROPERTY(FFloatProperty,Z_Param_SecondDegreeNeighborMultiplier);
	P_GET_PROPERTY(FFloatProperty,Z_Param_ThirdDegreeNeighborMultiplier);
	P_GET_PROPERTY(FIntProperty,Z_Param_NumIterations);
	P_GET_PROPERTY(FIntProperty,Z_Param_Mask);
	P_GET_UBOOL(Z_Param_bMultiThreaded);
	P_GET_UBOOL(Z_Param_bRecordModifiedMaterials);
	P_GET_UBOOL(Z_Param_bConvertToVoxelSpace);
	P_GET_UBOOL(Z_Param_bUpdateRender);
	P_GET_UBOOL(Z_Param_bHideLatentWarnings);
	P_FINISH;
	P_NATIVE_BEGIN;
	UVoxelSphereTools::ApplyMaterialKernelSphereAsync(Z_Param_WorldContextObject,Z_Param_LatentInfo,Z_Param_Out_ModifiedMaterials,Z_Param_Out_EditedBounds,Z_Param_VoxelWorld,Z_Param_Out_Position,Z_Param_Radius,Z_Param_CenterMultiplier,Z_Param_FirstDegreeNeighborMultiplier,Z_Param_SecondDegreeNeighborMultiplier,Z_Param_ThirdDegreeNeighborMultiplier,Z_Param_NumIterations,Z_Param_Mask,Z_Param_bMultiThreaded,Z_Param_bRecordModifiedMaterials,Z_Param_bConvertToVoxelSpace,Z_Param_bUpdateRender,Z_Param_bHideLatentWarnings);
	P_NATIVE_END;
}
// ********** End Class UVoxelSphereTools Function ApplyMaterialKernelSphereAsync ******************

// ********** Begin Class UVoxelSphereTools Function RemoveSphere **********************************
struct Z_Construct_UFunction_UVoxelSphereTools_RemoveSphere_Statics
{
	struct VoxelSphereTools_eventRemoveSphere_Parms
	{
		TArray<FModifiedVoxelValue> ModifiedValues;
		FVoxelIntBox EditedBounds;
		AVoxelWorld* VoxelWorld;
		FVector Position;
		float Radius;
		bool bMultiThreaded;
		bool bRecordModifiedValues;
		bool bConvertToVoxelSpace;
		bool bUpdateRender;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "bMultiThreaded, bRecordModifiedValues, bConvertToVoxelSpace, bUpdateRender" },
		{ "Category", "Voxel|Tools|Sphere Tools" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Remove a sphere\n\x09 * @see RemoveSphere, RemoveSphereAsync and FVoxelSphereToolsImpl::RemoveSphere\n\x09 * @param\x09ModifiedValues       \x09Record the Values modified by this function. Useful to track the amount of edit done, for instance to give resources when digging\n\x09 * @param\x09""EditedBounds         \x09Returns the bounds edited by this function\n\x09 * @param\x09VoxelWorld           \x09The voxel world to do the edit to\n\x09 * @param\x09Position             \x09The position of the center. In world space (unreal units) if bConvertToVoxelSpace is true. In voxel space if false.\n\x09 * @param\x09Radius               \x09The radius. In unreal units if bConvertToVoxelSpace is true. In voxels if false.\n\x09 * @param\x09""bMultiThreaded       \x09If true, multiple threads will be used to make the edit faster.\n\x09 * @param\x09""bRecordModifiedValues\x09If false, will not fill ModifiedValues, making the edit faster.\n\x09 * @param\x09""bConvertToVoxelSpace \x09If true, Position and Radius will be converted to voxel space. Else they will be used directly.\n\x09 * @param\x09""bUpdateRender        \x09If false, will only edit the data and not update the render. Rarely needed.\n\x09*/" },
#endif
		{ "CPP_Default_bConvertToVoxelSpace", "true" },
		{ "CPP_Default_bMultiThreaded", "true" },
		{ "CPP_Default_bRecordModifiedValues", "true" },
		{ "CPP_Default_bUpdateRender", "true" },
		{ "DefaultToSelf", "VoxelWorld" },
		{ "ModuleRelativePath", "Public/VoxelTools/Gen/VoxelSphereTools.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Remove a sphere\n@see RemoveSphere, RemoveSphereAsync and FVoxelSphereToolsImpl::RemoveSphere\n@param       ModifiedValues          Record the Values modified by this function. Useful to track the amount of edit done, for instance to give resources when digging\n@param       EditedBounds            Returns the bounds edited by this function\n@param       VoxelWorld              The voxel world to do the edit to\n@param       Position                The position of the center. In world space (unreal units) if bConvertToVoxelSpace is true. In voxel space if false.\n@param       Radius                  The radius. In unreal units if bConvertToVoxelSpace is true. In voxels if false.\n@param       bMultiThreaded          If true, multiple threads will be used to make the edit faster.\n@param       bRecordModifiedValues   If false, will not fill ModifiedValues, making the edit faster.\n@param       bConvertToVoxelSpace    If true, Position and Radius will be converted to voxel space. Else they will be used directly.\n@param       bUpdateRender           If false, will only edit the data and not update the render. Rarely needed." },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSphereTools_RemoveSphere_Statics::NewProp_ModifiedValues_Inner = { "ModifiedValues", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FModifiedVoxelValue, METADATA_PARAMS(0, nullptr) }; // 1075743150
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVoxelSphereTools_RemoveSphere_Statics::NewProp_ModifiedValues = { "ModifiedValues", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelSphereTools_eventRemoveSphere_Parms, ModifiedValues), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 1075743150
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSphereTools_RemoveSphere_Statics::NewProp_EditedBounds = { "EditedBounds", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelSphereTools_eventRemoveSphere_Parms, EditedBounds), Z_Construct_UScriptStruct_FVoxelIntBox, METADATA_PARAMS(0, nullptr) }; // 3520536583
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelSphereTools_RemoveSphere_Statics::NewProp_VoxelWorld = { "VoxelWorld", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelSphereTools_eventRemoveSphere_Parms, VoxelWorld), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSphereTools_RemoveSphere_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelSphereTools_eventRemoveSphere_Parms, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Position_MetaData), NewProp_Position_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoxelSphereTools_RemoveSphere_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelSphereTools_eventRemoveSphere_Parms, Radius), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UVoxelSphereTools_RemoveSphere_Statics::NewProp_bMultiThreaded_SetBit(void* Obj)
{
	((VoxelSphereTools_eventRemoveSphere_Parms*)Obj)->bMultiThreaded = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelSphereTools_RemoveSphere_Statics::NewProp_bMultiThreaded = { "bMultiThreaded", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VoxelSphereTools_eventRemoveSphere_Parms), &Z_Construct_UFunction_UVoxelSphereTools_RemoveSphere_Statics::NewProp_bMultiThreaded_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UVoxelSphereTools_RemoveSphere_Statics::NewProp_bRecordModifiedValues_SetBit(void* Obj)
{
	((VoxelSphereTools_eventRemoveSphere_Parms*)Obj)->bRecordModifiedValues = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelSphereTools_RemoveSphere_Statics::NewProp_bRecordModifiedValues = { "bRecordModifiedValues", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VoxelSphereTools_eventRemoveSphere_Parms), &Z_Construct_UFunction_UVoxelSphereTools_RemoveSphere_Statics::NewProp_bRecordModifiedValues_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UVoxelSphereTools_RemoveSphere_Statics::NewProp_bConvertToVoxelSpace_SetBit(void* Obj)
{
	((VoxelSphereTools_eventRemoveSphere_Parms*)Obj)->bConvertToVoxelSpace = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelSphereTools_RemoveSphere_Statics::NewProp_bConvertToVoxelSpace = { "bConvertToVoxelSpace", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VoxelSphereTools_eventRemoveSphere_Parms), &Z_Construct_UFunction_UVoxelSphereTools_RemoveSphere_Statics::NewProp_bConvertToVoxelSpace_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UVoxelSphereTools_RemoveSphere_Statics::NewProp_bUpdateRender_SetBit(void* Obj)
{
	((VoxelSphereTools_eventRemoveSphere_Parms*)Obj)->bUpdateRender = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelSphereTools_RemoveSphere_Statics::NewProp_bUpdateRender = { "bUpdateRender", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VoxelSphereTools_eventRemoveSphere_Parms), &Z_Construct_UFunction_UVoxelSphereTools_RemoveSphere_Statics::NewProp_bUpdateRender_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelSphereTools_RemoveSphere_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_RemoveSphere_Statics::NewProp_ModifiedValues_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_RemoveSphere_Statics::NewProp_ModifiedValues,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_RemoveSphere_Statics::NewProp_EditedBounds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_RemoveSphere_Statics::NewProp_VoxelWorld,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_RemoveSphere_Statics::NewProp_Position,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_RemoveSphere_Statics::NewProp_Radius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_RemoveSphere_Statics::NewProp_bMultiThreaded,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_RemoveSphere_Statics::NewProp_bRecordModifiedValues,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_RemoveSphere_Statics::NewProp_bConvertToVoxelSpace,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_RemoveSphere_Statics::NewProp_bUpdateRender,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSphereTools_RemoveSphere_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelSphereTools_RemoveSphere_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelSphereTools, nullptr, "RemoveSphere", Z_Construct_UFunction_UVoxelSphereTools_RemoveSphere_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSphereTools_RemoveSphere_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVoxelSphereTools_RemoveSphere_Statics::VoxelSphereTools_eventRemoveSphere_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSphereTools_RemoveSphere_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelSphereTools_RemoveSphere_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVoxelSphereTools_RemoveSphere_Statics::VoxelSphereTools_eventRemoveSphere_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVoxelSphereTools_RemoveSphere()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelSphereTools_RemoveSphere_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelSphereTools::execRemoveSphere)
{
	P_GET_TARRAY_REF(FModifiedVoxelValue,Z_Param_Out_ModifiedValues);
	P_GET_STRUCT_REF(FVoxelIntBox,Z_Param_Out_EditedBounds);
	P_GET_OBJECT(AVoxelWorld,Z_Param_VoxelWorld);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_Position);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Radius);
	P_GET_UBOOL(Z_Param_bMultiThreaded);
	P_GET_UBOOL(Z_Param_bRecordModifiedValues);
	P_GET_UBOOL(Z_Param_bConvertToVoxelSpace);
	P_GET_UBOOL(Z_Param_bUpdateRender);
	P_FINISH;
	P_NATIVE_BEGIN;
	UVoxelSphereTools::RemoveSphere(Z_Param_Out_ModifiedValues,Z_Param_Out_EditedBounds,Z_Param_VoxelWorld,Z_Param_Out_Position,Z_Param_Radius,Z_Param_bMultiThreaded,Z_Param_bRecordModifiedValues,Z_Param_bConvertToVoxelSpace,Z_Param_bUpdateRender);
	P_NATIVE_END;
}
// ********** End Class UVoxelSphereTools Function RemoveSphere ************************************

// ********** Begin Class UVoxelSphereTools Function RemoveSphereAsync *****************************
struct Z_Construct_UFunction_UVoxelSphereTools_RemoveSphereAsync_Statics
{
	struct VoxelSphereTools_eventRemoveSphereAsync_Parms
	{
		UObject* WorldContextObject;
		FLatentActionInfo LatentInfo;
		TArray<FModifiedVoxelValue> ModifiedValues;
		FVoxelIntBox EditedBounds;
		AVoxelWorld* VoxelWorld;
		FVector Position;
		float Radius;
		bool bMultiThreaded;
		bool bRecordModifiedValues;
		bool bConvertToVoxelSpace;
		bool bUpdateRender;
		bool bHideLatentWarnings;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "bMultiThreaded, bRecordModifiedValues, bConvertToVoxelSpace, bUpdateRender, bHideLatentWarnings" },
		{ "Category", "Voxel|Tools|Sphere Tools" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Remove a sphere\n\x09 * Runs asynchronously in a background thread\n\x09 * @see RemoveSphere, RemoveSphereAsync and FVoxelSphereToolsImpl::RemoveSphere\n\x09 * @param\x09ModifiedValues       \x09Record the Values modified by this function. Useful to track the amount of edit done, for instance to give resources when digging\n\x09 * @param\x09""EditedBounds         \x09Returns the bounds edited by this function\n\x09 * @param\x09VoxelWorld           \x09The voxel world to do the edit to\n\x09 * @param\x09Position             \x09The position of the center. In world space (unreal units) if bConvertToVoxelSpace is true. In voxel space if false.\n\x09 * @param\x09Radius               \x09The radius. In unreal units if bConvertToVoxelSpace is true. In voxels if false.\n\x09 * @param\x09""bMultiThreaded       \x09If true, multiple threads will be used to make the edit faster. Not recommended on async functions, as it might cause lag.\n\x09 * @param\x09""bRecordModifiedValues\x09If false, will not fill ModifiedValues, making the edit faster.\n\x09 * @param\x09""bConvertToVoxelSpace \x09If true, Position and Radius will be converted to voxel space. Else they will be used directly.\n\x09 * @param\x09""bUpdateRender        \x09If false, will only edit the data and not update the render. Rarely needed.\n\x09 * @param\x09""bHideLatentWarnings  \x09Hide latent warnings caused by calling a node before its previous call completion.\n\x09*/" },
#endif
		{ "CPP_Default_bConvertToVoxelSpace", "true" },
		{ "CPP_Default_bHideLatentWarnings", "false" },
		{ "CPP_Default_bMultiThreaded", "false" },
		{ "CPP_Default_bRecordModifiedValues", "true" },
		{ "CPP_Default_bUpdateRender", "true" },
		{ "DefaultToSelf", "VoxelWorld" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Public/VoxelTools/Gen/VoxelSphereTools.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Remove a sphere\nRuns asynchronously in a background thread\n@see RemoveSphere, RemoveSphereAsync and FVoxelSphereToolsImpl::RemoveSphere\n@param       ModifiedValues          Record the Values modified by this function. Useful to track the amount of edit done, for instance to give resources when digging\n@param       EditedBounds            Returns the bounds edited by this function\n@param       VoxelWorld              The voxel world to do the edit to\n@param       Position                The position of the center. In world space (unreal units) if bConvertToVoxelSpace is true. In voxel space if false.\n@param       Radius                  The radius. In unreal units if bConvertToVoxelSpace is true. In voxels if false.\n@param       bMultiThreaded          If true, multiple threads will be used to make the edit faster. Not recommended on async functions, as it might cause lag.\n@param       bRecordModifiedValues   If false, will not fill ModifiedValues, making the edit faster.\n@param       bConvertToVoxelSpace    If true, Position and Radius will be converted to voxel space. Else they will be used directly.\n@param       bUpdateRender           If false, will only edit the data and not update the render. Rarely needed.\n@param       bHideLatentWarnings     Hide latent warnings caused by calling a node before its previous call completion." },
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
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelSphereTools_RemoveSphereAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelSphereTools_eventRemoveSphereAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSphereTools_RemoveSphereAsync_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelSphereTools_eventRemoveSphereAsync_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(0, nullptr) }; // 4146275481
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSphereTools_RemoveSphereAsync_Statics::NewProp_ModifiedValues_Inner = { "ModifiedValues", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FModifiedVoxelValue, METADATA_PARAMS(0, nullptr) }; // 1075743150
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVoxelSphereTools_RemoveSphereAsync_Statics::NewProp_ModifiedValues = { "ModifiedValues", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelSphereTools_eventRemoveSphereAsync_Parms, ModifiedValues), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 1075743150
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSphereTools_RemoveSphereAsync_Statics::NewProp_EditedBounds = { "EditedBounds", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelSphereTools_eventRemoveSphereAsync_Parms, EditedBounds), Z_Construct_UScriptStruct_FVoxelIntBox, METADATA_PARAMS(0, nullptr) }; // 3520536583
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelSphereTools_RemoveSphereAsync_Statics::NewProp_VoxelWorld = { "VoxelWorld", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelSphereTools_eventRemoveSphereAsync_Parms, VoxelWorld), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSphereTools_RemoveSphereAsync_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelSphereTools_eventRemoveSphereAsync_Parms, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Position_MetaData), NewProp_Position_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoxelSphereTools_RemoveSphereAsync_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelSphereTools_eventRemoveSphereAsync_Parms, Radius), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UVoxelSphereTools_RemoveSphereAsync_Statics::NewProp_bMultiThreaded_SetBit(void* Obj)
{
	((VoxelSphereTools_eventRemoveSphereAsync_Parms*)Obj)->bMultiThreaded = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelSphereTools_RemoveSphereAsync_Statics::NewProp_bMultiThreaded = { "bMultiThreaded", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VoxelSphereTools_eventRemoveSphereAsync_Parms), &Z_Construct_UFunction_UVoxelSphereTools_RemoveSphereAsync_Statics::NewProp_bMultiThreaded_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UVoxelSphereTools_RemoveSphereAsync_Statics::NewProp_bRecordModifiedValues_SetBit(void* Obj)
{
	((VoxelSphereTools_eventRemoveSphereAsync_Parms*)Obj)->bRecordModifiedValues = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelSphereTools_RemoveSphereAsync_Statics::NewProp_bRecordModifiedValues = { "bRecordModifiedValues", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VoxelSphereTools_eventRemoveSphereAsync_Parms), &Z_Construct_UFunction_UVoxelSphereTools_RemoveSphereAsync_Statics::NewProp_bRecordModifiedValues_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UVoxelSphereTools_RemoveSphereAsync_Statics::NewProp_bConvertToVoxelSpace_SetBit(void* Obj)
{
	((VoxelSphereTools_eventRemoveSphereAsync_Parms*)Obj)->bConvertToVoxelSpace = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelSphereTools_RemoveSphereAsync_Statics::NewProp_bConvertToVoxelSpace = { "bConvertToVoxelSpace", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VoxelSphereTools_eventRemoveSphereAsync_Parms), &Z_Construct_UFunction_UVoxelSphereTools_RemoveSphereAsync_Statics::NewProp_bConvertToVoxelSpace_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UVoxelSphereTools_RemoveSphereAsync_Statics::NewProp_bUpdateRender_SetBit(void* Obj)
{
	((VoxelSphereTools_eventRemoveSphereAsync_Parms*)Obj)->bUpdateRender = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelSphereTools_RemoveSphereAsync_Statics::NewProp_bUpdateRender = { "bUpdateRender", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VoxelSphereTools_eventRemoveSphereAsync_Parms), &Z_Construct_UFunction_UVoxelSphereTools_RemoveSphereAsync_Statics::NewProp_bUpdateRender_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UVoxelSphereTools_RemoveSphereAsync_Statics::NewProp_bHideLatentWarnings_SetBit(void* Obj)
{
	((VoxelSphereTools_eventRemoveSphereAsync_Parms*)Obj)->bHideLatentWarnings = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelSphereTools_RemoveSphereAsync_Statics::NewProp_bHideLatentWarnings = { "bHideLatentWarnings", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VoxelSphereTools_eventRemoveSphereAsync_Parms), &Z_Construct_UFunction_UVoxelSphereTools_RemoveSphereAsync_Statics::NewProp_bHideLatentWarnings_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelSphereTools_RemoveSphereAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_RemoveSphereAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_RemoveSphereAsync_Statics::NewProp_LatentInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_RemoveSphereAsync_Statics::NewProp_ModifiedValues_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_RemoveSphereAsync_Statics::NewProp_ModifiedValues,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_RemoveSphereAsync_Statics::NewProp_EditedBounds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_RemoveSphereAsync_Statics::NewProp_VoxelWorld,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_RemoveSphereAsync_Statics::NewProp_Position,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_RemoveSphereAsync_Statics::NewProp_Radius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_RemoveSphereAsync_Statics::NewProp_bMultiThreaded,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_RemoveSphereAsync_Statics::NewProp_bRecordModifiedValues,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_RemoveSphereAsync_Statics::NewProp_bConvertToVoxelSpace,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_RemoveSphereAsync_Statics::NewProp_bUpdateRender,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_RemoveSphereAsync_Statics::NewProp_bHideLatentWarnings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSphereTools_RemoveSphereAsync_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelSphereTools_RemoveSphereAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelSphereTools, nullptr, "RemoveSphereAsync", Z_Construct_UFunction_UVoxelSphereTools_RemoveSphereAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSphereTools_RemoveSphereAsync_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVoxelSphereTools_RemoveSphereAsync_Statics::VoxelSphereTools_eventRemoveSphereAsync_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSphereTools_RemoveSphereAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelSphereTools_RemoveSphereAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVoxelSphereTools_RemoveSphereAsync_Statics::VoxelSphereTools_eventRemoveSphereAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVoxelSphereTools_RemoveSphereAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelSphereTools_RemoveSphereAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelSphereTools::execRemoveSphereAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
	P_GET_TARRAY_REF(FModifiedVoxelValue,Z_Param_Out_ModifiedValues);
	P_GET_STRUCT_REF(FVoxelIntBox,Z_Param_Out_EditedBounds);
	P_GET_OBJECT(AVoxelWorld,Z_Param_VoxelWorld);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_Position);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Radius);
	P_GET_UBOOL(Z_Param_bMultiThreaded);
	P_GET_UBOOL(Z_Param_bRecordModifiedValues);
	P_GET_UBOOL(Z_Param_bConvertToVoxelSpace);
	P_GET_UBOOL(Z_Param_bUpdateRender);
	P_GET_UBOOL(Z_Param_bHideLatentWarnings);
	P_FINISH;
	P_NATIVE_BEGIN;
	UVoxelSphereTools::RemoveSphereAsync(Z_Param_WorldContextObject,Z_Param_LatentInfo,Z_Param_Out_ModifiedValues,Z_Param_Out_EditedBounds,Z_Param_VoxelWorld,Z_Param_Out_Position,Z_Param_Radius,Z_Param_bMultiThreaded,Z_Param_bRecordModifiedValues,Z_Param_bConvertToVoxelSpace,Z_Param_bUpdateRender,Z_Param_bHideLatentWarnings);
	P_NATIVE_END;
}
// ********** End Class UVoxelSphereTools Function RemoveSphereAsync *******************************

// ********** Begin Class UVoxelSphereTools Function RevertSphere **********************************
struct Z_Construct_UFunction_UVoxelSphereTools_RevertSphere_Statics
{
	struct VoxelSphereTools_eventRevertSphere_Parms
	{
		TArray<FModifiedVoxelValue> ModifiedValues;
		FVoxelIntBox EditedBounds;
		AVoxelWorld* VoxelWorld;
		FVector Position;
		float Radius;
		int32 HistoryPosition;
		bool bRevertValues;
		bool bRevertMaterials;
		bool bMultiThreaded;
		bool bRecordModifiedValues;
		bool bConvertToVoxelSpace;
		bool bUpdateRender;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "bMultiThreaded, bRecordModifiedValues, bConvertToVoxelSpace, bUpdateRender" },
		{ "Category", "Voxel|Tools|Sphere Tools" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Reverts the voxels inside a sphere shape to a previous frame in the undo history.\n\x09 * Can be used to \"paint\" the undo history\n\x09 * NOTE: Does not work with bMultiThreaded and does not fill ModifiedValues!\n\x09 * @see RevertSphere, RevertSphereAsync and FVoxelSphereToolsImpl::RevertSphere\n\x09 * @param\x09ModifiedValues       \x09Record the Values modified by this function. Useful to track the amount of edit done, for instance to give resources when digging\n\x09 * @param\x09""EditedBounds         \x09Returns the bounds edited by this function\n\x09 * @param\x09VoxelWorld           \x09The voxel world to do the edit to\n\x09 * @param\x09Position             \x09The position of the center. In world space (unreal units) if bConvertToVoxelSpace is true. In voxel space if false.\n\x09 * @param\x09Radius               \x09The radius. In unreal units if bConvertToVoxelSpace is true. In voxels if false.\n\x09 * @param\x09HistoryPosition      \x09The history position to go back to. You can use GetHistoryPosition to get it.\n\x09 * @param\x09""bRevertValues        \x09Whether to revert values\n\x09 * @param\x09""bRevertMaterials     \x09Whether to revert materials\n\x09 * @param\x09""bMultiThreaded       \x09If true, multiple threads will be used to make the edit faster.\n\x09 * @param\x09""bRecordModifiedValues\x09If false, will not fill ModifiedValues, making the edit faster.\n\x09 * @param\x09""bConvertToVoxelSpace \x09If true, Position and Radius will be converted to voxel space. Else they will be used directly.\n\x09 * @param\x09""bUpdateRender        \x09If false, will only edit the data and not update the render. Rarely needed.\n\x09*/" },
#endif
		{ "CPP_Default_bConvertToVoxelSpace", "true" },
		{ "CPP_Default_bMultiThreaded", "true" },
		{ "CPP_Default_bRecordModifiedValues", "true" },
		{ "CPP_Default_bUpdateRender", "true" },
		{ "DefaultToSelf", "VoxelWorld" },
		{ "ModuleRelativePath", "Public/VoxelTools/Gen/VoxelSphereTools.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Reverts the voxels inside a sphere shape to a previous frame in the undo history.\nCan be used to \"paint\" the undo history\nNOTE: Does not work with bMultiThreaded and does not fill ModifiedValues!\n@see RevertSphere, RevertSphereAsync and FVoxelSphereToolsImpl::RevertSphere\n@param       ModifiedValues          Record the Values modified by this function. Useful to track the amount of edit done, for instance to give resources when digging\n@param       EditedBounds            Returns the bounds edited by this function\n@param       VoxelWorld              The voxel world to do the edit to\n@param       Position                The position of the center. In world space (unreal units) if bConvertToVoxelSpace is true. In voxel space if false.\n@param       Radius                  The radius. In unreal units if bConvertToVoxelSpace is true. In voxels if false.\n@param       HistoryPosition         The history position to go back to. You can use GetHistoryPosition to get it.\n@param       bRevertValues           Whether to revert values\n@param       bRevertMaterials        Whether to revert materials\n@param       bMultiThreaded          If true, multiple threads will be used to make the edit faster.\n@param       bRecordModifiedValues   If false, will not fill ModifiedValues, making the edit faster.\n@param       bConvertToVoxelSpace    If true, Position and Radius will be converted to voxel space. Else they will be used directly.\n@param       bUpdateRender           If false, will only edit the data and not update the render. Rarely needed." },
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
	static const UECodeGen_Private::FIntPropertyParams NewProp_HistoryPosition;
	static void NewProp_bRevertValues_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRevertValues;
	static void NewProp_bRevertMaterials_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRevertMaterials;
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSphereTools_RevertSphere_Statics::NewProp_ModifiedValues_Inner = { "ModifiedValues", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FModifiedVoxelValue, METADATA_PARAMS(0, nullptr) }; // 1075743150
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVoxelSphereTools_RevertSphere_Statics::NewProp_ModifiedValues = { "ModifiedValues", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelSphereTools_eventRevertSphere_Parms, ModifiedValues), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 1075743150
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSphereTools_RevertSphere_Statics::NewProp_EditedBounds = { "EditedBounds", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelSphereTools_eventRevertSphere_Parms, EditedBounds), Z_Construct_UScriptStruct_FVoxelIntBox, METADATA_PARAMS(0, nullptr) }; // 3520536583
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelSphereTools_RevertSphere_Statics::NewProp_VoxelWorld = { "VoxelWorld", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelSphereTools_eventRevertSphere_Parms, VoxelWorld), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSphereTools_RevertSphere_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelSphereTools_eventRevertSphere_Parms, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Position_MetaData), NewProp_Position_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoxelSphereTools_RevertSphere_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelSphereTools_eventRevertSphere_Parms, Radius), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVoxelSphereTools_RevertSphere_Statics::NewProp_HistoryPosition = { "HistoryPosition", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelSphereTools_eventRevertSphere_Parms, HistoryPosition), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UVoxelSphereTools_RevertSphere_Statics::NewProp_bRevertValues_SetBit(void* Obj)
{
	((VoxelSphereTools_eventRevertSphere_Parms*)Obj)->bRevertValues = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelSphereTools_RevertSphere_Statics::NewProp_bRevertValues = { "bRevertValues", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VoxelSphereTools_eventRevertSphere_Parms), &Z_Construct_UFunction_UVoxelSphereTools_RevertSphere_Statics::NewProp_bRevertValues_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UVoxelSphereTools_RevertSphere_Statics::NewProp_bRevertMaterials_SetBit(void* Obj)
{
	((VoxelSphereTools_eventRevertSphere_Parms*)Obj)->bRevertMaterials = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelSphereTools_RevertSphere_Statics::NewProp_bRevertMaterials = { "bRevertMaterials", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VoxelSphereTools_eventRevertSphere_Parms), &Z_Construct_UFunction_UVoxelSphereTools_RevertSphere_Statics::NewProp_bRevertMaterials_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UVoxelSphereTools_RevertSphere_Statics::NewProp_bMultiThreaded_SetBit(void* Obj)
{
	((VoxelSphereTools_eventRevertSphere_Parms*)Obj)->bMultiThreaded = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelSphereTools_RevertSphere_Statics::NewProp_bMultiThreaded = { "bMultiThreaded", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VoxelSphereTools_eventRevertSphere_Parms), &Z_Construct_UFunction_UVoxelSphereTools_RevertSphere_Statics::NewProp_bMultiThreaded_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UVoxelSphereTools_RevertSphere_Statics::NewProp_bRecordModifiedValues_SetBit(void* Obj)
{
	((VoxelSphereTools_eventRevertSphere_Parms*)Obj)->bRecordModifiedValues = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelSphereTools_RevertSphere_Statics::NewProp_bRecordModifiedValues = { "bRecordModifiedValues", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VoxelSphereTools_eventRevertSphere_Parms), &Z_Construct_UFunction_UVoxelSphereTools_RevertSphere_Statics::NewProp_bRecordModifiedValues_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UVoxelSphereTools_RevertSphere_Statics::NewProp_bConvertToVoxelSpace_SetBit(void* Obj)
{
	((VoxelSphereTools_eventRevertSphere_Parms*)Obj)->bConvertToVoxelSpace = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelSphereTools_RevertSphere_Statics::NewProp_bConvertToVoxelSpace = { "bConvertToVoxelSpace", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VoxelSphereTools_eventRevertSphere_Parms), &Z_Construct_UFunction_UVoxelSphereTools_RevertSphere_Statics::NewProp_bConvertToVoxelSpace_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UVoxelSphereTools_RevertSphere_Statics::NewProp_bUpdateRender_SetBit(void* Obj)
{
	((VoxelSphereTools_eventRevertSphere_Parms*)Obj)->bUpdateRender = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelSphereTools_RevertSphere_Statics::NewProp_bUpdateRender = { "bUpdateRender", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VoxelSphereTools_eventRevertSphere_Parms), &Z_Construct_UFunction_UVoxelSphereTools_RevertSphere_Statics::NewProp_bUpdateRender_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelSphereTools_RevertSphere_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_RevertSphere_Statics::NewProp_ModifiedValues_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_RevertSphere_Statics::NewProp_ModifiedValues,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_RevertSphere_Statics::NewProp_EditedBounds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_RevertSphere_Statics::NewProp_VoxelWorld,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_RevertSphere_Statics::NewProp_Position,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_RevertSphere_Statics::NewProp_Radius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_RevertSphere_Statics::NewProp_HistoryPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_RevertSphere_Statics::NewProp_bRevertValues,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_RevertSphere_Statics::NewProp_bRevertMaterials,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_RevertSphere_Statics::NewProp_bMultiThreaded,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_RevertSphere_Statics::NewProp_bRecordModifiedValues,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_RevertSphere_Statics::NewProp_bConvertToVoxelSpace,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_RevertSphere_Statics::NewProp_bUpdateRender,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSphereTools_RevertSphere_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelSphereTools_RevertSphere_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelSphereTools, nullptr, "RevertSphere", Z_Construct_UFunction_UVoxelSphereTools_RevertSphere_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSphereTools_RevertSphere_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVoxelSphereTools_RevertSphere_Statics::VoxelSphereTools_eventRevertSphere_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSphereTools_RevertSphere_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelSphereTools_RevertSphere_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVoxelSphereTools_RevertSphere_Statics::VoxelSphereTools_eventRevertSphere_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVoxelSphereTools_RevertSphere()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelSphereTools_RevertSphere_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelSphereTools::execRevertSphere)
{
	P_GET_TARRAY_REF(FModifiedVoxelValue,Z_Param_Out_ModifiedValues);
	P_GET_STRUCT_REF(FVoxelIntBox,Z_Param_Out_EditedBounds);
	P_GET_OBJECT(AVoxelWorld,Z_Param_VoxelWorld);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_Position);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Radius);
	P_GET_PROPERTY(FIntProperty,Z_Param_HistoryPosition);
	P_GET_UBOOL(Z_Param_bRevertValues);
	P_GET_UBOOL(Z_Param_bRevertMaterials);
	P_GET_UBOOL(Z_Param_bMultiThreaded);
	P_GET_UBOOL(Z_Param_bRecordModifiedValues);
	P_GET_UBOOL(Z_Param_bConvertToVoxelSpace);
	P_GET_UBOOL(Z_Param_bUpdateRender);
	P_FINISH;
	P_NATIVE_BEGIN;
	UVoxelSphereTools::RevertSphere(Z_Param_Out_ModifiedValues,Z_Param_Out_EditedBounds,Z_Param_VoxelWorld,Z_Param_Out_Position,Z_Param_Radius,Z_Param_HistoryPosition,Z_Param_bRevertValues,Z_Param_bRevertMaterials,Z_Param_bMultiThreaded,Z_Param_bRecordModifiedValues,Z_Param_bConvertToVoxelSpace,Z_Param_bUpdateRender);
	P_NATIVE_END;
}
// ********** End Class UVoxelSphereTools Function RevertSphere ************************************

// ********** Begin Class UVoxelSphereTools Function RevertSphereAsync *****************************
struct Z_Construct_UFunction_UVoxelSphereTools_RevertSphereAsync_Statics
{
	struct VoxelSphereTools_eventRevertSphereAsync_Parms
	{
		UObject* WorldContextObject;
		FLatentActionInfo LatentInfo;
		TArray<FModifiedVoxelValue> ModifiedValues;
		FVoxelIntBox EditedBounds;
		AVoxelWorld* VoxelWorld;
		FVector Position;
		float Radius;
		int32 HistoryPosition;
		bool bRevertValues;
		bool bRevertMaterials;
		bool bMultiThreaded;
		bool bRecordModifiedValues;
		bool bConvertToVoxelSpace;
		bool bUpdateRender;
		bool bHideLatentWarnings;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "bMultiThreaded, bRecordModifiedValues, bConvertToVoxelSpace, bUpdateRender, bHideLatentWarnings" },
		{ "Category", "Voxel|Tools|Sphere Tools" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Reverts the voxels inside a sphere shape to a previous frame in the undo history.\n\x09 * Can be used to \"paint\" the undo history\n\x09 * NOTE: Does not work with bMultiThreaded and does not fill ModifiedValues!\n\x09 * Runs asynchronously in a background thread\n\x09 * @see RevertSphere, RevertSphereAsync and FVoxelSphereToolsImpl::RevertSphere\n\x09 * @param\x09ModifiedValues       \x09Record the Values modified by this function. Useful to track the amount of edit done, for instance to give resources when digging\n\x09 * @param\x09""EditedBounds         \x09Returns the bounds edited by this function\n\x09 * @param\x09VoxelWorld           \x09The voxel world to do the edit to\n\x09 * @param\x09Position             \x09The position of the center. In world space (unreal units) if bConvertToVoxelSpace is true. In voxel space if false.\n\x09 * @param\x09Radius               \x09The radius. In unreal units if bConvertToVoxelSpace is true. In voxels if false.\n\x09 * @param\x09HistoryPosition      \x09The history position to go back to. You can use GetHistoryPosition to get it.\n\x09 * @param\x09""bRevertValues        \x09Whether to revert values\n\x09 * @param\x09""bRevertMaterials     \x09Whether to revert materials\n\x09 * @param\x09""bMultiThreaded       \x09If true, multiple threads will be used to make the edit faster. Not recommended on async functions, as it might cause lag.\n\x09 * @param\x09""bRecordModifiedValues\x09If false, will not fill ModifiedValues, making the edit faster.\n\x09 * @param\x09""bConvertToVoxelSpace \x09If true, Position and Radius will be converted to voxel space. Else they will be used directly.\n\x09 * @param\x09""bUpdateRender        \x09If false, will only edit the data and not update the render. Rarely needed.\n\x09 * @param\x09""bHideLatentWarnings  \x09Hide latent warnings caused by calling a node before its previous call completion.\n\x09*/" },
#endif
		{ "CPP_Default_bConvertToVoxelSpace", "true" },
		{ "CPP_Default_bHideLatentWarnings", "false" },
		{ "CPP_Default_bMultiThreaded", "false" },
		{ "CPP_Default_bRecordModifiedValues", "true" },
		{ "CPP_Default_bUpdateRender", "true" },
		{ "DefaultToSelf", "VoxelWorld" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Public/VoxelTools/Gen/VoxelSphereTools.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Reverts the voxels inside a sphere shape to a previous frame in the undo history.\nCan be used to \"paint\" the undo history\nNOTE: Does not work with bMultiThreaded and does not fill ModifiedValues!\nRuns asynchronously in a background thread\n@see RevertSphere, RevertSphereAsync and FVoxelSphereToolsImpl::RevertSphere\n@param       ModifiedValues          Record the Values modified by this function. Useful to track the amount of edit done, for instance to give resources when digging\n@param       EditedBounds            Returns the bounds edited by this function\n@param       VoxelWorld              The voxel world to do the edit to\n@param       Position                The position of the center. In world space (unreal units) if bConvertToVoxelSpace is true. In voxel space if false.\n@param       Radius                  The radius. In unreal units if bConvertToVoxelSpace is true. In voxels if false.\n@param       HistoryPosition         The history position to go back to. You can use GetHistoryPosition to get it.\n@param       bRevertValues           Whether to revert values\n@param       bRevertMaterials        Whether to revert materials\n@param       bMultiThreaded          If true, multiple threads will be used to make the edit faster. Not recommended on async functions, as it might cause lag.\n@param       bRecordModifiedValues   If false, will not fill ModifiedValues, making the edit faster.\n@param       bConvertToVoxelSpace    If true, Position and Radius will be converted to voxel space. Else they will be used directly.\n@param       bUpdateRender           If false, will only edit the data and not update the render. Rarely needed.\n@param       bHideLatentWarnings     Hide latent warnings caused by calling a node before its previous call completion." },
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
	static const UECodeGen_Private::FIntPropertyParams NewProp_HistoryPosition;
	static void NewProp_bRevertValues_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRevertValues;
	static void NewProp_bRevertMaterials_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRevertMaterials;
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
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelSphereTools_RevertSphereAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelSphereTools_eventRevertSphereAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSphereTools_RevertSphereAsync_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelSphereTools_eventRevertSphereAsync_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(0, nullptr) }; // 4146275481
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSphereTools_RevertSphereAsync_Statics::NewProp_ModifiedValues_Inner = { "ModifiedValues", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FModifiedVoxelValue, METADATA_PARAMS(0, nullptr) }; // 1075743150
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVoxelSphereTools_RevertSphereAsync_Statics::NewProp_ModifiedValues = { "ModifiedValues", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelSphereTools_eventRevertSphereAsync_Parms, ModifiedValues), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 1075743150
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSphereTools_RevertSphereAsync_Statics::NewProp_EditedBounds = { "EditedBounds", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelSphereTools_eventRevertSphereAsync_Parms, EditedBounds), Z_Construct_UScriptStruct_FVoxelIntBox, METADATA_PARAMS(0, nullptr) }; // 3520536583
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelSphereTools_RevertSphereAsync_Statics::NewProp_VoxelWorld = { "VoxelWorld", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelSphereTools_eventRevertSphereAsync_Parms, VoxelWorld), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSphereTools_RevertSphereAsync_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelSphereTools_eventRevertSphereAsync_Parms, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Position_MetaData), NewProp_Position_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoxelSphereTools_RevertSphereAsync_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelSphereTools_eventRevertSphereAsync_Parms, Radius), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVoxelSphereTools_RevertSphereAsync_Statics::NewProp_HistoryPosition = { "HistoryPosition", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelSphereTools_eventRevertSphereAsync_Parms, HistoryPosition), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UVoxelSphereTools_RevertSphereAsync_Statics::NewProp_bRevertValues_SetBit(void* Obj)
{
	((VoxelSphereTools_eventRevertSphereAsync_Parms*)Obj)->bRevertValues = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelSphereTools_RevertSphereAsync_Statics::NewProp_bRevertValues = { "bRevertValues", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VoxelSphereTools_eventRevertSphereAsync_Parms), &Z_Construct_UFunction_UVoxelSphereTools_RevertSphereAsync_Statics::NewProp_bRevertValues_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UVoxelSphereTools_RevertSphereAsync_Statics::NewProp_bRevertMaterials_SetBit(void* Obj)
{
	((VoxelSphereTools_eventRevertSphereAsync_Parms*)Obj)->bRevertMaterials = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelSphereTools_RevertSphereAsync_Statics::NewProp_bRevertMaterials = { "bRevertMaterials", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VoxelSphereTools_eventRevertSphereAsync_Parms), &Z_Construct_UFunction_UVoxelSphereTools_RevertSphereAsync_Statics::NewProp_bRevertMaterials_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UVoxelSphereTools_RevertSphereAsync_Statics::NewProp_bMultiThreaded_SetBit(void* Obj)
{
	((VoxelSphereTools_eventRevertSphereAsync_Parms*)Obj)->bMultiThreaded = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelSphereTools_RevertSphereAsync_Statics::NewProp_bMultiThreaded = { "bMultiThreaded", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VoxelSphereTools_eventRevertSphereAsync_Parms), &Z_Construct_UFunction_UVoxelSphereTools_RevertSphereAsync_Statics::NewProp_bMultiThreaded_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UVoxelSphereTools_RevertSphereAsync_Statics::NewProp_bRecordModifiedValues_SetBit(void* Obj)
{
	((VoxelSphereTools_eventRevertSphereAsync_Parms*)Obj)->bRecordModifiedValues = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelSphereTools_RevertSphereAsync_Statics::NewProp_bRecordModifiedValues = { "bRecordModifiedValues", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VoxelSphereTools_eventRevertSphereAsync_Parms), &Z_Construct_UFunction_UVoxelSphereTools_RevertSphereAsync_Statics::NewProp_bRecordModifiedValues_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UVoxelSphereTools_RevertSphereAsync_Statics::NewProp_bConvertToVoxelSpace_SetBit(void* Obj)
{
	((VoxelSphereTools_eventRevertSphereAsync_Parms*)Obj)->bConvertToVoxelSpace = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelSphereTools_RevertSphereAsync_Statics::NewProp_bConvertToVoxelSpace = { "bConvertToVoxelSpace", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VoxelSphereTools_eventRevertSphereAsync_Parms), &Z_Construct_UFunction_UVoxelSphereTools_RevertSphereAsync_Statics::NewProp_bConvertToVoxelSpace_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UVoxelSphereTools_RevertSphereAsync_Statics::NewProp_bUpdateRender_SetBit(void* Obj)
{
	((VoxelSphereTools_eventRevertSphereAsync_Parms*)Obj)->bUpdateRender = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelSphereTools_RevertSphereAsync_Statics::NewProp_bUpdateRender = { "bUpdateRender", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VoxelSphereTools_eventRevertSphereAsync_Parms), &Z_Construct_UFunction_UVoxelSphereTools_RevertSphereAsync_Statics::NewProp_bUpdateRender_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UVoxelSphereTools_RevertSphereAsync_Statics::NewProp_bHideLatentWarnings_SetBit(void* Obj)
{
	((VoxelSphereTools_eventRevertSphereAsync_Parms*)Obj)->bHideLatentWarnings = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelSphereTools_RevertSphereAsync_Statics::NewProp_bHideLatentWarnings = { "bHideLatentWarnings", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VoxelSphereTools_eventRevertSphereAsync_Parms), &Z_Construct_UFunction_UVoxelSphereTools_RevertSphereAsync_Statics::NewProp_bHideLatentWarnings_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelSphereTools_RevertSphereAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_RevertSphereAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_RevertSphereAsync_Statics::NewProp_LatentInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_RevertSphereAsync_Statics::NewProp_ModifiedValues_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_RevertSphereAsync_Statics::NewProp_ModifiedValues,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_RevertSphereAsync_Statics::NewProp_EditedBounds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_RevertSphereAsync_Statics::NewProp_VoxelWorld,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_RevertSphereAsync_Statics::NewProp_Position,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_RevertSphereAsync_Statics::NewProp_Radius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_RevertSphereAsync_Statics::NewProp_HistoryPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_RevertSphereAsync_Statics::NewProp_bRevertValues,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_RevertSphereAsync_Statics::NewProp_bRevertMaterials,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_RevertSphereAsync_Statics::NewProp_bMultiThreaded,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_RevertSphereAsync_Statics::NewProp_bRecordModifiedValues,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_RevertSphereAsync_Statics::NewProp_bConvertToVoxelSpace,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_RevertSphereAsync_Statics::NewProp_bUpdateRender,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_RevertSphereAsync_Statics::NewProp_bHideLatentWarnings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSphereTools_RevertSphereAsync_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelSphereTools_RevertSphereAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelSphereTools, nullptr, "RevertSphereAsync", Z_Construct_UFunction_UVoxelSphereTools_RevertSphereAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSphereTools_RevertSphereAsync_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVoxelSphereTools_RevertSphereAsync_Statics::VoxelSphereTools_eventRevertSphereAsync_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSphereTools_RevertSphereAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelSphereTools_RevertSphereAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVoxelSphereTools_RevertSphereAsync_Statics::VoxelSphereTools_eventRevertSphereAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVoxelSphereTools_RevertSphereAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelSphereTools_RevertSphereAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelSphereTools::execRevertSphereAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
	P_GET_TARRAY_REF(FModifiedVoxelValue,Z_Param_Out_ModifiedValues);
	P_GET_STRUCT_REF(FVoxelIntBox,Z_Param_Out_EditedBounds);
	P_GET_OBJECT(AVoxelWorld,Z_Param_VoxelWorld);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_Position);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Radius);
	P_GET_PROPERTY(FIntProperty,Z_Param_HistoryPosition);
	P_GET_UBOOL(Z_Param_bRevertValues);
	P_GET_UBOOL(Z_Param_bRevertMaterials);
	P_GET_UBOOL(Z_Param_bMultiThreaded);
	P_GET_UBOOL(Z_Param_bRecordModifiedValues);
	P_GET_UBOOL(Z_Param_bConvertToVoxelSpace);
	P_GET_UBOOL(Z_Param_bUpdateRender);
	P_GET_UBOOL(Z_Param_bHideLatentWarnings);
	P_FINISH;
	P_NATIVE_BEGIN;
	UVoxelSphereTools::RevertSphereAsync(Z_Param_WorldContextObject,Z_Param_LatentInfo,Z_Param_Out_ModifiedValues,Z_Param_Out_EditedBounds,Z_Param_VoxelWorld,Z_Param_Out_Position,Z_Param_Radius,Z_Param_HistoryPosition,Z_Param_bRevertValues,Z_Param_bRevertMaterials,Z_Param_bMultiThreaded,Z_Param_bRecordModifiedValues,Z_Param_bConvertToVoxelSpace,Z_Param_bUpdateRender,Z_Param_bHideLatentWarnings);
	P_NATIVE_END;
}
// ********** End Class UVoxelSphereTools Function RevertSphereAsync *******************************

// ********** Begin Class UVoxelSphereTools Function RevertSphereToGenerator ***********************
struct Z_Construct_UFunction_UVoxelSphereTools_RevertSphereToGenerator_Statics
{
	struct VoxelSphereTools_eventRevertSphereToGenerator_Parms
	{
		TArray<FModifiedVoxelValue> ModifiedValues;
		FVoxelIntBox EditedBounds;
		AVoxelWorld* VoxelWorld;
		FVector Position;
		float Radius;
		bool bRevertValues;
		bool bRevertMaterials;
		bool bMultiThreaded;
		bool bRecordModifiedValues;
		bool bConvertToVoxelSpace;
		bool bUpdateRender;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "bMultiThreaded, bRecordModifiedValues, bConvertToVoxelSpace, bUpdateRender" },
		{ "Category", "Voxel|Tools|Sphere Tools" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Reverts the voxels inside a sphere shape to their generator value\n\x09 * NOTE: Does not work with bMultiThreaded and does not fill ModifiedValues!\n\x09 * @see RevertSphereToGenerator, RevertSphereToGeneratorAsync and FVoxelSphereToolsImpl::RevertSphereToGenerator\n\x09 * @param\x09ModifiedValues       \x09Record the Values modified by this function. Useful to track the amount of edit done, for instance to give resources when digging\n\x09 * @param\x09""EditedBounds         \x09Returns the bounds edited by this function\n\x09 * @param\x09VoxelWorld           \x09The voxel world to do the edit to\n\x09 * @param\x09Position             \x09The position of the center. In world space (unreal units) if bConvertToVoxelSpace is true. In voxel space if false.\n\x09 * @param\x09Radius               \x09The radius. In unreal units if bConvertToVoxelSpace is true. In voxels if false.\n\x09 * @param\x09""bRevertValues        \x09Whether to revert values\n\x09 * @param\x09""bRevertMaterials     \x09Whether to revert materials\n\x09 * @param\x09""bMultiThreaded       \x09If true, multiple threads will be used to make the edit faster.\n\x09 * @param\x09""bRecordModifiedValues\x09If false, will not fill ModifiedValues, making the edit faster.\n\x09 * @param\x09""bConvertToVoxelSpace \x09If true, Position and Radius will be converted to voxel space. Else they will be used directly.\n\x09 * @param\x09""bUpdateRender        \x09If false, will only edit the data and not update the render. Rarely needed.\n\x09*/" },
#endif
		{ "CPP_Default_bConvertToVoxelSpace", "true" },
		{ "CPP_Default_bMultiThreaded", "true" },
		{ "CPP_Default_bRecordModifiedValues", "true" },
		{ "CPP_Default_bUpdateRender", "true" },
		{ "DefaultToSelf", "VoxelWorld" },
		{ "ModuleRelativePath", "Public/VoxelTools/Gen/VoxelSphereTools.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Reverts the voxels inside a sphere shape to their generator value\nNOTE: Does not work with bMultiThreaded and does not fill ModifiedValues!\n@see RevertSphereToGenerator, RevertSphereToGeneratorAsync and FVoxelSphereToolsImpl::RevertSphereToGenerator\n@param       ModifiedValues          Record the Values modified by this function. Useful to track the amount of edit done, for instance to give resources when digging\n@param       EditedBounds            Returns the bounds edited by this function\n@param       VoxelWorld              The voxel world to do the edit to\n@param       Position                The position of the center. In world space (unreal units) if bConvertToVoxelSpace is true. In voxel space if false.\n@param       Radius                  The radius. In unreal units if bConvertToVoxelSpace is true. In voxels if false.\n@param       bRevertValues           Whether to revert values\n@param       bRevertMaterials        Whether to revert materials\n@param       bMultiThreaded          If true, multiple threads will be used to make the edit faster.\n@param       bRecordModifiedValues   If false, will not fill ModifiedValues, making the edit faster.\n@param       bConvertToVoxelSpace    If true, Position and Radius will be converted to voxel space. Else they will be used directly.\n@param       bUpdateRender           If false, will only edit the data and not update the render. Rarely needed." },
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
	static void NewProp_bRevertValues_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRevertValues;
	static void NewProp_bRevertMaterials_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRevertMaterials;
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSphereTools_RevertSphereToGenerator_Statics::NewProp_ModifiedValues_Inner = { "ModifiedValues", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FModifiedVoxelValue, METADATA_PARAMS(0, nullptr) }; // 1075743150
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVoxelSphereTools_RevertSphereToGenerator_Statics::NewProp_ModifiedValues = { "ModifiedValues", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelSphereTools_eventRevertSphereToGenerator_Parms, ModifiedValues), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 1075743150
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSphereTools_RevertSphereToGenerator_Statics::NewProp_EditedBounds = { "EditedBounds", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelSphereTools_eventRevertSphereToGenerator_Parms, EditedBounds), Z_Construct_UScriptStruct_FVoxelIntBox, METADATA_PARAMS(0, nullptr) }; // 3520536583
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelSphereTools_RevertSphereToGenerator_Statics::NewProp_VoxelWorld = { "VoxelWorld", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelSphereTools_eventRevertSphereToGenerator_Parms, VoxelWorld), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSphereTools_RevertSphereToGenerator_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelSphereTools_eventRevertSphereToGenerator_Parms, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Position_MetaData), NewProp_Position_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoxelSphereTools_RevertSphereToGenerator_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelSphereTools_eventRevertSphereToGenerator_Parms, Radius), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UVoxelSphereTools_RevertSphereToGenerator_Statics::NewProp_bRevertValues_SetBit(void* Obj)
{
	((VoxelSphereTools_eventRevertSphereToGenerator_Parms*)Obj)->bRevertValues = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelSphereTools_RevertSphereToGenerator_Statics::NewProp_bRevertValues = { "bRevertValues", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VoxelSphereTools_eventRevertSphereToGenerator_Parms), &Z_Construct_UFunction_UVoxelSphereTools_RevertSphereToGenerator_Statics::NewProp_bRevertValues_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UVoxelSphereTools_RevertSphereToGenerator_Statics::NewProp_bRevertMaterials_SetBit(void* Obj)
{
	((VoxelSphereTools_eventRevertSphereToGenerator_Parms*)Obj)->bRevertMaterials = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelSphereTools_RevertSphereToGenerator_Statics::NewProp_bRevertMaterials = { "bRevertMaterials", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VoxelSphereTools_eventRevertSphereToGenerator_Parms), &Z_Construct_UFunction_UVoxelSphereTools_RevertSphereToGenerator_Statics::NewProp_bRevertMaterials_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UVoxelSphereTools_RevertSphereToGenerator_Statics::NewProp_bMultiThreaded_SetBit(void* Obj)
{
	((VoxelSphereTools_eventRevertSphereToGenerator_Parms*)Obj)->bMultiThreaded = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelSphereTools_RevertSphereToGenerator_Statics::NewProp_bMultiThreaded = { "bMultiThreaded", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VoxelSphereTools_eventRevertSphereToGenerator_Parms), &Z_Construct_UFunction_UVoxelSphereTools_RevertSphereToGenerator_Statics::NewProp_bMultiThreaded_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UVoxelSphereTools_RevertSphereToGenerator_Statics::NewProp_bRecordModifiedValues_SetBit(void* Obj)
{
	((VoxelSphereTools_eventRevertSphereToGenerator_Parms*)Obj)->bRecordModifiedValues = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelSphereTools_RevertSphereToGenerator_Statics::NewProp_bRecordModifiedValues = { "bRecordModifiedValues", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VoxelSphereTools_eventRevertSphereToGenerator_Parms), &Z_Construct_UFunction_UVoxelSphereTools_RevertSphereToGenerator_Statics::NewProp_bRecordModifiedValues_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UVoxelSphereTools_RevertSphereToGenerator_Statics::NewProp_bConvertToVoxelSpace_SetBit(void* Obj)
{
	((VoxelSphereTools_eventRevertSphereToGenerator_Parms*)Obj)->bConvertToVoxelSpace = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelSphereTools_RevertSphereToGenerator_Statics::NewProp_bConvertToVoxelSpace = { "bConvertToVoxelSpace", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VoxelSphereTools_eventRevertSphereToGenerator_Parms), &Z_Construct_UFunction_UVoxelSphereTools_RevertSphereToGenerator_Statics::NewProp_bConvertToVoxelSpace_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UVoxelSphereTools_RevertSphereToGenerator_Statics::NewProp_bUpdateRender_SetBit(void* Obj)
{
	((VoxelSphereTools_eventRevertSphereToGenerator_Parms*)Obj)->bUpdateRender = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelSphereTools_RevertSphereToGenerator_Statics::NewProp_bUpdateRender = { "bUpdateRender", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VoxelSphereTools_eventRevertSphereToGenerator_Parms), &Z_Construct_UFunction_UVoxelSphereTools_RevertSphereToGenerator_Statics::NewProp_bUpdateRender_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelSphereTools_RevertSphereToGenerator_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_RevertSphereToGenerator_Statics::NewProp_ModifiedValues_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_RevertSphereToGenerator_Statics::NewProp_ModifiedValues,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_RevertSphereToGenerator_Statics::NewProp_EditedBounds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_RevertSphereToGenerator_Statics::NewProp_VoxelWorld,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_RevertSphereToGenerator_Statics::NewProp_Position,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_RevertSphereToGenerator_Statics::NewProp_Radius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_RevertSphereToGenerator_Statics::NewProp_bRevertValues,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_RevertSphereToGenerator_Statics::NewProp_bRevertMaterials,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_RevertSphereToGenerator_Statics::NewProp_bMultiThreaded,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_RevertSphereToGenerator_Statics::NewProp_bRecordModifiedValues,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_RevertSphereToGenerator_Statics::NewProp_bConvertToVoxelSpace,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_RevertSphereToGenerator_Statics::NewProp_bUpdateRender,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSphereTools_RevertSphereToGenerator_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelSphereTools_RevertSphereToGenerator_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelSphereTools, nullptr, "RevertSphereToGenerator", Z_Construct_UFunction_UVoxelSphereTools_RevertSphereToGenerator_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSphereTools_RevertSphereToGenerator_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVoxelSphereTools_RevertSphereToGenerator_Statics::VoxelSphereTools_eventRevertSphereToGenerator_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSphereTools_RevertSphereToGenerator_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelSphereTools_RevertSphereToGenerator_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVoxelSphereTools_RevertSphereToGenerator_Statics::VoxelSphereTools_eventRevertSphereToGenerator_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVoxelSphereTools_RevertSphereToGenerator()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelSphereTools_RevertSphereToGenerator_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelSphereTools::execRevertSphereToGenerator)
{
	P_GET_TARRAY_REF(FModifiedVoxelValue,Z_Param_Out_ModifiedValues);
	P_GET_STRUCT_REF(FVoxelIntBox,Z_Param_Out_EditedBounds);
	P_GET_OBJECT(AVoxelWorld,Z_Param_VoxelWorld);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_Position);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Radius);
	P_GET_UBOOL(Z_Param_bRevertValues);
	P_GET_UBOOL(Z_Param_bRevertMaterials);
	P_GET_UBOOL(Z_Param_bMultiThreaded);
	P_GET_UBOOL(Z_Param_bRecordModifiedValues);
	P_GET_UBOOL(Z_Param_bConvertToVoxelSpace);
	P_GET_UBOOL(Z_Param_bUpdateRender);
	P_FINISH;
	P_NATIVE_BEGIN;
	UVoxelSphereTools::RevertSphereToGenerator(Z_Param_Out_ModifiedValues,Z_Param_Out_EditedBounds,Z_Param_VoxelWorld,Z_Param_Out_Position,Z_Param_Radius,Z_Param_bRevertValues,Z_Param_bRevertMaterials,Z_Param_bMultiThreaded,Z_Param_bRecordModifiedValues,Z_Param_bConvertToVoxelSpace,Z_Param_bUpdateRender);
	P_NATIVE_END;
}
// ********** End Class UVoxelSphereTools Function RevertSphereToGenerator *************************

// ********** Begin Class UVoxelSphereTools Function RevertSphereToGeneratorAsync ******************
struct Z_Construct_UFunction_UVoxelSphereTools_RevertSphereToGeneratorAsync_Statics
{
	struct VoxelSphereTools_eventRevertSphereToGeneratorAsync_Parms
	{
		UObject* WorldContextObject;
		FLatentActionInfo LatentInfo;
		TArray<FModifiedVoxelValue> ModifiedValues;
		FVoxelIntBox EditedBounds;
		AVoxelWorld* VoxelWorld;
		FVector Position;
		float Radius;
		bool bRevertValues;
		bool bRevertMaterials;
		bool bMultiThreaded;
		bool bRecordModifiedValues;
		bool bConvertToVoxelSpace;
		bool bUpdateRender;
		bool bHideLatentWarnings;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "bMultiThreaded, bRecordModifiedValues, bConvertToVoxelSpace, bUpdateRender, bHideLatentWarnings" },
		{ "Category", "Voxel|Tools|Sphere Tools" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Reverts the voxels inside a sphere shape to their generator value\n\x09 * NOTE: Does not work with bMultiThreaded and does not fill ModifiedValues!\n\x09 * Runs asynchronously in a background thread\n\x09 * @see RevertSphereToGenerator, RevertSphereToGeneratorAsync and FVoxelSphereToolsImpl::RevertSphereToGenerator\n\x09 * @param\x09ModifiedValues       \x09Record the Values modified by this function. Useful to track the amount of edit done, for instance to give resources when digging\n\x09 * @param\x09""EditedBounds         \x09Returns the bounds edited by this function\n\x09 * @param\x09VoxelWorld           \x09The voxel world to do the edit to\n\x09 * @param\x09Position             \x09The position of the center. In world space (unreal units) if bConvertToVoxelSpace is true. In voxel space if false.\n\x09 * @param\x09Radius               \x09The radius. In unreal units if bConvertToVoxelSpace is true. In voxels if false.\n\x09 * @param\x09""bRevertValues        \x09Whether to revert values\n\x09 * @param\x09""bRevertMaterials     \x09Whether to revert materials\n\x09 * @param\x09""bMultiThreaded       \x09If true, multiple threads will be used to make the edit faster. Not recommended on async functions, as it might cause lag.\n\x09 * @param\x09""bRecordModifiedValues\x09If false, will not fill ModifiedValues, making the edit faster.\n\x09 * @param\x09""bConvertToVoxelSpace \x09If true, Position and Radius will be converted to voxel space. Else they will be used directly.\n\x09 * @param\x09""bUpdateRender        \x09If false, will only edit the data and not update the render. Rarely needed.\n\x09 * @param\x09""bHideLatentWarnings  \x09Hide latent warnings caused by calling a node before its previous call completion.\n\x09*/" },
#endif
		{ "CPP_Default_bConvertToVoxelSpace", "true" },
		{ "CPP_Default_bHideLatentWarnings", "false" },
		{ "CPP_Default_bMultiThreaded", "false" },
		{ "CPP_Default_bRecordModifiedValues", "true" },
		{ "CPP_Default_bUpdateRender", "true" },
		{ "DefaultToSelf", "VoxelWorld" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Public/VoxelTools/Gen/VoxelSphereTools.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Reverts the voxels inside a sphere shape to their generator value\nNOTE: Does not work with bMultiThreaded and does not fill ModifiedValues!\nRuns asynchronously in a background thread\n@see RevertSphereToGenerator, RevertSphereToGeneratorAsync and FVoxelSphereToolsImpl::RevertSphereToGenerator\n@param       ModifiedValues          Record the Values modified by this function. Useful to track the amount of edit done, for instance to give resources when digging\n@param       EditedBounds            Returns the bounds edited by this function\n@param       VoxelWorld              The voxel world to do the edit to\n@param       Position                The position of the center. In world space (unreal units) if bConvertToVoxelSpace is true. In voxel space if false.\n@param       Radius                  The radius. In unreal units if bConvertToVoxelSpace is true. In voxels if false.\n@param       bRevertValues           Whether to revert values\n@param       bRevertMaterials        Whether to revert materials\n@param       bMultiThreaded          If true, multiple threads will be used to make the edit faster. Not recommended on async functions, as it might cause lag.\n@param       bRecordModifiedValues   If false, will not fill ModifiedValues, making the edit faster.\n@param       bConvertToVoxelSpace    If true, Position and Radius will be converted to voxel space. Else they will be used directly.\n@param       bUpdateRender           If false, will only edit the data and not update the render. Rarely needed.\n@param       bHideLatentWarnings     Hide latent warnings caused by calling a node before its previous call completion." },
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
	static void NewProp_bRevertValues_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRevertValues;
	static void NewProp_bRevertMaterials_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRevertMaterials;
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
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelSphereTools_RevertSphereToGeneratorAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelSphereTools_eventRevertSphereToGeneratorAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSphereTools_RevertSphereToGeneratorAsync_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelSphereTools_eventRevertSphereToGeneratorAsync_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(0, nullptr) }; // 4146275481
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSphereTools_RevertSphereToGeneratorAsync_Statics::NewProp_ModifiedValues_Inner = { "ModifiedValues", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FModifiedVoxelValue, METADATA_PARAMS(0, nullptr) }; // 1075743150
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVoxelSphereTools_RevertSphereToGeneratorAsync_Statics::NewProp_ModifiedValues = { "ModifiedValues", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelSphereTools_eventRevertSphereToGeneratorAsync_Parms, ModifiedValues), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 1075743150
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSphereTools_RevertSphereToGeneratorAsync_Statics::NewProp_EditedBounds = { "EditedBounds", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelSphereTools_eventRevertSphereToGeneratorAsync_Parms, EditedBounds), Z_Construct_UScriptStruct_FVoxelIntBox, METADATA_PARAMS(0, nullptr) }; // 3520536583
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelSphereTools_RevertSphereToGeneratorAsync_Statics::NewProp_VoxelWorld = { "VoxelWorld", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelSphereTools_eventRevertSphereToGeneratorAsync_Parms, VoxelWorld), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSphereTools_RevertSphereToGeneratorAsync_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelSphereTools_eventRevertSphereToGeneratorAsync_Parms, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Position_MetaData), NewProp_Position_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoxelSphereTools_RevertSphereToGeneratorAsync_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelSphereTools_eventRevertSphereToGeneratorAsync_Parms, Radius), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UVoxelSphereTools_RevertSphereToGeneratorAsync_Statics::NewProp_bRevertValues_SetBit(void* Obj)
{
	((VoxelSphereTools_eventRevertSphereToGeneratorAsync_Parms*)Obj)->bRevertValues = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelSphereTools_RevertSphereToGeneratorAsync_Statics::NewProp_bRevertValues = { "bRevertValues", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VoxelSphereTools_eventRevertSphereToGeneratorAsync_Parms), &Z_Construct_UFunction_UVoxelSphereTools_RevertSphereToGeneratorAsync_Statics::NewProp_bRevertValues_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UVoxelSphereTools_RevertSphereToGeneratorAsync_Statics::NewProp_bRevertMaterials_SetBit(void* Obj)
{
	((VoxelSphereTools_eventRevertSphereToGeneratorAsync_Parms*)Obj)->bRevertMaterials = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelSphereTools_RevertSphereToGeneratorAsync_Statics::NewProp_bRevertMaterials = { "bRevertMaterials", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VoxelSphereTools_eventRevertSphereToGeneratorAsync_Parms), &Z_Construct_UFunction_UVoxelSphereTools_RevertSphereToGeneratorAsync_Statics::NewProp_bRevertMaterials_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UVoxelSphereTools_RevertSphereToGeneratorAsync_Statics::NewProp_bMultiThreaded_SetBit(void* Obj)
{
	((VoxelSphereTools_eventRevertSphereToGeneratorAsync_Parms*)Obj)->bMultiThreaded = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelSphereTools_RevertSphereToGeneratorAsync_Statics::NewProp_bMultiThreaded = { "bMultiThreaded", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VoxelSphereTools_eventRevertSphereToGeneratorAsync_Parms), &Z_Construct_UFunction_UVoxelSphereTools_RevertSphereToGeneratorAsync_Statics::NewProp_bMultiThreaded_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UVoxelSphereTools_RevertSphereToGeneratorAsync_Statics::NewProp_bRecordModifiedValues_SetBit(void* Obj)
{
	((VoxelSphereTools_eventRevertSphereToGeneratorAsync_Parms*)Obj)->bRecordModifiedValues = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelSphereTools_RevertSphereToGeneratorAsync_Statics::NewProp_bRecordModifiedValues = { "bRecordModifiedValues", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VoxelSphereTools_eventRevertSphereToGeneratorAsync_Parms), &Z_Construct_UFunction_UVoxelSphereTools_RevertSphereToGeneratorAsync_Statics::NewProp_bRecordModifiedValues_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UVoxelSphereTools_RevertSphereToGeneratorAsync_Statics::NewProp_bConvertToVoxelSpace_SetBit(void* Obj)
{
	((VoxelSphereTools_eventRevertSphereToGeneratorAsync_Parms*)Obj)->bConvertToVoxelSpace = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelSphereTools_RevertSphereToGeneratorAsync_Statics::NewProp_bConvertToVoxelSpace = { "bConvertToVoxelSpace", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VoxelSphereTools_eventRevertSphereToGeneratorAsync_Parms), &Z_Construct_UFunction_UVoxelSphereTools_RevertSphereToGeneratorAsync_Statics::NewProp_bConvertToVoxelSpace_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UVoxelSphereTools_RevertSphereToGeneratorAsync_Statics::NewProp_bUpdateRender_SetBit(void* Obj)
{
	((VoxelSphereTools_eventRevertSphereToGeneratorAsync_Parms*)Obj)->bUpdateRender = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelSphereTools_RevertSphereToGeneratorAsync_Statics::NewProp_bUpdateRender = { "bUpdateRender", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VoxelSphereTools_eventRevertSphereToGeneratorAsync_Parms), &Z_Construct_UFunction_UVoxelSphereTools_RevertSphereToGeneratorAsync_Statics::NewProp_bUpdateRender_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UVoxelSphereTools_RevertSphereToGeneratorAsync_Statics::NewProp_bHideLatentWarnings_SetBit(void* Obj)
{
	((VoxelSphereTools_eventRevertSphereToGeneratorAsync_Parms*)Obj)->bHideLatentWarnings = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelSphereTools_RevertSphereToGeneratorAsync_Statics::NewProp_bHideLatentWarnings = { "bHideLatentWarnings", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VoxelSphereTools_eventRevertSphereToGeneratorAsync_Parms), &Z_Construct_UFunction_UVoxelSphereTools_RevertSphereToGeneratorAsync_Statics::NewProp_bHideLatentWarnings_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelSphereTools_RevertSphereToGeneratorAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_RevertSphereToGeneratorAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_RevertSphereToGeneratorAsync_Statics::NewProp_LatentInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_RevertSphereToGeneratorAsync_Statics::NewProp_ModifiedValues_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_RevertSphereToGeneratorAsync_Statics::NewProp_ModifiedValues,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_RevertSphereToGeneratorAsync_Statics::NewProp_EditedBounds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_RevertSphereToGeneratorAsync_Statics::NewProp_VoxelWorld,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_RevertSphereToGeneratorAsync_Statics::NewProp_Position,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_RevertSphereToGeneratorAsync_Statics::NewProp_Radius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_RevertSphereToGeneratorAsync_Statics::NewProp_bRevertValues,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_RevertSphereToGeneratorAsync_Statics::NewProp_bRevertMaterials,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_RevertSphereToGeneratorAsync_Statics::NewProp_bMultiThreaded,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_RevertSphereToGeneratorAsync_Statics::NewProp_bRecordModifiedValues,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_RevertSphereToGeneratorAsync_Statics::NewProp_bConvertToVoxelSpace,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_RevertSphereToGeneratorAsync_Statics::NewProp_bUpdateRender,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_RevertSphereToGeneratorAsync_Statics::NewProp_bHideLatentWarnings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSphereTools_RevertSphereToGeneratorAsync_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelSphereTools_RevertSphereToGeneratorAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelSphereTools, nullptr, "RevertSphereToGeneratorAsync", Z_Construct_UFunction_UVoxelSphereTools_RevertSphereToGeneratorAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSphereTools_RevertSphereToGeneratorAsync_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVoxelSphereTools_RevertSphereToGeneratorAsync_Statics::VoxelSphereTools_eventRevertSphereToGeneratorAsync_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSphereTools_RevertSphereToGeneratorAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelSphereTools_RevertSphereToGeneratorAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVoxelSphereTools_RevertSphereToGeneratorAsync_Statics::VoxelSphereTools_eventRevertSphereToGeneratorAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVoxelSphereTools_RevertSphereToGeneratorAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelSphereTools_RevertSphereToGeneratorAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelSphereTools::execRevertSphereToGeneratorAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
	P_GET_TARRAY_REF(FModifiedVoxelValue,Z_Param_Out_ModifiedValues);
	P_GET_STRUCT_REF(FVoxelIntBox,Z_Param_Out_EditedBounds);
	P_GET_OBJECT(AVoxelWorld,Z_Param_VoxelWorld);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_Position);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Radius);
	P_GET_UBOOL(Z_Param_bRevertValues);
	P_GET_UBOOL(Z_Param_bRevertMaterials);
	P_GET_UBOOL(Z_Param_bMultiThreaded);
	P_GET_UBOOL(Z_Param_bRecordModifiedValues);
	P_GET_UBOOL(Z_Param_bConvertToVoxelSpace);
	P_GET_UBOOL(Z_Param_bUpdateRender);
	P_GET_UBOOL(Z_Param_bHideLatentWarnings);
	P_FINISH;
	P_NATIVE_BEGIN;
	UVoxelSphereTools::RevertSphereToGeneratorAsync(Z_Param_WorldContextObject,Z_Param_LatentInfo,Z_Param_Out_ModifiedValues,Z_Param_Out_EditedBounds,Z_Param_VoxelWorld,Z_Param_Out_Position,Z_Param_Radius,Z_Param_bRevertValues,Z_Param_bRevertMaterials,Z_Param_bMultiThreaded,Z_Param_bRecordModifiedValues,Z_Param_bConvertToVoxelSpace,Z_Param_bUpdateRender,Z_Param_bHideLatentWarnings);
	P_NATIVE_END;
}
// ********** End Class UVoxelSphereTools Function RevertSphereToGeneratorAsync ********************

// ********** Begin Class UVoxelSphereTools Function SetMaterialSphere *****************************
struct Z_Construct_UFunction_UVoxelSphereTools_SetMaterialSphere_Statics
{
	struct VoxelSphereTools_eventSetMaterialSphere_Parms
	{
		TArray<FModifiedVoxelMaterial> ModifiedMaterials;
		FVoxelIntBox EditedBounds;
		AVoxelWorld* VoxelWorld;
		FVector Position;
		float Radius;
		FVoxelPaintMaterial PaintMaterial;
		float Strength;
		EVoxelFalloff FalloffType;
		float Falloff;
		bool bMultiThreaded;
		bool bRecordModifiedMaterials;
		bool bConvertToVoxelSpace;
		bool bUpdateRender;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "bMultiThreaded, bRecordModifiedMaterials, bConvertToVoxelSpace, bUpdateRender" },
		{ "Category", "Voxel|Tools|Sphere Tools" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Paint material in a sphere shape\n\x09 * @see SetMaterialSphere, SetMaterialSphereAsync and FVoxelSphereToolsImpl::SetMaterialSphere\n\x09 * @param\x09ModifiedMaterials       \x09Record the Materials modified by this function. Useful to track the amount of edit done, for instance to give resources when digging\n\x09 * @param\x09""EditedBounds            \x09Returns the bounds edited by this function\n\x09 * @param\x09VoxelWorld              \x09The voxel world to do the edit to\n\x09 * @param\x09Position                \x09The position of the center. In world space (unreal units) if bConvertToVoxelSpace is true. In voxel space if false.\n\x09 * @param\x09Radius                  \x09The radius. In unreal units if bConvertToVoxelSpace is true. In voxels if false.\n\x09 * @param\x09PaintMaterial           \x09The material to paint\n\x09 * @param\x09Strength                \x09The strength of the painting (preferably between 0 and 1)\n\x09 * @param\x09""FalloffType             \x09The type of falloff\n\x09 * @param\x09""Falloff                 \x09The falloff, between 0 and 1. Set to 0 to disable.\n\x09 * @param\x09""bMultiThreaded          \x09If true, multiple threads will be used to make the edit faster.\n\x09 * @param\x09""bRecordModifiedMaterials\x09If false, will not fill ModifiedMaterials, making the edit faster.\n\x09 * @param\x09""bConvertToVoxelSpace    \x09If true, Position and Radius will be converted to voxel space. Else they will be used directly.\n\x09 * @param\x09""bUpdateRender           \x09If false, will only edit the data and not update the render. Rarely needed.\n\x09*/" },
#endif
		{ "CPP_Default_bConvertToVoxelSpace", "true" },
		{ "CPP_Default_bMultiThreaded", "true" },
		{ "CPP_Default_bRecordModifiedMaterials", "true" },
		{ "CPP_Default_bUpdateRender", "true" },
		{ "CPP_Default_Falloff", "0.500000" },
		{ "CPP_Default_FalloffType", "Linear" },
		{ "CPP_Default_Strength", "1.000000" },
		{ "DefaultToSelf", "VoxelWorld" },
		{ "ModuleRelativePath", "Public/VoxelTools/Gen/VoxelSphereTools.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Paint material in a sphere shape\n@see SetMaterialSphere, SetMaterialSphereAsync and FVoxelSphereToolsImpl::SetMaterialSphere\n@param       ModifiedMaterials               Record the Materials modified by this function. Useful to track the amount of edit done, for instance to give resources when digging\n@param       EditedBounds                    Returns the bounds edited by this function\n@param       VoxelWorld                      The voxel world to do the edit to\n@param       Position                        The position of the center. In world space (unreal units) if bConvertToVoxelSpace is true. In voxel space if false.\n@param       Radius                          The radius. In unreal units if bConvertToVoxelSpace is true. In voxels if false.\n@param       PaintMaterial                   The material to paint\n@param       Strength                        The strength of the painting (preferably between 0 and 1)\n@param       FalloffType                     The type of falloff\n@param       Falloff                         The falloff, between 0 and 1. Set to 0 to disable.\n@param       bMultiThreaded                  If true, multiple threads will be used to make the edit faster.\n@param       bRecordModifiedMaterials        If false, will not fill ModifiedMaterials, making the edit faster.\n@param       bConvertToVoxelSpace            If true, Position and Radius will be converted to voxel space. Else they will be used directly.\n@param       bUpdateRender                   If false, will only edit the data and not update the render. Rarely needed." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PaintMaterial_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ModifiedMaterials_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ModifiedMaterials;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EditedBounds;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_VoxelWorld;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Position;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PaintMaterial;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Strength;
	static const UECodeGen_Private::FBytePropertyParams NewProp_FalloffType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_FalloffType;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Falloff;
	static void NewProp_bMultiThreaded_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bMultiThreaded;
	static void NewProp_bRecordModifiedMaterials_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRecordModifiedMaterials;
	static void NewProp_bConvertToVoxelSpace_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bConvertToVoxelSpace;
	static void NewProp_bUpdateRender_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUpdateRender;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSphereTools_SetMaterialSphere_Statics::NewProp_ModifiedMaterials_Inner = { "ModifiedMaterials", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FModifiedVoxelMaterial, METADATA_PARAMS(0, nullptr) }; // 2111187622
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVoxelSphereTools_SetMaterialSphere_Statics::NewProp_ModifiedMaterials = { "ModifiedMaterials", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelSphereTools_eventSetMaterialSphere_Parms, ModifiedMaterials), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 2111187622
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSphereTools_SetMaterialSphere_Statics::NewProp_EditedBounds = { "EditedBounds", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelSphereTools_eventSetMaterialSphere_Parms, EditedBounds), Z_Construct_UScriptStruct_FVoxelIntBox, METADATA_PARAMS(0, nullptr) }; // 3520536583
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelSphereTools_SetMaterialSphere_Statics::NewProp_VoxelWorld = { "VoxelWorld", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelSphereTools_eventSetMaterialSphere_Parms, VoxelWorld), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSphereTools_SetMaterialSphere_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelSphereTools_eventSetMaterialSphere_Parms, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Position_MetaData), NewProp_Position_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoxelSphereTools_SetMaterialSphere_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelSphereTools_eventSetMaterialSphere_Parms, Radius), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSphereTools_SetMaterialSphere_Statics::NewProp_PaintMaterial = { "PaintMaterial", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelSphereTools_eventSetMaterialSphere_Parms, PaintMaterial), Z_Construct_UScriptStruct_FVoxelPaintMaterial, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PaintMaterial_MetaData), NewProp_PaintMaterial_MetaData) }; // 2783111154
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoxelSphereTools_SetMaterialSphere_Statics::NewProp_Strength = { "Strength", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelSphereTools_eventSetMaterialSphere_Parms, Strength), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVoxelSphereTools_SetMaterialSphere_Statics::NewProp_FalloffType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UVoxelSphereTools_SetMaterialSphere_Statics::NewProp_FalloffType = { "FalloffType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelSphereTools_eventSetMaterialSphere_Parms, FalloffType), Z_Construct_UEnum_Voxel_EVoxelFalloff, METADATA_PARAMS(0, nullptr) }; // 103099151
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoxelSphereTools_SetMaterialSphere_Statics::NewProp_Falloff = { "Falloff", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelSphereTools_eventSetMaterialSphere_Parms, Falloff), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UVoxelSphereTools_SetMaterialSphere_Statics::NewProp_bMultiThreaded_SetBit(void* Obj)
{
	((VoxelSphereTools_eventSetMaterialSphere_Parms*)Obj)->bMultiThreaded = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelSphereTools_SetMaterialSphere_Statics::NewProp_bMultiThreaded = { "bMultiThreaded", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VoxelSphereTools_eventSetMaterialSphere_Parms), &Z_Construct_UFunction_UVoxelSphereTools_SetMaterialSphere_Statics::NewProp_bMultiThreaded_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UVoxelSphereTools_SetMaterialSphere_Statics::NewProp_bRecordModifiedMaterials_SetBit(void* Obj)
{
	((VoxelSphereTools_eventSetMaterialSphere_Parms*)Obj)->bRecordModifiedMaterials = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelSphereTools_SetMaterialSphere_Statics::NewProp_bRecordModifiedMaterials = { "bRecordModifiedMaterials", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VoxelSphereTools_eventSetMaterialSphere_Parms), &Z_Construct_UFunction_UVoxelSphereTools_SetMaterialSphere_Statics::NewProp_bRecordModifiedMaterials_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UVoxelSphereTools_SetMaterialSphere_Statics::NewProp_bConvertToVoxelSpace_SetBit(void* Obj)
{
	((VoxelSphereTools_eventSetMaterialSphere_Parms*)Obj)->bConvertToVoxelSpace = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelSphereTools_SetMaterialSphere_Statics::NewProp_bConvertToVoxelSpace = { "bConvertToVoxelSpace", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VoxelSphereTools_eventSetMaterialSphere_Parms), &Z_Construct_UFunction_UVoxelSphereTools_SetMaterialSphere_Statics::NewProp_bConvertToVoxelSpace_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UVoxelSphereTools_SetMaterialSphere_Statics::NewProp_bUpdateRender_SetBit(void* Obj)
{
	((VoxelSphereTools_eventSetMaterialSphere_Parms*)Obj)->bUpdateRender = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelSphereTools_SetMaterialSphere_Statics::NewProp_bUpdateRender = { "bUpdateRender", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VoxelSphereTools_eventSetMaterialSphere_Parms), &Z_Construct_UFunction_UVoxelSphereTools_SetMaterialSphere_Statics::NewProp_bUpdateRender_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelSphereTools_SetMaterialSphere_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_SetMaterialSphere_Statics::NewProp_ModifiedMaterials_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_SetMaterialSphere_Statics::NewProp_ModifiedMaterials,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_SetMaterialSphere_Statics::NewProp_EditedBounds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_SetMaterialSphere_Statics::NewProp_VoxelWorld,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_SetMaterialSphere_Statics::NewProp_Position,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_SetMaterialSphere_Statics::NewProp_Radius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_SetMaterialSphere_Statics::NewProp_PaintMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_SetMaterialSphere_Statics::NewProp_Strength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_SetMaterialSphere_Statics::NewProp_FalloffType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_SetMaterialSphere_Statics::NewProp_FalloffType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_SetMaterialSphere_Statics::NewProp_Falloff,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_SetMaterialSphere_Statics::NewProp_bMultiThreaded,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_SetMaterialSphere_Statics::NewProp_bRecordModifiedMaterials,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_SetMaterialSphere_Statics::NewProp_bConvertToVoxelSpace,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_SetMaterialSphere_Statics::NewProp_bUpdateRender,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSphereTools_SetMaterialSphere_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelSphereTools_SetMaterialSphere_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelSphereTools, nullptr, "SetMaterialSphere", Z_Construct_UFunction_UVoxelSphereTools_SetMaterialSphere_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSphereTools_SetMaterialSphere_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVoxelSphereTools_SetMaterialSphere_Statics::VoxelSphereTools_eventSetMaterialSphere_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSphereTools_SetMaterialSphere_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelSphereTools_SetMaterialSphere_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVoxelSphereTools_SetMaterialSphere_Statics::VoxelSphereTools_eventSetMaterialSphere_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVoxelSphereTools_SetMaterialSphere()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelSphereTools_SetMaterialSphere_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelSphereTools::execSetMaterialSphere)
{
	P_GET_TARRAY_REF(FModifiedVoxelMaterial,Z_Param_Out_ModifiedMaterials);
	P_GET_STRUCT_REF(FVoxelIntBox,Z_Param_Out_EditedBounds);
	P_GET_OBJECT(AVoxelWorld,Z_Param_VoxelWorld);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_Position);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Radius);
	P_GET_STRUCT_REF(FVoxelPaintMaterial,Z_Param_Out_PaintMaterial);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Strength);
	P_GET_ENUM(EVoxelFalloff,Z_Param_FalloffType);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Falloff);
	P_GET_UBOOL(Z_Param_bMultiThreaded);
	P_GET_UBOOL(Z_Param_bRecordModifiedMaterials);
	P_GET_UBOOL(Z_Param_bConvertToVoxelSpace);
	P_GET_UBOOL(Z_Param_bUpdateRender);
	P_FINISH;
	P_NATIVE_BEGIN;
	UVoxelSphereTools::SetMaterialSphere(Z_Param_Out_ModifiedMaterials,Z_Param_Out_EditedBounds,Z_Param_VoxelWorld,Z_Param_Out_Position,Z_Param_Radius,Z_Param_Out_PaintMaterial,Z_Param_Strength,EVoxelFalloff(Z_Param_FalloffType),Z_Param_Falloff,Z_Param_bMultiThreaded,Z_Param_bRecordModifiedMaterials,Z_Param_bConvertToVoxelSpace,Z_Param_bUpdateRender);
	P_NATIVE_END;
}
// ********** End Class UVoxelSphereTools Function SetMaterialSphere *******************************

// ********** Begin Class UVoxelSphereTools Function SetMaterialSphereAsync ************************
struct Z_Construct_UFunction_UVoxelSphereTools_SetMaterialSphereAsync_Statics
{
	struct VoxelSphereTools_eventSetMaterialSphereAsync_Parms
	{
		UObject* WorldContextObject;
		FLatentActionInfo LatentInfo;
		TArray<FModifiedVoxelMaterial> ModifiedMaterials;
		FVoxelIntBox EditedBounds;
		AVoxelWorld* VoxelWorld;
		FVector Position;
		float Radius;
		FVoxelPaintMaterial PaintMaterial;
		float Strength;
		EVoxelFalloff FalloffType;
		float Falloff;
		bool bMultiThreaded;
		bool bRecordModifiedMaterials;
		bool bConvertToVoxelSpace;
		bool bUpdateRender;
		bool bHideLatentWarnings;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "bMultiThreaded, bRecordModifiedMaterials, bConvertToVoxelSpace, bUpdateRender, bHideLatentWarnings" },
		{ "Category", "Voxel|Tools|Sphere Tools" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Paint material in a sphere shape\n\x09 * Runs asynchronously in a background thread\n\x09 * @see SetMaterialSphere, SetMaterialSphereAsync and FVoxelSphereToolsImpl::SetMaterialSphere\n\x09 * @param\x09ModifiedMaterials       \x09Record the Materials modified by this function. Useful to track the amount of edit done, for instance to give resources when digging\n\x09 * @param\x09""EditedBounds            \x09Returns the bounds edited by this function\n\x09 * @param\x09VoxelWorld              \x09The voxel world to do the edit to\n\x09 * @param\x09Position                \x09The position of the center. In world space (unreal units) if bConvertToVoxelSpace is true. In voxel space if false.\n\x09 * @param\x09Radius                  \x09The radius. In unreal units if bConvertToVoxelSpace is true. In voxels if false.\n\x09 * @param\x09PaintMaterial           \x09The material to paint\n\x09 * @param\x09Strength                \x09The strength of the painting (preferably between 0 and 1)\n\x09 * @param\x09""FalloffType             \x09The type of falloff\n\x09 * @param\x09""Falloff                 \x09The falloff, between 0 and 1. Set to 0 to disable.\n\x09 * @param\x09""bMultiThreaded          \x09If true, multiple threads will be used to make the edit faster. Not recommended on async functions, as it might cause lag.\n\x09 * @param\x09""bRecordModifiedMaterials\x09If false, will not fill ModifiedMaterials, making the edit faster.\n\x09 * @param\x09""bConvertToVoxelSpace    \x09If true, Position and Radius will be converted to voxel space. Else they will be used directly.\n\x09 * @param\x09""bUpdateRender           \x09If false, will only edit the data and not update the render. Rarely needed.\n\x09 * @param\x09""bHideLatentWarnings     \x09Hide latent warnings caused by calling a node before its previous call completion.\n\x09*/" },
#endif
		{ "CPP_Default_bConvertToVoxelSpace", "true" },
		{ "CPP_Default_bHideLatentWarnings", "false" },
		{ "CPP_Default_bMultiThreaded", "false" },
		{ "CPP_Default_bRecordModifiedMaterials", "true" },
		{ "CPP_Default_bUpdateRender", "true" },
		{ "CPP_Default_Falloff", "0.500000" },
		{ "CPP_Default_FalloffType", "Linear" },
		{ "CPP_Default_Strength", "1.000000" },
		{ "DefaultToSelf", "VoxelWorld" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Public/VoxelTools/Gen/VoxelSphereTools.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Paint material in a sphere shape\nRuns asynchronously in a background thread\n@see SetMaterialSphere, SetMaterialSphereAsync and FVoxelSphereToolsImpl::SetMaterialSphere\n@param       ModifiedMaterials               Record the Materials modified by this function. Useful to track the amount of edit done, for instance to give resources when digging\n@param       EditedBounds                    Returns the bounds edited by this function\n@param       VoxelWorld                      The voxel world to do the edit to\n@param       Position                        The position of the center. In world space (unreal units) if bConvertToVoxelSpace is true. In voxel space if false.\n@param       Radius                          The radius. In unreal units if bConvertToVoxelSpace is true. In voxels if false.\n@param       PaintMaterial                   The material to paint\n@param       Strength                        The strength of the painting (preferably between 0 and 1)\n@param       FalloffType                     The type of falloff\n@param       Falloff                         The falloff, between 0 and 1. Set to 0 to disable.\n@param       bMultiThreaded                  If true, multiple threads will be used to make the edit faster. Not recommended on async functions, as it might cause lag.\n@param       bRecordModifiedMaterials        If false, will not fill ModifiedMaterials, making the edit faster.\n@param       bConvertToVoxelSpace            If true, Position and Radius will be converted to voxel space. Else they will be used directly.\n@param       bUpdateRender                   If false, will only edit the data and not update the render. Rarely needed.\n@param       bHideLatentWarnings             Hide latent warnings caused by calling a node before its previous call completion." },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PaintMaterial_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ModifiedMaterials_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ModifiedMaterials;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EditedBounds;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_VoxelWorld;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Position;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PaintMaterial;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Strength;
	static const UECodeGen_Private::FBytePropertyParams NewProp_FalloffType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_FalloffType;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Falloff;
	static void NewProp_bMultiThreaded_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bMultiThreaded;
	static void NewProp_bRecordModifiedMaterials_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRecordModifiedMaterials;
	static void NewProp_bConvertToVoxelSpace_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bConvertToVoxelSpace;
	static void NewProp_bUpdateRender_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUpdateRender;
	static void NewProp_bHideLatentWarnings_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHideLatentWarnings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelSphereTools_SetMaterialSphereAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelSphereTools_eventSetMaterialSphereAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSphereTools_SetMaterialSphereAsync_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelSphereTools_eventSetMaterialSphereAsync_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(0, nullptr) }; // 4146275481
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSphereTools_SetMaterialSphereAsync_Statics::NewProp_ModifiedMaterials_Inner = { "ModifiedMaterials", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FModifiedVoxelMaterial, METADATA_PARAMS(0, nullptr) }; // 2111187622
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVoxelSphereTools_SetMaterialSphereAsync_Statics::NewProp_ModifiedMaterials = { "ModifiedMaterials", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelSphereTools_eventSetMaterialSphereAsync_Parms, ModifiedMaterials), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 2111187622
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSphereTools_SetMaterialSphereAsync_Statics::NewProp_EditedBounds = { "EditedBounds", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelSphereTools_eventSetMaterialSphereAsync_Parms, EditedBounds), Z_Construct_UScriptStruct_FVoxelIntBox, METADATA_PARAMS(0, nullptr) }; // 3520536583
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelSphereTools_SetMaterialSphereAsync_Statics::NewProp_VoxelWorld = { "VoxelWorld", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelSphereTools_eventSetMaterialSphereAsync_Parms, VoxelWorld), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSphereTools_SetMaterialSphereAsync_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelSphereTools_eventSetMaterialSphereAsync_Parms, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Position_MetaData), NewProp_Position_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoxelSphereTools_SetMaterialSphereAsync_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelSphereTools_eventSetMaterialSphereAsync_Parms, Radius), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSphereTools_SetMaterialSphereAsync_Statics::NewProp_PaintMaterial = { "PaintMaterial", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelSphereTools_eventSetMaterialSphereAsync_Parms, PaintMaterial), Z_Construct_UScriptStruct_FVoxelPaintMaterial, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PaintMaterial_MetaData), NewProp_PaintMaterial_MetaData) }; // 2783111154
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoxelSphereTools_SetMaterialSphereAsync_Statics::NewProp_Strength = { "Strength", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelSphereTools_eventSetMaterialSphereAsync_Parms, Strength), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVoxelSphereTools_SetMaterialSphereAsync_Statics::NewProp_FalloffType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UVoxelSphereTools_SetMaterialSphereAsync_Statics::NewProp_FalloffType = { "FalloffType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelSphereTools_eventSetMaterialSphereAsync_Parms, FalloffType), Z_Construct_UEnum_Voxel_EVoxelFalloff, METADATA_PARAMS(0, nullptr) }; // 103099151
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoxelSphereTools_SetMaterialSphereAsync_Statics::NewProp_Falloff = { "Falloff", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelSphereTools_eventSetMaterialSphereAsync_Parms, Falloff), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UVoxelSphereTools_SetMaterialSphereAsync_Statics::NewProp_bMultiThreaded_SetBit(void* Obj)
{
	((VoxelSphereTools_eventSetMaterialSphereAsync_Parms*)Obj)->bMultiThreaded = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelSphereTools_SetMaterialSphereAsync_Statics::NewProp_bMultiThreaded = { "bMultiThreaded", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VoxelSphereTools_eventSetMaterialSphereAsync_Parms), &Z_Construct_UFunction_UVoxelSphereTools_SetMaterialSphereAsync_Statics::NewProp_bMultiThreaded_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UVoxelSphereTools_SetMaterialSphereAsync_Statics::NewProp_bRecordModifiedMaterials_SetBit(void* Obj)
{
	((VoxelSphereTools_eventSetMaterialSphereAsync_Parms*)Obj)->bRecordModifiedMaterials = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelSphereTools_SetMaterialSphereAsync_Statics::NewProp_bRecordModifiedMaterials = { "bRecordModifiedMaterials", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VoxelSphereTools_eventSetMaterialSphereAsync_Parms), &Z_Construct_UFunction_UVoxelSphereTools_SetMaterialSphereAsync_Statics::NewProp_bRecordModifiedMaterials_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UVoxelSphereTools_SetMaterialSphereAsync_Statics::NewProp_bConvertToVoxelSpace_SetBit(void* Obj)
{
	((VoxelSphereTools_eventSetMaterialSphereAsync_Parms*)Obj)->bConvertToVoxelSpace = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelSphereTools_SetMaterialSphereAsync_Statics::NewProp_bConvertToVoxelSpace = { "bConvertToVoxelSpace", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VoxelSphereTools_eventSetMaterialSphereAsync_Parms), &Z_Construct_UFunction_UVoxelSphereTools_SetMaterialSphereAsync_Statics::NewProp_bConvertToVoxelSpace_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UVoxelSphereTools_SetMaterialSphereAsync_Statics::NewProp_bUpdateRender_SetBit(void* Obj)
{
	((VoxelSphereTools_eventSetMaterialSphereAsync_Parms*)Obj)->bUpdateRender = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelSphereTools_SetMaterialSphereAsync_Statics::NewProp_bUpdateRender = { "bUpdateRender", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VoxelSphereTools_eventSetMaterialSphereAsync_Parms), &Z_Construct_UFunction_UVoxelSphereTools_SetMaterialSphereAsync_Statics::NewProp_bUpdateRender_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UVoxelSphereTools_SetMaterialSphereAsync_Statics::NewProp_bHideLatentWarnings_SetBit(void* Obj)
{
	((VoxelSphereTools_eventSetMaterialSphereAsync_Parms*)Obj)->bHideLatentWarnings = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelSphereTools_SetMaterialSphereAsync_Statics::NewProp_bHideLatentWarnings = { "bHideLatentWarnings", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VoxelSphereTools_eventSetMaterialSphereAsync_Parms), &Z_Construct_UFunction_UVoxelSphereTools_SetMaterialSphereAsync_Statics::NewProp_bHideLatentWarnings_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelSphereTools_SetMaterialSphereAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_SetMaterialSphereAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_SetMaterialSphereAsync_Statics::NewProp_LatentInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_SetMaterialSphereAsync_Statics::NewProp_ModifiedMaterials_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_SetMaterialSphereAsync_Statics::NewProp_ModifiedMaterials,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_SetMaterialSphereAsync_Statics::NewProp_EditedBounds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_SetMaterialSphereAsync_Statics::NewProp_VoxelWorld,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_SetMaterialSphereAsync_Statics::NewProp_Position,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_SetMaterialSphereAsync_Statics::NewProp_Radius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_SetMaterialSphereAsync_Statics::NewProp_PaintMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_SetMaterialSphereAsync_Statics::NewProp_Strength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_SetMaterialSphereAsync_Statics::NewProp_FalloffType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_SetMaterialSphereAsync_Statics::NewProp_FalloffType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_SetMaterialSphereAsync_Statics::NewProp_Falloff,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_SetMaterialSphereAsync_Statics::NewProp_bMultiThreaded,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_SetMaterialSphereAsync_Statics::NewProp_bRecordModifiedMaterials,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_SetMaterialSphereAsync_Statics::NewProp_bConvertToVoxelSpace,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_SetMaterialSphereAsync_Statics::NewProp_bUpdateRender,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_SetMaterialSphereAsync_Statics::NewProp_bHideLatentWarnings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSphereTools_SetMaterialSphereAsync_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelSphereTools_SetMaterialSphereAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelSphereTools, nullptr, "SetMaterialSphereAsync", Z_Construct_UFunction_UVoxelSphereTools_SetMaterialSphereAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSphereTools_SetMaterialSphereAsync_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVoxelSphereTools_SetMaterialSphereAsync_Statics::VoxelSphereTools_eventSetMaterialSphereAsync_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSphereTools_SetMaterialSphereAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelSphereTools_SetMaterialSphereAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVoxelSphereTools_SetMaterialSphereAsync_Statics::VoxelSphereTools_eventSetMaterialSphereAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVoxelSphereTools_SetMaterialSphereAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelSphereTools_SetMaterialSphereAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelSphereTools::execSetMaterialSphereAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
	P_GET_TARRAY_REF(FModifiedVoxelMaterial,Z_Param_Out_ModifiedMaterials);
	P_GET_STRUCT_REF(FVoxelIntBox,Z_Param_Out_EditedBounds);
	P_GET_OBJECT(AVoxelWorld,Z_Param_VoxelWorld);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_Position);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Radius);
	P_GET_STRUCT_REF(FVoxelPaintMaterial,Z_Param_Out_PaintMaterial);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Strength);
	P_GET_ENUM(EVoxelFalloff,Z_Param_FalloffType);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Falloff);
	P_GET_UBOOL(Z_Param_bMultiThreaded);
	P_GET_UBOOL(Z_Param_bRecordModifiedMaterials);
	P_GET_UBOOL(Z_Param_bConvertToVoxelSpace);
	P_GET_UBOOL(Z_Param_bUpdateRender);
	P_GET_UBOOL(Z_Param_bHideLatentWarnings);
	P_FINISH;
	P_NATIVE_BEGIN;
	UVoxelSphereTools::SetMaterialSphereAsync(Z_Param_WorldContextObject,Z_Param_LatentInfo,Z_Param_Out_ModifiedMaterials,Z_Param_Out_EditedBounds,Z_Param_VoxelWorld,Z_Param_Out_Position,Z_Param_Radius,Z_Param_Out_PaintMaterial,Z_Param_Strength,EVoxelFalloff(Z_Param_FalloffType),Z_Param_Falloff,Z_Param_bMultiThreaded,Z_Param_bRecordModifiedMaterials,Z_Param_bConvertToVoxelSpace,Z_Param_bUpdateRender,Z_Param_bHideLatentWarnings);
	P_NATIVE_END;
}
// ********** End Class UVoxelSphereTools Function SetMaterialSphereAsync **************************

// ********** Begin Class UVoxelSphereTools Function SetValueSphere ********************************
struct Z_Construct_UFunction_UVoxelSphereTools_SetValueSphere_Statics
{
	struct VoxelSphereTools_eventSetValueSphere_Parms
	{
		TArray<FModifiedVoxelValue> ModifiedValues;
		FVoxelIntBox EditedBounds;
		AVoxelWorld* VoxelWorld;
		FVector Position;
		float Radius;
		float Value;
		bool bMultiThreaded;
		bool bRecordModifiedValues;
		bool bConvertToVoxelSpace;
		bool bUpdateRender;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "bMultiThreaded, bRecordModifiedValues, bConvertToVoxelSpace, bUpdateRender" },
		{ "Category", "Voxel|Tools|Sphere Tools" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Set the density in a sphere\n\x09 * @see SetValueSphere, SetValueSphereAsync and FVoxelSphereToolsImpl::SetValueSphere\n\x09 * @param\x09ModifiedValues       \x09Record the Values modified by this function. Useful to track the amount of edit done, for instance to give resources when digging\n\x09 * @param\x09""EditedBounds         \x09Returns the bounds edited by this function\n\x09 * @param\x09VoxelWorld           \x09The voxel world to do the edit to\n\x09 * @param\x09Position             \x09The position of the center. In world space (unreal units) if bConvertToVoxelSpace is true. In voxel space if false.\n\x09 * @param\x09Radius               \x09The radius. In unreal units if bConvertToVoxelSpace is true. In voxels if false.\n\x09 * @param\x09Value                \x09The density to set\n\x09 * @param\x09""bMultiThreaded       \x09If true, multiple threads will be used to make the edit faster.\n\x09 * @param\x09""bRecordModifiedValues\x09If false, will not fill ModifiedValues, making the edit faster.\n\x09 * @param\x09""bConvertToVoxelSpace \x09If true, Position and Radius will be converted to voxel space. Else they will be used directly.\n\x09 * @param\x09""bUpdateRender        \x09If false, will only edit the data and not update the render. Rarely needed.\n\x09*/" },
#endif
		{ "CPP_Default_bConvertToVoxelSpace", "true" },
		{ "CPP_Default_bMultiThreaded", "true" },
		{ "CPP_Default_bRecordModifiedValues", "true" },
		{ "CPP_Default_bUpdateRender", "true" },
		{ "DefaultToSelf", "VoxelWorld" },
		{ "ModuleRelativePath", "Public/VoxelTools/Gen/VoxelSphereTools.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set the density in a sphere\n@see SetValueSphere, SetValueSphereAsync and FVoxelSphereToolsImpl::SetValueSphere\n@param       ModifiedValues          Record the Values modified by this function. Useful to track the amount of edit done, for instance to give resources when digging\n@param       EditedBounds            Returns the bounds edited by this function\n@param       VoxelWorld              The voxel world to do the edit to\n@param       Position                The position of the center. In world space (unreal units) if bConvertToVoxelSpace is true. In voxel space if false.\n@param       Radius                  The radius. In unreal units if bConvertToVoxelSpace is true. In voxels if false.\n@param       Value                   The density to set\n@param       bMultiThreaded          If true, multiple threads will be used to make the edit faster.\n@param       bRecordModifiedValues   If false, will not fill ModifiedValues, making the edit faster.\n@param       bConvertToVoxelSpace    If true, Position and Radius will be converted to voxel space. Else they will be used directly.\n@param       bUpdateRender           If false, will only edit the data and not update the render. Rarely needed." },
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
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSphereTools_SetValueSphere_Statics::NewProp_ModifiedValues_Inner = { "ModifiedValues", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FModifiedVoxelValue, METADATA_PARAMS(0, nullptr) }; // 1075743150
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVoxelSphereTools_SetValueSphere_Statics::NewProp_ModifiedValues = { "ModifiedValues", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelSphereTools_eventSetValueSphere_Parms, ModifiedValues), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 1075743150
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSphereTools_SetValueSphere_Statics::NewProp_EditedBounds = { "EditedBounds", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelSphereTools_eventSetValueSphere_Parms, EditedBounds), Z_Construct_UScriptStruct_FVoxelIntBox, METADATA_PARAMS(0, nullptr) }; // 3520536583
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelSphereTools_SetValueSphere_Statics::NewProp_VoxelWorld = { "VoxelWorld", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelSphereTools_eventSetValueSphere_Parms, VoxelWorld), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSphereTools_SetValueSphere_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelSphereTools_eventSetValueSphere_Parms, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Position_MetaData), NewProp_Position_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoxelSphereTools_SetValueSphere_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelSphereTools_eventSetValueSphere_Parms, Radius), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoxelSphereTools_SetValueSphere_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelSphereTools_eventSetValueSphere_Parms, Value), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UVoxelSphereTools_SetValueSphere_Statics::NewProp_bMultiThreaded_SetBit(void* Obj)
{
	((VoxelSphereTools_eventSetValueSphere_Parms*)Obj)->bMultiThreaded = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelSphereTools_SetValueSphere_Statics::NewProp_bMultiThreaded = { "bMultiThreaded", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VoxelSphereTools_eventSetValueSphere_Parms), &Z_Construct_UFunction_UVoxelSphereTools_SetValueSphere_Statics::NewProp_bMultiThreaded_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UVoxelSphereTools_SetValueSphere_Statics::NewProp_bRecordModifiedValues_SetBit(void* Obj)
{
	((VoxelSphereTools_eventSetValueSphere_Parms*)Obj)->bRecordModifiedValues = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelSphereTools_SetValueSphere_Statics::NewProp_bRecordModifiedValues = { "bRecordModifiedValues", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VoxelSphereTools_eventSetValueSphere_Parms), &Z_Construct_UFunction_UVoxelSphereTools_SetValueSphere_Statics::NewProp_bRecordModifiedValues_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UVoxelSphereTools_SetValueSphere_Statics::NewProp_bConvertToVoxelSpace_SetBit(void* Obj)
{
	((VoxelSphereTools_eventSetValueSphere_Parms*)Obj)->bConvertToVoxelSpace = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelSphereTools_SetValueSphere_Statics::NewProp_bConvertToVoxelSpace = { "bConvertToVoxelSpace", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VoxelSphereTools_eventSetValueSphere_Parms), &Z_Construct_UFunction_UVoxelSphereTools_SetValueSphere_Statics::NewProp_bConvertToVoxelSpace_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UVoxelSphereTools_SetValueSphere_Statics::NewProp_bUpdateRender_SetBit(void* Obj)
{
	((VoxelSphereTools_eventSetValueSphere_Parms*)Obj)->bUpdateRender = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelSphereTools_SetValueSphere_Statics::NewProp_bUpdateRender = { "bUpdateRender", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VoxelSphereTools_eventSetValueSphere_Parms), &Z_Construct_UFunction_UVoxelSphereTools_SetValueSphere_Statics::NewProp_bUpdateRender_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelSphereTools_SetValueSphere_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_SetValueSphere_Statics::NewProp_ModifiedValues_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_SetValueSphere_Statics::NewProp_ModifiedValues,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_SetValueSphere_Statics::NewProp_EditedBounds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_SetValueSphere_Statics::NewProp_VoxelWorld,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_SetValueSphere_Statics::NewProp_Position,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_SetValueSphere_Statics::NewProp_Radius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_SetValueSphere_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_SetValueSphere_Statics::NewProp_bMultiThreaded,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_SetValueSphere_Statics::NewProp_bRecordModifiedValues,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_SetValueSphere_Statics::NewProp_bConvertToVoxelSpace,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_SetValueSphere_Statics::NewProp_bUpdateRender,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSphereTools_SetValueSphere_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelSphereTools_SetValueSphere_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelSphereTools, nullptr, "SetValueSphere", Z_Construct_UFunction_UVoxelSphereTools_SetValueSphere_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSphereTools_SetValueSphere_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVoxelSphereTools_SetValueSphere_Statics::VoxelSphereTools_eventSetValueSphere_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSphereTools_SetValueSphere_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelSphereTools_SetValueSphere_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVoxelSphereTools_SetValueSphere_Statics::VoxelSphereTools_eventSetValueSphere_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVoxelSphereTools_SetValueSphere()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelSphereTools_SetValueSphere_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelSphereTools::execSetValueSphere)
{
	P_GET_TARRAY_REF(FModifiedVoxelValue,Z_Param_Out_ModifiedValues);
	P_GET_STRUCT_REF(FVoxelIntBox,Z_Param_Out_EditedBounds);
	P_GET_OBJECT(AVoxelWorld,Z_Param_VoxelWorld);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_Position);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Radius);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
	P_GET_UBOOL(Z_Param_bMultiThreaded);
	P_GET_UBOOL(Z_Param_bRecordModifiedValues);
	P_GET_UBOOL(Z_Param_bConvertToVoxelSpace);
	P_GET_UBOOL(Z_Param_bUpdateRender);
	P_FINISH;
	P_NATIVE_BEGIN;
	UVoxelSphereTools::SetValueSphere(Z_Param_Out_ModifiedValues,Z_Param_Out_EditedBounds,Z_Param_VoxelWorld,Z_Param_Out_Position,Z_Param_Radius,Z_Param_Value,Z_Param_bMultiThreaded,Z_Param_bRecordModifiedValues,Z_Param_bConvertToVoxelSpace,Z_Param_bUpdateRender);
	P_NATIVE_END;
}
// ********** End Class UVoxelSphereTools Function SetValueSphere **********************************

// ********** Begin Class UVoxelSphereTools Function SetValueSphereAsync ***************************
struct Z_Construct_UFunction_UVoxelSphereTools_SetValueSphereAsync_Statics
{
	struct VoxelSphereTools_eventSetValueSphereAsync_Parms
	{
		UObject* WorldContextObject;
		FLatentActionInfo LatentInfo;
		TArray<FModifiedVoxelValue> ModifiedValues;
		FVoxelIntBox EditedBounds;
		AVoxelWorld* VoxelWorld;
		FVector Position;
		float Radius;
		float Value;
		bool bMultiThreaded;
		bool bRecordModifiedValues;
		bool bConvertToVoxelSpace;
		bool bUpdateRender;
		bool bHideLatentWarnings;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "bMultiThreaded, bRecordModifiedValues, bConvertToVoxelSpace, bUpdateRender, bHideLatentWarnings" },
		{ "Category", "Voxel|Tools|Sphere Tools" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Set the density in a sphere\n\x09 * Runs asynchronously in a background thread\n\x09 * @see SetValueSphere, SetValueSphereAsync and FVoxelSphereToolsImpl::SetValueSphere\n\x09 * @param\x09ModifiedValues       \x09Record the Values modified by this function. Useful to track the amount of edit done, for instance to give resources when digging\n\x09 * @param\x09""EditedBounds         \x09Returns the bounds edited by this function\n\x09 * @param\x09VoxelWorld           \x09The voxel world to do the edit to\n\x09 * @param\x09Position             \x09The position of the center. In world space (unreal units) if bConvertToVoxelSpace is true. In voxel space if false.\n\x09 * @param\x09Radius               \x09The radius. In unreal units if bConvertToVoxelSpace is true. In voxels if false.\n\x09 * @param\x09Value                \x09The density to set\n\x09 * @param\x09""bMultiThreaded       \x09If true, multiple threads will be used to make the edit faster. Not recommended on async functions, as it might cause lag.\n\x09 * @param\x09""bRecordModifiedValues\x09If false, will not fill ModifiedValues, making the edit faster.\n\x09 * @param\x09""bConvertToVoxelSpace \x09If true, Position and Radius will be converted to voxel space. Else they will be used directly.\n\x09 * @param\x09""bUpdateRender        \x09If false, will only edit the data and not update the render. Rarely needed.\n\x09 * @param\x09""bHideLatentWarnings  \x09Hide latent warnings caused by calling a node before its previous call completion.\n\x09*/" },
#endif
		{ "CPP_Default_bConvertToVoxelSpace", "true" },
		{ "CPP_Default_bHideLatentWarnings", "false" },
		{ "CPP_Default_bMultiThreaded", "false" },
		{ "CPP_Default_bRecordModifiedValues", "true" },
		{ "CPP_Default_bUpdateRender", "true" },
		{ "DefaultToSelf", "VoxelWorld" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Public/VoxelTools/Gen/VoxelSphereTools.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set the density in a sphere\nRuns asynchronously in a background thread\n@see SetValueSphere, SetValueSphereAsync and FVoxelSphereToolsImpl::SetValueSphere\n@param       ModifiedValues          Record the Values modified by this function. Useful to track the amount of edit done, for instance to give resources when digging\n@param       EditedBounds            Returns the bounds edited by this function\n@param       VoxelWorld              The voxel world to do the edit to\n@param       Position                The position of the center. In world space (unreal units) if bConvertToVoxelSpace is true. In voxel space if false.\n@param       Radius                  The radius. In unreal units if bConvertToVoxelSpace is true. In voxels if false.\n@param       Value                   The density to set\n@param       bMultiThreaded          If true, multiple threads will be used to make the edit faster. Not recommended on async functions, as it might cause lag.\n@param       bRecordModifiedValues   If false, will not fill ModifiedValues, making the edit faster.\n@param       bConvertToVoxelSpace    If true, Position and Radius will be converted to voxel space. Else they will be used directly.\n@param       bUpdateRender           If false, will only edit the data and not update the render. Rarely needed.\n@param       bHideLatentWarnings     Hide latent warnings caused by calling a node before its previous call completion." },
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
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
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
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelSphereTools_SetValueSphereAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelSphereTools_eventSetValueSphereAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSphereTools_SetValueSphereAsync_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelSphereTools_eventSetValueSphereAsync_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(0, nullptr) }; // 4146275481
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSphereTools_SetValueSphereAsync_Statics::NewProp_ModifiedValues_Inner = { "ModifiedValues", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FModifiedVoxelValue, METADATA_PARAMS(0, nullptr) }; // 1075743150
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVoxelSphereTools_SetValueSphereAsync_Statics::NewProp_ModifiedValues = { "ModifiedValues", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelSphereTools_eventSetValueSphereAsync_Parms, ModifiedValues), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 1075743150
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSphereTools_SetValueSphereAsync_Statics::NewProp_EditedBounds = { "EditedBounds", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelSphereTools_eventSetValueSphereAsync_Parms, EditedBounds), Z_Construct_UScriptStruct_FVoxelIntBox, METADATA_PARAMS(0, nullptr) }; // 3520536583
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelSphereTools_SetValueSphereAsync_Statics::NewProp_VoxelWorld = { "VoxelWorld", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelSphereTools_eventSetValueSphereAsync_Parms, VoxelWorld), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSphereTools_SetValueSphereAsync_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelSphereTools_eventSetValueSphereAsync_Parms, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Position_MetaData), NewProp_Position_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoxelSphereTools_SetValueSphereAsync_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelSphereTools_eventSetValueSphereAsync_Parms, Radius), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoxelSphereTools_SetValueSphereAsync_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelSphereTools_eventSetValueSphereAsync_Parms, Value), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UVoxelSphereTools_SetValueSphereAsync_Statics::NewProp_bMultiThreaded_SetBit(void* Obj)
{
	((VoxelSphereTools_eventSetValueSphereAsync_Parms*)Obj)->bMultiThreaded = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelSphereTools_SetValueSphereAsync_Statics::NewProp_bMultiThreaded = { "bMultiThreaded", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VoxelSphereTools_eventSetValueSphereAsync_Parms), &Z_Construct_UFunction_UVoxelSphereTools_SetValueSphereAsync_Statics::NewProp_bMultiThreaded_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UVoxelSphereTools_SetValueSphereAsync_Statics::NewProp_bRecordModifiedValues_SetBit(void* Obj)
{
	((VoxelSphereTools_eventSetValueSphereAsync_Parms*)Obj)->bRecordModifiedValues = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelSphereTools_SetValueSphereAsync_Statics::NewProp_bRecordModifiedValues = { "bRecordModifiedValues", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VoxelSphereTools_eventSetValueSphereAsync_Parms), &Z_Construct_UFunction_UVoxelSphereTools_SetValueSphereAsync_Statics::NewProp_bRecordModifiedValues_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UVoxelSphereTools_SetValueSphereAsync_Statics::NewProp_bConvertToVoxelSpace_SetBit(void* Obj)
{
	((VoxelSphereTools_eventSetValueSphereAsync_Parms*)Obj)->bConvertToVoxelSpace = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelSphereTools_SetValueSphereAsync_Statics::NewProp_bConvertToVoxelSpace = { "bConvertToVoxelSpace", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VoxelSphereTools_eventSetValueSphereAsync_Parms), &Z_Construct_UFunction_UVoxelSphereTools_SetValueSphereAsync_Statics::NewProp_bConvertToVoxelSpace_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UVoxelSphereTools_SetValueSphereAsync_Statics::NewProp_bUpdateRender_SetBit(void* Obj)
{
	((VoxelSphereTools_eventSetValueSphereAsync_Parms*)Obj)->bUpdateRender = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelSphereTools_SetValueSphereAsync_Statics::NewProp_bUpdateRender = { "bUpdateRender", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VoxelSphereTools_eventSetValueSphereAsync_Parms), &Z_Construct_UFunction_UVoxelSphereTools_SetValueSphereAsync_Statics::NewProp_bUpdateRender_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UVoxelSphereTools_SetValueSphereAsync_Statics::NewProp_bHideLatentWarnings_SetBit(void* Obj)
{
	((VoxelSphereTools_eventSetValueSphereAsync_Parms*)Obj)->bHideLatentWarnings = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelSphereTools_SetValueSphereAsync_Statics::NewProp_bHideLatentWarnings = { "bHideLatentWarnings", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VoxelSphereTools_eventSetValueSphereAsync_Parms), &Z_Construct_UFunction_UVoxelSphereTools_SetValueSphereAsync_Statics::NewProp_bHideLatentWarnings_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelSphereTools_SetValueSphereAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_SetValueSphereAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_SetValueSphereAsync_Statics::NewProp_LatentInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_SetValueSphereAsync_Statics::NewProp_ModifiedValues_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_SetValueSphereAsync_Statics::NewProp_ModifiedValues,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_SetValueSphereAsync_Statics::NewProp_EditedBounds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_SetValueSphereAsync_Statics::NewProp_VoxelWorld,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_SetValueSphereAsync_Statics::NewProp_Position,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_SetValueSphereAsync_Statics::NewProp_Radius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_SetValueSphereAsync_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_SetValueSphereAsync_Statics::NewProp_bMultiThreaded,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_SetValueSphereAsync_Statics::NewProp_bRecordModifiedValues,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_SetValueSphereAsync_Statics::NewProp_bConvertToVoxelSpace,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_SetValueSphereAsync_Statics::NewProp_bUpdateRender,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_SetValueSphereAsync_Statics::NewProp_bHideLatentWarnings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSphereTools_SetValueSphereAsync_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelSphereTools_SetValueSphereAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelSphereTools, nullptr, "SetValueSphereAsync", Z_Construct_UFunction_UVoxelSphereTools_SetValueSphereAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSphereTools_SetValueSphereAsync_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVoxelSphereTools_SetValueSphereAsync_Statics::VoxelSphereTools_eventSetValueSphereAsync_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSphereTools_SetValueSphereAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelSphereTools_SetValueSphereAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVoxelSphereTools_SetValueSphereAsync_Statics::VoxelSphereTools_eventSetValueSphereAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVoxelSphereTools_SetValueSphereAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelSphereTools_SetValueSphereAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelSphereTools::execSetValueSphereAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
	P_GET_TARRAY_REF(FModifiedVoxelValue,Z_Param_Out_ModifiedValues);
	P_GET_STRUCT_REF(FVoxelIntBox,Z_Param_Out_EditedBounds);
	P_GET_OBJECT(AVoxelWorld,Z_Param_VoxelWorld);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_Position);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Radius);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
	P_GET_UBOOL(Z_Param_bMultiThreaded);
	P_GET_UBOOL(Z_Param_bRecordModifiedValues);
	P_GET_UBOOL(Z_Param_bConvertToVoxelSpace);
	P_GET_UBOOL(Z_Param_bUpdateRender);
	P_GET_UBOOL(Z_Param_bHideLatentWarnings);
	P_FINISH;
	P_NATIVE_BEGIN;
	UVoxelSphereTools::SetValueSphereAsync(Z_Param_WorldContextObject,Z_Param_LatentInfo,Z_Param_Out_ModifiedValues,Z_Param_Out_EditedBounds,Z_Param_VoxelWorld,Z_Param_Out_Position,Z_Param_Radius,Z_Param_Value,Z_Param_bMultiThreaded,Z_Param_bRecordModifiedValues,Z_Param_bConvertToVoxelSpace,Z_Param_bUpdateRender,Z_Param_bHideLatentWarnings);
	P_NATIVE_END;
}
// ********** End Class UVoxelSphereTools Function SetValueSphereAsync *****************************

// ********** Begin Class UVoxelSphereTools Function SmoothMaterialSphere **************************
struct Z_Construct_UFunction_UVoxelSphereTools_SmoothMaterialSphere_Statics
{
	struct VoxelSphereTools_eventSmoothMaterialSphere_Parms
	{
		TArray<FModifiedVoxelMaterial> ModifiedMaterials;
		FVoxelIntBox EditedBounds;
		AVoxelWorld* VoxelWorld;
		FVector Position;
		float Radius;
		float Strength;
		int32 NumIterations;
		int32 Mask;
		EVoxelFalloff FalloffType;
		float Falloff;
		bool bMultiThreaded;
		bool bRecordModifiedMaterials;
		bool bConvertToVoxelSpace;
		bool bUpdateRender;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "bMultiThreaded, bRecordModifiedMaterials, bConvertToVoxelSpace, bUpdateRender" },
		{ "Category", "Voxel|Tools|Sphere Tools" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Smooth materials in a sphere\n\x09 * @see SmoothMaterialSphere, SmoothMaterialSphereAsync and FVoxelSphereToolsImpl::SmoothMaterialSphere\n\x09 * @param\x09ModifiedMaterials       \x09Record the Materials modified by this function. Useful to track the amount of edit done, for instance to give resources when digging\n\x09 * @param\x09""EditedBounds            \x09Returns the bounds edited by this function\n\x09 * @param\x09VoxelWorld              \x09The voxel world to do the edit to\n\x09 * @param\x09Position                \x09The position of the center. In world space (unreal units) if bConvertToVoxelSpace is true. In voxel space if false.\n\x09 * @param\x09Radius                  \x09The radius. In unreal units if bConvertToVoxelSpace is true. In voxels if false.\n\x09 * @param\x09Strength                \x09The strength of the smoothing (preferably between 0 and 1)\n\x09 * @param\x09NumIterations           \x09The number of times the smooth is going to be applied. Increase to make smoothing faster, but more expensive.\n\x09 * @param\x09Mask                    \x09The material channels to affect\n\x09 * @param\x09""FalloffType             \x09The type of falloff\n\x09 * @param\x09""Falloff                 \x09The falloff, between 0 and 1. Set to 0 to disable.\n\x09 * @param\x09""bMultiThreaded          \x09If true, multiple threads will be used to make the edit faster.\n\x09 * @param\x09""bRecordModifiedMaterials\x09If false, will not fill ModifiedMaterials, making the edit faster.\n\x09 * @param\x09""bConvertToVoxelSpace    \x09If true, Position and Radius will be converted to voxel space. Else they will be used directly.\n\x09 * @param\x09""bUpdateRender           \x09If false, will only edit the data and not update the render. Rarely needed.\n\x09*/" },
#endif
		{ "CPP_Default_bConvertToVoxelSpace", "true" },
		{ "CPP_Default_bMultiThreaded", "true" },
		{ "CPP_Default_bRecordModifiedMaterials", "true" },
		{ "CPP_Default_bUpdateRender", "true" },
		{ "CPP_Default_Falloff", "0.500000" },
		{ "CPP_Default_FalloffType", "Linear" },
		{ "CPP_Default_Mask", "4095" },
		{ "CPP_Default_NumIterations", "1" },
		{ "DefaultToSelf", "VoxelWorld" },
		{ "ModuleRelativePath", "Public/VoxelTools/Gen/VoxelSphereTools.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Smooth materials in a sphere\n@see SmoothMaterialSphere, SmoothMaterialSphereAsync and FVoxelSphereToolsImpl::SmoothMaterialSphere\n@param       ModifiedMaterials               Record the Materials modified by this function. Useful to track the amount of edit done, for instance to give resources when digging\n@param       EditedBounds                    Returns the bounds edited by this function\n@param       VoxelWorld                      The voxel world to do the edit to\n@param       Position                        The position of the center. In world space (unreal units) if bConvertToVoxelSpace is true. In voxel space if false.\n@param       Radius                          The radius. In unreal units if bConvertToVoxelSpace is true. In voxels if false.\n@param       Strength                        The strength of the smoothing (preferably between 0 and 1)\n@param       NumIterations                   The number of times the smooth is going to be applied. Increase to make smoothing faster, but more expensive.\n@param       Mask                            The material channels to affect\n@param       FalloffType                     The type of falloff\n@param       Falloff                         The falloff, between 0 and 1. Set to 0 to disable.\n@param       bMultiThreaded                  If true, multiple threads will be used to make the edit faster.\n@param       bRecordModifiedMaterials        If false, will not fill ModifiedMaterials, making the edit faster.\n@param       bConvertToVoxelSpace            If true, Position and Radius will be converted to voxel space. Else they will be used directly.\n@param       bUpdateRender                   If false, will only edit the data and not update the render. Rarely needed." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mask_MetaData[] = {
		{ "Bitmask", "" },
		{ "BitmaskEnum", "EVoxelMaterialMask_BP" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ModifiedMaterials_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ModifiedMaterials;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EditedBounds;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_VoxelWorld;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Position;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Strength;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumIterations;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Mask;
	static const UECodeGen_Private::FBytePropertyParams NewProp_FalloffType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_FalloffType;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Falloff;
	static void NewProp_bMultiThreaded_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bMultiThreaded;
	static void NewProp_bRecordModifiedMaterials_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRecordModifiedMaterials;
	static void NewProp_bConvertToVoxelSpace_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bConvertToVoxelSpace;
	static void NewProp_bUpdateRender_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUpdateRender;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSphereTools_SmoothMaterialSphere_Statics::NewProp_ModifiedMaterials_Inner = { "ModifiedMaterials", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FModifiedVoxelMaterial, METADATA_PARAMS(0, nullptr) }; // 2111187622
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVoxelSphereTools_SmoothMaterialSphere_Statics::NewProp_ModifiedMaterials = { "ModifiedMaterials", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelSphereTools_eventSmoothMaterialSphere_Parms, ModifiedMaterials), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 2111187622
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSphereTools_SmoothMaterialSphere_Statics::NewProp_EditedBounds = { "EditedBounds", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelSphereTools_eventSmoothMaterialSphere_Parms, EditedBounds), Z_Construct_UScriptStruct_FVoxelIntBox, METADATA_PARAMS(0, nullptr) }; // 3520536583
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelSphereTools_SmoothMaterialSphere_Statics::NewProp_VoxelWorld = { "VoxelWorld", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelSphereTools_eventSmoothMaterialSphere_Parms, VoxelWorld), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSphereTools_SmoothMaterialSphere_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelSphereTools_eventSmoothMaterialSphere_Parms, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Position_MetaData), NewProp_Position_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoxelSphereTools_SmoothMaterialSphere_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelSphereTools_eventSmoothMaterialSphere_Parms, Radius), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoxelSphereTools_SmoothMaterialSphere_Statics::NewProp_Strength = { "Strength", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelSphereTools_eventSmoothMaterialSphere_Parms, Strength), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVoxelSphereTools_SmoothMaterialSphere_Statics::NewProp_NumIterations = { "NumIterations", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelSphereTools_eventSmoothMaterialSphere_Parms, NumIterations), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVoxelSphereTools_SmoothMaterialSphere_Statics::NewProp_Mask = { "Mask", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelSphereTools_eventSmoothMaterialSphere_Parms, Mask), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mask_MetaData), NewProp_Mask_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVoxelSphereTools_SmoothMaterialSphere_Statics::NewProp_FalloffType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UVoxelSphereTools_SmoothMaterialSphere_Statics::NewProp_FalloffType = { "FalloffType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelSphereTools_eventSmoothMaterialSphere_Parms, FalloffType), Z_Construct_UEnum_Voxel_EVoxelFalloff, METADATA_PARAMS(0, nullptr) }; // 103099151
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoxelSphereTools_SmoothMaterialSphere_Statics::NewProp_Falloff = { "Falloff", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelSphereTools_eventSmoothMaterialSphere_Parms, Falloff), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UVoxelSphereTools_SmoothMaterialSphere_Statics::NewProp_bMultiThreaded_SetBit(void* Obj)
{
	((VoxelSphereTools_eventSmoothMaterialSphere_Parms*)Obj)->bMultiThreaded = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelSphereTools_SmoothMaterialSphere_Statics::NewProp_bMultiThreaded = { "bMultiThreaded", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VoxelSphereTools_eventSmoothMaterialSphere_Parms), &Z_Construct_UFunction_UVoxelSphereTools_SmoothMaterialSphere_Statics::NewProp_bMultiThreaded_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UVoxelSphereTools_SmoothMaterialSphere_Statics::NewProp_bRecordModifiedMaterials_SetBit(void* Obj)
{
	((VoxelSphereTools_eventSmoothMaterialSphere_Parms*)Obj)->bRecordModifiedMaterials = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelSphereTools_SmoothMaterialSphere_Statics::NewProp_bRecordModifiedMaterials = { "bRecordModifiedMaterials", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VoxelSphereTools_eventSmoothMaterialSphere_Parms), &Z_Construct_UFunction_UVoxelSphereTools_SmoothMaterialSphere_Statics::NewProp_bRecordModifiedMaterials_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UVoxelSphereTools_SmoothMaterialSphere_Statics::NewProp_bConvertToVoxelSpace_SetBit(void* Obj)
{
	((VoxelSphereTools_eventSmoothMaterialSphere_Parms*)Obj)->bConvertToVoxelSpace = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelSphereTools_SmoothMaterialSphere_Statics::NewProp_bConvertToVoxelSpace = { "bConvertToVoxelSpace", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VoxelSphereTools_eventSmoothMaterialSphere_Parms), &Z_Construct_UFunction_UVoxelSphereTools_SmoothMaterialSphere_Statics::NewProp_bConvertToVoxelSpace_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UVoxelSphereTools_SmoothMaterialSphere_Statics::NewProp_bUpdateRender_SetBit(void* Obj)
{
	((VoxelSphereTools_eventSmoothMaterialSphere_Parms*)Obj)->bUpdateRender = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelSphereTools_SmoothMaterialSphere_Statics::NewProp_bUpdateRender = { "bUpdateRender", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VoxelSphereTools_eventSmoothMaterialSphere_Parms), &Z_Construct_UFunction_UVoxelSphereTools_SmoothMaterialSphere_Statics::NewProp_bUpdateRender_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelSphereTools_SmoothMaterialSphere_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_SmoothMaterialSphere_Statics::NewProp_ModifiedMaterials_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_SmoothMaterialSphere_Statics::NewProp_ModifiedMaterials,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_SmoothMaterialSphere_Statics::NewProp_EditedBounds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_SmoothMaterialSphere_Statics::NewProp_VoxelWorld,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_SmoothMaterialSphere_Statics::NewProp_Position,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_SmoothMaterialSphere_Statics::NewProp_Radius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_SmoothMaterialSphere_Statics::NewProp_Strength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_SmoothMaterialSphere_Statics::NewProp_NumIterations,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_SmoothMaterialSphere_Statics::NewProp_Mask,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_SmoothMaterialSphere_Statics::NewProp_FalloffType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_SmoothMaterialSphere_Statics::NewProp_FalloffType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_SmoothMaterialSphere_Statics::NewProp_Falloff,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_SmoothMaterialSphere_Statics::NewProp_bMultiThreaded,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_SmoothMaterialSphere_Statics::NewProp_bRecordModifiedMaterials,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_SmoothMaterialSphere_Statics::NewProp_bConvertToVoxelSpace,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_SmoothMaterialSphere_Statics::NewProp_bUpdateRender,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSphereTools_SmoothMaterialSphere_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelSphereTools_SmoothMaterialSphere_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelSphereTools, nullptr, "SmoothMaterialSphere", Z_Construct_UFunction_UVoxelSphereTools_SmoothMaterialSphere_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSphereTools_SmoothMaterialSphere_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVoxelSphereTools_SmoothMaterialSphere_Statics::VoxelSphereTools_eventSmoothMaterialSphere_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSphereTools_SmoothMaterialSphere_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelSphereTools_SmoothMaterialSphere_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVoxelSphereTools_SmoothMaterialSphere_Statics::VoxelSphereTools_eventSmoothMaterialSphere_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVoxelSphereTools_SmoothMaterialSphere()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelSphereTools_SmoothMaterialSphere_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelSphereTools::execSmoothMaterialSphere)
{
	P_GET_TARRAY_REF(FModifiedVoxelMaterial,Z_Param_Out_ModifiedMaterials);
	P_GET_STRUCT_REF(FVoxelIntBox,Z_Param_Out_EditedBounds);
	P_GET_OBJECT(AVoxelWorld,Z_Param_VoxelWorld);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_Position);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Radius);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Strength);
	P_GET_PROPERTY(FIntProperty,Z_Param_NumIterations);
	P_GET_PROPERTY(FIntProperty,Z_Param_Mask);
	P_GET_ENUM(EVoxelFalloff,Z_Param_FalloffType);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Falloff);
	P_GET_UBOOL(Z_Param_bMultiThreaded);
	P_GET_UBOOL(Z_Param_bRecordModifiedMaterials);
	P_GET_UBOOL(Z_Param_bConvertToVoxelSpace);
	P_GET_UBOOL(Z_Param_bUpdateRender);
	P_FINISH;
	P_NATIVE_BEGIN;
	UVoxelSphereTools::SmoothMaterialSphere(Z_Param_Out_ModifiedMaterials,Z_Param_Out_EditedBounds,Z_Param_VoxelWorld,Z_Param_Out_Position,Z_Param_Radius,Z_Param_Strength,Z_Param_NumIterations,Z_Param_Mask,EVoxelFalloff(Z_Param_FalloffType),Z_Param_Falloff,Z_Param_bMultiThreaded,Z_Param_bRecordModifiedMaterials,Z_Param_bConvertToVoxelSpace,Z_Param_bUpdateRender);
	P_NATIVE_END;
}
// ********** End Class UVoxelSphereTools Function SmoothMaterialSphere ****************************

// ********** Begin Class UVoxelSphereTools Function SmoothMaterialSphereAsync *********************
struct Z_Construct_UFunction_UVoxelSphereTools_SmoothMaterialSphereAsync_Statics
{
	struct VoxelSphereTools_eventSmoothMaterialSphereAsync_Parms
	{
		UObject* WorldContextObject;
		FLatentActionInfo LatentInfo;
		TArray<FModifiedVoxelMaterial> ModifiedMaterials;
		FVoxelIntBox EditedBounds;
		AVoxelWorld* VoxelWorld;
		FVector Position;
		float Radius;
		float Strength;
		int32 NumIterations;
		int32 Mask;
		EVoxelFalloff FalloffType;
		float Falloff;
		bool bMultiThreaded;
		bool bRecordModifiedMaterials;
		bool bConvertToVoxelSpace;
		bool bUpdateRender;
		bool bHideLatentWarnings;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "bMultiThreaded, bRecordModifiedMaterials, bConvertToVoxelSpace, bUpdateRender, bHideLatentWarnings" },
		{ "Category", "Voxel|Tools|Sphere Tools" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Smooth materials in a sphere\n\x09 * Runs asynchronously in a background thread\n\x09 * @see SmoothMaterialSphere, SmoothMaterialSphereAsync and FVoxelSphereToolsImpl::SmoothMaterialSphere\n\x09 * @param\x09ModifiedMaterials       \x09Record the Materials modified by this function. Useful to track the amount of edit done, for instance to give resources when digging\n\x09 * @param\x09""EditedBounds            \x09Returns the bounds edited by this function\n\x09 * @param\x09VoxelWorld              \x09The voxel world to do the edit to\n\x09 * @param\x09Position                \x09The position of the center. In world space (unreal units) if bConvertToVoxelSpace is true. In voxel space if false.\n\x09 * @param\x09Radius                  \x09The radius. In unreal units if bConvertToVoxelSpace is true. In voxels if false.\n\x09 * @param\x09Strength                \x09The strength of the smoothing (preferably between 0 and 1)\n\x09 * @param\x09NumIterations           \x09The number of times the smooth is going to be applied. Increase to make smoothing faster, but more expensive.\n\x09 * @param\x09Mask                    \x09The material channels to affect\n\x09 * @param\x09""FalloffType             \x09The type of falloff\n\x09 * @param\x09""Falloff                 \x09The falloff, between 0 and 1. Set to 0 to disable.\n\x09 * @param\x09""bMultiThreaded          \x09If true, multiple threads will be used to make the edit faster. Not recommended on async functions, as it might cause lag.\n\x09 * @param\x09""bRecordModifiedMaterials\x09If false, will not fill ModifiedMaterials, making the edit faster.\n\x09 * @param\x09""bConvertToVoxelSpace    \x09If true, Position and Radius will be converted to voxel space. Else they will be used directly.\n\x09 * @param\x09""bUpdateRender           \x09If false, will only edit the data and not update the render. Rarely needed.\n\x09 * @param\x09""bHideLatentWarnings     \x09Hide latent warnings caused by calling a node before its previous call completion.\n\x09*/" },
#endif
		{ "CPP_Default_bConvertToVoxelSpace", "true" },
		{ "CPP_Default_bHideLatentWarnings", "false" },
		{ "CPP_Default_bMultiThreaded", "false" },
		{ "CPP_Default_bRecordModifiedMaterials", "true" },
		{ "CPP_Default_bUpdateRender", "true" },
		{ "CPP_Default_Falloff", "0.500000" },
		{ "CPP_Default_FalloffType", "Linear" },
		{ "CPP_Default_Mask", "4095" },
		{ "CPP_Default_NumIterations", "1" },
		{ "DefaultToSelf", "VoxelWorld" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Public/VoxelTools/Gen/VoxelSphereTools.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Smooth materials in a sphere\nRuns asynchronously in a background thread\n@see SmoothMaterialSphere, SmoothMaterialSphereAsync and FVoxelSphereToolsImpl::SmoothMaterialSphere\n@param       ModifiedMaterials               Record the Materials modified by this function. Useful to track the amount of edit done, for instance to give resources when digging\n@param       EditedBounds                    Returns the bounds edited by this function\n@param       VoxelWorld                      The voxel world to do the edit to\n@param       Position                        The position of the center. In world space (unreal units) if bConvertToVoxelSpace is true. In voxel space if false.\n@param       Radius                          The radius. In unreal units if bConvertToVoxelSpace is true. In voxels if false.\n@param       Strength                        The strength of the smoothing (preferably between 0 and 1)\n@param       NumIterations                   The number of times the smooth is going to be applied. Increase to make smoothing faster, but more expensive.\n@param       Mask                            The material channels to affect\n@param       FalloffType                     The type of falloff\n@param       Falloff                         The falloff, between 0 and 1. Set to 0 to disable.\n@param       bMultiThreaded                  If true, multiple threads will be used to make the edit faster. Not recommended on async functions, as it might cause lag.\n@param       bRecordModifiedMaterials        If false, will not fill ModifiedMaterials, making the edit faster.\n@param       bConvertToVoxelSpace            If true, Position and Radius will be converted to voxel space. Else they will be used directly.\n@param       bUpdateRender                   If false, will only edit the data and not update the render. Rarely needed.\n@param       bHideLatentWarnings             Hide latent warnings caused by calling a node before its previous call completion." },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mask_MetaData[] = {
		{ "Bitmask", "" },
		{ "BitmaskEnum", "EVoxelMaterialMask_BP" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ModifiedMaterials_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ModifiedMaterials;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EditedBounds;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_VoxelWorld;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Position;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Strength;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumIterations;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Mask;
	static const UECodeGen_Private::FBytePropertyParams NewProp_FalloffType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_FalloffType;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Falloff;
	static void NewProp_bMultiThreaded_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bMultiThreaded;
	static void NewProp_bRecordModifiedMaterials_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRecordModifiedMaterials;
	static void NewProp_bConvertToVoxelSpace_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bConvertToVoxelSpace;
	static void NewProp_bUpdateRender_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUpdateRender;
	static void NewProp_bHideLatentWarnings_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHideLatentWarnings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelSphereTools_SmoothMaterialSphereAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelSphereTools_eventSmoothMaterialSphereAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSphereTools_SmoothMaterialSphereAsync_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelSphereTools_eventSmoothMaterialSphereAsync_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(0, nullptr) }; // 4146275481
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSphereTools_SmoothMaterialSphereAsync_Statics::NewProp_ModifiedMaterials_Inner = { "ModifiedMaterials", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FModifiedVoxelMaterial, METADATA_PARAMS(0, nullptr) }; // 2111187622
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVoxelSphereTools_SmoothMaterialSphereAsync_Statics::NewProp_ModifiedMaterials = { "ModifiedMaterials", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelSphereTools_eventSmoothMaterialSphereAsync_Parms, ModifiedMaterials), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 2111187622
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSphereTools_SmoothMaterialSphereAsync_Statics::NewProp_EditedBounds = { "EditedBounds", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelSphereTools_eventSmoothMaterialSphereAsync_Parms, EditedBounds), Z_Construct_UScriptStruct_FVoxelIntBox, METADATA_PARAMS(0, nullptr) }; // 3520536583
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelSphereTools_SmoothMaterialSphereAsync_Statics::NewProp_VoxelWorld = { "VoxelWorld", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelSphereTools_eventSmoothMaterialSphereAsync_Parms, VoxelWorld), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSphereTools_SmoothMaterialSphereAsync_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelSphereTools_eventSmoothMaterialSphereAsync_Parms, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Position_MetaData), NewProp_Position_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoxelSphereTools_SmoothMaterialSphereAsync_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelSphereTools_eventSmoothMaterialSphereAsync_Parms, Radius), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoxelSphereTools_SmoothMaterialSphereAsync_Statics::NewProp_Strength = { "Strength", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelSphereTools_eventSmoothMaterialSphereAsync_Parms, Strength), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVoxelSphereTools_SmoothMaterialSphereAsync_Statics::NewProp_NumIterations = { "NumIterations", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelSphereTools_eventSmoothMaterialSphereAsync_Parms, NumIterations), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVoxelSphereTools_SmoothMaterialSphereAsync_Statics::NewProp_Mask = { "Mask", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelSphereTools_eventSmoothMaterialSphereAsync_Parms, Mask), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mask_MetaData), NewProp_Mask_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVoxelSphereTools_SmoothMaterialSphereAsync_Statics::NewProp_FalloffType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UVoxelSphereTools_SmoothMaterialSphereAsync_Statics::NewProp_FalloffType = { "FalloffType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelSphereTools_eventSmoothMaterialSphereAsync_Parms, FalloffType), Z_Construct_UEnum_Voxel_EVoxelFalloff, METADATA_PARAMS(0, nullptr) }; // 103099151
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoxelSphereTools_SmoothMaterialSphereAsync_Statics::NewProp_Falloff = { "Falloff", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelSphereTools_eventSmoothMaterialSphereAsync_Parms, Falloff), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UVoxelSphereTools_SmoothMaterialSphereAsync_Statics::NewProp_bMultiThreaded_SetBit(void* Obj)
{
	((VoxelSphereTools_eventSmoothMaterialSphereAsync_Parms*)Obj)->bMultiThreaded = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelSphereTools_SmoothMaterialSphereAsync_Statics::NewProp_bMultiThreaded = { "bMultiThreaded", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VoxelSphereTools_eventSmoothMaterialSphereAsync_Parms), &Z_Construct_UFunction_UVoxelSphereTools_SmoothMaterialSphereAsync_Statics::NewProp_bMultiThreaded_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UVoxelSphereTools_SmoothMaterialSphereAsync_Statics::NewProp_bRecordModifiedMaterials_SetBit(void* Obj)
{
	((VoxelSphereTools_eventSmoothMaterialSphereAsync_Parms*)Obj)->bRecordModifiedMaterials = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelSphereTools_SmoothMaterialSphereAsync_Statics::NewProp_bRecordModifiedMaterials = { "bRecordModifiedMaterials", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VoxelSphereTools_eventSmoothMaterialSphereAsync_Parms), &Z_Construct_UFunction_UVoxelSphereTools_SmoothMaterialSphereAsync_Statics::NewProp_bRecordModifiedMaterials_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UVoxelSphereTools_SmoothMaterialSphereAsync_Statics::NewProp_bConvertToVoxelSpace_SetBit(void* Obj)
{
	((VoxelSphereTools_eventSmoothMaterialSphereAsync_Parms*)Obj)->bConvertToVoxelSpace = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelSphereTools_SmoothMaterialSphereAsync_Statics::NewProp_bConvertToVoxelSpace = { "bConvertToVoxelSpace", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VoxelSphereTools_eventSmoothMaterialSphereAsync_Parms), &Z_Construct_UFunction_UVoxelSphereTools_SmoothMaterialSphereAsync_Statics::NewProp_bConvertToVoxelSpace_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UVoxelSphereTools_SmoothMaterialSphereAsync_Statics::NewProp_bUpdateRender_SetBit(void* Obj)
{
	((VoxelSphereTools_eventSmoothMaterialSphereAsync_Parms*)Obj)->bUpdateRender = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelSphereTools_SmoothMaterialSphereAsync_Statics::NewProp_bUpdateRender = { "bUpdateRender", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VoxelSphereTools_eventSmoothMaterialSphereAsync_Parms), &Z_Construct_UFunction_UVoxelSphereTools_SmoothMaterialSphereAsync_Statics::NewProp_bUpdateRender_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UVoxelSphereTools_SmoothMaterialSphereAsync_Statics::NewProp_bHideLatentWarnings_SetBit(void* Obj)
{
	((VoxelSphereTools_eventSmoothMaterialSphereAsync_Parms*)Obj)->bHideLatentWarnings = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelSphereTools_SmoothMaterialSphereAsync_Statics::NewProp_bHideLatentWarnings = { "bHideLatentWarnings", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VoxelSphereTools_eventSmoothMaterialSphereAsync_Parms), &Z_Construct_UFunction_UVoxelSphereTools_SmoothMaterialSphereAsync_Statics::NewProp_bHideLatentWarnings_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelSphereTools_SmoothMaterialSphereAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_SmoothMaterialSphereAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_SmoothMaterialSphereAsync_Statics::NewProp_LatentInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_SmoothMaterialSphereAsync_Statics::NewProp_ModifiedMaterials_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_SmoothMaterialSphereAsync_Statics::NewProp_ModifiedMaterials,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_SmoothMaterialSphereAsync_Statics::NewProp_EditedBounds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_SmoothMaterialSphereAsync_Statics::NewProp_VoxelWorld,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_SmoothMaterialSphereAsync_Statics::NewProp_Position,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_SmoothMaterialSphereAsync_Statics::NewProp_Radius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_SmoothMaterialSphereAsync_Statics::NewProp_Strength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_SmoothMaterialSphereAsync_Statics::NewProp_NumIterations,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_SmoothMaterialSphereAsync_Statics::NewProp_Mask,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_SmoothMaterialSphereAsync_Statics::NewProp_FalloffType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_SmoothMaterialSphereAsync_Statics::NewProp_FalloffType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_SmoothMaterialSphereAsync_Statics::NewProp_Falloff,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_SmoothMaterialSphereAsync_Statics::NewProp_bMultiThreaded,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_SmoothMaterialSphereAsync_Statics::NewProp_bRecordModifiedMaterials,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_SmoothMaterialSphereAsync_Statics::NewProp_bConvertToVoxelSpace,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_SmoothMaterialSphereAsync_Statics::NewProp_bUpdateRender,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_SmoothMaterialSphereAsync_Statics::NewProp_bHideLatentWarnings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSphereTools_SmoothMaterialSphereAsync_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelSphereTools_SmoothMaterialSphereAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelSphereTools, nullptr, "SmoothMaterialSphereAsync", Z_Construct_UFunction_UVoxelSphereTools_SmoothMaterialSphereAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSphereTools_SmoothMaterialSphereAsync_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVoxelSphereTools_SmoothMaterialSphereAsync_Statics::VoxelSphereTools_eventSmoothMaterialSphereAsync_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSphereTools_SmoothMaterialSphereAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelSphereTools_SmoothMaterialSphereAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVoxelSphereTools_SmoothMaterialSphereAsync_Statics::VoxelSphereTools_eventSmoothMaterialSphereAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVoxelSphereTools_SmoothMaterialSphereAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelSphereTools_SmoothMaterialSphereAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelSphereTools::execSmoothMaterialSphereAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
	P_GET_TARRAY_REF(FModifiedVoxelMaterial,Z_Param_Out_ModifiedMaterials);
	P_GET_STRUCT_REF(FVoxelIntBox,Z_Param_Out_EditedBounds);
	P_GET_OBJECT(AVoxelWorld,Z_Param_VoxelWorld);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_Position);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Radius);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Strength);
	P_GET_PROPERTY(FIntProperty,Z_Param_NumIterations);
	P_GET_PROPERTY(FIntProperty,Z_Param_Mask);
	P_GET_ENUM(EVoxelFalloff,Z_Param_FalloffType);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Falloff);
	P_GET_UBOOL(Z_Param_bMultiThreaded);
	P_GET_UBOOL(Z_Param_bRecordModifiedMaterials);
	P_GET_UBOOL(Z_Param_bConvertToVoxelSpace);
	P_GET_UBOOL(Z_Param_bUpdateRender);
	P_GET_UBOOL(Z_Param_bHideLatentWarnings);
	P_FINISH;
	P_NATIVE_BEGIN;
	UVoxelSphereTools::SmoothMaterialSphereAsync(Z_Param_WorldContextObject,Z_Param_LatentInfo,Z_Param_Out_ModifiedMaterials,Z_Param_Out_EditedBounds,Z_Param_VoxelWorld,Z_Param_Out_Position,Z_Param_Radius,Z_Param_Strength,Z_Param_NumIterations,Z_Param_Mask,EVoxelFalloff(Z_Param_FalloffType),Z_Param_Falloff,Z_Param_bMultiThreaded,Z_Param_bRecordModifiedMaterials,Z_Param_bConvertToVoxelSpace,Z_Param_bUpdateRender,Z_Param_bHideLatentWarnings);
	P_NATIVE_END;
}
// ********** End Class UVoxelSphereTools Function SmoothMaterialSphereAsync ***********************

// ********** Begin Class UVoxelSphereTools Function SmoothSphere **********************************
struct Z_Construct_UFunction_UVoxelSphereTools_SmoothSphere_Statics
{
	struct VoxelSphereTools_eventSmoothSphere_Parms
	{
		TArray<FModifiedVoxelValue> ModifiedValues;
		FVoxelIntBox EditedBounds;
		AVoxelWorld* VoxelWorld;
		FVector Position;
		float Radius;
		float Strength;
		int32 NumIterations;
		EVoxelFalloff FalloffType;
		float Falloff;
		bool bMultiThreaded;
		bool bRecordModifiedValues;
		bool bConvertToVoxelSpace;
		bool bUpdateRender;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "bMultiThreaded, bRecordModifiedValues, bConvertToVoxelSpace, bUpdateRender" },
		{ "Category", "Voxel|Tools|Sphere Tools" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Smooth a sphere\n\x09 * @see SmoothSphere, SmoothSphereAsync and FVoxelSphereToolsImpl::SmoothSphere\n\x09 * @param\x09ModifiedValues       \x09Record the Values modified by this function. Useful to track the amount of edit done, for instance to give resources when digging\n\x09 * @param\x09""EditedBounds         \x09Returns the bounds edited by this function\n\x09 * @param\x09VoxelWorld           \x09The voxel world to do the edit to\n\x09 * @param\x09Position             \x09The position of the center. In world space (unreal units) if bConvertToVoxelSpace is true. In voxel space if false.\n\x09 * @param\x09Radius               \x09The radius. In unreal units if bConvertToVoxelSpace is true. In voxels if false.\n\x09 * @param\x09Strength             \x09The strength of the smoothing (preferably between 0 and 1)\n\x09 * @param\x09NumIterations        \x09The number of times the smooth is going to be applied. Increase to make smoothing faster, but more expensive.\n\x09 * @param\x09""FalloffType          \x09The type of falloff\n\x09 * @param\x09""Falloff              \x09The falloff, between 0 and 1. Set to 0 to disable.\n\x09 * @param\x09""bMultiThreaded       \x09If true, multiple threads will be used to make the edit faster.\n\x09 * @param\x09""bRecordModifiedValues\x09If false, will not fill ModifiedValues, making the edit faster.\n\x09 * @param\x09""bConvertToVoxelSpace \x09If true, Position and Radius will be converted to voxel space. Else they will be used directly.\n\x09 * @param\x09""bUpdateRender        \x09If false, will only edit the data and not update the render. Rarely needed.\n\x09*/" },
#endif
		{ "CPP_Default_bConvertToVoxelSpace", "true" },
		{ "CPP_Default_bMultiThreaded", "true" },
		{ "CPP_Default_bRecordModifiedValues", "true" },
		{ "CPP_Default_bUpdateRender", "true" },
		{ "CPP_Default_Falloff", "0.500000" },
		{ "CPP_Default_FalloffType", "Linear" },
		{ "CPP_Default_NumIterations", "1" },
		{ "DefaultToSelf", "VoxelWorld" },
		{ "ModuleRelativePath", "Public/VoxelTools/Gen/VoxelSphereTools.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Smooth a sphere\n@see SmoothSphere, SmoothSphereAsync and FVoxelSphereToolsImpl::SmoothSphere\n@param       ModifiedValues          Record the Values modified by this function. Useful to track the amount of edit done, for instance to give resources when digging\n@param       EditedBounds            Returns the bounds edited by this function\n@param       VoxelWorld              The voxel world to do the edit to\n@param       Position                The position of the center. In world space (unreal units) if bConvertToVoxelSpace is true. In voxel space if false.\n@param       Radius                  The radius. In unreal units if bConvertToVoxelSpace is true. In voxels if false.\n@param       Strength                The strength of the smoothing (preferably between 0 and 1)\n@param       NumIterations           The number of times the smooth is going to be applied. Increase to make smoothing faster, but more expensive.\n@param       FalloffType             The type of falloff\n@param       Falloff                 The falloff, between 0 and 1. Set to 0 to disable.\n@param       bMultiThreaded          If true, multiple threads will be used to make the edit faster.\n@param       bRecordModifiedValues   If false, will not fill ModifiedValues, making the edit faster.\n@param       bConvertToVoxelSpace    If true, Position and Radius will be converted to voxel space. Else they will be used directly.\n@param       bUpdateRender           If false, will only edit the data and not update the render. Rarely needed." },
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
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Strength;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumIterations;
	static const UECodeGen_Private::FBytePropertyParams NewProp_FalloffType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_FalloffType;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Falloff;
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSphereTools_SmoothSphere_Statics::NewProp_ModifiedValues_Inner = { "ModifiedValues", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FModifiedVoxelValue, METADATA_PARAMS(0, nullptr) }; // 1075743150
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVoxelSphereTools_SmoothSphere_Statics::NewProp_ModifiedValues = { "ModifiedValues", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelSphereTools_eventSmoothSphere_Parms, ModifiedValues), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 1075743150
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSphereTools_SmoothSphere_Statics::NewProp_EditedBounds = { "EditedBounds", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelSphereTools_eventSmoothSphere_Parms, EditedBounds), Z_Construct_UScriptStruct_FVoxelIntBox, METADATA_PARAMS(0, nullptr) }; // 3520536583
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelSphereTools_SmoothSphere_Statics::NewProp_VoxelWorld = { "VoxelWorld", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelSphereTools_eventSmoothSphere_Parms, VoxelWorld), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSphereTools_SmoothSphere_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelSphereTools_eventSmoothSphere_Parms, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Position_MetaData), NewProp_Position_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoxelSphereTools_SmoothSphere_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelSphereTools_eventSmoothSphere_Parms, Radius), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoxelSphereTools_SmoothSphere_Statics::NewProp_Strength = { "Strength", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelSphereTools_eventSmoothSphere_Parms, Strength), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVoxelSphereTools_SmoothSphere_Statics::NewProp_NumIterations = { "NumIterations", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelSphereTools_eventSmoothSphere_Parms, NumIterations), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVoxelSphereTools_SmoothSphere_Statics::NewProp_FalloffType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UVoxelSphereTools_SmoothSphere_Statics::NewProp_FalloffType = { "FalloffType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelSphereTools_eventSmoothSphere_Parms, FalloffType), Z_Construct_UEnum_Voxel_EVoxelFalloff, METADATA_PARAMS(0, nullptr) }; // 103099151
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoxelSphereTools_SmoothSphere_Statics::NewProp_Falloff = { "Falloff", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelSphereTools_eventSmoothSphere_Parms, Falloff), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UVoxelSphereTools_SmoothSphere_Statics::NewProp_bMultiThreaded_SetBit(void* Obj)
{
	((VoxelSphereTools_eventSmoothSphere_Parms*)Obj)->bMultiThreaded = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelSphereTools_SmoothSphere_Statics::NewProp_bMultiThreaded = { "bMultiThreaded", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VoxelSphereTools_eventSmoothSphere_Parms), &Z_Construct_UFunction_UVoxelSphereTools_SmoothSphere_Statics::NewProp_bMultiThreaded_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UVoxelSphereTools_SmoothSphere_Statics::NewProp_bRecordModifiedValues_SetBit(void* Obj)
{
	((VoxelSphereTools_eventSmoothSphere_Parms*)Obj)->bRecordModifiedValues = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelSphereTools_SmoothSphere_Statics::NewProp_bRecordModifiedValues = { "bRecordModifiedValues", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VoxelSphereTools_eventSmoothSphere_Parms), &Z_Construct_UFunction_UVoxelSphereTools_SmoothSphere_Statics::NewProp_bRecordModifiedValues_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UVoxelSphereTools_SmoothSphere_Statics::NewProp_bConvertToVoxelSpace_SetBit(void* Obj)
{
	((VoxelSphereTools_eventSmoothSphere_Parms*)Obj)->bConvertToVoxelSpace = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelSphereTools_SmoothSphere_Statics::NewProp_bConvertToVoxelSpace = { "bConvertToVoxelSpace", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VoxelSphereTools_eventSmoothSphere_Parms), &Z_Construct_UFunction_UVoxelSphereTools_SmoothSphere_Statics::NewProp_bConvertToVoxelSpace_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UVoxelSphereTools_SmoothSphere_Statics::NewProp_bUpdateRender_SetBit(void* Obj)
{
	((VoxelSphereTools_eventSmoothSphere_Parms*)Obj)->bUpdateRender = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelSphereTools_SmoothSphere_Statics::NewProp_bUpdateRender = { "bUpdateRender", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VoxelSphereTools_eventSmoothSphere_Parms), &Z_Construct_UFunction_UVoxelSphereTools_SmoothSphere_Statics::NewProp_bUpdateRender_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelSphereTools_SmoothSphere_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_SmoothSphere_Statics::NewProp_ModifiedValues_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_SmoothSphere_Statics::NewProp_ModifiedValues,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_SmoothSphere_Statics::NewProp_EditedBounds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_SmoothSphere_Statics::NewProp_VoxelWorld,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_SmoothSphere_Statics::NewProp_Position,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_SmoothSphere_Statics::NewProp_Radius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_SmoothSphere_Statics::NewProp_Strength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_SmoothSphere_Statics::NewProp_NumIterations,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_SmoothSphere_Statics::NewProp_FalloffType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_SmoothSphere_Statics::NewProp_FalloffType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_SmoothSphere_Statics::NewProp_Falloff,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_SmoothSphere_Statics::NewProp_bMultiThreaded,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_SmoothSphere_Statics::NewProp_bRecordModifiedValues,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_SmoothSphere_Statics::NewProp_bConvertToVoxelSpace,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_SmoothSphere_Statics::NewProp_bUpdateRender,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSphereTools_SmoothSphere_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelSphereTools_SmoothSphere_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelSphereTools, nullptr, "SmoothSphere", Z_Construct_UFunction_UVoxelSphereTools_SmoothSphere_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSphereTools_SmoothSphere_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVoxelSphereTools_SmoothSphere_Statics::VoxelSphereTools_eventSmoothSphere_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSphereTools_SmoothSphere_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelSphereTools_SmoothSphere_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVoxelSphereTools_SmoothSphere_Statics::VoxelSphereTools_eventSmoothSphere_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVoxelSphereTools_SmoothSphere()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelSphereTools_SmoothSphere_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelSphereTools::execSmoothSphere)
{
	P_GET_TARRAY_REF(FModifiedVoxelValue,Z_Param_Out_ModifiedValues);
	P_GET_STRUCT_REF(FVoxelIntBox,Z_Param_Out_EditedBounds);
	P_GET_OBJECT(AVoxelWorld,Z_Param_VoxelWorld);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_Position);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Radius);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Strength);
	P_GET_PROPERTY(FIntProperty,Z_Param_NumIterations);
	P_GET_ENUM(EVoxelFalloff,Z_Param_FalloffType);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Falloff);
	P_GET_UBOOL(Z_Param_bMultiThreaded);
	P_GET_UBOOL(Z_Param_bRecordModifiedValues);
	P_GET_UBOOL(Z_Param_bConvertToVoxelSpace);
	P_GET_UBOOL(Z_Param_bUpdateRender);
	P_FINISH;
	P_NATIVE_BEGIN;
	UVoxelSphereTools::SmoothSphere(Z_Param_Out_ModifiedValues,Z_Param_Out_EditedBounds,Z_Param_VoxelWorld,Z_Param_Out_Position,Z_Param_Radius,Z_Param_Strength,Z_Param_NumIterations,EVoxelFalloff(Z_Param_FalloffType),Z_Param_Falloff,Z_Param_bMultiThreaded,Z_Param_bRecordModifiedValues,Z_Param_bConvertToVoxelSpace,Z_Param_bUpdateRender);
	P_NATIVE_END;
}
// ********** End Class UVoxelSphereTools Function SmoothSphere ************************************

// ********** Begin Class UVoxelSphereTools Function SmoothSphereAsync *****************************
struct Z_Construct_UFunction_UVoxelSphereTools_SmoothSphereAsync_Statics
{
	struct VoxelSphereTools_eventSmoothSphereAsync_Parms
	{
		UObject* WorldContextObject;
		FLatentActionInfo LatentInfo;
		TArray<FModifiedVoxelValue> ModifiedValues;
		FVoxelIntBox EditedBounds;
		AVoxelWorld* VoxelWorld;
		FVector Position;
		float Radius;
		float Strength;
		int32 NumIterations;
		EVoxelFalloff FalloffType;
		float Falloff;
		bool bMultiThreaded;
		bool bRecordModifiedValues;
		bool bConvertToVoxelSpace;
		bool bUpdateRender;
		bool bHideLatentWarnings;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "bMultiThreaded, bRecordModifiedValues, bConvertToVoxelSpace, bUpdateRender, bHideLatentWarnings" },
		{ "Category", "Voxel|Tools|Sphere Tools" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Smooth a sphere\n\x09 * Runs asynchronously in a background thread\n\x09 * @see SmoothSphere, SmoothSphereAsync and FVoxelSphereToolsImpl::SmoothSphere\n\x09 * @param\x09ModifiedValues       \x09Record the Values modified by this function. Useful to track the amount of edit done, for instance to give resources when digging\n\x09 * @param\x09""EditedBounds         \x09Returns the bounds edited by this function\n\x09 * @param\x09VoxelWorld           \x09The voxel world to do the edit to\n\x09 * @param\x09Position             \x09The position of the center. In world space (unreal units) if bConvertToVoxelSpace is true. In voxel space if false.\n\x09 * @param\x09Radius               \x09The radius. In unreal units if bConvertToVoxelSpace is true. In voxels if false.\n\x09 * @param\x09Strength             \x09The strength of the smoothing (preferably between 0 and 1)\n\x09 * @param\x09NumIterations        \x09The number of times the smooth is going to be applied. Increase to make smoothing faster, but more expensive.\n\x09 * @param\x09""FalloffType          \x09The type of falloff\n\x09 * @param\x09""Falloff              \x09The falloff, between 0 and 1. Set to 0 to disable.\n\x09 * @param\x09""bMultiThreaded       \x09If true, multiple threads will be used to make the edit faster. Not recommended on async functions, as it might cause lag.\n\x09 * @param\x09""bRecordModifiedValues\x09If false, will not fill ModifiedValues, making the edit faster.\n\x09 * @param\x09""bConvertToVoxelSpace \x09If true, Position and Radius will be converted to voxel space. Else they will be used directly.\n\x09 * @param\x09""bUpdateRender        \x09If false, will only edit the data and not update the render. Rarely needed.\n\x09 * @param\x09""bHideLatentWarnings  \x09Hide latent warnings caused by calling a node before its previous call completion.\n\x09*/" },
#endif
		{ "CPP_Default_bConvertToVoxelSpace", "true" },
		{ "CPP_Default_bHideLatentWarnings", "false" },
		{ "CPP_Default_bMultiThreaded", "false" },
		{ "CPP_Default_bRecordModifiedValues", "true" },
		{ "CPP_Default_bUpdateRender", "true" },
		{ "CPP_Default_Falloff", "0.500000" },
		{ "CPP_Default_FalloffType", "Linear" },
		{ "CPP_Default_NumIterations", "1" },
		{ "DefaultToSelf", "VoxelWorld" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Public/VoxelTools/Gen/VoxelSphereTools.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Smooth a sphere\nRuns asynchronously in a background thread\n@see SmoothSphere, SmoothSphereAsync and FVoxelSphereToolsImpl::SmoothSphere\n@param       ModifiedValues          Record the Values modified by this function. Useful to track the amount of edit done, for instance to give resources when digging\n@param       EditedBounds            Returns the bounds edited by this function\n@param       VoxelWorld              The voxel world to do the edit to\n@param       Position                The position of the center. In world space (unreal units) if bConvertToVoxelSpace is true. In voxel space if false.\n@param       Radius                  The radius. In unreal units if bConvertToVoxelSpace is true. In voxels if false.\n@param       Strength                The strength of the smoothing (preferably between 0 and 1)\n@param       NumIterations           The number of times the smooth is going to be applied. Increase to make smoothing faster, but more expensive.\n@param       FalloffType             The type of falloff\n@param       Falloff                 The falloff, between 0 and 1. Set to 0 to disable.\n@param       bMultiThreaded          If true, multiple threads will be used to make the edit faster. Not recommended on async functions, as it might cause lag.\n@param       bRecordModifiedValues   If false, will not fill ModifiedValues, making the edit faster.\n@param       bConvertToVoxelSpace    If true, Position and Radius will be converted to voxel space. Else they will be used directly.\n@param       bUpdateRender           If false, will only edit the data and not update the render. Rarely needed.\n@param       bHideLatentWarnings     Hide latent warnings caused by calling a node before its previous call completion." },
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
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Strength;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumIterations;
	static const UECodeGen_Private::FBytePropertyParams NewProp_FalloffType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_FalloffType;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Falloff;
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
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelSphereTools_SmoothSphereAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelSphereTools_eventSmoothSphereAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSphereTools_SmoothSphereAsync_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelSphereTools_eventSmoothSphereAsync_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(0, nullptr) }; // 4146275481
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSphereTools_SmoothSphereAsync_Statics::NewProp_ModifiedValues_Inner = { "ModifiedValues", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FModifiedVoxelValue, METADATA_PARAMS(0, nullptr) }; // 1075743150
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVoxelSphereTools_SmoothSphereAsync_Statics::NewProp_ModifiedValues = { "ModifiedValues", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelSphereTools_eventSmoothSphereAsync_Parms, ModifiedValues), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 1075743150
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSphereTools_SmoothSphereAsync_Statics::NewProp_EditedBounds = { "EditedBounds", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelSphereTools_eventSmoothSphereAsync_Parms, EditedBounds), Z_Construct_UScriptStruct_FVoxelIntBox, METADATA_PARAMS(0, nullptr) }; // 3520536583
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelSphereTools_SmoothSphereAsync_Statics::NewProp_VoxelWorld = { "VoxelWorld", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelSphereTools_eventSmoothSphereAsync_Parms, VoxelWorld), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSphereTools_SmoothSphereAsync_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelSphereTools_eventSmoothSphereAsync_Parms, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Position_MetaData), NewProp_Position_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoxelSphereTools_SmoothSphereAsync_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelSphereTools_eventSmoothSphereAsync_Parms, Radius), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoxelSphereTools_SmoothSphereAsync_Statics::NewProp_Strength = { "Strength", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelSphereTools_eventSmoothSphereAsync_Parms, Strength), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVoxelSphereTools_SmoothSphereAsync_Statics::NewProp_NumIterations = { "NumIterations", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelSphereTools_eventSmoothSphereAsync_Parms, NumIterations), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVoxelSphereTools_SmoothSphereAsync_Statics::NewProp_FalloffType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UVoxelSphereTools_SmoothSphereAsync_Statics::NewProp_FalloffType = { "FalloffType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelSphereTools_eventSmoothSphereAsync_Parms, FalloffType), Z_Construct_UEnum_Voxel_EVoxelFalloff, METADATA_PARAMS(0, nullptr) }; // 103099151
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoxelSphereTools_SmoothSphereAsync_Statics::NewProp_Falloff = { "Falloff", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelSphereTools_eventSmoothSphereAsync_Parms, Falloff), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UVoxelSphereTools_SmoothSphereAsync_Statics::NewProp_bMultiThreaded_SetBit(void* Obj)
{
	((VoxelSphereTools_eventSmoothSphereAsync_Parms*)Obj)->bMultiThreaded = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelSphereTools_SmoothSphereAsync_Statics::NewProp_bMultiThreaded = { "bMultiThreaded", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VoxelSphereTools_eventSmoothSphereAsync_Parms), &Z_Construct_UFunction_UVoxelSphereTools_SmoothSphereAsync_Statics::NewProp_bMultiThreaded_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UVoxelSphereTools_SmoothSphereAsync_Statics::NewProp_bRecordModifiedValues_SetBit(void* Obj)
{
	((VoxelSphereTools_eventSmoothSphereAsync_Parms*)Obj)->bRecordModifiedValues = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelSphereTools_SmoothSphereAsync_Statics::NewProp_bRecordModifiedValues = { "bRecordModifiedValues", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VoxelSphereTools_eventSmoothSphereAsync_Parms), &Z_Construct_UFunction_UVoxelSphereTools_SmoothSphereAsync_Statics::NewProp_bRecordModifiedValues_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UVoxelSphereTools_SmoothSphereAsync_Statics::NewProp_bConvertToVoxelSpace_SetBit(void* Obj)
{
	((VoxelSphereTools_eventSmoothSphereAsync_Parms*)Obj)->bConvertToVoxelSpace = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelSphereTools_SmoothSphereAsync_Statics::NewProp_bConvertToVoxelSpace = { "bConvertToVoxelSpace", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VoxelSphereTools_eventSmoothSphereAsync_Parms), &Z_Construct_UFunction_UVoxelSphereTools_SmoothSphereAsync_Statics::NewProp_bConvertToVoxelSpace_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UVoxelSphereTools_SmoothSphereAsync_Statics::NewProp_bUpdateRender_SetBit(void* Obj)
{
	((VoxelSphereTools_eventSmoothSphereAsync_Parms*)Obj)->bUpdateRender = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelSphereTools_SmoothSphereAsync_Statics::NewProp_bUpdateRender = { "bUpdateRender", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VoxelSphereTools_eventSmoothSphereAsync_Parms), &Z_Construct_UFunction_UVoxelSphereTools_SmoothSphereAsync_Statics::NewProp_bUpdateRender_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UVoxelSphereTools_SmoothSphereAsync_Statics::NewProp_bHideLatentWarnings_SetBit(void* Obj)
{
	((VoxelSphereTools_eventSmoothSphereAsync_Parms*)Obj)->bHideLatentWarnings = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelSphereTools_SmoothSphereAsync_Statics::NewProp_bHideLatentWarnings = { "bHideLatentWarnings", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VoxelSphereTools_eventSmoothSphereAsync_Parms), &Z_Construct_UFunction_UVoxelSphereTools_SmoothSphereAsync_Statics::NewProp_bHideLatentWarnings_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelSphereTools_SmoothSphereAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_SmoothSphereAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_SmoothSphereAsync_Statics::NewProp_LatentInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_SmoothSphereAsync_Statics::NewProp_ModifiedValues_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_SmoothSphereAsync_Statics::NewProp_ModifiedValues,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_SmoothSphereAsync_Statics::NewProp_EditedBounds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_SmoothSphereAsync_Statics::NewProp_VoxelWorld,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_SmoothSphereAsync_Statics::NewProp_Position,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_SmoothSphereAsync_Statics::NewProp_Radius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_SmoothSphereAsync_Statics::NewProp_Strength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_SmoothSphereAsync_Statics::NewProp_NumIterations,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_SmoothSphereAsync_Statics::NewProp_FalloffType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_SmoothSphereAsync_Statics::NewProp_FalloffType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_SmoothSphereAsync_Statics::NewProp_Falloff,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_SmoothSphereAsync_Statics::NewProp_bMultiThreaded,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_SmoothSphereAsync_Statics::NewProp_bRecordModifiedValues,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_SmoothSphereAsync_Statics::NewProp_bConvertToVoxelSpace,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_SmoothSphereAsync_Statics::NewProp_bUpdateRender,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_SmoothSphereAsync_Statics::NewProp_bHideLatentWarnings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSphereTools_SmoothSphereAsync_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelSphereTools_SmoothSphereAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelSphereTools, nullptr, "SmoothSphereAsync", Z_Construct_UFunction_UVoxelSphereTools_SmoothSphereAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSphereTools_SmoothSphereAsync_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVoxelSphereTools_SmoothSphereAsync_Statics::VoxelSphereTools_eventSmoothSphereAsync_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSphereTools_SmoothSphereAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelSphereTools_SmoothSphereAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVoxelSphereTools_SmoothSphereAsync_Statics::VoxelSphereTools_eventSmoothSphereAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVoxelSphereTools_SmoothSphereAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelSphereTools_SmoothSphereAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelSphereTools::execSmoothSphereAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
	P_GET_TARRAY_REF(FModifiedVoxelValue,Z_Param_Out_ModifiedValues);
	P_GET_STRUCT_REF(FVoxelIntBox,Z_Param_Out_EditedBounds);
	P_GET_OBJECT(AVoxelWorld,Z_Param_VoxelWorld);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_Position);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Radius);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Strength);
	P_GET_PROPERTY(FIntProperty,Z_Param_NumIterations);
	P_GET_ENUM(EVoxelFalloff,Z_Param_FalloffType);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Falloff);
	P_GET_UBOOL(Z_Param_bMultiThreaded);
	P_GET_UBOOL(Z_Param_bRecordModifiedValues);
	P_GET_UBOOL(Z_Param_bConvertToVoxelSpace);
	P_GET_UBOOL(Z_Param_bUpdateRender);
	P_GET_UBOOL(Z_Param_bHideLatentWarnings);
	P_FINISH;
	P_NATIVE_BEGIN;
	UVoxelSphereTools::SmoothSphereAsync(Z_Param_WorldContextObject,Z_Param_LatentInfo,Z_Param_Out_ModifiedValues,Z_Param_Out_EditedBounds,Z_Param_VoxelWorld,Z_Param_Out_Position,Z_Param_Radius,Z_Param_Strength,Z_Param_NumIterations,EVoxelFalloff(Z_Param_FalloffType),Z_Param_Falloff,Z_Param_bMultiThreaded,Z_Param_bRecordModifiedValues,Z_Param_bConvertToVoxelSpace,Z_Param_bUpdateRender,Z_Param_bHideLatentWarnings);
	P_NATIVE_END;
}
// ********** End Class UVoxelSphereTools Function SmoothSphereAsync *******************************

// ********** Begin Class UVoxelSphereTools Function TrimSphere ************************************
struct Z_Construct_UFunction_UVoxelSphereTools_TrimSphere_Statics
{
	struct VoxelSphereTools_eventTrimSphere_Parms
	{
		TArray<FModifiedVoxelValue> ModifiedValues;
		FVoxelIntBox EditedBounds;
		AVoxelWorld* VoxelWorld;
		FVector Position;
		FVector Normal;
		float Radius;
		float Falloff;
		bool bAdditive;
		bool bMultiThreaded;
		bool bRecordModifiedValues;
		bool bConvertToVoxelSpace;
		bool bUpdateRender;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "bMultiThreaded, bRecordModifiedValues, bConvertToVoxelSpace, bUpdateRender" },
		{ "Category", "Voxel|Tools|Sphere Tools" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Trim tool: used to quickly flatten large portions of the world\n\x09 * Best results are obtained when Position and Normal are averages: use FindProjectionVoxels to do some linetraces, and then GetAveragePosition/Normal on the result\n\x09 * This ensures the tool usage is relatively smooth.\n\x09 * Works by stamping a shape into the world (if bAdditive = false, the stamp is destructive: voxels are removed instead)\n\x09 * The shape is the smooth union of a sphere SDF and a plane SDF. The smoothness of the union is controlled by the Falloff parameter.\n\x09 * @see TrimSphere, TrimSphereAsync and FVoxelSphereToolsImpl::TrimSphere\n\x09 * @param\x09ModifiedValues       \x09Record the Values modified by this function. Useful to track the amount of edit done, for instance to give resources when digging\n\x09 * @param\x09""EditedBounds         \x09Returns the bounds edited by this function\n\x09 * @param\x09VoxelWorld           \x09The voxel world to do the edit to\n\x09 * @param\x09Position             \x09The position of the center. In world space (unreal units) if bConvertToVoxelSpace is true. In voxel space if false.\n\x09 * @param\x09Normal               \x09The normal\n\x09 * @param\x09Radius               \x09The radius. In unreal units if bConvertToVoxelSpace is true. In voxels if false.\n\x09 * @param\x09""Falloff              \x09The falloff, between 0 and 1\n\x09 * @param\x09""bAdditive            \x09Whether to add or remove voxels\n\x09 * @param\x09""bMultiThreaded       \x09If true, multiple threads will be used to make the edit faster.\n\x09 * @param\x09""bRecordModifiedValues\x09If false, will not fill ModifiedValues, making the edit faster.\n\x09 * @param\x09""bConvertToVoxelSpace \x09If true, Position and Radius will be converted to voxel space. Else they will be used directly.\n\x09 * @param\x09""bUpdateRender        \x09If false, will only edit the data and not update the render. Rarely needed.\n\x09*/" },
#endif
		{ "CPP_Default_bConvertToVoxelSpace", "true" },
		{ "CPP_Default_bMultiThreaded", "true" },
		{ "CPP_Default_bRecordModifiedValues", "true" },
		{ "CPP_Default_bUpdateRender", "true" },
		{ "DefaultToSelf", "VoxelWorld" },
		{ "ModuleRelativePath", "Public/VoxelTools/Gen/VoxelSphereTools.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Trim tool: used to quickly flatten large portions of the world\nBest results are obtained when Position and Normal are averages: use FindProjectionVoxels to do some linetraces, and then GetAveragePosition/Normal on the result\nThis ensures the tool usage is relatively smooth.\nWorks by stamping a shape into the world (if bAdditive = false, the stamp is destructive: voxels are removed instead)\nThe shape is the smooth union of a sphere SDF and a plane SDF. The smoothness of the union is controlled by the Falloff parameter.\n@see TrimSphere, TrimSphereAsync and FVoxelSphereToolsImpl::TrimSphere\n@param       ModifiedValues          Record the Values modified by this function. Useful to track the amount of edit done, for instance to give resources when digging\n@param       EditedBounds            Returns the bounds edited by this function\n@param       VoxelWorld              The voxel world to do the edit to\n@param       Position                The position of the center. In world space (unreal units) if bConvertToVoxelSpace is true. In voxel space if false.\n@param       Normal                  The normal\n@param       Radius                  The radius. In unreal units if bConvertToVoxelSpace is true. In voxels if false.\n@param       Falloff                 The falloff, between 0 and 1\n@param       bAdditive               Whether to add or remove voxels\n@param       bMultiThreaded          If true, multiple threads will be used to make the edit faster.\n@param       bRecordModifiedValues   If false, will not fill ModifiedValues, making the edit faster.\n@param       bConvertToVoxelSpace    If true, Position and Radius will be converted to voxel space. Else they will be used directly.\n@param       bUpdateRender           If false, will only edit the data and not update the render. Rarely needed." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Normal_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ModifiedValues_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ModifiedValues;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EditedBounds;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_VoxelWorld;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Position;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Normal;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Falloff;
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSphereTools_TrimSphere_Statics::NewProp_ModifiedValues_Inner = { "ModifiedValues", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FModifiedVoxelValue, METADATA_PARAMS(0, nullptr) }; // 1075743150
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVoxelSphereTools_TrimSphere_Statics::NewProp_ModifiedValues = { "ModifiedValues", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelSphereTools_eventTrimSphere_Parms, ModifiedValues), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 1075743150
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSphereTools_TrimSphere_Statics::NewProp_EditedBounds = { "EditedBounds", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelSphereTools_eventTrimSphere_Parms, EditedBounds), Z_Construct_UScriptStruct_FVoxelIntBox, METADATA_PARAMS(0, nullptr) }; // 3520536583
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelSphereTools_TrimSphere_Statics::NewProp_VoxelWorld = { "VoxelWorld", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelSphereTools_eventTrimSphere_Parms, VoxelWorld), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSphereTools_TrimSphere_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelSphereTools_eventTrimSphere_Parms, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Position_MetaData), NewProp_Position_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSphereTools_TrimSphere_Statics::NewProp_Normal = { "Normal", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelSphereTools_eventTrimSphere_Parms, Normal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Normal_MetaData), NewProp_Normal_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoxelSphereTools_TrimSphere_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelSphereTools_eventTrimSphere_Parms, Radius), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoxelSphereTools_TrimSphere_Statics::NewProp_Falloff = { "Falloff", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelSphereTools_eventTrimSphere_Parms, Falloff), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UVoxelSphereTools_TrimSphere_Statics::NewProp_bAdditive_SetBit(void* Obj)
{
	((VoxelSphereTools_eventTrimSphere_Parms*)Obj)->bAdditive = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelSphereTools_TrimSphere_Statics::NewProp_bAdditive = { "bAdditive", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VoxelSphereTools_eventTrimSphere_Parms), &Z_Construct_UFunction_UVoxelSphereTools_TrimSphere_Statics::NewProp_bAdditive_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UVoxelSphereTools_TrimSphere_Statics::NewProp_bMultiThreaded_SetBit(void* Obj)
{
	((VoxelSphereTools_eventTrimSphere_Parms*)Obj)->bMultiThreaded = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelSphereTools_TrimSphere_Statics::NewProp_bMultiThreaded = { "bMultiThreaded", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VoxelSphereTools_eventTrimSphere_Parms), &Z_Construct_UFunction_UVoxelSphereTools_TrimSphere_Statics::NewProp_bMultiThreaded_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UVoxelSphereTools_TrimSphere_Statics::NewProp_bRecordModifiedValues_SetBit(void* Obj)
{
	((VoxelSphereTools_eventTrimSphere_Parms*)Obj)->bRecordModifiedValues = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelSphereTools_TrimSphere_Statics::NewProp_bRecordModifiedValues = { "bRecordModifiedValues", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VoxelSphereTools_eventTrimSphere_Parms), &Z_Construct_UFunction_UVoxelSphereTools_TrimSphere_Statics::NewProp_bRecordModifiedValues_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UVoxelSphereTools_TrimSphere_Statics::NewProp_bConvertToVoxelSpace_SetBit(void* Obj)
{
	((VoxelSphereTools_eventTrimSphere_Parms*)Obj)->bConvertToVoxelSpace = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelSphereTools_TrimSphere_Statics::NewProp_bConvertToVoxelSpace = { "bConvertToVoxelSpace", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VoxelSphereTools_eventTrimSphere_Parms), &Z_Construct_UFunction_UVoxelSphereTools_TrimSphere_Statics::NewProp_bConvertToVoxelSpace_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UVoxelSphereTools_TrimSphere_Statics::NewProp_bUpdateRender_SetBit(void* Obj)
{
	((VoxelSphereTools_eventTrimSphere_Parms*)Obj)->bUpdateRender = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelSphereTools_TrimSphere_Statics::NewProp_bUpdateRender = { "bUpdateRender", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VoxelSphereTools_eventTrimSphere_Parms), &Z_Construct_UFunction_UVoxelSphereTools_TrimSphere_Statics::NewProp_bUpdateRender_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelSphereTools_TrimSphere_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_TrimSphere_Statics::NewProp_ModifiedValues_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_TrimSphere_Statics::NewProp_ModifiedValues,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_TrimSphere_Statics::NewProp_EditedBounds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_TrimSphere_Statics::NewProp_VoxelWorld,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_TrimSphere_Statics::NewProp_Position,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_TrimSphere_Statics::NewProp_Normal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_TrimSphere_Statics::NewProp_Radius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_TrimSphere_Statics::NewProp_Falloff,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_TrimSphere_Statics::NewProp_bAdditive,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_TrimSphere_Statics::NewProp_bMultiThreaded,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_TrimSphere_Statics::NewProp_bRecordModifiedValues,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_TrimSphere_Statics::NewProp_bConvertToVoxelSpace,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_TrimSphere_Statics::NewProp_bUpdateRender,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSphereTools_TrimSphere_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelSphereTools_TrimSphere_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelSphereTools, nullptr, "TrimSphere", Z_Construct_UFunction_UVoxelSphereTools_TrimSphere_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSphereTools_TrimSphere_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVoxelSphereTools_TrimSphere_Statics::VoxelSphereTools_eventTrimSphere_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSphereTools_TrimSphere_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelSphereTools_TrimSphere_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVoxelSphereTools_TrimSphere_Statics::VoxelSphereTools_eventTrimSphere_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVoxelSphereTools_TrimSphere()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelSphereTools_TrimSphere_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelSphereTools::execTrimSphere)
{
	P_GET_TARRAY_REF(FModifiedVoxelValue,Z_Param_Out_ModifiedValues);
	P_GET_STRUCT_REF(FVoxelIntBox,Z_Param_Out_EditedBounds);
	P_GET_OBJECT(AVoxelWorld,Z_Param_VoxelWorld);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_Position);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_Normal);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Radius);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Falloff);
	P_GET_UBOOL(Z_Param_bAdditive);
	P_GET_UBOOL(Z_Param_bMultiThreaded);
	P_GET_UBOOL(Z_Param_bRecordModifiedValues);
	P_GET_UBOOL(Z_Param_bConvertToVoxelSpace);
	P_GET_UBOOL(Z_Param_bUpdateRender);
	P_FINISH;
	P_NATIVE_BEGIN;
	UVoxelSphereTools::TrimSphere(Z_Param_Out_ModifiedValues,Z_Param_Out_EditedBounds,Z_Param_VoxelWorld,Z_Param_Out_Position,Z_Param_Out_Normal,Z_Param_Radius,Z_Param_Falloff,Z_Param_bAdditive,Z_Param_bMultiThreaded,Z_Param_bRecordModifiedValues,Z_Param_bConvertToVoxelSpace,Z_Param_bUpdateRender);
	P_NATIVE_END;
}
// ********** End Class UVoxelSphereTools Function TrimSphere **************************************

// ********** Begin Class UVoxelSphereTools Function TrimSphereAsync *******************************
struct Z_Construct_UFunction_UVoxelSphereTools_TrimSphereAsync_Statics
{
	struct VoxelSphereTools_eventTrimSphereAsync_Parms
	{
		UObject* WorldContextObject;
		FLatentActionInfo LatentInfo;
		TArray<FModifiedVoxelValue> ModifiedValues;
		FVoxelIntBox EditedBounds;
		AVoxelWorld* VoxelWorld;
		FVector Position;
		FVector Normal;
		float Radius;
		float Falloff;
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
		{ "Category", "Voxel|Tools|Sphere Tools" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Trim tool: used to quickly flatten large portions of the world\n\x09 * Best results are obtained when Position and Normal are averages: use FindProjectionVoxels to do some linetraces, and then GetAveragePosition/Normal on the result\n\x09 * This ensures the tool usage is relatively smooth.\n\x09 * Works by stamping a shape into the world (if bAdditive = false, the stamp is destructive: voxels are removed instead)\n\x09 * The shape is the smooth union of a sphere SDF and a plane SDF. The smoothness of the union is controlled by the Falloff parameter.\n\x09 * Runs asynchronously in a background thread\n\x09 * @see TrimSphere, TrimSphereAsync and FVoxelSphereToolsImpl::TrimSphere\n\x09 * @param\x09ModifiedValues       \x09Record the Values modified by this function. Useful to track the amount of edit done, for instance to give resources when digging\n\x09 * @param\x09""EditedBounds         \x09Returns the bounds edited by this function\n\x09 * @param\x09VoxelWorld           \x09The voxel world to do the edit to\n\x09 * @param\x09Position             \x09The position of the center. In world space (unreal units) if bConvertToVoxelSpace is true. In voxel space if false.\n\x09 * @param\x09Normal               \x09The normal\n\x09 * @param\x09Radius               \x09The radius. In unreal units if bConvertToVoxelSpace is true. In voxels if false.\n\x09 * @param\x09""Falloff              \x09The falloff, between 0 and 1\n\x09 * @param\x09""bAdditive            \x09Whether to add or remove voxels\n\x09 * @param\x09""bMultiThreaded       \x09If true, multiple threads will be used to make the edit faster. Not recommended on async functions, as it might cause lag.\n\x09 * @param\x09""bRecordModifiedValues\x09If false, will not fill ModifiedValues, making the edit faster.\n\x09 * @param\x09""bConvertToVoxelSpace \x09If true, Position and Radius will be converted to voxel space. Else they will be used directly.\n\x09 * @param\x09""bUpdateRender        \x09If false, will only edit the data and not update the render. Rarely needed.\n\x09 * @param\x09""bHideLatentWarnings  \x09Hide latent warnings caused by calling a node before its previous call completion.\n\x09*/" },
#endif
		{ "CPP_Default_bConvertToVoxelSpace", "true" },
		{ "CPP_Default_bHideLatentWarnings", "false" },
		{ "CPP_Default_bMultiThreaded", "false" },
		{ "CPP_Default_bRecordModifiedValues", "true" },
		{ "CPP_Default_bUpdateRender", "true" },
		{ "DefaultToSelf", "VoxelWorld" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Public/VoxelTools/Gen/VoxelSphereTools.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Trim tool: used to quickly flatten large portions of the world\nBest results are obtained when Position and Normal are averages: use FindProjectionVoxels to do some linetraces, and then GetAveragePosition/Normal on the result\nThis ensures the tool usage is relatively smooth.\nWorks by stamping a shape into the world (if bAdditive = false, the stamp is destructive: voxels are removed instead)\nThe shape is the smooth union of a sphere SDF and a plane SDF. The smoothness of the union is controlled by the Falloff parameter.\nRuns asynchronously in a background thread\n@see TrimSphere, TrimSphereAsync and FVoxelSphereToolsImpl::TrimSphere\n@param       ModifiedValues          Record the Values modified by this function. Useful to track the amount of edit done, for instance to give resources when digging\n@param       EditedBounds            Returns the bounds edited by this function\n@param       VoxelWorld              The voxel world to do the edit to\n@param       Position                The position of the center. In world space (unreal units) if bConvertToVoxelSpace is true. In voxel space if false.\n@param       Normal                  The normal\n@param       Radius                  The radius. In unreal units if bConvertToVoxelSpace is true. In voxels if false.\n@param       Falloff                 The falloff, between 0 and 1\n@param       bAdditive               Whether to add or remove voxels\n@param       bMultiThreaded          If true, multiple threads will be used to make the edit faster. Not recommended on async functions, as it might cause lag.\n@param       bRecordModifiedValues   If false, will not fill ModifiedValues, making the edit faster.\n@param       bConvertToVoxelSpace    If true, Position and Radius will be converted to voxel space. Else they will be used directly.\n@param       bUpdateRender           If false, will only edit the data and not update the render. Rarely needed.\n@param       bHideLatentWarnings     Hide latent warnings caused by calling a node before its previous call completion." },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Normal_MetaData[] = {
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
	static const UECodeGen_Private::FStructPropertyParams NewProp_Normal;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Falloff;
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
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelSphereTools_TrimSphereAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelSphereTools_eventTrimSphereAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSphereTools_TrimSphereAsync_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelSphereTools_eventTrimSphereAsync_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(0, nullptr) }; // 4146275481
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSphereTools_TrimSphereAsync_Statics::NewProp_ModifiedValues_Inner = { "ModifiedValues", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FModifiedVoxelValue, METADATA_PARAMS(0, nullptr) }; // 1075743150
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVoxelSphereTools_TrimSphereAsync_Statics::NewProp_ModifiedValues = { "ModifiedValues", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelSphereTools_eventTrimSphereAsync_Parms, ModifiedValues), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 1075743150
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSphereTools_TrimSphereAsync_Statics::NewProp_EditedBounds = { "EditedBounds", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelSphereTools_eventTrimSphereAsync_Parms, EditedBounds), Z_Construct_UScriptStruct_FVoxelIntBox, METADATA_PARAMS(0, nullptr) }; // 3520536583
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelSphereTools_TrimSphereAsync_Statics::NewProp_VoxelWorld = { "VoxelWorld", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelSphereTools_eventTrimSphereAsync_Parms, VoxelWorld), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSphereTools_TrimSphereAsync_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelSphereTools_eventTrimSphereAsync_Parms, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Position_MetaData), NewProp_Position_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSphereTools_TrimSphereAsync_Statics::NewProp_Normal = { "Normal", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelSphereTools_eventTrimSphereAsync_Parms, Normal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Normal_MetaData), NewProp_Normal_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoxelSphereTools_TrimSphereAsync_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelSphereTools_eventTrimSphereAsync_Parms, Radius), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoxelSphereTools_TrimSphereAsync_Statics::NewProp_Falloff = { "Falloff", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelSphereTools_eventTrimSphereAsync_Parms, Falloff), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UVoxelSphereTools_TrimSphereAsync_Statics::NewProp_bAdditive_SetBit(void* Obj)
{
	((VoxelSphereTools_eventTrimSphereAsync_Parms*)Obj)->bAdditive = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelSphereTools_TrimSphereAsync_Statics::NewProp_bAdditive = { "bAdditive", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VoxelSphereTools_eventTrimSphereAsync_Parms), &Z_Construct_UFunction_UVoxelSphereTools_TrimSphereAsync_Statics::NewProp_bAdditive_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UVoxelSphereTools_TrimSphereAsync_Statics::NewProp_bMultiThreaded_SetBit(void* Obj)
{
	((VoxelSphereTools_eventTrimSphereAsync_Parms*)Obj)->bMultiThreaded = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelSphereTools_TrimSphereAsync_Statics::NewProp_bMultiThreaded = { "bMultiThreaded", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VoxelSphereTools_eventTrimSphereAsync_Parms), &Z_Construct_UFunction_UVoxelSphereTools_TrimSphereAsync_Statics::NewProp_bMultiThreaded_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UVoxelSphereTools_TrimSphereAsync_Statics::NewProp_bRecordModifiedValues_SetBit(void* Obj)
{
	((VoxelSphereTools_eventTrimSphereAsync_Parms*)Obj)->bRecordModifiedValues = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelSphereTools_TrimSphereAsync_Statics::NewProp_bRecordModifiedValues = { "bRecordModifiedValues", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VoxelSphereTools_eventTrimSphereAsync_Parms), &Z_Construct_UFunction_UVoxelSphereTools_TrimSphereAsync_Statics::NewProp_bRecordModifiedValues_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UVoxelSphereTools_TrimSphereAsync_Statics::NewProp_bConvertToVoxelSpace_SetBit(void* Obj)
{
	((VoxelSphereTools_eventTrimSphereAsync_Parms*)Obj)->bConvertToVoxelSpace = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelSphereTools_TrimSphereAsync_Statics::NewProp_bConvertToVoxelSpace = { "bConvertToVoxelSpace", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VoxelSphereTools_eventTrimSphereAsync_Parms), &Z_Construct_UFunction_UVoxelSphereTools_TrimSphereAsync_Statics::NewProp_bConvertToVoxelSpace_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UVoxelSphereTools_TrimSphereAsync_Statics::NewProp_bUpdateRender_SetBit(void* Obj)
{
	((VoxelSphereTools_eventTrimSphereAsync_Parms*)Obj)->bUpdateRender = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelSphereTools_TrimSphereAsync_Statics::NewProp_bUpdateRender = { "bUpdateRender", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VoxelSphereTools_eventTrimSphereAsync_Parms), &Z_Construct_UFunction_UVoxelSphereTools_TrimSphereAsync_Statics::NewProp_bUpdateRender_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UVoxelSphereTools_TrimSphereAsync_Statics::NewProp_bHideLatentWarnings_SetBit(void* Obj)
{
	((VoxelSphereTools_eventTrimSphereAsync_Parms*)Obj)->bHideLatentWarnings = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelSphereTools_TrimSphereAsync_Statics::NewProp_bHideLatentWarnings = { "bHideLatentWarnings", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VoxelSphereTools_eventTrimSphereAsync_Parms), &Z_Construct_UFunction_UVoxelSphereTools_TrimSphereAsync_Statics::NewProp_bHideLatentWarnings_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelSphereTools_TrimSphereAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_TrimSphereAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_TrimSphereAsync_Statics::NewProp_LatentInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_TrimSphereAsync_Statics::NewProp_ModifiedValues_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_TrimSphereAsync_Statics::NewProp_ModifiedValues,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_TrimSphereAsync_Statics::NewProp_EditedBounds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_TrimSphereAsync_Statics::NewProp_VoxelWorld,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_TrimSphereAsync_Statics::NewProp_Position,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_TrimSphereAsync_Statics::NewProp_Normal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_TrimSphereAsync_Statics::NewProp_Radius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_TrimSphereAsync_Statics::NewProp_Falloff,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_TrimSphereAsync_Statics::NewProp_bAdditive,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_TrimSphereAsync_Statics::NewProp_bMultiThreaded,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_TrimSphereAsync_Statics::NewProp_bRecordModifiedValues,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_TrimSphereAsync_Statics::NewProp_bConvertToVoxelSpace,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_TrimSphereAsync_Statics::NewProp_bUpdateRender,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_TrimSphereAsync_Statics::NewProp_bHideLatentWarnings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSphereTools_TrimSphereAsync_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelSphereTools_TrimSphereAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelSphereTools, nullptr, "TrimSphereAsync", Z_Construct_UFunction_UVoxelSphereTools_TrimSphereAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSphereTools_TrimSphereAsync_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVoxelSphereTools_TrimSphereAsync_Statics::VoxelSphereTools_eventTrimSphereAsync_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSphereTools_TrimSphereAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelSphereTools_TrimSphereAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVoxelSphereTools_TrimSphereAsync_Statics::VoxelSphereTools_eventTrimSphereAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVoxelSphereTools_TrimSphereAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelSphereTools_TrimSphereAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelSphereTools::execTrimSphereAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
	P_GET_TARRAY_REF(FModifiedVoxelValue,Z_Param_Out_ModifiedValues);
	P_GET_STRUCT_REF(FVoxelIntBox,Z_Param_Out_EditedBounds);
	P_GET_OBJECT(AVoxelWorld,Z_Param_VoxelWorld);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_Position);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_Normal);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Radius);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Falloff);
	P_GET_UBOOL(Z_Param_bAdditive);
	P_GET_UBOOL(Z_Param_bMultiThreaded);
	P_GET_UBOOL(Z_Param_bRecordModifiedValues);
	P_GET_UBOOL(Z_Param_bConvertToVoxelSpace);
	P_GET_UBOOL(Z_Param_bUpdateRender);
	P_GET_UBOOL(Z_Param_bHideLatentWarnings);
	P_FINISH;
	P_NATIVE_BEGIN;
	UVoxelSphereTools::TrimSphereAsync(Z_Param_WorldContextObject,Z_Param_LatentInfo,Z_Param_Out_ModifiedValues,Z_Param_Out_EditedBounds,Z_Param_VoxelWorld,Z_Param_Out_Position,Z_Param_Out_Normal,Z_Param_Radius,Z_Param_Falloff,Z_Param_bAdditive,Z_Param_bMultiThreaded,Z_Param_bRecordModifiedValues,Z_Param_bConvertToVoxelSpace,Z_Param_bUpdateRender,Z_Param_bHideLatentWarnings);
	P_NATIVE_END;
}
// ********** End Class UVoxelSphereTools Function TrimSphereAsync *********************************

// ********** Begin Class UVoxelSphereTools ********************************************************
void UVoxelSphereTools::StaticRegisterNativesUVoxelSphereTools()
{
	UClass* Class = UVoxelSphereTools::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddSphere", &UVoxelSphereTools::execAddSphere },
		{ "AddSphereAsync", &UVoxelSphereTools::execAddSphereAsync },
		{ "ApplyKernelSphere", &UVoxelSphereTools::execApplyKernelSphere },
		{ "ApplyKernelSphereAsync", &UVoxelSphereTools::execApplyKernelSphereAsync },
		{ "ApplyMaterialKernelSphere", &UVoxelSphereTools::execApplyMaterialKernelSphere },
		{ "ApplyMaterialKernelSphereAsync", &UVoxelSphereTools::execApplyMaterialKernelSphereAsync },
		{ "RemoveSphere", &UVoxelSphereTools::execRemoveSphere },
		{ "RemoveSphereAsync", &UVoxelSphereTools::execRemoveSphereAsync },
		{ "RevertSphere", &UVoxelSphereTools::execRevertSphere },
		{ "RevertSphereAsync", &UVoxelSphereTools::execRevertSphereAsync },
		{ "RevertSphereToGenerator", &UVoxelSphereTools::execRevertSphereToGenerator },
		{ "RevertSphereToGeneratorAsync", &UVoxelSphereTools::execRevertSphereToGeneratorAsync },
		{ "SetMaterialSphere", &UVoxelSphereTools::execSetMaterialSphere },
		{ "SetMaterialSphereAsync", &UVoxelSphereTools::execSetMaterialSphereAsync },
		{ "SetValueSphere", &UVoxelSphereTools::execSetValueSphere },
		{ "SetValueSphereAsync", &UVoxelSphereTools::execSetValueSphereAsync },
		{ "SmoothMaterialSphere", &UVoxelSphereTools::execSmoothMaterialSphere },
		{ "SmoothMaterialSphereAsync", &UVoxelSphereTools::execSmoothMaterialSphereAsync },
		{ "SmoothSphere", &UVoxelSphereTools::execSmoothSphere },
		{ "SmoothSphereAsync", &UVoxelSphereTools::execSmoothSphereAsync },
		{ "TrimSphere", &UVoxelSphereTools::execTrimSphere },
		{ "TrimSphereAsync", &UVoxelSphereTools::execTrimSphereAsync },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UVoxelSphereTools;
UClass* UVoxelSphereTools::GetPrivateStaticClass()
{
	using TClass = UVoxelSphereTools;
	if (!Z_Registration_Info_UClass_UVoxelSphereTools.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("VoxelSphereTools"),
			Z_Registration_Info_UClass_UVoxelSphereTools.InnerSingleton,
			StaticRegisterNativesUVoxelSphereTools,
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
	return Z_Registration_Info_UClass_UVoxelSphereTools.InnerSingleton;
}
UClass* Z_Construct_UClass_UVoxelSphereTools_NoRegister()
{
	return UVoxelSphereTools::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UVoxelSphereTools_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "VoxelTools/Gen/VoxelSphereTools.h" },
		{ "ModuleRelativePath", "Public/VoxelTools/Gen/VoxelSphereTools.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UVoxelSphereTools_AddSphere, "AddSphere" }, // 3479606923
		{ &Z_Construct_UFunction_UVoxelSphereTools_AddSphereAsync, "AddSphereAsync" }, // 3005997349
		{ &Z_Construct_UFunction_UVoxelSphereTools_ApplyKernelSphere, "ApplyKernelSphere" }, // 535053857
		{ &Z_Construct_UFunction_UVoxelSphereTools_ApplyKernelSphereAsync, "ApplyKernelSphereAsync" }, // 2801100786
		{ &Z_Construct_UFunction_UVoxelSphereTools_ApplyMaterialKernelSphere, "ApplyMaterialKernelSphere" }, // 1813696392
		{ &Z_Construct_UFunction_UVoxelSphereTools_ApplyMaterialKernelSphereAsync, "ApplyMaterialKernelSphereAsync" }, // 3452748517
		{ &Z_Construct_UFunction_UVoxelSphereTools_RemoveSphere, "RemoveSphere" }, // 3690746624
		{ &Z_Construct_UFunction_UVoxelSphereTools_RemoveSphereAsync, "RemoveSphereAsync" }, // 466983815
		{ &Z_Construct_UFunction_UVoxelSphereTools_RevertSphere, "RevertSphere" }, // 854960299
		{ &Z_Construct_UFunction_UVoxelSphereTools_RevertSphereAsync, "RevertSphereAsync" }, // 1775903759
		{ &Z_Construct_UFunction_UVoxelSphereTools_RevertSphereToGenerator, "RevertSphereToGenerator" }, // 4010746633
		{ &Z_Construct_UFunction_UVoxelSphereTools_RevertSphereToGeneratorAsync, "RevertSphereToGeneratorAsync" }, // 1749516797
		{ &Z_Construct_UFunction_UVoxelSphereTools_SetMaterialSphere, "SetMaterialSphere" }, // 3014016891
		{ &Z_Construct_UFunction_UVoxelSphereTools_SetMaterialSphereAsync, "SetMaterialSphereAsync" }, // 2705623784
		{ &Z_Construct_UFunction_UVoxelSphereTools_SetValueSphere, "SetValueSphere" }, // 139949168
		{ &Z_Construct_UFunction_UVoxelSphereTools_SetValueSphereAsync, "SetValueSphereAsync" }, // 3926543619
		{ &Z_Construct_UFunction_UVoxelSphereTools_SmoothMaterialSphere, "SmoothMaterialSphere" }, // 672176748
		{ &Z_Construct_UFunction_UVoxelSphereTools_SmoothMaterialSphereAsync, "SmoothMaterialSphereAsync" }, // 376749262
		{ &Z_Construct_UFunction_UVoxelSphereTools_SmoothSphere, "SmoothSphere" }, // 4113376295
		{ &Z_Construct_UFunction_UVoxelSphereTools_SmoothSphereAsync, "SmoothSphereAsync" }, // 1230649818
		{ &Z_Construct_UFunction_UVoxelSphereTools_TrimSphere, "TrimSphere" }, // 2727471255
		{ &Z_Construct_UFunction_UVoxelSphereTools_TrimSphereAsync, "TrimSphereAsync" }, // 51774447
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelSphereTools>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UVoxelSphereTools_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UVoxelToolsBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelSphereTools_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelSphereTools_Statics::ClassParams = {
	&UVoxelSphereTools::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelSphereTools_Statics::Class_MetaDataParams), Z_Construct_UClass_UVoxelSphereTools_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVoxelSphereTools()
{
	if (!Z_Registration_Info_UClass_UVoxelSphereTools.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelSphereTools.OuterSingleton, Z_Construct_UClass_UVoxelSphereTools_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVoxelSphereTools.OuterSingleton;
}
UVoxelSphereTools::UVoxelSphereTools(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelSphereTools);
UVoxelSphereTools::~UVoxelSphereTools() {}
// ********** End Class UVoxelSphereTools **********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelTools_Gen_VoxelSphereTools_h__Script_Voxel_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UVoxelSphereTools, UVoxelSphereTools::StaticClass, TEXT("UVoxelSphereTools"), &Z_Registration_Info_UClass_UVoxelSphereTools, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelSphereTools), 82097344U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelTools_Gen_VoxelSphereTools_h__Script_Voxel_1999121455(TEXT("/Script/Voxel"),
	Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelTools_Gen_VoxelSphereTools_h__Script_Voxel_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelTools_Gen_VoxelSphereTools_h__Script_Voxel_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
