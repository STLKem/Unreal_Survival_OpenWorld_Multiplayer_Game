// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Voxel/Public/VoxelTools/VoxelMathLibrary.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeVoxelMathLibrary() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
UPackage* Z_Construct_UPackage__Script_Voxel();
VOXEL_API UClass* Z_Construct_UClass_UVoxelMathLibrary();
VOXEL_API UClass* Z_Construct_UClass_UVoxelMathLibrary_NoRegister();
VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelHaltonStream();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FVoxelHaltonStream ************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FVoxelHaltonStream;
class UScriptStruct* FVoxelHaltonStream::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FVoxelHaltonStream.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FVoxelHaltonStream.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVoxelHaltonStream, (UObject*)Z_Construct_UPackage__Script_Voxel(), TEXT("VoxelHaltonStream"));
	}
	return Z_Registration_Info_UScriptStruct_FVoxelHaltonStream.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FVoxelHaltonStream_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HasNativeMake", "/Script/Voxel.VoxelMathLibrary:MakeHaltonStream" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelMathLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InitialSeed_MetaData[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelMathLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Seed_MetaData[] = {
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelMathLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_InitialSeed;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_Seed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVoxelHaltonStream>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FVoxelHaltonStream_Statics::NewProp_InitialSeed = { "InitialSeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVoxelHaltonStream, InitialSeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InitialSeed_MetaData), NewProp_InitialSeed_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FVoxelHaltonStream_Statics::NewProp_Seed = { "Seed", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVoxelHaltonStream, Seed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Seed_MetaData), NewProp_Seed_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVoxelHaltonStream_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelHaltonStream_Statics::NewProp_InitialSeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelHaltonStream_Statics::NewProp_Seed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelHaltonStream_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVoxelHaltonStream_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
	nullptr,
	&NewStructOps,
	"VoxelHaltonStream",
	Z_Construct_UScriptStruct_FVoxelHaltonStream_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelHaltonStream_Statics::PropPointers),
	sizeof(FVoxelHaltonStream),
	alignof(FVoxelHaltonStream),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelHaltonStream_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVoxelHaltonStream_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FVoxelHaltonStream()
{
	if (!Z_Registration_Info_UScriptStruct_FVoxelHaltonStream.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FVoxelHaltonStream.InnerSingleton, Z_Construct_UScriptStruct_FVoxelHaltonStream_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FVoxelHaltonStream.InnerSingleton;
}
// ********** End ScriptStruct FVoxelHaltonStream **************************************************

// ********** Begin Class UVoxelMathLibrary Function GetHalton1D ***********************************
struct Z_Construct_UFunction_UVoxelMathLibrary_GetHalton1D_Statics
{
	struct VoxelMathLibrary_eventGetHalton1D_Parms
	{
		FVoxelHaltonStream Stream;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Voxel|Math|Random" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelMathLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Stream_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Stream;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelMathLibrary_GetHalton1D_Statics::NewProp_Stream = { "Stream", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelMathLibrary_eventGetHalton1D_Parms, Stream), Z_Construct_UScriptStruct_FVoxelHaltonStream, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Stream_MetaData), NewProp_Stream_MetaData) }; // 3511359031
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoxelMathLibrary_GetHalton1D_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelMathLibrary_eventGetHalton1D_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelMathLibrary_GetHalton1D_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelMathLibrary_GetHalton1D_Statics::NewProp_Stream,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelMathLibrary_GetHalton1D_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelMathLibrary_GetHalton1D_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelMathLibrary_GetHalton1D_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelMathLibrary, nullptr, "GetHalton1D", Z_Construct_UFunction_UVoxelMathLibrary_GetHalton1D_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelMathLibrary_GetHalton1D_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVoxelMathLibrary_GetHalton1D_Statics::VoxelMathLibrary_eventGetHalton1D_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelMathLibrary_GetHalton1D_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelMathLibrary_GetHalton1D_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVoxelMathLibrary_GetHalton1D_Statics::VoxelMathLibrary_eventGetHalton1D_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVoxelMathLibrary_GetHalton1D()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelMathLibrary_GetHalton1D_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelMathLibrary::execGetHalton1D)
{
	P_GET_STRUCT_REF(FVoxelHaltonStream,Z_Param_Out_Stream);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=UVoxelMathLibrary::GetHalton1D(Z_Param_Out_Stream);
	P_NATIVE_END;
}
// ********** End Class UVoxelMathLibrary Function GetHalton1D *************************************

// ********** Begin Class UVoxelMathLibrary Function GetHalton2D ***********************************
struct Z_Construct_UFunction_UVoxelMathLibrary_GetHalton2D_Statics
{
	struct VoxelMathLibrary_eventGetHalton2D_Parms
	{
		FVoxelHaltonStream Stream;
		FVector2D ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Voxel|Math|Random" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelMathLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Stream_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Stream;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelMathLibrary_GetHalton2D_Statics::NewProp_Stream = { "Stream", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelMathLibrary_eventGetHalton2D_Parms, Stream), Z_Construct_UScriptStruct_FVoxelHaltonStream, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Stream_MetaData), NewProp_Stream_MetaData) }; // 3511359031
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelMathLibrary_GetHalton2D_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelMathLibrary_eventGetHalton2D_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelMathLibrary_GetHalton2D_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelMathLibrary_GetHalton2D_Statics::NewProp_Stream,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelMathLibrary_GetHalton2D_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelMathLibrary_GetHalton2D_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelMathLibrary_GetHalton2D_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelMathLibrary, nullptr, "GetHalton2D", Z_Construct_UFunction_UVoxelMathLibrary_GetHalton2D_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelMathLibrary_GetHalton2D_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVoxelMathLibrary_GetHalton2D_Statics::VoxelMathLibrary_eventGetHalton2D_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelMathLibrary_GetHalton2D_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelMathLibrary_GetHalton2D_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVoxelMathLibrary_GetHalton2D_Statics::VoxelMathLibrary_eventGetHalton2D_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVoxelMathLibrary_GetHalton2D()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelMathLibrary_GetHalton2D_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelMathLibrary::execGetHalton2D)
{
	P_GET_STRUCT_REF(FVoxelHaltonStream,Z_Param_Out_Stream);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector2D*)Z_Param__Result=UVoxelMathLibrary::GetHalton2D(Z_Param_Out_Stream);
	P_NATIVE_END;
}
// ********** End Class UVoxelMathLibrary Function GetHalton2D *************************************

// ********** Begin Class UVoxelMathLibrary Function GetHalton3D ***********************************
struct Z_Construct_UFunction_UVoxelMathLibrary_GetHalton3D_Statics
{
	struct VoxelMathLibrary_eventGetHalton3D_Parms
	{
		FVoxelHaltonStream Stream;
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Voxel|Math|Random" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelMathLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Stream_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Stream;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelMathLibrary_GetHalton3D_Statics::NewProp_Stream = { "Stream", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelMathLibrary_eventGetHalton3D_Parms, Stream), Z_Construct_UScriptStruct_FVoxelHaltonStream, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Stream_MetaData), NewProp_Stream_MetaData) }; // 3511359031
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelMathLibrary_GetHalton3D_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelMathLibrary_eventGetHalton3D_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelMathLibrary_GetHalton3D_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelMathLibrary_GetHalton3D_Statics::NewProp_Stream,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelMathLibrary_GetHalton3D_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelMathLibrary_GetHalton3D_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelMathLibrary_GetHalton3D_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelMathLibrary, nullptr, "GetHalton3D", Z_Construct_UFunction_UVoxelMathLibrary_GetHalton3D_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelMathLibrary_GetHalton3D_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVoxelMathLibrary_GetHalton3D_Statics::VoxelMathLibrary_eventGetHalton3D_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelMathLibrary_GetHalton3D_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelMathLibrary_GetHalton3D_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVoxelMathLibrary_GetHalton3D_Statics::VoxelMathLibrary_eventGetHalton3D_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVoxelMathLibrary_GetHalton3D()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelMathLibrary_GetHalton3D_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelMathLibrary::execGetHalton3D)
{
	P_GET_STRUCT_REF(FVoxelHaltonStream,Z_Param_Out_Stream);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=UVoxelMathLibrary::GetHalton3D(Z_Param_Out_Stream);
	P_NATIVE_END;
}
// ********** End Class UVoxelMathLibrary Function GetHalton3D *************************************

// ********** Begin Class UVoxelMathLibrary Function GetUnitVectorFromRandom ***********************
struct Z_Construct_UFunction_UVoxelMathLibrary_GetUnitVectorFromRandom_Statics
{
	struct VoxelMathLibrary_eventGetUnitVectorFromRandom_Parms
	{
		FVector2D Random;
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Voxel|Math|Random" },
		{ "Comment", "/**\n\x09 * Generates a random position on the unit sphere, given some random input between 0 and 1\n\x09 * @param\x09Random\x09\x09Random values, between 0 and 1. Can use RandomFloat, but also more complex noises like Halton or Sobol\n\x09 */" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelMathLibrary.h" },
		{ "ToolTip", "Generates a random position on the unit sphere, given some random input between 0 and 1\n@param       Random          Random values, between 0 and 1. Can use RandomFloat, but also more complex noises like Halton or Sobol" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Random;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelMathLibrary_GetUnitVectorFromRandom_Statics::NewProp_Random = { "Random", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelMathLibrary_eventGetUnitVectorFromRandom_Parms, Random), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelMathLibrary_GetUnitVectorFromRandom_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelMathLibrary_eventGetUnitVectorFromRandom_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelMathLibrary_GetUnitVectorFromRandom_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelMathLibrary_GetUnitVectorFromRandom_Statics::NewProp_Random,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelMathLibrary_GetUnitVectorFromRandom_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelMathLibrary_GetUnitVectorFromRandom_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelMathLibrary_GetUnitVectorFromRandom_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelMathLibrary, nullptr, "GetUnitVectorFromRandom", Z_Construct_UFunction_UVoxelMathLibrary_GetUnitVectorFromRandom_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelMathLibrary_GetUnitVectorFromRandom_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVoxelMathLibrary_GetUnitVectorFromRandom_Statics::VoxelMathLibrary_eventGetUnitVectorFromRandom_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelMathLibrary_GetUnitVectorFromRandom_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelMathLibrary_GetUnitVectorFromRandom_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVoxelMathLibrary_GetUnitVectorFromRandom_Statics::VoxelMathLibrary_eventGetUnitVectorFromRandom_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVoxelMathLibrary_GetUnitVectorFromRandom()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelMathLibrary_GetUnitVectorFromRandom_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelMathLibrary::execGetUnitVectorFromRandom)
{
	P_GET_STRUCT(FVector2D,Z_Param_Random);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=UVoxelMathLibrary::GetUnitVectorFromRandom(Z_Param_Random);
	P_NATIVE_END;
}
// ********** End Class UVoxelMathLibrary Function GetUnitVectorFromRandom *************************

// ********** Begin Class UVoxelMathLibrary Function MakeHaltonStream ******************************
struct Z_Construct_UFunction_UVoxelMathLibrary_MakeHaltonStream_Statics
{
	struct VoxelMathLibrary_eventMakeHaltonStream_Parms
	{
		int32 InitialSeed;
		FVoxelHaltonStream ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Voxel|Math|Random" },
		{ "Keywords", "construct build" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelMathLibrary.h" },
		{ "NativeMakeFunc", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_InitialSeed;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVoxelMathLibrary_MakeHaltonStream_Statics::NewProp_InitialSeed = { "InitialSeed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelMathLibrary_eventMakeHaltonStream_Parms, InitialSeed), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelMathLibrary_MakeHaltonStream_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelMathLibrary_eventMakeHaltonStream_Parms, ReturnValue), Z_Construct_UScriptStruct_FVoxelHaltonStream, METADATA_PARAMS(0, nullptr) }; // 3511359031
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelMathLibrary_MakeHaltonStream_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelMathLibrary_MakeHaltonStream_Statics::NewProp_InitialSeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelMathLibrary_MakeHaltonStream_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelMathLibrary_MakeHaltonStream_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelMathLibrary_MakeHaltonStream_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelMathLibrary, nullptr, "MakeHaltonStream", Z_Construct_UFunction_UVoxelMathLibrary_MakeHaltonStream_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelMathLibrary_MakeHaltonStream_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVoxelMathLibrary_MakeHaltonStream_Statics::VoxelMathLibrary_eventMakeHaltonStream_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelMathLibrary_MakeHaltonStream_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelMathLibrary_MakeHaltonStream_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVoxelMathLibrary_MakeHaltonStream_Statics::VoxelMathLibrary_eventMakeHaltonStream_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVoxelMathLibrary_MakeHaltonStream()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelMathLibrary_MakeHaltonStream_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelMathLibrary::execMakeHaltonStream)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_InitialSeed);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVoxelHaltonStream*)Z_Param__Result=UVoxelMathLibrary::MakeHaltonStream(Z_Param_InitialSeed);
	P_NATIVE_END;
}
// ********** End Class UVoxelMathLibrary Function MakeHaltonStream ********************************

// ********** Begin Class UVoxelMathLibrary Function ResetHaltonStream *****************************
struct Z_Construct_UFunction_UVoxelMathLibrary_ResetHaltonStream_Statics
{
	struct VoxelMathLibrary_eventResetHaltonStream_Parms
	{
		FVoxelHaltonStream Stream;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Voxel|Math|Random" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelMathLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Stream_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Stream;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelMathLibrary_ResetHaltonStream_Statics::NewProp_Stream = { "Stream", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelMathLibrary_eventResetHaltonStream_Parms, Stream), Z_Construct_UScriptStruct_FVoxelHaltonStream, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Stream_MetaData), NewProp_Stream_MetaData) }; // 3511359031
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelMathLibrary_ResetHaltonStream_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelMathLibrary_ResetHaltonStream_Statics::NewProp_Stream,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelMathLibrary_ResetHaltonStream_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelMathLibrary_ResetHaltonStream_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelMathLibrary, nullptr, "ResetHaltonStream", Z_Construct_UFunction_UVoxelMathLibrary_ResetHaltonStream_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelMathLibrary_ResetHaltonStream_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVoxelMathLibrary_ResetHaltonStream_Statics::VoxelMathLibrary_eventResetHaltonStream_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelMathLibrary_ResetHaltonStream_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelMathLibrary_ResetHaltonStream_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVoxelMathLibrary_ResetHaltonStream_Statics::VoxelMathLibrary_eventResetHaltonStream_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVoxelMathLibrary_ResetHaltonStream()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelMathLibrary_ResetHaltonStream_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelMathLibrary::execResetHaltonStream)
{
	P_GET_STRUCT_REF(FVoxelHaltonStream,Z_Param_Out_Stream);
	P_FINISH;
	P_NATIVE_BEGIN;
	UVoxelMathLibrary::ResetHaltonStream(Z_Param_Out_Stream);
	P_NATIVE_END;
}
// ********** End Class UVoxelMathLibrary Function ResetHaltonStream *******************************

// ********** Begin Class UVoxelMathLibrary ********************************************************
void UVoxelMathLibrary::StaticRegisterNativesUVoxelMathLibrary()
{
	UClass* Class = UVoxelMathLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetHalton1D", &UVoxelMathLibrary::execGetHalton1D },
		{ "GetHalton2D", &UVoxelMathLibrary::execGetHalton2D },
		{ "GetHalton3D", &UVoxelMathLibrary::execGetHalton3D },
		{ "GetUnitVectorFromRandom", &UVoxelMathLibrary::execGetUnitVectorFromRandom },
		{ "MakeHaltonStream", &UVoxelMathLibrary::execMakeHaltonStream },
		{ "ResetHaltonStream", &UVoxelMathLibrary::execResetHaltonStream },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UVoxelMathLibrary;
UClass* UVoxelMathLibrary::GetPrivateStaticClass()
{
	using TClass = UVoxelMathLibrary;
	if (!Z_Registration_Info_UClass_UVoxelMathLibrary.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("VoxelMathLibrary"),
			Z_Registration_Info_UClass_UVoxelMathLibrary.InnerSingleton,
			StaticRegisterNativesUVoxelMathLibrary,
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
	return Z_Registration_Info_UClass_UVoxelMathLibrary.InnerSingleton;
}
UClass* Z_Construct_UClass_UVoxelMathLibrary_NoRegister()
{
	return UVoxelMathLibrary::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UVoxelMathLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "VoxelTools/VoxelMathLibrary.h" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelMathLibrary.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UVoxelMathLibrary_GetHalton1D, "GetHalton1D" }, // 3712111600
		{ &Z_Construct_UFunction_UVoxelMathLibrary_GetHalton2D, "GetHalton2D" }, // 2297775551
		{ &Z_Construct_UFunction_UVoxelMathLibrary_GetHalton3D, "GetHalton3D" }, // 1157398955
		{ &Z_Construct_UFunction_UVoxelMathLibrary_GetUnitVectorFromRandom, "GetUnitVectorFromRandom" }, // 1989420427
		{ &Z_Construct_UFunction_UVoxelMathLibrary_MakeHaltonStream, "MakeHaltonStream" }, // 3370260023
		{ &Z_Construct_UFunction_UVoxelMathLibrary_ResetHaltonStream, "ResetHaltonStream" }, // 2302505248
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelMathLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UVoxelMathLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelMathLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelMathLibrary_Statics::ClassParams = {
	&UVoxelMathLibrary::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelMathLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UVoxelMathLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVoxelMathLibrary()
{
	if (!Z_Registration_Info_UClass_UVoxelMathLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelMathLibrary.OuterSingleton, Z_Construct_UClass_UVoxelMathLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVoxelMathLibrary.OuterSingleton;
}
UVoxelMathLibrary::UVoxelMathLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelMathLibrary);
UVoxelMathLibrary::~UVoxelMathLibrary() {}
// ********** End Class UVoxelMathLibrary **********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelTools_VoxelMathLibrary_h__Script_Voxel_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FVoxelHaltonStream::StaticStruct, Z_Construct_UScriptStruct_FVoxelHaltonStream_Statics::NewStructOps, TEXT("VoxelHaltonStream"), &Z_Registration_Info_UScriptStruct_FVoxelHaltonStream, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVoxelHaltonStream), 3511359031U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UVoxelMathLibrary, UVoxelMathLibrary::StaticClass, TEXT("UVoxelMathLibrary"), &Z_Registration_Info_UClass_UVoxelMathLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelMathLibrary), 314673849U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelTools_VoxelMathLibrary_h__Script_Voxel_3616942614(TEXT("/Script/Voxel"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelTools_VoxelMathLibrary_h__Script_Voxel_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelTools_VoxelMathLibrary_h__Script_Voxel_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelTools_VoxelMathLibrary_h__Script_Voxel_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelTools_VoxelMathLibrary_h__Script_Voxel_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
