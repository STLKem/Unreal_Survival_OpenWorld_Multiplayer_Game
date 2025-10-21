// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VoxelTools/VoxelSurfaceTools.h"
#include "Engine/LatentActionManager.h"
#include "VoxelIntBox.h"
#include "VoxelTexture.h"
#include "VoxelTools/VoxelSurfaceEdits.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeVoxelSurfaceTools() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FLatentActionInfo();
UPackage* Z_Construct_UPackage__Script_Voxel();
VOXEL_API UClass* Z_Construct_UClass_AVoxelWorld_NoRegister();
VOXEL_API UClass* Z_Construct_UClass_UVoxelSurfaceTools();
VOXEL_API UClass* Z_Construct_UClass_UVoxelSurfaceTools_NoRegister();
VOXEL_API UEnum* Z_Construct_UEnum_Voxel_EVoxelFalloff();
VOXEL_API UEnum* Z_Construct_UEnum_Voxel_EVoxelSamplerMode();
VOXEL_API UEnum* Z_Construct_UEnum_Voxel_EVoxelSDFMergeMode();
VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelFloatTexture();
VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelIntBox();
VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelSurfaceEditsProcessedVoxels();
VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelSurfaceEditsStack();
VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelSurfaceEditsStackElement();
VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelSurfaceEditsVoxels();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EVoxelSDFMergeMode ********************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EVoxelSDFMergeMode;
static UEnum* EVoxelSDFMergeMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EVoxelSDFMergeMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EVoxelSDFMergeMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Voxel_EVoxelSDFMergeMode, (UObject*)Z_Construct_UPackage__Script_Voxel(), TEXT("EVoxelSDFMergeMode"));
	}
	return Z_Registration_Info_UEnum_EVoxelSDFMergeMode.OuterSingleton;
}
template<> VOXEL_API UEnum* StaticEnum<EVoxelSDFMergeMode>()
{
	return EVoxelSDFMergeMode_StaticEnum();
}
struct Z_Construct_UEnum_Voxel_EVoxelSDFMergeMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Intersection.Comment", "// Destructive mode: will only shrink the surface\n" },
		{ "Intersection.Name", "EVoxelSDFMergeMode::Intersection" },
		{ "Intersection.ToolTip", "Destructive mode: will only shrink the surface" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelSurfaceTools.h" },
		{ "Override.Comment", "// Will add and remove at the same time\n" },
		{ "Override.Name", "EVoxelSDFMergeMode::Override" },
		{ "Override.ToolTip", "Will add and remove at the same time" },
		{ "Union.Comment", "// Additive mode: will only grow the surface\n" },
		{ "Union.Name", "EVoxelSDFMergeMode::Union" },
		{ "Union.ToolTip", "Additive mode: will only grow the surface" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EVoxelSDFMergeMode::Union", (int64)EVoxelSDFMergeMode::Union },
		{ "EVoxelSDFMergeMode::Intersection", (int64)EVoxelSDFMergeMode::Intersection },
		{ "EVoxelSDFMergeMode::Override", (int64)EVoxelSDFMergeMode::Override },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Voxel_EVoxelSDFMergeMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Voxel,
	nullptr,
	"EVoxelSDFMergeMode",
	"EVoxelSDFMergeMode",
	Z_Construct_UEnum_Voxel_EVoxelSDFMergeMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Voxel_EVoxelSDFMergeMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Voxel_EVoxelSDFMergeMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Voxel_EVoxelSDFMergeMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Voxel_EVoxelSDFMergeMode()
{
	if (!Z_Registration_Info_UEnum_EVoxelSDFMergeMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EVoxelSDFMergeMode.InnerSingleton, Z_Construct_UEnum_Voxel_EVoxelSDFMergeMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EVoxelSDFMergeMode.InnerSingleton;
}
// ********** End Enum EVoxelSDFMergeMode **********************************************************

// ********** Begin Class UVoxelSurfaceTools Function AddToStack ***********************************
struct Z_Construct_UFunction_UVoxelSurfaceTools_AddToStack_Statics
{
	struct VoxelSurfaceTools_eventAddToStack_Parms
	{
		FVoxelSurfaceEditsStack Stack;
		FVoxelSurfaceEditsStackElement Element;
		FVoxelSurfaceEditsStack ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Voxel|Tools|Surface Tools" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelSurfaceTools.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Stack;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Element;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSurfaceTools_AddToStack_Statics::NewProp_Stack = { "Stack", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelSurfaceTools_eventAddToStack_Parms, Stack), Z_Construct_UScriptStruct_FVoxelSurfaceEditsStack, METADATA_PARAMS(0, nullptr) }; // 2561348619
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSurfaceTools_AddToStack_Statics::NewProp_Element = { "Element", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelSurfaceTools_eventAddToStack_Parms, Element), Z_Construct_UScriptStruct_FVoxelSurfaceEditsStackElement, METADATA_PARAMS(0, nullptr) }; // 3599844223
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSurfaceTools_AddToStack_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelSurfaceTools_eventAddToStack_Parms, ReturnValue), Z_Construct_UScriptStruct_FVoxelSurfaceEditsStack, METADATA_PARAMS(0, nullptr) }; // 2561348619
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelSurfaceTools_AddToStack_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceTools_AddToStack_Statics::NewProp_Stack,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceTools_AddToStack_Statics::NewProp_Element,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceTools_AddToStack_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSurfaceTools_AddToStack_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelSurfaceTools_AddToStack_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelSurfaceTools, nullptr, "AddToStack", Z_Construct_UFunction_UVoxelSurfaceTools_AddToStack_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSurfaceTools_AddToStack_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVoxelSurfaceTools_AddToStack_Statics::VoxelSurfaceTools_eventAddToStack_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSurfaceTools_AddToStack_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelSurfaceTools_AddToStack_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVoxelSurfaceTools_AddToStack_Statics::VoxelSurfaceTools_eventAddToStack_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVoxelSurfaceTools_AddToStack()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelSurfaceTools_AddToStack_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelSurfaceTools::execAddToStack)
{
	P_GET_STRUCT(FVoxelSurfaceEditsStack,Z_Param_Stack);
	P_GET_STRUCT(FVoxelSurfaceEditsStackElement,Z_Param_Element);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVoxelSurfaceEditsStack*)Z_Param__Result=UVoxelSurfaceTools::AddToStack(Z_Param_Stack,Z_Param_Element);
	P_NATIVE_END;
}
// ********** End Class UVoxelSurfaceTools Function AddToStack *************************************

// ********** Begin Class UVoxelSurfaceTools Function ApplyConstantStrength ************************
struct Z_Construct_UFunction_UVoxelSurfaceTools_ApplyConstantStrength_Statics
{
	struct VoxelSurfaceTools_eventApplyConstantStrength_Parms
	{
		float Strength;
		FVoxelSurfaceEditsStackElement ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Voxel|Tools|Surface Tools" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Apply a constant strength to the surface voxels\n" },
#endif
		{ "CPP_Default_Strength", "1.000000" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelSurfaceTools.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Apply a constant strength to the surface voxels" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Strength;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoxelSurfaceTools_ApplyConstantStrength_Statics::NewProp_Strength = { "Strength", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelSurfaceTools_eventApplyConstantStrength_Parms, Strength), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSurfaceTools_ApplyConstantStrength_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelSurfaceTools_eventApplyConstantStrength_Parms, ReturnValue), Z_Construct_UScriptStruct_FVoxelSurfaceEditsStackElement, METADATA_PARAMS(0, nullptr) }; // 3599844223
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelSurfaceTools_ApplyConstantStrength_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceTools_ApplyConstantStrength_Statics::NewProp_Strength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceTools_ApplyConstantStrength_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSurfaceTools_ApplyConstantStrength_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelSurfaceTools_ApplyConstantStrength_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelSurfaceTools, nullptr, "ApplyConstantStrength", Z_Construct_UFunction_UVoxelSurfaceTools_ApplyConstantStrength_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSurfaceTools_ApplyConstantStrength_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVoxelSurfaceTools_ApplyConstantStrength_Statics::VoxelSurfaceTools_eventApplyConstantStrength_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSurfaceTools_ApplyConstantStrength_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelSurfaceTools_ApplyConstantStrength_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVoxelSurfaceTools_ApplyConstantStrength_Statics::VoxelSurfaceTools_eventApplyConstantStrength_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVoxelSurfaceTools_ApplyConstantStrength()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelSurfaceTools_ApplyConstantStrength_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelSurfaceTools::execApplyConstantStrength)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Strength);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVoxelSurfaceEditsStackElement*)Z_Param__Result=UVoxelSurfaceTools::ApplyConstantStrength(Z_Param_Strength);
	P_NATIVE_END;
}
// ********** End Class UVoxelSurfaceTools Function ApplyConstantStrength **************************

// ********** Begin Class UVoxelSurfaceTools Function ApplyFalloff *********************************
struct Z_Construct_UFunction_UVoxelSurfaceTools_ApplyFalloff_Statics
{
	struct VoxelSurfaceTools_eventApplyFalloff_Parms
	{
		AVoxelWorld* World;
		EVoxelFalloff FalloffType;
		FVector Center;
		float Radius;
		float Falloff;
		bool bConvertToVoxelSpace;
		FVoxelSurfaceEditsStackElement ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "bConvertToVoxelSpace" },
		{ "Category", "Voxel|Tools|Surface Tools" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Apply a falloff to surface voxels, based on their distance from a point.\n\x09 * @param\x09World\x09\x09\x09\x09\x09The voxel world, can be null if bConvertToVoxelSpace = false\n\x09 * @param\x09""FalloffType\x09\x09\x09\x09The type of falloff\n\x09 * @param\x09""Center\x09\x09\x09\x09\x09The center to compute the distance from, in world space if bConvertToVoxelSpace = true\n\x09 * @param\x09Radius\x09\x09\x09\x09\x09The radius, in cm if bConvertToVoxelSpace = true\n\x09 * @param\x09""Falloff\x09\x09\x09\x09\x09The falloff, between 0 and 1\n\x09 * @param\x09""bConvertToVoxelSpace\x09""Converts Center, Radius and Falloff from world space to voxel space. Requires World to be non null\n\x09 * @return\x09New voxels\n\x09 */" },
#endif
		{ "CPP_Default_bConvertToVoxelSpace", "true" },
		{ "DefaultToSelf", "World" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelSurfaceTools.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Apply a falloff to surface voxels, based on their distance from a point.\n@param       World                                   The voxel world, can be null if bConvertToVoxelSpace = false\n@param       FalloffType                             The type of falloff\n@param       Center                                  The center to compute the distance from, in world space if bConvertToVoxelSpace = true\n@param       Radius                                  The radius, in cm if bConvertToVoxelSpace = true\n@param       Falloff                                 The falloff, between 0 and 1\n@param       bConvertToVoxelSpace    Converts Center, Radius and Falloff from world space to voxel space. Requires World to be non null\n@return      New voxels" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
	static const UECodeGen_Private::FBytePropertyParams NewProp_FalloffType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_FalloffType;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Center;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Falloff;
	static void NewProp_bConvertToVoxelSpace_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bConvertToVoxelSpace;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelSurfaceTools_ApplyFalloff_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelSurfaceTools_eventApplyFalloff_Parms, World), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVoxelSurfaceTools_ApplyFalloff_Statics::NewProp_FalloffType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UVoxelSurfaceTools_ApplyFalloff_Statics::NewProp_FalloffType = { "FalloffType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelSurfaceTools_eventApplyFalloff_Parms, FalloffType), Z_Construct_UEnum_Voxel_EVoxelFalloff, METADATA_PARAMS(0, nullptr) }; // 103099151
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSurfaceTools_ApplyFalloff_Statics::NewProp_Center = { "Center", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelSurfaceTools_eventApplyFalloff_Parms, Center), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoxelSurfaceTools_ApplyFalloff_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelSurfaceTools_eventApplyFalloff_Parms, Radius), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoxelSurfaceTools_ApplyFalloff_Statics::NewProp_Falloff = { "Falloff", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelSurfaceTools_eventApplyFalloff_Parms, Falloff), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UVoxelSurfaceTools_ApplyFalloff_Statics::NewProp_bConvertToVoxelSpace_SetBit(void* Obj)
{
	((VoxelSurfaceTools_eventApplyFalloff_Parms*)Obj)->bConvertToVoxelSpace = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelSurfaceTools_ApplyFalloff_Statics::NewProp_bConvertToVoxelSpace = { "bConvertToVoxelSpace", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VoxelSurfaceTools_eventApplyFalloff_Parms), &Z_Construct_UFunction_UVoxelSurfaceTools_ApplyFalloff_Statics::NewProp_bConvertToVoxelSpace_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSurfaceTools_ApplyFalloff_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelSurfaceTools_eventApplyFalloff_Parms, ReturnValue), Z_Construct_UScriptStruct_FVoxelSurfaceEditsStackElement, METADATA_PARAMS(0, nullptr) }; // 3599844223
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelSurfaceTools_ApplyFalloff_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceTools_ApplyFalloff_Statics::NewProp_World,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceTools_ApplyFalloff_Statics::NewProp_FalloffType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceTools_ApplyFalloff_Statics::NewProp_FalloffType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceTools_ApplyFalloff_Statics::NewProp_Center,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceTools_ApplyFalloff_Statics::NewProp_Radius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceTools_ApplyFalloff_Statics::NewProp_Falloff,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceTools_ApplyFalloff_Statics::NewProp_bConvertToVoxelSpace,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceTools_ApplyFalloff_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSurfaceTools_ApplyFalloff_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelSurfaceTools_ApplyFalloff_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelSurfaceTools, nullptr, "ApplyFalloff", Z_Construct_UFunction_UVoxelSurfaceTools_ApplyFalloff_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSurfaceTools_ApplyFalloff_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVoxelSurfaceTools_ApplyFalloff_Statics::VoxelSurfaceTools_eventApplyFalloff_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSurfaceTools_ApplyFalloff_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelSurfaceTools_ApplyFalloff_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVoxelSurfaceTools_ApplyFalloff_Statics::VoxelSurfaceTools_eventApplyFalloff_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVoxelSurfaceTools_ApplyFalloff()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelSurfaceTools_ApplyFalloff_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelSurfaceTools::execApplyFalloff)
{
	P_GET_OBJECT(AVoxelWorld,Z_Param_World);
	P_GET_ENUM(EVoxelFalloff,Z_Param_FalloffType);
	P_GET_STRUCT(FVector,Z_Param_Center);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Radius);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Falloff);
	P_GET_UBOOL(Z_Param_bConvertToVoxelSpace);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVoxelSurfaceEditsStackElement*)Z_Param__Result=UVoxelSurfaceTools::ApplyFalloff(Z_Param_World,EVoxelFalloff(Z_Param_FalloffType),Z_Param_Center,Z_Param_Radius,Z_Param_Falloff,Z_Param_bConvertToVoxelSpace);
	P_NATIVE_END;
}
// ********** End Class UVoxelSurfaceTools Function ApplyFalloff ***********************************

// ********** Begin Class UVoxelSurfaceTools Function ApplyFlatten *********************************
struct Z_Construct_UFunction_UVoxelSurfaceTools_ApplyFlatten_Statics
{
	struct VoxelSurfaceTools_eventApplyFlatten_Parms
	{
		AVoxelWorld* World;
		FVector PlanePoint;
		FVector PlaneNormal;
		EVoxelSDFMergeMode MergeMode;
		bool bConvertToVoxelSpace;
		FVoxelSurfaceEditsStackElement ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "bConvertToVoxelSpace" },
		{ "Category", "Voxel|Tools|Surface Tools" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Make surface voxels go towards a plane\n\x09 * Important: if bExactDistanceField = true, this node should be called last! Modifying strengths after it will result\n\x09 * in glitchy behavior\n\x09 * @param\x09World\x09\x09\x09\x09\x09The voxel world, required if bConvertToVoxelSpace = true\n\x09 * @param\x09PlanePoint\x09\x09\x09\x09""A point in the flatten plane, in world space if bConvertToVoxelSpace = true\n\x09 * @param\x09PlaneNormal\x09\x09\x09\x09The normal of the plane\n\x09 * @param\x09MergeMode\x09\x09\x09\x09How to merge the plane SDF\n\x09 * @param\x09""bConvertToVoxelSpace\x09If true, converts PlanePoint from world space to voxel space. Requires World to be non null\n\x09 * @return\x09\n\x09 */" },
#endif
		{ "CPP_Default_bConvertToVoxelSpace", "true" },
		{ "CPP_Default_MergeMode", "Override" },
		{ "CPP_Default_PlaneNormal", "0.000000,0.000000,1.000000" },
		{ "DefaultToSelf", "World" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelSurfaceTools.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Make surface voxels go towards a plane\nImportant: if bExactDistanceField = true, this node should be called last! Modifying strengths after it will result\nin glitchy behavior\n@param       World                                   The voxel world, required if bConvertToVoxelSpace = true\n@param       PlanePoint                              A point in the flatten plane, in world space if bConvertToVoxelSpace = true\n@param       PlaneNormal                             The normal of the plane\n@param       MergeMode                               How to merge the plane SDF\n@param       bConvertToVoxelSpace    If true, converts PlanePoint from world space to voxel space. Requires World to be non null\n@return" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PlanePoint;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PlaneNormal;
	static const UECodeGen_Private::FBytePropertyParams NewProp_MergeMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_MergeMode;
	static void NewProp_bConvertToVoxelSpace_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bConvertToVoxelSpace;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelSurfaceTools_ApplyFlatten_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelSurfaceTools_eventApplyFlatten_Parms, World), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSurfaceTools_ApplyFlatten_Statics::NewProp_PlanePoint = { "PlanePoint", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelSurfaceTools_eventApplyFlatten_Parms, PlanePoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSurfaceTools_ApplyFlatten_Statics::NewProp_PlaneNormal = { "PlaneNormal", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelSurfaceTools_eventApplyFlatten_Parms, PlaneNormal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVoxelSurfaceTools_ApplyFlatten_Statics::NewProp_MergeMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UVoxelSurfaceTools_ApplyFlatten_Statics::NewProp_MergeMode = { "MergeMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelSurfaceTools_eventApplyFlatten_Parms, MergeMode), Z_Construct_UEnum_Voxel_EVoxelSDFMergeMode, METADATA_PARAMS(0, nullptr) }; // 3719663476
void Z_Construct_UFunction_UVoxelSurfaceTools_ApplyFlatten_Statics::NewProp_bConvertToVoxelSpace_SetBit(void* Obj)
{
	((VoxelSurfaceTools_eventApplyFlatten_Parms*)Obj)->bConvertToVoxelSpace = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelSurfaceTools_ApplyFlatten_Statics::NewProp_bConvertToVoxelSpace = { "bConvertToVoxelSpace", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VoxelSurfaceTools_eventApplyFlatten_Parms), &Z_Construct_UFunction_UVoxelSurfaceTools_ApplyFlatten_Statics::NewProp_bConvertToVoxelSpace_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSurfaceTools_ApplyFlatten_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelSurfaceTools_eventApplyFlatten_Parms, ReturnValue), Z_Construct_UScriptStruct_FVoxelSurfaceEditsStackElement, METADATA_PARAMS(0, nullptr) }; // 3599844223
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelSurfaceTools_ApplyFlatten_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceTools_ApplyFlatten_Statics::NewProp_World,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceTools_ApplyFlatten_Statics::NewProp_PlanePoint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceTools_ApplyFlatten_Statics::NewProp_PlaneNormal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceTools_ApplyFlatten_Statics::NewProp_MergeMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceTools_ApplyFlatten_Statics::NewProp_MergeMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceTools_ApplyFlatten_Statics::NewProp_bConvertToVoxelSpace,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceTools_ApplyFlatten_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSurfaceTools_ApplyFlatten_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelSurfaceTools_ApplyFlatten_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelSurfaceTools, nullptr, "ApplyFlatten", Z_Construct_UFunction_UVoxelSurfaceTools_ApplyFlatten_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSurfaceTools_ApplyFlatten_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVoxelSurfaceTools_ApplyFlatten_Statics::VoxelSurfaceTools_eventApplyFlatten_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSurfaceTools_ApplyFlatten_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelSurfaceTools_ApplyFlatten_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVoxelSurfaceTools_ApplyFlatten_Statics::VoxelSurfaceTools_eventApplyFlatten_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVoxelSurfaceTools_ApplyFlatten()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelSurfaceTools_ApplyFlatten_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelSurfaceTools::execApplyFlatten)
{
	P_GET_OBJECT(AVoxelWorld,Z_Param_World);
	P_GET_STRUCT(FVector,Z_Param_PlanePoint);
	P_GET_STRUCT(FVector,Z_Param_PlaneNormal);
	P_GET_ENUM(EVoxelSDFMergeMode,Z_Param_MergeMode);
	P_GET_UBOOL(Z_Param_bConvertToVoxelSpace);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVoxelSurfaceEditsStackElement*)Z_Param__Result=UVoxelSurfaceTools::ApplyFlatten(Z_Param_World,Z_Param_PlanePoint,Z_Param_PlaneNormal,EVoxelSDFMergeMode(Z_Param_MergeMode),Z_Param_bConvertToVoxelSpace);
	P_NATIVE_END;
}
// ********** End Class UVoxelSurfaceTools Function ApplyFlatten ***********************************

// ********** Begin Class UVoxelSurfaceTools Function ApplyStack ***********************************
struct Z_Construct_UFunction_UVoxelSurfaceTools_ApplyStack_Statics
{
	struct VoxelSurfaceTools_eventApplyStack_Parms
	{
		FVoxelSurfaceEditsVoxels Voxels;
		FVoxelSurfaceEditsStack Stack;
		FVoxelSurfaceEditsProcessedVoxels ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Voxel|Tools|Surface Tools" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelSurfaceTools.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Voxels;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Stack;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSurfaceTools_ApplyStack_Statics::NewProp_Voxels = { "Voxels", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelSurfaceTools_eventApplyStack_Parms, Voxels), Z_Construct_UScriptStruct_FVoxelSurfaceEditsVoxels, METADATA_PARAMS(0, nullptr) }; // 847595784
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSurfaceTools_ApplyStack_Statics::NewProp_Stack = { "Stack", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelSurfaceTools_eventApplyStack_Parms, Stack), Z_Construct_UScriptStruct_FVoxelSurfaceEditsStack, METADATA_PARAMS(0, nullptr) }; // 2561348619
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSurfaceTools_ApplyStack_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelSurfaceTools_eventApplyStack_Parms, ReturnValue), Z_Construct_UScriptStruct_FVoxelSurfaceEditsProcessedVoxels, METADATA_PARAMS(0, nullptr) }; // 568197648
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelSurfaceTools_ApplyStack_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceTools_ApplyStack_Statics::NewProp_Voxels,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceTools_ApplyStack_Statics::NewProp_Stack,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceTools_ApplyStack_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSurfaceTools_ApplyStack_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelSurfaceTools_ApplyStack_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelSurfaceTools, nullptr, "ApplyStack", Z_Construct_UFunction_UVoxelSurfaceTools_ApplyStack_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSurfaceTools_ApplyStack_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVoxelSurfaceTools_ApplyStack_Statics::VoxelSurfaceTools_eventApplyStack_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSurfaceTools_ApplyStack_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelSurfaceTools_ApplyStack_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVoxelSurfaceTools_ApplyStack_Statics::VoxelSurfaceTools_eventApplyStack_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVoxelSurfaceTools_ApplyStack()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelSurfaceTools_ApplyStack_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelSurfaceTools::execApplyStack)
{
	P_GET_STRUCT(FVoxelSurfaceEditsVoxels,Z_Param_Voxels);
	P_GET_STRUCT(FVoxelSurfaceEditsStack,Z_Param_Stack);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVoxelSurfaceEditsProcessedVoxels*)Z_Param__Result=UVoxelSurfaceTools::ApplyStack(Z_Param_Voxels,Z_Param_Stack);
	P_NATIVE_END;
}
// ********** End Class UVoxelSurfaceTools Function ApplyStack *************************************

// ********** Begin Class UVoxelSurfaceTools Function ApplyStackAsync ******************************
struct Z_Construct_UFunction_UVoxelSurfaceTools_ApplyStackAsync_Statics
{
	struct VoxelSurfaceTools_eventApplyStackAsync_Parms
	{
		UObject* WorldContextObject;
		FLatentActionInfo LatentInfo;
		FVoxelSurfaceEditsProcessedVoxels ProcessedVoxels;
		FVoxelSurfaceEditsVoxels Voxels;
		FVoxelSurfaceEditsStack Stack;
		bool bHideLatentWarnings;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "bHideLatentWarnings" },
		{ "Category", "Voxel|Tools|Surface Tools" },
		{ "CPP_Default_bHideLatentWarnings", "false" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelSurfaceTools.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ProcessedVoxels;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Voxels;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Stack;
	static void NewProp_bHideLatentWarnings_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHideLatentWarnings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelSurfaceTools_ApplyStackAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelSurfaceTools_eventApplyStackAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSurfaceTools_ApplyStackAsync_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelSurfaceTools_eventApplyStackAsync_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(0, nullptr) }; // 4146275481
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSurfaceTools_ApplyStackAsync_Statics::NewProp_ProcessedVoxels = { "ProcessedVoxels", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelSurfaceTools_eventApplyStackAsync_Parms, ProcessedVoxels), Z_Construct_UScriptStruct_FVoxelSurfaceEditsProcessedVoxels, METADATA_PARAMS(0, nullptr) }; // 568197648
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSurfaceTools_ApplyStackAsync_Statics::NewProp_Voxels = { "Voxels", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelSurfaceTools_eventApplyStackAsync_Parms, Voxels), Z_Construct_UScriptStruct_FVoxelSurfaceEditsVoxels, METADATA_PARAMS(0, nullptr) }; // 847595784
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSurfaceTools_ApplyStackAsync_Statics::NewProp_Stack = { "Stack", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelSurfaceTools_eventApplyStackAsync_Parms, Stack), Z_Construct_UScriptStruct_FVoxelSurfaceEditsStack, METADATA_PARAMS(0, nullptr) }; // 2561348619
void Z_Construct_UFunction_UVoxelSurfaceTools_ApplyStackAsync_Statics::NewProp_bHideLatentWarnings_SetBit(void* Obj)
{
	((VoxelSurfaceTools_eventApplyStackAsync_Parms*)Obj)->bHideLatentWarnings = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelSurfaceTools_ApplyStackAsync_Statics::NewProp_bHideLatentWarnings = { "bHideLatentWarnings", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VoxelSurfaceTools_eventApplyStackAsync_Parms), &Z_Construct_UFunction_UVoxelSurfaceTools_ApplyStackAsync_Statics::NewProp_bHideLatentWarnings_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelSurfaceTools_ApplyStackAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceTools_ApplyStackAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceTools_ApplyStackAsync_Statics::NewProp_LatentInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceTools_ApplyStackAsync_Statics::NewProp_ProcessedVoxels,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceTools_ApplyStackAsync_Statics::NewProp_Voxels,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceTools_ApplyStackAsync_Statics::NewProp_Stack,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceTools_ApplyStackAsync_Statics::NewProp_bHideLatentWarnings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSurfaceTools_ApplyStackAsync_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelSurfaceTools_ApplyStackAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelSurfaceTools, nullptr, "ApplyStackAsync", Z_Construct_UFunction_UVoxelSurfaceTools_ApplyStackAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSurfaceTools_ApplyStackAsync_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVoxelSurfaceTools_ApplyStackAsync_Statics::VoxelSurfaceTools_eventApplyStackAsync_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSurfaceTools_ApplyStackAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelSurfaceTools_ApplyStackAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVoxelSurfaceTools_ApplyStackAsync_Statics::VoxelSurfaceTools_eventApplyStackAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVoxelSurfaceTools_ApplyStackAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelSurfaceTools_ApplyStackAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelSurfaceTools::execApplyStackAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
	P_GET_STRUCT_REF(FVoxelSurfaceEditsProcessedVoxels,Z_Param_Out_ProcessedVoxels);
	P_GET_STRUCT(FVoxelSurfaceEditsVoxels,Z_Param_Voxels);
	P_GET_STRUCT(FVoxelSurfaceEditsStack,Z_Param_Stack);
	P_GET_UBOOL(Z_Param_bHideLatentWarnings);
	P_FINISH;
	P_NATIVE_BEGIN;
	UVoxelSurfaceTools::ApplyStackAsync(Z_Param_WorldContextObject,Z_Param_LatentInfo,Z_Param_Out_ProcessedVoxels,Z_Param_Voxels,Z_Param_Stack,Z_Param_bHideLatentWarnings);
	P_NATIVE_END;
}
// ********** End Class UVoxelSurfaceTools Function ApplyStackAsync ********************************

// ********** Begin Class UVoxelSurfaceTools Function ApplyStrengthCurve ***************************
struct Z_Construct_UFunction_UVoxelSurfaceTools_ApplyStrengthCurve_Statics
{
	struct VoxelSurfaceTools_eventApplyStrengthCurve_Parms
	{
		AVoxelWorld* World;
		FVector Center;
		float Radius;
		UCurveFloat* StrengthCurve;
		bool bConvertToVoxelSpace;
		FVoxelSurfaceEditsStackElement ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "bConvertToVoxelSpace" },
		{ "Category", "Voxel|Tools|Surface Tools" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Apply a strength curve to surface voxels, based on their distance from a point:\n\x09 * Strength = Curve.SampleAt(Distance(Voxel.Position, Center) / Radius)\n\x09 * @param\x09World\x09\x09\x09\x09\x09The voxel world, can be null if bConvertToVoxelSpace = false\n\x09 * @param\x09""Center\x09\x09\x09\x09\x09The center to compute the distance from, in world space if bConvertToVoxelSpace = true\n\x09 * @param\x09Radius\x09\x09\x09\x09\x09The radius to divide the distance by, in cm if bConvertToVoxelSpace = true\n\x09 * @param\x09StrengthCurve\x09\x09\x09The strength curve\n\x09 * @param\x09""bConvertToVoxelSpace\x09""Converts Center and Radius from world space to voxel space. Requires World to be non null\n\x09 * @return\x09New voxels\n\x09 */" },
#endif
		{ "CPP_Default_bConvertToVoxelSpace", "true" },
		{ "DefaultToSelf", "World" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelSurfaceTools.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Apply a strength curve to surface voxels, based on their distance from a point:\nStrength = Curve.SampleAt(Distance(Voxel.Position, Center) / Radius)\n@param       World                                   The voxel world, can be null if bConvertToVoxelSpace = false\n@param       Center                                  The center to compute the distance from, in world space if bConvertToVoxelSpace = true\n@param       Radius                                  The radius to divide the distance by, in cm if bConvertToVoxelSpace = true\n@param       StrengthCurve                   The strength curve\n@param       bConvertToVoxelSpace    Converts Center and Radius from world space to voxel space. Requires World to be non null\n@return      New voxels" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Center;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StrengthCurve;
	static void NewProp_bConvertToVoxelSpace_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bConvertToVoxelSpace;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelSurfaceTools_ApplyStrengthCurve_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelSurfaceTools_eventApplyStrengthCurve_Parms, World), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSurfaceTools_ApplyStrengthCurve_Statics::NewProp_Center = { "Center", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelSurfaceTools_eventApplyStrengthCurve_Parms, Center), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoxelSurfaceTools_ApplyStrengthCurve_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelSurfaceTools_eventApplyStrengthCurve_Parms, Radius), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelSurfaceTools_ApplyStrengthCurve_Statics::NewProp_StrengthCurve = { "StrengthCurve", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelSurfaceTools_eventApplyStrengthCurve_Parms, StrengthCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UVoxelSurfaceTools_ApplyStrengthCurve_Statics::NewProp_bConvertToVoxelSpace_SetBit(void* Obj)
{
	((VoxelSurfaceTools_eventApplyStrengthCurve_Parms*)Obj)->bConvertToVoxelSpace = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelSurfaceTools_ApplyStrengthCurve_Statics::NewProp_bConvertToVoxelSpace = { "bConvertToVoxelSpace", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VoxelSurfaceTools_eventApplyStrengthCurve_Parms), &Z_Construct_UFunction_UVoxelSurfaceTools_ApplyStrengthCurve_Statics::NewProp_bConvertToVoxelSpace_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSurfaceTools_ApplyStrengthCurve_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelSurfaceTools_eventApplyStrengthCurve_Parms, ReturnValue), Z_Construct_UScriptStruct_FVoxelSurfaceEditsStackElement, METADATA_PARAMS(0, nullptr) }; // 3599844223
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelSurfaceTools_ApplyStrengthCurve_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceTools_ApplyStrengthCurve_Statics::NewProp_World,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceTools_ApplyStrengthCurve_Statics::NewProp_Center,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceTools_ApplyStrengthCurve_Statics::NewProp_Radius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceTools_ApplyStrengthCurve_Statics::NewProp_StrengthCurve,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceTools_ApplyStrengthCurve_Statics::NewProp_bConvertToVoxelSpace,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceTools_ApplyStrengthCurve_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSurfaceTools_ApplyStrengthCurve_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelSurfaceTools_ApplyStrengthCurve_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelSurfaceTools, nullptr, "ApplyStrengthCurve", Z_Construct_UFunction_UVoxelSurfaceTools_ApplyStrengthCurve_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSurfaceTools_ApplyStrengthCurve_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVoxelSurfaceTools_ApplyStrengthCurve_Statics::VoxelSurfaceTools_eventApplyStrengthCurve_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSurfaceTools_ApplyStrengthCurve_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelSurfaceTools_ApplyStrengthCurve_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVoxelSurfaceTools_ApplyStrengthCurve_Statics::VoxelSurfaceTools_eventApplyStrengthCurve_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVoxelSurfaceTools_ApplyStrengthCurve()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelSurfaceTools_ApplyStrengthCurve_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelSurfaceTools::execApplyStrengthCurve)
{
	P_GET_OBJECT(AVoxelWorld,Z_Param_World);
	P_GET_STRUCT(FVector,Z_Param_Center);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Radius);
	P_GET_OBJECT(UCurveFloat,Z_Param_StrengthCurve);
	P_GET_UBOOL(Z_Param_bConvertToVoxelSpace);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVoxelSurfaceEditsStackElement*)Z_Param__Result=UVoxelSurfaceTools::ApplyStrengthCurve(Z_Param_World,Z_Param_Center,Z_Param_Radius,Z_Param_StrengthCurve,Z_Param_bConvertToVoxelSpace);
	P_NATIVE_END;
}
// ********** End Class UVoxelSurfaceTools Function ApplyStrengthCurve *****************************

// ********** Begin Class UVoxelSurfaceTools Function ApplyStrengthMask ****************************
struct Z_Construct_UFunction_UVoxelSurfaceTools_ApplyStrengthMask_Statics
{
	struct VoxelSurfaceTools_eventApplyStrengthMask_Parms
	{
		AVoxelWorld* World;
		FVoxelFloatTexture Mask;
		FVector EditPosition;
		float ScaleX;
		float ScaleY;
		FVector PlaneNormal;
		FVector PlaneTangent;
		EVoxelSamplerMode SamplerMode;
		bool bConvertToVoxelSpace;
		FVoxelSurfaceEditsStackElement ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "bConvertToVoxelSpace" },
		{ "Category", "Voxel|Tools|Surface Tools" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Apply a strength mask to surface voxels, based on their position projected onto a plane\n\x09 * @param\x09World\x09\x09\x09\x09\x09The voxel world, can be null if bConvertToVoxelSpace = false\n\x09 * @param\x09Mask\x09\x09\x09\x09\x09The mask to apply\n\x09 * @param\x09""EditPosition\x09\x09\x09The voxel positions are computed relative to this. In world space if bConvertToVoxelSpace = true\n\x09 * @param\x09ScaleX\x09\x09\x09\x09\x09The sampling scale on the X axis. The bigger, the bigger the projected image will be.\n\x09 *\x09\x09\x09\x09\x09\x09\x09\x09\x09Recommended: Wanted size in voxels of the image / image size in pixels.\n\x09 *\x09\x09\x09\x09\x09\x09\x09\x09\x09""Can use GetStrengthMaskScale.\n\x09 * @param\x09ScaleY\x09\x09\x09\x09\x09The sampling scale on the Y axis. The bigger, the bigger the projected image will be.\n\x09 *\x09\x09\x09\x09\x09\x09\x09\x09\x09Recommended: Wanted size in voxels of the image / image size in pixels.\n\x09 *\x09\x09\x09\x09\x09\x09\x09\x09\x09""Can use GetStrengthMaskScale.\n\x09 * @param\x09PlaneNormal\n\x09 * @param\x09PlaneTangent\n\x09 * @param\x09SamplerMode\n\x09 * @param\x09""bConvertToVoxelSpace\x09""Converts Center and Radius from world space to voxel space. Requires World to be non null\n\x09 * @return\x09New voxels\n\x09 */" },
#endif
		{ "CPP_Default_bConvertToVoxelSpace", "true" },
		{ "CPP_Default_PlaneNormal", "0.000000,0.000000,1.000000" },
		{ "CPP_Default_PlaneTangent", "1.000000,0.000000,0.000000" },
		{ "CPP_Default_SamplerMode", "Tile" },
		{ "CPP_Default_ScaleX", "1.000000" },
		{ "CPP_Default_ScaleY", "1.000000" },
		{ "DefaultToSelf", "World" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelSurfaceTools.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Apply a strength mask to surface voxels, based on their position projected onto a plane\n@param       World                                   The voxel world, can be null if bConvertToVoxelSpace = false\n@param       Mask                                    The mask to apply\n@param       EditPosition                    The voxel positions are computed relative to this. In world space if bConvertToVoxelSpace = true\n@param       ScaleX                                  The sampling scale on the X axis. The bigger, the bigger the projected image will be.\n                                                                     Recommended: Wanted size in voxels of the image / image size in pixels.\n                                                                     Can use GetStrengthMaskScale.\n@param       ScaleY                                  The sampling scale on the Y axis. The bigger, the bigger the projected image will be.\n                                                                     Recommended: Wanted size in voxels of the image / image size in pixels.\n                                                                     Can use GetStrengthMaskScale.\n@param       PlaneNormal\n@param       PlaneTangent\n@param       SamplerMode\n@param       bConvertToVoxelSpace    Converts Center and Radius from world space to voxel space. Requires World to be non null\n@return      New voxels" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Mask;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EditPosition;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ScaleX;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ScaleY;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PlaneNormal;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PlaneTangent;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SamplerMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SamplerMode;
	static void NewProp_bConvertToVoxelSpace_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bConvertToVoxelSpace;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelSurfaceTools_ApplyStrengthMask_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelSurfaceTools_eventApplyStrengthMask_Parms, World), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSurfaceTools_ApplyStrengthMask_Statics::NewProp_Mask = { "Mask", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelSurfaceTools_eventApplyStrengthMask_Parms, Mask), Z_Construct_UScriptStruct_FVoxelFloatTexture, METADATA_PARAMS(0, nullptr) }; // 369089072
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSurfaceTools_ApplyStrengthMask_Statics::NewProp_EditPosition = { "EditPosition", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelSurfaceTools_eventApplyStrengthMask_Parms, EditPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoxelSurfaceTools_ApplyStrengthMask_Statics::NewProp_ScaleX = { "ScaleX", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelSurfaceTools_eventApplyStrengthMask_Parms, ScaleX), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoxelSurfaceTools_ApplyStrengthMask_Statics::NewProp_ScaleY = { "ScaleY", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelSurfaceTools_eventApplyStrengthMask_Parms, ScaleY), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSurfaceTools_ApplyStrengthMask_Statics::NewProp_PlaneNormal = { "PlaneNormal", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelSurfaceTools_eventApplyStrengthMask_Parms, PlaneNormal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSurfaceTools_ApplyStrengthMask_Statics::NewProp_PlaneTangent = { "PlaneTangent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelSurfaceTools_eventApplyStrengthMask_Parms, PlaneTangent), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVoxelSurfaceTools_ApplyStrengthMask_Statics::NewProp_SamplerMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UVoxelSurfaceTools_ApplyStrengthMask_Statics::NewProp_SamplerMode = { "SamplerMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelSurfaceTools_eventApplyStrengthMask_Parms, SamplerMode), Z_Construct_UEnum_Voxel_EVoxelSamplerMode, METADATA_PARAMS(0, nullptr) }; // 1375046996
void Z_Construct_UFunction_UVoxelSurfaceTools_ApplyStrengthMask_Statics::NewProp_bConvertToVoxelSpace_SetBit(void* Obj)
{
	((VoxelSurfaceTools_eventApplyStrengthMask_Parms*)Obj)->bConvertToVoxelSpace = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelSurfaceTools_ApplyStrengthMask_Statics::NewProp_bConvertToVoxelSpace = { "bConvertToVoxelSpace", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VoxelSurfaceTools_eventApplyStrengthMask_Parms), &Z_Construct_UFunction_UVoxelSurfaceTools_ApplyStrengthMask_Statics::NewProp_bConvertToVoxelSpace_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSurfaceTools_ApplyStrengthMask_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelSurfaceTools_eventApplyStrengthMask_Parms, ReturnValue), Z_Construct_UScriptStruct_FVoxelSurfaceEditsStackElement, METADATA_PARAMS(0, nullptr) }; // 3599844223
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelSurfaceTools_ApplyStrengthMask_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceTools_ApplyStrengthMask_Statics::NewProp_World,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceTools_ApplyStrengthMask_Statics::NewProp_Mask,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceTools_ApplyStrengthMask_Statics::NewProp_EditPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceTools_ApplyStrengthMask_Statics::NewProp_ScaleX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceTools_ApplyStrengthMask_Statics::NewProp_ScaleY,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceTools_ApplyStrengthMask_Statics::NewProp_PlaneNormal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceTools_ApplyStrengthMask_Statics::NewProp_PlaneTangent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceTools_ApplyStrengthMask_Statics::NewProp_SamplerMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceTools_ApplyStrengthMask_Statics::NewProp_SamplerMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceTools_ApplyStrengthMask_Statics::NewProp_bConvertToVoxelSpace,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceTools_ApplyStrengthMask_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSurfaceTools_ApplyStrengthMask_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelSurfaceTools_ApplyStrengthMask_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelSurfaceTools, nullptr, "ApplyStrengthMask", Z_Construct_UFunction_UVoxelSurfaceTools_ApplyStrengthMask_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSurfaceTools_ApplyStrengthMask_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVoxelSurfaceTools_ApplyStrengthMask_Statics::VoxelSurfaceTools_eventApplyStrengthMask_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSurfaceTools_ApplyStrengthMask_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelSurfaceTools_ApplyStrengthMask_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVoxelSurfaceTools_ApplyStrengthMask_Statics::VoxelSurfaceTools_eventApplyStrengthMask_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVoxelSurfaceTools_ApplyStrengthMask()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelSurfaceTools_ApplyStrengthMask_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelSurfaceTools::execApplyStrengthMask)
{
	P_GET_OBJECT(AVoxelWorld,Z_Param_World);
	P_GET_STRUCT(FVoxelFloatTexture,Z_Param_Mask);
	P_GET_STRUCT(FVector,Z_Param_EditPosition);
	P_GET_PROPERTY(FFloatProperty,Z_Param_ScaleX);
	P_GET_PROPERTY(FFloatProperty,Z_Param_ScaleY);
	P_GET_STRUCT(FVector,Z_Param_PlaneNormal);
	P_GET_STRUCT(FVector,Z_Param_PlaneTangent);
	P_GET_ENUM(EVoxelSamplerMode,Z_Param_SamplerMode);
	P_GET_UBOOL(Z_Param_bConvertToVoxelSpace);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVoxelSurfaceEditsStackElement*)Z_Param__Result=UVoxelSurfaceTools::ApplyStrengthMask(Z_Param_World,Z_Param_Mask,Z_Param_EditPosition,Z_Param_ScaleX,Z_Param_ScaleY,Z_Param_PlaneNormal,Z_Param_PlaneTangent,EVoxelSamplerMode(Z_Param_SamplerMode),Z_Param_bConvertToVoxelSpace);
	P_NATIVE_END;
}
// ********** End Class UVoxelSurfaceTools Function ApplyStrengthMask ******************************

// ********** Begin Class UVoxelSurfaceTools Function ApplyTerrace *********************************
struct Z_Construct_UFunction_UVoxelSurfaceTools_ApplyTerrace_Statics
{
	struct VoxelSurfaceTools_eventApplyTerrace_Parms
	{
		int32 TerraceHeightInVoxels;
		float Angle;
		int32 ImmutableVoxels;
		FVoxelSurfaceEditsStackElement ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "ImmutableVoxels" },
		{ "Category", "Voxel|Tools|Surface Tools" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Apply terracing\n\x09 * @param\x09TerraceHeightInVoxels\x09The height of the terraces in voxels\n\x09 * @param\x09""Angle\x09\x09\x09\x09\x09The angle in degrees of the terraces borders. Not entirely precise. Between 0 and 180.\n\x09 * @param\x09ImmutableVoxels\x09\x09\x09The number of voxels to not change per terrace/height of the \"top layer\" of each terrace\n\x09 * @return\x09New voxels\n\x09 */" },
#endif
		{ "CPP_Default_Angle", "75.000000" },
		{ "CPP_Default_ImmutableVoxels", "1" },
		{ "CPP_Default_TerraceHeightInVoxels", "5" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelSurfaceTools.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Apply terracing\n@param       TerraceHeightInVoxels   The height of the terraces in voxels\n@param       Angle                                   The angle in degrees of the terraces borders. Not entirely precise. Between 0 and 180.\n@param       ImmutableVoxels                 The number of voxels to not change per terrace/height of the \"top layer\" of each terrace\n@return      New voxels" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_TerraceHeightInVoxels;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Angle;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ImmutableVoxels;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVoxelSurfaceTools_ApplyTerrace_Statics::NewProp_TerraceHeightInVoxels = { "TerraceHeightInVoxels", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelSurfaceTools_eventApplyTerrace_Parms, TerraceHeightInVoxels), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoxelSurfaceTools_ApplyTerrace_Statics::NewProp_Angle = { "Angle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelSurfaceTools_eventApplyTerrace_Parms, Angle), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVoxelSurfaceTools_ApplyTerrace_Statics::NewProp_ImmutableVoxels = { "ImmutableVoxels", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelSurfaceTools_eventApplyTerrace_Parms, ImmutableVoxels), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSurfaceTools_ApplyTerrace_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelSurfaceTools_eventApplyTerrace_Parms, ReturnValue), Z_Construct_UScriptStruct_FVoxelSurfaceEditsStackElement, METADATA_PARAMS(0, nullptr) }; // 3599844223
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelSurfaceTools_ApplyTerrace_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceTools_ApplyTerrace_Statics::NewProp_TerraceHeightInVoxels,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceTools_ApplyTerrace_Statics::NewProp_Angle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceTools_ApplyTerrace_Statics::NewProp_ImmutableVoxels,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceTools_ApplyTerrace_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSurfaceTools_ApplyTerrace_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelSurfaceTools_ApplyTerrace_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelSurfaceTools, nullptr, "ApplyTerrace", Z_Construct_UFunction_UVoxelSurfaceTools_ApplyTerrace_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSurfaceTools_ApplyTerrace_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVoxelSurfaceTools_ApplyTerrace_Statics::VoxelSurfaceTools_eventApplyTerrace_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSurfaceTools_ApplyTerrace_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelSurfaceTools_ApplyTerrace_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVoxelSurfaceTools_ApplyTerrace_Statics::VoxelSurfaceTools_eventApplyTerrace_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVoxelSurfaceTools_ApplyTerrace()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelSurfaceTools_ApplyTerrace_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelSurfaceTools::execApplyTerrace)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_TerraceHeightInVoxels);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Angle);
	P_GET_PROPERTY(FIntProperty,Z_Param_ImmutableVoxels);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVoxelSurfaceEditsStackElement*)Z_Param__Result=UVoxelSurfaceTools::ApplyTerrace(Z_Param_TerraceHeightInVoxels,Z_Param_Angle,Z_Param_ImmutableVoxels);
	P_NATIVE_END;
}
// ********** End Class UVoxelSurfaceTools Function ApplyTerrace ***********************************

// ********** Begin Class UVoxelSurfaceTools Function DebugSurfaceVoxels ***************************
struct Z_Construct_UFunction_UVoxelSurfaceTools_DebugSurfaceVoxels_Statics
{
	struct VoxelSurfaceTools_eventDebugSurfaceVoxels_Parms
	{
		AVoxelWorld* World;
		FVoxelSurfaceEditsProcessedVoxels ProcessedVoxels;
		float Lifetime;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Voxel|Tools|Surface Tools" },
		{ "CPP_Default_Lifetime", "1.000000" },
		{ "DefaultToSelf", "World" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelSurfaceTools.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProcessedVoxels_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ProcessedVoxels;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Lifetime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelSurfaceTools_DebugSurfaceVoxels_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelSurfaceTools_eventDebugSurfaceVoxels_Parms, World), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSurfaceTools_DebugSurfaceVoxels_Statics::NewProp_ProcessedVoxels = { "ProcessedVoxels", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelSurfaceTools_eventDebugSurfaceVoxels_Parms, ProcessedVoxels), Z_Construct_UScriptStruct_FVoxelSurfaceEditsProcessedVoxels, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProcessedVoxels_MetaData), NewProp_ProcessedVoxels_MetaData) }; // 568197648
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoxelSurfaceTools_DebugSurfaceVoxels_Statics::NewProp_Lifetime = { "Lifetime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelSurfaceTools_eventDebugSurfaceVoxels_Parms, Lifetime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelSurfaceTools_DebugSurfaceVoxels_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceTools_DebugSurfaceVoxels_Statics::NewProp_World,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceTools_DebugSurfaceVoxels_Statics::NewProp_ProcessedVoxels,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceTools_DebugSurfaceVoxels_Statics::NewProp_Lifetime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSurfaceTools_DebugSurfaceVoxels_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelSurfaceTools_DebugSurfaceVoxels_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelSurfaceTools, nullptr, "DebugSurfaceVoxels", Z_Construct_UFunction_UVoxelSurfaceTools_DebugSurfaceVoxels_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSurfaceTools_DebugSurfaceVoxels_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVoxelSurfaceTools_DebugSurfaceVoxels_Statics::VoxelSurfaceTools_eventDebugSurfaceVoxels_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSurfaceTools_DebugSurfaceVoxels_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelSurfaceTools_DebugSurfaceVoxels_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVoxelSurfaceTools_DebugSurfaceVoxels_Statics::VoxelSurfaceTools_eventDebugSurfaceVoxels_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVoxelSurfaceTools_DebugSurfaceVoxels()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelSurfaceTools_DebugSurfaceVoxels_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelSurfaceTools::execDebugSurfaceVoxels)
{
	P_GET_OBJECT(AVoxelWorld,Z_Param_World);
	P_GET_STRUCT_REF(FVoxelSurfaceEditsProcessedVoxels,Z_Param_Out_ProcessedVoxels);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Lifetime);
	P_FINISH;
	P_NATIVE_BEGIN;
	UVoxelSurfaceTools::DebugSurfaceVoxels(Z_Param_World,Z_Param_Out_ProcessedVoxels,Z_Param_Lifetime);
	P_NATIVE_END;
}
// ********** End Class UVoxelSurfaceTools Function DebugSurfaceVoxels *****************************

// ********** Begin Class UVoxelSurfaceTools Function FindSurfaceVoxels ****************************
struct Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxels_Statics
{
	struct VoxelSurfaceTools_eventFindSurfaceVoxels_Parms
	{
		FVoxelSurfaceEditsVoxels Voxels;
		AVoxelWorld* World;
		FVoxelIntBox Bounds;
		bool bComputeNormals;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Voxel|Tools|Surface Tools" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Find voxels that are on the surface. Faster than FindSurfaceVoxelsFromDistanceField, but the values won't be exact distances\n\x09 * @param\x09World\x09\x09\x09\x09\x09The voxel world\n\x09 * @param\x09""Bounds\x09\x09\x09\x09\x09""Bounds to look in\n\x09 * @param\x09""bComputeNormals\x09\x09\x09If true, compute the voxel normals. More expensive, but required for some functions.\n\x09 */" },
#endif
		{ "CPP_Default_bComputeNormals", "false" },
		{ "DefaultToSelf", "World" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelSurfaceTools.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Find voxels that are on the surface. Faster than FindSurfaceVoxelsFromDistanceField, but the values won't be exact distances\n@param       World                                   The voxel world\n@param       Bounds                                  Bounds to look in\n@param       bComputeNormals                 If true, compute the voxel normals. More expensive, but required for some functions." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Voxels;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Bounds;
	static void NewProp_bComputeNormals_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bComputeNormals;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxels_Statics::NewProp_Voxels = { "Voxels", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelSurfaceTools_eventFindSurfaceVoxels_Parms, Voxels), Z_Construct_UScriptStruct_FVoxelSurfaceEditsVoxels, METADATA_PARAMS(0, nullptr) }; // 847595784
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxels_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelSurfaceTools_eventFindSurfaceVoxels_Parms, World), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxels_Statics::NewProp_Bounds = { "Bounds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelSurfaceTools_eventFindSurfaceVoxels_Parms, Bounds), Z_Construct_UScriptStruct_FVoxelIntBox, METADATA_PARAMS(0, nullptr) }; // 3520536583
void Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxels_Statics::NewProp_bComputeNormals_SetBit(void* Obj)
{
	((VoxelSurfaceTools_eventFindSurfaceVoxels_Parms*)Obj)->bComputeNormals = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxels_Statics::NewProp_bComputeNormals = { "bComputeNormals", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VoxelSurfaceTools_eventFindSurfaceVoxels_Parms), &Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxels_Statics::NewProp_bComputeNormals_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxels_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxels_Statics::NewProp_Voxels,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxels_Statics::NewProp_World,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxels_Statics::NewProp_Bounds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxels_Statics::NewProp_bComputeNormals,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxels_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxels_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelSurfaceTools, nullptr, "FindSurfaceVoxels", Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxels_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxels_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxels_Statics::VoxelSurfaceTools_eventFindSurfaceVoxels_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxels_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxels_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxels_Statics::VoxelSurfaceTools_eventFindSurfaceVoxels_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxels()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxels_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelSurfaceTools::execFindSurfaceVoxels)
{
	P_GET_STRUCT_REF(FVoxelSurfaceEditsVoxels,Z_Param_Out_Voxels);
	P_GET_OBJECT(AVoxelWorld,Z_Param_World);
	P_GET_STRUCT(FVoxelIntBox,Z_Param_Bounds);
	P_GET_UBOOL(Z_Param_bComputeNormals);
	P_FINISH;
	P_NATIVE_BEGIN;
	UVoxelSurfaceTools::FindSurfaceVoxels(Z_Param_Out_Voxels,Z_Param_World,Z_Param_Bounds,Z_Param_bComputeNormals);
	P_NATIVE_END;
}
// ********** End Class UVoxelSurfaceTools Function FindSurfaceVoxels ******************************

// ********** Begin Class UVoxelSurfaceTools Function FindSurfaceVoxels2D **************************
struct Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxels2D_Statics
{
	struct VoxelSurfaceTools_eventFindSurfaceVoxels2D_Parms
	{
		FVoxelSurfaceEditsVoxels Voxels;
		AVoxelWorld* World;
		FVoxelIntBox Bounds;
		bool bComputeNormals;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Voxel|Tools|Surface Tools" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Find voxels that are on the surface. Only keep the one with the surface right above them that are facing up. If 2 surface voxels have the same X Y, will only keep the one with the higher Z\n\x09 * @param\x09World\x09\x09\x09\x09\x09The voxel world\n\x09 * @param\x09""Bounds\x09\x09\x09\x09\x09""Bounds to look in\n\x09 * @param\x09""bComputeNormals\x09\x09\x09If true, compute the voxel normals. More expensive, but required for some functions.\n\x09 */" },
#endif
		{ "CPP_Default_bComputeNormals", "false" },
		{ "DefaultToSelf", "World" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelSurfaceTools.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Find voxels that are on the surface. Only keep the one with the surface right above them that are facing up. If 2 surface voxels have the same X Y, will only keep the one with the higher Z\n@param       World                                   The voxel world\n@param       Bounds                                  Bounds to look in\n@param       bComputeNormals                 If true, compute the voxel normals. More expensive, but required for some functions." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Voxels;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Bounds;
	static void NewProp_bComputeNormals_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bComputeNormals;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxels2D_Statics::NewProp_Voxels = { "Voxels", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelSurfaceTools_eventFindSurfaceVoxels2D_Parms, Voxels), Z_Construct_UScriptStruct_FVoxelSurfaceEditsVoxels, METADATA_PARAMS(0, nullptr) }; // 847595784
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxels2D_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelSurfaceTools_eventFindSurfaceVoxels2D_Parms, World), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxels2D_Statics::NewProp_Bounds = { "Bounds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelSurfaceTools_eventFindSurfaceVoxels2D_Parms, Bounds), Z_Construct_UScriptStruct_FVoxelIntBox, METADATA_PARAMS(0, nullptr) }; // 3520536583
void Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxels2D_Statics::NewProp_bComputeNormals_SetBit(void* Obj)
{
	((VoxelSurfaceTools_eventFindSurfaceVoxels2D_Parms*)Obj)->bComputeNormals = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxels2D_Statics::NewProp_bComputeNormals = { "bComputeNormals", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VoxelSurfaceTools_eventFindSurfaceVoxels2D_Parms), &Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxels2D_Statics::NewProp_bComputeNormals_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxels2D_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxels2D_Statics::NewProp_Voxels,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxels2D_Statics::NewProp_World,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxels2D_Statics::NewProp_Bounds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxels2D_Statics::NewProp_bComputeNormals,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxels2D_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxels2D_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelSurfaceTools, nullptr, "FindSurfaceVoxels2D", Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxels2D_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxels2D_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxels2D_Statics::VoxelSurfaceTools_eventFindSurfaceVoxels2D_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxels2D_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxels2D_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxels2D_Statics::VoxelSurfaceTools_eventFindSurfaceVoxels2D_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxels2D()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxels2D_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelSurfaceTools::execFindSurfaceVoxels2D)
{
	P_GET_STRUCT_REF(FVoxelSurfaceEditsVoxels,Z_Param_Out_Voxels);
	P_GET_OBJECT(AVoxelWorld,Z_Param_World);
	P_GET_STRUCT(FVoxelIntBox,Z_Param_Bounds);
	P_GET_UBOOL(Z_Param_bComputeNormals);
	P_FINISH;
	P_NATIVE_BEGIN;
	UVoxelSurfaceTools::FindSurfaceVoxels2D(Z_Param_Out_Voxels,Z_Param_World,Z_Param_Bounds,Z_Param_bComputeNormals);
	P_NATIVE_END;
}
// ********** End Class UVoxelSurfaceTools Function FindSurfaceVoxels2D ****************************

// ********** Begin Class UVoxelSurfaceTools Function FindSurfaceVoxels2DAsync *********************
struct Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxels2DAsync_Statics
{
	struct VoxelSurfaceTools_eventFindSurfaceVoxels2DAsync_Parms
	{
		UObject* WorldContextObject;
		FLatentActionInfo LatentInfo;
		FVoxelSurfaceEditsVoxels Voxels;
		AVoxelWorld* World;
		FVoxelIntBox Bounds;
		bool bComputeNormals;
		bool bHideLatentWarnings;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "bHideLatentWarnings" },
		{ "Category", "Voxel|Tools|Surface Tools" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Find voxels that are on the surface. Only keep the one with the surface right above them that are facing up. If 2 surface voxels have the same X Y, will only keep the one with the higher Z\n\x09 * @param\x09World\x09\x09\x09\x09\x09The voxel world\n\x09 * @param\x09""Bounds\x09\x09\x09\x09\x09""Bounds to look in\n\x09 * @param\x09""bComputeNormals\x09\x09\x09If true, compute the voxel normals. More expensive, but required for some functions.\n\x09 */" },
#endif
		{ "CPP_Default_bComputeNormals", "false" },
		{ "CPP_Default_bHideLatentWarnings", "false" },
		{ "DefaultToSelf", "World" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelSurfaceTools.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Find voxels that are on the surface. Only keep the one with the surface right above them that are facing up. If 2 surface voxels have the same X Y, will only keep the one with the higher Z\n@param       World                                   The voxel world\n@param       Bounds                                  Bounds to look in\n@param       bComputeNormals                 If true, compute the voxel normals. More expensive, but required for some functions." },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Voxels;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Bounds;
	static void NewProp_bComputeNormals_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bComputeNormals;
	static void NewProp_bHideLatentWarnings_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHideLatentWarnings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxels2DAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelSurfaceTools_eventFindSurfaceVoxels2DAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxels2DAsync_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelSurfaceTools_eventFindSurfaceVoxels2DAsync_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(0, nullptr) }; // 4146275481
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxels2DAsync_Statics::NewProp_Voxels = { "Voxels", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelSurfaceTools_eventFindSurfaceVoxels2DAsync_Parms, Voxels), Z_Construct_UScriptStruct_FVoxelSurfaceEditsVoxels, METADATA_PARAMS(0, nullptr) }; // 847595784
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxels2DAsync_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelSurfaceTools_eventFindSurfaceVoxels2DAsync_Parms, World), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxels2DAsync_Statics::NewProp_Bounds = { "Bounds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelSurfaceTools_eventFindSurfaceVoxels2DAsync_Parms, Bounds), Z_Construct_UScriptStruct_FVoxelIntBox, METADATA_PARAMS(0, nullptr) }; // 3520536583
void Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxels2DAsync_Statics::NewProp_bComputeNormals_SetBit(void* Obj)
{
	((VoxelSurfaceTools_eventFindSurfaceVoxels2DAsync_Parms*)Obj)->bComputeNormals = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxels2DAsync_Statics::NewProp_bComputeNormals = { "bComputeNormals", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VoxelSurfaceTools_eventFindSurfaceVoxels2DAsync_Parms), &Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxels2DAsync_Statics::NewProp_bComputeNormals_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxels2DAsync_Statics::NewProp_bHideLatentWarnings_SetBit(void* Obj)
{
	((VoxelSurfaceTools_eventFindSurfaceVoxels2DAsync_Parms*)Obj)->bHideLatentWarnings = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxels2DAsync_Statics::NewProp_bHideLatentWarnings = { "bHideLatentWarnings", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VoxelSurfaceTools_eventFindSurfaceVoxels2DAsync_Parms), &Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxels2DAsync_Statics::NewProp_bHideLatentWarnings_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxels2DAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxels2DAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxels2DAsync_Statics::NewProp_LatentInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxels2DAsync_Statics::NewProp_Voxels,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxels2DAsync_Statics::NewProp_World,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxels2DAsync_Statics::NewProp_Bounds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxels2DAsync_Statics::NewProp_bComputeNormals,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxels2DAsync_Statics::NewProp_bHideLatentWarnings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxels2DAsync_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxels2DAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelSurfaceTools, nullptr, "FindSurfaceVoxels2DAsync", Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxels2DAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxels2DAsync_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxels2DAsync_Statics::VoxelSurfaceTools_eventFindSurfaceVoxels2DAsync_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxels2DAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxels2DAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxels2DAsync_Statics::VoxelSurfaceTools_eventFindSurfaceVoxels2DAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxels2DAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxels2DAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelSurfaceTools::execFindSurfaceVoxels2DAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
	P_GET_STRUCT_REF(FVoxelSurfaceEditsVoxels,Z_Param_Out_Voxels);
	P_GET_OBJECT(AVoxelWorld,Z_Param_World);
	P_GET_STRUCT(FVoxelIntBox,Z_Param_Bounds);
	P_GET_UBOOL(Z_Param_bComputeNormals);
	P_GET_UBOOL(Z_Param_bHideLatentWarnings);
	P_FINISH;
	P_NATIVE_BEGIN;
	UVoxelSurfaceTools::FindSurfaceVoxels2DAsync(Z_Param_WorldContextObject,Z_Param_LatentInfo,Z_Param_Out_Voxels,Z_Param_World,Z_Param_Bounds,Z_Param_bComputeNormals,Z_Param_bHideLatentWarnings);
	P_NATIVE_END;
}
// ********** End Class UVoxelSurfaceTools Function FindSurfaceVoxels2DAsync ***********************

// ********** Begin Class UVoxelSurfaceTools Function FindSurfaceVoxelsAsync ***********************
struct Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxelsAsync_Statics
{
	struct VoxelSurfaceTools_eventFindSurfaceVoxelsAsync_Parms
	{
		UObject* WorldContextObject;
		FLatentActionInfo LatentInfo;
		FVoxelSurfaceEditsVoxels Voxels;
		AVoxelWorld* World;
		FVoxelIntBox Bounds;
		bool bComputeNormals;
		bool bHideLatentWarnings;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "bHideLatentWarnings" },
		{ "Category", "Voxel|Tools|Surface Tools" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Find voxels that are on the surface. Faster than FindSurfaceVoxelsFromDistanceField, but the values won't be exact distances\n\x09 * @param\x09World\x09\x09\x09\x09\x09The voxel world\n\x09 * @param\x09""Bounds\x09\x09\x09\x09\x09""Bounds to look in\n\x09 * @param\x09""bComputeNormals\x09\x09\x09If true, compute the voxel normals. More expensive, but required for some functions.\n\x09 */" },
#endif
		{ "CPP_Default_bComputeNormals", "false" },
		{ "CPP_Default_bHideLatentWarnings", "false" },
		{ "DefaultToSelf", "World" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelSurfaceTools.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Find voxels that are on the surface. Faster than FindSurfaceVoxelsFromDistanceField, but the values won't be exact distances\n@param       World                                   The voxel world\n@param       Bounds                                  Bounds to look in\n@param       bComputeNormals                 If true, compute the voxel normals. More expensive, but required for some functions." },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Voxels;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Bounds;
	static void NewProp_bComputeNormals_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bComputeNormals;
	static void NewProp_bHideLatentWarnings_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHideLatentWarnings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxelsAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelSurfaceTools_eventFindSurfaceVoxelsAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxelsAsync_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelSurfaceTools_eventFindSurfaceVoxelsAsync_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(0, nullptr) }; // 4146275481
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxelsAsync_Statics::NewProp_Voxels = { "Voxels", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelSurfaceTools_eventFindSurfaceVoxelsAsync_Parms, Voxels), Z_Construct_UScriptStruct_FVoxelSurfaceEditsVoxels, METADATA_PARAMS(0, nullptr) }; // 847595784
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxelsAsync_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelSurfaceTools_eventFindSurfaceVoxelsAsync_Parms, World), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxelsAsync_Statics::NewProp_Bounds = { "Bounds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelSurfaceTools_eventFindSurfaceVoxelsAsync_Parms, Bounds), Z_Construct_UScriptStruct_FVoxelIntBox, METADATA_PARAMS(0, nullptr) }; // 3520536583
void Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxelsAsync_Statics::NewProp_bComputeNormals_SetBit(void* Obj)
{
	((VoxelSurfaceTools_eventFindSurfaceVoxelsAsync_Parms*)Obj)->bComputeNormals = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxelsAsync_Statics::NewProp_bComputeNormals = { "bComputeNormals", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VoxelSurfaceTools_eventFindSurfaceVoxelsAsync_Parms), &Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxelsAsync_Statics::NewProp_bComputeNormals_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxelsAsync_Statics::NewProp_bHideLatentWarnings_SetBit(void* Obj)
{
	((VoxelSurfaceTools_eventFindSurfaceVoxelsAsync_Parms*)Obj)->bHideLatentWarnings = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxelsAsync_Statics::NewProp_bHideLatentWarnings = { "bHideLatentWarnings", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VoxelSurfaceTools_eventFindSurfaceVoxelsAsync_Parms), &Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxelsAsync_Statics::NewProp_bHideLatentWarnings_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxelsAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxelsAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxelsAsync_Statics::NewProp_LatentInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxelsAsync_Statics::NewProp_Voxels,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxelsAsync_Statics::NewProp_World,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxelsAsync_Statics::NewProp_Bounds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxelsAsync_Statics::NewProp_bComputeNormals,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxelsAsync_Statics::NewProp_bHideLatentWarnings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxelsAsync_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxelsAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelSurfaceTools, nullptr, "FindSurfaceVoxelsAsync", Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxelsAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxelsAsync_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxelsAsync_Statics::VoxelSurfaceTools_eventFindSurfaceVoxelsAsync_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxelsAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxelsAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxelsAsync_Statics::VoxelSurfaceTools_eventFindSurfaceVoxelsAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxelsAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxelsAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelSurfaceTools::execFindSurfaceVoxelsAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
	P_GET_STRUCT_REF(FVoxelSurfaceEditsVoxels,Z_Param_Out_Voxels);
	P_GET_OBJECT(AVoxelWorld,Z_Param_World);
	P_GET_STRUCT(FVoxelIntBox,Z_Param_Bounds);
	P_GET_UBOOL(Z_Param_bComputeNormals);
	P_GET_UBOOL(Z_Param_bHideLatentWarnings);
	P_FINISH;
	P_NATIVE_BEGIN;
	UVoxelSurfaceTools::FindSurfaceVoxelsAsync(Z_Param_WorldContextObject,Z_Param_LatentInfo,Z_Param_Out_Voxels,Z_Param_World,Z_Param_Bounds,Z_Param_bComputeNormals,Z_Param_bHideLatentWarnings);
	P_NATIVE_END;
}
// ********** End Class UVoxelSurfaceTools Function FindSurfaceVoxelsAsync *************************

// ********** Begin Class UVoxelSurfaceTools Function FindSurfaceVoxelsFromDistanceField ***********
struct Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxelsFromDistanceField_Statics
{
	struct VoxelSurfaceTools_eventFindSurfaceVoxelsFromDistanceField_Parms
	{
		FVoxelSurfaceEditsVoxels Voxels;
		AVoxelWorld* World;
		FVoxelIntBox Bounds;
		bool bMultiThreaded;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "bMultiThreaded, ComputeDevice" },
		{ "Category", "Voxel|Tools|Surface Tools" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Find voxels that are on the surface using an exact computation of the distance field using the GPU\n\x09 * @param\x09World\x09\x09\x09The voxel world\n\x09 * @param\x09""Bounds\x09\x09\x09""Bounds to look in\n\x09 * @param\x09""bMultiThreaded\x09If true will multithread the CPU loops\n\x09 * @param\x09""ComputeDevice\x09Whether to use the GPU or not\n\x09 */" },
#endif
		{ "CPP_Default_bMultiThreaded", "false" },
		{ "DefaultToSelf", "World" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelSurfaceTools.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Find voxels that are on the surface using an exact computation of the distance field using the GPU\n@param       World                   The voxel world\n@param       Bounds                  Bounds to look in\n@param       bMultiThreaded  If true will multithread the CPU loops\n@param       ComputeDevice   Whether to use the GPU or not" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Voxels;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Bounds;
	static void NewProp_bMultiThreaded_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bMultiThreaded;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxelsFromDistanceField_Statics::NewProp_Voxels = { "Voxels", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelSurfaceTools_eventFindSurfaceVoxelsFromDistanceField_Parms, Voxels), Z_Construct_UScriptStruct_FVoxelSurfaceEditsVoxels, METADATA_PARAMS(0, nullptr) }; // 847595784
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxelsFromDistanceField_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelSurfaceTools_eventFindSurfaceVoxelsFromDistanceField_Parms, World), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxelsFromDistanceField_Statics::NewProp_Bounds = { "Bounds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelSurfaceTools_eventFindSurfaceVoxelsFromDistanceField_Parms, Bounds), Z_Construct_UScriptStruct_FVoxelIntBox, METADATA_PARAMS(0, nullptr) }; // 3520536583
void Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxelsFromDistanceField_Statics::NewProp_bMultiThreaded_SetBit(void* Obj)
{
	((VoxelSurfaceTools_eventFindSurfaceVoxelsFromDistanceField_Parms*)Obj)->bMultiThreaded = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxelsFromDistanceField_Statics::NewProp_bMultiThreaded = { "bMultiThreaded", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VoxelSurfaceTools_eventFindSurfaceVoxelsFromDistanceField_Parms), &Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxelsFromDistanceField_Statics::NewProp_bMultiThreaded_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxelsFromDistanceField_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxelsFromDistanceField_Statics::NewProp_Voxels,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxelsFromDistanceField_Statics::NewProp_World,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxelsFromDistanceField_Statics::NewProp_Bounds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxelsFromDistanceField_Statics::NewProp_bMultiThreaded,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxelsFromDistanceField_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxelsFromDistanceField_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelSurfaceTools, nullptr, "FindSurfaceVoxelsFromDistanceField", Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxelsFromDistanceField_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxelsFromDistanceField_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxelsFromDistanceField_Statics::VoxelSurfaceTools_eventFindSurfaceVoxelsFromDistanceField_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxelsFromDistanceField_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxelsFromDistanceField_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxelsFromDistanceField_Statics::VoxelSurfaceTools_eventFindSurfaceVoxelsFromDistanceField_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxelsFromDistanceField()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxelsFromDistanceField_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelSurfaceTools::execFindSurfaceVoxelsFromDistanceField)
{
	P_GET_STRUCT_REF(FVoxelSurfaceEditsVoxels,Z_Param_Out_Voxels);
	P_GET_OBJECT(AVoxelWorld,Z_Param_World);
	P_GET_STRUCT(FVoxelIntBox,Z_Param_Bounds);
	P_GET_UBOOL(Z_Param_bMultiThreaded);
	P_FINISH;
	P_NATIVE_BEGIN;
	UVoxelSurfaceTools::FindSurfaceVoxelsFromDistanceField(Z_Param_Out_Voxels,Z_Param_World,Z_Param_Bounds,Z_Param_bMultiThreaded);
	P_NATIVE_END;
}
// ********** End Class UVoxelSurfaceTools Function FindSurfaceVoxelsFromDistanceField *************

// ********** Begin Class UVoxelSurfaceTools Function GetBounds ************************************
struct Z_Construct_UFunction_UVoxelSurfaceTools_GetBounds_Statics
{
	struct VoxelSurfaceTools_eventGetBounds_Parms
	{
		FVoxelSurfaceEditsProcessedVoxels Voxels;
		FVoxelIntBox ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Voxel|Tools|Surface Tools" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelSurfaceTools.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Voxels;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSurfaceTools_GetBounds_Statics::NewProp_Voxels = { "Voxels", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelSurfaceTools_eventGetBounds_Parms, Voxels), Z_Construct_UScriptStruct_FVoxelSurfaceEditsProcessedVoxels, METADATA_PARAMS(0, nullptr) }; // 568197648
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSurfaceTools_GetBounds_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelSurfaceTools_eventGetBounds_Parms, ReturnValue), Z_Construct_UScriptStruct_FVoxelIntBox, METADATA_PARAMS(0, nullptr) }; // 3520536583
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelSurfaceTools_GetBounds_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceTools_GetBounds_Statics::NewProp_Voxels,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceTools_GetBounds_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSurfaceTools_GetBounds_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelSurfaceTools_GetBounds_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelSurfaceTools, nullptr, "GetBounds", Z_Construct_UFunction_UVoxelSurfaceTools_GetBounds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSurfaceTools_GetBounds_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVoxelSurfaceTools_GetBounds_Statics::VoxelSurfaceTools_eventGetBounds_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSurfaceTools_GetBounds_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelSurfaceTools_GetBounds_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVoxelSurfaceTools_GetBounds_Statics::VoxelSurfaceTools_eventGetBounds_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVoxelSurfaceTools_GetBounds()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelSurfaceTools_GetBounds_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelSurfaceTools::execGetBounds)
{
	P_GET_STRUCT(FVoxelSurfaceEditsProcessedVoxels,Z_Param_Voxels);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVoxelIntBox*)Z_Param__Result=UVoxelSurfaceTools::GetBounds(Z_Param_Voxels);
	P_NATIVE_END;
}
// ********** End Class UVoxelSurfaceTools Function GetBounds **************************************

// ********** Begin Class UVoxelSurfaceTools Function GetStrengthMaskScale *************************
struct Z_Construct_UFunction_UVoxelSurfaceTools_GetStrengthMaskScale_Statics
{
	struct VoxelSurfaceTools_eventGetStrengthMaskScale_Parms
	{
		float ScaleX;
		float ScaleY;
		AVoxelWorld* World;
		FVoxelFloatTexture Mask;
		float SizeX;
		float SizeY;
		bool bConvertToVoxelSpace;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "bConvertToVoxelSpace" },
		{ "Category", "Voxel|Tools|Surface Tools" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Compute the scale for ApplyStrengthMask from a wanted size\n\x09 * @param\x09World\x09\x09\x09\x09\x09The voxel world, required if bConvertToVoxelSpace = true\n\x09 * @param\x09Mask\x09\x09\x09\x09\x09The mask\n\x09 * @param\x09SizeX\x09\x09\x09\x09\x09The wanted size on the X axis, in cm if bConvertToVoxelSpace = true\n\x09 * @param\x09SizeY\x09\x09\x09\x09\x09The wanted size on the Y axis, in cm if bConvertToVoxelSpace = true\n\x09 * @param\x09""bConvertToVoxelSpace\x09""Converts SizeX and SizeY from world space to voxel space. Requires World to be non null\n\x09 */" },
#endif
		{ "CPP_Default_bConvertToVoxelSpace", "true" },
		{ "CPP_Default_SizeX", "1000.000000" },
		{ "CPP_Default_SizeY", "1000.000000" },
		{ "DefaultToSelf", "World" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelSurfaceTools.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Compute the scale for ApplyStrengthMask from a wanted size\n@param       World                                   The voxel world, required if bConvertToVoxelSpace = true\n@param       Mask                                    The mask\n@param       SizeX                                   The wanted size on the X axis, in cm if bConvertToVoxelSpace = true\n@param       SizeY                                   The wanted size on the Y axis, in cm if bConvertToVoxelSpace = true\n@param       bConvertToVoxelSpace    Converts SizeX and SizeY from world space to voxel space. Requires World to be non null" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ScaleX;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ScaleY;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Mask;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SizeX;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SizeY;
	static void NewProp_bConvertToVoxelSpace_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bConvertToVoxelSpace;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoxelSurfaceTools_GetStrengthMaskScale_Statics::NewProp_ScaleX = { "ScaleX", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelSurfaceTools_eventGetStrengthMaskScale_Parms, ScaleX), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoxelSurfaceTools_GetStrengthMaskScale_Statics::NewProp_ScaleY = { "ScaleY", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelSurfaceTools_eventGetStrengthMaskScale_Parms, ScaleY), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelSurfaceTools_GetStrengthMaskScale_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelSurfaceTools_eventGetStrengthMaskScale_Parms, World), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSurfaceTools_GetStrengthMaskScale_Statics::NewProp_Mask = { "Mask", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelSurfaceTools_eventGetStrengthMaskScale_Parms, Mask), Z_Construct_UScriptStruct_FVoxelFloatTexture, METADATA_PARAMS(0, nullptr) }; // 369089072
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoxelSurfaceTools_GetStrengthMaskScale_Statics::NewProp_SizeX = { "SizeX", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelSurfaceTools_eventGetStrengthMaskScale_Parms, SizeX), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoxelSurfaceTools_GetStrengthMaskScale_Statics::NewProp_SizeY = { "SizeY", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelSurfaceTools_eventGetStrengthMaskScale_Parms, SizeY), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UVoxelSurfaceTools_GetStrengthMaskScale_Statics::NewProp_bConvertToVoxelSpace_SetBit(void* Obj)
{
	((VoxelSurfaceTools_eventGetStrengthMaskScale_Parms*)Obj)->bConvertToVoxelSpace = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelSurfaceTools_GetStrengthMaskScale_Statics::NewProp_bConvertToVoxelSpace = { "bConvertToVoxelSpace", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VoxelSurfaceTools_eventGetStrengthMaskScale_Parms), &Z_Construct_UFunction_UVoxelSurfaceTools_GetStrengthMaskScale_Statics::NewProp_bConvertToVoxelSpace_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelSurfaceTools_GetStrengthMaskScale_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceTools_GetStrengthMaskScale_Statics::NewProp_ScaleX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceTools_GetStrengthMaskScale_Statics::NewProp_ScaleY,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceTools_GetStrengthMaskScale_Statics::NewProp_World,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceTools_GetStrengthMaskScale_Statics::NewProp_Mask,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceTools_GetStrengthMaskScale_Statics::NewProp_SizeX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceTools_GetStrengthMaskScale_Statics::NewProp_SizeY,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceTools_GetStrengthMaskScale_Statics::NewProp_bConvertToVoxelSpace,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSurfaceTools_GetStrengthMaskScale_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelSurfaceTools_GetStrengthMaskScale_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelSurfaceTools, nullptr, "GetStrengthMaskScale", Z_Construct_UFunction_UVoxelSurfaceTools_GetStrengthMaskScale_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSurfaceTools_GetStrengthMaskScale_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVoxelSurfaceTools_GetStrengthMaskScale_Statics::VoxelSurfaceTools_eventGetStrengthMaskScale_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSurfaceTools_GetStrengthMaskScale_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelSurfaceTools_GetStrengthMaskScale_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVoxelSurfaceTools_GetStrengthMaskScale_Statics::VoxelSurfaceTools_eventGetStrengthMaskScale_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVoxelSurfaceTools_GetStrengthMaskScale()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelSurfaceTools_GetStrengthMaskScale_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelSurfaceTools::execGetStrengthMaskScale)
{
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_ScaleX);
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_ScaleY);
	P_GET_OBJECT(AVoxelWorld,Z_Param_World);
	P_GET_STRUCT(FVoxelFloatTexture,Z_Param_Mask);
	P_GET_PROPERTY(FFloatProperty,Z_Param_SizeX);
	P_GET_PROPERTY(FFloatProperty,Z_Param_SizeY);
	P_GET_UBOOL(Z_Param_bConvertToVoxelSpace);
	P_FINISH;
	P_NATIVE_BEGIN;
	UVoxelSurfaceTools::GetStrengthMaskScale(Z_Param_Out_ScaleX,Z_Param_Out_ScaleY,Z_Param_World,Z_Param_Mask,Z_Param_SizeX,Z_Param_SizeY,Z_Param_bConvertToVoxelSpace);
	P_NATIVE_END;
}
// ********** End Class UVoxelSurfaceTools Function GetStrengthMaskScale ***************************

// ********** Begin Class UVoxelSurfaceTools *******************************************************
void UVoxelSurfaceTools::StaticRegisterNativesUVoxelSurfaceTools()
{
	UClass* Class = UVoxelSurfaceTools::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddToStack", &UVoxelSurfaceTools::execAddToStack },
		{ "ApplyConstantStrength", &UVoxelSurfaceTools::execApplyConstantStrength },
		{ "ApplyFalloff", &UVoxelSurfaceTools::execApplyFalloff },
		{ "ApplyFlatten", &UVoxelSurfaceTools::execApplyFlatten },
		{ "ApplyStack", &UVoxelSurfaceTools::execApplyStack },
		{ "ApplyStackAsync", &UVoxelSurfaceTools::execApplyStackAsync },
		{ "ApplyStrengthCurve", &UVoxelSurfaceTools::execApplyStrengthCurve },
		{ "ApplyStrengthMask", &UVoxelSurfaceTools::execApplyStrengthMask },
		{ "ApplyTerrace", &UVoxelSurfaceTools::execApplyTerrace },
		{ "DebugSurfaceVoxels", &UVoxelSurfaceTools::execDebugSurfaceVoxels },
		{ "FindSurfaceVoxels", &UVoxelSurfaceTools::execFindSurfaceVoxels },
		{ "FindSurfaceVoxels2D", &UVoxelSurfaceTools::execFindSurfaceVoxels2D },
		{ "FindSurfaceVoxels2DAsync", &UVoxelSurfaceTools::execFindSurfaceVoxels2DAsync },
		{ "FindSurfaceVoxelsAsync", &UVoxelSurfaceTools::execFindSurfaceVoxelsAsync },
		{ "FindSurfaceVoxelsFromDistanceField", &UVoxelSurfaceTools::execFindSurfaceVoxelsFromDistanceField },
		{ "GetBounds", &UVoxelSurfaceTools::execGetBounds },
		{ "GetStrengthMaskScale", &UVoxelSurfaceTools::execGetStrengthMaskScale },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UVoxelSurfaceTools;
UClass* UVoxelSurfaceTools::GetPrivateStaticClass()
{
	using TClass = UVoxelSurfaceTools;
	if (!Z_Registration_Info_UClass_UVoxelSurfaceTools.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("VoxelSurfaceTools"),
			Z_Registration_Info_UClass_UVoxelSurfaceTools.InnerSingleton,
			StaticRegisterNativesUVoxelSurfaceTools,
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
	return Z_Registration_Info_UClass_UVoxelSurfaceTools.InnerSingleton;
}
UClass* Z_Construct_UClass_UVoxelSurfaceTools_NoRegister()
{
	return UVoxelSurfaceTools::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UVoxelSurfaceTools_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "VoxelTools/VoxelSurfaceTools.h" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelSurfaceTools.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UVoxelSurfaceTools_AddToStack, "AddToStack" }, // 2633083871
		{ &Z_Construct_UFunction_UVoxelSurfaceTools_ApplyConstantStrength, "ApplyConstantStrength" }, // 3627544052
		{ &Z_Construct_UFunction_UVoxelSurfaceTools_ApplyFalloff, "ApplyFalloff" }, // 2595505875
		{ &Z_Construct_UFunction_UVoxelSurfaceTools_ApplyFlatten, "ApplyFlatten" }, // 1059024503
		{ &Z_Construct_UFunction_UVoxelSurfaceTools_ApplyStack, "ApplyStack" }, // 3590821071
		{ &Z_Construct_UFunction_UVoxelSurfaceTools_ApplyStackAsync, "ApplyStackAsync" }, // 2694235832
		{ &Z_Construct_UFunction_UVoxelSurfaceTools_ApplyStrengthCurve, "ApplyStrengthCurve" }, // 2798081323
		{ &Z_Construct_UFunction_UVoxelSurfaceTools_ApplyStrengthMask, "ApplyStrengthMask" }, // 441531275
		{ &Z_Construct_UFunction_UVoxelSurfaceTools_ApplyTerrace, "ApplyTerrace" }, // 3228303184
		{ &Z_Construct_UFunction_UVoxelSurfaceTools_DebugSurfaceVoxels, "DebugSurfaceVoxels" }, // 881124807
		{ &Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxels, "FindSurfaceVoxels" }, // 2437103212
		{ &Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxels2D, "FindSurfaceVoxels2D" }, // 841916853
		{ &Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxels2DAsync, "FindSurfaceVoxels2DAsync" }, // 2448007098
		{ &Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxelsAsync, "FindSurfaceVoxelsAsync" }, // 712805477
		{ &Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxelsFromDistanceField, "FindSurfaceVoxelsFromDistanceField" }, // 1601632827
		{ &Z_Construct_UFunction_UVoxelSurfaceTools_GetBounds, "GetBounds" }, // 1817211961
		{ &Z_Construct_UFunction_UVoxelSurfaceTools_GetStrengthMaskScale, "GetStrengthMaskScale" }, // 3773905873
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelSurfaceTools>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UVoxelSurfaceTools_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelSurfaceTools_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelSurfaceTools_Statics::ClassParams = {
	&UVoxelSurfaceTools::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelSurfaceTools_Statics::Class_MetaDataParams), Z_Construct_UClass_UVoxelSurfaceTools_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVoxelSurfaceTools()
{
	if (!Z_Registration_Info_UClass_UVoxelSurfaceTools.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelSurfaceTools.OuterSingleton, Z_Construct_UClass_UVoxelSurfaceTools_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVoxelSurfaceTools.OuterSingleton;
}
UVoxelSurfaceTools::UVoxelSurfaceTools(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelSurfaceTools);
UVoxelSurfaceTools::~UVoxelSurfaceTools() {}
// ********** End Class UVoxelSurfaceTools *********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelTools_VoxelSurfaceTools_h__Script_Voxel_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EVoxelSDFMergeMode_StaticEnum, TEXT("EVoxelSDFMergeMode"), &Z_Registration_Info_UEnum_EVoxelSDFMergeMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3719663476U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UVoxelSurfaceTools, UVoxelSurfaceTools::StaticClass, TEXT("UVoxelSurfaceTools"), &Z_Registration_Info_UClass_UVoxelSurfaceTools, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelSurfaceTools), 362089538U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelTools_VoxelSurfaceTools_h__Script_Voxel_2201791758(TEXT("/Script/Voxel"),
	Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelTools_VoxelSurfaceTools_h__Script_Voxel_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelTools_VoxelSurfaceTools_h__Script_Voxel_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelTools_VoxelSurfaceTools_h__Script_Voxel_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelTools_VoxelSurfaceTools_h__Script_Voxel_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
