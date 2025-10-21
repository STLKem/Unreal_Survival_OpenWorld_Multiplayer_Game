// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VoxelIntBoxLibrary.h"
#include "VoxelIntBox.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeVoxelIntBoxLibrary() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntVector();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
UPackage* Z_Construct_UPackage__Script_Voxel();
VOXEL_API UClass* Z_Construct_UClass_UVoxelIntBoxLibrary();
VOXEL_API UClass* Z_Construct_UClass_UVoxelIntBoxLibrary_NoRegister();
VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelIntBox();
VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelIntBoxWithValidity();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UVoxelIntBoxLibrary Function AddBox **************************************
struct Z_Construct_UFunction_UVoxelIntBoxLibrary_AddBox_Statics
{
	struct VoxelIntBoxLibrary_eventAddBox_Parms
	{
		FVoxelIntBox Box;
		FVoxelIntBox BoxToAdd;
		FVoxelIntBox ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Math|VoxelIntBox" },
		{ "CompactNodeTitle", "+" },
		{ "ModuleRelativePath", "Public/VoxelIntBoxLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Box;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BoxToAdd;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelIntBoxLibrary_AddBox_Statics::NewProp_Box = { "Box", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelIntBoxLibrary_eventAddBox_Parms, Box), Z_Construct_UScriptStruct_FVoxelIntBox, METADATA_PARAMS(0, nullptr) }; // 3520536583
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelIntBoxLibrary_AddBox_Statics::NewProp_BoxToAdd = { "BoxToAdd", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelIntBoxLibrary_eventAddBox_Parms, BoxToAdd), Z_Construct_UScriptStruct_FVoxelIntBox, METADATA_PARAMS(0, nullptr) }; // 3520536583
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelIntBoxLibrary_AddBox_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelIntBoxLibrary_eventAddBox_Parms, ReturnValue), Z_Construct_UScriptStruct_FVoxelIntBox, METADATA_PARAMS(0, nullptr) }; // 3520536583
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelIntBoxLibrary_AddBox_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelIntBoxLibrary_AddBox_Statics::NewProp_Box,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelIntBoxLibrary_AddBox_Statics::NewProp_BoxToAdd,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelIntBoxLibrary_AddBox_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelIntBoxLibrary_AddBox_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelIntBoxLibrary_AddBox_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelIntBoxLibrary, nullptr, "AddBox", Z_Construct_UFunction_UVoxelIntBoxLibrary_AddBox_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelIntBoxLibrary_AddBox_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVoxelIntBoxLibrary_AddBox_Statics::VoxelIntBoxLibrary_eventAddBox_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelIntBoxLibrary_AddBox_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelIntBoxLibrary_AddBox_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVoxelIntBoxLibrary_AddBox_Statics::VoxelIntBoxLibrary_eventAddBox_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVoxelIntBoxLibrary_AddBox()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelIntBoxLibrary_AddBox_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelIntBoxLibrary::execAddBox)
{
	P_GET_STRUCT(FVoxelIntBox,Z_Param_Box);
	P_GET_STRUCT(FVoxelIntBox,Z_Param_BoxToAdd);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVoxelIntBox*)Z_Param__Result=UVoxelIntBoxLibrary::AddBox(Z_Param_Box,Z_Param_BoxToAdd);
	P_NATIVE_END;
}
// ********** End Class UVoxelIntBoxLibrary Function AddBox ****************************************

// ********** Begin Class UVoxelIntBoxLibrary Function AddPoint ************************************
struct Z_Construct_UFunction_UVoxelIntBoxLibrary_AddPoint_Statics
{
	struct VoxelIntBoxLibrary_eventAddPoint_Parms
	{
		FVoxelIntBox Box;
		FIntVector Point;
		FVoxelIntBox ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Math|VoxelIntBox" },
		{ "CompactNodeTitle", "+" },
		{ "ModuleRelativePath", "Public/VoxelIntBoxLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Box;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Point;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelIntBoxLibrary_AddPoint_Statics::NewProp_Box = { "Box", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelIntBoxLibrary_eventAddPoint_Parms, Box), Z_Construct_UScriptStruct_FVoxelIntBox, METADATA_PARAMS(0, nullptr) }; // 3520536583
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelIntBoxLibrary_AddPoint_Statics::NewProp_Point = { "Point", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelIntBoxLibrary_eventAddPoint_Parms, Point), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelIntBoxLibrary_AddPoint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelIntBoxLibrary_eventAddPoint_Parms, ReturnValue), Z_Construct_UScriptStruct_FVoxelIntBox, METADATA_PARAMS(0, nullptr) }; // 3520536583
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelIntBoxLibrary_AddPoint_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelIntBoxLibrary_AddPoint_Statics::NewProp_Box,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelIntBoxLibrary_AddPoint_Statics::NewProp_Point,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelIntBoxLibrary_AddPoint_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelIntBoxLibrary_AddPoint_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelIntBoxLibrary_AddPoint_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelIntBoxLibrary, nullptr, "AddPoint", Z_Construct_UFunction_UVoxelIntBoxLibrary_AddPoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelIntBoxLibrary_AddPoint_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVoxelIntBoxLibrary_AddPoint_Statics::VoxelIntBoxLibrary_eventAddPoint_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelIntBoxLibrary_AddPoint_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelIntBoxLibrary_AddPoint_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVoxelIntBoxLibrary_AddPoint_Statics::VoxelIntBoxLibrary_eventAddPoint_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVoxelIntBoxLibrary_AddPoint()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelIntBoxLibrary_AddPoint_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelIntBoxLibrary::execAddPoint)
{
	P_GET_STRUCT(FVoxelIntBox,Z_Param_Box);
	P_GET_STRUCT(FIntVector,Z_Param_Point);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVoxelIntBox*)Z_Param__Result=UVoxelIntBoxLibrary::AddPoint(Z_Param_Box,Z_Param_Point);
	P_NATIVE_END;
}
// ********** End Class UVoxelIntBoxLibrary Function AddPoint **************************************

// ********** Begin Class UVoxelIntBoxLibrary Function ApplyTransform ******************************
struct Z_Construct_UFunction_UVoxelIntBoxLibrary_ApplyTransform_Statics
{
	struct VoxelIntBoxLibrary_eventApplyTransform_Parms
	{
		FVoxelIntBox Box;
		FTransform Transform;
		FVoxelIntBox ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Math|VoxelIntBox" },
		{ "ModuleRelativePath", "Public/VoxelIntBoxLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Box;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelIntBoxLibrary_ApplyTransform_Statics::NewProp_Box = { "Box", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelIntBoxLibrary_eventApplyTransform_Parms, Box), Z_Construct_UScriptStruct_FVoxelIntBox, METADATA_PARAMS(0, nullptr) }; // 3520536583
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelIntBoxLibrary_ApplyTransform_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelIntBoxLibrary_eventApplyTransform_Parms, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelIntBoxLibrary_ApplyTransform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelIntBoxLibrary_eventApplyTransform_Parms, ReturnValue), Z_Construct_UScriptStruct_FVoxelIntBox, METADATA_PARAMS(0, nullptr) }; // 3520536583
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelIntBoxLibrary_ApplyTransform_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelIntBoxLibrary_ApplyTransform_Statics::NewProp_Box,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelIntBoxLibrary_ApplyTransform_Statics::NewProp_Transform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelIntBoxLibrary_ApplyTransform_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelIntBoxLibrary_ApplyTransform_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelIntBoxLibrary_ApplyTransform_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelIntBoxLibrary, nullptr, "ApplyTransform", Z_Construct_UFunction_UVoxelIntBoxLibrary_ApplyTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelIntBoxLibrary_ApplyTransform_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVoxelIntBoxLibrary_ApplyTransform_Statics::VoxelIntBoxLibrary_eventApplyTransform_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelIntBoxLibrary_ApplyTransform_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelIntBoxLibrary_ApplyTransform_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVoxelIntBoxLibrary_ApplyTransform_Statics::VoxelIntBoxLibrary_eventApplyTransform_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVoxelIntBoxLibrary_ApplyTransform()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelIntBoxLibrary_ApplyTransform_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelIntBoxLibrary::execApplyTransform)
{
	P_GET_STRUCT(FVoxelIntBox,Z_Param_Box);
	P_GET_STRUCT(FTransform,Z_Param_Transform);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVoxelIntBox*)Z_Param__Result=UVoxelIntBoxLibrary::ApplyTransform(Z_Param_Box,Z_Param_Transform);
	P_NATIVE_END;
}
// ********** End Class UVoxelIntBoxLibrary Function ApplyTransform ********************************

// ********** Begin Class UVoxelIntBoxLibrary Function BreakIntBox *********************************
struct Z_Construct_UFunction_UVoxelIntBoxLibrary_BreakIntBox_Statics
{
	struct VoxelIntBoxLibrary_eventBreakIntBox_Parms
	{
		FVoxelIntBox Box;
		FIntVector Min;
		FIntVector Max;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Math|VoxelIntBox" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Breaks an Int Box */" },
#endif
		{ "ModuleRelativePath", "Public/VoxelIntBoxLibrary.h" },
		{ "NativeBreakFunc", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Breaks an Int Box" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Box;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Min;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Max;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelIntBoxLibrary_BreakIntBox_Statics::NewProp_Box = { "Box", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelIntBoxLibrary_eventBreakIntBox_Parms, Box), Z_Construct_UScriptStruct_FVoxelIntBox, METADATA_PARAMS(0, nullptr) }; // 3520536583
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelIntBoxLibrary_BreakIntBox_Statics::NewProp_Min = { "Min", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelIntBoxLibrary_eventBreakIntBox_Parms, Min), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelIntBoxLibrary_BreakIntBox_Statics::NewProp_Max = { "Max", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelIntBoxLibrary_eventBreakIntBox_Parms, Max), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelIntBoxLibrary_BreakIntBox_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelIntBoxLibrary_BreakIntBox_Statics::NewProp_Box,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelIntBoxLibrary_BreakIntBox_Statics::NewProp_Min,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelIntBoxLibrary_BreakIntBox_Statics::NewProp_Max,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelIntBoxLibrary_BreakIntBox_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelIntBoxLibrary_BreakIntBox_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelIntBoxLibrary, nullptr, "BreakIntBox", Z_Construct_UFunction_UVoxelIntBoxLibrary_BreakIntBox_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelIntBoxLibrary_BreakIntBox_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVoxelIntBoxLibrary_BreakIntBox_Statics::VoxelIntBoxLibrary_eventBreakIntBox_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelIntBoxLibrary_BreakIntBox_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelIntBoxLibrary_BreakIntBox_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVoxelIntBoxLibrary_BreakIntBox_Statics::VoxelIntBoxLibrary_eventBreakIntBox_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVoxelIntBoxLibrary_BreakIntBox()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelIntBoxLibrary_BreakIntBox_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelIntBoxLibrary::execBreakIntBox)
{
	P_GET_STRUCT(FVoxelIntBox,Z_Param_Box);
	P_GET_STRUCT_REF(FIntVector,Z_Param_Out_Min);
	P_GET_STRUCT_REF(FIntVector,Z_Param_Out_Max);
	P_FINISH;
	P_NATIVE_BEGIN;
	UVoxelIntBoxLibrary::BreakIntBox(Z_Param_Box,Z_Param_Out_Min,Z_Param_Out_Max);
	P_NATIVE_END;
}
// ********** End Class UVoxelIntBoxLibrary Function BreakIntBox ***********************************

// ********** Begin Class UVoxelIntBoxLibrary Function BreakIntBoxWithValidity *********************
struct Z_Construct_UFunction_UVoxelIntBoxLibrary_BreakIntBoxWithValidity_Statics
{
	struct VoxelIntBoxLibrary_eventBreakIntBoxWithValidity_Parms
	{
		FVoxelIntBoxWithValidity BoxWithValidity;
		FVoxelIntBox Box;
		bool bIsValid;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Math|VoxelIntBox" },
		{ "ModuleRelativePath", "Public/VoxelIntBoxLibrary.h" },
		{ "NativeBreakFunc", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_BoxWithValidity;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Box;
	static void NewProp_bIsValid_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsValid;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelIntBoxLibrary_BreakIntBoxWithValidity_Statics::NewProp_BoxWithValidity = { "BoxWithValidity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelIntBoxLibrary_eventBreakIntBoxWithValidity_Parms, BoxWithValidity), Z_Construct_UScriptStruct_FVoxelIntBoxWithValidity, METADATA_PARAMS(0, nullptr) }; // 3067770411
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelIntBoxLibrary_BreakIntBoxWithValidity_Statics::NewProp_Box = { "Box", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelIntBoxLibrary_eventBreakIntBoxWithValidity_Parms, Box), Z_Construct_UScriptStruct_FVoxelIntBox, METADATA_PARAMS(0, nullptr) }; // 3520536583
void Z_Construct_UFunction_UVoxelIntBoxLibrary_BreakIntBoxWithValidity_Statics::NewProp_bIsValid_SetBit(void* Obj)
{
	((VoxelIntBoxLibrary_eventBreakIntBoxWithValidity_Parms*)Obj)->bIsValid = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelIntBoxLibrary_BreakIntBoxWithValidity_Statics::NewProp_bIsValid = { "bIsValid", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VoxelIntBoxLibrary_eventBreakIntBoxWithValidity_Parms), &Z_Construct_UFunction_UVoxelIntBoxLibrary_BreakIntBoxWithValidity_Statics::NewProp_bIsValid_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelIntBoxLibrary_BreakIntBoxWithValidity_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelIntBoxLibrary_BreakIntBoxWithValidity_Statics::NewProp_BoxWithValidity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelIntBoxLibrary_BreakIntBoxWithValidity_Statics::NewProp_Box,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelIntBoxLibrary_BreakIntBoxWithValidity_Statics::NewProp_bIsValid,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelIntBoxLibrary_BreakIntBoxWithValidity_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelIntBoxLibrary_BreakIntBoxWithValidity_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelIntBoxLibrary, nullptr, "BreakIntBoxWithValidity", Z_Construct_UFunction_UVoxelIntBoxLibrary_BreakIntBoxWithValidity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelIntBoxLibrary_BreakIntBoxWithValidity_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVoxelIntBoxLibrary_BreakIntBoxWithValidity_Statics::VoxelIntBoxLibrary_eventBreakIntBoxWithValidity_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelIntBoxLibrary_BreakIntBoxWithValidity_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelIntBoxLibrary_BreakIntBoxWithValidity_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVoxelIntBoxLibrary_BreakIntBoxWithValidity_Statics::VoxelIntBoxLibrary_eventBreakIntBoxWithValidity_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVoxelIntBoxLibrary_BreakIntBoxWithValidity()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelIntBoxLibrary_BreakIntBoxWithValidity_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelIntBoxLibrary::execBreakIntBoxWithValidity)
{
	P_GET_STRUCT(FVoxelIntBoxWithValidity,Z_Param_BoxWithValidity);
	P_GET_STRUCT_REF(FVoxelIntBox,Z_Param_Out_Box);
	P_GET_UBOOL_REF(Z_Param_Out_bIsValid);
	P_FINISH;
	P_NATIVE_BEGIN;
	UVoxelIntBoxLibrary::BreakIntBoxWithValidity(Z_Param_BoxWithValidity,Z_Param_Out_Box,Z_Param_Out_bIsValid);
	P_NATIVE_END;
}
// ********** End Class UVoxelIntBoxLibrary Function BreakIntBoxWithValidity ***********************

// ********** Begin Class UVoxelIntBoxLibrary Function Center **************************************
struct Z_Construct_UFunction_UVoxelIntBoxLibrary_Center_Statics
{
	struct VoxelIntBoxLibrary_eventCenter_Parms
	{
		FVoxelIntBox Box;
		FVoxelIntBox ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Math|VoxelIntBox" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Will move the box so that GetCenter = 0,0,0. Will extend it if its size is odd\n" },
#endif
		{ "ModuleRelativePath", "Public/VoxelIntBoxLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Will move the box so that GetCenter = 0,0,0. Will extend it if its size is odd" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Box;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelIntBoxLibrary_Center_Statics::NewProp_Box = { "Box", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelIntBoxLibrary_eventCenter_Parms, Box), Z_Construct_UScriptStruct_FVoxelIntBox, METADATA_PARAMS(0, nullptr) }; // 3520536583
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelIntBoxLibrary_Center_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelIntBoxLibrary_eventCenter_Parms, ReturnValue), Z_Construct_UScriptStruct_FVoxelIntBox, METADATA_PARAMS(0, nullptr) }; // 3520536583
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelIntBoxLibrary_Center_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelIntBoxLibrary_Center_Statics::NewProp_Box,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelIntBoxLibrary_Center_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelIntBoxLibrary_Center_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelIntBoxLibrary_Center_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelIntBoxLibrary, nullptr, "Center", Z_Construct_UFunction_UVoxelIntBoxLibrary_Center_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelIntBoxLibrary_Center_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVoxelIntBoxLibrary_Center_Statics::VoxelIntBoxLibrary_eventCenter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelIntBoxLibrary_Center_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelIntBoxLibrary_Center_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVoxelIntBoxLibrary_Center_Statics::VoxelIntBoxLibrary_eventCenter_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVoxelIntBoxLibrary_Center()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelIntBoxLibrary_Center_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelIntBoxLibrary::execCenter)
{
	P_GET_STRUCT(FVoxelIntBox,Z_Param_Box);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVoxelIntBox*)Z_Param__Result=UVoxelIntBoxLibrary::Center(Z_Param_Box);
	P_NATIVE_END;
}
// ********** End Class UVoxelIntBoxLibrary Function Center ****************************************

// ********** Begin Class UVoxelIntBoxLibrary Function Contains ************************************
struct Z_Construct_UFunction_UVoxelIntBoxLibrary_Contains_Statics
{
	struct VoxelIntBoxLibrary_eventContains_Parms
	{
		FVoxelIntBox Box;
		FVoxelIntBox Other;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Math|VoxelIntBox" },
		{ "ModuleRelativePath", "Public/VoxelIntBoxLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Box;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Other;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelIntBoxLibrary_Contains_Statics::NewProp_Box = { "Box", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelIntBoxLibrary_eventContains_Parms, Box), Z_Construct_UScriptStruct_FVoxelIntBox, METADATA_PARAMS(0, nullptr) }; // 3520536583
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelIntBoxLibrary_Contains_Statics::NewProp_Other = { "Other", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelIntBoxLibrary_eventContains_Parms, Other), Z_Construct_UScriptStruct_FVoxelIntBox, METADATA_PARAMS(0, nullptr) }; // 3520536583
void Z_Construct_UFunction_UVoxelIntBoxLibrary_Contains_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((VoxelIntBoxLibrary_eventContains_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelIntBoxLibrary_Contains_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VoxelIntBoxLibrary_eventContains_Parms), &Z_Construct_UFunction_UVoxelIntBoxLibrary_Contains_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelIntBoxLibrary_Contains_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelIntBoxLibrary_Contains_Statics::NewProp_Box,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelIntBoxLibrary_Contains_Statics::NewProp_Other,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelIntBoxLibrary_Contains_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelIntBoxLibrary_Contains_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelIntBoxLibrary_Contains_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelIntBoxLibrary, nullptr, "Contains", Z_Construct_UFunction_UVoxelIntBoxLibrary_Contains_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelIntBoxLibrary_Contains_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVoxelIntBoxLibrary_Contains_Statics::VoxelIntBoxLibrary_eventContains_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelIntBoxLibrary_Contains_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelIntBoxLibrary_Contains_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVoxelIntBoxLibrary_Contains_Statics::VoxelIntBoxLibrary_eventContains_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVoxelIntBoxLibrary_Contains()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelIntBoxLibrary_Contains_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelIntBoxLibrary::execContains)
{
	P_GET_STRUCT(FVoxelIntBox,Z_Param_Box);
	P_GET_STRUCT(FVoxelIntBox,Z_Param_Other);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UVoxelIntBoxLibrary::Contains(Z_Param_Box,Z_Param_Other);
	P_NATIVE_END;
}
// ********** End Class UVoxelIntBoxLibrary Function Contains **************************************

// ********** Begin Class UVoxelIntBoxLibrary Function Conv_IntBoxToString *************************
struct Z_Construct_UFunction_UVoxelIntBoxLibrary_Conv_IntBoxToString_Statics
{
	struct VoxelIntBoxLibrary_eventConv_IntBoxToString_Parms
	{
		FVoxelIntBox IntBox;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintAutocast", "" },
		{ "Category", "Utilities|String" },
		{ "CompactNodeTitle", "->" },
		{ "DisplayName", "ToString (VoxelIntBox)" },
		{ "ModuleRelativePath", "Public/VoxelIntBoxLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_IntBox;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelIntBoxLibrary_Conv_IntBoxToString_Statics::NewProp_IntBox = { "IntBox", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelIntBoxLibrary_eventConv_IntBoxToString_Parms, IntBox), Z_Construct_UScriptStruct_FVoxelIntBox, METADATA_PARAMS(0, nullptr) }; // 3520536583
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVoxelIntBoxLibrary_Conv_IntBoxToString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelIntBoxLibrary_eventConv_IntBoxToString_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelIntBoxLibrary_Conv_IntBoxToString_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelIntBoxLibrary_Conv_IntBoxToString_Statics::NewProp_IntBox,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelIntBoxLibrary_Conv_IntBoxToString_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelIntBoxLibrary_Conv_IntBoxToString_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelIntBoxLibrary_Conv_IntBoxToString_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelIntBoxLibrary, nullptr, "Conv_IntBoxToString", Z_Construct_UFunction_UVoxelIntBoxLibrary_Conv_IntBoxToString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelIntBoxLibrary_Conv_IntBoxToString_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVoxelIntBoxLibrary_Conv_IntBoxToString_Statics::VoxelIntBoxLibrary_eventConv_IntBoxToString_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelIntBoxLibrary_Conv_IntBoxToString_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelIntBoxLibrary_Conv_IntBoxToString_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVoxelIntBoxLibrary_Conv_IntBoxToString_Statics::VoxelIntBoxLibrary_eventConv_IntBoxToString_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVoxelIntBoxLibrary_Conv_IntBoxToString()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelIntBoxLibrary_Conv_IntBoxToString_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelIntBoxLibrary::execConv_IntBoxToString)
{
	P_GET_STRUCT(FVoxelIntBox,Z_Param_IntBox);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=UVoxelIntBoxLibrary::Conv_IntBoxToString(Z_Param_IntBox);
	P_NATIVE_END;
}
// ********** End Class UVoxelIntBoxLibrary Function Conv_IntBoxToString ***************************

// ********** Begin Class UVoxelIntBoxLibrary Function EqualEqual_IntBoxIntBox *********************
struct Z_Construct_UFunction_UVoxelIntBoxLibrary_EqualEqual_IntBoxIntBox_Statics
{
	struct VoxelIntBoxLibrary_eventEqualEqual_IntBoxIntBox_Parms
	{
		FVoxelIntBox A;
		FVoxelIntBox B;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Math|VoxelIntBox" },
		{ "CompactNodeTitle", "==" },
		{ "DisplayName", "Equal (VoxelIntBox)" },
		{ "Keywords", "== equal" },
		{ "ModuleRelativePath", "Public/VoxelIntBoxLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_A;
	static const UECodeGen_Private::FStructPropertyParams NewProp_B;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelIntBoxLibrary_EqualEqual_IntBoxIntBox_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelIntBoxLibrary_eventEqualEqual_IntBoxIntBox_Parms, A), Z_Construct_UScriptStruct_FVoxelIntBox, METADATA_PARAMS(0, nullptr) }; // 3520536583
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelIntBoxLibrary_EqualEqual_IntBoxIntBox_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelIntBoxLibrary_eventEqualEqual_IntBoxIntBox_Parms, B), Z_Construct_UScriptStruct_FVoxelIntBox, METADATA_PARAMS(0, nullptr) }; // 3520536583
void Z_Construct_UFunction_UVoxelIntBoxLibrary_EqualEqual_IntBoxIntBox_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((VoxelIntBoxLibrary_eventEqualEqual_IntBoxIntBox_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelIntBoxLibrary_EqualEqual_IntBoxIntBox_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VoxelIntBoxLibrary_eventEqualEqual_IntBoxIntBox_Parms), &Z_Construct_UFunction_UVoxelIntBoxLibrary_EqualEqual_IntBoxIntBox_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelIntBoxLibrary_EqualEqual_IntBoxIntBox_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelIntBoxLibrary_EqualEqual_IntBoxIntBox_Statics::NewProp_A,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelIntBoxLibrary_EqualEqual_IntBoxIntBox_Statics::NewProp_B,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelIntBoxLibrary_EqualEqual_IntBoxIntBox_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelIntBoxLibrary_EqualEqual_IntBoxIntBox_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelIntBoxLibrary_EqualEqual_IntBoxIntBox_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelIntBoxLibrary, nullptr, "EqualEqual_IntBoxIntBox", Z_Construct_UFunction_UVoxelIntBoxLibrary_EqualEqual_IntBoxIntBox_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelIntBoxLibrary_EqualEqual_IntBoxIntBox_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVoxelIntBoxLibrary_EqualEqual_IntBoxIntBox_Statics::VoxelIntBoxLibrary_eventEqualEqual_IntBoxIntBox_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelIntBoxLibrary_EqualEqual_IntBoxIntBox_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelIntBoxLibrary_EqualEqual_IntBoxIntBox_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVoxelIntBoxLibrary_EqualEqual_IntBoxIntBox_Statics::VoxelIntBoxLibrary_eventEqualEqual_IntBoxIntBox_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVoxelIntBoxLibrary_EqualEqual_IntBoxIntBox()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelIntBoxLibrary_EqualEqual_IntBoxIntBox_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelIntBoxLibrary::execEqualEqual_IntBoxIntBox)
{
	P_GET_STRUCT(FVoxelIntBox,Z_Param_A);
	P_GET_STRUCT(FVoxelIntBox,Z_Param_B);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UVoxelIntBoxLibrary::EqualEqual_IntBoxIntBox(Z_Param_A,Z_Param_B);
	P_NATIVE_END;
}
// ********** End Class UVoxelIntBoxLibrary Function EqualEqual_IntBoxIntBox ***********************

// ********** Begin Class UVoxelIntBoxLibrary Function Extend **************************************
struct Z_Construct_UFunction_UVoxelIntBoxLibrary_Extend_Statics
{
	struct VoxelIntBoxLibrary_eventExtend_Parms
	{
		FVoxelIntBox Box;
		int32 Extent;
		FVoxelIntBox ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Math|VoxelIntBox" },
		{ "ModuleRelativePath", "Public/VoxelIntBoxLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Box;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Extent;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelIntBoxLibrary_Extend_Statics::NewProp_Box = { "Box", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelIntBoxLibrary_eventExtend_Parms, Box), Z_Construct_UScriptStruct_FVoxelIntBox, METADATA_PARAMS(0, nullptr) }; // 3520536583
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVoxelIntBoxLibrary_Extend_Statics::NewProp_Extent = { "Extent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelIntBoxLibrary_eventExtend_Parms, Extent), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelIntBoxLibrary_Extend_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelIntBoxLibrary_eventExtend_Parms, ReturnValue), Z_Construct_UScriptStruct_FVoxelIntBox, METADATA_PARAMS(0, nullptr) }; // 3520536583
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelIntBoxLibrary_Extend_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelIntBoxLibrary_Extend_Statics::NewProp_Box,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelIntBoxLibrary_Extend_Statics::NewProp_Extent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelIntBoxLibrary_Extend_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelIntBoxLibrary_Extend_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelIntBoxLibrary_Extend_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelIntBoxLibrary, nullptr, "Extend", Z_Construct_UFunction_UVoxelIntBoxLibrary_Extend_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelIntBoxLibrary_Extend_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVoxelIntBoxLibrary_Extend_Statics::VoxelIntBoxLibrary_eventExtend_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelIntBoxLibrary_Extend_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelIntBoxLibrary_Extend_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVoxelIntBoxLibrary_Extend_Statics::VoxelIntBoxLibrary_eventExtend_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVoxelIntBoxLibrary_Extend()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelIntBoxLibrary_Extend_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelIntBoxLibrary::execExtend)
{
	P_GET_STRUCT(FVoxelIntBox,Z_Param_Box);
	P_GET_PROPERTY(FIntProperty,Z_Param_Extent);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVoxelIntBox*)Z_Param__Result=UVoxelIntBoxLibrary::Extend(Z_Param_Box,Z_Param_Extent);
	P_NATIVE_END;
}
// ********** End Class UVoxelIntBoxLibrary Function Extend ****************************************

// ********** Begin Class UVoxelIntBoxLibrary Function Extend_IntVector ****************************
struct Z_Construct_UFunction_UVoxelIntBoxLibrary_Extend_IntVector_Statics
{
	struct VoxelIntBoxLibrary_eventExtend_IntVector_Parms
	{
		FVoxelIntBox Box;
		FIntVector Extent;
		FVoxelIntBox ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Math|VoxelIntBox" },
		{ "ModuleRelativePath", "Public/VoxelIntBoxLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Box;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Extent;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelIntBoxLibrary_Extend_IntVector_Statics::NewProp_Box = { "Box", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelIntBoxLibrary_eventExtend_IntVector_Parms, Box), Z_Construct_UScriptStruct_FVoxelIntBox, METADATA_PARAMS(0, nullptr) }; // 3520536583
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelIntBoxLibrary_Extend_IntVector_Statics::NewProp_Extent = { "Extent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelIntBoxLibrary_eventExtend_IntVector_Parms, Extent), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelIntBoxLibrary_Extend_IntVector_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelIntBoxLibrary_eventExtend_IntVector_Parms, ReturnValue), Z_Construct_UScriptStruct_FVoxelIntBox, METADATA_PARAMS(0, nullptr) }; // 3520536583
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelIntBoxLibrary_Extend_IntVector_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelIntBoxLibrary_Extend_IntVector_Statics::NewProp_Box,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelIntBoxLibrary_Extend_IntVector_Statics::NewProp_Extent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelIntBoxLibrary_Extend_IntVector_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelIntBoxLibrary_Extend_IntVector_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelIntBoxLibrary_Extend_IntVector_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelIntBoxLibrary, nullptr, "Extend_IntVector", Z_Construct_UFunction_UVoxelIntBoxLibrary_Extend_IntVector_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelIntBoxLibrary_Extend_IntVector_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVoxelIntBoxLibrary_Extend_IntVector_Statics::VoxelIntBoxLibrary_eventExtend_IntVector_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelIntBoxLibrary_Extend_IntVector_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelIntBoxLibrary_Extend_IntVector_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVoxelIntBoxLibrary_Extend_IntVector_Statics::VoxelIntBoxLibrary_eventExtend_IntVector_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVoxelIntBoxLibrary_Extend_IntVector()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelIntBoxLibrary_Extend_IntVector_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelIntBoxLibrary::execExtend_IntVector)
{
	P_GET_STRUCT(FVoxelIntBox,Z_Param_Box);
	P_GET_STRUCT(FIntVector,Z_Param_Extent);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVoxelIntBox*)Z_Param__Result=UVoxelIntBoxLibrary::Extend_IntVector(Z_Param_Box,Z_Param_Extent);
	P_NATIVE_END;
}
// ********** End Class UVoxelIntBoxLibrary Function Extend_IntVector ******************************

// ********** Begin Class UVoxelIntBoxLibrary Function GetCenter ***********************************
struct Z_Construct_UFunction_UVoxelIntBoxLibrary_GetCenter_Statics
{
	struct VoxelIntBoxLibrary_eventGetCenter_Parms
	{
		FVoxelIntBox Box;
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Math|VoxelIntBox" },
		{ "ModuleRelativePath", "Public/VoxelIntBoxLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Box;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelIntBoxLibrary_GetCenter_Statics::NewProp_Box = { "Box", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelIntBoxLibrary_eventGetCenter_Parms, Box), Z_Construct_UScriptStruct_FVoxelIntBox, METADATA_PARAMS(0, nullptr) }; // 3520536583
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelIntBoxLibrary_GetCenter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelIntBoxLibrary_eventGetCenter_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelIntBoxLibrary_GetCenter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelIntBoxLibrary_GetCenter_Statics::NewProp_Box,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelIntBoxLibrary_GetCenter_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelIntBoxLibrary_GetCenter_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelIntBoxLibrary_GetCenter_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelIntBoxLibrary, nullptr, "GetCenter", Z_Construct_UFunction_UVoxelIntBoxLibrary_GetCenter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelIntBoxLibrary_GetCenter_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVoxelIntBoxLibrary_GetCenter_Statics::VoxelIntBoxLibrary_eventGetCenter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelIntBoxLibrary_GetCenter_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelIntBoxLibrary_GetCenter_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVoxelIntBoxLibrary_GetCenter_Statics::VoxelIntBoxLibrary_eventGetCenter_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVoxelIntBoxLibrary_GetCenter()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelIntBoxLibrary_GetCenter_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelIntBoxLibrary::execGetCenter)
{
	P_GET_STRUCT(FVoxelIntBox,Z_Param_Box);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=UVoxelIntBoxLibrary::GetCenter(Z_Param_Box);
	P_NATIVE_END;
}
// ********** End Class UVoxelIntBoxLibrary Function GetCenter *************************************

// ********** Begin Class UVoxelIntBoxLibrary Function GetCorners **********************************
struct Z_Construct_UFunction_UVoxelIntBoxLibrary_GetCorners_Statics
{
	struct VoxelIntBoxLibrary_eventGetCorners_Parms
	{
		FVoxelIntBox Box;
		TArray<FIntVector> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Math|VoxelIntBox" },
		{ "ModuleRelativePath", "Public/VoxelIntBoxLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Box;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelIntBoxLibrary_GetCorners_Statics::NewProp_Box = { "Box", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelIntBoxLibrary_eventGetCorners_Parms, Box), Z_Construct_UScriptStruct_FVoxelIntBox, METADATA_PARAMS(0, nullptr) }; // 3520536583
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelIntBoxLibrary_GetCorners_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVoxelIntBoxLibrary_GetCorners_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelIntBoxLibrary_eventGetCorners_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelIntBoxLibrary_GetCorners_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelIntBoxLibrary_GetCorners_Statics::NewProp_Box,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelIntBoxLibrary_GetCorners_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelIntBoxLibrary_GetCorners_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelIntBoxLibrary_GetCorners_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelIntBoxLibrary_GetCorners_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelIntBoxLibrary, nullptr, "GetCorners", Z_Construct_UFunction_UVoxelIntBoxLibrary_GetCorners_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelIntBoxLibrary_GetCorners_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVoxelIntBoxLibrary_GetCorners_Statics::VoxelIntBoxLibrary_eventGetCorners_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelIntBoxLibrary_GetCorners_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelIntBoxLibrary_GetCorners_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVoxelIntBoxLibrary_GetCorners_Statics::VoxelIntBoxLibrary_eventGetCorners_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVoxelIntBoxLibrary_GetCorners()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelIntBoxLibrary_GetCorners_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelIntBoxLibrary::execGetCorners)
{
	P_GET_STRUCT(FVoxelIntBox,Z_Param_Box);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FIntVector>*)Z_Param__Result=UVoxelIntBoxLibrary::GetCorners(Z_Param_Box);
	P_NATIVE_END;
}
// ********** End Class UVoxelIntBoxLibrary Function GetCorners ************************************

// ********** Begin Class UVoxelIntBoxLibrary Function GetSize *************************************
struct Z_Construct_UFunction_UVoxelIntBoxLibrary_GetSize_Statics
{
	struct VoxelIntBoxLibrary_eventGetSize_Parms
	{
		FVoxelIntBox Box;
		FIntVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Math|VoxelIntBox" },
		{ "ModuleRelativePath", "Public/VoxelIntBoxLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Box;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelIntBoxLibrary_GetSize_Statics::NewProp_Box = { "Box", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelIntBoxLibrary_eventGetSize_Parms, Box), Z_Construct_UScriptStruct_FVoxelIntBox, METADATA_PARAMS(0, nullptr) }; // 3520536583
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelIntBoxLibrary_GetSize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelIntBoxLibrary_eventGetSize_Parms, ReturnValue), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelIntBoxLibrary_GetSize_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelIntBoxLibrary_GetSize_Statics::NewProp_Box,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelIntBoxLibrary_GetSize_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelIntBoxLibrary_GetSize_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelIntBoxLibrary_GetSize_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelIntBoxLibrary, nullptr, "GetSize", Z_Construct_UFunction_UVoxelIntBoxLibrary_GetSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelIntBoxLibrary_GetSize_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVoxelIntBoxLibrary_GetSize_Statics::VoxelIntBoxLibrary_eventGetSize_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelIntBoxLibrary_GetSize_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelIntBoxLibrary_GetSize_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVoxelIntBoxLibrary_GetSize_Statics::VoxelIntBoxLibrary_eventGetSize_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVoxelIntBoxLibrary_GetSize()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelIntBoxLibrary_GetSize_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelIntBoxLibrary::execGetSize)
{
	P_GET_STRUCT(FVoxelIntBox,Z_Param_Box);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FIntVector*)Z_Param__Result=UVoxelIntBoxLibrary::GetSize(Z_Param_Box);
	P_NATIVE_END;
}
// ********** End Class UVoxelIntBoxLibrary Function GetSize ***************************************

// ********** Begin Class UVoxelIntBoxLibrary Function InfiniteBox *********************************
struct Z_Construct_UFunction_UVoxelIntBoxLibrary_InfiniteBox_Statics
{
	struct VoxelIntBoxLibrary_eventInfiniteBox_Parms
	{
		FVoxelIntBox ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Math|VoxelIntBox" },
		{ "ModuleRelativePath", "Public/VoxelIntBoxLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelIntBoxLibrary_InfiniteBox_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelIntBoxLibrary_eventInfiniteBox_Parms, ReturnValue), Z_Construct_UScriptStruct_FVoxelIntBox, METADATA_PARAMS(0, nullptr) }; // 3520536583
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelIntBoxLibrary_InfiniteBox_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelIntBoxLibrary_InfiniteBox_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelIntBoxLibrary_InfiniteBox_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelIntBoxLibrary_InfiniteBox_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelIntBoxLibrary, nullptr, "InfiniteBox", Z_Construct_UFunction_UVoxelIntBoxLibrary_InfiniteBox_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelIntBoxLibrary_InfiniteBox_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVoxelIntBoxLibrary_InfiniteBox_Statics::VoxelIntBoxLibrary_eventInfiniteBox_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelIntBoxLibrary_InfiniteBox_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelIntBoxLibrary_InfiniteBox_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVoxelIntBoxLibrary_InfiniteBox_Statics::VoxelIntBoxLibrary_eventInfiniteBox_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVoxelIntBoxLibrary_InfiniteBox()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelIntBoxLibrary_InfiniteBox_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelIntBoxLibrary::execInfiniteBox)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVoxelIntBox*)Z_Param__Result=UVoxelIntBoxLibrary::InfiniteBox();
	P_NATIVE_END;
}
// ********** End Class UVoxelIntBoxLibrary Function InfiniteBox ***********************************

// ********** Begin Class UVoxelIntBoxLibrary Function Intersect ***********************************
struct Z_Construct_UFunction_UVoxelIntBoxLibrary_Intersect_Statics
{
	struct VoxelIntBoxLibrary_eventIntersect_Parms
	{
		FVoxelIntBox Box;
		FVoxelIntBox Other;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Math|VoxelIntBox" },
		{ "ModuleRelativePath", "Public/VoxelIntBoxLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Box;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Other;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelIntBoxLibrary_Intersect_Statics::NewProp_Box = { "Box", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelIntBoxLibrary_eventIntersect_Parms, Box), Z_Construct_UScriptStruct_FVoxelIntBox, METADATA_PARAMS(0, nullptr) }; // 3520536583
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelIntBoxLibrary_Intersect_Statics::NewProp_Other = { "Other", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelIntBoxLibrary_eventIntersect_Parms, Other), Z_Construct_UScriptStruct_FVoxelIntBox, METADATA_PARAMS(0, nullptr) }; // 3520536583
void Z_Construct_UFunction_UVoxelIntBoxLibrary_Intersect_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((VoxelIntBoxLibrary_eventIntersect_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelIntBoxLibrary_Intersect_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VoxelIntBoxLibrary_eventIntersect_Parms), &Z_Construct_UFunction_UVoxelIntBoxLibrary_Intersect_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelIntBoxLibrary_Intersect_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelIntBoxLibrary_Intersect_Statics::NewProp_Box,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelIntBoxLibrary_Intersect_Statics::NewProp_Other,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelIntBoxLibrary_Intersect_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelIntBoxLibrary_Intersect_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelIntBoxLibrary_Intersect_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelIntBoxLibrary, nullptr, "Intersect", Z_Construct_UFunction_UVoxelIntBoxLibrary_Intersect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelIntBoxLibrary_Intersect_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVoxelIntBoxLibrary_Intersect_Statics::VoxelIntBoxLibrary_eventIntersect_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelIntBoxLibrary_Intersect_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelIntBoxLibrary_Intersect_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVoxelIntBoxLibrary_Intersect_Statics::VoxelIntBoxLibrary_eventIntersect_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVoxelIntBoxLibrary_Intersect()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelIntBoxLibrary_Intersect_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelIntBoxLibrary::execIntersect)
{
	P_GET_STRUCT(FVoxelIntBox,Z_Param_Box);
	P_GET_STRUCT(FVoxelIntBox,Z_Param_Other);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UVoxelIntBoxLibrary::Intersect(Z_Param_Box,Z_Param_Other);
	P_NATIVE_END;
}
// ********** End Class UVoxelIntBoxLibrary Function Intersect *************************************

// ********** Begin Class UVoxelIntBoxLibrary Function IsIntVectorInsideBox ************************
struct Z_Construct_UFunction_UVoxelIntBoxLibrary_IsIntVectorInsideBox_Statics
{
	struct VoxelIntBoxLibrary_eventIsIntVectorInsideBox_Parms
	{
		FVoxelIntBox Box;
		FIntVector Position;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Math|VoxelIntBox" },
		{ "ModuleRelativePath", "Public/VoxelIntBoxLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Box;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Position;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelIntBoxLibrary_IsIntVectorInsideBox_Statics::NewProp_Box = { "Box", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelIntBoxLibrary_eventIsIntVectorInsideBox_Parms, Box), Z_Construct_UScriptStruct_FVoxelIntBox, METADATA_PARAMS(0, nullptr) }; // 3520536583
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelIntBoxLibrary_IsIntVectorInsideBox_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelIntBoxLibrary_eventIsIntVectorInsideBox_Parms, Position), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UVoxelIntBoxLibrary_IsIntVectorInsideBox_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((VoxelIntBoxLibrary_eventIsIntVectorInsideBox_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelIntBoxLibrary_IsIntVectorInsideBox_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VoxelIntBoxLibrary_eventIsIntVectorInsideBox_Parms), &Z_Construct_UFunction_UVoxelIntBoxLibrary_IsIntVectorInsideBox_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelIntBoxLibrary_IsIntVectorInsideBox_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelIntBoxLibrary_IsIntVectorInsideBox_Statics::NewProp_Box,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelIntBoxLibrary_IsIntVectorInsideBox_Statics::NewProp_Position,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelIntBoxLibrary_IsIntVectorInsideBox_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelIntBoxLibrary_IsIntVectorInsideBox_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelIntBoxLibrary_IsIntVectorInsideBox_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelIntBoxLibrary, nullptr, "IsIntVectorInsideBox", Z_Construct_UFunction_UVoxelIntBoxLibrary_IsIntVectorInsideBox_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelIntBoxLibrary_IsIntVectorInsideBox_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVoxelIntBoxLibrary_IsIntVectorInsideBox_Statics::VoxelIntBoxLibrary_eventIsIntVectorInsideBox_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelIntBoxLibrary_IsIntVectorInsideBox_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelIntBoxLibrary_IsIntVectorInsideBox_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVoxelIntBoxLibrary_IsIntVectorInsideBox_Statics::VoxelIntBoxLibrary_eventIsIntVectorInsideBox_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVoxelIntBoxLibrary_IsIntVectorInsideBox()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelIntBoxLibrary_IsIntVectorInsideBox_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelIntBoxLibrary::execIsIntVectorInsideBox)
{
	P_GET_STRUCT(FVoxelIntBox,Z_Param_Box);
	P_GET_STRUCT(FIntVector,Z_Param_Position);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UVoxelIntBoxLibrary::IsIntVectorInsideBox(Z_Param_Box,Z_Param_Position);
	P_NATIVE_END;
}
// ********** End Class UVoxelIntBoxLibrary Function IsIntVectorInsideBox **************************

// ********** Begin Class UVoxelIntBoxLibrary Function IsValid *************************************
struct Z_Construct_UFunction_UVoxelIntBoxLibrary_IsValid_Statics
{
	struct VoxelIntBoxLibrary_eventIsValid_Parms
	{
		FVoxelIntBox Box;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Math|VoxelIntBox" },
		{ "ModuleRelativePath", "Public/VoxelIntBoxLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Box;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelIntBoxLibrary_IsValid_Statics::NewProp_Box = { "Box", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelIntBoxLibrary_eventIsValid_Parms, Box), Z_Construct_UScriptStruct_FVoxelIntBox, METADATA_PARAMS(0, nullptr) }; // 3520536583
void Z_Construct_UFunction_UVoxelIntBoxLibrary_IsValid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((VoxelIntBoxLibrary_eventIsValid_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelIntBoxLibrary_IsValid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VoxelIntBoxLibrary_eventIsValid_Parms), &Z_Construct_UFunction_UVoxelIntBoxLibrary_IsValid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelIntBoxLibrary_IsValid_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelIntBoxLibrary_IsValid_Statics::NewProp_Box,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelIntBoxLibrary_IsValid_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelIntBoxLibrary_IsValid_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelIntBoxLibrary_IsValid_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelIntBoxLibrary, nullptr, "IsValid", Z_Construct_UFunction_UVoxelIntBoxLibrary_IsValid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelIntBoxLibrary_IsValid_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVoxelIntBoxLibrary_IsValid_Statics::VoxelIntBoxLibrary_eventIsValid_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelIntBoxLibrary_IsValid_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelIntBoxLibrary_IsValid_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVoxelIntBoxLibrary_IsValid_Statics::VoxelIntBoxLibrary_eventIsValid_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVoxelIntBoxLibrary_IsValid()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelIntBoxLibrary_IsValid_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelIntBoxLibrary::execIsValid)
{
	P_GET_STRUCT(FVoxelIntBox,Z_Param_Box);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UVoxelIntBoxLibrary::IsValid(Z_Param_Box);
	P_NATIVE_END;
}
// ********** End Class UVoxelIntBoxLibrary Function IsValid ***************************************

// ********** Begin Class UVoxelIntBoxLibrary Function IsVectorInsideBox ***************************
struct Z_Construct_UFunction_UVoxelIntBoxLibrary_IsVectorInsideBox_Statics
{
	struct VoxelIntBoxLibrary_eventIsVectorInsideBox_Parms
	{
		FVoxelIntBox Box;
		FVector Position;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Math|VoxelIntBox" },
		{ "ModuleRelativePath", "Public/VoxelIntBoxLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Box;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Position;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelIntBoxLibrary_IsVectorInsideBox_Statics::NewProp_Box = { "Box", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelIntBoxLibrary_eventIsVectorInsideBox_Parms, Box), Z_Construct_UScriptStruct_FVoxelIntBox, METADATA_PARAMS(0, nullptr) }; // 3520536583
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelIntBoxLibrary_IsVectorInsideBox_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelIntBoxLibrary_eventIsVectorInsideBox_Parms, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UVoxelIntBoxLibrary_IsVectorInsideBox_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((VoxelIntBoxLibrary_eventIsVectorInsideBox_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelIntBoxLibrary_IsVectorInsideBox_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VoxelIntBoxLibrary_eventIsVectorInsideBox_Parms), &Z_Construct_UFunction_UVoxelIntBoxLibrary_IsVectorInsideBox_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelIntBoxLibrary_IsVectorInsideBox_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelIntBoxLibrary_IsVectorInsideBox_Statics::NewProp_Box,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelIntBoxLibrary_IsVectorInsideBox_Statics::NewProp_Position,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelIntBoxLibrary_IsVectorInsideBox_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelIntBoxLibrary_IsVectorInsideBox_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelIntBoxLibrary_IsVectorInsideBox_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelIntBoxLibrary, nullptr, "IsVectorInsideBox", Z_Construct_UFunction_UVoxelIntBoxLibrary_IsVectorInsideBox_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelIntBoxLibrary_IsVectorInsideBox_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVoxelIntBoxLibrary_IsVectorInsideBox_Statics::VoxelIntBoxLibrary_eventIsVectorInsideBox_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelIntBoxLibrary_IsVectorInsideBox_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelIntBoxLibrary_IsVectorInsideBox_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVoxelIntBoxLibrary_IsVectorInsideBox_Statics::VoxelIntBoxLibrary_eventIsVectorInsideBox_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVoxelIntBoxLibrary_IsVectorInsideBox()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelIntBoxLibrary_IsVectorInsideBox_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelIntBoxLibrary::execIsVectorInsideBox)
{
	P_GET_STRUCT(FVoxelIntBox,Z_Param_Box);
	P_GET_STRUCT(FVector,Z_Param_Position);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UVoxelIntBoxLibrary::IsVectorInsideBox(Z_Param_Box,Z_Param_Position);
	P_NATIVE_END;
}
// ********** End Class UVoxelIntBoxLibrary Function IsVectorInsideBox *****************************

// ********** Begin Class UVoxelIntBoxLibrary Function MakeBoxFromLocalPositionAndRadius ***********
struct Z_Construct_UFunction_UVoxelIntBoxLibrary_MakeBoxFromLocalPositionAndRadius_Statics
{
	struct VoxelIntBoxLibrary_eventMakeBoxFromLocalPositionAndRadius_Parms
	{
		FIntVector Position;
		int32 Radius;
		FVoxelIntBox ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Math|VoxelIntBox" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// From -Radius(included) to Radius(excluded)\n" },
#endif
		{ "ModuleRelativePath", "Public/VoxelIntBoxLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "From -Radius(included) to Radius(excluded)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Position;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Radius;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelIntBoxLibrary_MakeBoxFromLocalPositionAndRadius_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelIntBoxLibrary_eventMakeBoxFromLocalPositionAndRadius_Parms, Position), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVoxelIntBoxLibrary_MakeBoxFromLocalPositionAndRadius_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelIntBoxLibrary_eventMakeBoxFromLocalPositionAndRadius_Parms, Radius), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelIntBoxLibrary_MakeBoxFromLocalPositionAndRadius_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelIntBoxLibrary_eventMakeBoxFromLocalPositionAndRadius_Parms, ReturnValue), Z_Construct_UScriptStruct_FVoxelIntBox, METADATA_PARAMS(0, nullptr) }; // 3520536583
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelIntBoxLibrary_MakeBoxFromLocalPositionAndRadius_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelIntBoxLibrary_MakeBoxFromLocalPositionAndRadius_Statics::NewProp_Position,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelIntBoxLibrary_MakeBoxFromLocalPositionAndRadius_Statics::NewProp_Radius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelIntBoxLibrary_MakeBoxFromLocalPositionAndRadius_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelIntBoxLibrary_MakeBoxFromLocalPositionAndRadius_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelIntBoxLibrary_MakeBoxFromLocalPositionAndRadius_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelIntBoxLibrary, nullptr, "MakeBoxFromLocalPositionAndRadius", Z_Construct_UFunction_UVoxelIntBoxLibrary_MakeBoxFromLocalPositionAndRadius_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelIntBoxLibrary_MakeBoxFromLocalPositionAndRadius_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVoxelIntBoxLibrary_MakeBoxFromLocalPositionAndRadius_Statics::VoxelIntBoxLibrary_eventMakeBoxFromLocalPositionAndRadius_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelIntBoxLibrary_MakeBoxFromLocalPositionAndRadius_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelIntBoxLibrary_MakeBoxFromLocalPositionAndRadius_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVoxelIntBoxLibrary_MakeBoxFromLocalPositionAndRadius_Statics::VoxelIntBoxLibrary_eventMakeBoxFromLocalPositionAndRadius_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVoxelIntBoxLibrary_MakeBoxFromLocalPositionAndRadius()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelIntBoxLibrary_MakeBoxFromLocalPositionAndRadius_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelIntBoxLibrary::execMakeBoxFromLocalPositionAndRadius)
{
	P_GET_STRUCT(FIntVector,Z_Param_Position);
	P_GET_PROPERTY(FIntProperty,Z_Param_Radius);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVoxelIntBox*)Z_Param__Result=UVoxelIntBoxLibrary::MakeBoxFromLocalPositionAndRadius(Z_Param_Position,Z_Param_Radius);
	P_NATIVE_END;
}
// ********** End Class UVoxelIntBoxLibrary Function MakeBoxFromLocalPositionAndRadius *************

// ********** Begin Class UVoxelIntBoxLibrary Function MakeBoxFromPositionAndRadius ****************
struct Z_Construct_UFunction_UVoxelIntBoxLibrary_MakeBoxFromPositionAndRadius_Statics
{
	struct VoxelIntBoxLibrary_eventMakeBoxFromPositionAndRadius_Parms
	{
		FVector Position;
		float Radius;
		FVoxelIntBox ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Math|VoxelIntBox" },
		{ "ModuleRelativePath", "Public/VoxelIntBoxLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Position;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelIntBoxLibrary_MakeBoxFromPositionAndRadius_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelIntBoxLibrary_eventMakeBoxFromPositionAndRadius_Parms, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoxelIntBoxLibrary_MakeBoxFromPositionAndRadius_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelIntBoxLibrary_eventMakeBoxFromPositionAndRadius_Parms, Radius), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelIntBoxLibrary_MakeBoxFromPositionAndRadius_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelIntBoxLibrary_eventMakeBoxFromPositionAndRadius_Parms, ReturnValue), Z_Construct_UScriptStruct_FVoxelIntBox, METADATA_PARAMS(0, nullptr) }; // 3520536583
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelIntBoxLibrary_MakeBoxFromPositionAndRadius_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelIntBoxLibrary_MakeBoxFromPositionAndRadius_Statics::NewProp_Position,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelIntBoxLibrary_MakeBoxFromPositionAndRadius_Statics::NewProp_Radius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelIntBoxLibrary_MakeBoxFromPositionAndRadius_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelIntBoxLibrary_MakeBoxFromPositionAndRadius_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelIntBoxLibrary_MakeBoxFromPositionAndRadius_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelIntBoxLibrary, nullptr, "MakeBoxFromPositionAndRadius", Z_Construct_UFunction_UVoxelIntBoxLibrary_MakeBoxFromPositionAndRadius_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelIntBoxLibrary_MakeBoxFromPositionAndRadius_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVoxelIntBoxLibrary_MakeBoxFromPositionAndRadius_Statics::VoxelIntBoxLibrary_eventMakeBoxFromPositionAndRadius_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelIntBoxLibrary_MakeBoxFromPositionAndRadius_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelIntBoxLibrary_MakeBoxFromPositionAndRadius_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVoxelIntBoxLibrary_MakeBoxFromPositionAndRadius_Statics::VoxelIntBoxLibrary_eventMakeBoxFromPositionAndRadius_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVoxelIntBoxLibrary_MakeBoxFromPositionAndRadius()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelIntBoxLibrary_MakeBoxFromPositionAndRadius_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelIntBoxLibrary::execMakeBoxFromPositionAndRadius)
{
	P_GET_STRUCT(FVector,Z_Param_Position);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Radius);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVoxelIntBox*)Z_Param__Result=UVoxelIntBoxLibrary::MakeBoxFromPositionAndRadius(Z_Param_Position,Z_Param_Radius);
	P_NATIVE_END;
}
// ********** End Class UVoxelIntBoxLibrary Function MakeBoxFromPositionAndRadius ******************

// ********** Begin Class UVoxelIntBoxLibrary Function MakeIntBox **********************************
struct Z_Construct_UFunction_UVoxelIntBoxLibrary_MakeIntBox_Statics
{
	struct VoxelIntBoxLibrary_eventMakeIntBox_Parms
	{
		FIntVector Min;
		FIntVector Max;
		FVoxelIntBox ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Math|VoxelIntBox" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Makes an Int Box. Min must be <= to Max */" },
#endif
		{ "Keywords", "construct build" },
		{ "ModuleRelativePath", "Public/VoxelIntBoxLibrary.h" },
		{ "NativeMakeFunc", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Makes an Int Box. Min must be <= to Max" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Min;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Max;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelIntBoxLibrary_MakeIntBox_Statics::NewProp_Min = { "Min", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelIntBoxLibrary_eventMakeIntBox_Parms, Min), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelIntBoxLibrary_MakeIntBox_Statics::NewProp_Max = { "Max", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelIntBoxLibrary_eventMakeIntBox_Parms, Max), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelIntBoxLibrary_MakeIntBox_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelIntBoxLibrary_eventMakeIntBox_Parms, ReturnValue), Z_Construct_UScriptStruct_FVoxelIntBox, METADATA_PARAMS(0, nullptr) }; // 3520536583
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelIntBoxLibrary_MakeIntBox_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelIntBoxLibrary_MakeIntBox_Statics::NewProp_Min,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelIntBoxLibrary_MakeIntBox_Statics::NewProp_Max,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelIntBoxLibrary_MakeIntBox_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelIntBoxLibrary_MakeIntBox_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelIntBoxLibrary_MakeIntBox_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelIntBoxLibrary, nullptr, "MakeIntBox", Z_Construct_UFunction_UVoxelIntBoxLibrary_MakeIntBox_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelIntBoxLibrary_MakeIntBox_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVoxelIntBoxLibrary_MakeIntBox_Statics::VoxelIntBoxLibrary_eventMakeIntBox_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelIntBoxLibrary_MakeIntBox_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelIntBoxLibrary_MakeIntBox_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVoxelIntBoxLibrary_MakeIntBox_Statics::VoxelIntBoxLibrary_eventMakeIntBox_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVoxelIntBoxLibrary_MakeIntBox()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelIntBoxLibrary_MakeIntBox_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelIntBoxLibrary::execMakeIntBox)
{
	P_GET_STRUCT(FIntVector,Z_Param_Min);
	P_GET_STRUCT(FIntVector,Z_Param_Max);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVoxelIntBox*)Z_Param__Result=UVoxelIntBoxLibrary::MakeIntBox(Z_Param_Min,Z_Param_Max);
	P_NATIVE_END;
}
// ********** End Class UVoxelIntBoxLibrary Function MakeIntBox ************************************

// ********** Begin Class UVoxelIntBoxLibrary Function MakeIntBoxFromPoints ************************
struct Z_Construct_UFunction_UVoxelIntBoxLibrary_MakeIntBoxFromPoints_Statics
{
	struct VoxelIntBoxLibrary_eventMakeIntBoxFromPoints_Parms
	{
		TArray<FVector> Points;
		FVoxelIntBox ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Math|VoxelIntBox" },
		{ "Keywords", "construct build" },
		{ "ModuleRelativePath", "Public/VoxelIntBoxLibrary.h" },
		{ "NativeMakeFunc", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Points_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Points;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelIntBoxLibrary_MakeIntBoxFromPoints_Statics::NewProp_Points_Inner = { "Points", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVoxelIntBoxLibrary_MakeIntBoxFromPoints_Statics::NewProp_Points = { "Points", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelIntBoxLibrary_eventMakeIntBoxFromPoints_Parms, Points), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelIntBoxLibrary_MakeIntBoxFromPoints_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelIntBoxLibrary_eventMakeIntBoxFromPoints_Parms, ReturnValue), Z_Construct_UScriptStruct_FVoxelIntBox, METADATA_PARAMS(0, nullptr) }; // 3520536583
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelIntBoxLibrary_MakeIntBoxFromPoints_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelIntBoxLibrary_MakeIntBoxFromPoints_Statics::NewProp_Points_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelIntBoxLibrary_MakeIntBoxFromPoints_Statics::NewProp_Points,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelIntBoxLibrary_MakeIntBoxFromPoints_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelIntBoxLibrary_MakeIntBoxFromPoints_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelIntBoxLibrary_MakeIntBoxFromPoints_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelIntBoxLibrary, nullptr, "MakeIntBoxFromPoints", Z_Construct_UFunction_UVoxelIntBoxLibrary_MakeIntBoxFromPoints_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelIntBoxLibrary_MakeIntBoxFromPoints_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVoxelIntBoxLibrary_MakeIntBoxFromPoints_Statics::VoxelIntBoxLibrary_eventMakeIntBoxFromPoints_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelIntBoxLibrary_MakeIntBoxFromPoints_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelIntBoxLibrary_MakeIntBoxFromPoints_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVoxelIntBoxLibrary_MakeIntBoxFromPoints_Statics::VoxelIntBoxLibrary_eventMakeIntBoxFromPoints_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVoxelIntBoxLibrary_MakeIntBoxFromPoints()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelIntBoxLibrary_MakeIntBoxFromPoints_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelIntBoxLibrary::execMakeIntBoxFromPoints)
{
	P_GET_TARRAY(FVector,Z_Param_Points);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVoxelIntBox*)Z_Param__Result=UVoxelIntBoxLibrary::MakeIntBoxFromPoints(Z_Param_Points);
	P_NATIVE_END;
}
// ********** End Class UVoxelIntBoxLibrary Function MakeIntBoxFromPoints **************************

// ********** Begin Class UVoxelIntBoxLibrary Function MakeIntBoxWithValidity **********************
struct Z_Construct_UFunction_UVoxelIntBoxLibrary_MakeIntBoxWithValidity_Statics
{
	struct VoxelIntBoxLibrary_eventMakeIntBoxWithValidity_Parms
	{
		FVoxelIntBox Box;
		bool bIsValid;
		FVoxelIntBoxWithValidity ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Math|VoxelIntBox" },
		{ "CPP_Default_bIsValid", "true" },
		{ "Keywords", "construct build" },
		{ "ModuleRelativePath", "Public/VoxelIntBoxLibrary.h" },
		{ "NativeMakeFunc", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Box;
	static void NewProp_bIsValid_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsValid;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelIntBoxLibrary_MakeIntBoxWithValidity_Statics::NewProp_Box = { "Box", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelIntBoxLibrary_eventMakeIntBoxWithValidity_Parms, Box), Z_Construct_UScriptStruct_FVoxelIntBox, METADATA_PARAMS(0, nullptr) }; // 3520536583
void Z_Construct_UFunction_UVoxelIntBoxLibrary_MakeIntBoxWithValidity_Statics::NewProp_bIsValid_SetBit(void* Obj)
{
	((VoxelIntBoxLibrary_eventMakeIntBoxWithValidity_Parms*)Obj)->bIsValid = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelIntBoxLibrary_MakeIntBoxWithValidity_Statics::NewProp_bIsValid = { "bIsValid", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VoxelIntBoxLibrary_eventMakeIntBoxWithValidity_Parms), &Z_Construct_UFunction_UVoxelIntBoxLibrary_MakeIntBoxWithValidity_Statics::NewProp_bIsValid_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelIntBoxLibrary_MakeIntBoxWithValidity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelIntBoxLibrary_eventMakeIntBoxWithValidity_Parms, ReturnValue), Z_Construct_UScriptStruct_FVoxelIntBoxWithValidity, METADATA_PARAMS(0, nullptr) }; // 3067770411
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelIntBoxLibrary_MakeIntBoxWithValidity_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelIntBoxLibrary_MakeIntBoxWithValidity_Statics::NewProp_Box,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelIntBoxLibrary_MakeIntBoxWithValidity_Statics::NewProp_bIsValid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelIntBoxLibrary_MakeIntBoxWithValidity_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelIntBoxLibrary_MakeIntBoxWithValidity_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelIntBoxLibrary_MakeIntBoxWithValidity_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelIntBoxLibrary, nullptr, "MakeIntBoxWithValidity", Z_Construct_UFunction_UVoxelIntBoxLibrary_MakeIntBoxWithValidity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelIntBoxLibrary_MakeIntBoxWithValidity_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVoxelIntBoxLibrary_MakeIntBoxWithValidity_Statics::VoxelIntBoxLibrary_eventMakeIntBoxWithValidity_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelIntBoxLibrary_MakeIntBoxWithValidity_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelIntBoxLibrary_MakeIntBoxWithValidity_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVoxelIntBoxLibrary_MakeIntBoxWithValidity_Statics::VoxelIntBoxLibrary_eventMakeIntBoxWithValidity_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVoxelIntBoxLibrary_MakeIntBoxWithValidity()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelIntBoxLibrary_MakeIntBoxWithValidity_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelIntBoxLibrary::execMakeIntBoxWithValidity)
{
	P_GET_STRUCT(FVoxelIntBox,Z_Param_Box);
	P_GET_UBOOL(Z_Param_bIsValid);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVoxelIntBoxWithValidity*)Z_Param__Result=UVoxelIntBoxLibrary::MakeIntBoxWithValidity(Z_Param_Box,Z_Param_bIsValid);
	P_NATIVE_END;
}
// ********** End Class UVoxelIntBoxLibrary Function MakeIntBoxWithValidity ************************

// ********** Begin Class UVoxelIntBoxLibrary Function NotEqual_IntBoxIntBox ***********************
struct Z_Construct_UFunction_UVoxelIntBoxLibrary_NotEqual_IntBoxIntBox_Statics
{
	struct VoxelIntBoxLibrary_eventNotEqual_IntBoxIntBox_Parms
	{
		FVoxelIntBox A;
		FVoxelIntBox B;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Math|VoxelIntBox" },
		{ "CompactNodeTitle", "!=" },
		{ "DisplayName", "NotEqual (VoxelIntBox)" },
		{ "Keywords", "!= not equal" },
		{ "ModuleRelativePath", "Public/VoxelIntBoxLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_A;
	static const UECodeGen_Private::FStructPropertyParams NewProp_B;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelIntBoxLibrary_NotEqual_IntBoxIntBox_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelIntBoxLibrary_eventNotEqual_IntBoxIntBox_Parms, A), Z_Construct_UScriptStruct_FVoxelIntBox, METADATA_PARAMS(0, nullptr) }; // 3520536583
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelIntBoxLibrary_NotEqual_IntBoxIntBox_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelIntBoxLibrary_eventNotEqual_IntBoxIntBox_Parms, B), Z_Construct_UScriptStruct_FVoxelIntBox, METADATA_PARAMS(0, nullptr) }; // 3520536583
void Z_Construct_UFunction_UVoxelIntBoxLibrary_NotEqual_IntBoxIntBox_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((VoxelIntBoxLibrary_eventNotEqual_IntBoxIntBox_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelIntBoxLibrary_NotEqual_IntBoxIntBox_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VoxelIntBoxLibrary_eventNotEqual_IntBoxIntBox_Parms), &Z_Construct_UFunction_UVoxelIntBoxLibrary_NotEqual_IntBoxIntBox_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelIntBoxLibrary_NotEqual_IntBoxIntBox_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelIntBoxLibrary_NotEqual_IntBoxIntBox_Statics::NewProp_A,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelIntBoxLibrary_NotEqual_IntBoxIntBox_Statics::NewProp_B,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelIntBoxLibrary_NotEqual_IntBoxIntBox_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelIntBoxLibrary_NotEqual_IntBoxIntBox_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelIntBoxLibrary_NotEqual_IntBoxIntBox_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelIntBoxLibrary, nullptr, "NotEqual_IntBoxIntBox", Z_Construct_UFunction_UVoxelIntBoxLibrary_NotEqual_IntBoxIntBox_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelIntBoxLibrary_NotEqual_IntBoxIntBox_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVoxelIntBoxLibrary_NotEqual_IntBoxIntBox_Statics::VoxelIntBoxLibrary_eventNotEqual_IntBoxIntBox_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelIntBoxLibrary_NotEqual_IntBoxIntBox_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelIntBoxLibrary_NotEqual_IntBoxIntBox_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVoxelIntBoxLibrary_NotEqual_IntBoxIntBox_Statics::VoxelIntBoxLibrary_eventNotEqual_IntBoxIntBox_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVoxelIntBoxLibrary_NotEqual_IntBoxIntBox()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelIntBoxLibrary_NotEqual_IntBoxIntBox_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelIntBoxLibrary::execNotEqual_IntBoxIntBox)
{
	P_GET_STRUCT(FVoxelIntBox,Z_Param_A);
	P_GET_STRUCT(FVoxelIntBox,Z_Param_B);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UVoxelIntBoxLibrary::NotEqual_IntBoxIntBox(Z_Param_A,Z_Param_B);
	P_NATIVE_END;
}
// ********** End Class UVoxelIntBoxLibrary Function NotEqual_IntBoxIntBox *************************

// ********** Begin Class UVoxelIntBoxLibrary Function Overlap *************************************
struct Z_Construct_UFunction_UVoxelIntBoxLibrary_Overlap_Statics
{
	struct VoxelIntBoxLibrary_eventOverlap_Parms
	{
		FVoxelIntBox A;
		FVoxelIntBox B;
		FVoxelIntBox ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Math|VoxelIntBox" },
		{ "ModuleRelativePath", "Public/VoxelIntBoxLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_A;
	static const UECodeGen_Private::FStructPropertyParams NewProp_B;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelIntBoxLibrary_Overlap_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelIntBoxLibrary_eventOverlap_Parms, A), Z_Construct_UScriptStruct_FVoxelIntBox, METADATA_PARAMS(0, nullptr) }; // 3520536583
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelIntBoxLibrary_Overlap_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelIntBoxLibrary_eventOverlap_Parms, B), Z_Construct_UScriptStruct_FVoxelIntBox, METADATA_PARAMS(0, nullptr) }; // 3520536583
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelIntBoxLibrary_Overlap_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelIntBoxLibrary_eventOverlap_Parms, ReturnValue), Z_Construct_UScriptStruct_FVoxelIntBox, METADATA_PARAMS(0, nullptr) }; // 3520536583
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelIntBoxLibrary_Overlap_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelIntBoxLibrary_Overlap_Statics::NewProp_A,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelIntBoxLibrary_Overlap_Statics::NewProp_B,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelIntBoxLibrary_Overlap_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelIntBoxLibrary_Overlap_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelIntBoxLibrary_Overlap_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelIntBoxLibrary, nullptr, "Overlap", Z_Construct_UFunction_UVoxelIntBoxLibrary_Overlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelIntBoxLibrary_Overlap_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVoxelIntBoxLibrary_Overlap_Statics::VoxelIntBoxLibrary_eventOverlap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelIntBoxLibrary_Overlap_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelIntBoxLibrary_Overlap_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVoxelIntBoxLibrary_Overlap_Statics::VoxelIntBoxLibrary_eventOverlap_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVoxelIntBoxLibrary_Overlap()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelIntBoxLibrary_Overlap_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelIntBoxLibrary::execOverlap)
{
	P_GET_STRUCT(FVoxelIntBox,Z_Param_A);
	P_GET_STRUCT(FVoxelIntBox,Z_Param_B);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVoxelIntBox*)Z_Param__Result=UVoxelIntBoxLibrary::Overlap(Z_Param_A,Z_Param_B);
	P_NATIVE_END;
}
// ********** End Class UVoxelIntBoxLibrary Function Overlap ***************************************

// ********** Begin Class UVoxelIntBoxLibrary Function RemoveTranslation ***************************
struct Z_Construct_UFunction_UVoxelIntBoxLibrary_RemoveTranslation_Statics
{
	struct VoxelIntBoxLibrary_eventRemoveTranslation_Parms
	{
		FVoxelIntBox Box;
		FVoxelIntBox ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Math|VoxelIntBox" },
		{ "ModuleRelativePath", "Public/VoxelIntBoxLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Box;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelIntBoxLibrary_RemoveTranslation_Statics::NewProp_Box = { "Box", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelIntBoxLibrary_eventRemoveTranslation_Parms, Box), Z_Construct_UScriptStruct_FVoxelIntBox, METADATA_PARAMS(0, nullptr) }; // 3520536583
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelIntBoxLibrary_RemoveTranslation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelIntBoxLibrary_eventRemoveTranslation_Parms, ReturnValue), Z_Construct_UScriptStruct_FVoxelIntBox, METADATA_PARAMS(0, nullptr) }; // 3520536583
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelIntBoxLibrary_RemoveTranslation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelIntBoxLibrary_RemoveTranslation_Statics::NewProp_Box,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelIntBoxLibrary_RemoveTranslation_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelIntBoxLibrary_RemoveTranslation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelIntBoxLibrary_RemoveTranslation_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelIntBoxLibrary, nullptr, "RemoveTranslation", Z_Construct_UFunction_UVoxelIntBoxLibrary_RemoveTranslation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelIntBoxLibrary_RemoveTranslation_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVoxelIntBoxLibrary_RemoveTranslation_Statics::VoxelIntBoxLibrary_eventRemoveTranslation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelIntBoxLibrary_RemoveTranslation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelIntBoxLibrary_RemoveTranslation_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVoxelIntBoxLibrary_RemoveTranslation_Statics::VoxelIntBoxLibrary_eventRemoveTranslation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVoxelIntBoxLibrary_RemoveTranslation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelIntBoxLibrary_RemoveTranslation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelIntBoxLibrary::execRemoveTranslation)
{
	P_GET_STRUCT(FVoxelIntBox,Z_Param_Box);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVoxelIntBox*)Z_Param__Result=UVoxelIntBoxLibrary::RemoveTranslation(Z_Param_Box);
	P_NATIVE_END;
}
// ********** End Class UVoxelIntBoxLibrary Function RemoveTranslation *****************************

// ********** Begin Class UVoxelIntBoxLibrary Function Scale ***************************************
struct Z_Construct_UFunction_UVoxelIntBoxLibrary_Scale_Statics
{
	struct VoxelIntBoxLibrary_eventScale_Parms
	{
		FVoxelIntBox Box;
		int32 Scale;
		FVoxelIntBox ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Math|VoxelIntBox" },
		{ "CompactNodeTitle", "x" },
		{ "ModuleRelativePath", "Public/VoxelIntBoxLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Box;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Scale;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelIntBoxLibrary_Scale_Statics::NewProp_Box = { "Box", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelIntBoxLibrary_eventScale_Parms, Box), Z_Construct_UScriptStruct_FVoxelIntBox, METADATA_PARAMS(0, nullptr) }; // 3520536583
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVoxelIntBoxLibrary_Scale_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelIntBoxLibrary_eventScale_Parms, Scale), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelIntBoxLibrary_Scale_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelIntBoxLibrary_eventScale_Parms, ReturnValue), Z_Construct_UScriptStruct_FVoxelIntBox, METADATA_PARAMS(0, nullptr) }; // 3520536583
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelIntBoxLibrary_Scale_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelIntBoxLibrary_Scale_Statics::NewProp_Box,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelIntBoxLibrary_Scale_Statics::NewProp_Scale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelIntBoxLibrary_Scale_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelIntBoxLibrary_Scale_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelIntBoxLibrary_Scale_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelIntBoxLibrary, nullptr, "Scale", Z_Construct_UFunction_UVoxelIntBoxLibrary_Scale_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelIntBoxLibrary_Scale_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVoxelIntBoxLibrary_Scale_Statics::VoxelIntBoxLibrary_eventScale_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelIntBoxLibrary_Scale_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelIntBoxLibrary_Scale_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVoxelIntBoxLibrary_Scale_Statics::VoxelIntBoxLibrary_eventScale_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVoxelIntBoxLibrary_Scale()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelIntBoxLibrary_Scale_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelIntBoxLibrary::execScale)
{
	P_GET_STRUCT(FVoxelIntBox,Z_Param_Box);
	P_GET_PROPERTY(FIntProperty,Z_Param_Scale);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVoxelIntBox*)Z_Param__Result=UVoxelIntBoxLibrary::Scale(Z_Param_Box,Z_Param_Scale);
	P_NATIVE_END;
}
// ********** End Class UVoxelIntBoxLibrary Function Scale *****************************************

// ********** Begin Class UVoxelIntBoxLibrary Function TranslateBox ********************************
struct Z_Construct_UFunction_UVoxelIntBoxLibrary_TranslateBox_Statics
{
	struct VoxelIntBoxLibrary_eventTranslateBox_Parms
	{
		FVoxelIntBox Box;
		FIntVector Position;
		FVoxelIntBox ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Math|VoxelIntBox" },
		{ "ModuleRelativePath", "Public/VoxelIntBoxLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Box;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Position;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelIntBoxLibrary_TranslateBox_Statics::NewProp_Box = { "Box", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelIntBoxLibrary_eventTranslateBox_Parms, Box), Z_Construct_UScriptStruct_FVoxelIntBox, METADATA_PARAMS(0, nullptr) }; // 3520536583
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelIntBoxLibrary_TranslateBox_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelIntBoxLibrary_eventTranslateBox_Parms, Position), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelIntBoxLibrary_TranslateBox_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelIntBoxLibrary_eventTranslateBox_Parms, ReturnValue), Z_Construct_UScriptStruct_FVoxelIntBox, METADATA_PARAMS(0, nullptr) }; // 3520536583
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelIntBoxLibrary_TranslateBox_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelIntBoxLibrary_TranslateBox_Statics::NewProp_Box,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelIntBoxLibrary_TranslateBox_Statics::NewProp_Position,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelIntBoxLibrary_TranslateBox_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelIntBoxLibrary_TranslateBox_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelIntBoxLibrary_TranslateBox_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelIntBoxLibrary, nullptr, "TranslateBox", Z_Construct_UFunction_UVoxelIntBoxLibrary_TranslateBox_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelIntBoxLibrary_TranslateBox_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVoxelIntBoxLibrary_TranslateBox_Statics::VoxelIntBoxLibrary_eventTranslateBox_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelIntBoxLibrary_TranslateBox_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelIntBoxLibrary_TranslateBox_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVoxelIntBoxLibrary_TranslateBox_Statics::VoxelIntBoxLibrary_eventTranslateBox_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVoxelIntBoxLibrary_TranslateBox()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelIntBoxLibrary_TranslateBox_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelIntBoxLibrary::execTranslateBox)
{
	P_GET_STRUCT(FVoxelIntBox,Z_Param_Box);
	P_GET_STRUCT(FIntVector,Z_Param_Position);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVoxelIntBox*)Z_Param__Result=UVoxelIntBoxLibrary::TranslateBox(Z_Param_Box,Z_Param_Position);
	P_NATIVE_END;
}
// ********** End Class UVoxelIntBoxLibrary Function TranslateBox **********************************

// ********** Begin Class UVoxelIntBoxLibrary ******************************************************
void UVoxelIntBoxLibrary::StaticRegisterNativesUVoxelIntBoxLibrary()
{
	UClass* Class = UVoxelIntBoxLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddBox", &UVoxelIntBoxLibrary::execAddBox },
		{ "AddPoint", &UVoxelIntBoxLibrary::execAddPoint },
		{ "ApplyTransform", &UVoxelIntBoxLibrary::execApplyTransform },
		{ "BreakIntBox", &UVoxelIntBoxLibrary::execBreakIntBox },
		{ "BreakIntBoxWithValidity", &UVoxelIntBoxLibrary::execBreakIntBoxWithValidity },
		{ "Center", &UVoxelIntBoxLibrary::execCenter },
		{ "Contains", &UVoxelIntBoxLibrary::execContains },
		{ "Conv_IntBoxToString", &UVoxelIntBoxLibrary::execConv_IntBoxToString },
		{ "EqualEqual_IntBoxIntBox", &UVoxelIntBoxLibrary::execEqualEqual_IntBoxIntBox },
		{ "Extend", &UVoxelIntBoxLibrary::execExtend },
		{ "Extend_IntVector", &UVoxelIntBoxLibrary::execExtend_IntVector },
		{ "GetCenter", &UVoxelIntBoxLibrary::execGetCenter },
		{ "GetCorners", &UVoxelIntBoxLibrary::execGetCorners },
		{ "GetSize", &UVoxelIntBoxLibrary::execGetSize },
		{ "InfiniteBox", &UVoxelIntBoxLibrary::execInfiniteBox },
		{ "Intersect", &UVoxelIntBoxLibrary::execIntersect },
		{ "IsIntVectorInsideBox", &UVoxelIntBoxLibrary::execIsIntVectorInsideBox },
		{ "IsValid", &UVoxelIntBoxLibrary::execIsValid },
		{ "IsVectorInsideBox", &UVoxelIntBoxLibrary::execIsVectorInsideBox },
		{ "MakeBoxFromLocalPositionAndRadius", &UVoxelIntBoxLibrary::execMakeBoxFromLocalPositionAndRadius },
		{ "MakeBoxFromPositionAndRadius", &UVoxelIntBoxLibrary::execMakeBoxFromPositionAndRadius },
		{ "MakeIntBox", &UVoxelIntBoxLibrary::execMakeIntBox },
		{ "MakeIntBoxFromPoints", &UVoxelIntBoxLibrary::execMakeIntBoxFromPoints },
		{ "MakeIntBoxWithValidity", &UVoxelIntBoxLibrary::execMakeIntBoxWithValidity },
		{ "NotEqual_IntBoxIntBox", &UVoxelIntBoxLibrary::execNotEqual_IntBoxIntBox },
		{ "Overlap", &UVoxelIntBoxLibrary::execOverlap },
		{ "RemoveTranslation", &UVoxelIntBoxLibrary::execRemoveTranslation },
		{ "Scale", &UVoxelIntBoxLibrary::execScale },
		{ "TranslateBox", &UVoxelIntBoxLibrary::execTranslateBox },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UVoxelIntBoxLibrary;
UClass* UVoxelIntBoxLibrary::GetPrivateStaticClass()
{
	using TClass = UVoxelIntBoxLibrary;
	if (!Z_Registration_Info_UClass_UVoxelIntBoxLibrary.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("VoxelIntBoxLibrary"),
			Z_Registration_Info_UClass_UVoxelIntBoxLibrary.InnerSingleton,
			StaticRegisterNativesUVoxelIntBoxLibrary,
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
	return Z_Registration_Info_UClass_UVoxelIntBoxLibrary.InnerSingleton;
}
UClass* Z_Construct_UClass_UVoxelIntBoxLibrary_NoRegister()
{
	return UVoxelIntBoxLibrary::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UVoxelIntBoxLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "VoxelIntBoxLibrary.h" },
		{ "ModuleRelativePath", "Public/VoxelIntBoxLibrary.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UVoxelIntBoxLibrary_AddBox, "AddBox" }, // 4059491857
		{ &Z_Construct_UFunction_UVoxelIntBoxLibrary_AddPoint, "AddPoint" }, // 817899831
		{ &Z_Construct_UFunction_UVoxelIntBoxLibrary_ApplyTransform, "ApplyTransform" }, // 3792564190
		{ &Z_Construct_UFunction_UVoxelIntBoxLibrary_BreakIntBox, "BreakIntBox" }, // 3498728291
		{ &Z_Construct_UFunction_UVoxelIntBoxLibrary_BreakIntBoxWithValidity, "BreakIntBoxWithValidity" }, // 493674275
		{ &Z_Construct_UFunction_UVoxelIntBoxLibrary_Center, "Center" }, // 1532150023
		{ &Z_Construct_UFunction_UVoxelIntBoxLibrary_Contains, "Contains" }, // 1526158628
		{ &Z_Construct_UFunction_UVoxelIntBoxLibrary_Conv_IntBoxToString, "Conv_IntBoxToString" }, // 778741319
		{ &Z_Construct_UFunction_UVoxelIntBoxLibrary_EqualEqual_IntBoxIntBox, "EqualEqual_IntBoxIntBox" }, // 3978201553
		{ &Z_Construct_UFunction_UVoxelIntBoxLibrary_Extend, "Extend" }, // 3801272795
		{ &Z_Construct_UFunction_UVoxelIntBoxLibrary_Extend_IntVector, "Extend_IntVector" }, // 1012725810
		{ &Z_Construct_UFunction_UVoxelIntBoxLibrary_GetCenter, "GetCenter" }, // 1471227017
		{ &Z_Construct_UFunction_UVoxelIntBoxLibrary_GetCorners, "GetCorners" }, // 1882378318
		{ &Z_Construct_UFunction_UVoxelIntBoxLibrary_GetSize, "GetSize" }, // 69441342
		{ &Z_Construct_UFunction_UVoxelIntBoxLibrary_InfiniteBox, "InfiniteBox" }, // 2162091110
		{ &Z_Construct_UFunction_UVoxelIntBoxLibrary_Intersect, "Intersect" }, // 4056407609
		{ &Z_Construct_UFunction_UVoxelIntBoxLibrary_IsIntVectorInsideBox, "IsIntVectorInsideBox" }, // 895697248
		{ &Z_Construct_UFunction_UVoxelIntBoxLibrary_IsValid, "IsValid" }, // 3753597480
		{ &Z_Construct_UFunction_UVoxelIntBoxLibrary_IsVectorInsideBox, "IsVectorInsideBox" }, // 898540220
		{ &Z_Construct_UFunction_UVoxelIntBoxLibrary_MakeBoxFromLocalPositionAndRadius, "MakeBoxFromLocalPositionAndRadius" }, // 471736327
		{ &Z_Construct_UFunction_UVoxelIntBoxLibrary_MakeBoxFromPositionAndRadius, "MakeBoxFromPositionAndRadius" }, // 4057935746
		{ &Z_Construct_UFunction_UVoxelIntBoxLibrary_MakeIntBox, "MakeIntBox" }, // 911350232
		{ &Z_Construct_UFunction_UVoxelIntBoxLibrary_MakeIntBoxFromPoints, "MakeIntBoxFromPoints" }, // 261390963
		{ &Z_Construct_UFunction_UVoxelIntBoxLibrary_MakeIntBoxWithValidity, "MakeIntBoxWithValidity" }, // 1744748976
		{ &Z_Construct_UFunction_UVoxelIntBoxLibrary_NotEqual_IntBoxIntBox, "NotEqual_IntBoxIntBox" }, // 2545384767
		{ &Z_Construct_UFunction_UVoxelIntBoxLibrary_Overlap, "Overlap" }, // 4225494268
		{ &Z_Construct_UFunction_UVoxelIntBoxLibrary_RemoveTranslation, "RemoveTranslation" }, // 2098722600
		{ &Z_Construct_UFunction_UVoxelIntBoxLibrary_Scale, "Scale" }, // 3738511051
		{ &Z_Construct_UFunction_UVoxelIntBoxLibrary_TranslateBox, "TranslateBox" }, // 1530923739
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelIntBoxLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UVoxelIntBoxLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelIntBoxLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelIntBoxLibrary_Statics::ClassParams = {
	&UVoxelIntBoxLibrary::StaticClass,
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
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelIntBoxLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UVoxelIntBoxLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVoxelIntBoxLibrary()
{
	if (!Z_Registration_Info_UClass_UVoxelIntBoxLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelIntBoxLibrary.OuterSingleton, Z_Construct_UClass_UVoxelIntBoxLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVoxelIntBoxLibrary.OuterSingleton;
}
UVoxelIntBoxLibrary::UVoxelIntBoxLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelIntBoxLibrary);
UVoxelIntBoxLibrary::~UVoxelIntBoxLibrary() {}
// ********** End Class UVoxelIntBoxLibrary ********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelIntBoxLibrary_h__Script_Voxel_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UVoxelIntBoxLibrary, UVoxelIntBoxLibrary::StaticClass, TEXT("UVoxelIntBoxLibrary"), &Z_Registration_Info_UClass_UVoxelIntBoxLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelIntBoxLibrary), 3038980084U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelIntBoxLibrary_h__Script_Voxel_1354890574(TEXT("/Script/Voxel"),
	Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelIntBoxLibrary_h__Script_Voxel_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelIntBoxLibrary_h__Script_Voxel_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
