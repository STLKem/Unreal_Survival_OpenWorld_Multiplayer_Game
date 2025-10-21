// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VoxelTools/VoxelProjectionTools.h"
#include "Engine/HitResult.h"
#include "Engine/LatentActionManager.h"
#include "VoxelTools/VoxelSurfaceEdits.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeVoxelProjectionTools() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntVector();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECollisionChannel();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EDrawDebugTrace();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FLatentActionInfo();
UPackage* Z_Construct_UPackage__Script_Voxel();
VOXEL_API UClass* Z_Construct_UClass_AVoxelWorld_NoRegister();
VOXEL_API UClass* Z_Construct_UClass_UVoxelProjectionTools();
VOXEL_API UClass* Z_Construct_UClass_UVoxelProjectionTools_NoRegister();
VOXEL_API UEnum* Z_Construct_UEnum_Voxel_EVoxelProjectionShape();
VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelLineTraceParameters();
VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelProjectionHit();
VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelSurfaceEditsVoxels();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FVoxelLineTraceParameters *****************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FVoxelLineTraceParameters;
class UScriptStruct* FVoxelLineTraceParameters::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FVoxelLineTraceParameters.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FVoxelLineTraceParameters.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVoxelLineTraceParameters, (UObject*)Z_Construct_UPackage__Script_Voxel(), TEXT("VoxelLineTraceParameters"));
	}
	return Z_Registration_Info_UScriptStruct_FVoxelLineTraceParameters.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FVoxelLineTraceParameters_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HasNativeMake", "/Script/Voxel.VoxelProjectionTools:MakeVoxelLineTraceParameters" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelProjectionTools.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollisionChannel_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelProjectionTools.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollisionChannelsToIgnore_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelProjectionTools.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActorsToIgnore_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelProjectionTools.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DrawDebugType_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelProjectionTools.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TraceColor_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelProjectionTools.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TraceHitColor_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelProjectionTools.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DrawTime_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelProjectionTools.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_CollisionChannel;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CollisionChannelsToIgnore_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CollisionChannelsToIgnore;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ActorsToIgnore_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ActorsToIgnore;
	static const UECodeGen_Private::FBytePropertyParams NewProp_DrawDebugType;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TraceColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TraceHitColor;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DrawTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVoxelLineTraceParameters>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FVoxelLineTraceParameters_Statics::NewProp_CollisionChannel = { "CollisionChannel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVoxelLineTraceParameters, CollisionChannel), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollisionChannel_MetaData), NewProp_CollisionChannel_MetaData) }; // 756624936
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FVoxelLineTraceParameters_Statics::NewProp_CollisionChannelsToIgnore_Inner = { "CollisionChannelsToIgnore", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(0, nullptr) }; // 756624936
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FVoxelLineTraceParameters_Statics::NewProp_CollisionChannelsToIgnore = { "CollisionChannelsToIgnore", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVoxelLineTraceParameters, CollisionChannelsToIgnore), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollisionChannelsToIgnore_MetaData), NewProp_CollisionChannelsToIgnore_MetaData) }; // 756624936
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FVoxelLineTraceParameters_Statics::NewProp_ActorsToIgnore_Inner = { "ActorsToIgnore", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FVoxelLineTraceParameters_Statics::NewProp_ActorsToIgnore = { "ActorsToIgnore", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVoxelLineTraceParameters, ActorsToIgnore), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActorsToIgnore_MetaData), NewProp_ActorsToIgnore_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FVoxelLineTraceParameters_Statics::NewProp_DrawDebugType = { "DrawDebugType", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVoxelLineTraceParameters, DrawDebugType), Z_Construct_UEnum_Engine_EDrawDebugTrace, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DrawDebugType_MetaData), NewProp_DrawDebugType_MetaData) }; // 2070357899
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVoxelLineTraceParameters_Statics::NewProp_TraceColor = { "TraceColor", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVoxelLineTraceParameters, TraceColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TraceColor_MetaData), NewProp_TraceColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVoxelLineTraceParameters_Statics::NewProp_TraceHitColor = { "TraceHitColor", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVoxelLineTraceParameters, TraceHitColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TraceHitColor_MetaData), NewProp_TraceHitColor_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVoxelLineTraceParameters_Statics::NewProp_DrawTime = { "DrawTime", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVoxelLineTraceParameters, DrawTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DrawTime_MetaData), NewProp_DrawTime_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVoxelLineTraceParameters_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelLineTraceParameters_Statics::NewProp_CollisionChannel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelLineTraceParameters_Statics::NewProp_CollisionChannelsToIgnore_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelLineTraceParameters_Statics::NewProp_CollisionChannelsToIgnore,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelLineTraceParameters_Statics::NewProp_ActorsToIgnore_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelLineTraceParameters_Statics::NewProp_ActorsToIgnore,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelLineTraceParameters_Statics::NewProp_DrawDebugType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelLineTraceParameters_Statics::NewProp_TraceColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelLineTraceParameters_Statics::NewProp_TraceHitColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelLineTraceParameters_Statics::NewProp_DrawTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelLineTraceParameters_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVoxelLineTraceParameters_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
	nullptr,
	&NewStructOps,
	"VoxelLineTraceParameters",
	Z_Construct_UScriptStruct_FVoxelLineTraceParameters_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelLineTraceParameters_Statics::PropPointers),
	sizeof(FVoxelLineTraceParameters),
	alignof(FVoxelLineTraceParameters),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelLineTraceParameters_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVoxelLineTraceParameters_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FVoxelLineTraceParameters()
{
	if (!Z_Registration_Info_UScriptStruct_FVoxelLineTraceParameters.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FVoxelLineTraceParameters.InnerSingleton, Z_Construct_UScriptStruct_FVoxelLineTraceParameters_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FVoxelLineTraceParameters.InnerSingleton;
}
// ********** End ScriptStruct FVoxelLineTraceParameters *******************************************

// ********** Begin Enum EVoxelProjectionShape *****************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EVoxelProjectionShape;
static UEnum* EVoxelProjectionShape_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EVoxelProjectionShape.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EVoxelProjectionShape.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Voxel_EVoxelProjectionShape, (UObject*)Z_Construct_UPackage__Script_Voxel(), TEXT("EVoxelProjectionShape"));
	}
	return Z_Registration_Info_UEnum_EVoxelProjectionShape.OuterSingleton;
}
template<> VOXEL_API UEnum* StaticEnum<EVoxelProjectionShape>()
{
	return EVoxelProjectionShape_StaticEnum();
}
struct Z_Construct_UEnum_Voxel_EVoxelProjectionShape_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Circle.Name", "EVoxelProjectionShape::Circle" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelProjectionTools.h" },
		{ "Square.Name", "EVoxelProjectionShape::Square" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EVoxelProjectionShape::Circle", (int64)EVoxelProjectionShape::Circle },
		{ "EVoxelProjectionShape::Square", (int64)EVoxelProjectionShape::Square },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Voxel_EVoxelProjectionShape_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Voxel,
	nullptr,
	"EVoxelProjectionShape",
	"EVoxelProjectionShape",
	Z_Construct_UEnum_Voxel_EVoxelProjectionShape_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Voxel_EVoxelProjectionShape_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Voxel_EVoxelProjectionShape_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Voxel_EVoxelProjectionShape_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Voxel_EVoxelProjectionShape()
{
	if (!Z_Registration_Info_UEnum_EVoxelProjectionShape.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EVoxelProjectionShape.InnerSingleton, Z_Construct_UEnum_Voxel_EVoxelProjectionShape_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EVoxelProjectionShape.InnerSingleton;
}
// ********** End Enum EVoxelProjectionShape *******************************************************

// ********** Begin ScriptStruct FVoxelProjectionHit ***********************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FVoxelProjectionHit;
class UScriptStruct* FVoxelProjectionHit::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FVoxelProjectionHit.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FVoxelProjectionHit.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVoxelProjectionHit, (UObject*)Z_Construct_UPackage__Script_Voxel(), TEXT("VoxelProjectionHit"));
	}
	return Z_Registration_Info_UScriptStruct_FVoxelProjectionHit.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FVoxelProjectionHit_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelProjectionTools.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VoxelPosition_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelProjectionTools.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlanePosition_MetaData[] = {
		{ "Category", "Voxel" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Position on the projection plane\n" },
#endif
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelProjectionTools.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Position on the projection plane" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Hit_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelProjectionTools.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_VoxelPosition;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PlanePosition;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Hit;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVoxelProjectionHit>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVoxelProjectionHit_Statics::NewProp_VoxelPosition = { "VoxelPosition", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVoxelProjectionHit, VoxelPosition), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VoxelPosition_MetaData), NewProp_VoxelPosition_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVoxelProjectionHit_Statics::NewProp_PlanePosition = { "PlanePosition", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVoxelProjectionHit, PlanePosition), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlanePosition_MetaData), NewProp_PlanePosition_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVoxelProjectionHit_Statics::NewProp_Hit = { "Hit", nullptr, (EPropertyFlags)0x0010008000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVoxelProjectionHit, Hit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Hit_MetaData), NewProp_Hit_MetaData) }; // 267591329
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVoxelProjectionHit_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelProjectionHit_Statics::NewProp_VoxelPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelProjectionHit_Statics::NewProp_PlanePosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelProjectionHit_Statics::NewProp_Hit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelProjectionHit_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVoxelProjectionHit_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
	nullptr,
	&NewStructOps,
	"VoxelProjectionHit",
	Z_Construct_UScriptStruct_FVoxelProjectionHit_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelProjectionHit_Statics::PropPointers),
	sizeof(FVoxelProjectionHit),
	alignof(FVoxelProjectionHit),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000005),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelProjectionHit_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVoxelProjectionHit_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FVoxelProjectionHit()
{
	if (!Z_Registration_Info_UScriptStruct_FVoxelProjectionHit.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FVoxelProjectionHit.InnerSingleton, Z_Construct_UScriptStruct_FVoxelProjectionHit_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FVoxelProjectionHit.InnerSingleton;
}
// ********** End ScriptStruct FVoxelProjectionHit *************************************************

// ********** Begin Class UVoxelProjectionTools Function CreateSurfaceVoxelsFromHits ***************
struct Z_Construct_UFunction_UVoxelProjectionTools_CreateSurfaceVoxelsFromHits_Statics
{
	struct VoxelProjectionTools_eventCreateSurfaceVoxelsFromHits_Parms
	{
		TArray<FVoxelProjectionHit> Hits;
		FVoxelSurfaceEditsVoxels ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Voxel|Tools|Projection Tools" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// For some surface tools you'll need to use CreateSurfaceVoxelsFromHitsWithExactValues instead\n" },
#endif
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelProjectionTools.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "For some surface tools you'll need to use CreateSurfaceVoxelsFromHitsWithExactValues instead" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Hits_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Hits_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Hits;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelProjectionTools_CreateSurfaceVoxelsFromHits_Statics::NewProp_Hits_Inner = { "Hits", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVoxelProjectionHit, METADATA_PARAMS(0, nullptr) }; // 4197782728
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVoxelProjectionTools_CreateSurfaceVoxelsFromHits_Statics::NewProp_Hits = { "Hits", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelProjectionTools_eventCreateSurfaceVoxelsFromHits_Parms, Hits), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Hits_MetaData), NewProp_Hits_MetaData) }; // 4197782728
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelProjectionTools_CreateSurfaceVoxelsFromHits_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelProjectionTools_eventCreateSurfaceVoxelsFromHits_Parms, ReturnValue), Z_Construct_UScriptStruct_FVoxelSurfaceEditsVoxels, METADATA_PARAMS(0, nullptr) }; // 847595784
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelProjectionTools_CreateSurfaceVoxelsFromHits_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelProjectionTools_CreateSurfaceVoxelsFromHits_Statics::NewProp_Hits_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelProjectionTools_CreateSurfaceVoxelsFromHits_Statics::NewProp_Hits,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelProjectionTools_CreateSurfaceVoxelsFromHits_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelProjectionTools_CreateSurfaceVoxelsFromHits_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelProjectionTools_CreateSurfaceVoxelsFromHits_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelProjectionTools, nullptr, "CreateSurfaceVoxelsFromHits", Z_Construct_UFunction_UVoxelProjectionTools_CreateSurfaceVoxelsFromHits_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelProjectionTools_CreateSurfaceVoxelsFromHits_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVoxelProjectionTools_CreateSurfaceVoxelsFromHits_Statics::VoxelProjectionTools_eventCreateSurfaceVoxelsFromHits_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelProjectionTools_CreateSurfaceVoxelsFromHits_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelProjectionTools_CreateSurfaceVoxelsFromHits_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVoxelProjectionTools_CreateSurfaceVoxelsFromHits_Statics::VoxelProjectionTools_eventCreateSurfaceVoxelsFromHits_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVoxelProjectionTools_CreateSurfaceVoxelsFromHits()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelProjectionTools_CreateSurfaceVoxelsFromHits_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelProjectionTools::execCreateSurfaceVoxelsFromHits)
{
	P_GET_TARRAY_REF(FVoxelProjectionHit,Z_Param_Out_Hits);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVoxelSurfaceEditsVoxels*)Z_Param__Result=UVoxelProjectionTools::CreateSurfaceVoxelsFromHits(Z_Param_Out_Hits);
	P_NATIVE_END;
}
// ********** End Class UVoxelProjectionTools Function CreateSurfaceVoxelsFromHits *****************

// ********** Begin Class UVoxelProjectionTools Function CreateSurfaceVoxelsFromHitsWithExactValues 
struct Z_Construct_UFunction_UVoxelProjectionTools_CreateSurfaceVoxelsFromHitsWithExactValues_Statics
{
	struct VoxelProjectionTools_eventCreateSurfaceVoxelsFromHitsWithExactValues_Parms
	{
		AVoxelWorld* World;
		TArray<FVoxelProjectionHit> Hits;
		FVoxelSurfaceEditsVoxels ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Voxel|Tools|Projection Tools" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Will store the voxel values\n" },
#endif
		{ "DefaultToSelf", "World" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelProjectionTools.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Will store the voxel values" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Hits_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Hits_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Hits;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelProjectionTools_CreateSurfaceVoxelsFromHitsWithExactValues_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelProjectionTools_eventCreateSurfaceVoxelsFromHitsWithExactValues_Parms, World), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelProjectionTools_CreateSurfaceVoxelsFromHitsWithExactValues_Statics::NewProp_Hits_Inner = { "Hits", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVoxelProjectionHit, METADATA_PARAMS(0, nullptr) }; // 4197782728
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVoxelProjectionTools_CreateSurfaceVoxelsFromHitsWithExactValues_Statics::NewProp_Hits = { "Hits", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelProjectionTools_eventCreateSurfaceVoxelsFromHitsWithExactValues_Parms, Hits), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Hits_MetaData), NewProp_Hits_MetaData) }; // 4197782728
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelProjectionTools_CreateSurfaceVoxelsFromHitsWithExactValues_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelProjectionTools_eventCreateSurfaceVoxelsFromHitsWithExactValues_Parms, ReturnValue), Z_Construct_UScriptStruct_FVoxelSurfaceEditsVoxels, METADATA_PARAMS(0, nullptr) }; // 847595784
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelProjectionTools_CreateSurfaceVoxelsFromHitsWithExactValues_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelProjectionTools_CreateSurfaceVoxelsFromHitsWithExactValues_Statics::NewProp_World,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelProjectionTools_CreateSurfaceVoxelsFromHitsWithExactValues_Statics::NewProp_Hits_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelProjectionTools_CreateSurfaceVoxelsFromHitsWithExactValues_Statics::NewProp_Hits,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelProjectionTools_CreateSurfaceVoxelsFromHitsWithExactValues_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelProjectionTools_CreateSurfaceVoxelsFromHitsWithExactValues_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelProjectionTools_CreateSurfaceVoxelsFromHitsWithExactValues_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelProjectionTools, nullptr, "CreateSurfaceVoxelsFromHitsWithExactValues", Z_Construct_UFunction_UVoxelProjectionTools_CreateSurfaceVoxelsFromHitsWithExactValues_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelProjectionTools_CreateSurfaceVoxelsFromHitsWithExactValues_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVoxelProjectionTools_CreateSurfaceVoxelsFromHitsWithExactValues_Statics::VoxelProjectionTools_eventCreateSurfaceVoxelsFromHitsWithExactValues_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelProjectionTools_CreateSurfaceVoxelsFromHitsWithExactValues_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelProjectionTools_CreateSurfaceVoxelsFromHitsWithExactValues_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVoxelProjectionTools_CreateSurfaceVoxelsFromHitsWithExactValues_Statics::VoxelProjectionTools_eventCreateSurfaceVoxelsFromHitsWithExactValues_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVoxelProjectionTools_CreateSurfaceVoxelsFromHitsWithExactValues()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelProjectionTools_CreateSurfaceVoxelsFromHitsWithExactValues_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelProjectionTools::execCreateSurfaceVoxelsFromHitsWithExactValues)
{
	P_GET_OBJECT(AVoxelWorld,Z_Param_World);
	P_GET_TARRAY_REF(FVoxelProjectionHit,Z_Param_Out_Hits);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVoxelSurfaceEditsVoxels*)Z_Param__Result=UVoxelProjectionTools::CreateSurfaceVoxelsFromHitsWithExactValues(Z_Param_World,Z_Param_Out_Hits);
	P_NATIVE_END;
}
// ********** End Class UVoxelProjectionTools Function CreateSurfaceVoxelsFromHitsWithExactValues **

// ********** Begin Class UVoxelProjectionTools Function FindProjectionVoxels **********************
struct Z_Construct_UFunction_UVoxelProjectionTools_FindProjectionVoxels_Statics
{
	struct VoxelProjectionTools_eventFindProjectionVoxels_Parms
	{
		TArray<FVoxelProjectionHit> Hits;
		AVoxelWorld* World;
		FVoxelLineTraceParameters Parameters;
		FVector Position;
		FVector Direction;
		float Radius;
		EVoxelProjectionShape Shape;
		float NumRays;
		float MaxDistance;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Voxel|Tools|Projection Tools" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Find voxels using linetraces\n\x09 * @param World\x09\x09\x09\x09\x09The voxel world\n\x09 * @param Parameters\x09\x09\x09Linetraces parameters\n\x09 * @param Position\x09\x09\x09\x09The center of the linetraces\n\x09 * @param Direction\x09\x09\x09\x09The direction of the linetraces\n\x09 * @param Radius\x09\x09\x09\x09The radius in world space (cm)\n\x09 * @param Shape\x09\x09\x09\x09\x09The shape of the rays start positions\n\x09 * @param NumRays\x09\x09\x09\x09The approximate number of rays to trace\n\x09 * @param MaxDistance\x09\x09\x09The max ray distance\n\x09 * @return\x09Number of rays actually traced (should be close to NumRays)\n\x09 */" },
#endif
		{ "CPP_Default_MaxDistance", "1000000000.000000" },
		{ "CPP_Default_NumRays", "100.000000" },
		{ "CPP_Default_Radius", "100.000000" },
		{ "CPP_Default_Shape", "Circle" },
		{ "DefaultToSelf", "World" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelProjectionTools.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Find voxels using linetraces\n@param World                                 The voxel world\n@param Parameters                    Linetraces parameters\n@param Position                              The center of the linetraces\n@param Direction                             The direction of the linetraces\n@param Radius                                The radius in world space (cm)\n@param Shape                                 The shape of the rays start positions\n@param NumRays                               The approximate number of rays to trace\n@param MaxDistance                   The max ray distance\n@return      Number of rays actually traced (should be close to NumRays)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Hits_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Hits;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Parameters;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Position;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Direction;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Shape_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Shape;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NumRays;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxDistance;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelProjectionTools_FindProjectionVoxels_Statics::NewProp_Hits_Inner = { "Hits", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVoxelProjectionHit, METADATA_PARAMS(0, nullptr) }; // 4197782728
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVoxelProjectionTools_FindProjectionVoxels_Statics::NewProp_Hits = { "Hits", nullptr, (EPropertyFlags)0x0010008000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelProjectionTools_eventFindProjectionVoxels_Parms, Hits), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 4197782728
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelProjectionTools_FindProjectionVoxels_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelProjectionTools_eventFindProjectionVoxels_Parms, World), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelProjectionTools_FindProjectionVoxels_Statics::NewProp_Parameters = { "Parameters", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelProjectionTools_eventFindProjectionVoxels_Parms, Parameters), Z_Construct_UScriptStruct_FVoxelLineTraceParameters, METADATA_PARAMS(0, nullptr) }; // 2223270177
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelProjectionTools_FindProjectionVoxels_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelProjectionTools_eventFindProjectionVoxels_Parms, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelProjectionTools_FindProjectionVoxels_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelProjectionTools_eventFindProjectionVoxels_Parms, Direction), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoxelProjectionTools_FindProjectionVoxels_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelProjectionTools_eventFindProjectionVoxels_Parms, Radius), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVoxelProjectionTools_FindProjectionVoxels_Statics::NewProp_Shape_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UVoxelProjectionTools_FindProjectionVoxels_Statics::NewProp_Shape = { "Shape", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelProjectionTools_eventFindProjectionVoxels_Parms, Shape), Z_Construct_UEnum_Voxel_EVoxelProjectionShape, METADATA_PARAMS(0, nullptr) }; // 1484469204
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoxelProjectionTools_FindProjectionVoxels_Statics::NewProp_NumRays = { "NumRays", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelProjectionTools_eventFindProjectionVoxels_Parms, NumRays), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoxelProjectionTools_FindProjectionVoxels_Statics::NewProp_MaxDistance = { "MaxDistance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelProjectionTools_eventFindProjectionVoxels_Parms, MaxDistance), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVoxelProjectionTools_FindProjectionVoxels_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelProjectionTools_eventFindProjectionVoxels_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelProjectionTools_FindProjectionVoxels_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelProjectionTools_FindProjectionVoxels_Statics::NewProp_Hits_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelProjectionTools_FindProjectionVoxels_Statics::NewProp_Hits,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelProjectionTools_FindProjectionVoxels_Statics::NewProp_World,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelProjectionTools_FindProjectionVoxels_Statics::NewProp_Parameters,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelProjectionTools_FindProjectionVoxels_Statics::NewProp_Position,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelProjectionTools_FindProjectionVoxels_Statics::NewProp_Direction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelProjectionTools_FindProjectionVoxels_Statics::NewProp_Radius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelProjectionTools_FindProjectionVoxels_Statics::NewProp_Shape_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelProjectionTools_FindProjectionVoxels_Statics::NewProp_Shape,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelProjectionTools_FindProjectionVoxels_Statics::NewProp_NumRays,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelProjectionTools_FindProjectionVoxels_Statics::NewProp_MaxDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelProjectionTools_FindProjectionVoxels_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelProjectionTools_FindProjectionVoxels_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelProjectionTools_FindProjectionVoxels_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelProjectionTools, nullptr, "FindProjectionVoxels", Z_Construct_UFunction_UVoxelProjectionTools_FindProjectionVoxels_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelProjectionTools_FindProjectionVoxels_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVoxelProjectionTools_FindProjectionVoxels_Statics::VoxelProjectionTools_eventFindProjectionVoxels_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelProjectionTools_FindProjectionVoxels_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelProjectionTools_FindProjectionVoxels_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVoxelProjectionTools_FindProjectionVoxels_Statics::VoxelProjectionTools_eventFindProjectionVoxels_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVoxelProjectionTools_FindProjectionVoxels()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelProjectionTools_FindProjectionVoxels_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelProjectionTools::execFindProjectionVoxels)
{
	P_GET_TARRAY_REF(FVoxelProjectionHit,Z_Param_Out_Hits);
	P_GET_OBJECT(AVoxelWorld,Z_Param_World);
	P_GET_STRUCT(FVoxelLineTraceParameters,Z_Param_Parameters);
	P_GET_STRUCT(FVector,Z_Param_Position);
	P_GET_STRUCT(FVector,Z_Param_Direction);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Radius);
	P_GET_ENUM(EVoxelProjectionShape,Z_Param_Shape);
	P_GET_PROPERTY(FFloatProperty,Z_Param_NumRays);
	P_GET_PROPERTY(FFloatProperty,Z_Param_MaxDistance);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=UVoxelProjectionTools::FindProjectionVoxels(Z_Param_Out_Hits,Z_Param_World,Z_Param_Parameters,Z_Param_Position,Z_Param_Direction,Z_Param_Radius,EVoxelProjectionShape(Z_Param_Shape),Z_Param_NumRays,Z_Param_MaxDistance);
	P_NATIVE_END;
}
// ********** End Class UVoxelProjectionTools Function FindProjectionVoxels ************************

// ********** Begin Class UVoxelProjectionTools Function FindProjectionVoxelsAsync *****************
struct Z_Construct_UFunction_UVoxelProjectionTools_FindProjectionVoxelsAsync_Statics
{
	struct VoxelProjectionTools_eventFindProjectionVoxelsAsync_Parms
	{
		UObject* WorldContextObject;
		FLatentActionInfo LatentInfo;
		TArray<FVoxelProjectionHit> Hits;
		AVoxelWorld* World;
		FVoxelLineTraceParameters Parameters;
		FVector Position;
		FVector Direction;
		float Radius;
		EVoxelProjectionShape Shape;
		float NumRays;
		float MaxDistance;
		bool bHideLatentWarnings;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "bHideLatentWarnings" },
		{ "Category", "Voxel|Tools|Projection Tools" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Find voxels using linetraces, asynchronously\n\x09 * @param World\x09\x09\x09\x09\x09The voxel world\n\x09 * @param Parameters\x09\x09\x09Linetraces parameters\n\x09 * @param Position\x09\x09\x09\x09The center of the linetraces\n\x09 * @param Direction\x09\x09\x09\x09The direction of the linetraces\n\x09 * @param Radius\x09\x09\x09\x09The radius in world space (cm)\n\x09 * @param Shape\x09\x09\x09\x09\x09The shape of the rays start positions\n\x09 * @param NumRays\x09\x09\x09\x09The approximate number of rays to trace\n\x09 * @param MaxDistance\x09\x09\x09The max ray distance\n\x09 * @return\x09Number of rays actually traced (should be close to NumRays)\n\x09 */" },
#endif
		{ "CPP_Default_bHideLatentWarnings", "false" },
		{ "CPP_Default_MaxDistance", "1000000000.000000" },
		{ "CPP_Default_NumRays", "100.000000" },
		{ "CPP_Default_Radius", "100.000000" },
		{ "CPP_Default_Shape", "Circle" },
		{ "DefaultToSelf", "World" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelProjectionTools.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Find voxels using linetraces, asynchronously\n@param World                                 The voxel world\n@param Parameters                    Linetraces parameters\n@param Position                              The center of the linetraces\n@param Direction                             The direction of the linetraces\n@param Radius                                The radius in world space (cm)\n@param Shape                                 The shape of the rays start positions\n@param NumRays                               The approximate number of rays to trace\n@param MaxDistance                   The max ray distance\n@return      Number of rays actually traced (should be close to NumRays)" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Hits_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Hits;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Parameters;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Position;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Direction;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Shape_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Shape;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NumRays;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxDistance;
	static void NewProp_bHideLatentWarnings_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHideLatentWarnings;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelProjectionTools_FindProjectionVoxelsAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelProjectionTools_eventFindProjectionVoxelsAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelProjectionTools_FindProjectionVoxelsAsync_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelProjectionTools_eventFindProjectionVoxelsAsync_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(0, nullptr) }; // 4146275481
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelProjectionTools_FindProjectionVoxelsAsync_Statics::NewProp_Hits_Inner = { "Hits", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVoxelProjectionHit, METADATA_PARAMS(0, nullptr) }; // 4197782728
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVoxelProjectionTools_FindProjectionVoxelsAsync_Statics::NewProp_Hits = { "Hits", nullptr, (EPropertyFlags)0x0010008000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelProjectionTools_eventFindProjectionVoxelsAsync_Parms, Hits), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 4197782728
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelProjectionTools_FindProjectionVoxelsAsync_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelProjectionTools_eventFindProjectionVoxelsAsync_Parms, World), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelProjectionTools_FindProjectionVoxelsAsync_Statics::NewProp_Parameters = { "Parameters", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelProjectionTools_eventFindProjectionVoxelsAsync_Parms, Parameters), Z_Construct_UScriptStruct_FVoxelLineTraceParameters, METADATA_PARAMS(0, nullptr) }; // 2223270177
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelProjectionTools_FindProjectionVoxelsAsync_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelProjectionTools_eventFindProjectionVoxelsAsync_Parms, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelProjectionTools_FindProjectionVoxelsAsync_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelProjectionTools_eventFindProjectionVoxelsAsync_Parms, Direction), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoxelProjectionTools_FindProjectionVoxelsAsync_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelProjectionTools_eventFindProjectionVoxelsAsync_Parms, Radius), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVoxelProjectionTools_FindProjectionVoxelsAsync_Statics::NewProp_Shape_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UVoxelProjectionTools_FindProjectionVoxelsAsync_Statics::NewProp_Shape = { "Shape", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelProjectionTools_eventFindProjectionVoxelsAsync_Parms, Shape), Z_Construct_UEnum_Voxel_EVoxelProjectionShape, METADATA_PARAMS(0, nullptr) }; // 1484469204
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoxelProjectionTools_FindProjectionVoxelsAsync_Statics::NewProp_NumRays = { "NumRays", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelProjectionTools_eventFindProjectionVoxelsAsync_Parms, NumRays), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoxelProjectionTools_FindProjectionVoxelsAsync_Statics::NewProp_MaxDistance = { "MaxDistance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelProjectionTools_eventFindProjectionVoxelsAsync_Parms, MaxDistance), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UVoxelProjectionTools_FindProjectionVoxelsAsync_Statics::NewProp_bHideLatentWarnings_SetBit(void* Obj)
{
	((VoxelProjectionTools_eventFindProjectionVoxelsAsync_Parms*)Obj)->bHideLatentWarnings = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelProjectionTools_FindProjectionVoxelsAsync_Statics::NewProp_bHideLatentWarnings = { "bHideLatentWarnings", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VoxelProjectionTools_eventFindProjectionVoxelsAsync_Parms), &Z_Construct_UFunction_UVoxelProjectionTools_FindProjectionVoxelsAsync_Statics::NewProp_bHideLatentWarnings_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVoxelProjectionTools_FindProjectionVoxelsAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelProjectionTools_eventFindProjectionVoxelsAsync_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelProjectionTools_FindProjectionVoxelsAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelProjectionTools_FindProjectionVoxelsAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelProjectionTools_FindProjectionVoxelsAsync_Statics::NewProp_LatentInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelProjectionTools_FindProjectionVoxelsAsync_Statics::NewProp_Hits_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelProjectionTools_FindProjectionVoxelsAsync_Statics::NewProp_Hits,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelProjectionTools_FindProjectionVoxelsAsync_Statics::NewProp_World,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelProjectionTools_FindProjectionVoxelsAsync_Statics::NewProp_Parameters,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelProjectionTools_FindProjectionVoxelsAsync_Statics::NewProp_Position,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelProjectionTools_FindProjectionVoxelsAsync_Statics::NewProp_Direction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelProjectionTools_FindProjectionVoxelsAsync_Statics::NewProp_Radius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelProjectionTools_FindProjectionVoxelsAsync_Statics::NewProp_Shape_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelProjectionTools_FindProjectionVoxelsAsync_Statics::NewProp_Shape,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelProjectionTools_FindProjectionVoxelsAsync_Statics::NewProp_NumRays,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelProjectionTools_FindProjectionVoxelsAsync_Statics::NewProp_MaxDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelProjectionTools_FindProjectionVoxelsAsync_Statics::NewProp_bHideLatentWarnings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelProjectionTools_FindProjectionVoxelsAsync_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelProjectionTools_FindProjectionVoxelsAsync_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelProjectionTools_FindProjectionVoxelsAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelProjectionTools, nullptr, "FindProjectionVoxelsAsync", Z_Construct_UFunction_UVoxelProjectionTools_FindProjectionVoxelsAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelProjectionTools_FindProjectionVoxelsAsync_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVoxelProjectionTools_FindProjectionVoxelsAsync_Statics::VoxelProjectionTools_eventFindProjectionVoxelsAsync_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelProjectionTools_FindProjectionVoxelsAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelProjectionTools_FindProjectionVoxelsAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVoxelProjectionTools_FindProjectionVoxelsAsync_Statics::VoxelProjectionTools_eventFindProjectionVoxelsAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVoxelProjectionTools_FindProjectionVoxelsAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelProjectionTools_FindProjectionVoxelsAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelProjectionTools::execFindProjectionVoxelsAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
	P_GET_TARRAY_REF(FVoxelProjectionHit,Z_Param_Out_Hits);
	P_GET_OBJECT(AVoxelWorld,Z_Param_World);
	P_GET_STRUCT(FVoxelLineTraceParameters,Z_Param_Parameters);
	P_GET_STRUCT(FVector,Z_Param_Position);
	P_GET_STRUCT(FVector,Z_Param_Direction);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Radius);
	P_GET_ENUM(EVoxelProjectionShape,Z_Param_Shape);
	P_GET_PROPERTY(FFloatProperty,Z_Param_NumRays);
	P_GET_PROPERTY(FFloatProperty,Z_Param_MaxDistance);
	P_GET_UBOOL(Z_Param_bHideLatentWarnings);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=UVoxelProjectionTools::FindProjectionVoxelsAsync(Z_Param_WorldContextObject,Z_Param_LatentInfo,Z_Param_Out_Hits,Z_Param_World,Z_Param_Parameters,Z_Param_Position,Z_Param_Direction,Z_Param_Radius,EVoxelProjectionShape(Z_Param_Shape),Z_Param_NumRays,Z_Param_MaxDistance,Z_Param_bHideLatentWarnings);
	P_NATIVE_END;
}
// ********** End Class UVoxelProjectionTools Function FindProjectionVoxelsAsync *******************

// ********** Begin Class UVoxelProjectionTools Function GetHitsAverageNormal **********************
struct Z_Construct_UFunction_UVoxelProjectionTools_GetHitsAverageNormal_Statics
{
	struct VoxelProjectionTools_eventGetHitsAverageNormal_Parms
	{
		TArray<FVoxelProjectionHit> Hits;
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Voxel|Tools|Projection Tools" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelProjectionTools.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Hits_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Hits_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Hits;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelProjectionTools_GetHitsAverageNormal_Statics::NewProp_Hits_Inner = { "Hits", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVoxelProjectionHit, METADATA_PARAMS(0, nullptr) }; // 4197782728
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVoxelProjectionTools_GetHitsAverageNormal_Statics::NewProp_Hits = { "Hits", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelProjectionTools_eventGetHitsAverageNormal_Parms, Hits), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Hits_MetaData), NewProp_Hits_MetaData) }; // 4197782728
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelProjectionTools_GetHitsAverageNormal_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelProjectionTools_eventGetHitsAverageNormal_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelProjectionTools_GetHitsAverageNormal_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelProjectionTools_GetHitsAverageNormal_Statics::NewProp_Hits_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelProjectionTools_GetHitsAverageNormal_Statics::NewProp_Hits,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelProjectionTools_GetHitsAverageNormal_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelProjectionTools_GetHitsAverageNormal_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelProjectionTools_GetHitsAverageNormal_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelProjectionTools, nullptr, "GetHitsAverageNormal", Z_Construct_UFunction_UVoxelProjectionTools_GetHitsAverageNormal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelProjectionTools_GetHitsAverageNormal_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVoxelProjectionTools_GetHitsAverageNormal_Statics::VoxelProjectionTools_eventGetHitsAverageNormal_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelProjectionTools_GetHitsAverageNormal_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelProjectionTools_GetHitsAverageNormal_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVoxelProjectionTools_GetHitsAverageNormal_Statics::VoxelProjectionTools_eventGetHitsAverageNormal_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVoxelProjectionTools_GetHitsAverageNormal()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelProjectionTools_GetHitsAverageNormal_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelProjectionTools::execGetHitsAverageNormal)
{
	P_GET_TARRAY_REF(FVoxelProjectionHit,Z_Param_Out_Hits);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=UVoxelProjectionTools::GetHitsAverageNormal(Z_Param_Out_Hits);
	P_NATIVE_END;
}
// ********** End Class UVoxelProjectionTools Function GetHitsAverageNormal ************************

// ********** Begin Class UVoxelProjectionTools Function GetHitsAveragePosition ********************
struct Z_Construct_UFunction_UVoxelProjectionTools_GetHitsAveragePosition_Statics
{
	struct VoxelProjectionTools_eventGetHitsAveragePosition_Parms
	{
		TArray<FVoxelProjectionHit> Hits;
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Voxel|Tools|Projection Tools" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelProjectionTools.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Hits_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Hits_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Hits;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelProjectionTools_GetHitsAveragePosition_Statics::NewProp_Hits_Inner = { "Hits", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVoxelProjectionHit, METADATA_PARAMS(0, nullptr) }; // 4197782728
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVoxelProjectionTools_GetHitsAveragePosition_Statics::NewProp_Hits = { "Hits", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelProjectionTools_eventGetHitsAveragePosition_Parms, Hits), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Hits_MetaData), NewProp_Hits_MetaData) }; // 4197782728
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelProjectionTools_GetHitsAveragePosition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelProjectionTools_eventGetHitsAveragePosition_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelProjectionTools_GetHitsAveragePosition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelProjectionTools_GetHitsAveragePosition_Statics::NewProp_Hits_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelProjectionTools_GetHitsAveragePosition_Statics::NewProp_Hits,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelProjectionTools_GetHitsAveragePosition_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelProjectionTools_GetHitsAveragePosition_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelProjectionTools_GetHitsAveragePosition_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelProjectionTools, nullptr, "GetHitsAveragePosition", Z_Construct_UFunction_UVoxelProjectionTools_GetHitsAveragePosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelProjectionTools_GetHitsAveragePosition_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVoxelProjectionTools_GetHitsAveragePosition_Statics::VoxelProjectionTools_eventGetHitsAveragePosition_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelProjectionTools_GetHitsAveragePosition_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelProjectionTools_GetHitsAveragePosition_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVoxelProjectionTools_GetHitsAveragePosition_Statics::VoxelProjectionTools_eventGetHitsAveragePosition_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVoxelProjectionTools_GetHitsAveragePosition()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelProjectionTools_GetHitsAveragePosition_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelProjectionTools::execGetHitsAveragePosition)
{
	P_GET_TARRAY_REF(FVoxelProjectionHit,Z_Param_Out_Hits);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=UVoxelProjectionTools::GetHitsAveragePosition(Z_Param_Out_Hits);
	P_NATIVE_END;
}
// ********** End Class UVoxelProjectionTools Function GetHitsAveragePosition **********************

// ********** Begin Class UVoxelProjectionTools Function GetHitsPositions **************************
struct Z_Construct_UFunction_UVoxelProjectionTools_GetHitsPositions_Statics
{
	struct VoxelProjectionTools_eventGetHitsPositions_Parms
	{
		TArray<FVoxelProjectionHit> Hits;
		TArray<FIntVector> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Voxel|Tools|Projection Tools" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelProjectionTools.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Hits_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Hits_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Hits;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelProjectionTools_GetHitsPositions_Statics::NewProp_Hits_Inner = { "Hits", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVoxelProjectionHit, METADATA_PARAMS(0, nullptr) }; // 4197782728
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVoxelProjectionTools_GetHitsPositions_Statics::NewProp_Hits = { "Hits", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelProjectionTools_eventGetHitsPositions_Parms, Hits), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Hits_MetaData), NewProp_Hits_MetaData) }; // 4197782728
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelProjectionTools_GetHitsPositions_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVoxelProjectionTools_GetHitsPositions_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelProjectionTools_eventGetHitsPositions_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelProjectionTools_GetHitsPositions_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelProjectionTools_GetHitsPositions_Statics::NewProp_Hits_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelProjectionTools_GetHitsPositions_Statics::NewProp_Hits,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelProjectionTools_GetHitsPositions_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelProjectionTools_GetHitsPositions_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelProjectionTools_GetHitsPositions_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelProjectionTools_GetHitsPositions_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelProjectionTools, nullptr, "GetHitsPositions", Z_Construct_UFunction_UVoxelProjectionTools_GetHitsPositions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelProjectionTools_GetHitsPositions_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVoxelProjectionTools_GetHitsPositions_Statics::VoxelProjectionTools_eventGetHitsPositions_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelProjectionTools_GetHitsPositions_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelProjectionTools_GetHitsPositions_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVoxelProjectionTools_GetHitsPositions_Statics::VoxelProjectionTools_eventGetHitsPositions_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVoxelProjectionTools_GetHitsPositions()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelProjectionTools_GetHitsPositions_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelProjectionTools::execGetHitsPositions)
{
	P_GET_TARRAY_REF(FVoxelProjectionHit,Z_Param_Out_Hits);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FIntVector>*)Z_Param__Result=UVoxelProjectionTools::GetHitsPositions(Z_Param_Out_Hits);
	P_NATIVE_END;
}
// ********** End Class UVoxelProjectionTools Function GetHitsPositions ****************************

// ********** Begin Class UVoxelProjectionTools Function MakeVoxelLineTraceParameters **************
struct Z_Construct_UFunction_UVoxelProjectionTools_MakeVoxelLineTraceParameters_Statics
{
	struct VoxelProjectionTools_eventMakeVoxelLineTraceParameters_Parms
	{
		TArray<TEnumAsByte<ECollisionChannel>> CollisionChannelsToIgnore;
		TArray<AActor*> ActorsToIgnore;
		TEnumAsByte<ECollisionChannel> CollisionChannel;
		TEnumAsByte<EDrawDebugTrace::Type> DrawDebugType;
		FLinearColor TraceColor;
		FLinearColor TraceHitColor;
		float DrawTime;
		FVoxelLineTraceParameters ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "CollisionChannelsToIgnore, ActorsToIgnore, DrawDebugType, TraceColor, TraceHitColor, DrawTime" },
		{ "AutoCreateRefTerm", "CollisionChannelsToIgnore, ActorsToIgnore" },
		{ "Category", "Voxel" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Make voxel line trace parameters\n" },
#endif
		{ "CPP_Default_CollisionChannel", "ECC_WorldDynamic" },
		{ "CPP_Default_DrawDebugType", "None" },
		{ "CPP_Default_DrawTime", "5.000000" },
		{ "CPP_Default_TraceColor", "(R=1.000000,G=0.000000,B=0.000000,A=1.000000)" },
		{ "CPP_Default_TraceHitColor", "(R=0.000000,G=1.000000,B=0.000000,A=1.000000)" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelProjectionTools.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Make voxel line trace parameters" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_CollisionChannelsToIgnore_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CollisionChannelsToIgnore;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ActorsToIgnore_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ActorsToIgnore;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CollisionChannel;
	static const UECodeGen_Private::FBytePropertyParams NewProp_DrawDebugType;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TraceColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TraceHitColor;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DrawTime;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVoxelProjectionTools_MakeVoxelLineTraceParameters_Statics::NewProp_CollisionChannelsToIgnore_Inner = { "CollisionChannelsToIgnore", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(0, nullptr) }; // 756624936
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVoxelProjectionTools_MakeVoxelLineTraceParameters_Statics::NewProp_CollisionChannelsToIgnore = { "CollisionChannelsToIgnore", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelProjectionTools_eventMakeVoxelLineTraceParameters_Parms, CollisionChannelsToIgnore), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 756624936
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelProjectionTools_MakeVoxelLineTraceParameters_Statics::NewProp_ActorsToIgnore_Inner = { "ActorsToIgnore", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVoxelProjectionTools_MakeVoxelLineTraceParameters_Statics::NewProp_ActorsToIgnore = { "ActorsToIgnore", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelProjectionTools_eventMakeVoxelLineTraceParameters_Parms, ActorsToIgnore), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVoxelProjectionTools_MakeVoxelLineTraceParameters_Statics::NewProp_CollisionChannel = { "CollisionChannel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelProjectionTools_eventMakeVoxelLineTraceParameters_Parms, CollisionChannel), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(0, nullptr) }; // 756624936
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVoxelProjectionTools_MakeVoxelLineTraceParameters_Statics::NewProp_DrawDebugType = { "DrawDebugType", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelProjectionTools_eventMakeVoxelLineTraceParameters_Parms, DrawDebugType), Z_Construct_UEnum_Engine_EDrawDebugTrace, METADATA_PARAMS(0, nullptr) }; // 2070357899
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelProjectionTools_MakeVoxelLineTraceParameters_Statics::NewProp_TraceColor = { "TraceColor", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelProjectionTools_eventMakeVoxelLineTraceParameters_Parms, TraceColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelProjectionTools_MakeVoxelLineTraceParameters_Statics::NewProp_TraceHitColor = { "TraceHitColor", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelProjectionTools_eventMakeVoxelLineTraceParameters_Parms, TraceHitColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoxelProjectionTools_MakeVoxelLineTraceParameters_Statics::NewProp_DrawTime = { "DrawTime", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelProjectionTools_eventMakeVoxelLineTraceParameters_Parms, DrawTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelProjectionTools_MakeVoxelLineTraceParameters_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelProjectionTools_eventMakeVoxelLineTraceParameters_Parms, ReturnValue), Z_Construct_UScriptStruct_FVoxelLineTraceParameters, METADATA_PARAMS(0, nullptr) }; // 2223270177
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelProjectionTools_MakeVoxelLineTraceParameters_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelProjectionTools_MakeVoxelLineTraceParameters_Statics::NewProp_CollisionChannelsToIgnore_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelProjectionTools_MakeVoxelLineTraceParameters_Statics::NewProp_CollisionChannelsToIgnore,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelProjectionTools_MakeVoxelLineTraceParameters_Statics::NewProp_ActorsToIgnore_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelProjectionTools_MakeVoxelLineTraceParameters_Statics::NewProp_ActorsToIgnore,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelProjectionTools_MakeVoxelLineTraceParameters_Statics::NewProp_CollisionChannel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelProjectionTools_MakeVoxelLineTraceParameters_Statics::NewProp_DrawDebugType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelProjectionTools_MakeVoxelLineTraceParameters_Statics::NewProp_TraceColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelProjectionTools_MakeVoxelLineTraceParameters_Statics::NewProp_TraceHitColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelProjectionTools_MakeVoxelLineTraceParameters_Statics::NewProp_DrawTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelProjectionTools_MakeVoxelLineTraceParameters_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelProjectionTools_MakeVoxelLineTraceParameters_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelProjectionTools_MakeVoxelLineTraceParameters_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelProjectionTools, nullptr, "MakeVoxelLineTraceParameters", Z_Construct_UFunction_UVoxelProjectionTools_MakeVoxelLineTraceParameters_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelProjectionTools_MakeVoxelLineTraceParameters_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVoxelProjectionTools_MakeVoxelLineTraceParameters_Statics::VoxelProjectionTools_eventMakeVoxelLineTraceParameters_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelProjectionTools_MakeVoxelLineTraceParameters_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelProjectionTools_MakeVoxelLineTraceParameters_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVoxelProjectionTools_MakeVoxelLineTraceParameters_Statics::VoxelProjectionTools_eventMakeVoxelLineTraceParameters_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVoxelProjectionTools_MakeVoxelLineTraceParameters()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelProjectionTools_MakeVoxelLineTraceParameters_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelProjectionTools::execMakeVoxelLineTraceParameters)
{
	P_GET_TARRAY(TEnumAsByte<ECollisionChannel>,Z_Param_CollisionChannelsToIgnore);
	P_GET_TARRAY(AActor*,Z_Param_ActorsToIgnore);
	P_GET_PROPERTY(FByteProperty,Z_Param_CollisionChannel);
	P_GET_PROPERTY(FByteProperty,Z_Param_DrawDebugType);
	P_GET_STRUCT(FLinearColor,Z_Param_TraceColor);
	P_GET_STRUCT(FLinearColor,Z_Param_TraceHitColor);
	P_GET_PROPERTY(FFloatProperty,Z_Param_DrawTime);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVoxelLineTraceParameters*)Z_Param__Result=UVoxelProjectionTools::MakeVoxelLineTraceParameters(Z_Param_CollisionChannelsToIgnore,Z_Param_ActorsToIgnore,ECollisionChannel(Z_Param_CollisionChannel),EDrawDebugTrace::Type(Z_Param_DrawDebugType),Z_Param_TraceColor,Z_Param_TraceHitColor,Z_Param_DrawTime);
	P_NATIVE_END;
}
// ********** End Class UVoxelProjectionTools Function MakeVoxelLineTraceParameters ****************

// ********** Begin Class UVoxelProjectionTools ****************************************************
void UVoxelProjectionTools::StaticRegisterNativesUVoxelProjectionTools()
{
	UClass* Class = UVoxelProjectionTools::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CreateSurfaceVoxelsFromHits", &UVoxelProjectionTools::execCreateSurfaceVoxelsFromHits },
		{ "CreateSurfaceVoxelsFromHitsWithExactValues", &UVoxelProjectionTools::execCreateSurfaceVoxelsFromHitsWithExactValues },
		{ "FindProjectionVoxels", &UVoxelProjectionTools::execFindProjectionVoxels },
		{ "FindProjectionVoxelsAsync", &UVoxelProjectionTools::execFindProjectionVoxelsAsync },
		{ "GetHitsAverageNormal", &UVoxelProjectionTools::execGetHitsAverageNormal },
		{ "GetHitsAveragePosition", &UVoxelProjectionTools::execGetHitsAveragePosition },
		{ "GetHitsPositions", &UVoxelProjectionTools::execGetHitsPositions },
		{ "MakeVoxelLineTraceParameters", &UVoxelProjectionTools::execMakeVoxelLineTraceParameters },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UVoxelProjectionTools;
UClass* UVoxelProjectionTools::GetPrivateStaticClass()
{
	using TClass = UVoxelProjectionTools;
	if (!Z_Registration_Info_UClass_UVoxelProjectionTools.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("VoxelProjectionTools"),
			Z_Registration_Info_UClass_UVoxelProjectionTools.InnerSingleton,
			StaticRegisterNativesUVoxelProjectionTools,
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
	return Z_Registration_Info_UClass_UVoxelProjectionTools.InnerSingleton;
}
UClass* Z_Construct_UClass_UVoxelProjectionTools_NoRegister()
{
	return UVoxelProjectionTools::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UVoxelProjectionTools_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "VoxelTools/VoxelProjectionTools.h" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelProjectionTools.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UVoxelProjectionTools_CreateSurfaceVoxelsFromHits, "CreateSurfaceVoxelsFromHits" }, // 2980335405
		{ &Z_Construct_UFunction_UVoxelProjectionTools_CreateSurfaceVoxelsFromHitsWithExactValues, "CreateSurfaceVoxelsFromHitsWithExactValues" }, // 2489398954
		{ &Z_Construct_UFunction_UVoxelProjectionTools_FindProjectionVoxels, "FindProjectionVoxels" }, // 4063557830
		{ &Z_Construct_UFunction_UVoxelProjectionTools_FindProjectionVoxelsAsync, "FindProjectionVoxelsAsync" }, // 2356582890
		{ &Z_Construct_UFunction_UVoxelProjectionTools_GetHitsAverageNormal, "GetHitsAverageNormal" }, // 2800412581
		{ &Z_Construct_UFunction_UVoxelProjectionTools_GetHitsAveragePosition, "GetHitsAveragePosition" }, // 952413447
		{ &Z_Construct_UFunction_UVoxelProjectionTools_GetHitsPositions, "GetHitsPositions" }, // 134380990
		{ &Z_Construct_UFunction_UVoxelProjectionTools_MakeVoxelLineTraceParameters, "MakeVoxelLineTraceParameters" }, // 3947000634
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelProjectionTools>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UVoxelProjectionTools_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelProjectionTools_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelProjectionTools_Statics::ClassParams = {
	&UVoxelProjectionTools::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelProjectionTools_Statics::Class_MetaDataParams), Z_Construct_UClass_UVoxelProjectionTools_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVoxelProjectionTools()
{
	if (!Z_Registration_Info_UClass_UVoxelProjectionTools.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelProjectionTools.OuterSingleton, Z_Construct_UClass_UVoxelProjectionTools_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVoxelProjectionTools.OuterSingleton;
}
UVoxelProjectionTools::UVoxelProjectionTools(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelProjectionTools);
UVoxelProjectionTools::~UVoxelProjectionTools() {}
// ********** End Class UVoxelProjectionTools ******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelTools_VoxelProjectionTools_h__Script_Voxel_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EVoxelProjectionShape_StaticEnum, TEXT("EVoxelProjectionShape"), &Z_Registration_Info_UEnum_EVoxelProjectionShape, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1484469204U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FVoxelLineTraceParameters::StaticStruct, Z_Construct_UScriptStruct_FVoxelLineTraceParameters_Statics::NewStructOps, TEXT("VoxelLineTraceParameters"), &Z_Registration_Info_UScriptStruct_FVoxelLineTraceParameters, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVoxelLineTraceParameters), 2223270177U) },
		{ FVoxelProjectionHit::StaticStruct, Z_Construct_UScriptStruct_FVoxelProjectionHit_Statics::NewStructOps, TEXT("VoxelProjectionHit"), &Z_Registration_Info_UScriptStruct_FVoxelProjectionHit, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVoxelProjectionHit), 4197782728U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UVoxelProjectionTools, UVoxelProjectionTools::StaticClass, TEXT("UVoxelProjectionTools"), &Z_Registration_Info_UClass_UVoxelProjectionTools, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelProjectionTools), 1536040066U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelTools_VoxelProjectionTools_h__Script_Voxel_957164035(TEXT("/Script/Voxel"),
	Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelTools_VoxelProjectionTools_h__Script_Voxel_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelTools_VoxelProjectionTools_h__Script_Voxel_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelTools_VoxelProjectionTools_h__Script_Voxel_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelTools_VoxelProjectionTools_h__Script_Voxel_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelTools_VoxelProjectionTools_h__Script_Voxel_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelTools_VoxelProjectionTools_h__Script_Voxel_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
