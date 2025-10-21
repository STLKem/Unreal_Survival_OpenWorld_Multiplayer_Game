// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Voxel/Public/VoxelPlaceableItems/VoxelPlaceableItemManager.h"
#include "Voxel/Public/VoxelIntBox.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeVoxelPlaceableItemManager() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
UPackage* Z_Construct_UPackage__Script_Voxel();
VOXEL_API UClass* Z_Construct_UClass_UVoxelGeneratorCache_NoRegister();
VOXEL_API UClass* Z_Construct_UClass_UVoxelGeneratorInstanceWrapper_NoRegister();
VOXEL_API UClass* Z_Construct_UClass_UVoxelPlaceableItemManager();
VOXEL_API UClass* Z_Construct_UClass_UVoxelPlaceableItemManager_NoRegister();
VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelDataItemConstructionInfo();
VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelIntBox();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FVoxelDataItemConstructionInfo ************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FVoxelDataItemConstructionInfo;
class UScriptStruct* FVoxelDataItemConstructionInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FVoxelDataItemConstructionInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FVoxelDataItemConstructionInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVoxelDataItemConstructionInfo, (UObject*)Z_Construct_UPackage__Script_Voxel(), TEXT("VoxelDataItemConstructionInfo"));
	}
	return Z_Registration_Info_UScriptStruct_FVoxelDataItemConstructionInfo.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FVoxelDataItemConstructionInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/VoxelPlaceableItems/VoxelPlaceableItemManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Generator_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelPlaceableItems/VoxelPlaceableItemManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Bounds_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelPlaceableItems/VoxelPlaceableItemManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Parameters_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelPlaceableItems/VoxelPlaceableItemManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mask_MetaData[] = {
		{ "Bitmask", "" },
		{ "BitmaskEnum", "/Script/Voxel.EVoxel32BitMask" },
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelPlaceableItems/VoxelPlaceableItemManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Generator;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Bounds;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Parameters_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Parameters;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Mask;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVoxelDataItemConstructionInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FVoxelDataItemConstructionInfo_Statics::NewProp_Generator = { "Generator", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVoxelDataItemConstructionInfo, Generator), Z_Construct_UClass_UVoxelGeneratorInstanceWrapper_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Generator_MetaData), NewProp_Generator_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVoxelDataItemConstructionInfo_Statics::NewProp_Bounds = { "Bounds", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVoxelDataItemConstructionInfo, Bounds), Z_Construct_UScriptStruct_FVoxelIntBox, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Bounds_MetaData), NewProp_Bounds_MetaData) }; // 3008064533
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVoxelDataItemConstructionInfo_Statics::NewProp_Parameters_Inner = { "Parameters", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FVoxelDataItemConstructionInfo_Statics::NewProp_Parameters = { "Parameters", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVoxelDataItemConstructionInfo, Parameters), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Parameters_MetaData), NewProp_Parameters_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FVoxelDataItemConstructionInfo_Statics::NewProp_Mask = { "Mask", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVoxelDataItemConstructionInfo, Mask), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mask_MetaData), NewProp_Mask_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVoxelDataItemConstructionInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelDataItemConstructionInfo_Statics::NewProp_Generator,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelDataItemConstructionInfo_Statics::NewProp_Bounds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelDataItemConstructionInfo_Statics::NewProp_Parameters_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelDataItemConstructionInfo_Statics::NewProp_Parameters,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelDataItemConstructionInfo_Statics::NewProp_Mask,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelDataItemConstructionInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVoxelDataItemConstructionInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
	nullptr,
	&NewStructOps,
	"VoxelDataItemConstructionInfo",
	Z_Construct_UScriptStruct_FVoxelDataItemConstructionInfo_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelDataItemConstructionInfo_Statics::PropPointers),
	sizeof(FVoxelDataItemConstructionInfo),
	alignof(FVoxelDataItemConstructionInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelDataItemConstructionInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVoxelDataItemConstructionInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FVoxelDataItemConstructionInfo()
{
	if (!Z_Registration_Info_UScriptStruct_FVoxelDataItemConstructionInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FVoxelDataItemConstructionInfo.InnerSingleton, Z_Construct_UScriptStruct_FVoxelDataItemConstructionInfo_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FVoxelDataItemConstructionInfo.InnerSingleton;
}
// ********** End ScriptStruct FVoxelDataItemConstructionInfo **************************************

// ********** Begin Class UVoxelPlaceableItemManager Function AddDataItem **************************
struct Z_Construct_UFunction_UVoxelPlaceableItemManager_AddDataItem_Statics
{
	struct VoxelPlaceableItemManager_eventAddDataItem_Parms
	{
		FVoxelDataItemConstructionInfo Info;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Voxel Placeable Item Manager" },
		{ "Comment", "// Do not call this directly: call the respective Add Data Item instead!\n" },
		{ "ModuleRelativePath", "Public/VoxelPlaceableItems/VoxelPlaceableItemManager.h" },
		{ "ToolTip", "Do not call this directly: call the respective Add Data Item instead!" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Info;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelPlaceableItemManager_AddDataItem_Statics::NewProp_Info = { "Info", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelPlaceableItemManager_eventAddDataItem_Parms, Info), Z_Construct_UScriptStruct_FVoxelDataItemConstructionInfo, METADATA_PARAMS(0, nullptr) }; // 4050484210
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelPlaceableItemManager_AddDataItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelPlaceableItemManager_AddDataItem_Statics::NewProp_Info,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelPlaceableItemManager_AddDataItem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelPlaceableItemManager_AddDataItem_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelPlaceableItemManager, nullptr, "AddDataItem", Z_Construct_UFunction_UVoxelPlaceableItemManager_AddDataItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelPlaceableItemManager_AddDataItem_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVoxelPlaceableItemManager_AddDataItem_Statics::VoxelPlaceableItemManager_eventAddDataItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelPlaceableItemManager_AddDataItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelPlaceableItemManager_AddDataItem_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVoxelPlaceableItemManager_AddDataItem_Statics::VoxelPlaceableItemManager_eventAddDataItem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVoxelPlaceableItemManager_AddDataItem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelPlaceableItemManager_AddDataItem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelPlaceableItemManager::execAddDataItem)
{
	P_GET_STRUCT(FVoxelDataItemConstructionInfo,Z_Param_Info);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddDataItem(Z_Param_Info);
	P_NATIVE_END;
}
// ********** End Class UVoxelPlaceableItemManager Function AddDataItem ****************************

// ********** Begin Class UVoxelPlaceableItemManager Function DrawDebugLine ************************
struct Z_Construct_UFunction_UVoxelPlaceableItemManager_DrawDebugLine_Statics
{
	struct VoxelPlaceableItemManager_eventDrawDebugLine_Parms
	{
		FVector Start;
		FVector End;
		FLinearColor Color;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Voxel Placeable Item Manager" },
		{ "Comment", "/**\n\x09 * Draws a line in the world & in the voxel graph preview\n\x09 * @param\x09Start\x09\x09The start position in voxels\n\x09 * @param\x09""End\x09\x09\x09The end position in voxels\n\x09 * @param\x09""Color\x09\x09The color\n\x09 */" },
		{ "CPP_Default_Color", "(R=1.000000,G=0.000000,B=0.000000,A=1.000000)" },
		{ "ModuleRelativePath", "Public/VoxelPlaceableItems/VoxelPlaceableItemManager.h" },
		{ "ToolTip", "Draws a line in the world & in the voxel graph preview\n@param       Start           The start position in voxels\n@param       End                     The end position in voxels\n@param       Color           The color" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Start;
	static const UECodeGen_Private::FStructPropertyParams NewProp_End;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelPlaceableItemManager_DrawDebugLine_Statics::NewProp_Start = { "Start", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelPlaceableItemManager_eventDrawDebugLine_Parms, Start), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelPlaceableItemManager_DrawDebugLine_Statics::NewProp_End = { "End", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelPlaceableItemManager_eventDrawDebugLine_Parms, End), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelPlaceableItemManager_DrawDebugLine_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelPlaceableItemManager_eventDrawDebugLine_Parms, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelPlaceableItemManager_DrawDebugLine_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelPlaceableItemManager_DrawDebugLine_Statics::NewProp_Start,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelPlaceableItemManager_DrawDebugLine_Statics::NewProp_End,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelPlaceableItemManager_DrawDebugLine_Statics::NewProp_Color,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelPlaceableItemManager_DrawDebugLine_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelPlaceableItemManager_DrawDebugLine_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelPlaceableItemManager, nullptr, "DrawDebugLine", Z_Construct_UFunction_UVoxelPlaceableItemManager_DrawDebugLine_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelPlaceableItemManager_DrawDebugLine_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVoxelPlaceableItemManager_DrawDebugLine_Statics::VoxelPlaceableItemManager_eventDrawDebugLine_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelPlaceableItemManager_DrawDebugLine_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelPlaceableItemManager_DrawDebugLine_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVoxelPlaceableItemManager_DrawDebugLine_Statics::VoxelPlaceableItemManager_eventDrawDebugLine_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVoxelPlaceableItemManager_DrawDebugLine()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelPlaceableItemManager_DrawDebugLine_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelPlaceableItemManager::execDrawDebugLine)
{
	P_GET_STRUCT(FVector,Z_Param_Start);
	P_GET_STRUCT(FVector,Z_Param_End);
	P_GET_STRUCT(FLinearColor,Z_Param_Color);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DrawDebugLine(Z_Param_Start,Z_Param_End,Z_Param_Color);
	P_NATIVE_END;
}
// ********** End Class UVoxelPlaceableItemManager Function DrawDebugLine **************************

// ********** Begin Class UVoxelPlaceableItemManager Function DrawDebugPoint ***********************
struct Z_Construct_UFunction_UVoxelPlaceableItemManager_DrawDebugPoint_Statics
{
	struct VoxelPlaceableItemManager_eventDrawDebugPoint_Parms
	{
		FVector Position;
		FLinearColor Color;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Voxel Placeable Item Manager" },
		{ "Comment", "/**\n\x09 * Draws a point in the world & in the voxel graph preview\n\x09 * @param\x09Position\x09The position in voxels\n\x09 * @param\x09""Color\x09\x09The color\n\x09 */" },
		{ "CPP_Default_Color", "(R=0.000000,G=1.000000,B=0.000000,A=1.000000)" },
		{ "ModuleRelativePath", "Public/VoxelPlaceableItems/VoxelPlaceableItemManager.h" },
		{ "ToolTip", "Draws a point in the world & in the voxel graph preview\n@param       Position        The position in voxels\n@param       Color           The color" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Position;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelPlaceableItemManager_DrawDebugPoint_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelPlaceableItemManager_eventDrawDebugPoint_Parms, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelPlaceableItemManager_DrawDebugPoint_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelPlaceableItemManager_eventDrawDebugPoint_Parms, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelPlaceableItemManager_DrawDebugPoint_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelPlaceableItemManager_DrawDebugPoint_Statics::NewProp_Position,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelPlaceableItemManager_DrawDebugPoint_Statics::NewProp_Color,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelPlaceableItemManager_DrawDebugPoint_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelPlaceableItemManager_DrawDebugPoint_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelPlaceableItemManager, nullptr, "DrawDebugPoint", Z_Construct_UFunction_UVoxelPlaceableItemManager_DrawDebugPoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelPlaceableItemManager_DrawDebugPoint_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVoxelPlaceableItemManager_DrawDebugPoint_Statics::VoxelPlaceableItemManager_eventDrawDebugPoint_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelPlaceableItemManager_DrawDebugPoint_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelPlaceableItemManager_DrawDebugPoint_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVoxelPlaceableItemManager_DrawDebugPoint_Statics::VoxelPlaceableItemManager_eventDrawDebugPoint_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVoxelPlaceableItemManager_DrawDebugPoint()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelPlaceableItemManager_DrawDebugPoint_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelPlaceableItemManager::execDrawDebugPoint)
{
	P_GET_STRUCT(FVector,Z_Param_Position);
	P_GET_STRUCT(FLinearColor,Z_Param_Color);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DrawDebugPoint(Z_Param_Position,Z_Param_Color);
	P_NATIVE_END;
}
// ********** End Class UVoxelPlaceableItemManager Function DrawDebugPoint *************************

// ********** Begin Class UVoxelPlaceableItemManager Function GetGeneratorCache ********************
struct Z_Construct_UFunction_UVoxelPlaceableItemManager_GetGeneratorCache_Statics
{
	struct VoxelPlaceableItemManager_eventGetGeneratorCache_Parms
	{
		UVoxelGeneratorCache* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Voxel Placeable Item Manager" },
		{ "ModuleRelativePath", "Public/VoxelPlaceableItems/VoxelPlaceableItemManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelPlaceableItemManager_GetGeneratorCache_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelPlaceableItemManager_eventGetGeneratorCache_Parms, ReturnValue), Z_Construct_UClass_UVoxelGeneratorCache_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelPlaceableItemManager_GetGeneratorCache_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelPlaceableItemManager_GetGeneratorCache_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelPlaceableItemManager_GetGeneratorCache_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelPlaceableItemManager_GetGeneratorCache_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelPlaceableItemManager, nullptr, "GetGeneratorCache", Z_Construct_UFunction_UVoxelPlaceableItemManager_GetGeneratorCache_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelPlaceableItemManager_GetGeneratorCache_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVoxelPlaceableItemManager_GetGeneratorCache_Statics::VoxelPlaceableItemManager_eventGetGeneratorCache_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelPlaceableItemManager_GetGeneratorCache_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelPlaceableItemManager_GetGeneratorCache_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVoxelPlaceableItemManager_GetGeneratorCache_Statics::VoxelPlaceableItemManager_eventGetGeneratorCache_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVoxelPlaceableItemManager_GetGeneratorCache()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelPlaceableItemManager_GetGeneratorCache_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelPlaceableItemManager::execGetGeneratorCache)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UVoxelGeneratorCache**)Z_Param__Result=P_THIS->GetGeneratorCache();
	P_NATIVE_END;
}
// ********** End Class UVoxelPlaceableItemManager Function GetGeneratorCache **********************

// ********** Begin Class UVoxelPlaceableItemManager Function OnClear ******************************
static FName NAME_UVoxelPlaceableItemManager_OnClear = FName(TEXT("OnClear"));
void UVoxelPlaceableItemManager::OnClear()
{
	UFunction* Func = FindFunctionChecked(NAME_UVoxelPlaceableItemManager_OnClear);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
	ProcessEvent(Func,NULL);
	}
	else
	{
		OnClear_Implementation();
	}
}
struct Z_Construct_UFunction_UVoxelPlaceableItemManager_OnClear_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Voxel Placeable Item Manager" },
		{ "ModuleRelativePath", "Public/VoxelPlaceableItems/VoxelPlaceableItemManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelPlaceableItemManager_OnClear_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelPlaceableItemManager, nullptr, "OnClear", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelPlaceableItemManager_OnClear_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelPlaceableItemManager_OnClear_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UVoxelPlaceableItemManager_OnClear()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelPlaceableItemManager_OnClear_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelPlaceableItemManager::execOnClear)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnClear_Implementation();
	P_NATIVE_END;
}
// ********** End Class UVoxelPlaceableItemManager Function OnClear ********************************

// ********** Begin Class UVoxelPlaceableItemManager Function OnGenerate ***************************
static FName NAME_UVoxelPlaceableItemManager_OnGenerate = FName(TEXT("OnGenerate"));
void UVoxelPlaceableItemManager::OnGenerate()
{
	UFunction* Func = FindFunctionChecked(NAME_UVoxelPlaceableItemManager_OnGenerate);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
	ProcessEvent(Func,NULL);
	}
	else
	{
		OnGenerate_Implementation();
	}
}
struct Z_Construct_UFunction_UVoxelPlaceableItemManager_OnGenerate_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Voxel Placeable Item Manager" },
		{ "ModuleRelativePath", "Public/VoxelPlaceableItems/VoxelPlaceableItemManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelPlaceableItemManager_OnGenerate_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelPlaceableItemManager, nullptr, "OnGenerate", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelPlaceableItemManager_OnGenerate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelPlaceableItemManager_OnGenerate_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UVoxelPlaceableItemManager_OnGenerate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelPlaceableItemManager_OnGenerate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelPlaceableItemManager::execOnGenerate)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnGenerate_Implementation();
	P_NATIVE_END;
}
// ********** End Class UVoxelPlaceableItemManager Function OnGenerate *****************************

// ********** Begin Class UVoxelPlaceableItemManager ***********************************************
void UVoxelPlaceableItemManager::StaticRegisterNativesUVoxelPlaceableItemManager()
{
	UClass* Class = UVoxelPlaceableItemManager::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddDataItem", &UVoxelPlaceableItemManager::execAddDataItem },
		{ "DrawDebugLine", &UVoxelPlaceableItemManager::execDrawDebugLine },
		{ "DrawDebugPoint", &UVoxelPlaceableItemManager::execDrawDebugPoint },
		{ "GetGeneratorCache", &UVoxelPlaceableItemManager::execGetGeneratorCache },
		{ "OnClear", &UVoxelPlaceableItemManager::execOnClear },
		{ "OnGenerate", &UVoxelPlaceableItemManager::execOnGenerate },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UVoxelPlaceableItemManager;
UClass* UVoxelPlaceableItemManager::GetPrivateStaticClass()
{
	using TClass = UVoxelPlaceableItemManager;
	if (!Z_Registration_Info_UClass_UVoxelPlaceableItemManager.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("VoxelPlaceableItemManager"),
			Z_Registration_Info_UClass_UVoxelPlaceableItemManager.InnerSingleton,
			StaticRegisterNativesUVoxelPlaceableItemManager,
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
	return Z_Registration_Info_UClass_UVoxelPlaceableItemManager.InnerSingleton;
}
UClass* Z_Construct_UClass_UVoxelPlaceableItemManager_NoRegister()
{
	return UVoxelPlaceableItemManager::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UVoxelPlaceableItemManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "VoxelPlaceableItems/VoxelPlaceableItemManager.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/VoxelPlaceableItems/VoxelPlaceableItemManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableDebug_MetaData[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Public/VoxelPlaceableItems/VoxelPlaceableItemManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDebugBounds_MetaData[] = {
		{ "Category", "Config" },
		{ "Comment", "// If true, will show all the data items bounds\n" },
		{ "EditCondition", "bEnableDebug" },
		{ "ModuleRelativePath", "Public/VoxelPlaceableItems/VoxelPlaceableItemManager.h" },
		{ "ToolTip", "If true, will show all the data items bounds" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DataItemInfos_MetaData[] = {
		{ "Comment", "// Transient as otherwise it's serialized in the graph preview settings\x09\n" },
		{ "ModuleRelativePath", "Public/VoxelPlaceableItems/VoxelPlaceableItemManager.h" },
		{ "ToolTip", "Transient as otherwise it's serialized in the graph preview settings" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GeneratorCache_MetaData[] = {
		{ "ModuleRelativePath", "Public/VoxelPlaceableItems/VoxelPlaceableItemManager.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bEnableDebug_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableDebug;
	static void NewProp_bDebugBounds_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDebugBounds;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DataItemInfos_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DataItemInfos;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GeneratorCache;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UVoxelPlaceableItemManager_AddDataItem, "AddDataItem" }, // 1378482198
		{ &Z_Construct_UFunction_UVoxelPlaceableItemManager_DrawDebugLine, "DrawDebugLine" }, // 1418601350
		{ &Z_Construct_UFunction_UVoxelPlaceableItemManager_DrawDebugPoint, "DrawDebugPoint" }, // 2318812813
		{ &Z_Construct_UFunction_UVoxelPlaceableItemManager_GetGeneratorCache, "GetGeneratorCache" }, // 39459852
		{ &Z_Construct_UFunction_UVoxelPlaceableItemManager_OnClear, "OnClear" }, // 2374979611
		{ &Z_Construct_UFunction_UVoxelPlaceableItemManager_OnGenerate, "OnGenerate" }, // 2612639645
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelPlaceableItemManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UVoxelPlaceableItemManager_Statics::NewProp_bEnableDebug_SetBit(void* Obj)
{
	((UVoxelPlaceableItemManager*)Obj)->bEnableDebug = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVoxelPlaceableItemManager_Statics::NewProp_bEnableDebug = { "bEnableDebug", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UVoxelPlaceableItemManager), &Z_Construct_UClass_UVoxelPlaceableItemManager_Statics::NewProp_bEnableDebug_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableDebug_MetaData), NewProp_bEnableDebug_MetaData) };
void Z_Construct_UClass_UVoxelPlaceableItemManager_Statics::NewProp_bDebugBounds_SetBit(void* Obj)
{
	((UVoxelPlaceableItemManager*)Obj)->bDebugBounds = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVoxelPlaceableItemManager_Statics::NewProp_bDebugBounds = { "bDebugBounds", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UVoxelPlaceableItemManager), &Z_Construct_UClass_UVoxelPlaceableItemManager_Statics::NewProp_bDebugBounds_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDebugBounds_MetaData), NewProp_bDebugBounds_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVoxelPlaceableItemManager_Statics::NewProp_DataItemInfos_Inner = { "DataItemInfos", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVoxelDataItemConstructionInfo, METADATA_PARAMS(0, nullptr) }; // 4050484210
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UVoxelPlaceableItemManager_Statics::NewProp_DataItemInfos = { "DataItemInfos", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelPlaceableItemManager, DataItemInfos), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DataItemInfos_MetaData), NewProp_DataItemInfos_MetaData) }; // 4050484210
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVoxelPlaceableItemManager_Statics::NewProp_GeneratorCache = { "GeneratorCache", nullptr, (EPropertyFlags)0x0144000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelPlaceableItemManager, GeneratorCache), Z_Construct_UClass_UVoxelGeneratorCache_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GeneratorCache_MetaData), NewProp_GeneratorCache_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelPlaceableItemManager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelPlaceableItemManager_Statics::NewProp_bEnableDebug,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelPlaceableItemManager_Statics::NewProp_bDebugBounds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelPlaceableItemManager_Statics::NewProp_DataItemInfos_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelPlaceableItemManager_Statics::NewProp_DataItemInfos,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelPlaceableItemManager_Statics::NewProp_GeneratorCache,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelPlaceableItemManager_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UVoxelPlaceableItemManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelPlaceableItemManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelPlaceableItemManager_Statics::ClassParams = {
	&UVoxelPlaceableItemManager::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UVoxelPlaceableItemManager_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelPlaceableItemManager_Statics::PropPointers),
	0,
	0x001010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelPlaceableItemManager_Statics::Class_MetaDataParams), Z_Construct_UClass_UVoxelPlaceableItemManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVoxelPlaceableItemManager()
{
	if (!Z_Registration_Info_UClass_UVoxelPlaceableItemManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelPlaceableItemManager.OuterSingleton, Z_Construct_UClass_UVoxelPlaceableItemManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVoxelPlaceableItemManager.OuterSingleton;
}
UVoxelPlaceableItemManager::UVoxelPlaceableItemManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelPlaceableItemManager);
UVoxelPlaceableItemManager::~UVoxelPlaceableItemManager() {}
// ********** End Class UVoxelPlaceableItemManager *************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelPlaceableItems_VoxelPlaceableItemManager_h__Script_Voxel_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FVoxelDataItemConstructionInfo::StaticStruct, Z_Construct_UScriptStruct_FVoxelDataItemConstructionInfo_Statics::NewStructOps, TEXT("VoxelDataItemConstructionInfo"), &Z_Registration_Info_UScriptStruct_FVoxelDataItemConstructionInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVoxelDataItemConstructionInfo), 4050484210U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UVoxelPlaceableItemManager, UVoxelPlaceableItemManager::StaticClass, TEXT("UVoxelPlaceableItemManager"), &Z_Registration_Info_UClass_UVoxelPlaceableItemManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelPlaceableItemManager), 2597490307U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelPlaceableItems_VoxelPlaceableItemManager_h__Script_Voxel_2626996871(TEXT("/Script/Voxel"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelPlaceableItems_VoxelPlaceableItemManager_h__Script_Voxel_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelPlaceableItems_VoxelPlaceableItemManager_h__Script_Voxel_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelPlaceableItems_VoxelPlaceableItemManager_h__Script_Voxel_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelPlaceableItems_VoxelPlaceableItemManager_h__Script_Voxel_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
