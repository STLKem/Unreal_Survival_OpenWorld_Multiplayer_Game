// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Voxel/Public/VoxelGenerators/VoxelGeneratorTools.h"
#include "Engine/LatentActionManager.h"
#include "Voxel/Public/VoxelGenerators/VoxelGeneratorInit.h"
#include "Voxel/Public/VoxelGenerators/VoxelGeneratorPicker.h"
#include "Voxel/Public/VoxelTexture.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeVoxelGeneratorTools() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FLatentActionInfo();
UPackage* Z_Construct_UPackage__Script_Voxel();
VOXEL_API UClass* Z_Construct_UClass_UVoxelGenerator_NoRegister();
VOXEL_API UClass* Z_Construct_UClass_UVoxelGeneratorInstanceWrapper_NoRegister();
VOXEL_API UClass* Z_Construct_UClass_UVoxelGeneratorTools();
VOXEL_API UClass* Z_Construct_UClass_UVoxelGeneratorTools_NoRegister();
VOXEL_API UClass* Z_Construct_UClass_UVoxelTransformableGenerator_NoRegister();
VOXEL_API UClass* Z_Construct_UClass_UVoxelTransformableGeneratorInstanceWrapper_NoRegister();
VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelColorTexture();
VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelFloatTexture();
VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelGeneratorInit();
VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelGeneratorPicker();
VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelTransformableGeneratorPicker();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UVoxelGeneratorTools Function CreateColorTextureFromGenerator ************
struct Z_Construct_UFunction_UVoxelGeneratorTools_CreateColorTextureFromGenerator_Statics
{
	struct VoxelGeneratorTools_eventCreateColorTextureFromGenerator_Parms
	{
		FVoxelColorTexture OutTexture;
		UVoxelGeneratorInstanceWrapper* Generator;
		FName OutputName;
		int32 SizeX;
		int32 SizeY;
		float Scale;
		int32 StartX;
		int32 StartY;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "StartX, StartY, VoxelSize" },
		{ "Category", "Voxel|Generators" },
		{ "Comment", "/**\n\x09 * Creates a color texture by reading a color output from a generator\n\x09 * \n\x09 * @param\x09OutTexture\x09\x09\x09The result\n\x09 * @param\x09Generator\x09\x09\x09The generator to use\n\x09 * @param\x09OutputName\x09\x09\x09The output name to query. Must be a color output.\n\x09 * @param\x09SizeX\x09\x09\x09\x09The Size of the resulting texture on the X axis\n\x09 * @param\x09SizeY\x09\x09\x09\x09The Size of the resulting texture on the Y axis\n\x09 * @param\x09Scale\x09\x09\x09\x09Scale that can be used to scale the inputs: the generator will be queried as (Start + Position) * Scale\n\x09 * @param\x09StartX\x09\x09\x09\x09Where the texture starts\n\x09 * @param\x09StartY\x09\x09\x09\x09Where the texture starts\n\x09 */" },
		{ "CPP_Default_OutputName", "MyColor" },
		{ "CPP_Default_Scale", "1.000000" },
		{ "CPP_Default_SizeX", "512" },
		{ "CPP_Default_SizeY", "512" },
		{ "CPP_Default_StartX", "0" },
		{ "CPP_Default_StartY", "0" },
		{ "ModuleRelativePath", "Public/VoxelGenerators/VoxelGeneratorTools.h" },
		{ "ToolTip", "Creates a color texture by reading a color output from a generator\n\n@param       OutTexture                      The result\n@param       Generator                       The generator to use\n@param       OutputName                      The output name to query. Must be a color output.\n@param       SizeX                           The Size of the resulting texture on the X axis\n@param       SizeY                           The Size of the resulting texture on the Y axis\n@param       Scale                           Scale that can be used to scale the inputs: the generator will be queried as (Start + Position) * Scale\n@param       StartX                          Where the texture starts\n@param       StartY                          Where the texture starts" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutTexture;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Generator;
	static const UECodeGen_Private::FNamePropertyParams NewProp_OutputName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SizeX;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SizeY;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Scale;
	static const UECodeGen_Private::FIntPropertyParams NewProp_StartX;
	static const UECodeGen_Private::FIntPropertyParams NewProp_StartY;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelGeneratorTools_CreateColorTextureFromGenerator_Statics::NewProp_OutTexture = { "OutTexture", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelGeneratorTools_eventCreateColorTextureFromGenerator_Parms, OutTexture), Z_Construct_UScriptStruct_FVoxelColorTexture, METADATA_PARAMS(0, nullptr) }; // 40891338
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelGeneratorTools_CreateColorTextureFromGenerator_Statics::NewProp_Generator = { "Generator", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelGeneratorTools_eventCreateColorTextureFromGenerator_Parms, Generator), Z_Construct_UClass_UVoxelGeneratorInstanceWrapper_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UVoxelGeneratorTools_CreateColorTextureFromGenerator_Statics::NewProp_OutputName = { "OutputName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelGeneratorTools_eventCreateColorTextureFromGenerator_Parms, OutputName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVoxelGeneratorTools_CreateColorTextureFromGenerator_Statics::NewProp_SizeX = { "SizeX", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelGeneratorTools_eventCreateColorTextureFromGenerator_Parms, SizeX), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVoxelGeneratorTools_CreateColorTextureFromGenerator_Statics::NewProp_SizeY = { "SizeY", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelGeneratorTools_eventCreateColorTextureFromGenerator_Parms, SizeY), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoxelGeneratorTools_CreateColorTextureFromGenerator_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelGeneratorTools_eventCreateColorTextureFromGenerator_Parms, Scale), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVoxelGeneratorTools_CreateColorTextureFromGenerator_Statics::NewProp_StartX = { "StartX", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelGeneratorTools_eventCreateColorTextureFromGenerator_Parms, StartX), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVoxelGeneratorTools_CreateColorTextureFromGenerator_Statics::NewProp_StartY = { "StartY", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelGeneratorTools_eventCreateColorTextureFromGenerator_Parms, StartY), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelGeneratorTools_CreateColorTextureFromGenerator_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelGeneratorTools_CreateColorTextureFromGenerator_Statics::NewProp_OutTexture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelGeneratorTools_CreateColorTextureFromGenerator_Statics::NewProp_Generator,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelGeneratorTools_CreateColorTextureFromGenerator_Statics::NewProp_OutputName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelGeneratorTools_CreateColorTextureFromGenerator_Statics::NewProp_SizeX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelGeneratorTools_CreateColorTextureFromGenerator_Statics::NewProp_SizeY,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelGeneratorTools_CreateColorTextureFromGenerator_Statics::NewProp_Scale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelGeneratorTools_CreateColorTextureFromGenerator_Statics::NewProp_StartX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelGeneratorTools_CreateColorTextureFromGenerator_Statics::NewProp_StartY,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelGeneratorTools_CreateColorTextureFromGenerator_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelGeneratorTools_CreateColorTextureFromGenerator_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelGeneratorTools, nullptr, "CreateColorTextureFromGenerator", Z_Construct_UFunction_UVoxelGeneratorTools_CreateColorTextureFromGenerator_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelGeneratorTools_CreateColorTextureFromGenerator_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVoxelGeneratorTools_CreateColorTextureFromGenerator_Statics::VoxelGeneratorTools_eventCreateColorTextureFromGenerator_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelGeneratorTools_CreateColorTextureFromGenerator_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelGeneratorTools_CreateColorTextureFromGenerator_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVoxelGeneratorTools_CreateColorTextureFromGenerator_Statics::VoxelGeneratorTools_eventCreateColorTextureFromGenerator_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVoxelGeneratorTools_CreateColorTextureFromGenerator()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelGeneratorTools_CreateColorTextureFromGenerator_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelGeneratorTools::execCreateColorTextureFromGenerator)
{
	P_GET_STRUCT_REF(FVoxelColorTexture,Z_Param_Out_OutTexture);
	P_GET_OBJECT(UVoxelGeneratorInstanceWrapper,Z_Param_Generator);
	P_GET_PROPERTY(FNameProperty,Z_Param_OutputName);
	P_GET_PROPERTY(FIntProperty,Z_Param_SizeX);
	P_GET_PROPERTY(FIntProperty,Z_Param_SizeY);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Scale);
	P_GET_PROPERTY(FIntProperty,Z_Param_StartX);
	P_GET_PROPERTY(FIntProperty,Z_Param_StartY);
	P_FINISH;
	P_NATIVE_BEGIN;
	UVoxelGeneratorTools::CreateColorTextureFromGenerator(Z_Param_Out_OutTexture,Z_Param_Generator,Z_Param_OutputName,Z_Param_SizeX,Z_Param_SizeY,Z_Param_Scale,Z_Param_StartX,Z_Param_StartY);
	P_NATIVE_END;
}
// ********** End Class UVoxelGeneratorTools Function CreateColorTextureFromGenerator **************

// ********** Begin Class UVoxelGeneratorTools Function CreateColorTextureFromGeneratorAsync *******
struct Z_Construct_UFunction_UVoxelGeneratorTools_CreateColorTextureFromGeneratorAsync_Statics
{
	struct VoxelGeneratorTools_eventCreateColorTextureFromGeneratorAsync_Parms
	{
		UObject* WorldContextObject;
		FLatentActionInfo LatentInfo;
		FVoxelColorTexture OutTexture;
		UVoxelGeneratorInstanceWrapper* Generator;
		FName OutputName;
		int32 SizeX;
		int32 SizeY;
		float Scale;
		int32 StartX;
		int32 StartY;
		bool bHideLatentWarnings;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "StartX, StartY, VoxelSize, bHideLatentWarnings" },
		{ "Category", "Voxel|Generators" },
		{ "Comment", "/**\n\x09 * Creates a color texture by reading a color output from a generator, asynchronously\n\x09 * \n\x09 * @param\x09OutTexture\x09\x09\x09The result\n\x09 * @param\x09Generator\x09\x09\x09The generator to use\n\x09 * @param\x09OutputName\x09\x09\x09The output name to query. Must be a color output.\n\x09 * @param\x09SizeX\x09\x09\x09\x09The Size of the resulting texture on the X axis\n\x09 * @param\x09SizeY\x09\x09\x09\x09The Size of the resulting texture on the Y axis\n\x09 * @param\x09Scale\x09\x09\x09\x09Scale that can be used to scale the inputs: the generator will be queried as (Start + Position) * Scale\n\x09 * @param\x09StartX\x09\x09\x09\x09Where the texture starts\n\x09 * @param\x09StartY\x09\x09\x09\x09Where the texture starts\n\x09 */" },
		{ "CPP_Default_bHideLatentWarnings", "false" },
		{ "CPP_Default_OutputName", "MyColor" },
		{ "CPP_Default_Scale", "1.000000" },
		{ "CPP_Default_SizeX", "512" },
		{ "CPP_Default_SizeY", "512" },
		{ "CPP_Default_StartX", "0" },
		{ "CPP_Default_StartY", "0" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Public/VoxelGenerators/VoxelGeneratorTools.h" },
		{ "ToolTip", "Creates a color texture by reading a color output from a generator, asynchronously\n\n@param       OutTexture                      The result\n@param       Generator                       The generator to use\n@param       OutputName                      The output name to query. Must be a color output.\n@param       SizeX                           The Size of the resulting texture on the X axis\n@param       SizeY                           The Size of the resulting texture on the Y axis\n@param       Scale                           Scale that can be used to scale the inputs: the generator will be queried as (Start + Position) * Scale\n@param       StartX                          Where the texture starts\n@param       StartY                          Where the texture starts" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutTexture;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Generator;
	static const UECodeGen_Private::FNamePropertyParams NewProp_OutputName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SizeX;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SizeY;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Scale;
	static const UECodeGen_Private::FIntPropertyParams NewProp_StartX;
	static const UECodeGen_Private::FIntPropertyParams NewProp_StartY;
	static void NewProp_bHideLatentWarnings_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHideLatentWarnings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelGeneratorTools_CreateColorTextureFromGeneratorAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelGeneratorTools_eventCreateColorTextureFromGeneratorAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelGeneratorTools_CreateColorTextureFromGeneratorAsync_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelGeneratorTools_eventCreateColorTextureFromGeneratorAsync_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(0, nullptr) }; // 4146275481
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelGeneratorTools_CreateColorTextureFromGeneratorAsync_Statics::NewProp_OutTexture = { "OutTexture", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelGeneratorTools_eventCreateColorTextureFromGeneratorAsync_Parms, OutTexture), Z_Construct_UScriptStruct_FVoxelColorTexture, METADATA_PARAMS(0, nullptr) }; // 40891338
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelGeneratorTools_CreateColorTextureFromGeneratorAsync_Statics::NewProp_Generator = { "Generator", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelGeneratorTools_eventCreateColorTextureFromGeneratorAsync_Parms, Generator), Z_Construct_UClass_UVoxelGeneratorInstanceWrapper_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UVoxelGeneratorTools_CreateColorTextureFromGeneratorAsync_Statics::NewProp_OutputName = { "OutputName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelGeneratorTools_eventCreateColorTextureFromGeneratorAsync_Parms, OutputName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVoxelGeneratorTools_CreateColorTextureFromGeneratorAsync_Statics::NewProp_SizeX = { "SizeX", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelGeneratorTools_eventCreateColorTextureFromGeneratorAsync_Parms, SizeX), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVoxelGeneratorTools_CreateColorTextureFromGeneratorAsync_Statics::NewProp_SizeY = { "SizeY", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelGeneratorTools_eventCreateColorTextureFromGeneratorAsync_Parms, SizeY), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoxelGeneratorTools_CreateColorTextureFromGeneratorAsync_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelGeneratorTools_eventCreateColorTextureFromGeneratorAsync_Parms, Scale), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVoxelGeneratorTools_CreateColorTextureFromGeneratorAsync_Statics::NewProp_StartX = { "StartX", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelGeneratorTools_eventCreateColorTextureFromGeneratorAsync_Parms, StartX), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVoxelGeneratorTools_CreateColorTextureFromGeneratorAsync_Statics::NewProp_StartY = { "StartY", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelGeneratorTools_eventCreateColorTextureFromGeneratorAsync_Parms, StartY), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UVoxelGeneratorTools_CreateColorTextureFromGeneratorAsync_Statics::NewProp_bHideLatentWarnings_SetBit(void* Obj)
{
	((VoxelGeneratorTools_eventCreateColorTextureFromGeneratorAsync_Parms*)Obj)->bHideLatentWarnings = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelGeneratorTools_CreateColorTextureFromGeneratorAsync_Statics::NewProp_bHideLatentWarnings = { "bHideLatentWarnings", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VoxelGeneratorTools_eventCreateColorTextureFromGeneratorAsync_Parms), &Z_Construct_UFunction_UVoxelGeneratorTools_CreateColorTextureFromGeneratorAsync_Statics::NewProp_bHideLatentWarnings_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelGeneratorTools_CreateColorTextureFromGeneratorAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelGeneratorTools_CreateColorTextureFromGeneratorAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelGeneratorTools_CreateColorTextureFromGeneratorAsync_Statics::NewProp_LatentInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelGeneratorTools_CreateColorTextureFromGeneratorAsync_Statics::NewProp_OutTexture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelGeneratorTools_CreateColorTextureFromGeneratorAsync_Statics::NewProp_Generator,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelGeneratorTools_CreateColorTextureFromGeneratorAsync_Statics::NewProp_OutputName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelGeneratorTools_CreateColorTextureFromGeneratorAsync_Statics::NewProp_SizeX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelGeneratorTools_CreateColorTextureFromGeneratorAsync_Statics::NewProp_SizeY,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelGeneratorTools_CreateColorTextureFromGeneratorAsync_Statics::NewProp_Scale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelGeneratorTools_CreateColorTextureFromGeneratorAsync_Statics::NewProp_StartX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelGeneratorTools_CreateColorTextureFromGeneratorAsync_Statics::NewProp_StartY,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelGeneratorTools_CreateColorTextureFromGeneratorAsync_Statics::NewProp_bHideLatentWarnings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelGeneratorTools_CreateColorTextureFromGeneratorAsync_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelGeneratorTools_CreateColorTextureFromGeneratorAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelGeneratorTools, nullptr, "CreateColorTextureFromGeneratorAsync", Z_Construct_UFunction_UVoxelGeneratorTools_CreateColorTextureFromGeneratorAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelGeneratorTools_CreateColorTextureFromGeneratorAsync_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVoxelGeneratorTools_CreateColorTextureFromGeneratorAsync_Statics::VoxelGeneratorTools_eventCreateColorTextureFromGeneratorAsync_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelGeneratorTools_CreateColorTextureFromGeneratorAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelGeneratorTools_CreateColorTextureFromGeneratorAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVoxelGeneratorTools_CreateColorTextureFromGeneratorAsync_Statics::VoxelGeneratorTools_eventCreateColorTextureFromGeneratorAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVoxelGeneratorTools_CreateColorTextureFromGeneratorAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelGeneratorTools_CreateColorTextureFromGeneratorAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelGeneratorTools::execCreateColorTextureFromGeneratorAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
	P_GET_STRUCT_REF(FVoxelColorTexture,Z_Param_Out_OutTexture);
	P_GET_OBJECT(UVoxelGeneratorInstanceWrapper,Z_Param_Generator);
	P_GET_PROPERTY(FNameProperty,Z_Param_OutputName);
	P_GET_PROPERTY(FIntProperty,Z_Param_SizeX);
	P_GET_PROPERTY(FIntProperty,Z_Param_SizeY);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Scale);
	P_GET_PROPERTY(FIntProperty,Z_Param_StartX);
	P_GET_PROPERTY(FIntProperty,Z_Param_StartY);
	P_GET_UBOOL(Z_Param_bHideLatentWarnings);
	P_FINISH;
	P_NATIVE_BEGIN;
	UVoxelGeneratorTools::CreateColorTextureFromGeneratorAsync(Z_Param_WorldContextObject,Z_Param_LatentInfo,Z_Param_Out_OutTexture,Z_Param_Generator,Z_Param_OutputName,Z_Param_SizeX,Z_Param_SizeY,Z_Param_Scale,Z_Param_StartX,Z_Param_StartY,Z_Param_bHideLatentWarnings);
	P_NATIVE_END;
}
// ********** End Class UVoxelGeneratorTools Function CreateColorTextureFromGeneratorAsync *********

// ********** Begin Class UVoxelGeneratorTools Function CreateFloatTextureFromGenerator ************
struct Z_Construct_UFunction_UVoxelGeneratorTools_CreateFloatTextureFromGenerator_Statics
{
	struct VoxelGeneratorTools_eventCreateFloatTextureFromGenerator_Parms
	{
		FVoxelFloatTexture OutTexture;
		UVoxelGeneratorInstanceWrapper* Generator;
		FName OutputName;
		int32 SizeX;
		int32 SizeY;
		float Scale;
		int32 StartX;
		int32 StartY;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "StartX, StartY, VoxelSize" },
		{ "Category", "Voxel|Generators" },
		{ "Comment", "/**\n\x09 * Creates a float texture by reading a float output from a generator\n\x09 * \n\x09 * @param\x09OutTexture\x09\x09\x09The result\n\x09 * @param\x09Generator\x09\x09\x09The generator to use\n\x09 * @param\x09OutputName\x09\x09\x09The output name to query. Must be a float output.\n\x09 * @param\x09SizeX\x09\x09\x09\x09The Size of the resulting texture on the X axis\n\x09 * @param\x09SizeY\x09\x09\x09\x09The Size of the resulting texture on the Y axis\n\x09 * @param\x09Scale\x09\x09\x09\x09Scale that can be used to scale the inputs: the generator will be queried as (Start + Position) * Scale\n\x09 * @param\x09StartX\x09\x09\x09\x09Where the texture starts\n\x09 * @param\x09StartY\x09\x09\x09\x09Where the texture starts\n\x09 */" },
		{ "CPP_Default_OutputName", "Value" },
		{ "CPP_Default_Scale", "1.000000" },
		{ "CPP_Default_SizeX", "512" },
		{ "CPP_Default_SizeY", "512" },
		{ "CPP_Default_StartX", "0" },
		{ "CPP_Default_StartY", "0" },
		{ "ModuleRelativePath", "Public/VoxelGenerators/VoxelGeneratorTools.h" },
		{ "ToolTip", "Creates a float texture by reading a float output from a generator\n\n@param       OutTexture                      The result\n@param       Generator                       The generator to use\n@param       OutputName                      The output name to query. Must be a float output.\n@param       SizeX                           The Size of the resulting texture on the X axis\n@param       SizeY                           The Size of the resulting texture on the Y axis\n@param       Scale                           Scale that can be used to scale the inputs: the generator will be queried as (Start + Position) * Scale\n@param       StartX                          Where the texture starts\n@param       StartY                          Where the texture starts" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutTexture;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Generator;
	static const UECodeGen_Private::FNamePropertyParams NewProp_OutputName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SizeX;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SizeY;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Scale;
	static const UECodeGen_Private::FIntPropertyParams NewProp_StartX;
	static const UECodeGen_Private::FIntPropertyParams NewProp_StartY;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelGeneratorTools_CreateFloatTextureFromGenerator_Statics::NewProp_OutTexture = { "OutTexture", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelGeneratorTools_eventCreateFloatTextureFromGenerator_Parms, OutTexture), Z_Construct_UScriptStruct_FVoxelFloatTexture, METADATA_PARAMS(0, nullptr) }; // 369089072
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelGeneratorTools_CreateFloatTextureFromGenerator_Statics::NewProp_Generator = { "Generator", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelGeneratorTools_eventCreateFloatTextureFromGenerator_Parms, Generator), Z_Construct_UClass_UVoxelGeneratorInstanceWrapper_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UVoxelGeneratorTools_CreateFloatTextureFromGenerator_Statics::NewProp_OutputName = { "OutputName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelGeneratorTools_eventCreateFloatTextureFromGenerator_Parms, OutputName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVoxelGeneratorTools_CreateFloatTextureFromGenerator_Statics::NewProp_SizeX = { "SizeX", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelGeneratorTools_eventCreateFloatTextureFromGenerator_Parms, SizeX), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVoxelGeneratorTools_CreateFloatTextureFromGenerator_Statics::NewProp_SizeY = { "SizeY", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelGeneratorTools_eventCreateFloatTextureFromGenerator_Parms, SizeY), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoxelGeneratorTools_CreateFloatTextureFromGenerator_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelGeneratorTools_eventCreateFloatTextureFromGenerator_Parms, Scale), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVoxelGeneratorTools_CreateFloatTextureFromGenerator_Statics::NewProp_StartX = { "StartX", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelGeneratorTools_eventCreateFloatTextureFromGenerator_Parms, StartX), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVoxelGeneratorTools_CreateFloatTextureFromGenerator_Statics::NewProp_StartY = { "StartY", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelGeneratorTools_eventCreateFloatTextureFromGenerator_Parms, StartY), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelGeneratorTools_CreateFloatTextureFromGenerator_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelGeneratorTools_CreateFloatTextureFromGenerator_Statics::NewProp_OutTexture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelGeneratorTools_CreateFloatTextureFromGenerator_Statics::NewProp_Generator,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelGeneratorTools_CreateFloatTextureFromGenerator_Statics::NewProp_OutputName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelGeneratorTools_CreateFloatTextureFromGenerator_Statics::NewProp_SizeX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelGeneratorTools_CreateFloatTextureFromGenerator_Statics::NewProp_SizeY,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelGeneratorTools_CreateFloatTextureFromGenerator_Statics::NewProp_Scale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelGeneratorTools_CreateFloatTextureFromGenerator_Statics::NewProp_StartX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelGeneratorTools_CreateFloatTextureFromGenerator_Statics::NewProp_StartY,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelGeneratorTools_CreateFloatTextureFromGenerator_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelGeneratorTools_CreateFloatTextureFromGenerator_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelGeneratorTools, nullptr, "CreateFloatTextureFromGenerator", Z_Construct_UFunction_UVoxelGeneratorTools_CreateFloatTextureFromGenerator_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelGeneratorTools_CreateFloatTextureFromGenerator_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVoxelGeneratorTools_CreateFloatTextureFromGenerator_Statics::VoxelGeneratorTools_eventCreateFloatTextureFromGenerator_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelGeneratorTools_CreateFloatTextureFromGenerator_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelGeneratorTools_CreateFloatTextureFromGenerator_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVoxelGeneratorTools_CreateFloatTextureFromGenerator_Statics::VoxelGeneratorTools_eventCreateFloatTextureFromGenerator_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVoxelGeneratorTools_CreateFloatTextureFromGenerator()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelGeneratorTools_CreateFloatTextureFromGenerator_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelGeneratorTools::execCreateFloatTextureFromGenerator)
{
	P_GET_STRUCT_REF(FVoxelFloatTexture,Z_Param_Out_OutTexture);
	P_GET_OBJECT(UVoxelGeneratorInstanceWrapper,Z_Param_Generator);
	P_GET_PROPERTY(FNameProperty,Z_Param_OutputName);
	P_GET_PROPERTY(FIntProperty,Z_Param_SizeX);
	P_GET_PROPERTY(FIntProperty,Z_Param_SizeY);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Scale);
	P_GET_PROPERTY(FIntProperty,Z_Param_StartX);
	P_GET_PROPERTY(FIntProperty,Z_Param_StartY);
	P_FINISH;
	P_NATIVE_BEGIN;
	UVoxelGeneratorTools::CreateFloatTextureFromGenerator(Z_Param_Out_OutTexture,Z_Param_Generator,Z_Param_OutputName,Z_Param_SizeX,Z_Param_SizeY,Z_Param_Scale,Z_Param_StartX,Z_Param_StartY);
	P_NATIVE_END;
}
// ********** End Class UVoxelGeneratorTools Function CreateFloatTextureFromGenerator **************

// ********** Begin Class UVoxelGeneratorTools Function CreateFloatTextureFromGeneratorAsync *******
struct Z_Construct_UFunction_UVoxelGeneratorTools_CreateFloatTextureFromGeneratorAsync_Statics
{
	struct VoxelGeneratorTools_eventCreateFloatTextureFromGeneratorAsync_Parms
	{
		UObject* WorldContextObject;
		FLatentActionInfo LatentInfo;
		FVoxelFloatTexture OutTexture;
		UVoxelGeneratorInstanceWrapper* Generator;
		FName OutputName;
		int32 SizeX;
		int32 SizeY;
		float Scale;
		int32 StartX;
		int32 StartY;
		bool bHideLatentWarnings;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "StartX, StartY, VoxelSize, bHideLatentWarnings" },
		{ "Category", "Voxel|Generators" },
		{ "Comment", "/**\n\x09 * Creates a float texture by reading a float output from a generator, asynchronously\n\x09 * \n\x09 * @param\x09OutTexture\x09\x09\x09The result\n\x09 * @param\x09Generator\x09\x09\x09The generator to use\n\x09 * @param\x09OutputName\x09\x09\x09The output name to query. Must be a float output.\n\x09 * @param\x09SizeX\x09\x09\x09\x09The Size of the resulting texture on the X axis\n\x09 * @param\x09SizeY\x09\x09\x09\x09The Size of the resulting texture on the Y axis\n\x09 * @param\x09Scale\x09\x09\x09\x09Scale that can be used to scale the inputs: the generator will be queried as (Start + Position) * Scale\n\x09 * @param\x09StartX\x09\x09\x09\x09Where the texture starts\n\x09 * @param\x09StartY\x09\x09\x09\x09Where the texture starts\n\x09 */" },
		{ "CPP_Default_bHideLatentWarnings", "false" },
		{ "CPP_Default_OutputName", "Value" },
		{ "CPP_Default_Scale", "1.000000" },
		{ "CPP_Default_SizeX", "512" },
		{ "CPP_Default_SizeY", "512" },
		{ "CPP_Default_StartX", "0" },
		{ "CPP_Default_StartY", "0" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Public/VoxelGenerators/VoxelGeneratorTools.h" },
		{ "ToolTip", "Creates a float texture by reading a float output from a generator, asynchronously\n\n@param       OutTexture                      The result\n@param       Generator                       The generator to use\n@param       OutputName                      The output name to query. Must be a float output.\n@param       SizeX                           The Size of the resulting texture on the X axis\n@param       SizeY                           The Size of the resulting texture on the Y axis\n@param       Scale                           Scale that can be used to scale the inputs: the generator will be queried as (Start + Position) * Scale\n@param       StartX                          Where the texture starts\n@param       StartY                          Where the texture starts" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutTexture;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Generator;
	static const UECodeGen_Private::FNamePropertyParams NewProp_OutputName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SizeX;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SizeY;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Scale;
	static const UECodeGen_Private::FIntPropertyParams NewProp_StartX;
	static const UECodeGen_Private::FIntPropertyParams NewProp_StartY;
	static void NewProp_bHideLatentWarnings_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHideLatentWarnings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelGeneratorTools_CreateFloatTextureFromGeneratorAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelGeneratorTools_eventCreateFloatTextureFromGeneratorAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelGeneratorTools_CreateFloatTextureFromGeneratorAsync_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelGeneratorTools_eventCreateFloatTextureFromGeneratorAsync_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(0, nullptr) }; // 4146275481
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelGeneratorTools_CreateFloatTextureFromGeneratorAsync_Statics::NewProp_OutTexture = { "OutTexture", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelGeneratorTools_eventCreateFloatTextureFromGeneratorAsync_Parms, OutTexture), Z_Construct_UScriptStruct_FVoxelFloatTexture, METADATA_PARAMS(0, nullptr) }; // 369089072
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelGeneratorTools_CreateFloatTextureFromGeneratorAsync_Statics::NewProp_Generator = { "Generator", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelGeneratorTools_eventCreateFloatTextureFromGeneratorAsync_Parms, Generator), Z_Construct_UClass_UVoxelGeneratorInstanceWrapper_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UVoxelGeneratorTools_CreateFloatTextureFromGeneratorAsync_Statics::NewProp_OutputName = { "OutputName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelGeneratorTools_eventCreateFloatTextureFromGeneratorAsync_Parms, OutputName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVoxelGeneratorTools_CreateFloatTextureFromGeneratorAsync_Statics::NewProp_SizeX = { "SizeX", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelGeneratorTools_eventCreateFloatTextureFromGeneratorAsync_Parms, SizeX), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVoxelGeneratorTools_CreateFloatTextureFromGeneratorAsync_Statics::NewProp_SizeY = { "SizeY", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelGeneratorTools_eventCreateFloatTextureFromGeneratorAsync_Parms, SizeY), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoxelGeneratorTools_CreateFloatTextureFromGeneratorAsync_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelGeneratorTools_eventCreateFloatTextureFromGeneratorAsync_Parms, Scale), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVoxelGeneratorTools_CreateFloatTextureFromGeneratorAsync_Statics::NewProp_StartX = { "StartX", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelGeneratorTools_eventCreateFloatTextureFromGeneratorAsync_Parms, StartX), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVoxelGeneratorTools_CreateFloatTextureFromGeneratorAsync_Statics::NewProp_StartY = { "StartY", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelGeneratorTools_eventCreateFloatTextureFromGeneratorAsync_Parms, StartY), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UVoxelGeneratorTools_CreateFloatTextureFromGeneratorAsync_Statics::NewProp_bHideLatentWarnings_SetBit(void* Obj)
{
	((VoxelGeneratorTools_eventCreateFloatTextureFromGeneratorAsync_Parms*)Obj)->bHideLatentWarnings = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelGeneratorTools_CreateFloatTextureFromGeneratorAsync_Statics::NewProp_bHideLatentWarnings = { "bHideLatentWarnings", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VoxelGeneratorTools_eventCreateFloatTextureFromGeneratorAsync_Parms), &Z_Construct_UFunction_UVoxelGeneratorTools_CreateFloatTextureFromGeneratorAsync_Statics::NewProp_bHideLatentWarnings_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelGeneratorTools_CreateFloatTextureFromGeneratorAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelGeneratorTools_CreateFloatTextureFromGeneratorAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelGeneratorTools_CreateFloatTextureFromGeneratorAsync_Statics::NewProp_LatentInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelGeneratorTools_CreateFloatTextureFromGeneratorAsync_Statics::NewProp_OutTexture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelGeneratorTools_CreateFloatTextureFromGeneratorAsync_Statics::NewProp_Generator,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelGeneratorTools_CreateFloatTextureFromGeneratorAsync_Statics::NewProp_OutputName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelGeneratorTools_CreateFloatTextureFromGeneratorAsync_Statics::NewProp_SizeX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelGeneratorTools_CreateFloatTextureFromGeneratorAsync_Statics::NewProp_SizeY,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelGeneratorTools_CreateFloatTextureFromGeneratorAsync_Statics::NewProp_Scale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelGeneratorTools_CreateFloatTextureFromGeneratorAsync_Statics::NewProp_StartX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelGeneratorTools_CreateFloatTextureFromGeneratorAsync_Statics::NewProp_StartY,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelGeneratorTools_CreateFloatTextureFromGeneratorAsync_Statics::NewProp_bHideLatentWarnings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelGeneratorTools_CreateFloatTextureFromGeneratorAsync_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelGeneratorTools_CreateFloatTextureFromGeneratorAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelGeneratorTools, nullptr, "CreateFloatTextureFromGeneratorAsync", Z_Construct_UFunction_UVoxelGeneratorTools_CreateFloatTextureFromGeneratorAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelGeneratorTools_CreateFloatTextureFromGeneratorAsync_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVoxelGeneratorTools_CreateFloatTextureFromGeneratorAsync_Statics::VoxelGeneratorTools_eventCreateFloatTextureFromGeneratorAsync_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelGeneratorTools_CreateFloatTextureFromGeneratorAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelGeneratorTools_CreateFloatTextureFromGeneratorAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVoxelGeneratorTools_CreateFloatTextureFromGeneratorAsync_Statics::VoxelGeneratorTools_eventCreateFloatTextureFromGeneratorAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVoxelGeneratorTools_CreateFloatTextureFromGeneratorAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelGeneratorTools_CreateFloatTextureFromGeneratorAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelGeneratorTools::execCreateFloatTextureFromGeneratorAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
	P_GET_STRUCT_REF(FVoxelFloatTexture,Z_Param_Out_OutTexture);
	P_GET_OBJECT(UVoxelGeneratorInstanceWrapper,Z_Param_Generator);
	P_GET_PROPERTY(FNameProperty,Z_Param_OutputName);
	P_GET_PROPERTY(FIntProperty,Z_Param_SizeX);
	P_GET_PROPERTY(FIntProperty,Z_Param_SizeY);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Scale);
	P_GET_PROPERTY(FIntProperty,Z_Param_StartX);
	P_GET_PROPERTY(FIntProperty,Z_Param_StartY);
	P_GET_UBOOL(Z_Param_bHideLatentWarnings);
	P_FINISH;
	P_NATIVE_BEGIN;
	UVoxelGeneratorTools::CreateFloatTextureFromGeneratorAsync(Z_Param_WorldContextObject,Z_Param_LatentInfo,Z_Param_Out_OutTexture,Z_Param_Generator,Z_Param_OutputName,Z_Param_SizeX,Z_Param_SizeY,Z_Param_Scale,Z_Param_StartX,Z_Param_StartY,Z_Param_bHideLatentWarnings);
	P_NATIVE_END;
}
// ********** End Class UVoxelGeneratorTools Function CreateFloatTextureFromGeneratorAsync *********

// ********** Begin Class UVoxelGeneratorTools Function IsValid_GeneratorPicker ********************
struct Z_Construct_UFunction_UVoxelGeneratorTools_IsValid_GeneratorPicker_Statics
{
	struct VoxelGeneratorTools_eventIsValid_GeneratorPicker_Parms
	{
		FVoxelGeneratorPicker GeneratorPicker;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Voxel|Generators" },
		{ "DisplayName", "Is Valid" },
		{ "ModuleRelativePath", "Public/VoxelGenerators/VoxelGeneratorTools.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_GeneratorPicker;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelGeneratorTools_IsValid_GeneratorPicker_Statics::NewProp_GeneratorPicker = { "GeneratorPicker", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelGeneratorTools_eventIsValid_GeneratorPicker_Parms, GeneratorPicker), Z_Construct_UScriptStruct_FVoxelGeneratorPicker, METADATA_PARAMS(0, nullptr) }; // 3276742823
void Z_Construct_UFunction_UVoxelGeneratorTools_IsValid_GeneratorPicker_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((VoxelGeneratorTools_eventIsValid_GeneratorPicker_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelGeneratorTools_IsValid_GeneratorPicker_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VoxelGeneratorTools_eventIsValid_GeneratorPicker_Parms), &Z_Construct_UFunction_UVoxelGeneratorTools_IsValid_GeneratorPicker_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelGeneratorTools_IsValid_GeneratorPicker_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelGeneratorTools_IsValid_GeneratorPicker_Statics::NewProp_GeneratorPicker,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelGeneratorTools_IsValid_GeneratorPicker_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelGeneratorTools_IsValid_GeneratorPicker_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelGeneratorTools_IsValid_GeneratorPicker_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelGeneratorTools, nullptr, "IsValid_GeneratorPicker", Z_Construct_UFunction_UVoxelGeneratorTools_IsValid_GeneratorPicker_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelGeneratorTools_IsValid_GeneratorPicker_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVoxelGeneratorTools_IsValid_GeneratorPicker_Statics::VoxelGeneratorTools_eventIsValid_GeneratorPicker_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelGeneratorTools_IsValid_GeneratorPicker_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelGeneratorTools_IsValid_GeneratorPicker_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVoxelGeneratorTools_IsValid_GeneratorPicker_Statics::VoxelGeneratorTools_eventIsValid_GeneratorPicker_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVoxelGeneratorTools_IsValid_GeneratorPicker()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelGeneratorTools_IsValid_GeneratorPicker_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelGeneratorTools::execIsValid_GeneratorPicker)
{
	P_GET_STRUCT(FVoxelGeneratorPicker,Z_Param_GeneratorPicker);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UVoxelGeneratorTools::IsValid_GeneratorPicker(Z_Param_GeneratorPicker);
	P_NATIVE_END;
}
// ********** End Class UVoxelGeneratorTools Function IsValid_GeneratorPicker **********************

// ********** Begin Class UVoxelGeneratorTools Function IsValid_TransformableGeneratorPicker *******
struct Z_Construct_UFunction_UVoxelGeneratorTools_IsValid_TransformableGeneratorPicker_Statics
{
	struct VoxelGeneratorTools_eventIsValid_TransformableGeneratorPicker_Parms
	{
		FVoxelTransformableGeneratorPicker GeneratorPicker;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Voxel|Generators" },
		{ "DisplayName", "Is Valid" },
		{ "ModuleRelativePath", "Public/VoxelGenerators/VoxelGeneratorTools.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_GeneratorPicker;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelGeneratorTools_IsValid_TransformableGeneratorPicker_Statics::NewProp_GeneratorPicker = { "GeneratorPicker", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelGeneratorTools_eventIsValid_TransformableGeneratorPicker_Parms, GeneratorPicker), Z_Construct_UScriptStruct_FVoxelTransformableGeneratorPicker, METADATA_PARAMS(0, nullptr) }; // 3102180178
void Z_Construct_UFunction_UVoxelGeneratorTools_IsValid_TransformableGeneratorPicker_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((VoxelGeneratorTools_eventIsValid_TransformableGeneratorPicker_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelGeneratorTools_IsValid_TransformableGeneratorPicker_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VoxelGeneratorTools_eventIsValid_TransformableGeneratorPicker_Parms), &Z_Construct_UFunction_UVoxelGeneratorTools_IsValid_TransformableGeneratorPicker_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelGeneratorTools_IsValid_TransformableGeneratorPicker_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelGeneratorTools_IsValid_TransformableGeneratorPicker_Statics::NewProp_GeneratorPicker,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelGeneratorTools_IsValid_TransformableGeneratorPicker_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelGeneratorTools_IsValid_TransformableGeneratorPicker_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelGeneratorTools_IsValid_TransformableGeneratorPicker_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelGeneratorTools, nullptr, "IsValid_TransformableGeneratorPicker", Z_Construct_UFunction_UVoxelGeneratorTools_IsValid_TransformableGeneratorPicker_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelGeneratorTools_IsValid_TransformableGeneratorPicker_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVoxelGeneratorTools_IsValid_TransformableGeneratorPicker_Statics::VoxelGeneratorTools_eventIsValid_TransformableGeneratorPicker_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelGeneratorTools_IsValid_TransformableGeneratorPicker_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelGeneratorTools_IsValid_TransformableGeneratorPicker_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVoxelGeneratorTools_IsValid_TransformableGeneratorPicker_Statics::VoxelGeneratorTools_eventIsValid_TransformableGeneratorPicker_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVoxelGeneratorTools_IsValid_TransformableGeneratorPicker()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelGeneratorTools_IsValid_TransformableGeneratorPicker_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelGeneratorTools::execIsValid_TransformableGeneratorPicker)
{
	P_GET_STRUCT(FVoxelTransformableGeneratorPicker,Z_Param_GeneratorPicker);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UVoxelGeneratorTools::IsValid_TransformableGeneratorPicker(Z_Param_GeneratorPicker);
	P_NATIVE_END;
}
// ********** End Class UVoxelGeneratorTools Function IsValid_TransformableGeneratorPicker *********

// ********** Begin Class UVoxelGeneratorTools Function MakeGeneratorInstance **********************
struct Z_Construct_UFunction_UVoxelGeneratorTools_MakeGeneratorInstance_Statics
{
	struct VoxelGeneratorTools_eventMakeGeneratorInstance_Parms
	{
		FVoxelGeneratorPicker GeneratorPicker;
		FVoxelGeneratorInit GeneratorInit;
		UVoxelGeneratorInstanceWrapper* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Voxel|Generators" },
		{ "Comment", "/**\n\x09 * Creates a new generator instance. Consider using VoxelWorld->GetGeneratorCache()->MakeGeneratorInstance instead\n\x09 * @param\x09GeneratorPicker\x09\x09The picker\n\x09 * @param\x09GeneratorInit\x09\x09The generator init. Use VoxelWorld->GetGeneratorInit to get it\n\x09 * @return\x09The generator instance\n\x09 */" },
		{ "Keywords", "construct build" },
		{ "ModuleRelativePath", "Public/VoxelGenerators/VoxelGeneratorTools.h" },
		{ "ToolTip", "Creates a new generator instance. Consider using VoxelWorld->GetGeneratorCache()->MakeGeneratorInstance instead\n@param       GeneratorPicker         The picker\n@param       GeneratorInit           The generator init. Use VoxelWorld->GetGeneratorInit to get it\n@return      The generator instance" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_GeneratorPicker;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GeneratorInit;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelGeneratorTools_MakeGeneratorInstance_Statics::NewProp_GeneratorPicker = { "GeneratorPicker", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelGeneratorTools_eventMakeGeneratorInstance_Parms, GeneratorPicker), Z_Construct_UScriptStruct_FVoxelGeneratorPicker, METADATA_PARAMS(0, nullptr) }; // 3276742823
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelGeneratorTools_MakeGeneratorInstance_Statics::NewProp_GeneratorInit = { "GeneratorInit", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelGeneratorTools_eventMakeGeneratorInstance_Parms, GeneratorInit), Z_Construct_UScriptStruct_FVoxelGeneratorInit, METADATA_PARAMS(0, nullptr) }; // 2675460303
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelGeneratorTools_MakeGeneratorInstance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelGeneratorTools_eventMakeGeneratorInstance_Parms, ReturnValue), Z_Construct_UClass_UVoxelGeneratorInstanceWrapper_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelGeneratorTools_MakeGeneratorInstance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelGeneratorTools_MakeGeneratorInstance_Statics::NewProp_GeneratorPicker,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelGeneratorTools_MakeGeneratorInstance_Statics::NewProp_GeneratorInit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelGeneratorTools_MakeGeneratorInstance_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelGeneratorTools_MakeGeneratorInstance_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelGeneratorTools_MakeGeneratorInstance_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelGeneratorTools, nullptr, "MakeGeneratorInstance", Z_Construct_UFunction_UVoxelGeneratorTools_MakeGeneratorInstance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelGeneratorTools_MakeGeneratorInstance_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVoxelGeneratorTools_MakeGeneratorInstance_Statics::VoxelGeneratorTools_eventMakeGeneratorInstance_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelGeneratorTools_MakeGeneratorInstance_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelGeneratorTools_MakeGeneratorInstance_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVoxelGeneratorTools_MakeGeneratorInstance_Statics::VoxelGeneratorTools_eventMakeGeneratorInstance_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVoxelGeneratorTools_MakeGeneratorInstance()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelGeneratorTools_MakeGeneratorInstance_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelGeneratorTools::execMakeGeneratorInstance)
{
	P_GET_STRUCT(FVoxelGeneratorPicker,Z_Param_GeneratorPicker);
	P_GET_STRUCT(FVoxelGeneratorInit,Z_Param_GeneratorInit);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UVoxelGeneratorInstanceWrapper**)Z_Param__Result=UVoxelGeneratorTools::MakeGeneratorInstance(Z_Param_GeneratorPicker,Z_Param_GeneratorInit);
	P_NATIVE_END;
}
// ********** End Class UVoxelGeneratorTools Function MakeGeneratorInstance ************************

// ********** Begin Class UVoxelGeneratorTools Function MakeGeneratorPickerFromClass ***************
struct Z_Construct_UFunction_UVoxelGeneratorTools_MakeGeneratorPickerFromClass_Statics
{
	struct VoxelGeneratorTools_eventMakeGeneratorPickerFromClass_Parms
	{
		TSubclassOf<UVoxelGenerator> GeneratorClass;
		FVoxelGeneratorPicker ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Voxel|Generators" },
		{ "Comment", "/**\n\x09 * @see MakeGeneratorPickerFromObject\n\x09 */" },
		{ "Keywords", "construct build" },
		{ "ModuleRelativePath", "Public/VoxelGenerators/VoxelGeneratorTools.h" },
		{ "NativeMakeFunc", "" },
		{ "ToolTip", "@see MakeGeneratorPickerFromObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_GeneratorClass;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UVoxelGeneratorTools_MakeGeneratorPickerFromClass_Statics::NewProp_GeneratorClass = { "GeneratorClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelGeneratorTools_eventMakeGeneratorPickerFromClass_Parms, GeneratorClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UVoxelGenerator_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelGeneratorTools_MakeGeneratorPickerFromClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelGeneratorTools_eventMakeGeneratorPickerFromClass_Parms, ReturnValue), Z_Construct_UScriptStruct_FVoxelGeneratorPicker, METADATA_PARAMS(0, nullptr) }; // 3276742823
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelGeneratorTools_MakeGeneratorPickerFromClass_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelGeneratorTools_MakeGeneratorPickerFromClass_Statics::NewProp_GeneratorClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelGeneratorTools_MakeGeneratorPickerFromClass_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelGeneratorTools_MakeGeneratorPickerFromClass_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelGeneratorTools_MakeGeneratorPickerFromClass_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelGeneratorTools, nullptr, "MakeGeneratorPickerFromClass", Z_Construct_UFunction_UVoxelGeneratorTools_MakeGeneratorPickerFromClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelGeneratorTools_MakeGeneratorPickerFromClass_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVoxelGeneratorTools_MakeGeneratorPickerFromClass_Statics::VoxelGeneratorTools_eventMakeGeneratorPickerFromClass_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelGeneratorTools_MakeGeneratorPickerFromClass_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelGeneratorTools_MakeGeneratorPickerFromClass_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVoxelGeneratorTools_MakeGeneratorPickerFromClass_Statics::VoxelGeneratorTools_eventMakeGeneratorPickerFromClass_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVoxelGeneratorTools_MakeGeneratorPickerFromClass()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelGeneratorTools_MakeGeneratorPickerFromClass_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelGeneratorTools::execMakeGeneratorPickerFromClass)
{
	P_GET_OBJECT(UClass,Z_Param_GeneratorClass);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVoxelGeneratorPicker*)Z_Param__Result=UVoxelGeneratorTools::MakeGeneratorPickerFromClass(Z_Param_GeneratorClass);
	P_NATIVE_END;
}
// ********** End Class UVoxelGeneratorTools Function MakeGeneratorPickerFromClass *****************

// ********** Begin Class UVoxelGeneratorTools Function MakeGeneratorPickerFromObject **************
struct Z_Construct_UFunction_UVoxelGeneratorTools_MakeGeneratorPickerFromObject_Statics
{
	struct VoxelGeneratorTools_eventMakeGeneratorPickerFromObject_Parms
	{
		UVoxelGenerator* Generator;
		FVoxelGeneratorPicker ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Voxel|Generators" },
		{ "Comment", "/**\n\x09 * @see MakeGeneratorPickerFromClass, MakeTransformableGeneratorPickerFromObject\n\x09 */" },
		{ "Keywords", "construct build" },
		{ "ModuleRelativePath", "Public/VoxelGenerators/VoxelGeneratorTools.h" },
		{ "NativeMakeFunc", "" },
		{ "ToolTip", "@see MakeGeneratorPickerFromClass, MakeTransformableGeneratorPickerFromObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Generator;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelGeneratorTools_MakeGeneratorPickerFromObject_Statics::NewProp_Generator = { "Generator", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelGeneratorTools_eventMakeGeneratorPickerFromObject_Parms, Generator), Z_Construct_UClass_UVoxelGenerator_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelGeneratorTools_MakeGeneratorPickerFromObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelGeneratorTools_eventMakeGeneratorPickerFromObject_Parms, ReturnValue), Z_Construct_UScriptStruct_FVoxelGeneratorPicker, METADATA_PARAMS(0, nullptr) }; // 3276742823
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelGeneratorTools_MakeGeneratorPickerFromObject_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelGeneratorTools_MakeGeneratorPickerFromObject_Statics::NewProp_Generator,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelGeneratorTools_MakeGeneratorPickerFromObject_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelGeneratorTools_MakeGeneratorPickerFromObject_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelGeneratorTools_MakeGeneratorPickerFromObject_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelGeneratorTools, nullptr, "MakeGeneratorPickerFromObject", Z_Construct_UFunction_UVoxelGeneratorTools_MakeGeneratorPickerFromObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelGeneratorTools_MakeGeneratorPickerFromObject_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVoxelGeneratorTools_MakeGeneratorPickerFromObject_Statics::VoxelGeneratorTools_eventMakeGeneratorPickerFromObject_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelGeneratorTools_MakeGeneratorPickerFromObject_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelGeneratorTools_MakeGeneratorPickerFromObject_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVoxelGeneratorTools_MakeGeneratorPickerFromObject_Statics::VoxelGeneratorTools_eventMakeGeneratorPickerFromObject_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVoxelGeneratorTools_MakeGeneratorPickerFromObject()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelGeneratorTools_MakeGeneratorPickerFromObject_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelGeneratorTools::execMakeGeneratorPickerFromObject)
{
	P_GET_OBJECT(UVoxelGenerator,Z_Param_Generator);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVoxelGeneratorPicker*)Z_Param__Result=UVoxelGeneratorTools::MakeGeneratorPickerFromObject(Z_Param_Generator);
	P_NATIVE_END;
}
// ********** End Class UVoxelGeneratorTools Function MakeGeneratorPickerFromObject ****************

// ********** Begin Class UVoxelGeneratorTools Function MakeTransformableGeneratorInstance *********
struct Z_Construct_UFunction_UVoxelGeneratorTools_MakeTransformableGeneratorInstance_Statics
{
	struct VoxelGeneratorTools_eventMakeTransformableGeneratorInstance_Parms
	{
		FVoxelTransformableGeneratorPicker GeneratorPicker;
		FVoxelGeneratorInit GeneratorInit;
		UVoxelTransformableGeneratorInstanceWrapper* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Voxel|Generators" },
		{ "Comment", "/**\n\x09 * Creates a new transformable generator instance. Consider using VoxelWorld->GetGeneratorCache()->MakeTransformableGeneratorInstance instead\n\x09 * @param\x09GeneratorPicker\x09\x09The picker\n\x09 * @param\x09GeneratorInit\x09\x09The generator init. Use VoxelWorld->GetGeneratorInit to get it\n\x09 * @return\x09The generator instance\n\x09 */" },
		{ "Keywords", "construct build" },
		{ "ModuleRelativePath", "Public/VoxelGenerators/VoxelGeneratorTools.h" },
		{ "ToolTip", "Creates a new transformable generator instance. Consider using VoxelWorld->GetGeneratorCache()->MakeTransformableGeneratorInstance instead\n@param       GeneratorPicker         The picker\n@param       GeneratorInit           The generator init. Use VoxelWorld->GetGeneratorInit to get it\n@return      The generator instance" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_GeneratorPicker;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GeneratorInit;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelGeneratorTools_MakeTransformableGeneratorInstance_Statics::NewProp_GeneratorPicker = { "GeneratorPicker", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelGeneratorTools_eventMakeTransformableGeneratorInstance_Parms, GeneratorPicker), Z_Construct_UScriptStruct_FVoxelTransformableGeneratorPicker, METADATA_PARAMS(0, nullptr) }; // 3102180178
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelGeneratorTools_MakeTransformableGeneratorInstance_Statics::NewProp_GeneratorInit = { "GeneratorInit", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelGeneratorTools_eventMakeTransformableGeneratorInstance_Parms, GeneratorInit), Z_Construct_UScriptStruct_FVoxelGeneratorInit, METADATA_PARAMS(0, nullptr) }; // 2675460303
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelGeneratorTools_MakeTransformableGeneratorInstance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelGeneratorTools_eventMakeTransformableGeneratorInstance_Parms, ReturnValue), Z_Construct_UClass_UVoxelTransformableGeneratorInstanceWrapper_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelGeneratorTools_MakeTransformableGeneratorInstance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelGeneratorTools_MakeTransformableGeneratorInstance_Statics::NewProp_GeneratorPicker,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelGeneratorTools_MakeTransformableGeneratorInstance_Statics::NewProp_GeneratorInit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelGeneratorTools_MakeTransformableGeneratorInstance_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelGeneratorTools_MakeTransformableGeneratorInstance_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelGeneratorTools_MakeTransformableGeneratorInstance_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelGeneratorTools, nullptr, "MakeTransformableGeneratorInstance", Z_Construct_UFunction_UVoxelGeneratorTools_MakeTransformableGeneratorInstance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelGeneratorTools_MakeTransformableGeneratorInstance_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVoxelGeneratorTools_MakeTransformableGeneratorInstance_Statics::VoxelGeneratorTools_eventMakeTransformableGeneratorInstance_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelGeneratorTools_MakeTransformableGeneratorInstance_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelGeneratorTools_MakeTransformableGeneratorInstance_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVoxelGeneratorTools_MakeTransformableGeneratorInstance_Statics::VoxelGeneratorTools_eventMakeTransformableGeneratorInstance_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVoxelGeneratorTools_MakeTransformableGeneratorInstance()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelGeneratorTools_MakeTransformableGeneratorInstance_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelGeneratorTools::execMakeTransformableGeneratorInstance)
{
	P_GET_STRUCT(FVoxelTransformableGeneratorPicker,Z_Param_GeneratorPicker);
	P_GET_STRUCT(FVoxelGeneratorInit,Z_Param_GeneratorInit);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UVoxelTransformableGeneratorInstanceWrapper**)Z_Param__Result=UVoxelGeneratorTools::MakeTransformableGeneratorInstance(Z_Param_GeneratorPicker,Z_Param_GeneratorInit);
	P_NATIVE_END;
}
// ********** End Class UVoxelGeneratorTools Function MakeTransformableGeneratorInstance ***********

// ********** Begin Class UVoxelGeneratorTools Function MakeTransformableGeneratorPickerFromClass **
struct Z_Construct_UFunction_UVoxelGeneratorTools_MakeTransformableGeneratorPickerFromClass_Statics
{
	struct VoxelGeneratorTools_eventMakeTransformableGeneratorPickerFromClass_Parms
	{
		TSubclassOf<UVoxelTransformableGenerator> GeneratorClass;
		FVoxelTransformableGeneratorPicker ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Voxel|Generators" },
		{ "Comment", "/**\n\x09 * @see MakeTransformableGeneratorPickerFromObject, MakeGeneratorPickerFromClass\n\x09 */" },
		{ "Keywords", "construct build" },
		{ "ModuleRelativePath", "Public/VoxelGenerators/VoxelGeneratorTools.h" },
		{ "NativeMakeFunc", "" },
		{ "ToolTip", "@see MakeTransformableGeneratorPickerFromObject, MakeGeneratorPickerFromClass" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_GeneratorClass;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UVoxelGeneratorTools_MakeTransformableGeneratorPickerFromClass_Statics::NewProp_GeneratorClass = { "GeneratorClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelGeneratorTools_eventMakeTransformableGeneratorPickerFromClass_Parms, GeneratorClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UVoxelTransformableGenerator_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelGeneratorTools_MakeTransformableGeneratorPickerFromClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelGeneratorTools_eventMakeTransformableGeneratorPickerFromClass_Parms, ReturnValue), Z_Construct_UScriptStruct_FVoxelTransformableGeneratorPicker, METADATA_PARAMS(0, nullptr) }; // 3102180178
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelGeneratorTools_MakeTransformableGeneratorPickerFromClass_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelGeneratorTools_MakeTransformableGeneratorPickerFromClass_Statics::NewProp_GeneratorClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelGeneratorTools_MakeTransformableGeneratorPickerFromClass_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelGeneratorTools_MakeTransformableGeneratorPickerFromClass_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelGeneratorTools_MakeTransformableGeneratorPickerFromClass_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelGeneratorTools, nullptr, "MakeTransformableGeneratorPickerFromClass", Z_Construct_UFunction_UVoxelGeneratorTools_MakeTransformableGeneratorPickerFromClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelGeneratorTools_MakeTransformableGeneratorPickerFromClass_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVoxelGeneratorTools_MakeTransformableGeneratorPickerFromClass_Statics::VoxelGeneratorTools_eventMakeTransformableGeneratorPickerFromClass_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelGeneratorTools_MakeTransformableGeneratorPickerFromClass_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelGeneratorTools_MakeTransformableGeneratorPickerFromClass_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVoxelGeneratorTools_MakeTransformableGeneratorPickerFromClass_Statics::VoxelGeneratorTools_eventMakeTransformableGeneratorPickerFromClass_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVoxelGeneratorTools_MakeTransformableGeneratorPickerFromClass()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelGeneratorTools_MakeTransformableGeneratorPickerFromClass_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelGeneratorTools::execMakeTransformableGeneratorPickerFromClass)
{
	P_GET_OBJECT(UClass,Z_Param_GeneratorClass);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVoxelTransformableGeneratorPicker*)Z_Param__Result=UVoxelGeneratorTools::MakeTransformableGeneratorPickerFromClass(Z_Param_GeneratorClass);
	P_NATIVE_END;
}
// ********** End Class UVoxelGeneratorTools Function MakeTransformableGeneratorPickerFromClass ****

// ********** Begin Class UVoxelGeneratorTools Function MakeTransformableGeneratorPickerFromObject *
struct Z_Construct_UFunction_UVoxelGeneratorTools_MakeTransformableGeneratorPickerFromObject_Statics
{
	struct VoxelGeneratorTools_eventMakeTransformableGeneratorPickerFromObject_Parms
	{
		UVoxelTransformableGenerator* Generator;
		FVoxelTransformableGeneratorPicker ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Voxel|Generators" },
		{ "Comment", "/**\n\x09 * @see MakeTransformableGeneratorPickerFromClass, MakeGeneratorPickerFromObject\n\x09 */" },
		{ "Keywords", "construct build" },
		{ "ModuleRelativePath", "Public/VoxelGenerators/VoxelGeneratorTools.h" },
		{ "NativeMakeFunc", "" },
		{ "ToolTip", "@see MakeTransformableGeneratorPickerFromClass, MakeGeneratorPickerFromObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Generator;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelGeneratorTools_MakeTransformableGeneratorPickerFromObject_Statics::NewProp_Generator = { "Generator", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelGeneratorTools_eventMakeTransformableGeneratorPickerFromObject_Parms, Generator), Z_Construct_UClass_UVoxelTransformableGenerator_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelGeneratorTools_MakeTransformableGeneratorPickerFromObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelGeneratorTools_eventMakeTransformableGeneratorPickerFromObject_Parms, ReturnValue), Z_Construct_UScriptStruct_FVoxelTransformableGeneratorPicker, METADATA_PARAMS(0, nullptr) }; // 3102180178
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelGeneratorTools_MakeTransformableGeneratorPickerFromObject_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelGeneratorTools_MakeTransformableGeneratorPickerFromObject_Statics::NewProp_Generator,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelGeneratorTools_MakeTransformableGeneratorPickerFromObject_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelGeneratorTools_MakeTransformableGeneratorPickerFromObject_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelGeneratorTools_MakeTransformableGeneratorPickerFromObject_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelGeneratorTools, nullptr, "MakeTransformableGeneratorPickerFromObject", Z_Construct_UFunction_UVoxelGeneratorTools_MakeTransformableGeneratorPickerFromObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelGeneratorTools_MakeTransformableGeneratorPickerFromObject_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVoxelGeneratorTools_MakeTransformableGeneratorPickerFromObject_Statics::VoxelGeneratorTools_eventMakeTransformableGeneratorPickerFromObject_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelGeneratorTools_MakeTransformableGeneratorPickerFromObject_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelGeneratorTools_MakeTransformableGeneratorPickerFromObject_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVoxelGeneratorTools_MakeTransformableGeneratorPickerFromObject_Statics::VoxelGeneratorTools_eventMakeTransformableGeneratorPickerFromObject_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVoxelGeneratorTools_MakeTransformableGeneratorPickerFromObject()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelGeneratorTools_MakeTransformableGeneratorPickerFromObject_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelGeneratorTools::execMakeTransformableGeneratorPickerFromObject)
{
	P_GET_OBJECT(UVoxelTransformableGenerator,Z_Param_Generator);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVoxelTransformableGeneratorPicker*)Z_Param__Result=UVoxelGeneratorTools::MakeTransformableGeneratorPickerFromObject(Z_Param_Generator);
	P_NATIVE_END;
}
// ********** End Class UVoxelGeneratorTools Function MakeTransformableGeneratorPickerFromObject ***

// ********** Begin Class UVoxelGeneratorTools Function SetGeneratorParameter **********************
struct Z_Construct_UFunction_UVoxelGeneratorTools_SetGeneratorParameter_Statics
{
	struct VoxelGeneratorTools_eventSetGeneratorParameter_Parms
	{
		FVoxelGeneratorPicker Picker;
		FName UniqueName;
		int32 Value;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Voxel|Generators" },
		{ "Comment", "/**\n\x09 * Set a voxel generator parameter\n\x09 * @param\x09Picker\x09\x09The generator picker, by ref\n\x09 * @param\x09UniqueName\x09The name of the parameter. Note that this is not the display name, but the parameter unique name.\n\x09 *\x09\x09\x09\x09\x09\x09You can get that unique name by checking the tooltip of the parameter in the picker details\n\x09 * @param\x09Value\x09\x09The value\n\x09 * @return\x09Success\n\x09 */" },
		{ "CustomStructureParam", "Value" },
		{ "CustomThunk", "true" },
		{ "ModuleRelativePath", "Public/VoxelGenerators/VoxelGeneratorTools.h" },
		{ "ToolTip", "Set a voxel generator parameter\n@param       Picker          The generator picker, by ref\n@param       UniqueName      The name of the parameter. Note that this is not the display name, but the parameter unique name.\n                                             You can get that unique name by checking the tooltip of the parameter in the picker details\n@param       Value           The value\n@return      Success" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Picker_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Picker;
	static const UECodeGen_Private::FNamePropertyParams NewProp_UniqueName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Value;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelGeneratorTools_SetGeneratorParameter_Statics::NewProp_Picker = { "Picker", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelGeneratorTools_eventSetGeneratorParameter_Parms, Picker), Z_Construct_UScriptStruct_FVoxelGeneratorPicker, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Picker_MetaData), NewProp_Picker_MetaData) }; // 3276742823
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UVoxelGeneratorTools_SetGeneratorParameter_Statics::NewProp_UniqueName = { "UniqueName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelGeneratorTools_eventSetGeneratorParameter_Parms, UniqueName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVoxelGeneratorTools_SetGeneratorParameter_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelGeneratorTools_eventSetGeneratorParameter_Parms, Value), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UVoxelGeneratorTools_SetGeneratorParameter_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((VoxelGeneratorTools_eventSetGeneratorParameter_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelGeneratorTools_SetGeneratorParameter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VoxelGeneratorTools_eventSetGeneratorParameter_Parms), &Z_Construct_UFunction_UVoxelGeneratorTools_SetGeneratorParameter_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelGeneratorTools_SetGeneratorParameter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelGeneratorTools_SetGeneratorParameter_Statics::NewProp_Picker,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelGeneratorTools_SetGeneratorParameter_Statics::NewProp_UniqueName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelGeneratorTools_SetGeneratorParameter_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelGeneratorTools_SetGeneratorParameter_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelGeneratorTools_SetGeneratorParameter_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelGeneratorTools_SetGeneratorParameter_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelGeneratorTools, nullptr, "SetGeneratorParameter", Z_Construct_UFunction_UVoxelGeneratorTools_SetGeneratorParameter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelGeneratorTools_SetGeneratorParameter_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVoxelGeneratorTools_SetGeneratorParameter_Statics::VoxelGeneratorTools_eventSetGeneratorParameter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelGeneratorTools_SetGeneratorParameter_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelGeneratorTools_SetGeneratorParameter_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVoxelGeneratorTools_SetGeneratorParameter_Statics::VoxelGeneratorTools_eventSetGeneratorParameter_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVoxelGeneratorTools_SetGeneratorParameter()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelGeneratorTools_SetGeneratorParameter_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class UVoxelGeneratorTools Function SetGeneratorParameter ************************

// ********** Begin Class UVoxelGeneratorTools Function SetTransformableGeneratorParameter *********
struct Z_Construct_UFunction_UVoxelGeneratorTools_SetTransformableGeneratorParameter_Statics
{
	struct VoxelGeneratorTools_eventSetTransformableGeneratorParameter_Parms
	{
		FVoxelTransformableGeneratorPicker Picker;
		FName UniqueName;
		int32 Value;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Voxel|Generators" },
		{ "Comment", "/**\n\x09 * Set a voxel generator parameter\n\x09 * @param\x09Picker\x09\x09The generator picker, by ref\n\x09 * @param\x09UniqueName\x09The name of the parameter. Note that this is not the display name, but the parameter unique name.\n\x09 *\x09\x09\x09\x09\x09\x09You can get that unique name by checking the tooltip of the parameter in the picker details\n\x09 * @param\x09Value\x09\x09The value\n\x09 * @return\x09Success\n\x09 */" },
		{ "CustomStructureParam", "Value" },
		{ "CustomThunk", "true" },
		{ "ModuleRelativePath", "Public/VoxelGenerators/VoxelGeneratorTools.h" },
		{ "ToolTip", "Set a voxel generator parameter\n@param       Picker          The generator picker, by ref\n@param       UniqueName      The name of the parameter. Note that this is not the display name, but the parameter unique name.\n                                             You can get that unique name by checking the tooltip of the parameter in the picker details\n@param       Value           The value\n@return      Success" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Picker_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Picker;
	static const UECodeGen_Private::FNamePropertyParams NewProp_UniqueName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Value;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelGeneratorTools_SetTransformableGeneratorParameter_Statics::NewProp_Picker = { "Picker", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelGeneratorTools_eventSetTransformableGeneratorParameter_Parms, Picker), Z_Construct_UScriptStruct_FVoxelTransformableGeneratorPicker, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Picker_MetaData), NewProp_Picker_MetaData) }; // 3102180178
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UVoxelGeneratorTools_SetTransformableGeneratorParameter_Statics::NewProp_UniqueName = { "UniqueName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelGeneratorTools_eventSetTransformableGeneratorParameter_Parms, UniqueName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVoxelGeneratorTools_SetTransformableGeneratorParameter_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelGeneratorTools_eventSetTransformableGeneratorParameter_Parms, Value), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UVoxelGeneratorTools_SetTransformableGeneratorParameter_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((VoxelGeneratorTools_eventSetTransformableGeneratorParameter_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelGeneratorTools_SetTransformableGeneratorParameter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VoxelGeneratorTools_eventSetTransformableGeneratorParameter_Parms), &Z_Construct_UFunction_UVoxelGeneratorTools_SetTransformableGeneratorParameter_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelGeneratorTools_SetTransformableGeneratorParameter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelGeneratorTools_SetTransformableGeneratorParameter_Statics::NewProp_Picker,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelGeneratorTools_SetTransformableGeneratorParameter_Statics::NewProp_UniqueName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelGeneratorTools_SetTransformableGeneratorParameter_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelGeneratorTools_SetTransformableGeneratorParameter_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelGeneratorTools_SetTransformableGeneratorParameter_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelGeneratorTools_SetTransformableGeneratorParameter_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelGeneratorTools, nullptr, "SetTransformableGeneratorParameter", Z_Construct_UFunction_UVoxelGeneratorTools_SetTransformableGeneratorParameter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelGeneratorTools_SetTransformableGeneratorParameter_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVoxelGeneratorTools_SetTransformableGeneratorParameter_Statics::VoxelGeneratorTools_eventSetTransformableGeneratorParameter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelGeneratorTools_SetTransformableGeneratorParameter_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelGeneratorTools_SetTransformableGeneratorParameter_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVoxelGeneratorTools_SetTransformableGeneratorParameter_Statics::VoxelGeneratorTools_eventSetTransformableGeneratorParameter_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVoxelGeneratorTools_SetTransformableGeneratorParameter()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelGeneratorTools_SetTransformableGeneratorParameter_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class UVoxelGeneratorTools Function SetTransformableGeneratorParameter ***********

// ********** Begin Class UVoxelGeneratorTools *****************************************************
void UVoxelGeneratorTools::StaticRegisterNativesUVoxelGeneratorTools()
{
	UClass* Class = UVoxelGeneratorTools::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CreateColorTextureFromGenerator", &UVoxelGeneratorTools::execCreateColorTextureFromGenerator },
		{ "CreateColorTextureFromGeneratorAsync", &UVoxelGeneratorTools::execCreateColorTextureFromGeneratorAsync },
		{ "CreateFloatTextureFromGenerator", &UVoxelGeneratorTools::execCreateFloatTextureFromGenerator },
		{ "CreateFloatTextureFromGeneratorAsync", &UVoxelGeneratorTools::execCreateFloatTextureFromGeneratorAsync },
		{ "IsValid_GeneratorPicker", &UVoxelGeneratorTools::execIsValid_GeneratorPicker },
		{ "IsValid_TransformableGeneratorPicker", &UVoxelGeneratorTools::execIsValid_TransformableGeneratorPicker },
		{ "MakeGeneratorInstance", &UVoxelGeneratorTools::execMakeGeneratorInstance },
		{ "MakeGeneratorPickerFromClass", &UVoxelGeneratorTools::execMakeGeneratorPickerFromClass },
		{ "MakeGeneratorPickerFromObject", &UVoxelGeneratorTools::execMakeGeneratorPickerFromObject },
		{ "MakeTransformableGeneratorInstance", &UVoxelGeneratorTools::execMakeTransformableGeneratorInstance },
		{ "MakeTransformableGeneratorPickerFromClass", &UVoxelGeneratorTools::execMakeTransformableGeneratorPickerFromClass },
		{ "MakeTransformableGeneratorPickerFromObject", &UVoxelGeneratorTools::execMakeTransformableGeneratorPickerFromObject },
		{ "SetGeneratorParameter", &UVoxelGeneratorTools::execSetGeneratorParameter },
		{ "SetTransformableGeneratorParameter", &UVoxelGeneratorTools::execSetTransformableGeneratorParameter },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UVoxelGeneratorTools;
UClass* UVoxelGeneratorTools::GetPrivateStaticClass()
{
	using TClass = UVoxelGeneratorTools;
	if (!Z_Registration_Info_UClass_UVoxelGeneratorTools.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("VoxelGeneratorTools"),
			Z_Registration_Info_UClass_UVoxelGeneratorTools.InnerSingleton,
			StaticRegisterNativesUVoxelGeneratorTools,
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
	return Z_Registration_Info_UClass_UVoxelGeneratorTools.InnerSingleton;
}
UClass* Z_Construct_UClass_UVoxelGeneratorTools_NoRegister()
{
	return UVoxelGeneratorTools::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UVoxelGeneratorTools_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "VoxelGenerators/VoxelGeneratorTools.h" },
		{ "ModuleRelativePath", "Public/VoxelGenerators/VoxelGeneratorTools.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UVoxelGeneratorTools_CreateColorTextureFromGenerator, "CreateColorTextureFromGenerator" }, // 1105827654
		{ &Z_Construct_UFunction_UVoxelGeneratorTools_CreateColorTextureFromGeneratorAsync, "CreateColorTextureFromGeneratorAsync" }, // 1933563095
		{ &Z_Construct_UFunction_UVoxelGeneratorTools_CreateFloatTextureFromGenerator, "CreateFloatTextureFromGenerator" }, // 3989800458
		{ &Z_Construct_UFunction_UVoxelGeneratorTools_CreateFloatTextureFromGeneratorAsync, "CreateFloatTextureFromGeneratorAsync" }, // 668870582
		{ &Z_Construct_UFunction_UVoxelGeneratorTools_IsValid_GeneratorPicker, "IsValid_GeneratorPicker" }, // 32507731
		{ &Z_Construct_UFunction_UVoxelGeneratorTools_IsValid_TransformableGeneratorPicker, "IsValid_TransformableGeneratorPicker" }, // 1981588956
		{ &Z_Construct_UFunction_UVoxelGeneratorTools_MakeGeneratorInstance, "MakeGeneratorInstance" }, // 3265525580
		{ &Z_Construct_UFunction_UVoxelGeneratorTools_MakeGeneratorPickerFromClass, "MakeGeneratorPickerFromClass" }, // 3396028317
		{ &Z_Construct_UFunction_UVoxelGeneratorTools_MakeGeneratorPickerFromObject, "MakeGeneratorPickerFromObject" }, // 1889743191
		{ &Z_Construct_UFunction_UVoxelGeneratorTools_MakeTransformableGeneratorInstance, "MakeTransformableGeneratorInstance" }, // 4150936321
		{ &Z_Construct_UFunction_UVoxelGeneratorTools_MakeTransformableGeneratorPickerFromClass, "MakeTransformableGeneratorPickerFromClass" }, // 1585877870
		{ &Z_Construct_UFunction_UVoxelGeneratorTools_MakeTransformableGeneratorPickerFromObject, "MakeTransformableGeneratorPickerFromObject" }, // 3698866335
		{ &Z_Construct_UFunction_UVoxelGeneratorTools_SetGeneratorParameter, "SetGeneratorParameter" }, // 1772132038
		{ &Z_Construct_UFunction_UVoxelGeneratorTools_SetTransformableGeneratorParameter, "SetTransformableGeneratorParameter" }, // 3907547389
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelGeneratorTools>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UVoxelGeneratorTools_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelGeneratorTools_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelGeneratorTools_Statics::ClassParams = {
	&UVoxelGeneratorTools::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelGeneratorTools_Statics::Class_MetaDataParams), Z_Construct_UClass_UVoxelGeneratorTools_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVoxelGeneratorTools()
{
	if (!Z_Registration_Info_UClass_UVoxelGeneratorTools.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelGeneratorTools.OuterSingleton, Z_Construct_UClass_UVoxelGeneratorTools_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVoxelGeneratorTools.OuterSingleton;
}
UVoxelGeneratorTools::UVoxelGeneratorTools(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelGeneratorTools);
UVoxelGeneratorTools::~UVoxelGeneratorTools() {}
// ********** End Class UVoxelGeneratorTools *******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelGenerators_VoxelGeneratorTools_h__Script_Voxel_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UVoxelGeneratorTools, UVoxelGeneratorTools::StaticClass, TEXT("UVoxelGeneratorTools"), &Z_Registration_Info_UClass_UVoxelGeneratorTools, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelGeneratorTools), 196667604U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelGenerators_VoxelGeneratorTools_h__Script_Voxel_2079155918(TEXT("/Script/Voxel"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelGenerators_VoxelGeneratorTools_h__Script_Voxel_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelGenerators_VoxelGeneratorTools_h__Script_Voxel_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
