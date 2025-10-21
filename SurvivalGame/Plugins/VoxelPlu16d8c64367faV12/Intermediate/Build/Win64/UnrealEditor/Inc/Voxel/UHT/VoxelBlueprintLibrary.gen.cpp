// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VoxelTools/VoxelBlueprintLibrary.h"
#include "Engine/Texture2D.h"
#include "VoxelIntBox.h"
#include "VoxelMaterial.h"
#include "VoxelSpawners/VoxelInstancedMeshSettings.h"
#include "VoxelSpawners/VoxelSpawner.h"
#include "VoxelTexture.h"
#include "VoxelTools/VoxelPaintMaterial.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeVoxelBlueprintLibrary() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBox();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntVector();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
UPackage* Z_Construct_UPackage__Script_Voxel();
VOXEL_API UClass* Z_Construct_UClass_AVoxelSpawnerActor_NoRegister();
VOXEL_API UClass* Z_Construct_UClass_AVoxelWorld_NoRegister();
VOXEL_API UClass* Z_Construct_UClass_UVoxelBlueprintLibrary();
VOXEL_API UClass* Z_Construct_UClass_UVoxelBlueprintLibrary_NoRegister();
VOXEL_API UClass* Z_Construct_UClass_UVoxelHierarchicalInstancedStaticMeshComponent_NoRegister();
VOXEL_API UEnum* Z_Construct_UEnum_Voxel_EVoxelMemoryUsageType();
VOXEL_API UEnum* Z_Construct_UEnum_Voxel_EVoxelRGBA();
VOXEL_API UEnum* Z_Construct_UEnum_Voxel_EVoxelSpawnerActorSpawnType();
VOXEL_API UEnum* Z_Construct_UEnum_Voxel_EVoxelTaskType();
VOXEL_API UFunction* Z_Construct_UDelegateFunction_Voxel_ChunkDynamicDelegate__DelegateSignature();
VOXEL_API UFunction* Z_Construct_UDelegateFunction_Voxel_VoxelOnChunkGenerationDynamicDelegate__DelegateSignature();
VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelColorTexture();
VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelFloatTexture();
VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelInstancedMeshSettings();
VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelIntBox();
VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelMaterial();
VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelPaintMaterial();
VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelPaintMaterialColor();
VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelPaintMaterialFiveWayBlend();
VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelPaintMaterialMultiIndex();
VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelPaintMaterialMultiIndexRaw();
VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelPaintMaterialMultiIndexWetness();
VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelPaintMaterialSingleIndex();
VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelPaintMaterialUV();
VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelSpawnerActorSettings();
VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelSpawnersSave();
VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelToolRenderingRef();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FVoxelOnChunkGenerationDynamicDelegate ********************************
struct Z_Construct_UDelegateFunction_Voxel_VoxelOnChunkGenerationDynamicDelegate__DelegateSignature_Statics
{
	struct _Script_Voxel_eventVoxelOnChunkGenerationDynamicDelegate_Parms
	{
		AVoxelWorld* World;
		FVoxelIntBox Bounds;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelBlueprintLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Bounds;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_Voxel_VoxelOnChunkGenerationDynamicDelegate__DelegateSignature_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Voxel_eventVoxelOnChunkGenerationDynamicDelegate_Parms, World), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_Voxel_VoxelOnChunkGenerationDynamicDelegate__DelegateSignature_Statics::NewProp_Bounds = { "Bounds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Voxel_eventVoxelOnChunkGenerationDynamicDelegate_Parms, Bounds), Z_Construct_UScriptStruct_FVoxelIntBox, METADATA_PARAMS(0, nullptr) }; // 3520536583
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Voxel_VoxelOnChunkGenerationDynamicDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Voxel_VoxelOnChunkGenerationDynamicDelegate__DelegateSignature_Statics::NewProp_World,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Voxel_VoxelOnChunkGenerationDynamicDelegate__DelegateSignature_Statics::NewProp_Bounds,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Voxel_VoxelOnChunkGenerationDynamicDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_Voxel_VoxelOnChunkGenerationDynamicDelegate__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_Voxel, nullptr, "VoxelOnChunkGenerationDynamicDelegate__DelegateSignature", Z_Construct_UDelegateFunction_Voxel_VoxelOnChunkGenerationDynamicDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Voxel_VoxelOnChunkGenerationDynamicDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_Voxel_VoxelOnChunkGenerationDynamicDelegate__DelegateSignature_Statics::_Script_Voxel_eventVoxelOnChunkGenerationDynamicDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Voxel_VoxelOnChunkGenerationDynamicDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Voxel_VoxelOnChunkGenerationDynamicDelegate__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_Voxel_VoxelOnChunkGenerationDynamicDelegate__DelegateSignature_Statics::_Script_Voxel_eventVoxelOnChunkGenerationDynamicDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_Voxel_VoxelOnChunkGenerationDynamicDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Voxel_VoxelOnChunkGenerationDynamicDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FVoxelOnChunkGenerationDynamicDelegate_DelegateWrapper(const FScriptDelegate& VoxelOnChunkGenerationDynamicDelegate, AVoxelWorld* World, FVoxelIntBox Bounds)
{
	struct _Script_Voxel_eventVoxelOnChunkGenerationDynamicDelegate_Parms
	{
		AVoxelWorld* World;
		FVoxelIntBox Bounds;
	};
	_Script_Voxel_eventVoxelOnChunkGenerationDynamicDelegate_Parms Parms;
	Parms.World=World;
	Parms.Bounds=Bounds;
	VoxelOnChunkGenerationDynamicDelegate.ProcessDelegate<UObject>(&Parms);
}
// ********** End Delegate FVoxelOnChunkGenerationDynamicDelegate **********************************

// ********** Begin Delegate FChunkDynamicDelegate *************************************************
struct Z_Construct_UDelegateFunction_Voxel_ChunkDynamicDelegate__DelegateSignature_Statics
{
	struct _Script_Voxel_eventChunkDynamicDelegate_Parms
	{
		FVoxelIntBox Bounds;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelBlueprintLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Bounds;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_Voxel_ChunkDynamicDelegate__DelegateSignature_Statics::NewProp_Bounds = { "Bounds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Voxel_eventChunkDynamicDelegate_Parms, Bounds), Z_Construct_UScriptStruct_FVoxelIntBox, METADATA_PARAMS(0, nullptr) }; // 3520536583
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Voxel_ChunkDynamicDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Voxel_ChunkDynamicDelegate__DelegateSignature_Statics::NewProp_Bounds,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Voxel_ChunkDynamicDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_Voxel_ChunkDynamicDelegate__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_Voxel, nullptr, "ChunkDynamicDelegate__DelegateSignature", Z_Construct_UDelegateFunction_Voxel_ChunkDynamicDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Voxel_ChunkDynamicDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_Voxel_ChunkDynamicDelegate__DelegateSignature_Statics::_Script_Voxel_eventChunkDynamicDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Voxel_ChunkDynamicDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Voxel_ChunkDynamicDelegate__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_Voxel_ChunkDynamicDelegate__DelegateSignature_Statics::_Script_Voxel_eventChunkDynamicDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_Voxel_ChunkDynamicDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Voxel_ChunkDynamicDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FChunkDynamicDelegate_DelegateWrapper(const FScriptDelegate& ChunkDynamicDelegate, FVoxelIntBox Bounds)
{
	struct _Script_Voxel_eventChunkDynamicDelegate_Parms
	{
		FVoxelIntBox Bounds;
	};
	_Script_Voxel_eventChunkDynamicDelegate_Parms Parms;
	Parms.Bounds=Bounds;
	ChunkDynamicDelegate.ProcessDelegate<UObject>(&Parms);
}
// ********** End Delegate FChunkDynamicDelegate ***************************************************

// ********** Begin ScriptStruct FVoxelToolRenderingRef ********************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FVoxelToolRenderingRef;
class UScriptStruct* FVoxelToolRenderingRef::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FVoxelToolRenderingRef.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FVoxelToolRenderingRef.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVoxelToolRenderingRef, (UObject*)Z_Construct_UPackage__Script_Voxel(), TEXT("VoxelToolRenderingRef"));
	}
	return Z_Registration_Info_UScriptStruct_FVoxelToolRenderingRef.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FVoxelToolRenderingRef_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelBlueprintLibrary.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVoxelToolRenderingRef>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVoxelToolRenderingRef_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
	nullptr,
	&NewStructOps,
	"VoxelToolRenderingRef",
	nullptr,
	0,
	sizeof(FVoxelToolRenderingRef),
	alignof(FVoxelToolRenderingRef),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelToolRenderingRef_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVoxelToolRenderingRef_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FVoxelToolRenderingRef()
{
	if (!Z_Registration_Info_UScriptStruct_FVoxelToolRenderingRef.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FVoxelToolRenderingRef.InnerSingleton, Z_Construct_UScriptStruct_FVoxelToolRenderingRef_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FVoxelToolRenderingRef.InnerSingleton;
}
// ********** End ScriptStruct FVoxelToolRenderingRef **********************************************

// ********** Begin Enum EVoxelMemoryUsageType *****************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EVoxelMemoryUsageType;
static UEnum* EVoxelMemoryUsageType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EVoxelMemoryUsageType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EVoxelMemoryUsageType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Voxel_EVoxelMemoryUsageType, (UObject*)Z_Construct_UPackage__Script_Voxel(), TEXT("EVoxelMemoryUsageType"));
	}
	return Z_Registration_Info_UEnum_EVoxelMemoryUsageType.OuterSingleton;
}
template<> VOXEL_API UEnum* StaticEnum<EVoxelMemoryUsageType>()
{
	return EVoxelMemoryUsageType_StaticEnum();
}
struct Z_Construct_UEnum_Voxel_EVoxelMemoryUsageType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "CompressedSaves.Name", "EVoxelMemoryUsageType::CompressedSaves" },
		{ "DataAssets.Name", "EVoxelMemoryUsageType::DataAssets" },
		{ "HeightmapAssets.Name", "EVoxelMemoryUsageType::HeightmapAssets" },
		{ "IntermediateBuffers.Name", "EVoxelMemoryUsageType::IntermediateBuffers" },
		{ "MeshesColors.Name", "EVoxelMemoryUsageType::MeshesColors" },
		{ "MeshesIndices.Name", "EVoxelMemoryUsageType::MeshesIndices" },
		{ "MeshesTessellationIndices.Name", "EVoxelMemoryUsageType::MeshesTessellationIndices" },
		{ "MeshesUVsAndTangents.Name", "EVoxelMemoryUsageType::MeshesUVsAndTangents" },
		{ "MeshesVertices.Name", "EVoxelMemoryUsageType::MeshesVertices" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelBlueprintLibrary.h" },
		{ "Multiplayer.Name", "EVoxelMemoryUsageType::Multiplayer" },
		{ "Total.Name", "EVoxelMemoryUsageType::Total" },
		{ "UncompressedSaves.Name", "EVoxelMemoryUsageType::UncompressedSaves" },
		{ "UndoRedo.Name", "EVoxelMemoryUsageType::UndoRedo" },
		{ "VoxelsCachedMaterialsData.Name", "EVoxelMemoryUsageType::VoxelsCachedMaterialsData" },
		{ "VoxelsCachedValuesData.Name", "EVoxelMemoryUsageType::VoxelsCachedValuesData" },
		{ "VoxelsDirtyMaterialsData.Name", "EVoxelMemoryUsageType::VoxelsDirtyMaterialsData" },
		{ "VoxelsDirtyValuesData.Name", "EVoxelMemoryUsageType::VoxelsDirtyValuesData" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EVoxelMemoryUsageType::Total", (int64)EVoxelMemoryUsageType::Total },
		{ "EVoxelMemoryUsageType::VoxelsDirtyValuesData", (int64)EVoxelMemoryUsageType::VoxelsDirtyValuesData },
		{ "EVoxelMemoryUsageType::VoxelsDirtyMaterialsData", (int64)EVoxelMemoryUsageType::VoxelsDirtyMaterialsData },
		{ "EVoxelMemoryUsageType::VoxelsCachedValuesData", (int64)EVoxelMemoryUsageType::VoxelsCachedValuesData },
		{ "EVoxelMemoryUsageType::VoxelsCachedMaterialsData", (int64)EVoxelMemoryUsageType::VoxelsCachedMaterialsData },
		{ "EVoxelMemoryUsageType::UndoRedo", (int64)EVoxelMemoryUsageType::UndoRedo },
		{ "EVoxelMemoryUsageType::Multiplayer", (int64)EVoxelMemoryUsageType::Multiplayer },
		{ "EVoxelMemoryUsageType::IntermediateBuffers", (int64)EVoxelMemoryUsageType::IntermediateBuffers },
		{ "EVoxelMemoryUsageType::MeshesIndices", (int64)EVoxelMemoryUsageType::MeshesIndices },
		{ "EVoxelMemoryUsageType::MeshesTessellationIndices", (int64)EVoxelMemoryUsageType::MeshesTessellationIndices },
		{ "EVoxelMemoryUsageType::MeshesVertices", (int64)EVoxelMemoryUsageType::MeshesVertices },
		{ "EVoxelMemoryUsageType::MeshesColors", (int64)EVoxelMemoryUsageType::MeshesColors },
		{ "EVoxelMemoryUsageType::MeshesUVsAndTangents", (int64)EVoxelMemoryUsageType::MeshesUVsAndTangents },
		{ "EVoxelMemoryUsageType::DataAssets", (int64)EVoxelMemoryUsageType::DataAssets },
		{ "EVoxelMemoryUsageType::HeightmapAssets", (int64)EVoxelMemoryUsageType::HeightmapAssets },
		{ "EVoxelMemoryUsageType::UncompressedSaves", (int64)EVoxelMemoryUsageType::UncompressedSaves },
		{ "EVoxelMemoryUsageType::CompressedSaves", (int64)EVoxelMemoryUsageType::CompressedSaves },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Voxel_EVoxelMemoryUsageType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Voxel,
	nullptr,
	"EVoxelMemoryUsageType",
	"EVoxelMemoryUsageType",
	Z_Construct_UEnum_Voxel_EVoxelMemoryUsageType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Voxel_EVoxelMemoryUsageType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Voxel_EVoxelMemoryUsageType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Voxel_EVoxelMemoryUsageType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Voxel_EVoxelMemoryUsageType()
{
	if (!Z_Registration_Info_UEnum_EVoxelMemoryUsageType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EVoxelMemoryUsageType.InnerSingleton, Z_Construct_UEnum_Voxel_EVoxelMemoryUsageType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EVoxelMemoryUsageType.InnerSingleton;
}
// ********** End Enum EVoxelMemoryUsageType *******************************************************

// ********** Begin Class UVoxelBlueprintLibrary Function Add_IntVectorIntVector *******************
struct Z_Construct_UFunction_UVoxelBlueprintLibrary_Add_IntVectorIntVector_Statics
{
	struct VoxelBlueprintLibrary_eventAdd_IntVectorIntVector_Parms
	{
		FIntVector Left;
		FIntVector Right;
		FIntVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Math|IntVector" },
		{ "CompactNodeTitle", "+" },
		{ "DisplayName", "IntVector + IntVector" },
		{ "Keywords", "+ add plus" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelBlueprintLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Left;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Right;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_Add_IntVectorIntVector_Statics::NewProp_Left = { "Left", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventAdd_IntVectorIntVector_Parms, Left), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_Add_IntVectorIntVector_Statics::NewProp_Right = { "Right", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventAdd_IntVectorIntVector_Parms, Right), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_Add_IntVectorIntVector_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventAdd_IntVectorIntVector_Parms, ReturnValue), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelBlueprintLibrary_Add_IntVectorIntVector_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_Add_IntVectorIntVector_Statics::NewProp_Left,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_Add_IntVectorIntVector_Statics::NewProp_Right,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_Add_IntVectorIntVector_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_Add_IntVectorIntVector_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelBlueprintLibrary_Add_IntVectorIntVector_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelBlueprintLibrary, nullptr, "Add_IntVectorIntVector", Z_Construct_UFunction_UVoxelBlueprintLibrary_Add_IntVectorIntVector_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_Add_IntVectorIntVector_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVoxelBlueprintLibrary_Add_IntVectorIntVector_Statics::VoxelBlueprintLibrary_eventAdd_IntVectorIntVector_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_Add_IntVectorIntVector_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelBlueprintLibrary_Add_IntVectorIntVector_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVoxelBlueprintLibrary_Add_IntVectorIntVector_Statics::VoxelBlueprintLibrary_eventAdd_IntVectorIntVector_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVoxelBlueprintLibrary_Add_IntVectorIntVector()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelBlueprintLibrary_Add_IntVectorIntVector_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelBlueprintLibrary::execAdd_IntVectorIntVector)
{
	P_GET_STRUCT(FIntVector,Z_Param_Left);
	P_GET_STRUCT(FIntVector,Z_Param_Right);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FIntVector*)Z_Param__Result=UVoxelBlueprintLibrary::Add_IntVectorIntVector(Z_Param_Left,Z_Param_Right);
	P_NATIVE_END;
}
// ********** End Class UVoxelBlueprintLibrary Function Add_IntVectorIntVector *********************

// ********** Begin Class UVoxelBlueprintLibrary Function AddInstances *****************************
struct Z_Construct_UFunction_UVoxelBlueprintLibrary_AddInstances_Statics
{
	struct VoxelBlueprintLibrary_eventAddInstances_Parms
	{
		AVoxelWorld* World;
		UStaticMesh* Mesh;
		TArray<FTransform> Transforms;
		TArray<FLinearColor> Colors;
		FVoxelInstancedMeshSettings InstanceSettings;
		FVoxelSpawnerActorSettings ActorSettings;
		FVector FloatingDetectionOffset;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "FloatingDetectionOffset" },
		{ "Category", "Voxel|Spawners" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Add instances to a voxel world foliage system\n\x09 * @param World\x09\x09\x09\x09\x09\x09The voxel world\n\x09 * @param Mesh\x09\x09\x09\x09\x09\x09The mesh to use\n\x09 * @param Transforms\x09\x09\x09\x09The transforms, relative to the voxel world (but not in voxel space!)\n\x09 * @param Colors\x09\x09\x09\x09\x09The colors to send to the instance material (use GetVoxelMaterialFromPerInstanceRandom to get it)\n\x09 * @param FloatingDetectionOffset\x09Increase this if your foliage is enabling physics too soon\n\x09 */" },
#endif
		{ "CPP_Default_FloatingDetectionOffset", "0.000000,0.000000,-10.000000" },
		{ "DefaultToSelf", "World" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Add instances to a voxel world foliage system\n@param World                                         The voxel world\n@param Mesh                                          The mesh to use\n@param Transforms                            The transforms, relative to the voxel world (but not in voxel space!)\n@param Colors                                        The colors to send to the instance material (use GetVoxelMaterialFromPerInstanceRandom to get it)\n@param FloatingDetectionOffset       Increase this if your foliage is enabling physics too soon" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Transforms_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Colors_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Mesh;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Transforms_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Transforms;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Colors_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Colors;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InstanceSettings;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ActorSettings;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FloatingDetectionOffset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_AddInstances_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventAddInstances_Parms, World), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_AddInstances_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventAddInstances_Parms, Mesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_AddInstances_Statics::NewProp_Transforms_Inner = { "Transforms", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_AddInstances_Statics::NewProp_Transforms = { "Transforms", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventAddInstances_Parms, Transforms), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Transforms_MetaData), NewProp_Transforms_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_AddInstances_Statics::NewProp_Colors_Inner = { "Colors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_AddInstances_Statics::NewProp_Colors = { "Colors", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventAddInstances_Parms, Colors), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Colors_MetaData), NewProp_Colors_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_AddInstances_Statics::NewProp_InstanceSettings = { "InstanceSettings", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventAddInstances_Parms, InstanceSettings), Z_Construct_UScriptStruct_FVoxelInstancedMeshSettings, METADATA_PARAMS(0, nullptr) }; // 3799635786
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_AddInstances_Statics::NewProp_ActorSettings = { "ActorSettings", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventAddInstances_Parms, ActorSettings), Z_Construct_UScriptStruct_FVoxelSpawnerActorSettings, METADATA_PARAMS(0, nullptr) }; // 2216116063
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_AddInstances_Statics::NewProp_FloatingDetectionOffset = { "FloatingDetectionOffset", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventAddInstances_Parms, FloatingDetectionOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelBlueprintLibrary_AddInstances_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_AddInstances_Statics::NewProp_World,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_AddInstances_Statics::NewProp_Mesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_AddInstances_Statics::NewProp_Transforms_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_AddInstances_Statics::NewProp_Transforms,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_AddInstances_Statics::NewProp_Colors_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_AddInstances_Statics::NewProp_Colors,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_AddInstances_Statics::NewProp_InstanceSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_AddInstances_Statics::NewProp_ActorSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_AddInstances_Statics::NewProp_FloatingDetectionOffset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_AddInstances_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelBlueprintLibrary_AddInstances_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelBlueprintLibrary, nullptr, "AddInstances", Z_Construct_UFunction_UVoxelBlueprintLibrary_AddInstances_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_AddInstances_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVoxelBlueprintLibrary_AddInstances_Statics::VoxelBlueprintLibrary_eventAddInstances_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_AddInstances_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelBlueprintLibrary_AddInstances_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVoxelBlueprintLibrary_AddInstances_Statics::VoxelBlueprintLibrary_eventAddInstances_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVoxelBlueprintLibrary_AddInstances()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelBlueprintLibrary_AddInstances_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelBlueprintLibrary::execAddInstances)
{
	P_GET_OBJECT(AVoxelWorld,Z_Param_World);
	P_GET_OBJECT(UStaticMesh,Z_Param_Mesh);
	P_GET_TARRAY_REF(FTransform,Z_Param_Out_Transforms);
	P_GET_TARRAY_REF(FLinearColor,Z_Param_Out_Colors);
	P_GET_STRUCT(FVoxelInstancedMeshSettings,Z_Param_InstanceSettings);
	P_GET_STRUCT(FVoxelSpawnerActorSettings,Z_Param_ActorSettings);
	P_GET_STRUCT(FVector,Z_Param_FloatingDetectionOffset);
	P_FINISH;
	P_NATIVE_BEGIN;
	UVoxelBlueprintLibrary::AddInstances(Z_Param_World,Z_Param_Mesh,Z_Param_Out_Transforms,Z_Param_Out_Colors,Z_Param_InstanceSettings,Z_Param_ActorSettings,Z_Param_FloatingDetectionOffset);
	P_NATIVE_END;
}
// ********** End Class UVoxelBlueprintLibrary Function AddInstances *******************************

// ********** Begin Class UVoxelBlueprintLibrary Function AddNeighborsToSet ************************
struct Z_Construct_UFunction_UVoxelBlueprintLibrary_AddNeighborsToSet_Statics
{
	struct VoxelBlueprintLibrary_eventAddNeighborsToSet_Parms
	{
		TSet<FIntVector> InSet;
		TSet<FIntVector> OutSet;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Voxel|Utilities" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelBlueprintLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InSet_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InSet_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_InSet;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutSet_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_OutSet;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_AddNeighborsToSet_Statics::NewProp_InSet_ElementProp = { "InSet", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(0, nullptr) };
static_assert(TModels_V<CGetTypeHashable, FIntVector>, "The structure 'FIntVector' is used in a TSet but does not have a GetValueTypeHash defined");
const UECodeGen_Private::FSetPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_AddNeighborsToSet_Statics::NewProp_InSet = { "InSet", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventAddNeighborsToSet_Parms, InSet), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InSet_MetaData), NewProp_InSet_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_AddNeighborsToSet_Statics::NewProp_OutSet_ElementProp = { "OutSet", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(0, nullptr) };
static_assert(TModels_V<CGetTypeHashable, FIntVector>, "The structure 'FIntVector' is used in a TSet but does not have a GetValueTypeHash defined");
const UECodeGen_Private::FSetPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_AddNeighborsToSet_Statics::NewProp_OutSet = { "OutSet", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventAddNeighborsToSet_Parms, OutSet), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelBlueprintLibrary_AddNeighborsToSet_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_AddNeighborsToSet_Statics::NewProp_InSet_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_AddNeighborsToSet_Statics::NewProp_InSet,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_AddNeighborsToSet_Statics::NewProp_OutSet_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_AddNeighborsToSet_Statics::NewProp_OutSet,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_AddNeighborsToSet_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelBlueprintLibrary_AddNeighborsToSet_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelBlueprintLibrary, nullptr, "AddNeighborsToSet", Z_Construct_UFunction_UVoxelBlueprintLibrary_AddNeighborsToSet_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_AddNeighborsToSet_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVoxelBlueprintLibrary_AddNeighborsToSet_Statics::VoxelBlueprintLibrary_eventAddNeighborsToSet_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_AddNeighborsToSet_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelBlueprintLibrary_AddNeighborsToSet_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVoxelBlueprintLibrary_AddNeighborsToSet_Statics::VoxelBlueprintLibrary_eventAddNeighborsToSet_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVoxelBlueprintLibrary_AddNeighborsToSet()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelBlueprintLibrary_AddNeighborsToSet_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelBlueprintLibrary::execAddNeighborsToSet)
{
	P_GET_TSET_REF(FIntVector,Z_Param_Out_InSet);
	P_GET_TSET_REF(FIntVector,Z_Param_Out_OutSet);
	P_FINISH;
	P_NATIVE_BEGIN;
	UVoxelBlueprintLibrary::AddNeighborsToSet(Z_Param_Out_InSet,Z_Param_Out_OutSet);
	P_NATIVE_END;
}
// ********** End Class UVoxelBlueprintLibrary Function AddNeighborsToSet **************************

// ********** Begin Class UVoxelBlueprintLibrary Function ApplyLODSettings *************************
struct Z_Construct_UFunction_UVoxelBlueprintLibrary_ApplyLODSettings_Statics
{
	struct VoxelBlueprintLibrary_eventApplyLODSettings_Parms
	{
		AVoxelWorld* World;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Voxel|Render" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Call this after changing the voxel world LODs setting while created\n" },
#endif
		{ "DefaultToSelf", "World" },
		{ "DisplayName", "Apply LOD Settings" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Call this after changing the voxel world LODs setting while created" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_ApplyLODSettings_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventApplyLODSettings_Parms, World), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelBlueprintLibrary_ApplyLODSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_ApplyLODSettings_Statics::NewProp_World,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_ApplyLODSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelBlueprintLibrary_ApplyLODSettings_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelBlueprintLibrary, nullptr, "ApplyLODSettings", Z_Construct_UFunction_UVoxelBlueprintLibrary_ApplyLODSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_ApplyLODSettings_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVoxelBlueprintLibrary_ApplyLODSettings_Statics::VoxelBlueprintLibrary_eventApplyLODSettings_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_ApplyLODSettings_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelBlueprintLibrary_ApplyLODSettings_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVoxelBlueprintLibrary_ApplyLODSettings_Statics::VoxelBlueprintLibrary_eventApplyLODSettings_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVoxelBlueprintLibrary_ApplyLODSettings()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelBlueprintLibrary_ApplyLODSettings_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelBlueprintLibrary::execApplyLODSettings)
{
	P_GET_OBJECT(AVoxelWorld,Z_Param_World);
	P_FINISH;
	P_NATIVE_BEGIN;
	UVoxelBlueprintLibrary::ApplyLODSettings(Z_Param_World);
	P_NATIVE_END;
}
// ********** End Class UVoxelBlueprintLibrary Function ApplyLODSettings ***************************

// ********** Begin Class UVoxelBlueprintLibrary Function ApplyNewMaterials ************************
struct Z_Construct_UFunction_UVoxelBlueprintLibrary_ApplyNewMaterials_Statics
{
	struct VoxelBlueprintLibrary_eventApplyNewMaterials_Parms
	{
		AVoxelWorld* World;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Voxel|Render" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Call this after changing a voxel world VoxelMaterial/MaterialCollection to apply it\n" },
#endif
		{ "DefaultToSelf", "World" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Call this after changing a voxel world VoxelMaterial/MaterialCollection to apply it" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_ApplyNewMaterials_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventApplyNewMaterials_Parms, World), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelBlueprintLibrary_ApplyNewMaterials_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_ApplyNewMaterials_Statics::NewProp_World,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_ApplyNewMaterials_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelBlueprintLibrary_ApplyNewMaterials_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelBlueprintLibrary, nullptr, "ApplyNewMaterials", Z_Construct_UFunction_UVoxelBlueprintLibrary_ApplyNewMaterials_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_ApplyNewMaterials_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVoxelBlueprintLibrary_ApplyNewMaterials_Statics::VoxelBlueprintLibrary_eventApplyNewMaterials_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_ApplyNewMaterials_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelBlueprintLibrary_ApplyNewMaterials_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVoxelBlueprintLibrary_ApplyNewMaterials_Statics::VoxelBlueprintLibrary_eventApplyNewMaterials_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVoxelBlueprintLibrary_ApplyNewMaterials()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelBlueprintLibrary_ApplyNewMaterials_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelBlueprintLibrary::execApplyNewMaterials)
{
	P_GET_OBJECT(AVoxelWorld,Z_Param_World);
	P_FINISH;
	P_NATIVE_BEGIN;
	UVoxelBlueprintLibrary::ApplyNewMaterials(Z_Param_World);
	P_NATIVE_END;
}
// ********** End Class UVoxelBlueprintLibrary Function ApplyNewMaterials **************************

// ********** Begin Class UVoxelBlueprintLibrary Function ApplyPaintMaterial ***********************
struct Z_Construct_UFunction_UVoxelBlueprintLibrary_ApplyPaintMaterial_Statics
{
	struct VoxelBlueprintLibrary_eventApplyPaintMaterial_Parms
	{
		FVoxelMaterial Material;
		FVoxelPaintMaterial PaintMaterial;
		float Strength;
		FVoxelMaterial ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Voxel|Materials" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Apply a Paint Material to a Voxel Material\n" },
#endif
		{ "CPP_Default_Strength", "1.000000" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Apply a Paint Material to a Voxel Material" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Material;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PaintMaterial;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Strength;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_ApplyPaintMaterial_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventApplyPaintMaterial_Parms, Material), Z_Construct_UScriptStruct_FVoxelMaterial, METADATA_PARAMS(0, nullptr) }; // 3766892224
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_ApplyPaintMaterial_Statics::NewProp_PaintMaterial = { "PaintMaterial", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventApplyPaintMaterial_Parms, PaintMaterial), Z_Construct_UScriptStruct_FVoxelPaintMaterial, METADATA_PARAMS(0, nullptr) }; // 2783111154
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_ApplyPaintMaterial_Statics::NewProp_Strength = { "Strength", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventApplyPaintMaterial_Parms, Strength), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_ApplyPaintMaterial_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventApplyPaintMaterial_Parms, ReturnValue), Z_Construct_UScriptStruct_FVoxelMaterial, METADATA_PARAMS(0, nullptr) }; // 3766892224
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelBlueprintLibrary_ApplyPaintMaterial_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_ApplyPaintMaterial_Statics::NewProp_Material,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_ApplyPaintMaterial_Statics::NewProp_PaintMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_ApplyPaintMaterial_Statics::NewProp_Strength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_ApplyPaintMaterial_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_ApplyPaintMaterial_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelBlueprintLibrary_ApplyPaintMaterial_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelBlueprintLibrary, nullptr, "ApplyPaintMaterial", Z_Construct_UFunction_UVoxelBlueprintLibrary_ApplyPaintMaterial_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_ApplyPaintMaterial_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVoxelBlueprintLibrary_ApplyPaintMaterial_Statics::VoxelBlueprintLibrary_eventApplyPaintMaterial_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_ApplyPaintMaterial_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelBlueprintLibrary_ApplyPaintMaterial_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVoxelBlueprintLibrary_ApplyPaintMaterial_Statics::VoxelBlueprintLibrary_eventApplyPaintMaterial_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVoxelBlueprintLibrary_ApplyPaintMaterial()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelBlueprintLibrary_ApplyPaintMaterial_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelBlueprintLibrary::execApplyPaintMaterial)
{
	P_GET_STRUCT(FVoxelMaterial,Z_Param_Material);
	P_GET_STRUCT(FVoxelPaintMaterial,Z_Param_PaintMaterial);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Strength);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVoxelMaterial*)Z_Param__Result=UVoxelBlueprintLibrary::ApplyPaintMaterial(Z_Param_Material,Z_Param_PaintMaterial,Z_Param_Strength);
	P_NATIVE_END;
}
// ********** End Class UVoxelBlueprintLibrary Function ApplyPaintMaterial *************************

// ********** Begin Class UVoxelBlueprintLibrary Function AreCollisionsEnabled *********************
struct Z_Construct_UFunction_UVoxelBlueprintLibrary_AreCollisionsEnabled_Statics
{
	struct VoxelBlueprintLibrary_eventAreCollisionsEnabled_Parms
	{
		AVoxelWorld* World;
		FVector Position;
		int32 LOD;
		bool bConvertToVoxelSpace;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "bConvertToVoxelSpace" },
		{ "Category", "Voxel|Collisions" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Returns whether voxel collisions are enabled at Position \n\x09 * @param World\x09\x09\x09\x09\x09\x09The voxel world\n\x09 * @param Position\x09\x09\x09\x09\x09The position to query, in world space if ConvertToVoxelSpace is true\n\x09 * @param LOD\x09\x09\x09\x09\x09\x09The LOD at that position\n\x09 * @param bConvertToVoxelSpace\x09\x09If true, the position will be converted to voxel space. Else it will be used directly\n\x09 */" },
#endif
		{ "CPP_Default_bConvertToVoxelSpace", "true" },
		{ "DefaultToSelf", "World" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns whether voxel collisions are enabled at Position\n@param World                                         The voxel world\n@param Position                                      The position to query, in world space if ConvertToVoxelSpace is true\n@param LOD                                           The LOD at that position\n@param bConvertToVoxelSpace          If true, the position will be converted to voxel space. Else it will be used directly" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Position;
	static const UECodeGen_Private::FIntPropertyParams NewProp_LOD;
	static void NewProp_bConvertToVoxelSpace_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bConvertToVoxelSpace;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_AreCollisionsEnabled_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventAreCollisionsEnabled_Parms, World), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_AreCollisionsEnabled_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventAreCollisionsEnabled_Parms, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_AreCollisionsEnabled_Statics::NewProp_LOD = { "LOD", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventAreCollisionsEnabled_Parms, LOD), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UVoxelBlueprintLibrary_AreCollisionsEnabled_Statics::NewProp_bConvertToVoxelSpace_SetBit(void* Obj)
{
	((VoxelBlueprintLibrary_eventAreCollisionsEnabled_Parms*)Obj)->bConvertToVoxelSpace = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_AreCollisionsEnabled_Statics::NewProp_bConvertToVoxelSpace = { "bConvertToVoxelSpace", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VoxelBlueprintLibrary_eventAreCollisionsEnabled_Parms), &Z_Construct_UFunction_UVoxelBlueprintLibrary_AreCollisionsEnabled_Statics::NewProp_bConvertToVoxelSpace_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UVoxelBlueprintLibrary_AreCollisionsEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((VoxelBlueprintLibrary_eventAreCollisionsEnabled_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_AreCollisionsEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VoxelBlueprintLibrary_eventAreCollisionsEnabled_Parms), &Z_Construct_UFunction_UVoxelBlueprintLibrary_AreCollisionsEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelBlueprintLibrary_AreCollisionsEnabled_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_AreCollisionsEnabled_Statics::NewProp_World,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_AreCollisionsEnabled_Statics::NewProp_Position,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_AreCollisionsEnabled_Statics::NewProp_LOD,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_AreCollisionsEnabled_Statics::NewProp_bConvertToVoxelSpace,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_AreCollisionsEnabled_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_AreCollisionsEnabled_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelBlueprintLibrary_AreCollisionsEnabled_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelBlueprintLibrary, nullptr, "AreCollisionsEnabled", Z_Construct_UFunction_UVoxelBlueprintLibrary_AreCollisionsEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_AreCollisionsEnabled_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVoxelBlueprintLibrary_AreCollisionsEnabled_Statics::VoxelBlueprintLibrary_eventAreCollisionsEnabled_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_AreCollisionsEnabled_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelBlueprintLibrary_AreCollisionsEnabled_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVoxelBlueprintLibrary_AreCollisionsEnabled_Statics::VoxelBlueprintLibrary_eventAreCollisionsEnabled_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVoxelBlueprintLibrary_AreCollisionsEnabled()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelBlueprintLibrary_AreCollisionsEnabled_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelBlueprintLibrary::execAreCollisionsEnabled)
{
	P_GET_OBJECT(AVoxelWorld,Z_Param_World);
	P_GET_STRUCT(FVector,Z_Param_Position);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_LOD);
	P_GET_UBOOL(Z_Param_bConvertToVoxelSpace);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UVoxelBlueprintLibrary::AreCollisionsEnabled(Z_Param_World,Z_Param_Position,Z_Param_Out_LOD,Z_Param_bConvertToVoxelSpace);
	P_NATIVE_END;
}
// ********** End Class UVoxelBlueprintLibrary Function AreCollisionsEnabled ***********************

// ********** Begin Class UVoxelBlueprintLibrary Function BindVoxelChunkEvents *********************
struct Z_Construct_UFunction_UVoxelBlueprintLibrary_BindVoxelChunkEvents_Statics
{
	struct VoxelBlueprintLibrary_eventBindVoxelChunkEvents_Parms
	{
		AVoxelWorld* World;
		FScriptDelegate OnActivate;
		FScriptDelegate OnDeactivate;
		bool bFireExistingOnes;
		int32 ChunkSize;
		int32 ActivationDistanceInChunks;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "bFireExistingOnes" },
		{ "Category", "Voxel|Proc Gen" },
		{ "CPP_Default_ActivationDistanceInChunks", "2" },
		{ "CPP_Default_bFireExistingOnes", "false" },
		{ "CPP_Default_ChunkSize", "32" },
		{ "DefaultToSelf", "World" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelBlueprintLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnActivate;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnDeactivate;
	static void NewProp_bFireExistingOnes_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFireExistingOnes;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ChunkSize;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ActivationDistanceInChunks;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_BindVoxelChunkEvents_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventBindVoxelChunkEvents_Parms, World), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_BindVoxelChunkEvents_Statics::NewProp_OnActivate = { "OnActivate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventBindVoxelChunkEvents_Parms, OnActivate), Z_Construct_UDelegateFunction_Voxel_ChunkDynamicDelegate__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 3045830122
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_BindVoxelChunkEvents_Statics::NewProp_OnDeactivate = { "OnDeactivate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventBindVoxelChunkEvents_Parms, OnDeactivate), Z_Construct_UDelegateFunction_Voxel_ChunkDynamicDelegate__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 3045830122
void Z_Construct_UFunction_UVoxelBlueprintLibrary_BindVoxelChunkEvents_Statics::NewProp_bFireExistingOnes_SetBit(void* Obj)
{
	((VoxelBlueprintLibrary_eventBindVoxelChunkEvents_Parms*)Obj)->bFireExistingOnes = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_BindVoxelChunkEvents_Statics::NewProp_bFireExistingOnes = { "bFireExistingOnes", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VoxelBlueprintLibrary_eventBindVoxelChunkEvents_Parms), &Z_Construct_UFunction_UVoxelBlueprintLibrary_BindVoxelChunkEvents_Statics::NewProp_bFireExistingOnes_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_BindVoxelChunkEvents_Statics::NewProp_ChunkSize = { "ChunkSize", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventBindVoxelChunkEvents_Parms, ChunkSize), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_BindVoxelChunkEvents_Statics::NewProp_ActivationDistanceInChunks = { "ActivationDistanceInChunks", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventBindVoxelChunkEvents_Parms, ActivationDistanceInChunks), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelBlueprintLibrary_BindVoxelChunkEvents_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_BindVoxelChunkEvents_Statics::NewProp_World,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_BindVoxelChunkEvents_Statics::NewProp_OnActivate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_BindVoxelChunkEvents_Statics::NewProp_OnDeactivate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_BindVoxelChunkEvents_Statics::NewProp_bFireExistingOnes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_BindVoxelChunkEvents_Statics::NewProp_ChunkSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_BindVoxelChunkEvents_Statics::NewProp_ActivationDistanceInChunks,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_BindVoxelChunkEvents_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelBlueprintLibrary_BindVoxelChunkEvents_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelBlueprintLibrary, nullptr, "BindVoxelChunkEvents", Z_Construct_UFunction_UVoxelBlueprintLibrary_BindVoxelChunkEvents_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_BindVoxelChunkEvents_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVoxelBlueprintLibrary_BindVoxelChunkEvents_Statics::VoxelBlueprintLibrary_eventBindVoxelChunkEvents_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_BindVoxelChunkEvents_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelBlueprintLibrary_BindVoxelChunkEvents_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVoxelBlueprintLibrary_BindVoxelChunkEvents_Statics::VoxelBlueprintLibrary_eventBindVoxelChunkEvents_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVoxelBlueprintLibrary_BindVoxelChunkEvents()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelBlueprintLibrary_BindVoxelChunkEvents_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelBlueprintLibrary::execBindVoxelChunkEvents)
{
	P_GET_OBJECT(AVoxelWorld,Z_Param_World);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnActivate);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnDeactivate);
	P_GET_UBOOL(Z_Param_bFireExistingOnes);
	P_GET_PROPERTY(FIntProperty,Z_Param_ChunkSize);
	P_GET_PROPERTY(FIntProperty,Z_Param_ActivationDistanceInChunks);
	P_FINISH;
	P_NATIVE_BEGIN;
	UVoxelBlueprintLibrary::BindVoxelChunkEvents(Z_Param_World,FChunkDynamicDelegate(Z_Param_OnActivate),FChunkDynamicDelegate(Z_Param_OnDeactivate),Z_Param_bFireExistingOnes,Z_Param_ChunkSize,Z_Param_ActivationDistanceInChunks);
	P_NATIVE_END;
}
// ********** End Class UVoxelBlueprintLibrary Function BindVoxelChunkEvents ***********************

// ********** Begin Class UVoxelBlueprintLibrary Function BindVoxelGenerationEvent *****************
struct Z_Construct_UFunction_UVoxelBlueprintLibrary_BindVoxelGenerationEvent_Statics
{
	struct VoxelBlueprintLibrary_eventBindVoxelGenerationEvent_Parms
	{
		AVoxelWorld* World;
		FScriptDelegate OnGenerate;
		bool bFireExistingOnes;
		int32 ChunkSize;
		int32 GenerationDistanceInChunks;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "bFireExistingOnes" },
		{ "Category", "Voxel|Proc Gen" },
		{ "CPP_Default_bFireExistingOnes", "false" },
		{ "CPP_Default_ChunkSize", "32" },
		{ "CPP_Default_GenerationDistanceInChunks", "2" },
		{ "DefaultToSelf", "World" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelBlueprintLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnGenerate;
	static void NewProp_bFireExistingOnes_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFireExistingOnes;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ChunkSize;
	static const UECodeGen_Private::FIntPropertyParams NewProp_GenerationDistanceInChunks;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_BindVoxelGenerationEvent_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventBindVoxelGenerationEvent_Parms, World), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_BindVoxelGenerationEvent_Statics::NewProp_OnGenerate = { "OnGenerate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventBindVoxelGenerationEvent_Parms, OnGenerate), Z_Construct_UDelegateFunction_Voxel_ChunkDynamicDelegate__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 3045830122
void Z_Construct_UFunction_UVoxelBlueprintLibrary_BindVoxelGenerationEvent_Statics::NewProp_bFireExistingOnes_SetBit(void* Obj)
{
	((VoxelBlueprintLibrary_eventBindVoxelGenerationEvent_Parms*)Obj)->bFireExistingOnes = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_BindVoxelGenerationEvent_Statics::NewProp_bFireExistingOnes = { "bFireExistingOnes", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VoxelBlueprintLibrary_eventBindVoxelGenerationEvent_Parms), &Z_Construct_UFunction_UVoxelBlueprintLibrary_BindVoxelGenerationEvent_Statics::NewProp_bFireExistingOnes_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_BindVoxelGenerationEvent_Statics::NewProp_ChunkSize = { "ChunkSize", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventBindVoxelGenerationEvent_Parms, ChunkSize), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_BindVoxelGenerationEvent_Statics::NewProp_GenerationDistanceInChunks = { "GenerationDistanceInChunks", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventBindVoxelGenerationEvent_Parms, GenerationDistanceInChunks), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelBlueprintLibrary_BindVoxelGenerationEvent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_BindVoxelGenerationEvent_Statics::NewProp_World,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_BindVoxelGenerationEvent_Statics::NewProp_OnGenerate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_BindVoxelGenerationEvent_Statics::NewProp_bFireExistingOnes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_BindVoxelGenerationEvent_Statics::NewProp_ChunkSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_BindVoxelGenerationEvent_Statics::NewProp_GenerationDistanceInChunks,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_BindVoxelGenerationEvent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelBlueprintLibrary_BindVoxelGenerationEvent_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelBlueprintLibrary, nullptr, "BindVoxelGenerationEvent", Z_Construct_UFunction_UVoxelBlueprintLibrary_BindVoxelGenerationEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_BindVoxelGenerationEvent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVoxelBlueprintLibrary_BindVoxelGenerationEvent_Statics::VoxelBlueprintLibrary_eventBindVoxelGenerationEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_BindVoxelGenerationEvent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelBlueprintLibrary_BindVoxelGenerationEvent_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVoxelBlueprintLibrary_BindVoxelGenerationEvent_Statics::VoxelBlueprintLibrary_eventBindVoxelGenerationEvent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVoxelBlueprintLibrary_BindVoxelGenerationEvent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelBlueprintLibrary_BindVoxelGenerationEvent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelBlueprintLibrary::execBindVoxelGenerationEvent)
{
	P_GET_OBJECT(AVoxelWorld,Z_Param_World);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_OnGenerate);
	P_GET_UBOOL(Z_Param_bFireExistingOnes);
	P_GET_PROPERTY(FIntProperty,Z_Param_ChunkSize);
	P_GET_PROPERTY(FIntProperty,Z_Param_GenerationDistanceInChunks);
	P_FINISH;
	P_NATIVE_BEGIN;
	UVoxelBlueprintLibrary::BindVoxelGenerationEvent(Z_Param_World,FChunkDynamicDelegate(Z_Param_OnGenerate),Z_Param_bFireExistingOnes,Z_Param_ChunkSize,Z_Param_GenerationDistanceInChunks);
	P_NATIVE_END;
}
// ********** End Class UVoxelBlueprintLibrary Function BindVoxelGenerationEvent *******************

// ********** Begin Class UVoxelBlueprintLibrary Function ClearAllData *****************************
struct Z_Construct_UFunction_UVoxelBlueprintLibrary_ClearAllData_Statics
{
	struct VoxelBlueprintLibrary_eventClearAllData_Parms
	{
		AVoxelWorld* World;
		bool bUpdateRender;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "bUpdateRender" },
		{ "Category", "Voxel|Data" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Clear all the data in the world, including items/assets\n" },
#endif
		{ "CPP_Default_bUpdateRender", "true" },
		{ "DefaultToSelf", "World" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Clear all the data in the world, including items/assets" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
	static void NewProp_bUpdateRender_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUpdateRender;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_ClearAllData_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventClearAllData_Parms, World), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UVoxelBlueprintLibrary_ClearAllData_Statics::NewProp_bUpdateRender_SetBit(void* Obj)
{
	((VoxelBlueprintLibrary_eventClearAllData_Parms*)Obj)->bUpdateRender = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_ClearAllData_Statics::NewProp_bUpdateRender = { "bUpdateRender", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VoxelBlueprintLibrary_eventClearAllData_Parms), &Z_Construct_UFunction_UVoxelBlueprintLibrary_ClearAllData_Statics::NewProp_bUpdateRender_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelBlueprintLibrary_ClearAllData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_ClearAllData_Statics::NewProp_World,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_ClearAllData_Statics::NewProp_bUpdateRender,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_ClearAllData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelBlueprintLibrary_ClearAllData_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelBlueprintLibrary, nullptr, "ClearAllData", Z_Construct_UFunction_UVoxelBlueprintLibrary_ClearAllData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_ClearAllData_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVoxelBlueprintLibrary_ClearAllData_Statics::VoxelBlueprintLibrary_eventClearAllData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_ClearAllData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelBlueprintLibrary_ClearAllData_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVoxelBlueprintLibrary_ClearAllData_Statics::VoxelBlueprintLibrary_eventClearAllData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVoxelBlueprintLibrary_ClearAllData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelBlueprintLibrary_ClearAllData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelBlueprintLibrary::execClearAllData)
{
	P_GET_OBJECT(AVoxelWorld,Z_Param_World);
	P_GET_UBOOL(Z_Param_bUpdateRender);
	P_FINISH;
	P_NATIVE_BEGIN;
	UVoxelBlueprintLibrary::ClearAllData(Z_Param_World,Z_Param_bUpdateRender);
	P_NATIVE_END;
}
// ********** End Class UVoxelBlueprintLibrary Function ClearAllData *******************************

// ********** Begin Class UVoxelBlueprintLibrary Function ClearDirtyData ***************************
struct Z_Construct_UFunction_UVoxelBlueprintLibrary_ClearDirtyData_Statics
{
	struct VoxelBlueprintLibrary_eventClearDirtyData_Parms
	{
		AVoxelWorld* World;
		bool bUpdateRender;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "bUpdateRender" },
		{ "Category", "Voxel|Data" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Clear all the edited data in the world, excluding items/assets\n" },
#endif
		{ "CPP_Default_bUpdateRender", "true" },
		{ "DefaultToSelf", "World" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Clear all the edited data in the world, excluding items/assets" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
	static void NewProp_bUpdateRender_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUpdateRender;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_ClearDirtyData_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventClearDirtyData_Parms, World), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UVoxelBlueprintLibrary_ClearDirtyData_Statics::NewProp_bUpdateRender_SetBit(void* Obj)
{
	((VoxelBlueprintLibrary_eventClearDirtyData_Parms*)Obj)->bUpdateRender = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_ClearDirtyData_Statics::NewProp_bUpdateRender = { "bUpdateRender", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VoxelBlueprintLibrary_eventClearDirtyData_Parms), &Z_Construct_UFunction_UVoxelBlueprintLibrary_ClearDirtyData_Statics::NewProp_bUpdateRender_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelBlueprintLibrary_ClearDirtyData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_ClearDirtyData_Statics::NewProp_World,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_ClearDirtyData_Statics::NewProp_bUpdateRender,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_ClearDirtyData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelBlueprintLibrary_ClearDirtyData_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelBlueprintLibrary, nullptr, "ClearDirtyData", Z_Construct_UFunction_UVoxelBlueprintLibrary_ClearDirtyData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_ClearDirtyData_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVoxelBlueprintLibrary_ClearDirtyData_Statics::VoxelBlueprintLibrary_eventClearDirtyData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_ClearDirtyData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelBlueprintLibrary_ClearDirtyData_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVoxelBlueprintLibrary_ClearDirtyData_Statics::VoxelBlueprintLibrary_eventClearDirtyData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVoxelBlueprintLibrary_ClearDirtyData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelBlueprintLibrary_ClearDirtyData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelBlueprintLibrary::execClearDirtyData)
{
	P_GET_OBJECT(AVoxelWorld,Z_Param_World);
	P_GET_UBOOL(Z_Param_bUpdateRender);
	P_FINISH;
	P_NATIVE_BEGIN;
	UVoxelBlueprintLibrary::ClearDirtyData(Z_Param_World,Z_Param_bUpdateRender);
	P_NATIVE_END;
}
// ********** End Class UVoxelBlueprintLibrary Function ClearDirtyData *****************************

// ********** Begin Class UVoxelBlueprintLibrary Function ClearFrames ******************************
struct Z_Construct_UFunction_UVoxelBlueprintLibrary_ClearFrames_Statics
{
	struct VoxelBlueprintLibrary_eventClearFrames_Parms
	{
		AVoxelWorld* World;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Voxel|UndoRedo" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Clear all the frames. bEnableUndoRedo must be true\n" },
#endif
		{ "DefaultToSelf", "World" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Clear all the frames. bEnableUndoRedo must be true" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_ClearFrames_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventClearFrames_Parms, World), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelBlueprintLibrary_ClearFrames_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_ClearFrames_Statics::NewProp_World,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_ClearFrames_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelBlueprintLibrary_ClearFrames_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelBlueprintLibrary, nullptr, "ClearFrames", Z_Construct_UFunction_UVoxelBlueprintLibrary_ClearFrames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_ClearFrames_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVoxelBlueprintLibrary_ClearFrames_Statics::VoxelBlueprintLibrary_eventClearFrames_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_ClearFrames_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelBlueprintLibrary_ClearFrames_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVoxelBlueprintLibrary_ClearFrames_Statics::VoxelBlueprintLibrary_eventClearFrames_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVoxelBlueprintLibrary_ClearFrames()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelBlueprintLibrary_ClearFrames_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelBlueprintLibrary::execClearFrames)
{
	P_GET_OBJECT(AVoxelWorld,Z_Param_World);
	P_FINISH;
	P_NATIVE_BEGIN;
	UVoxelBlueprintLibrary::ClearFrames(Z_Param_World);
	P_NATIVE_END;
}
// ********** End Class UVoxelBlueprintLibrary Function ClearFrames ********************************

// ********** Begin Class UVoxelBlueprintLibrary Function ClearMaterialData ************************
struct Z_Construct_UFunction_UVoxelBlueprintLibrary_ClearMaterialData_Statics
{
	struct VoxelBlueprintLibrary_eventClearMaterialData_Parms
	{
		AVoxelWorld* World;
		bool bUpdateRender;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "bUpdateRender" },
		{ "Category", "Voxel|Data" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Clear all the material data in the world\n" },
#endif
		{ "CPP_Default_bUpdateRender", "true" },
		{ "DefaultToSelf", "World" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Clear all the material data in the world" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
	static void NewProp_bUpdateRender_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUpdateRender;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_ClearMaterialData_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventClearMaterialData_Parms, World), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UVoxelBlueprintLibrary_ClearMaterialData_Statics::NewProp_bUpdateRender_SetBit(void* Obj)
{
	((VoxelBlueprintLibrary_eventClearMaterialData_Parms*)Obj)->bUpdateRender = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_ClearMaterialData_Statics::NewProp_bUpdateRender = { "bUpdateRender", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VoxelBlueprintLibrary_eventClearMaterialData_Parms), &Z_Construct_UFunction_UVoxelBlueprintLibrary_ClearMaterialData_Statics::NewProp_bUpdateRender_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelBlueprintLibrary_ClearMaterialData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_ClearMaterialData_Statics::NewProp_World,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_ClearMaterialData_Statics::NewProp_bUpdateRender,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_ClearMaterialData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelBlueprintLibrary_ClearMaterialData_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelBlueprintLibrary, nullptr, "ClearMaterialData", Z_Construct_UFunction_UVoxelBlueprintLibrary_ClearMaterialData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_ClearMaterialData_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVoxelBlueprintLibrary_ClearMaterialData_Statics::VoxelBlueprintLibrary_eventClearMaterialData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_ClearMaterialData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelBlueprintLibrary_ClearMaterialData_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVoxelBlueprintLibrary_ClearMaterialData_Statics::VoxelBlueprintLibrary_eventClearMaterialData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVoxelBlueprintLibrary_ClearMaterialData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelBlueprintLibrary_ClearMaterialData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelBlueprintLibrary::execClearMaterialData)
{
	P_GET_OBJECT(AVoxelWorld,Z_Param_World);
	P_GET_UBOOL(Z_Param_bUpdateRender);
	P_FINISH;
	P_NATIVE_BEGIN;
	UVoxelBlueprintLibrary::ClearMaterialData(Z_Param_World,Z_Param_bUpdateRender);
	P_NATIVE_END;
}
// ********** End Class UVoxelBlueprintLibrary Function ClearMaterialData **************************

// ********** Begin Class UVoxelBlueprintLibrary Function ClearValueData ***************************
struct Z_Construct_UFunction_UVoxelBlueprintLibrary_ClearValueData_Statics
{
	struct VoxelBlueprintLibrary_eventClearValueData_Parms
	{
		AVoxelWorld* World;
		bool bUpdateRender;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "bUpdateRender" },
		{ "Category", "Voxel|Data" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Clear all the value data in the world\n" },
#endif
		{ "CPP_Default_bUpdateRender", "true" },
		{ "DefaultToSelf", "World" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Clear all the value data in the world" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
	static void NewProp_bUpdateRender_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUpdateRender;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_ClearValueData_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventClearValueData_Parms, World), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UVoxelBlueprintLibrary_ClearValueData_Statics::NewProp_bUpdateRender_SetBit(void* Obj)
{
	((VoxelBlueprintLibrary_eventClearValueData_Parms*)Obj)->bUpdateRender = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_ClearValueData_Statics::NewProp_bUpdateRender = { "bUpdateRender", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VoxelBlueprintLibrary_eventClearValueData_Parms), &Z_Construct_UFunction_UVoxelBlueprintLibrary_ClearValueData_Statics::NewProp_bUpdateRender_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelBlueprintLibrary_ClearValueData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_ClearValueData_Statics::NewProp_World,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_ClearValueData_Statics::NewProp_bUpdateRender,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_ClearValueData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelBlueprintLibrary_ClearValueData_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelBlueprintLibrary, nullptr, "ClearValueData", Z_Construct_UFunction_UVoxelBlueprintLibrary_ClearValueData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_ClearValueData_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVoxelBlueprintLibrary_ClearValueData_Statics::VoxelBlueprintLibrary_eventClearValueData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_ClearValueData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelBlueprintLibrary_ClearValueData_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVoxelBlueprintLibrary_ClearValueData_Statics::VoxelBlueprintLibrary_eventClearValueData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVoxelBlueprintLibrary_ClearValueData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelBlueprintLibrary_ClearValueData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelBlueprintLibrary::execClearValueData)
{
	P_GET_OBJECT(AVoxelWorld,Z_Param_World);
	P_GET_UBOOL(Z_Param_bUpdateRender);
	P_FINISH;
	P_NATIVE_BEGIN;
	UVoxelBlueprintLibrary::ClearValueData(Z_Param_World,Z_Param_bUpdateRender);
	P_NATIVE_END;
}
// ********** End Class UVoxelBlueprintLibrary Function ClearValueData *****************************

// ********** Begin Class UVoxelBlueprintLibrary Function CreateColorPaintMaterial *****************
struct Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateColorPaintMaterial_Statics
{
	struct VoxelBlueprintLibrary_eventCreateColorPaintMaterial_Parms
	{
		FVoxelPaintMaterialColor Color;
		FVoxelPaintMaterial ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Voxel|Materials" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Create from color\n" },
#endif
		{ "DisplayName", "Create RGB Paint Material" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Create from color" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateColorPaintMaterial_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventCreateColorPaintMaterial_Parms, Color), Z_Construct_UScriptStruct_FVoxelPaintMaterialColor, METADATA_PARAMS(0, nullptr) }; // 1913510790
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateColorPaintMaterial_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventCreateColorPaintMaterial_Parms, ReturnValue), Z_Construct_UScriptStruct_FVoxelPaintMaterial, METADATA_PARAMS(0, nullptr) }; // 2783111154
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateColorPaintMaterial_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateColorPaintMaterial_Statics::NewProp_Color,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateColorPaintMaterial_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateColorPaintMaterial_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateColorPaintMaterial_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelBlueprintLibrary, nullptr, "CreateColorPaintMaterial", Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateColorPaintMaterial_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateColorPaintMaterial_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateColorPaintMaterial_Statics::VoxelBlueprintLibrary_eventCreateColorPaintMaterial_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateColorPaintMaterial_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateColorPaintMaterial_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateColorPaintMaterial_Statics::VoxelBlueprintLibrary_eventCreateColorPaintMaterial_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateColorPaintMaterial()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateColorPaintMaterial_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelBlueprintLibrary::execCreateColorPaintMaterial)
{
	P_GET_STRUCT(FVoxelPaintMaterialColor,Z_Param_Color);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVoxelPaintMaterial*)Z_Param__Result=UVoxelBlueprintLibrary::CreateColorPaintMaterial(Z_Param_Color);
	P_NATIVE_END;
}
// ********** End Class UVoxelBlueprintLibrary Function CreateColorPaintMaterial *******************

// ********** Begin Class UVoxelBlueprintLibrary Function CreateFiveWayBlendPaintMaterial **********
struct Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateFiveWayBlendPaintMaterial_Statics
{
	struct VoxelBlueprintLibrary_eventCreateFiveWayBlendPaintMaterial_Parms
	{
		FVoxelPaintMaterialFiveWayBlend FiveWayBlend;
		FVoxelPaintMaterial ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Voxel|Materials" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Create paint material for 5 way blend\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Create paint material for 5 way blend" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_FiveWayBlend;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateFiveWayBlendPaintMaterial_Statics::NewProp_FiveWayBlend = { "FiveWayBlend", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventCreateFiveWayBlendPaintMaterial_Parms, FiveWayBlend), Z_Construct_UScriptStruct_FVoxelPaintMaterialFiveWayBlend, METADATA_PARAMS(0, nullptr) }; // 2562055414
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateFiveWayBlendPaintMaterial_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventCreateFiveWayBlendPaintMaterial_Parms, ReturnValue), Z_Construct_UScriptStruct_FVoxelPaintMaterial, METADATA_PARAMS(0, nullptr) }; // 2783111154
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateFiveWayBlendPaintMaterial_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateFiveWayBlendPaintMaterial_Statics::NewProp_FiveWayBlend,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateFiveWayBlendPaintMaterial_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateFiveWayBlendPaintMaterial_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateFiveWayBlendPaintMaterial_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelBlueprintLibrary, nullptr, "CreateFiveWayBlendPaintMaterial", Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateFiveWayBlendPaintMaterial_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateFiveWayBlendPaintMaterial_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateFiveWayBlendPaintMaterial_Statics::VoxelBlueprintLibrary_eventCreateFiveWayBlendPaintMaterial_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateFiveWayBlendPaintMaterial_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateFiveWayBlendPaintMaterial_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateFiveWayBlendPaintMaterial_Statics::VoxelBlueprintLibrary_eventCreateFiveWayBlendPaintMaterial_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateFiveWayBlendPaintMaterial()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateFiveWayBlendPaintMaterial_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelBlueprintLibrary::execCreateFiveWayBlendPaintMaterial)
{
	P_GET_STRUCT(FVoxelPaintMaterialFiveWayBlend,Z_Param_FiveWayBlend);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVoxelPaintMaterial*)Z_Param__Result=UVoxelBlueprintLibrary::CreateFiveWayBlendPaintMaterial(Z_Param_FiveWayBlend);
	P_NATIVE_END;
}
// ********** End Class UVoxelBlueprintLibrary Function CreateFiveWayBlendPaintMaterial ************

// ********** Begin Class UVoxelBlueprintLibrary Function CreateGlobalVoxelThreadPool **************
struct Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateGlobalVoxelThreadPool_Statics
{
	struct VoxelBlueprintLibrary_eventCreateGlobalVoxelThreadPool_Parms
	{
		TMap<EVoxelTaskType,int32> PriorityCategoriesOverrides;
		TMap<EVoxelTaskType,int32> PriorityOffsetsOverrides;
		int32 NumberOfThreads;
		bool bConstantPriorities;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "PriorityCategoriesOverrides, PriorityOffsetsOverrides" },
		{ "Category", "Voxel|Threads" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Create the global voxel thread pool. Must not be already created.\n\x09 * CreateWorldVoxelThreadPool is preferred, as pools will be per level\n\x09 * @param\x09NumberOfThreads\x09\x09""At least 1\n\x09 * @param\x09""bConstantPriorities\x09If true won't recompute the tasks priorities once added. Useful if you have many tasks, but will give bad task scheduling when moving fast\n\x09 */" },
#endif
		{ "CPP_Default_bConstantPriorities", "false" },
		{ "CPP_Default_NumberOfThreads", "2" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Create the global voxel thread pool. Must not be already created.\nCreateWorldVoxelThreadPool is preferred, as pools will be per level\n@param       NumberOfThreads         At least 1\n@param       bConstantPriorities     If true won't recompute the tasks priorities once added. Useful if you have many tasks, but will give bad task scheduling when moving fast" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PriorityCategoriesOverrides_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PriorityOffsetsOverrides_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_PriorityCategoriesOverrides_ValueProp;
	static const UECodeGen_Private::FBytePropertyParams NewProp_PriorityCategoriesOverrides_Key_KeyProp_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_PriorityCategoriesOverrides_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_PriorityCategoriesOverrides;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PriorityOffsetsOverrides_ValueProp;
	static const UECodeGen_Private::FBytePropertyParams NewProp_PriorityOffsetsOverrides_Key_KeyProp_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_PriorityOffsetsOverrides_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_PriorityOffsetsOverrides;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumberOfThreads;
	static void NewProp_bConstantPriorities_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bConstantPriorities;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateGlobalVoxelThreadPool_Statics::NewProp_PriorityCategoriesOverrides_ValueProp = { "PriorityCategoriesOverrides", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateGlobalVoxelThreadPool_Statics::NewProp_PriorityCategoriesOverrides_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateGlobalVoxelThreadPool_Statics::NewProp_PriorityCategoriesOverrides_Key_KeyProp = { "PriorityCategoriesOverrides_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_Voxel_EVoxelTaskType, METADATA_PARAMS(0, nullptr) }; // 4243771042
const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateGlobalVoxelThreadPool_Statics::NewProp_PriorityCategoriesOverrides = { "PriorityCategoriesOverrides", nullptr, (EPropertyFlags)0x0010040008000182, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventCreateGlobalVoxelThreadPool_Parms, PriorityCategoriesOverrides), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PriorityCategoriesOverrides_MetaData), NewProp_PriorityCategoriesOverrides_MetaData) }; // 4243771042
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateGlobalVoxelThreadPool_Statics::NewProp_PriorityOffsetsOverrides_ValueProp = { "PriorityOffsetsOverrides", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateGlobalVoxelThreadPool_Statics::NewProp_PriorityOffsetsOverrides_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateGlobalVoxelThreadPool_Statics::NewProp_PriorityOffsetsOverrides_Key_KeyProp = { "PriorityOffsetsOverrides_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_Voxel_EVoxelTaskType, METADATA_PARAMS(0, nullptr) }; // 4243771042
const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateGlobalVoxelThreadPool_Statics::NewProp_PriorityOffsetsOverrides = { "PriorityOffsetsOverrides", nullptr, (EPropertyFlags)0x0010040008000182, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventCreateGlobalVoxelThreadPool_Parms, PriorityOffsetsOverrides), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PriorityOffsetsOverrides_MetaData), NewProp_PriorityOffsetsOverrides_MetaData) }; // 4243771042
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateGlobalVoxelThreadPool_Statics::NewProp_NumberOfThreads = { "NumberOfThreads", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventCreateGlobalVoxelThreadPool_Parms, NumberOfThreads), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateGlobalVoxelThreadPool_Statics::NewProp_bConstantPriorities_SetBit(void* Obj)
{
	((VoxelBlueprintLibrary_eventCreateGlobalVoxelThreadPool_Parms*)Obj)->bConstantPriorities = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateGlobalVoxelThreadPool_Statics::NewProp_bConstantPriorities = { "bConstantPriorities", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VoxelBlueprintLibrary_eventCreateGlobalVoxelThreadPool_Parms), &Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateGlobalVoxelThreadPool_Statics::NewProp_bConstantPriorities_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateGlobalVoxelThreadPool_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateGlobalVoxelThreadPool_Statics::NewProp_PriorityCategoriesOverrides_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateGlobalVoxelThreadPool_Statics::NewProp_PriorityCategoriesOverrides_Key_KeyProp_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateGlobalVoxelThreadPool_Statics::NewProp_PriorityCategoriesOverrides_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateGlobalVoxelThreadPool_Statics::NewProp_PriorityCategoriesOverrides,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateGlobalVoxelThreadPool_Statics::NewProp_PriorityOffsetsOverrides_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateGlobalVoxelThreadPool_Statics::NewProp_PriorityOffsetsOverrides_Key_KeyProp_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateGlobalVoxelThreadPool_Statics::NewProp_PriorityOffsetsOverrides_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateGlobalVoxelThreadPool_Statics::NewProp_PriorityOffsetsOverrides,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateGlobalVoxelThreadPool_Statics::NewProp_NumberOfThreads,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateGlobalVoxelThreadPool_Statics::NewProp_bConstantPriorities,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateGlobalVoxelThreadPool_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateGlobalVoxelThreadPool_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelBlueprintLibrary, nullptr, "CreateGlobalVoxelThreadPool", Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateGlobalVoxelThreadPool_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateGlobalVoxelThreadPool_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateGlobalVoxelThreadPool_Statics::VoxelBlueprintLibrary_eventCreateGlobalVoxelThreadPool_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateGlobalVoxelThreadPool_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateGlobalVoxelThreadPool_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateGlobalVoxelThreadPool_Statics::VoxelBlueprintLibrary_eventCreateGlobalVoxelThreadPool_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateGlobalVoxelThreadPool()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateGlobalVoxelThreadPool_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelBlueprintLibrary::execCreateGlobalVoxelThreadPool)
{
	P_GET_TMAP_REF(EVoxelTaskType,int32,Z_Param_Out_PriorityCategoriesOverrides);
	P_GET_TMAP_REF(EVoxelTaskType,int32,Z_Param_Out_PriorityOffsetsOverrides);
	P_GET_PROPERTY(FIntProperty,Z_Param_NumberOfThreads);
	P_GET_UBOOL(Z_Param_bConstantPriorities);
	P_FINISH;
	P_NATIVE_BEGIN;
	UVoxelBlueprintLibrary::CreateGlobalVoxelThreadPool(Z_Param_Out_PriorityCategoriesOverrides,Z_Param_Out_PriorityOffsetsOverrides,Z_Param_NumberOfThreads,Z_Param_bConstantPriorities);
	P_NATIVE_END;
}
// ********** End Class UVoxelBlueprintLibrary Function CreateGlobalVoxelThreadPool ****************

// ********** Begin Class UVoxelBlueprintLibrary Function CreateMultiIndexPaintMaterial ************
struct Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateMultiIndexPaintMaterial_Statics
{
	struct VoxelBlueprintLibrary_eventCreateMultiIndexPaintMaterial_Parms
	{
		FVoxelPaintMaterialMultiIndex MultiIndex;
		FVoxelPaintMaterial ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Voxel|Materials" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Create for multi index\n" },
#endif
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Create for multi index" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_MultiIndex;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateMultiIndexPaintMaterial_Statics::NewProp_MultiIndex = { "MultiIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventCreateMultiIndexPaintMaterial_Parms, MultiIndex), Z_Construct_UScriptStruct_FVoxelPaintMaterialMultiIndex, METADATA_PARAMS(0, nullptr) }; // 3733363525
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateMultiIndexPaintMaterial_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventCreateMultiIndexPaintMaterial_Parms, ReturnValue), Z_Construct_UScriptStruct_FVoxelPaintMaterial, METADATA_PARAMS(0, nullptr) }; // 2783111154
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateMultiIndexPaintMaterial_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateMultiIndexPaintMaterial_Statics::NewProp_MultiIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateMultiIndexPaintMaterial_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateMultiIndexPaintMaterial_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateMultiIndexPaintMaterial_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelBlueprintLibrary, nullptr, "CreateMultiIndexPaintMaterial", Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateMultiIndexPaintMaterial_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateMultiIndexPaintMaterial_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateMultiIndexPaintMaterial_Statics::VoxelBlueprintLibrary_eventCreateMultiIndexPaintMaterial_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateMultiIndexPaintMaterial_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateMultiIndexPaintMaterial_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateMultiIndexPaintMaterial_Statics::VoxelBlueprintLibrary_eventCreateMultiIndexPaintMaterial_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateMultiIndexPaintMaterial()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateMultiIndexPaintMaterial_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelBlueprintLibrary::execCreateMultiIndexPaintMaterial)
{
	P_GET_STRUCT(FVoxelPaintMaterialMultiIndex,Z_Param_MultiIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVoxelPaintMaterial*)Z_Param__Result=UVoxelBlueprintLibrary::CreateMultiIndexPaintMaterial(Z_Param_MultiIndex);
	P_NATIVE_END;
}
// ********** End Class UVoxelBlueprintLibrary Function CreateMultiIndexPaintMaterial **************

// ********** Begin Class UVoxelBlueprintLibrary Function CreateMultiIndexRawPaintMaterial *********
struct Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateMultiIndexRawPaintMaterial_Statics
{
	struct VoxelBlueprintLibrary_eventCreateMultiIndexRawPaintMaterial_Parms
	{
		FVoxelPaintMaterialMultiIndexRaw MultiIndexRaw;
		FVoxelPaintMaterial ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Voxel|Materials" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Create for multi index, setting the data directly\n" },
#endif
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Create for multi index, setting the data directly" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_MultiIndexRaw;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateMultiIndexRawPaintMaterial_Statics::NewProp_MultiIndexRaw = { "MultiIndexRaw", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventCreateMultiIndexRawPaintMaterial_Parms, MultiIndexRaw), Z_Construct_UScriptStruct_FVoxelPaintMaterialMultiIndexRaw, METADATA_PARAMS(0, nullptr) }; // 3372653697
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateMultiIndexRawPaintMaterial_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventCreateMultiIndexRawPaintMaterial_Parms, ReturnValue), Z_Construct_UScriptStruct_FVoxelPaintMaterial, METADATA_PARAMS(0, nullptr) }; // 2783111154
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateMultiIndexRawPaintMaterial_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateMultiIndexRawPaintMaterial_Statics::NewProp_MultiIndexRaw,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateMultiIndexRawPaintMaterial_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateMultiIndexRawPaintMaterial_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateMultiIndexRawPaintMaterial_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelBlueprintLibrary, nullptr, "CreateMultiIndexRawPaintMaterial", Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateMultiIndexRawPaintMaterial_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateMultiIndexRawPaintMaterial_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateMultiIndexRawPaintMaterial_Statics::VoxelBlueprintLibrary_eventCreateMultiIndexRawPaintMaterial_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateMultiIndexRawPaintMaterial_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateMultiIndexRawPaintMaterial_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateMultiIndexRawPaintMaterial_Statics::VoxelBlueprintLibrary_eventCreateMultiIndexRawPaintMaterial_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateMultiIndexRawPaintMaterial()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateMultiIndexRawPaintMaterial_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelBlueprintLibrary::execCreateMultiIndexRawPaintMaterial)
{
	P_GET_STRUCT(FVoxelPaintMaterialMultiIndexRaw,Z_Param_MultiIndexRaw);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVoxelPaintMaterial*)Z_Param__Result=UVoxelBlueprintLibrary::CreateMultiIndexRawPaintMaterial(Z_Param_MultiIndexRaw);
	P_NATIVE_END;
}
// ********** End Class UVoxelBlueprintLibrary Function CreateMultiIndexRawPaintMaterial ***********

// ********** Begin Class UVoxelBlueprintLibrary Function CreateMultiIndexWetnessPaintMaterial *****
struct Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateMultiIndexWetnessPaintMaterial_Statics
{
	struct VoxelBlueprintLibrary_eventCreateMultiIndexWetnessPaintMaterial_Parms
	{
		FVoxelPaintMaterialMultiIndexWetness MultiIndexWetness;
		FVoxelPaintMaterial ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Voxel|Materials" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Create for multi index wetness\n" },
#endif
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Create for multi index wetness" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_MultiIndexWetness;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateMultiIndexWetnessPaintMaterial_Statics::NewProp_MultiIndexWetness = { "MultiIndexWetness", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventCreateMultiIndexWetnessPaintMaterial_Parms, MultiIndexWetness), Z_Construct_UScriptStruct_FVoxelPaintMaterialMultiIndexWetness, METADATA_PARAMS(0, nullptr) }; // 2881764693
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateMultiIndexWetnessPaintMaterial_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventCreateMultiIndexWetnessPaintMaterial_Parms, ReturnValue), Z_Construct_UScriptStruct_FVoxelPaintMaterial, METADATA_PARAMS(0, nullptr) }; // 2783111154
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateMultiIndexWetnessPaintMaterial_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateMultiIndexWetnessPaintMaterial_Statics::NewProp_MultiIndexWetness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateMultiIndexWetnessPaintMaterial_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateMultiIndexWetnessPaintMaterial_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateMultiIndexWetnessPaintMaterial_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelBlueprintLibrary, nullptr, "CreateMultiIndexWetnessPaintMaterial", Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateMultiIndexWetnessPaintMaterial_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateMultiIndexWetnessPaintMaterial_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateMultiIndexWetnessPaintMaterial_Statics::VoxelBlueprintLibrary_eventCreateMultiIndexWetnessPaintMaterial_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateMultiIndexWetnessPaintMaterial_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateMultiIndexWetnessPaintMaterial_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateMultiIndexWetnessPaintMaterial_Statics::VoxelBlueprintLibrary_eventCreateMultiIndexWetnessPaintMaterial_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateMultiIndexWetnessPaintMaterial()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateMultiIndexWetnessPaintMaterial_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelBlueprintLibrary::execCreateMultiIndexWetnessPaintMaterial)
{
	P_GET_STRUCT(FVoxelPaintMaterialMultiIndexWetness,Z_Param_MultiIndexWetness);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVoxelPaintMaterial*)Z_Param__Result=UVoxelBlueprintLibrary::CreateMultiIndexWetnessPaintMaterial(Z_Param_MultiIndexWetness);
	P_NATIVE_END;
}
// ********** End Class UVoxelBlueprintLibrary Function CreateMultiIndexWetnessPaintMaterial *******

// ********** Begin Class UVoxelBlueprintLibrary Function CreateOrUpdateTextureFromVoxelColorTexture 
struct Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateOrUpdateTextureFromVoxelColorTexture_Statics
{
	struct VoxelBlueprintLibrary_eventCreateOrUpdateTextureFromVoxelColorTexture_Parms
	{
		FVoxelColorTexture VoxelTexture;
		UTexture2D* Texture;
		UTexture2D* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Voxel|Voxel Texture" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Will create Texture if null, and set it\n\x09 * Returns Texture for convenience\n\x09 *\n\x09 * Texture will have the following config:\n\x09 * Pixel format: PF_B8G8R8A8\n\x09 * Compression settings: TC_VectorDisplacementmap\n\x09 * SRGB: false\n\x09 * Filter: TF_Bilinear\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Will create Texture if null, and set it\nReturns Texture for convenience\n\nTexture will have the following config:\nPixel format: PF_B8G8R8A8\nCompression settings: TC_VectorDisplacementmap\nSRGB: false\nFilter: TF_Bilinear" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_VoxelTexture;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Texture;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateOrUpdateTextureFromVoxelColorTexture_Statics::NewProp_VoxelTexture = { "VoxelTexture", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventCreateOrUpdateTextureFromVoxelColorTexture_Parms, VoxelTexture), Z_Construct_UScriptStruct_FVoxelColorTexture, METADATA_PARAMS(0, nullptr) }; // 40891338
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateOrUpdateTextureFromVoxelColorTexture_Statics::NewProp_Texture = { "Texture", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventCreateOrUpdateTextureFromVoxelColorTexture_Parms, Texture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateOrUpdateTextureFromVoxelColorTexture_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventCreateOrUpdateTextureFromVoxelColorTexture_Parms, ReturnValue), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateOrUpdateTextureFromVoxelColorTexture_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateOrUpdateTextureFromVoxelColorTexture_Statics::NewProp_VoxelTexture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateOrUpdateTextureFromVoxelColorTexture_Statics::NewProp_Texture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateOrUpdateTextureFromVoxelColorTexture_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateOrUpdateTextureFromVoxelColorTexture_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateOrUpdateTextureFromVoxelColorTexture_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelBlueprintLibrary, nullptr, "CreateOrUpdateTextureFromVoxelColorTexture", Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateOrUpdateTextureFromVoxelColorTexture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateOrUpdateTextureFromVoxelColorTexture_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateOrUpdateTextureFromVoxelColorTexture_Statics::VoxelBlueprintLibrary_eventCreateOrUpdateTextureFromVoxelColorTexture_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateOrUpdateTextureFromVoxelColorTexture_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateOrUpdateTextureFromVoxelColorTexture_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateOrUpdateTextureFromVoxelColorTexture_Statics::VoxelBlueprintLibrary_eventCreateOrUpdateTextureFromVoxelColorTexture_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateOrUpdateTextureFromVoxelColorTexture()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateOrUpdateTextureFromVoxelColorTexture_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelBlueprintLibrary::execCreateOrUpdateTextureFromVoxelColorTexture)
{
	P_GET_STRUCT(FVoxelColorTexture,Z_Param_VoxelTexture);
	P_GET_OBJECT_REF(UTexture2D,Z_Param_Out_Texture);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UTexture2D**)Z_Param__Result=UVoxelBlueprintLibrary::CreateOrUpdateTextureFromVoxelColorTexture(Z_Param_VoxelTexture,P_ARG_GC_BARRIER(Z_Param_Out_Texture));
	P_NATIVE_END;
}
// ********** End Class UVoxelBlueprintLibrary Function CreateOrUpdateTextureFromVoxelColorTexture *

// ********** Begin Class UVoxelBlueprintLibrary Function CreateOrUpdateTextureFromVoxelFloatTexture 
struct Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateOrUpdateTextureFromVoxelFloatTexture_Statics
{
	struct VoxelBlueprintLibrary_eventCreateOrUpdateTextureFromVoxelFloatTexture_Parms
	{
		FVoxelFloatTexture VoxelTexture;
		UTexture2D* Texture;
		UTexture2D* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Voxel|Voxel Texture" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Will create Texture if null, and set it\n\x09 * Returns Texture for convenience\n\x09 *\n\x09 * Texture will have the following config:\n\x09 * Pixel format: PF_R32_FLOAT\n\x09 * Compression settings: TC_HDR\n\x09 * SRGB: false\n\x09 * Filter: TF_Bilinear\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Will create Texture if null, and set it\nReturns Texture for convenience\n\nTexture will have the following config:\nPixel format: PF_R32_FLOAT\nCompression settings: TC_HDR\nSRGB: false\nFilter: TF_Bilinear" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_VoxelTexture;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Texture;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateOrUpdateTextureFromVoxelFloatTexture_Statics::NewProp_VoxelTexture = { "VoxelTexture", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventCreateOrUpdateTextureFromVoxelFloatTexture_Parms, VoxelTexture), Z_Construct_UScriptStruct_FVoxelFloatTexture, METADATA_PARAMS(0, nullptr) }; // 369089072
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateOrUpdateTextureFromVoxelFloatTexture_Statics::NewProp_Texture = { "Texture", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventCreateOrUpdateTextureFromVoxelFloatTexture_Parms, Texture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateOrUpdateTextureFromVoxelFloatTexture_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventCreateOrUpdateTextureFromVoxelFloatTexture_Parms, ReturnValue), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateOrUpdateTextureFromVoxelFloatTexture_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateOrUpdateTextureFromVoxelFloatTexture_Statics::NewProp_VoxelTexture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateOrUpdateTextureFromVoxelFloatTexture_Statics::NewProp_Texture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateOrUpdateTextureFromVoxelFloatTexture_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateOrUpdateTextureFromVoxelFloatTexture_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateOrUpdateTextureFromVoxelFloatTexture_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelBlueprintLibrary, nullptr, "CreateOrUpdateTextureFromVoxelFloatTexture", Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateOrUpdateTextureFromVoxelFloatTexture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateOrUpdateTextureFromVoxelFloatTexture_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateOrUpdateTextureFromVoxelFloatTexture_Statics::VoxelBlueprintLibrary_eventCreateOrUpdateTextureFromVoxelFloatTexture_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateOrUpdateTextureFromVoxelFloatTexture_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateOrUpdateTextureFromVoxelFloatTexture_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateOrUpdateTextureFromVoxelFloatTexture_Statics::VoxelBlueprintLibrary_eventCreateOrUpdateTextureFromVoxelFloatTexture_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateOrUpdateTextureFromVoxelFloatTexture()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateOrUpdateTextureFromVoxelFloatTexture_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelBlueprintLibrary::execCreateOrUpdateTextureFromVoxelFloatTexture)
{
	P_GET_STRUCT(FVoxelFloatTexture,Z_Param_VoxelTexture);
	P_GET_OBJECT_REF(UTexture2D,Z_Param_Out_Texture);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UTexture2D**)Z_Param__Result=UVoxelBlueprintLibrary::CreateOrUpdateTextureFromVoxelFloatTexture(Z_Param_VoxelTexture,P_ARG_GC_BARRIER(Z_Param_Out_Texture));
	P_NATIVE_END;
}
// ********** End Class UVoxelBlueprintLibrary Function CreateOrUpdateTextureFromVoxelFloatTexture *

// ********** Begin Class UVoxelBlueprintLibrary Function CreateSingleIndexPaintMaterial ***********
struct Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateSingleIndexPaintMaterial_Statics
{
	struct VoxelBlueprintLibrary_eventCreateSingleIndexPaintMaterial_Parms
	{
		FVoxelPaintMaterialSingleIndex SingleIndex;
		FVoxelPaintMaterial ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Voxel|Materials" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Create for single index\n" },
#endif
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Create for single index" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SingleIndex;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateSingleIndexPaintMaterial_Statics::NewProp_SingleIndex = { "SingleIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventCreateSingleIndexPaintMaterial_Parms, SingleIndex), Z_Construct_UScriptStruct_FVoxelPaintMaterialSingleIndex, METADATA_PARAMS(0, nullptr) }; // 2184783248
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateSingleIndexPaintMaterial_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventCreateSingleIndexPaintMaterial_Parms, ReturnValue), Z_Construct_UScriptStruct_FVoxelPaintMaterial, METADATA_PARAMS(0, nullptr) }; // 2783111154
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateSingleIndexPaintMaterial_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateSingleIndexPaintMaterial_Statics::NewProp_SingleIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateSingleIndexPaintMaterial_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateSingleIndexPaintMaterial_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateSingleIndexPaintMaterial_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelBlueprintLibrary, nullptr, "CreateSingleIndexPaintMaterial", Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateSingleIndexPaintMaterial_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateSingleIndexPaintMaterial_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateSingleIndexPaintMaterial_Statics::VoxelBlueprintLibrary_eventCreateSingleIndexPaintMaterial_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateSingleIndexPaintMaterial_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateSingleIndexPaintMaterial_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateSingleIndexPaintMaterial_Statics::VoxelBlueprintLibrary_eventCreateSingleIndexPaintMaterial_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateSingleIndexPaintMaterial()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateSingleIndexPaintMaterial_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelBlueprintLibrary::execCreateSingleIndexPaintMaterial)
{
	P_GET_STRUCT(FVoxelPaintMaterialSingleIndex,Z_Param_SingleIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVoxelPaintMaterial*)Z_Param__Result=UVoxelBlueprintLibrary::CreateSingleIndexPaintMaterial(Z_Param_SingleIndex);
	P_NATIVE_END;
}
// ********** End Class UVoxelBlueprintLibrary Function CreateSingleIndexPaintMaterial *************

// ********** Begin Class UVoxelBlueprintLibrary Function CreateTextureFromVoxelColorTexture *******
struct Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateTextureFromVoxelColorTexture_Statics
{
	struct VoxelBlueprintLibrary_eventCreateTextureFromVoxelColorTexture_Parms
	{
		FVoxelColorTexture VoxelTexture;
		UTexture2D* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Voxel|Voxel Texture" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Same as CreateOrUpdateTextureFromVoxelFloatTexture with nullptr in input\n\x09 *\n\x09 * Texture will have the following config:\n\x09 * Pixel format: PF_B8G8R8A8\n\x09 * Compression settings: TC_VectorDisplacementmap\n\x09 * SRGB: false\n\x09 * Filter: TF_Bilinear\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Same as CreateOrUpdateTextureFromVoxelFloatTexture with nullptr in input\n\nTexture will have the following config:\nPixel format: PF_B8G8R8A8\nCompression settings: TC_VectorDisplacementmap\nSRGB: false\nFilter: TF_Bilinear" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_VoxelTexture;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateTextureFromVoxelColorTexture_Statics::NewProp_VoxelTexture = { "VoxelTexture", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventCreateTextureFromVoxelColorTexture_Parms, VoxelTexture), Z_Construct_UScriptStruct_FVoxelColorTexture, METADATA_PARAMS(0, nullptr) }; // 40891338
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateTextureFromVoxelColorTexture_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventCreateTextureFromVoxelColorTexture_Parms, ReturnValue), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateTextureFromVoxelColorTexture_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateTextureFromVoxelColorTexture_Statics::NewProp_VoxelTexture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateTextureFromVoxelColorTexture_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateTextureFromVoxelColorTexture_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateTextureFromVoxelColorTexture_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelBlueprintLibrary, nullptr, "CreateTextureFromVoxelColorTexture", Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateTextureFromVoxelColorTexture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateTextureFromVoxelColorTexture_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateTextureFromVoxelColorTexture_Statics::VoxelBlueprintLibrary_eventCreateTextureFromVoxelColorTexture_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateTextureFromVoxelColorTexture_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateTextureFromVoxelColorTexture_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateTextureFromVoxelColorTexture_Statics::VoxelBlueprintLibrary_eventCreateTextureFromVoxelColorTexture_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateTextureFromVoxelColorTexture()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateTextureFromVoxelColorTexture_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelBlueprintLibrary::execCreateTextureFromVoxelColorTexture)
{
	P_GET_STRUCT(FVoxelColorTexture,Z_Param_VoxelTexture);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UTexture2D**)Z_Param__Result=UVoxelBlueprintLibrary::CreateTextureFromVoxelColorTexture(Z_Param_VoxelTexture);
	P_NATIVE_END;
}
// ********** End Class UVoxelBlueprintLibrary Function CreateTextureFromVoxelColorTexture *********

// ********** Begin Class UVoxelBlueprintLibrary Function CreateTextureFromVoxelFloatTexture *******
struct Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateTextureFromVoxelFloatTexture_Statics
{
	struct VoxelBlueprintLibrary_eventCreateTextureFromVoxelFloatTexture_Parms
	{
		FVoxelFloatTexture VoxelTexture;
		UTexture2D* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Voxel|Voxel Texture" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Same as CreateOrUpdateTextureFromVoxelFloatTexture with nullptr in input\n\x09 *\n\x09 * Texture will have the following config:\n\x09 * Pixel format: PF_R32_FLOAT\n\x09 * Compression settings: TC_HDR\n\x09 * SRGB: false\n\x09 * Filter: TF_Bilinear\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Same as CreateOrUpdateTextureFromVoxelFloatTexture with nullptr in input\n\nTexture will have the following config:\nPixel format: PF_R32_FLOAT\nCompression settings: TC_HDR\nSRGB: false\nFilter: TF_Bilinear" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_VoxelTexture;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateTextureFromVoxelFloatTexture_Statics::NewProp_VoxelTexture = { "VoxelTexture", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventCreateTextureFromVoxelFloatTexture_Parms, VoxelTexture), Z_Construct_UScriptStruct_FVoxelFloatTexture, METADATA_PARAMS(0, nullptr) }; // 369089072
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateTextureFromVoxelFloatTexture_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventCreateTextureFromVoxelFloatTexture_Parms, ReturnValue), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateTextureFromVoxelFloatTexture_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateTextureFromVoxelFloatTexture_Statics::NewProp_VoxelTexture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateTextureFromVoxelFloatTexture_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateTextureFromVoxelFloatTexture_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateTextureFromVoxelFloatTexture_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelBlueprintLibrary, nullptr, "CreateTextureFromVoxelFloatTexture", Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateTextureFromVoxelFloatTexture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateTextureFromVoxelFloatTexture_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateTextureFromVoxelFloatTexture_Statics::VoxelBlueprintLibrary_eventCreateTextureFromVoxelFloatTexture_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateTextureFromVoxelFloatTexture_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateTextureFromVoxelFloatTexture_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateTextureFromVoxelFloatTexture_Statics::VoxelBlueprintLibrary_eventCreateTextureFromVoxelFloatTexture_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateTextureFromVoxelFloatTexture()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateTextureFromVoxelFloatTexture_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelBlueprintLibrary::execCreateTextureFromVoxelFloatTexture)
{
	P_GET_STRUCT(FVoxelFloatTexture,Z_Param_VoxelTexture);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UTexture2D**)Z_Param__Result=UVoxelBlueprintLibrary::CreateTextureFromVoxelFloatTexture(Z_Param_VoxelTexture);
	P_NATIVE_END;
}
// ********** End Class UVoxelBlueprintLibrary Function CreateTextureFromVoxelFloatTexture *********

// ********** Begin Class UVoxelBlueprintLibrary Function CreateToolRendering **********************
struct Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateToolRendering_Statics
{
	struct VoxelBlueprintLibrary_eventCreateToolRendering_Parms
	{
		AVoxelWorld* World;
		FVoxelToolRenderingRef ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Voxel|Tool Rendering" },
		{ "DefaultToSelf", "World" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelBlueprintLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateToolRendering_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventCreateToolRendering_Parms, World), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateToolRendering_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventCreateToolRendering_Parms, ReturnValue), Z_Construct_UScriptStruct_FVoxelToolRenderingRef, METADATA_PARAMS(0, nullptr) }; // 1217300782
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateToolRendering_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateToolRendering_Statics::NewProp_World,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateToolRendering_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateToolRendering_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateToolRendering_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelBlueprintLibrary, nullptr, "CreateToolRendering", Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateToolRendering_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateToolRendering_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateToolRendering_Statics::VoxelBlueprintLibrary_eventCreateToolRendering_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateToolRendering_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateToolRendering_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateToolRendering_Statics::VoxelBlueprintLibrary_eventCreateToolRendering_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateToolRendering()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateToolRendering_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelBlueprintLibrary::execCreateToolRendering)
{
	P_GET_OBJECT(AVoxelWorld,Z_Param_World);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVoxelToolRenderingRef*)Z_Param__Result=UVoxelBlueprintLibrary::CreateToolRendering(Z_Param_World);
	P_NATIVE_END;
}
// ********** End Class UVoxelBlueprintLibrary Function CreateToolRendering ************************

// ********** Begin Class UVoxelBlueprintLibrary Function CreateUVPaintMaterial ********************
struct Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateUVPaintMaterial_Statics
{
	struct VoxelBlueprintLibrary_eventCreateUVPaintMaterial_Parms
	{
		FVoxelPaintMaterialUV UV;
		FVoxelPaintMaterial ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Voxel|Materials" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Create UV paint\n" },
#endif
		{ "DisplayName", "Create UV Paint Material" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Create UV paint" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_UV;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateUVPaintMaterial_Statics::NewProp_UV = { "UV", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventCreateUVPaintMaterial_Parms, UV), Z_Construct_UScriptStruct_FVoxelPaintMaterialUV, METADATA_PARAMS(0, nullptr) }; // 3161128940
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateUVPaintMaterial_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventCreateUVPaintMaterial_Parms, ReturnValue), Z_Construct_UScriptStruct_FVoxelPaintMaterial, METADATA_PARAMS(0, nullptr) }; // 2783111154
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateUVPaintMaterial_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateUVPaintMaterial_Statics::NewProp_UV,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateUVPaintMaterial_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateUVPaintMaterial_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateUVPaintMaterial_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelBlueprintLibrary, nullptr, "CreateUVPaintMaterial", Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateUVPaintMaterial_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateUVPaintMaterial_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateUVPaintMaterial_Statics::VoxelBlueprintLibrary_eventCreateUVPaintMaterial_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateUVPaintMaterial_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateUVPaintMaterial_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateUVPaintMaterial_Statics::VoxelBlueprintLibrary_eventCreateUVPaintMaterial_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateUVPaintMaterial()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateUVPaintMaterial_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelBlueprintLibrary::execCreateUVPaintMaterial)
{
	P_GET_STRUCT(FVoxelPaintMaterialUV,Z_Param_UV);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVoxelPaintMaterial*)Z_Param__Result=UVoxelBlueprintLibrary::CreateUVPaintMaterial(Z_Param_UV);
	P_NATIVE_END;
}
// ********** End Class UVoxelBlueprintLibrary Function CreateUVPaintMaterial **********************

// ********** Begin Class UVoxelBlueprintLibrary Function CreateVoxelColorTextureFromVoxelFloatTexture 
struct Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateVoxelColorTextureFromVoxelFloatTexture_Statics
{
	struct VoxelBlueprintLibrary_eventCreateVoxelColorTextureFromVoxelFloatTexture_Parms
	{
		FVoxelFloatTexture Texture;
		EVoxelRGBA Channel;
		bool bNormalize;
		FVoxelColorTexture ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Voxel|Voxel Texture" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Creates a voxel color texture by putting a float texture into a specific channel\n\x09 * @param bNormalize\x09If true, the float texture min value will be mapped to 0, and max value to 1\n\x09 */" },
#endif
		{ "CPP_Default_bNormalize", "true" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Creates a voxel color texture by putting a float texture into a specific channel\n@param bNormalize    If true, the float texture min value will be mapped to 0, and max value to 1" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Texture;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Channel_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Channel;
	static void NewProp_bNormalize_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bNormalize;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateVoxelColorTextureFromVoxelFloatTexture_Statics::NewProp_Texture = { "Texture", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventCreateVoxelColorTextureFromVoxelFloatTexture_Parms, Texture), Z_Construct_UScriptStruct_FVoxelFloatTexture, METADATA_PARAMS(0, nullptr) }; // 369089072
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateVoxelColorTextureFromVoxelFloatTexture_Statics::NewProp_Channel_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateVoxelColorTextureFromVoxelFloatTexture_Statics::NewProp_Channel = { "Channel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventCreateVoxelColorTextureFromVoxelFloatTexture_Parms, Channel), Z_Construct_UEnum_Voxel_EVoxelRGBA, METADATA_PARAMS(0, nullptr) }; // 2902135298
void Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateVoxelColorTextureFromVoxelFloatTexture_Statics::NewProp_bNormalize_SetBit(void* Obj)
{
	((VoxelBlueprintLibrary_eventCreateVoxelColorTextureFromVoxelFloatTexture_Parms*)Obj)->bNormalize = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateVoxelColorTextureFromVoxelFloatTexture_Statics::NewProp_bNormalize = { "bNormalize", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VoxelBlueprintLibrary_eventCreateVoxelColorTextureFromVoxelFloatTexture_Parms), &Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateVoxelColorTextureFromVoxelFloatTexture_Statics::NewProp_bNormalize_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateVoxelColorTextureFromVoxelFloatTexture_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventCreateVoxelColorTextureFromVoxelFloatTexture_Parms, ReturnValue), Z_Construct_UScriptStruct_FVoxelColorTexture, METADATA_PARAMS(0, nullptr) }; // 40891338
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateVoxelColorTextureFromVoxelFloatTexture_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateVoxelColorTextureFromVoxelFloatTexture_Statics::NewProp_Texture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateVoxelColorTextureFromVoxelFloatTexture_Statics::NewProp_Channel_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateVoxelColorTextureFromVoxelFloatTexture_Statics::NewProp_Channel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateVoxelColorTextureFromVoxelFloatTexture_Statics::NewProp_bNormalize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateVoxelColorTextureFromVoxelFloatTexture_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateVoxelColorTextureFromVoxelFloatTexture_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateVoxelColorTextureFromVoxelFloatTexture_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelBlueprintLibrary, nullptr, "CreateVoxelColorTextureFromVoxelFloatTexture", Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateVoxelColorTextureFromVoxelFloatTexture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateVoxelColorTextureFromVoxelFloatTexture_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateVoxelColorTextureFromVoxelFloatTexture_Statics::VoxelBlueprintLibrary_eventCreateVoxelColorTextureFromVoxelFloatTexture_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateVoxelColorTextureFromVoxelFloatTexture_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateVoxelColorTextureFromVoxelFloatTexture_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateVoxelColorTextureFromVoxelFloatTexture_Statics::VoxelBlueprintLibrary_eventCreateVoxelColorTextureFromVoxelFloatTexture_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateVoxelColorTextureFromVoxelFloatTexture()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateVoxelColorTextureFromVoxelFloatTexture_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelBlueprintLibrary::execCreateVoxelColorTextureFromVoxelFloatTexture)
{
	P_GET_STRUCT(FVoxelFloatTexture,Z_Param_Texture);
	P_GET_ENUM(EVoxelRGBA,Z_Param_Channel);
	P_GET_UBOOL(Z_Param_bNormalize);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVoxelColorTexture*)Z_Param__Result=UVoxelBlueprintLibrary::CreateVoxelColorTextureFromVoxelFloatTexture(Z_Param_Texture,EVoxelRGBA(Z_Param_Channel),Z_Param_bNormalize);
	P_NATIVE_END;
}
// ********** End Class UVoxelBlueprintLibrary Function CreateVoxelColorTextureFromVoxelFloatTexture 

// ********** Begin Class UVoxelBlueprintLibrary Function CreateVoxelFloatTextureFromTextureChannel 
struct Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateVoxelFloatTextureFromTextureChannel_Statics
{
	struct VoxelBlueprintLibrary_eventCreateVoxelFloatTextureFromTextureChannel_Parms
	{
		UTexture2D* Texture;
		EVoxelRGBA Channel;
		FVoxelFloatTexture ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Voxel|Voxel Texture" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Creates a voxel float texture from the color channel of a texture\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Creates a voxel float texture from the color channel of a texture" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Texture;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Channel_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Channel;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateVoxelFloatTextureFromTextureChannel_Statics::NewProp_Texture = { "Texture", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventCreateVoxelFloatTextureFromTextureChannel_Parms, Texture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateVoxelFloatTextureFromTextureChannel_Statics::NewProp_Channel_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateVoxelFloatTextureFromTextureChannel_Statics::NewProp_Channel = { "Channel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventCreateVoxelFloatTextureFromTextureChannel_Parms, Channel), Z_Construct_UEnum_Voxel_EVoxelRGBA, METADATA_PARAMS(0, nullptr) }; // 2902135298
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateVoxelFloatTextureFromTextureChannel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventCreateVoxelFloatTextureFromTextureChannel_Parms, ReturnValue), Z_Construct_UScriptStruct_FVoxelFloatTexture, METADATA_PARAMS(0, nullptr) }; // 369089072
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateVoxelFloatTextureFromTextureChannel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateVoxelFloatTextureFromTextureChannel_Statics::NewProp_Texture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateVoxelFloatTextureFromTextureChannel_Statics::NewProp_Channel_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateVoxelFloatTextureFromTextureChannel_Statics::NewProp_Channel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateVoxelFloatTextureFromTextureChannel_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateVoxelFloatTextureFromTextureChannel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateVoxelFloatTextureFromTextureChannel_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelBlueprintLibrary, nullptr, "CreateVoxelFloatTextureFromTextureChannel", Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateVoxelFloatTextureFromTextureChannel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateVoxelFloatTextureFromTextureChannel_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateVoxelFloatTextureFromTextureChannel_Statics::VoxelBlueprintLibrary_eventCreateVoxelFloatTextureFromTextureChannel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateVoxelFloatTextureFromTextureChannel_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateVoxelFloatTextureFromTextureChannel_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateVoxelFloatTextureFromTextureChannel_Statics::VoxelBlueprintLibrary_eventCreateVoxelFloatTextureFromTextureChannel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateVoxelFloatTextureFromTextureChannel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateVoxelFloatTextureFromTextureChannel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelBlueprintLibrary::execCreateVoxelFloatTextureFromTextureChannel)
{
	P_GET_OBJECT(UTexture2D,Z_Param_Texture);
	P_GET_ENUM(EVoxelRGBA,Z_Param_Channel);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVoxelFloatTexture*)Z_Param__Result=UVoxelBlueprintLibrary::CreateVoxelFloatTextureFromTextureChannel(Z_Param_Texture,EVoxelRGBA(Z_Param_Channel));
	P_NATIVE_END;
}
// ********** End Class UVoxelBlueprintLibrary Function CreateVoxelFloatTextureFromTextureChannel **

// ********** Begin Class UVoxelBlueprintLibrary Function CreateWorldVoxelThreadPool ***************
struct Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateWorldVoxelThreadPool_Statics
{
	struct VoxelBlueprintLibrary_eventCreateWorldVoxelThreadPool_Parms
	{
		UWorld* World;
		TMap<EVoxelTaskType,int32> PriorityCategoriesOverrides;
		TMap<EVoxelTaskType,int32> PriorityOffsetsOverrides;
		int32 NumberOfThreads;
		bool bConstantPriorities;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "PriorityCategoriesOverrides, PriorityOffsetsOverrides" },
		{ "Category", "Voxel|Threads" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Create the voxel thread pool for a specific world. Must not be already created.\n\x09 * @param\x09NumberOfThreads\x09\x09""At least 1\n\x09 * @param\x09""bConstantPriorities\x09If true won't recompute the tasks priorities once added. Useful if you have many tasks, but will give bad task scheduling when moving fast\n\x09 */" },
#endif
		{ "CPP_Default_bConstantPriorities", "false" },
		{ "CPP_Default_NumberOfThreads", "2" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Create the voxel thread pool for a specific world. Must not be already created.\n@param       NumberOfThreads         At least 1\n@param       bConstantPriorities     If true won't recompute the tasks priorities once added. Useful if you have many tasks, but will give bad task scheduling when moving fast" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PriorityCategoriesOverrides_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PriorityOffsetsOverrides_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PriorityCategoriesOverrides_ValueProp;
	static const UECodeGen_Private::FBytePropertyParams NewProp_PriorityCategoriesOverrides_Key_KeyProp_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_PriorityCategoriesOverrides_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_PriorityCategoriesOverrides;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PriorityOffsetsOverrides_ValueProp;
	static const UECodeGen_Private::FBytePropertyParams NewProp_PriorityOffsetsOverrides_Key_KeyProp_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_PriorityOffsetsOverrides_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_PriorityOffsetsOverrides;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumberOfThreads;
	static void NewProp_bConstantPriorities_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bConstantPriorities;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateWorldVoxelThreadPool_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventCreateWorldVoxelThreadPool_Parms, World), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateWorldVoxelThreadPool_Statics::NewProp_PriorityCategoriesOverrides_ValueProp = { "PriorityCategoriesOverrides", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateWorldVoxelThreadPool_Statics::NewProp_PriorityCategoriesOverrides_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateWorldVoxelThreadPool_Statics::NewProp_PriorityCategoriesOverrides_Key_KeyProp = { "PriorityCategoriesOverrides_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_Voxel_EVoxelTaskType, METADATA_PARAMS(0, nullptr) }; // 4243771042
const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateWorldVoxelThreadPool_Statics::NewProp_PriorityCategoriesOverrides = { "PriorityCategoriesOverrides", nullptr, (EPropertyFlags)0x0010040008000182, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventCreateWorldVoxelThreadPool_Parms, PriorityCategoriesOverrides), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PriorityCategoriesOverrides_MetaData), NewProp_PriorityCategoriesOverrides_MetaData) }; // 4243771042
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateWorldVoxelThreadPool_Statics::NewProp_PriorityOffsetsOverrides_ValueProp = { "PriorityOffsetsOverrides", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateWorldVoxelThreadPool_Statics::NewProp_PriorityOffsetsOverrides_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateWorldVoxelThreadPool_Statics::NewProp_PriorityOffsetsOverrides_Key_KeyProp = { "PriorityOffsetsOverrides_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_Voxel_EVoxelTaskType, METADATA_PARAMS(0, nullptr) }; // 4243771042
const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateWorldVoxelThreadPool_Statics::NewProp_PriorityOffsetsOverrides = { "PriorityOffsetsOverrides", nullptr, (EPropertyFlags)0x0010040008000182, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventCreateWorldVoxelThreadPool_Parms, PriorityOffsetsOverrides), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PriorityOffsetsOverrides_MetaData), NewProp_PriorityOffsetsOverrides_MetaData) }; // 4243771042
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateWorldVoxelThreadPool_Statics::NewProp_NumberOfThreads = { "NumberOfThreads", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventCreateWorldVoxelThreadPool_Parms, NumberOfThreads), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateWorldVoxelThreadPool_Statics::NewProp_bConstantPriorities_SetBit(void* Obj)
{
	((VoxelBlueprintLibrary_eventCreateWorldVoxelThreadPool_Parms*)Obj)->bConstantPriorities = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateWorldVoxelThreadPool_Statics::NewProp_bConstantPriorities = { "bConstantPriorities", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VoxelBlueprintLibrary_eventCreateWorldVoxelThreadPool_Parms), &Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateWorldVoxelThreadPool_Statics::NewProp_bConstantPriorities_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateWorldVoxelThreadPool_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateWorldVoxelThreadPool_Statics::NewProp_World,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateWorldVoxelThreadPool_Statics::NewProp_PriorityCategoriesOverrides_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateWorldVoxelThreadPool_Statics::NewProp_PriorityCategoriesOverrides_Key_KeyProp_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateWorldVoxelThreadPool_Statics::NewProp_PriorityCategoriesOverrides_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateWorldVoxelThreadPool_Statics::NewProp_PriorityCategoriesOverrides,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateWorldVoxelThreadPool_Statics::NewProp_PriorityOffsetsOverrides_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateWorldVoxelThreadPool_Statics::NewProp_PriorityOffsetsOverrides_Key_KeyProp_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateWorldVoxelThreadPool_Statics::NewProp_PriorityOffsetsOverrides_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateWorldVoxelThreadPool_Statics::NewProp_PriorityOffsetsOverrides,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateWorldVoxelThreadPool_Statics::NewProp_NumberOfThreads,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateWorldVoxelThreadPool_Statics::NewProp_bConstantPriorities,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateWorldVoxelThreadPool_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateWorldVoxelThreadPool_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelBlueprintLibrary, nullptr, "CreateWorldVoxelThreadPool", Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateWorldVoxelThreadPool_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateWorldVoxelThreadPool_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateWorldVoxelThreadPool_Statics::VoxelBlueprintLibrary_eventCreateWorldVoxelThreadPool_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateWorldVoxelThreadPool_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateWorldVoxelThreadPool_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateWorldVoxelThreadPool_Statics::VoxelBlueprintLibrary_eventCreateWorldVoxelThreadPool_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateWorldVoxelThreadPool()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateWorldVoxelThreadPool_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelBlueprintLibrary::execCreateWorldVoxelThreadPool)
{
	P_GET_OBJECT(UWorld,Z_Param_World);
	P_GET_TMAP_REF(EVoxelTaskType,int32,Z_Param_Out_PriorityCategoriesOverrides);
	P_GET_TMAP_REF(EVoxelTaskType,int32,Z_Param_Out_PriorityOffsetsOverrides);
	P_GET_PROPERTY(FIntProperty,Z_Param_NumberOfThreads);
	P_GET_UBOOL(Z_Param_bConstantPriorities);
	P_FINISH;
	P_NATIVE_BEGIN;
	UVoxelBlueprintLibrary::CreateWorldVoxelThreadPool(Z_Param_World,Z_Param_Out_PriorityCategoriesOverrides,Z_Param_Out_PriorityOffsetsOverrides,Z_Param_NumberOfThreads,Z_Param_bConstantPriorities);
	P_NATIVE_END;
}
// ********** End Class UVoxelBlueprintLibrary Function CreateWorldVoxelThreadPool *****************

// ********** Begin Class UVoxelBlueprintLibrary Function DestroyGlobalVoxelThreadPool *************
struct Z_Construct_UFunction_UVoxelBlueprintLibrary_DestroyGlobalVoxelThreadPool_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Voxel|Threads" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Destroy the global voxel thread pool\n" },
#endif
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Destroy the global voxel thread pool" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelBlueprintLibrary_DestroyGlobalVoxelThreadPool_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelBlueprintLibrary, nullptr, "DestroyGlobalVoxelThreadPool", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_DestroyGlobalVoxelThreadPool_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelBlueprintLibrary_DestroyGlobalVoxelThreadPool_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UVoxelBlueprintLibrary_DestroyGlobalVoxelThreadPool()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelBlueprintLibrary_DestroyGlobalVoxelThreadPool_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelBlueprintLibrary::execDestroyGlobalVoxelThreadPool)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	UVoxelBlueprintLibrary::DestroyGlobalVoxelThreadPool();
	P_NATIVE_END;
}
// ********** End Class UVoxelBlueprintLibrary Function DestroyGlobalVoxelThreadPool ***************

// ********** Begin Class UVoxelBlueprintLibrary Function DestroyToolRendering *********************
struct Z_Construct_UFunction_UVoxelBlueprintLibrary_DestroyToolRendering_Statics
{
	struct VoxelBlueprintLibrary_eventDestroyToolRendering_Parms
	{
		AVoxelWorld* World;
		FVoxelToolRenderingRef Ref;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Voxel|Tool Rendering" },
		{ "DefaultToSelf", "World" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelBlueprintLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Ref;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_DestroyToolRendering_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventDestroyToolRendering_Parms, World), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_DestroyToolRendering_Statics::NewProp_Ref = { "Ref", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventDestroyToolRendering_Parms, Ref), Z_Construct_UScriptStruct_FVoxelToolRenderingRef, METADATA_PARAMS(0, nullptr) }; // 1217300782
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelBlueprintLibrary_DestroyToolRendering_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_DestroyToolRendering_Statics::NewProp_World,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_DestroyToolRendering_Statics::NewProp_Ref,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_DestroyToolRendering_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelBlueprintLibrary_DestroyToolRendering_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelBlueprintLibrary, nullptr, "DestroyToolRendering", Z_Construct_UFunction_UVoxelBlueprintLibrary_DestroyToolRendering_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_DestroyToolRendering_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVoxelBlueprintLibrary_DestroyToolRendering_Statics::VoxelBlueprintLibrary_eventDestroyToolRendering_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_DestroyToolRendering_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelBlueprintLibrary_DestroyToolRendering_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVoxelBlueprintLibrary_DestroyToolRendering_Statics::VoxelBlueprintLibrary_eventDestroyToolRendering_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVoxelBlueprintLibrary_DestroyToolRendering()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelBlueprintLibrary_DestroyToolRendering_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelBlueprintLibrary::execDestroyToolRendering)
{
	P_GET_OBJECT(AVoxelWorld,Z_Param_World);
	P_GET_STRUCT(FVoxelToolRenderingRef,Z_Param_Ref);
	P_FINISH;
	P_NATIVE_BEGIN;
	UVoxelBlueprintLibrary::DestroyToolRendering(Z_Param_World,Z_Param_Ref);
	P_NATIVE_END;
}
// ********** End Class UVoxelBlueprintLibrary Function DestroyToolRendering ***********************

// ********** Begin Class UVoxelBlueprintLibrary Function DestroyWorldVoxelThreadPool **************
struct Z_Construct_UFunction_UVoxelBlueprintLibrary_DestroyWorldVoxelThreadPool_Statics
{
	struct VoxelBlueprintLibrary_eventDestroyWorldVoxelThreadPool_Parms
	{
		UWorld* World;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Voxel|Threads" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Destroy the world voxel thread pool\n" },
#endif
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Destroy the world voxel thread pool" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_DestroyWorldVoxelThreadPool_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventDestroyWorldVoxelThreadPool_Parms, World), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelBlueprintLibrary_DestroyWorldVoxelThreadPool_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_DestroyWorldVoxelThreadPool_Statics::NewProp_World,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_DestroyWorldVoxelThreadPool_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelBlueprintLibrary_DestroyWorldVoxelThreadPool_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelBlueprintLibrary, nullptr, "DestroyWorldVoxelThreadPool", Z_Construct_UFunction_UVoxelBlueprintLibrary_DestroyWorldVoxelThreadPool_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_DestroyWorldVoxelThreadPool_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVoxelBlueprintLibrary_DestroyWorldVoxelThreadPool_Statics::VoxelBlueprintLibrary_eventDestroyWorldVoxelThreadPool_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_DestroyWorldVoxelThreadPool_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelBlueprintLibrary_DestroyWorldVoxelThreadPool_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVoxelBlueprintLibrary_DestroyWorldVoxelThreadPool_Statics::VoxelBlueprintLibrary_eventDestroyWorldVoxelThreadPool_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVoxelBlueprintLibrary_DestroyWorldVoxelThreadPool()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelBlueprintLibrary_DestroyWorldVoxelThreadPool_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelBlueprintLibrary::execDestroyWorldVoxelThreadPool)
{
	P_GET_OBJECT(UWorld,Z_Param_World);
	P_FINISH;
	P_NATIVE_BEGIN;
	UVoxelBlueprintLibrary::DestroyWorldVoxelThreadPool(Z_Param_World);
	P_NATIVE_END;
}
// ********** End Class UVoxelBlueprintLibrary Function DestroyWorldVoxelThreadPool ****************

// ********** Begin Class UVoxelBlueprintLibrary Function Divide_IntVectorInt **********************
struct Z_Construct_UFunction_UVoxelBlueprintLibrary_Divide_IntVectorInt_Statics
{
	struct VoxelBlueprintLibrary_eventDivide_IntVectorInt_Parms
	{
		FIntVector Left;
		int32 Right;
		FIntVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Math|IntVector" },
		{ "CompactNodeTitle", "/" },
		{ "DisplayName", "IntVector / int" },
		{ "Keywords", "/ divide" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelBlueprintLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Left;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Right;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_Divide_IntVectorInt_Statics::NewProp_Left = { "Left", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventDivide_IntVectorInt_Parms, Left), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_Divide_IntVectorInt_Statics::NewProp_Right = { "Right", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventDivide_IntVectorInt_Parms, Right), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_Divide_IntVectorInt_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventDivide_IntVectorInt_Parms, ReturnValue), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelBlueprintLibrary_Divide_IntVectorInt_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_Divide_IntVectorInt_Statics::NewProp_Left,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_Divide_IntVectorInt_Statics::NewProp_Right,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_Divide_IntVectorInt_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_Divide_IntVectorInt_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelBlueprintLibrary_Divide_IntVectorInt_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelBlueprintLibrary, nullptr, "Divide_IntVectorInt", Z_Construct_UFunction_UVoxelBlueprintLibrary_Divide_IntVectorInt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_Divide_IntVectorInt_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVoxelBlueprintLibrary_Divide_IntVectorInt_Statics::VoxelBlueprintLibrary_eventDivide_IntVectorInt_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_Divide_IntVectorInt_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelBlueprintLibrary_Divide_IntVectorInt_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVoxelBlueprintLibrary_Divide_IntVectorInt_Statics::VoxelBlueprintLibrary_eventDivide_IntVectorInt_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVoxelBlueprintLibrary_Divide_IntVectorInt()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelBlueprintLibrary_Divide_IntVectorInt_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelBlueprintLibrary::execDivide_IntVectorInt)
{
	P_GET_STRUCT(FIntVector,Z_Param_Left);
	P_GET_PROPERTY(FIntProperty,Z_Param_Right);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FIntVector*)Z_Param__Result=UVoxelBlueprintLibrary::Divide_IntVectorInt(Z_Param_Left,Z_Param_Right);
	P_NATIVE_END;
}
// ********** End Class UVoxelBlueprintLibrary Function Divide_IntVectorInt ************************

// ********** Begin Class UVoxelBlueprintLibrary Function GetAllVoxelWorldsContainingPosition ******
struct Z_Construct_UFunction_UVoxelBlueprintLibrary_GetAllVoxelWorldsContainingPosition_Statics
{
	struct VoxelBlueprintLibrary_eventGetAllVoxelWorldsContainingPosition_Parms
	{
		UObject* WorldContextObject;
		FVector Position;
		TArray<AVoxelWorld*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Voxel|Helpers" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Iterate all voxel worlds in the scene, and return all the ones that contains Position\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Iterate all voxel worlds in the scene, and return all the ones that contains Position" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Position;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_GetAllVoxelWorldsContainingPosition_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventGetAllVoxelWorldsContainingPosition_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_GetAllVoxelWorldsContainingPosition_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventGetAllVoxelWorldsContainingPosition_Parms, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_GetAllVoxelWorldsContainingPosition_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_GetAllVoxelWorldsContainingPosition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventGetAllVoxelWorldsContainingPosition_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelBlueprintLibrary_GetAllVoxelWorldsContainingPosition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_GetAllVoxelWorldsContainingPosition_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_GetAllVoxelWorldsContainingPosition_Statics::NewProp_Position,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_GetAllVoxelWorldsContainingPosition_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_GetAllVoxelWorldsContainingPosition_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_GetAllVoxelWorldsContainingPosition_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelBlueprintLibrary_GetAllVoxelWorldsContainingPosition_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelBlueprintLibrary, nullptr, "GetAllVoxelWorldsContainingPosition", Z_Construct_UFunction_UVoxelBlueprintLibrary_GetAllVoxelWorldsContainingPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_GetAllVoxelWorldsContainingPosition_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVoxelBlueprintLibrary_GetAllVoxelWorldsContainingPosition_Statics::VoxelBlueprintLibrary_eventGetAllVoxelWorldsContainingPosition_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_GetAllVoxelWorldsContainingPosition_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelBlueprintLibrary_GetAllVoxelWorldsContainingPosition_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVoxelBlueprintLibrary_GetAllVoxelWorldsContainingPosition_Statics::VoxelBlueprintLibrary_eventGetAllVoxelWorldsContainingPosition_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVoxelBlueprintLibrary_GetAllVoxelWorldsContainingPosition()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelBlueprintLibrary_GetAllVoxelWorldsContainingPosition_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelBlueprintLibrary::execGetAllVoxelWorldsContainingPosition)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_STRUCT(FVector,Z_Param_Position);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<AVoxelWorld*>*)Z_Param__Result=UVoxelBlueprintLibrary::GetAllVoxelWorldsContainingPosition(Z_Param_WorldContextObject,Z_Param_Position);
	P_NATIVE_END;
}
// ********** End Class UVoxelBlueprintLibrary Function GetAllVoxelWorldsContainingPosition ********

// ********** Begin Class UVoxelBlueprintLibrary Function GetAllVoxelWorldsOverlappingActor ********
struct Z_Construct_UFunction_UVoxelBlueprintLibrary_GetAllVoxelWorldsOverlappingActor_Statics
{
	struct VoxelBlueprintLibrary_eventGetAllVoxelWorldsOverlappingActor_Parms
	{
		AActor* Actor;
		TArray<AVoxelWorld*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Voxel|Helpers" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Iterate all voxel worlds in the scene, and return all the ones that overlaps the actor bounding box\n\x09 */" },
#endif
		{ "DefaultToSelf", "Actor" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Iterate all voxel worlds in the scene, and return all the ones that overlaps the actor bounding box" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_GetAllVoxelWorldsOverlappingActor_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventGetAllVoxelWorldsOverlappingActor_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_GetAllVoxelWorldsOverlappingActor_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_GetAllVoxelWorldsOverlappingActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventGetAllVoxelWorldsOverlappingActor_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelBlueprintLibrary_GetAllVoxelWorldsOverlappingActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_GetAllVoxelWorldsOverlappingActor_Statics::NewProp_Actor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_GetAllVoxelWorldsOverlappingActor_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_GetAllVoxelWorldsOverlappingActor_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_GetAllVoxelWorldsOverlappingActor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelBlueprintLibrary_GetAllVoxelWorldsOverlappingActor_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelBlueprintLibrary, nullptr, "GetAllVoxelWorldsOverlappingActor", Z_Construct_UFunction_UVoxelBlueprintLibrary_GetAllVoxelWorldsOverlappingActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_GetAllVoxelWorldsOverlappingActor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVoxelBlueprintLibrary_GetAllVoxelWorldsOverlappingActor_Statics::VoxelBlueprintLibrary_eventGetAllVoxelWorldsOverlappingActor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_GetAllVoxelWorldsOverlappingActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelBlueprintLibrary_GetAllVoxelWorldsOverlappingActor_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVoxelBlueprintLibrary_GetAllVoxelWorldsOverlappingActor_Statics::VoxelBlueprintLibrary_eventGetAllVoxelWorldsOverlappingActor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVoxelBlueprintLibrary_GetAllVoxelWorldsOverlappingActor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelBlueprintLibrary_GetAllVoxelWorldsOverlappingActor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelBlueprintLibrary::execGetAllVoxelWorldsOverlappingActor)
{
	P_GET_OBJECT(AActor,Z_Param_Actor);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<AVoxelWorld*>*)Z_Param__Result=UVoxelBlueprintLibrary::GetAllVoxelWorldsOverlappingActor(Z_Param_Actor);
	P_NATIVE_END;
}
// ********** End Class UVoxelBlueprintLibrary Function GetAllVoxelWorldsOverlappingActor **********

// ********** Begin Class UVoxelBlueprintLibrary Function GetAllVoxelWorldsOverlappingBox **********
struct Z_Construct_UFunction_UVoxelBlueprintLibrary_GetAllVoxelWorldsOverlappingBox_Statics
{
	struct VoxelBlueprintLibrary_eventGetAllVoxelWorldsOverlappingBox_Parms
	{
		UObject* WorldContextObject;
		FBox Box;
		TArray<AVoxelWorld*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Voxel|Helpers" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Iterate all voxel worlds in the scene, and return all the ones that overlaps Box\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Iterate all voxel worlds in the scene, and return all the ones that overlaps Box" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Box;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_GetAllVoxelWorldsOverlappingBox_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventGetAllVoxelWorldsOverlappingBox_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_GetAllVoxelWorldsOverlappingBox_Statics::NewProp_Box = { "Box", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventGetAllVoxelWorldsOverlappingBox_Parms, Box), Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_GetAllVoxelWorldsOverlappingBox_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_GetAllVoxelWorldsOverlappingBox_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventGetAllVoxelWorldsOverlappingBox_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelBlueprintLibrary_GetAllVoxelWorldsOverlappingBox_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_GetAllVoxelWorldsOverlappingBox_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_GetAllVoxelWorldsOverlappingBox_Statics::NewProp_Box,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_GetAllVoxelWorldsOverlappingBox_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_GetAllVoxelWorldsOverlappingBox_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_GetAllVoxelWorldsOverlappingBox_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelBlueprintLibrary_GetAllVoxelWorldsOverlappingBox_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelBlueprintLibrary, nullptr, "GetAllVoxelWorldsOverlappingBox", Z_Construct_UFunction_UVoxelBlueprintLibrary_GetAllVoxelWorldsOverlappingBox_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_GetAllVoxelWorldsOverlappingBox_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVoxelBlueprintLibrary_GetAllVoxelWorldsOverlappingBox_Statics::VoxelBlueprintLibrary_eventGetAllVoxelWorldsOverlappingBox_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_GetAllVoxelWorldsOverlappingBox_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelBlueprintLibrary_GetAllVoxelWorldsOverlappingBox_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVoxelBlueprintLibrary_GetAllVoxelWorldsOverlappingBox_Statics::VoxelBlueprintLibrary_eventGetAllVoxelWorldsOverlappingBox_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVoxelBlueprintLibrary_GetAllVoxelWorldsOverlappingBox()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelBlueprintLibrary_GetAllVoxelWorldsOverlappingBox_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelBlueprintLibrary::execGetAllVoxelWorldsOverlappingBox)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_STRUCT(FBox,Z_Param_Box);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<AVoxelWorld*>*)Z_Param__Result=UVoxelBlueprintLibrary::GetAllVoxelWorldsOverlappingBox(Z_Param_WorldContextObject,Z_Param_Box);
	P_NATIVE_END;
}
// ********** End Class UVoxelBlueprintLibrary Function GetAllVoxelWorldsOverlappingBox ************

// ********** Begin Class UVoxelBlueprintLibrary Function GetBounds ********************************
struct Z_Construct_UFunction_UVoxelBlueprintLibrary_GetBounds_Statics
{
	struct VoxelBlueprintLibrary_eventGetBounds_Parms
	{
		AVoxelWorld* World;
		FVoxelIntBox ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Voxel|Data" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Bounds of this world\n" },
#endif
		{ "DefaultToSelf", "World" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Bounds of this world" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_GetBounds_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventGetBounds_Parms, World), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_GetBounds_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventGetBounds_Parms, ReturnValue), Z_Construct_UScriptStruct_FVoxelIntBox, METADATA_PARAMS(0, nullptr) }; // 3520536583
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelBlueprintLibrary_GetBounds_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_GetBounds_Statics::NewProp_World,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_GetBounds_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_GetBounds_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelBlueprintLibrary_GetBounds_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelBlueprintLibrary, nullptr, "GetBounds", Z_Construct_UFunction_UVoxelBlueprintLibrary_GetBounds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_GetBounds_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVoxelBlueprintLibrary_GetBounds_Statics::VoxelBlueprintLibrary_eventGetBounds_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_GetBounds_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelBlueprintLibrary_GetBounds_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVoxelBlueprintLibrary_GetBounds_Statics::VoxelBlueprintLibrary_eventGetBounds_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVoxelBlueprintLibrary_GetBounds()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelBlueprintLibrary_GetBounds_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelBlueprintLibrary::execGetBounds)
{
	P_GET_OBJECT(AVoxelWorld,Z_Param_World);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVoxelIntBox*)Z_Param__Result=UVoxelBlueprintLibrary::GetBounds(Z_Param_World);
	P_NATIVE_END;
}
// ********** End Class UVoxelBlueprintLibrary Function GetBounds **********************************

// ********** Begin Class UVoxelBlueprintLibrary Function GetColor *********************************
struct Z_Construct_UFunction_UVoxelBlueprintLibrary_GetColor_Statics
{
	struct VoxelBlueprintLibrary_eventGetColor_Parms
	{
		FVoxelMaterial Material;
		FLinearColor ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Voxel|Materials" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelBlueprintLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Material;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_GetColor_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventGetColor_Parms, Material), Z_Construct_UScriptStruct_FVoxelMaterial, METADATA_PARAMS(0, nullptr) }; // 3766892224
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_GetColor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventGetColor_Parms, ReturnValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelBlueprintLibrary_GetColor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_GetColor_Statics::NewProp_Material,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_GetColor_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_GetColor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelBlueprintLibrary_GetColor_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelBlueprintLibrary, nullptr, "GetColor", Z_Construct_UFunction_UVoxelBlueprintLibrary_GetColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_GetColor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVoxelBlueprintLibrary_GetColor_Statics::VoxelBlueprintLibrary_eventGetColor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_GetColor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelBlueprintLibrary_GetColor_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVoxelBlueprintLibrary_GetColor_Statics::VoxelBlueprintLibrary_eventGetColor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVoxelBlueprintLibrary_GetColor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelBlueprintLibrary_GetColor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelBlueprintLibrary::execGetColor)
{
	P_GET_STRUCT(FVoxelMaterial,Z_Param_Material);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FLinearColor*)Z_Param__Result=UVoxelBlueprintLibrary::GetColor(Z_Param_Material);
	P_NATIVE_END;
}
// ********** End Class UVoxelBlueprintLibrary Function GetColor ***********************************

// ********** Begin Class UVoxelBlueprintLibrary Function GetEstimatedCollisionsMemoryUsageInMB ****
struct Z_Construct_UFunction_UVoxelBlueprintLibrary_GetEstimatedCollisionsMemoryUsageInMB_Statics
{
	struct VoxelBlueprintLibrary_eventGetEstimatedCollisionsMemoryUsageInMB_Parms
	{
		AVoxelWorld* World;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Voxel|Memory" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Returns the memory used by positions and indices buffers in this voxel world\n// Should give a rough estimate of how much memory is used for physics\n" },
#endif
		{ "DefaultToSelf", "World" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the memory used by positions and indices buffers in this voxel world\nShould give a rough estimate of how much memory is used for physics" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_GetEstimatedCollisionsMemoryUsageInMB_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventGetEstimatedCollisionsMemoryUsageInMB_Parms, World), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_GetEstimatedCollisionsMemoryUsageInMB_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventGetEstimatedCollisionsMemoryUsageInMB_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelBlueprintLibrary_GetEstimatedCollisionsMemoryUsageInMB_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_GetEstimatedCollisionsMemoryUsageInMB_Statics::NewProp_World,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_GetEstimatedCollisionsMemoryUsageInMB_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_GetEstimatedCollisionsMemoryUsageInMB_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelBlueprintLibrary_GetEstimatedCollisionsMemoryUsageInMB_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelBlueprintLibrary, nullptr, "GetEstimatedCollisionsMemoryUsageInMB", Z_Construct_UFunction_UVoxelBlueprintLibrary_GetEstimatedCollisionsMemoryUsageInMB_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_GetEstimatedCollisionsMemoryUsageInMB_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVoxelBlueprintLibrary_GetEstimatedCollisionsMemoryUsageInMB_Statics::VoxelBlueprintLibrary_eventGetEstimatedCollisionsMemoryUsageInMB_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_GetEstimatedCollisionsMemoryUsageInMB_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelBlueprintLibrary_GetEstimatedCollisionsMemoryUsageInMB_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVoxelBlueprintLibrary_GetEstimatedCollisionsMemoryUsageInMB_Statics::VoxelBlueprintLibrary_eventGetEstimatedCollisionsMemoryUsageInMB_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVoxelBlueprintLibrary_GetEstimatedCollisionsMemoryUsageInMB()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelBlueprintLibrary_GetEstimatedCollisionsMemoryUsageInMB_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelBlueprintLibrary::execGetEstimatedCollisionsMemoryUsageInMB)
{
	P_GET_OBJECT(AVoxelWorld,Z_Param_World);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=UVoxelBlueprintLibrary::GetEstimatedCollisionsMemoryUsageInMB(Z_Param_World);
	P_NATIVE_END;
}
// ********** End Class UVoxelBlueprintLibrary Function GetEstimatedCollisionsMemoryUsageInMB ******

// ********** Begin Class UVoxelBlueprintLibrary Function GetFloatOutput ***************************
struct Z_Construct_UFunction_UVoxelBlueprintLibrary_GetFloatOutput_Statics
{
	struct VoxelBlueprintLibrary_eventGetFloatOutput_Parms
	{
		AVoxelWorld* World;
		FName Name;
		float X;
		float Y;
		float Z;
		float DefaultValue;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Voxel|Data" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Get a custom float output value\n" },
#endif
		{ "DefaultToSelf", "World" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get a custom float output value" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_X;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Y;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Z;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DefaultValue;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_GetFloatOutput_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventGetFloatOutput_Parms, World), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_GetFloatOutput_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventGetFloatOutput_Parms, Name), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_GetFloatOutput_Statics::NewProp_X = { "X", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventGetFloatOutput_Parms, X), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_GetFloatOutput_Statics::NewProp_Y = { "Y", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventGetFloatOutput_Parms, Y), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_GetFloatOutput_Statics::NewProp_Z = { "Z", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventGetFloatOutput_Parms, Z), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_GetFloatOutput_Statics::NewProp_DefaultValue = { "DefaultValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventGetFloatOutput_Parms, DefaultValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_GetFloatOutput_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventGetFloatOutput_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelBlueprintLibrary_GetFloatOutput_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_GetFloatOutput_Statics::NewProp_World,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_GetFloatOutput_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_GetFloatOutput_Statics::NewProp_X,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_GetFloatOutput_Statics::NewProp_Y,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_GetFloatOutput_Statics::NewProp_Z,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_GetFloatOutput_Statics::NewProp_DefaultValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_GetFloatOutput_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_GetFloatOutput_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelBlueprintLibrary_GetFloatOutput_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelBlueprintLibrary, nullptr, "GetFloatOutput", Z_Construct_UFunction_UVoxelBlueprintLibrary_GetFloatOutput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_GetFloatOutput_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVoxelBlueprintLibrary_GetFloatOutput_Statics::VoxelBlueprintLibrary_eventGetFloatOutput_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_GetFloatOutput_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelBlueprintLibrary_GetFloatOutput_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVoxelBlueprintLibrary_GetFloatOutput_Statics::VoxelBlueprintLibrary_eventGetFloatOutput_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVoxelBlueprintLibrary_GetFloatOutput()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelBlueprintLibrary_GetFloatOutput_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelBlueprintLibrary::execGetFloatOutput)
{
	P_GET_OBJECT(AVoxelWorld,Z_Param_World);
	P_GET_PROPERTY(FNameProperty,Z_Param_Name);
	P_GET_PROPERTY(FFloatProperty,Z_Param_X);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Y);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Z);
	P_GET_PROPERTY(FFloatProperty,Z_Param_DefaultValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=UVoxelBlueprintLibrary::GetFloatOutput(Z_Param_World,Z_Param_Name,Z_Param_X,Z_Param_Y,Z_Param_Z,Z_Param_DefaultValue);
	P_NATIVE_END;
}
// ********** End Class UVoxelBlueprintLibrary Function GetFloatOutput *****************************

// ********** Begin Class UVoxelBlueprintLibrary Function GetHistoryPosition ***********************
struct Z_Construct_UFunction_UVoxelBlueprintLibrary_GetHistoryPosition_Statics
{
	struct VoxelBlueprintLibrary_eventGetHistoryPosition_Parms
	{
		AVoxelWorld* World;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Voxel|UndoRedo" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Get the current history position\n" },
#endif
		{ "DefaultToSelf", "World" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get the current history position" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_GetHistoryPosition_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventGetHistoryPosition_Parms, World), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_GetHistoryPosition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventGetHistoryPosition_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelBlueprintLibrary_GetHistoryPosition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_GetHistoryPosition_Statics::NewProp_World,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_GetHistoryPosition_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_GetHistoryPosition_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelBlueprintLibrary_GetHistoryPosition_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelBlueprintLibrary, nullptr, "GetHistoryPosition", Z_Construct_UFunction_UVoxelBlueprintLibrary_GetHistoryPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_GetHistoryPosition_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVoxelBlueprintLibrary_GetHistoryPosition_Statics::VoxelBlueprintLibrary_eventGetHistoryPosition_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_GetHistoryPosition_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelBlueprintLibrary_GetHistoryPosition_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVoxelBlueprintLibrary_GetHistoryPosition_Statics::VoxelBlueprintLibrary_eventGetHistoryPosition_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVoxelBlueprintLibrary_GetHistoryPosition()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelBlueprintLibrary_GetHistoryPosition_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelBlueprintLibrary::execGetHistoryPosition)
{
	P_GET_OBJECT(AVoxelWorld,Z_Param_World);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=UVoxelBlueprintLibrary::GetHistoryPosition(Z_Param_World);
	P_NATIVE_END;
}
// ********** End Class UVoxelBlueprintLibrary Function GetHistoryPosition *************************

// ********** Begin Class UVoxelBlueprintLibrary Function GetIntOutput *****************************
struct Z_Construct_UFunction_UVoxelBlueprintLibrary_GetIntOutput_Statics
{
	struct VoxelBlueprintLibrary_eventGetIntOutput_Parms
	{
		AVoxelWorld* World;
		FName Name;
		float X;
		float Y;
		float Z;
		int32 DefaultValue;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Voxel|Data" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Get a custom int32 output value\n" },
#endif
		{ "DefaultToSelf", "World" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get a custom int32 output value" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_X;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Y;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Z;
	static const UECodeGen_Private::FIntPropertyParams NewProp_DefaultValue;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_GetIntOutput_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventGetIntOutput_Parms, World), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_GetIntOutput_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventGetIntOutput_Parms, Name), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_GetIntOutput_Statics::NewProp_X = { "X", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventGetIntOutput_Parms, X), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_GetIntOutput_Statics::NewProp_Y = { "Y", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventGetIntOutput_Parms, Y), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_GetIntOutput_Statics::NewProp_Z = { "Z", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventGetIntOutput_Parms, Z), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_GetIntOutput_Statics::NewProp_DefaultValue = { "DefaultValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventGetIntOutput_Parms, DefaultValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_GetIntOutput_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventGetIntOutput_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelBlueprintLibrary_GetIntOutput_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_GetIntOutput_Statics::NewProp_World,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_GetIntOutput_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_GetIntOutput_Statics::NewProp_X,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_GetIntOutput_Statics::NewProp_Y,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_GetIntOutput_Statics::NewProp_Z,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_GetIntOutput_Statics::NewProp_DefaultValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_GetIntOutput_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_GetIntOutput_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelBlueprintLibrary_GetIntOutput_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelBlueprintLibrary, nullptr, "GetIntOutput", Z_Construct_UFunction_UVoxelBlueprintLibrary_GetIntOutput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_GetIntOutput_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVoxelBlueprintLibrary_GetIntOutput_Statics::VoxelBlueprintLibrary_eventGetIntOutput_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_GetIntOutput_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelBlueprintLibrary_GetIntOutput_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVoxelBlueprintLibrary_GetIntOutput_Statics::VoxelBlueprintLibrary_eventGetIntOutput_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVoxelBlueprintLibrary_GetIntOutput()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelBlueprintLibrary_GetIntOutput_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelBlueprintLibrary::execGetIntOutput)
{
	P_GET_OBJECT(AVoxelWorld,Z_Param_World);
	P_GET_PROPERTY(FNameProperty,Z_Param_Name);
	P_GET_PROPERTY(FFloatProperty,Z_Param_X);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Y);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Z);
	P_GET_PROPERTY(FIntProperty,Z_Param_DefaultValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=UVoxelBlueprintLibrary::GetIntOutput(Z_Param_World,Z_Param_Name,Z_Param_X,Z_Param_Y,Z_Param_Z,Z_Param_DefaultValue);
	P_NATIVE_END;
}
// ********** End Class UVoxelBlueprintLibrary Function GetIntOutput *******************************

// ********** Begin Class UVoxelBlueprintLibrary Function GetMax_Intvector *************************
struct Z_Construct_UFunction_UVoxelBlueprintLibrary_GetMax_Intvector_Statics
{
	struct VoxelBlueprintLibrary_eventGetMax_Intvector_Parms
	{
		FIntVector Vector;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Math|IntVector" },
		{ "DisplayName", "Get Max" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelBlueprintLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Vector;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_GetMax_Intvector_Statics::NewProp_Vector = { "Vector", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventGetMax_Intvector_Parms, Vector), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_GetMax_Intvector_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventGetMax_Intvector_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelBlueprintLibrary_GetMax_Intvector_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_GetMax_Intvector_Statics::NewProp_Vector,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_GetMax_Intvector_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_GetMax_Intvector_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelBlueprintLibrary_GetMax_Intvector_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelBlueprintLibrary, nullptr, "GetMax_Intvector", Z_Construct_UFunction_UVoxelBlueprintLibrary_GetMax_Intvector_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_GetMax_Intvector_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVoxelBlueprintLibrary_GetMax_Intvector_Statics::VoxelBlueprintLibrary_eventGetMax_Intvector_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_GetMax_Intvector_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelBlueprintLibrary_GetMax_Intvector_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVoxelBlueprintLibrary_GetMax_Intvector_Statics::VoxelBlueprintLibrary_eventGetMax_Intvector_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVoxelBlueprintLibrary_GetMax_Intvector()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelBlueprintLibrary_GetMax_Intvector_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelBlueprintLibrary::execGetMax_Intvector)
{
	P_GET_STRUCT(FIntVector,Z_Param_Vector);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=UVoxelBlueprintLibrary::GetMax_Intvector(Z_Param_Vector);
	P_NATIVE_END;
}
// ********** End Class UVoxelBlueprintLibrary Function GetMax_Intvector ***************************

// ********** Begin Class UVoxelBlueprintLibrary Function GetMemoryUsageInMB ***********************
struct Z_Construct_UFunction_UVoxelBlueprintLibrary_GetMemoryUsageInMB_Statics
{
	struct VoxelBlueprintLibrary_eventGetMemoryUsageInMB_Parms
	{
		EVoxelMemoryUsageType Type;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Voxel|Memory" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Get the current memory usage of different parts of the plugin\n" },
#endif
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get the current memory usage of different parts of the plugin" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_GetMemoryUsageInMB_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_GetMemoryUsageInMB_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventGetMemoryUsageInMB_Parms, Type), Z_Construct_UEnum_Voxel_EVoxelMemoryUsageType, METADATA_PARAMS(0, nullptr) }; // 281796426
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_GetMemoryUsageInMB_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventGetMemoryUsageInMB_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelBlueprintLibrary_GetMemoryUsageInMB_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_GetMemoryUsageInMB_Statics::NewProp_Type_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_GetMemoryUsageInMB_Statics::NewProp_Type,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_GetMemoryUsageInMB_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_GetMemoryUsageInMB_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelBlueprintLibrary_GetMemoryUsageInMB_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelBlueprintLibrary, nullptr, "GetMemoryUsageInMB", Z_Construct_UFunction_UVoxelBlueprintLibrary_GetMemoryUsageInMB_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_GetMemoryUsageInMB_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVoxelBlueprintLibrary_GetMemoryUsageInMB_Statics::VoxelBlueprintLibrary_eventGetMemoryUsageInMB_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_GetMemoryUsageInMB_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelBlueprintLibrary_GetMemoryUsageInMB_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVoxelBlueprintLibrary_GetMemoryUsageInMB_Statics::VoxelBlueprintLibrary_eventGetMemoryUsageInMB_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVoxelBlueprintLibrary_GetMemoryUsageInMB()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelBlueprintLibrary_GetMemoryUsageInMB_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelBlueprintLibrary::execGetMemoryUsageInMB)
{
	P_GET_ENUM(EVoxelMemoryUsageType,Z_Param_Type);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=UVoxelBlueprintLibrary::GetMemoryUsageInMB(EVoxelMemoryUsageType(Z_Param_Type));
	P_NATIVE_END;
}
// ********** End Class UVoxelBlueprintLibrary Function GetMemoryUsageInMB *************************

// ********** Begin Class UVoxelBlueprintLibrary Function GetMin_Intvector *************************
struct Z_Construct_UFunction_UVoxelBlueprintLibrary_GetMin_Intvector_Statics
{
	struct VoxelBlueprintLibrary_eventGetMin_Intvector_Parms
	{
		FIntVector Vector;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Math|IntVector" },
		{ "DisplayName", "Get Min" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelBlueprintLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Vector;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_GetMin_Intvector_Statics::NewProp_Vector = { "Vector", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventGetMin_Intvector_Parms, Vector), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_GetMin_Intvector_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventGetMin_Intvector_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelBlueprintLibrary_GetMin_Intvector_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_GetMin_Intvector_Statics::NewProp_Vector,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_GetMin_Intvector_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_GetMin_Intvector_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelBlueprintLibrary_GetMin_Intvector_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelBlueprintLibrary, nullptr, "GetMin_Intvector", Z_Construct_UFunction_UVoxelBlueprintLibrary_GetMin_Intvector_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_GetMin_Intvector_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVoxelBlueprintLibrary_GetMin_Intvector_Statics::VoxelBlueprintLibrary_eventGetMin_Intvector_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_GetMin_Intvector_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelBlueprintLibrary_GetMin_Intvector_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVoxelBlueprintLibrary_GetMin_Intvector_Statics::VoxelBlueprintLibrary_eventGetMin_Intvector_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVoxelBlueprintLibrary_GetMin_Intvector()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelBlueprintLibrary_GetMin_Intvector_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelBlueprintLibrary::execGetMin_Intvector)
{
	P_GET_STRUCT(FIntVector,Z_Param_Vector);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=UVoxelBlueprintLibrary::GetMin_Intvector(Z_Param_Vector);
	P_NATIVE_END;
}
// ********** End Class UVoxelBlueprintLibrary Function GetMin_Intvector ***************************

// ********** Begin Class UVoxelBlueprintLibrary Function GetMultiIndex ****************************
struct Z_Construct_UFunction_UVoxelBlueprintLibrary_GetMultiIndex_Statics
{
	struct VoxelBlueprintLibrary_eventGetMultiIndex_Parms
	{
		FVoxelMaterial Material;
		bool bSortByStrength;
		float Strength0;
		uint8 Index0;
		float Strength1;
		uint8 Index1;
		float Strength2;
		uint8 Index2;
		float Strength3;
		uint8 Index3;
		float Wetness;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Voxel|Materials" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// If SortByStrength is true, Index 0 will have the highest strength, Index 1 the second highest etc\n" },
#endif
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If SortByStrength is true, Index 0 will have the highest strength, Index 1 the second highest etc" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Material;
	static void NewProp_bSortByStrength_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSortByStrength;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Strength0;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Index0;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Strength1;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Index1;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Strength2;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Index2;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Strength3;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Index3;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Wetness;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_GetMultiIndex_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventGetMultiIndex_Parms, Material), Z_Construct_UScriptStruct_FVoxelMaterial, METADATA_PARAMS(0, nullptr) }; // 3766892224
void Z_Construct_UFunction_UVoxelBlueprintLibrary_GetMultiIndex_Statics::NewProp_bSortByStrength_SetBit(void* Obj)
{
	((VoxelBlueprintLibrary_eventGetMultiIndex_Parms*)Obj)->bSortByStrength = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_GetMultiIndex_Statics::NewProp_bSortByStrength = { "bSortByStrength", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VoxelBlueprintLibrary_eventGetMultiIndex_Parms), &Z_Construct_UFunction_UVoxelBlueprintLibrary_GetMultiIndex_Statics::NewProp_bSortByStrength_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_GetMultiIndex_Statics::NewProp_Strength0 = { "Strength0", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventGetMultiIndex_Parms, Strength0), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_GetMultiIndex_Statics::NewProp_Index0 = { "Index0", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventGetMultiIndex_Parms, Index0), nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_GetMultiIndex_Statics::NewProp_Strength1 = { "Strength1", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventGetMultiIndex_Parms, Strength1), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_GetMultiIndex_Statics::NewProp_Index1 = { "Index1", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventGetMultiIndex_Parms, Index1), nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_GetMultiIndex_Statics::NewProp_Strength2 = { "Strength2", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventGetMultiIndex_Parms, Strength2), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_GetMultiIndex_Statics::NewProp_Index2 = { "Index2", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventGetMultiIndex_Parms, Index2), nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_GetMultiIndex_Statics::NewProp_Strength3 = { "Strength3", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventGetMultiIndex_Parms, Strength3), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_GetMultiIndex_Statics::NewProp_Index3 = { "Index3", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventGetMultiIndex_Parms, Index3), nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_GetMultiIndex_Statics::NewProp_Wetness = { "Wetness", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventGetMultiIndex_Parms, Wetness), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelBlueprintLibrary_GetMultiIndex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_GetMultiIndex_Statics::NewProp_Material,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_GetMultiIndex_Statics::NewProp_bSortByStrength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_GetMultiIndex_Statics::NewProp_Strength0,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_GetMultiIndex_Statics::NewProp_Index0,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_GetMultiIndex_Statics::NewProp_Strength1,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_GetMultiIndex_Statics::NewProp_Index1,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_GetMultiIndex_Statics::NewProp_Strength2,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_GetMultiIndex_Statics::NewProp_Index2,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_GetMultiIndex_Statics::NewProp_Strength3,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_GetMultiIndex_Statics::NewProp_Index3,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_GetMultiIndex_Statics::NewProp_Wetness,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_GetMultiIndex_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelBlueprintLibrary_GetMultiIndex_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelBlueprintLibrary, nullptr, "GetMultiIndex", Z_Construct_UFunction_UVoxelBlueprintLibrary_GetMultiIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_GetMultiIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVoxelBlueprintLibrary_GetMultiIndex_Statics::VoxelBlueprintLibrary_eventGetMultiIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_GetMultiIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelBlueprintLibrary_GetMultiIndex_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVoxelBlueprintLibrary_GetMultiIndex_Statics::VoxelBlueprintLibrary_eventGetMultiIndex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVoxelBlueprintLibrary_GetMultiIndex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelBlueprintLibrary_GetMultiIndex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelBlueprintLibrary::execGetMultiIndex)
{
	P_GET_STRUCT(FVoxelMaterial,Z_Param_Material);
	P_GET_UBOOL(Z_Param_bSortByStrength);
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_Strength0);
	P_GET_PROPERTY_REF(FByteProperty,Z_Param_Out_Index0);
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_Strength1);
	P_GET_PROPERTY_REF(FByteProperty,Z_Param_Out_Index1);
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_Strength2);
	P_GET_PROPERTY_REF(FByteProperty,Z_Param_Out_Index2);
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_Strength3);
	P_GET_PROPERTY_REF(FByteProperty,Z_Param_Out_Index3);
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_Wetness);
	P_FINISH;
	P_NATIVE_BEGIN;
	UVoxelBlueprintLibrary::GetMultiIndex(Z_Param_Material,Z_Param_bSortByStrength,Z_Param_Out_Strength0,Z_Param_Out_Index0,Z_Param_Out_Strength1,Z_Param_Out_Index1,Z_Param_Out_Strength2,Z_Param_Out_Index2,Z_Param_Out_Strength3,Z_Param_Out_Index3,Z_Param_Out_Wetness);
	P_NATIVE_END;
}
// ********** End Class UVoxelBlueprintLibrary Function GetMultiIndex ******************************

// ********** Begin Class UVoxelBlueprintLibrary Function GetNormal ********************************
struct Z_Construct_UFunction_UVoxelBlueprintLibrary_GetNormal_Statics
{
	struct VoxelBlueprintLibrary_eventGetNormal_Parms
	{
		AVoxelWorld* World;
		FIntVector Position;
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Voxel|Data" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Get the normal at Position using the density gradient. May differ from the mesh normal\n" },
#endif
		{ "DefaultToSelf", "World" },
		{ "Keywords", "gradient" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get the normal at Position using the density gradient. May differ from the mesh normal" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Position;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_GetNormal_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventGetNormal_Parms, World), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_GetNormal_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventGetNormal_Parms, Position), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_GetNormal_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventGetNormal_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelBlueprintLibrary_GetNormal_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_GetNormal_Statics::NewProp_World,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_GetNormal_Statics::NewProp_Position,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_GetNormal_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_GetNormal_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelBlueprintLibrary_GetNormal_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelBlueprintLibrary, nullptr, "GetNormal", Z_Construct_UFunction_UVoxelBlueprintLibrary_GetNormal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_GetNormal_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVoxelBlueprintLibrary_GetNormal_Statics::VoxelBlueprintLibrary_eventGetNormal_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_GetNormal_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelBlueprintLibrary_GetNormal_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVoxelBlueprintLibrary_GetNormal_Statics::VoxelBlueprintLibrary_eventGetNormal_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVoxelBlueprintLibrary_GetNormal()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelBlueprintLibrary_GetNormal_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelBlueprintLibrary::execGetNormal)
{
	P_GET_OBJECT(AVoxelWorld,Z_Param_World);
	P_GET_STRUCT(FIntVector,Z_Param_Position);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=UVoxelBlueprintLibrary::GetNormal(Z_Param_World,Z_Param_Position);
	P_NATIVE_END;
}
// ********** End Class UVoxelBlueprintLibrary Function GetNormal **********************************

// ********** Begin Class UVoxelBlueprintLibrary Function GetPeakMemoryUsageInMB *******************
struct Z_Construct_UFunction_UVoxelBlueprintLibrary_GetPeakMemoryUsageInMB_Statics
{
	struct VoxelBlueprintLibrary_eventGetPeakMemoryUsageInMB_Parms
	{
		EVoxelMemoryUsageType Type;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Voxel|Memory" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Get the peak memory usage of different parts of the plugin\n" },
#endif
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get the peak memory usage of different parts of the plugin" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_GetPeakMemoryUsageInMB_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_GetPeakMemoryUsageInMB_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventGetPeakMemoryUsageInMB_Parms, Type), Z_Construct_UEnum_Voxel_EVoxelMemoryUsageType, METADATA_PARAMS(0, nullptr) }; // 281796426
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_GetPeakMemoryUsageInMB_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventGetPeakMemoryUsageInMB_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelBlueprintLibrary_GetPeakMemoryUsageInMB_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_GetPeakMemoryUsageInMB_Statics::NewProp_Type_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_GetPeakMemoryUsageInMB_Statics::NewProp_Type,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_GetPeakMemoryUsageInMB_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_GetPeakMemoryUsageInMB_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelBlueprintLibrary_GetPeakMemoryUsageInMB_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelBlueprintLibrary, nullptr, "GetPeakMemoryUsageInMB", Z_Construct_UFunction_UVoxelBlueprintLibrary_GetPeakMemoryUsageInMB_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_GetPeakMemoryUsageInMB_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVoxelBlueprintLibrary_GetPeakMemoryUsageInMB_Statics::VoxelBlueprintLibrary_eventGetPeakMemoryUsageInMB_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_GetPeakMemoryUsageInMB_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelBlueprintLibrary_GetPeakMemoryUsageInMB_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVoxelBlueprintLibrary_GetPeakMemoryUsageInMB_Statics::VoxelBlueprintLibrary_eventGetPeakMemoryUsageInMB_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVoxelBlueprintLibrary_GetPeakMemoryUsageInMB()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelBlueprintLibrary_GetPeakMemoryUsageInMB_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelBlueprintLibrary::execGetPeakMemoryUsageInMB)
{
	P_GET_ENUM(EVoxelMemoryUsageType,Z_Param_Type);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=UVoxelBlueprintLibrary::GetPeakMemoryUsageInMB(EVoxelMemoryUsageType(Z_Param_Type));
	P_NATIVE_END;
}
// ********** End Class UVoxelBlueprintLibrary Function GetPeakMemoryUsageInMB *********************

// ********** Begin Class UVoxelBlueprintLibrary Function GetRawMaterial ***************************
struct Z_Construct_UFunction_UVoxelBlueprintLibrary_GetRawMaterial_Statics
{
	struct VoxelBlueprintLibrary_eventGetRawMaterial_Parms
	{
		FVoxelMaterial Material;
		uint8 R;
		uint8 G;
		uint8 B;
		uint8 A;
		uint8 U0;
		uint8 V0;
		uint8 U1;
		uint8 V1;
		uint8 U2;
		uint8 V2;
		uint8 U3;
		uint8 V3;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Voxel|Materials" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelBlueprintLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Material;
	static const UECodeGen_Private::FBytePropertyParams NewProp_R;
	static const UECodeGen_Private::FBytePropertyParams NewProp_G;
	static const UECodeGen_Private::FBytePropertyParams NewProp_B;
	static const UECodeGen_Private::FBytePropertyParams NewProp_A;
	static const UECodeGen_Private::FBytePropertyParams NewProp_U0;
	static const UECodeGen_Private::FBytePropertyParams NewProp_V0;
	static const UECodeGen_Private::FBytePropertyParams NewProp_U1;
	static const UECodeGen_Private::FBytePropertyParams NewProp_V1;
	static const UECodeGen_Private::FBytePropertyParams NewProp_U2;
	static const UECodeGen_Private::FBytePropertyParams NewProp_V2;
	static const UECodeGen_Private::FBytePropertyParams NewProp_U3;
	static const UECodeGen_Private::FBytePropertyParams NewProp_V3;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_GetRawMaterial_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventGetRawMaterial_Parms, Material), Z_Construct_UScriptStruct_FVoxelMaterial, METADATA_PARAMS(0, nullptr) }; // 3766892224
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_GetRawMaterial_Statics::NewProp_R = { "R", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventGetRawMaterial_Parms, R), nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_GetRawMaterial_Statics::NewProp_G = { "G", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventGetRawMaterial_Parms, G), nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_GetRawMaterial_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventGetRawMaterial_Parms, B), nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_GetRawMaterial_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventGetRawMaterial_Parms, A), nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_GetRawMaterial_Statics::NewProp_U0 = { "U0", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventGetRawMaterial_Parms, U0), nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_GetRawMaterial_Statics::NewProp_V0 = { "V0", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventGetRawMaterial_Parms, V0), nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_GetRawMaterial_Statics::NewProp_U1 = { "U1", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventGetRawMaterial_Parms, U1), nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_GetRawMaterial_Statics::NewProp_V1 = { "V1", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventGetRawMaterial_Parms, V1), nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_GetRawMaterial_Statics::NewProp_U2 = { "U2", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventGetRawMaterial_Parms, U2), nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_GetRawMaterial_Statics::NewProp_V2 = { "V2", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventGetRawMaterial_Parms, V2), nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_GetRawMaterial_Statics::NewProp_U3 = { "U3", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventGetRawMaterial_Parms, U3), nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_GetRawMaterial_Statics::NewProp_V3 = { "V3", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventGetRawMaterial_Parms, V3), nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelBlueprintLibrary_GetRawMaterial_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_GetRawMaterial_Statics::NewProp_Material,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_GetRawMaterial_Statics::NewProp_R,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_GetRawMaterial_Statics::NewProp_G,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_GetRawMaterial_Statics::NewProp_B,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_GetRawMaterial_Statics::NewProp_A,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_GetRawMaterial_Statics::NewProp_U0,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_GetRawMaterial_Statics::NewProp_V0,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_GetRawMaterial_Statics::NewProp_U1,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_GetRawMaterial_Statics::NewProp_V1,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_GetRawMaterial_Statics::NewProp_U2,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_GetRawMaterial_Statics::NewProp_V2,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_GetRawMaterial_Statics::NewProp_U3,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_GetRawMaterial_Statics::NewProp_V3,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_GetRawMaterial_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelBlueprintLibrary_GetRawMaterial_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelBlueprintLibrary, nullptr, "GetRawMaterial", Z_Construct_UFunction_UVoxelBlueprintLibrary_GetRawMaterial_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_GetRawMaterial_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVoxelBlueprintLibrary_GetRawMaterial_Statics::VoxelBlueprintLibrary_eventGetRawMaterial_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_GetRawMaterial_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelBlueprintLibrary_GetRawMaterial_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVoxelBlueprintLibrary_GetRawMaterial_Statics::VoxelBlueprintLibrary_eventGetRawMaterial_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVoxelBlueprintLibrary_GetRawMaterial()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelBlueprintLibrary_GetRawMaterial_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelBlueprintLibrary::execGetRawMaterial)
{
	P_GET_STRUCT(FVoxelMaterial,Z_Param_Material);
	P_GET_PROPERTY_REF(FByteProperty,Z_Param_Out_R);
	P_GET_PROPERTY_REF(FByteProperty,Z_Param_Out_G);
	P_GET_PROPERTY_REF(FByteProperty,Z_Param_Out_B);
	P_GET_PROPERTY_REF(FByteProperty,Z_Param_Out_A);
	P_GET_PROPERTY_REF(FByteProperty,Z_Param_Out_U0);
	P_GET_PROPERTY_REF(FByteProperty,Z_Param_Out_V0);
	P_GET_PROPERTY_REF(FByteProperty,Z_Param_Out_U1);
	P_GET_PROPERTY_REF(FByteProperty,Z_Param_Out_V1);
	P_GET_PROPERTY_REF(FByteProperty,Z_Param_Out_U2);
	P_GET_PROPERTY_REF(FByteProperty,Z_Param_Out_V2);
	P_GET_PROPERTY_REF(FByteProperty,Z_Param_Out_U3);
	P_GET_PROPERTY_REF(FByteProperty,Z_Param_Out_V3);
	P_FINISH;
	P_NATIVE_BEGIN;
	UVoxelBlueprintLibrary::GetRawMaterial(Z_Param_Material,Z_Param_Out_R,Z_Param_Out_G,Z_Param_Out_B,Z_Param_Out_A,Z_Param_Out_U0,Z_Param_Out_V0,Z_Param_Out_U1,Z_Param_Out_V1,Z_Param_Out_U2,Z_Param_Out_V2,Z_Param_Out_U3,Z_Param_Out_V3);
	P_NATIVE_END;
}
// ********** End Class UVoxelBlueprintLibrary Function GetRawMaterial *****************************

// ********** Begin Class UVoxelBlueprintLibrary Function GetRenderBoundsOverlappingDataBounds *****
struct Z_Construct_UFunction_UVoxelBlueprintLibrary_GetRenderBoundsOverlappingDataBounds_Statics
{
	struct VoxelBlueprintLibrary_eventGetRenderBoundsOverlappingDataBounds_Parms
	{
		AVoxelWorld* World;
		FVoxelIntBox DataBounds;
		int32 LOD;
		FVoxelIntBox ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Voxel|Utilities" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// eg if you want to cache all the data that's going to be used by render chunks when updating the world\n" },
#endif
		{ "CPP_Default_LOD", "0" },
		{ "DefaultToSelf", "World" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "eg if you want to cache all the data that's going to be used by render chunks when updating the world" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DataBounds;
	static const UECodeGen_Private::FIntPropertyParams NewProp_LOD;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_GetRenderBoundsOverlappingDataBounds_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventGetRenderBoundsOverlappingDataBounds_Parms, World), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_GetRenderBoundsOverlappingDataBounds_Statics::NewProp_DataBounds = { "DataBounds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventGetRenderBoundsOverlappingDataBounds_Parms, DataBounds), Z_Construct_UScriptStruct_FVoxelIntBox, METADATA_PARAMS(0, nullptr) }; // 3520536583
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_GetRenderBoundsOverlappingDataBounds_Statics::NewProp_LOD = { "LOD", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventGetRenderBoundsOverlappingDataBounds_Parms, LOD), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_GetRenderBoundsOverlappingDataBounds_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventGetRenderBoundsOverlappingDataBounds_Parms, ReturnValue), Z_Construct_UScriptStruct_FVoxelIntBox, METADATA_PARAMS(0, nullptr) }; // 3520536583
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelBlueprintLibrary_GetRenderBoundsOverlappingDataBounds_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_GetRenderBoundsOverlappingDataBounds_Statics::NewProp_World,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_GetRenderBoundsOverlappingDataBounds_Statics::NewProp_DataBounds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_GetRenderBoundsOverlappingDataBounds_Statics::NewProp_LOD,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_GetRenderBoundsOverlappingDataBounds_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_GetRenderBoundsOverlappingDataBounds_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelBlueprintLibrary_GetRenderBoundsOverlappingDataBounds_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelBlueprintLibrary, nullptr, "GetRenderBoundsOverlappingDataBounds", Z_Construct_UFunction_UVoxelBlueprintLibrary_GetRenderBoundsOverlappingDataBounds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_GetRenderBoundsOverlappingDataBounds_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVoxelBlueprintLibrary_GetRenderBoundsOverlappingDataBounds_Statics::VoxelBlueprintLibrary_eventGetRenderBoundsOverlappingDataBounds_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_GetRenderBoundsOverlappingDataBounds_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelBlueprintLibrary_GetRenderBoundsOverlappingDataBounds_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVoxelBlueprintLibrary_GetRenderBoundsOverlappingDataBounds_Statics::VoxelBlueprintLibrary_eventGetRenderBoundsOverlappingDataBounds_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVoxelBlueprintLibrary_GetRenderBoundsOverlappingDataBounds()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelBlueprintLibrary_GetRenderBoundsOverlappingDataBounds_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelBlueprintLibrary::execGetRenderBoundsOverlappingDataBounds)
{
	P_GET_OBJECT(AVoxelWorld,Z_Param_World);
	P_GET_STRUCT(FVoxelIntBox,Z_Param_DataBounds);
	P_GET_PROPERTY(FIntProperty,Z_Param_LOD);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVoxelIntBox*)Z_Param__Result=UVoxelBlueprintLibrary::GetRenderBoundsOverlappingDataBounds(Z_Param_World,Z_Param_DataBounds,Z_Param_LOD);
	P_NATIVE_END;
}
// ********** End Class UVoxelBlueprintLibrary Function GetRenderBoundsOverlappingDataBounds *******

// ********** Begin Class UVoxelBlueprintLibrary Function GetSingleIndex ***************************
struct Z_Construct_UFunction_UVoxelBlueprintLibrary_GetSingleIndex_Statics
{
	struct VoxelBlueprintLibrary_eventGetSingleIndex_Parms
	{
		FVoxelMaterial Material;
		uint8 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Voxel|Materials" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelBlueprintLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Material;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_GetSingleIndex_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventGetSingleIndex_Parms, Material), Z_Construct_UScriptStruct_FVoxelMaterial, METADATA_PARAMS(0, nullptr) }; // 3766892224
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_GetSingleIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventGetSingleIndex_Parms, ReturnValue), nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelBlueprintLibrary_GetSingleIndex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_GetSingleIndex_Statics::NewProp_Material,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_GetSingleIndex_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_GetSingleIndex_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelBlueprintLibrary_GetSingleIndex_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelBlueprintLibrary, nullptr, "GetSingleIndex", Z_Construct_UFunction_UVoxelBlueprintLibrary_GetSingleIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_GetSingleIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVoxelBlueprintLibrary_GetSingleIndex_Statics::VoxelBlueprintLibrary_eventGetSingleIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_GetSingleIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelBlueprintLibrary_GetSingleIndex_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVoxelBlueprintLibrary_GetSingleIndex_Statics::VoxelBlueprintLibrary_eventGetSingleIndex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVoxelBlueprintLibrary_GetSingleIndex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelBlueprintLibrary_GetSingleIndex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelBlueprintLibrary::execGetSingleIndex)
{
	P_GET_STRUCT(FVoxelMaterial,Z_Param_Material);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(uint8*)Z_Param__Result=UVoxelBlueprintLibrary::GetSingleIndex(Z_Param_Material);
	P_NATIVE_END;
}
// ********** End Class UVoxelBlueprintLibrary Function GetSingleIndex *****************************

// ********** Begin Class UVoxelBlueprintLibrary Function GetSpawnersSave **************************
struct Z_Construct_UFunction_UVoxelBlueprintLibrary_GetSpawnersSave_Statics
{
	struct VoxelBlueprintLibrary_eventGetSpawnersSave_Parms
	{
		AVoxelWorld* World;
		FVoxelSpawnersSave ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Voxel|Spawners" },
		{ "DefaultToSelf", "World" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelBlueprintLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_GetSpawnersSave_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventGetSpawnersSave_Parms, World), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_GetSpawnersSave_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventGetSpawnersSave_Parms, ReturnValue), Z_Construct_UScriptStruct_FVoxelSpawnersSave, METADATA_PARAMS(0, nullptr) }; // 1801030647
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelBlueprintLibrary_GetSpawnersSave_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_GetSpawnersSave_Statics::NewProp_World,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_GetSpawnersSave_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_GetSpawnersSave_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelBlueprintLibrary_GetSpawnersSave_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelBlueprintLibrary, nullptr, "GetSpawnersSave", Z_Construct_UFunction_UVoxelBlueprintLibrary_GetSpawnersSave_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_GetSpawnersSave_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVoxelBlueprintLibrary_GetSpawnersSave_Statics::VoxelBlueprintLibrary_eventGetSpawnersSave_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_GetSpawnersSave_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelBlueprintLibrary_GetSpawnersSave_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVoxelBlueprintLibrary_GetSpawnersSave_Statics::VoxelBlueprintLibrary_eventGetSpawnersSave_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVoxelBlueprintLibrary_GetSpawnersSave()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelBlueprintLibrary_GetSpawnersSave_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelBlueprintLibrary::execGetSpawnersSave)
{
	P_GET_OBJECT(AVoxelWorld,Z_Param_World);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVoxelSpawnersSave*)Z_Param__Result=UVoxelBlueprintLibrary::GetSpawnersSave(Z_Param_World);
	P_NATIVE_END;
}
// ********** End Class UVoxelBlueprintLibrary Function GetSpawnersSave ****************************

// ********** Begin Class UVoxelBlueprintLibrary Function GetTaskCount *****************************
struct Z_Construct_UFunction_UVoxelBlueprintLibrary_GetTaskCount_Statics
{
	struct VoxelBlueprintLibrary_eventGetTaskCount_Parms
	{
		AVoxelWorld* World;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Voxel|Render" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Number of mesh processing tasks not finished\n" },
#endif
		{ "DefaultToSelf", "World" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Number of mesh processing tasks not finished" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_GetTaskCount_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventGetTaskCount_Parms, World), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_GetTaskCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventGetTaskCount_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelBlueprintLibrary_GetTaskCount_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_GetTaskCount_Statics::NewProp_World,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_GetTaskCount_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_GetTaskCount_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelBlueprintLibrary_GetTaskCount_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelBlueprintLibrary, nullptr, "GetTaskCount", Z_Construct_UFunction_UVoxelBlueprintLibrary_GetTaskCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_GetTaskCount_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVoxelBlueprintLibrary_GetTaskCount_Statics::VoxelBlueprintLibrary_eventGetTaskCount_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_GetTaskCount_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelBlueprintLibrary_GetTaskCount_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVoxelBlueprintLibrary_GetTaskCount_Statics::VoxelBlueprintLibrary_eventGetTaskCount_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVoxelBlueprintLibrary_GetTaskCount()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelBlueprintLibrary_GetTaskCount_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelBlueprintLibrary::execGetTaskCount)
{
	P_GET_OBJECT(AVoxelWorld,Z_Param_World);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=UVoxelBlueprintLibrary::GetTaskCount(Z_Param_World);
	P_NATIVE_END;
}
// ********** End Class UVoxelBlueprintLibrary Function GetTaskCount *******************************

// ********** Begin Class UVoxelBlueprintLibrary Function GetUV ************************************
struct Z_Construct_UFunction_UVoxelBlueprintLibrary_GetUV_Statics
{
	struct VoxelBlueprintLibrary_eventGetUV_Parms
	{
		FVoxelMaterial Material;
		int32 Channel;
		FVector2D ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Voxel|Materials" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelBlueprintLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Material;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Channel;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_GetUV_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventGetUV_Parms, Material), Z_Construct_UScriptStruct_FVoxelMaterial, METADATA_PARAMS(0, nullptr) }; // 3766892224
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_GetUV_Statics::NewProp_Channel = { "Channel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventGetUV_Parms, Channel), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_GetUV_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventGetUV_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelBlueprintLibrary_GetUV_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_GetUV_Statics::NewProp_Material,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_GetUV_Statics::NewProp_Channel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_GetUV_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_GetUV_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelBlueprintLibrary_GetUV_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelBlueprintLibrary, nullptr, "GetUV", Z_Construct_UFunction_UVoxelBlueprintLibrary_GetUV_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_GetUV_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVoxelBlueprintLibrary_GetUV_Statics::VoxelBlueprintLibrary_eventGetUV_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_GetUV_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelBlueprintLibrary_GetUV_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVoxelBlueprintLibrary_GetUV_Statics::VoxelBlueprintLibrary_eventGetUV_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVoxelBlueprintLibrary_GetUV()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelBlueprintLibrary_GetUV_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelBlueprintLibrary::execGetUV)
{
	P_GET_STRUCT(FVoxelMaterial,Z_Param_Material);
	P_GET_PROPERTY(FIntProperty,Z_Param_Channel);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector2D*)Z_Param__Result=UVoxelBlueprintLibrary::GetUV(Z_Param_Material,Z_Param_Channel);
	P_NATIVE_END;
}
// ********** End Class UVoxelBlueprintLibrary Function GetUV **************************************

// ********** Begin Class UVoxelBlueprintLibrary Function GetVoxelColorTextureSize *****************
struct Z_Construct_UFunction_UVoxelBlueprintLibrary_GetVoxelColorTextureSize_Statics
{
	struct VoxelBlueprintLibrary_eventGetVoxelColorTextureSize_Parms
	{
		FVoxelColorTexture Texture;
		FIntPoint ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Voxel|Voxel Texture" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelBlueprintLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Texture;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_GetVoxelColorTextureSize_Statics::NewProp_Texture = { "Texture", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventGetVoxelColorTextureSize_Parms, Texture), Z_Construct_UScriptStruct_FVoxelColorTexture, METADATA_PARAMS(0, nullptr) }; // 40891338
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_GetVoxelColorTextureSize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventGetVoxelColorTextureSize_Parms, ReturnValue), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelBlueprintLibrary_GetVoxelColorTextureSize_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_GetVoxelColorTextureSize_Statics::NewProp_Texture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_GetVoxelColorTextureSize_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_GetVoxelColorTextureSize_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelBlueprintLibrary_GetVoxelColorTextureSize_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelBlueprintLibrary, nullptr, "GetVoxelColorTextureSize", Z_Construct_UFunction_UVoxelBlueprintLibrary_GetVoxelColorTextureSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_GetVoxelColorTextureSize_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVoxelBlueprintLibrary_GetVoxelColorTextureSize_Statics::VoxelBlueprintLibrary_eventGetVoxelColorTextureSize_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_GetVoxelColorTextureSize_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelBlueprintLibrary_GetVoxelColorTextureSize_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVoxelBlueprintLibrary_GetVoxelColorTextureSize_Statics::VoxelBlueprintLibrary_eventGetVoxelColorTextureSize_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVoxelBlueprintLibrary_GetVoxelColorTextureSize()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelBlueprintLibrary_GetVoxelColorTextureSize_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelBlueprintLibrary::execGetVoxelColorTextureSize)
{
	P_GET_STRUCT(FVoxelColorTexture,Z_Param_Texture);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FIntPoint*)Z_Param__Result=UVoxelBlueprintLibrary::GetVoxelColorTextureSize(Z_Param_Texture);
	P_NATIVE_END;
}
// ********** End Class UVoxelBlueprintLibrary Function GetVoxelColorTextureSize *******************

// ********** Begin Class UVoxelBlueprintLibrary Function GetVoxelFloatTextureSize *****************
struct Z_Construct_UFunction_UVoxelBlueprintLibrary_GetVoxelFloatTextureSize_Statics
{
	struct VoxelBlueprintLibrary_eventGetVoxelFloatTextureSize_Parms
	{
		FVoxelFloatTexture Texture;
		FIntPoint ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Voxel|Voxel Texture" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelBlueprintLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Texture;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_GetVoxelFloatTextureSize_Statics::NewProp_Texture = { "Texture", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventGetVoxelFloatTextureSize_Parms, Texture), Z_Construct_UScriptStruct_FVoxelFloatTexture, METADATA_PARAMS(0, nullptr) }; // 369089072
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_GetVoxelFloatTextureSize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventGetVoxelFloatTextureSize_Parms, ReturnValue), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelBlueprintLibrary_GetVoxelFloatTextureSize_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_GetVoxelFloatTextureSize_Statics::NewProp_Texture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_GetVoxelFloatTextureSize_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_GetVoxelFloatTextureSize_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelBlueprintLibrary_GetVoxelFloatTextureSize_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelBlueprintLibrary, nullptr, "GetVoxelFloatTextureSize", Z_Construct_UFunction_UVoxelBlueprintLibrary_GetVoxelFloatTextureSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_GetVoxelFloatTextureSize_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVoxelBlueprintLibrary_GetVoxelFloatTextureSize_Statics::VoxelBlueprintLibrary_eventGetVoxelFloatTextureSize_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_GetVoxelFloatTextureSize_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelBlueprintLibrary_GetVoxelFloatTextureSize_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVoxelBlueprintLibrary_GetVoxelFloatTextureSize_Statics::VoxelBlueprintLibrary_eventGetVoxelFloatTextureSize_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVoxelBlueprintLibrary_GetVoxelFloatTextureSize()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelBlueprintLibrary_GetVoxelFloatTextureSize_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelBlueprintLibrary::execGetVoxelFloatTextureSize)
{
	P_GET_STRUCT(FVoxelFloatTexture,Z_Param_Texture);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FIntPoint*)Z_Param__Result=UVoxelBlueprintLibrary::GetVoxelFloatTextureSize(Z_Param_Texture);
	P_NATIVE_END;
}
// ********** End Class UVoxelBlueprintLibrary Function GetVoxelFloatTextureSize *******************

// ********** Begin Class UVoxelBlueprintLibrary Function GetVoxelWorldContainingPosition **********
struct Z_Construct_UFunction_UVoxelBlueprintLibrary_GetVoxelWorldContainingPosition_Statics
{
	struct VoxelBlueprintLibrary_eventGetVoxelWorldContainingPosition_Parms
	{
		UObject* WorldContextObject;
		FVector Position;
		AVoxelWorld* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Voxel|Helpers" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Iterate all voxel worlds in the scene, and return the first one that contains Position\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Iterate all voxel worlds in the scene, and return the first one that contains Position" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Position;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_GetVoxelWorldContainingPosition_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventGetVoxelWorldContainingPosition_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_GetVoxelWorldContainingPosition_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventGetVoxelWorldContainingPosition_Parms, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_GetVoxelWorldContainingPosition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventGetVoxelWorldContainingPosition_Parms, ReturnValue), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelBlueprintLibrary_GetVoxelWorldContainingPosition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_GetVoxelWorldContainingPosition_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_GetVoxelWorldContainingPosition_Statics::NewProp_Position,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_GetVoxelWorldContainingPosition_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_GetVoxelWorldContainingPosition_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelBlueprintLibrary_GetVoxelWorldContainingPosition_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelBlueprintLibrary, nullptr, "GetVoxelWorldContainingPosition", Z_Construct_UFunction_UVoxelBlueprintLibrary_GetVoxelWorldContainingPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_GetVoxelWorldContainingPosition_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVoxelBlueprintLibrary_GetVoxelWorldContainingPosition_Statics::VoxelBlueprintLibrary_eventGetVoxelWorldContainingPosition_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_GetVoxelWorldContainingPosition_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelBlueprintLibrary_GetVoxelWorldContainingPosition_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVoxelBlueprintLibrary_GetVoxelWorldContainingPosition_Statics::VoxelBlueprintLibrary_eventGetVoxelWorldContainingPosition_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVoxelBlueprintLibrary_GetVoxelWorldContainingPosition()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelBlueprintLibrary_GetVoxelWorldContainingPosition_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelBlueprintLibrary::execGetVoxelWorldContainingPosition)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_STRUCT(FVector,Z_Param_Position);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(AVoxelWorld**)Z_Param__Result=UVoxelBlueprintLibrary::GetVoxelWorldContainingPosition(Z_Param_WorldContextObject,Z_Param_Position);
	P_NATIVE_END;
}
// ********** End Class UVoxelBlueprintLibrary Function GetVoxelWorldContainingPosition ************

// ********** Begin Class UVoxelBlueprintLibrary Function GetVoxelWorldOverlappingActor ************
struct Z_Construct_UFunction_UVoxelBlueprintLibrary_GetVoxelWorldOverlappingActor_Statics
{
	struct VoxelBlueprintLibrary_eventGetVoxelWorldOverlappingActor_Parms
	{
		AActor* Actor;
		AVoxelWorld* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Voxel|Helpers" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Iterate all voxel worlds in the scene, and return the first one that overlaps the actor bounding box\n\x09 */" },
#endif
		{ "DefaultToSelf", "Actor" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Iterate all voxel worlds in the scene, and return the first one that overlaps the actor bounding box" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_GetVoxelWorldOverlappingActor_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventGetVoxelWorldOverlappingActor_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_GetVoxelWorldOverlappingActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventGetVoxelWorldOverlappingActor_Parms, ReturnValue), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelBlueprintLibrary_GetVoxelWorldOverlappingActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_GetVoxelWorldOverlappingActor_Statics::NewProp_Actor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_GetVoxelWorldOverlappingActor_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_GetVoxelWorldOverlappingActor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelBlueprintLibrary_GetVoxelWorldOverlappingActor_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelBlueprintLibrary, nullptr, "GetVoxelWorldOverlappingActor", Z_Construct_UFunction_UVoxelBlueprintLibrary_GetVoxelWorldOverlappingActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_GetVoxelWorldOverlappingActor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVoxelBlueprintLibrary_GetVoxelWorldOverlappingActor_Statics::VoxelBlueprintLibrary_eventGetVoxelWorldOverlappingActor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_GetVoxelWorldOverlappingActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelBlueprintLibrary_GetVoxelWorldOverlappingActor_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVoxelBlueprintLibrary_GetVoxelWorldOverlappingActor_Statics::VoxelBlueprintLibrary_eventGetVoxelWorldOverlappingActor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVoxelBlueprintLibrary_GetVoxelWorldOverlappingActor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelBlueprintLibrary_GetVoxelWorldOverlappingActor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelBlueprintLibrary::execGetVoxelWorldOverlappingActor)
{
	P_GET_OBJECT(AActor,Z_Param_Actor);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(AVoxelWorld**)Z_Param__Result=UVoxelBlueprintLibrary::GetVoxelWorldOverlappingActor(Z_Param_Actor);
	P_NATIVE_END;
}
// ********** End Class UVoxelBlueprintLibrary Function GetVoxelWorldOverlappingActor **************

// ********** Begin Class UVoxelBlueprintLibrary Function GetVoxelWorldOverlappingBox **************
struct Z_Construct_UFunction_UVoxelBlueprintLibrary_GetVoxelWorldOverlappingBox_Statics
{
	struct VoxelBlueprintLibrary_eventGetVoxelWorldOverlappingBox_Parms
	{
		UObject* WorldContextObject;
		FBox Box;
		AVoxelWorld* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Voxel|Helpers" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Iterate all voxel worlds in the scene, and return the first one that overlaps Box\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Iterate all voxel worlds in the scene, and return the first one that overlaps Box" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Box;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_GetVoxelWorldOverlappingBox_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventGetVoxelWorldOverlappingBox_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_GetVoxelWorldOverlappingBox_Statics::NewProp_Box = { "Box", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventGetVoxelWorldOverlappingBox_Parms, Box), Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_GetVoxelWorldOverlappingBox_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventGetVoxelWorldOverlappingBox_Parms, ReturnValue), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelBlueprintLibrary_GetVoxelWorldOverlappingBox_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_GetVoxelWorldOverlappingBox_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_GetVoxelWorldOverlappingBox_Statics::NewProp_Box,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_GetVoxelWorldOverlappingBox_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_GetVoxelWorldOverlappingBox_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelBlueprintLibrary_GetVoxelWorldOverlappingBox_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelBlueprintLibrary, nullptr, "GetVoxelWorldOverlappingBox", Z_Construct_UFunction_UVoxelBlueprintLibrary_GetVoxelWorldOverlappingBox_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_GetVoxelWorldOverlappingBox_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVoxelBlueprintLibrary_GetVoxelWorldOverlappingBox_Statics::VoxelBlueprintLibrary_eventGetVoxelWorldOverlappingBox_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_GetVoxelWorldOverlappingBox_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelBlueprintLibrary_GetVoxelWorldOverlappingBox_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVoxelBlueprintLibrary_GetVoxelWorldOverlappingBox_Statics::VoxelBlueprintLibrary_eventGetVoxelWorldOverlappingBox_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVoxelBlueprintLibrary_GetVoxelWorldOverlappingBox()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelBlueprintLibrary_GetVoxelWorldOverlappingBox_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelBlueprintLibrary::execGetVoxelWorldOverlappingBox)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_STRUCT(FBox,Z_Param_Box);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(AVoxelWorld**)Z_Param__Result=UVoxelBlueprintLibrary::GetVoxelWorldOverlappingBox(Z_Param_WorldContextObject,Z_Param_Box);
	P_NATIVE_END;
}
// ********** End Class UVoxelBlueprintLibrary Function GetVoxelWorldOverlappingBox ****************

// ********** Begin Class UVoxelBlueprintLibrary Function HasMaterialData **************************
struct Z_Construct_UFunction_UVoxelBlueprintLibrary_HasMaterialData_Statics
{
	struct VoxelBlueprintLibrary_eventHasMaterialData_Parms
	{
		AVoxelWorld* World;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "bUpdateRender" },
		{ "Category", "Voxel|Data" },
		{ "DefaultToSelf", "World" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelBlueprintLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_HasMaterialData_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventHasMaterialData_Parms, World), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UVoxelBlueprintLibrary_HasMaterialData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((VoxelBlueprintLibrary_eventHasMaterialData_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_HasMaterialData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VoxelBlueprintLibrary_eventHasMaterialData_Parms), &Z_Construct_UFunction_UVoxelBlueprintLibrary_HasMaterialData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelBlueprintLibrary_HasMaterialData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_HasMaterialData_Statics::NewProp_World,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_HasMaterialData_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_HasMaterialData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelBlueprintLibrary_HasMaterialData_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelBlueprintLibrary, nullptr, "HasMaterialData", Z_Construct_UFunction_UVoxelBlueprintLibrary_HasMaterialData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_HasMaterialData_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVoxelBlueprintLibrary_HasMaterialData_Statics::VoxelBlueprintLibrary_eventHasMaterialData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_HasMaterialData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelBlueprintLibrary_HasMaterialData_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVoxelBlueprintLibrary_HasMaterialData_Statics::VoxelBlueprintLibrary_eventHasMaterialData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVoxelBlueprintLibrary_HasMaterialData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelBlueprintLibrary_HasMaterialData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelBlueprintLibrary::execHasMaterialData)
{
	P_GET_OBJECT(AVoxelWorld,Z_Param_World);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UVoxelBlueprintLibrary::HasMaterialData(Z_Param_World);
	P_NATIVE_END;
}
// ********** End Class UVoxelBlueprintLibrary Function HasMaterialData ****************************

// ********** Begin Class UVoxelBlueprintLibrary Function HasValueData *****************************
struct Z_Construct_UFunction_UVoxelBlueprintLibrary_HasValueData_Statics
{
	struct VoxelBlueprintLibrary_eventHasValueData_Parms
	{
		AVoxelWorld* World;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "bUpdateRender" },
		{ "Category", "Voxel|Data" },
		{ "DefaultToSelf", "World" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelBlueprintLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_HasValueData_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventHasValueData_Parms, World), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UVoxelBlueprintLibrary_HasValueData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((VoxelBlueprintLibrary_eventHasValueData_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_HasValueData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VoxelBlueprintLibrary_eventHasValueData_Parms), &Z_Construct_UFunction_UVoxelBlueprintLibrary_HasValueData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelBlueprintLibrary_HasValueData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_HasValueData_Statics::NewProp_World,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_HasValueData_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_HasValueData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelBlueprintLibrary_HasValueData_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelBlueprintLibrary, nullptr, "HasValueData", Z_Construct_UFunction_UVoxelBlueprintLibrary_HasValueData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_HasValueData_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVoxelBlueprintLibrary_HasValueData_Statics::VoxelBlueprintLibrary_eventHasValueData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_HasValueData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelBlueprintLibrary_HasValueData_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVoxelBlueprintLibrary_HasValueData_Statics::VoxelBlueprintLibrary_eventHasValueData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVoxelBlueprintLibrary_HasValueData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelBlueprintLibrary_HasValueData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelBlueprintLibrary::execHasValueData)
{
	P_GET_OBJECT(AVoxelWorld,Z_Param_World);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UVoxelBlueprintLibrary::HasValueData(Z_Param_World);
	P_NATIVE_END;
}
// ********** End Class UVoxelBlueprintLibrary Function HasValueData *******************************

// ********** Begin Class UVoxelBlueprintLibrary Function IsGlobalVoxelPoolCreated *****************
struct Z_Construct_UFunction_UVoxelBlueprintLibrary_IsGlobalVoxelPoolCreated_Statics
{
	struct VoxelBlueprintLibrary_eventIsGlobalVoxelPoolCreated_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Voxel|Threads" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Is the global voxel thread pool created?\n" },
#endif
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Is the global voxel thread pool created?" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UVoxelBlueprintLibrary_IsGlobalVoxelPoolCreated_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((VoxelBlueprintLibrary_eventIsGlobalVoxelPoolCreated_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_IsGlobalVoxelPoolCreated_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VoxelBlueprintLibrary_eventIsGlobalVoxelPoolCreated_Parms), &Z_Construct_UFunction_UVoxelBlueprintLibrary_IsGlobalVoxelPoolCreated_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelBlueprintLibrary_IsGlobalVoxelPoolCreated_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_IsGlobalVoxelPoolCreated_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_IsGlobalVoxelPoolCreated_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelBlueprintLibrary_IsGlobalVoxelPoolCreated_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelBlueprintLibrary, nullptr, "IsGlobalVoxelPoolCreated", Z_Construct_UFunction_UVoxelBlueprintLibrary_IsGlobalVoxelPoolCreated_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_IsGlobalVoxelPoolCreated_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVoxelBlueprintLibrary_IsGlobalVoxelPoolCreated_Statics::VoxelBlueprintLibrary_eventIsGlobalVoxelPoolCreated_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_IsGlobalVoxelPoolCreated_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelBlueprintLibrary_IsGlobalVoxelPoolCreated_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVoxelBlueprintLibrary_IsGlobalVoxelPoolCreated_Statics::VoxelBlueprintLibrary_eventIsGlobalVoxelPoolCreated_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVoxelBlueprintLibrary_IsGlobalVoxelPoolCreated()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelBlueprintLibrary_IsGlobalVoxelPoolCreated_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelBlueprintLibrary::execIsGlobalVoxelPoolCreated)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UVoxelBlueprintLibrary::IsGlobalVoxelPoolCreated();
	P_NATIVE_END;
}
// ********** End Class UVoxelBlueprintLibrary Function IsGlobalVoxelPoolCreated *******************

// ********** Begin Class UVoxelBlueprintLibrary Function IsValidRef *******************************
struct Z_Construct_UFunction_UVoxelBlueprintLibrary_IsValidRef_Statics
{
	struct VoxelBlueprintLibrary_eventIsValidRef_Parms
	{
		AVoxelWorld* World;
		FVoxelToolRenderingRef Ref;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Voxel|Tool Rendering" },
		{ "DefaultToSelf", "World" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelBlueprintLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Ref;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_IsValidRef_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventIsValidRef_Parms, World), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_IsValidRef_Statics::NewProp_Ref = { "Ref", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventIsValidRef_Parms, Ref), Z_Construct_UScriptStruct_FVoxelToolRenderingRef, METADATA_PARAMS(0, nullptr) }; // 1217300782
void Z_Construct_UFunction_UVoxelBlueprintLibrary_IsValidRef_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((VoxelBlueprintLibrary_eventIsValidRef_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_IsValidRef_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VoxelBlueprintLibrary_eventIsValidRef_Parms), &Z_Construct_UFunction_UVoxelBlueprintLibrary_IsValidRef_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelBlueprintLibrary_IsValidRef_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_IsValidRef_Statics::NewProp_World,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_IsValidRef_Statics::NewProp_Ref,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_IsValidRef_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_IsValidRef_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelBlueprintLibrary_IsValidRef_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelBlueprintLibrary, nullptr, "IsValidRef", Z_Construct_UFunction_UVoxelBlueprintLibrary_IsValidRef_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_IsValidRef_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVoxelBlueprintLibrary_IsValidRef_Statics::VoxelBlueprintLibrary_eventIsValidRef_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_IsValidRef_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelBlueprintLibrary_IsValidRef_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVoxelBlueprintLibrary_IsValidRef_Statics::VoxelBlueprintLibrary_eventIsValidRef_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVoxelBlueprintLibrary_IsValidRef()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelBlueprintLibrary_IsValidRef_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelBlueprintLibrary::execIsValidRef)
{
	P_GET_OBJECT(AVoxelWorld,Z_Param_World);
	P_GET_STRUCT(FVoxelToolRenderingRef,Z_Param_Ref);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UVoxelBlueprintLibrary::IsValidRef(Z_Param_World,Z_Param_Ref);
	P_NATIVE_END;
}
// ********** End Class UVoxelBlueprintLibrary Function IsValidRef *********************************

// ********** Begin Class UVoxelBlueprintLibrary Function IsVoxelColorTextureValid *****************
struct Z_Construct_UFunction_UVoxelBlueprintLibrary_IsVoxelColorTextureValid_Statics
{
	struct VoxelBlueprintLibrary_eventIsVoxelColorTextureValid_Parms
	{
		FVoxelFloatTexture Texture;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Voxel|Voxel Texture" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelBlueprintLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Texture;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_IsVoxelColorTextureValid_Statics::NewProp_Texture = { "Texture", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventIsVoxelColorTextureValid_Parms, Texture), Z_Construct_UScriptStruct_FVoxelFloatTexture, METADATA_PARAMS(0, nullptr) }; // 369089072
void Z_Construct_UFunction_UVoxelBlueprintLibrary_IsVoxelColorTextureValid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((VoxelBlueprintLibrary_eventIsVoxelColorTextureValid_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_IsVoxelColorTextureValid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VoxelBlueprintLibrary_eventIsVoxelColorTextureValid_Parms), &Z_Construct_UFunction_UVoxelBlueprintLibrary_IsVoxelColorTextureValid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelBlueprintLibrary_IsVoxelColorTextureValid_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_IsVoxelColorTextureValid_Statics::NewProp_Texture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_IsVoxelColorTextureValid_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_IsVoxelColorTextureValid_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelBlueprintLibrary_IsVoxelColorTextureValid_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelBlueprintLibrary, nullptr, "IsVoxelColorTextureValid", Z_Construct_UFunction_UVoxelBlueprintLibrary_IsVoxelColorTextureValid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_IsVoxelColorTextureValid_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVoxelBlueprintLibrary_IsVoxelColorTextureValid_Statics::VoxelBlueprintLibrary_eventIsVoxelColorTextureValid_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_IsVoxelColorTextureValid_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelBlueprintLibrary_IsVoxelColorTextureValid_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVoxelBlueprintLibrary_IsVoxelColorTextureValid_Statics::VoxelBlueprintLibrary_eventIsVoxelColorTextureValid_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVoxelBlueprintLibrary_IsVoxelColorTextureValid()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelBlueprintLibrary_IsVoxelColorTextureValid_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelBlueprintLibrary::execIsVoxelColorTextureValid)
{
	P_GET_STRUCT(FVoxelFloatTexture,Z_Param_Texture);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UVoxelBlueprintLibrary::IsVoxelColorTextureValid(Z_Param_Texture);
	P_NATIVE_END;
}
// ********** End Class UVoxelBlueprintLibrary Function IsVoxelColorTextureValid *******************

// ********** Begin Class UVoxelBlueprintLibrary Function IsVoxelFloatTextureValid *****************
struct Z_Construct_UFunction_UVoxelBlueprintLibrary_IsVoxelFloatTextureValid_Statics
{
	struct VoxelBlueprintLibrary_eventIsVoxelFloatTextureValid_Parms
	{
		FVoxelFloatTexture Texture;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Voxel|Voxel Texture" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelBlueprintLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Texture;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_IsVoxelFloatTextureValid_Statics::NewProp_Texture = { "Texture", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventIsVoxelFloatTextureValid_Parms, Texture), Z_Construct_UScriptStruct_FVoxelFloatTexture, METADATA_PARAMS(0, nullptr) }; // 369089072
void Z_Construct_UFunction_UVoxelBlueprintLibrary_IsVoxelFloatTextureValid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((VoxelBlueprintLibrary_eventIsVoxelFloatTextureValid_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_IsVoxelFloatTextureValid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VoxelBlueprintLibrary_eventIsVoxelFloatTextureValid_Parms), &Z_Construct_UFunction_UVoxelBlueprintLibrary_IsVoxelFloatTextureValid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelBlueprintLibrary_IsVoxelFloatTextureValid_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_IsVoxelFloatTextureValid_Statics::NewProp_Texture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_IsVoxelFloatTextureValid_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_IsVoxelFloatTextureValid_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelBlueprintLibrary_IsVoxelFloatTextureValid_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelBlueprintLibrary, nullptr, "IsVoxelFloatTextureValid", Z_Construct_UFunction_UVoxelBlueprintLibrary_IsVoxelFloatTextureValid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_IsVoxelFloatTextureValid_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVoxelBlueprintLibrary_IsVoxelFloatTextureValid_Statics::VoxelBlueprintLibrary_eventIsVoxelFloatTextureValid_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_IsVoxelFloatTextureValid_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelBlueprintLibrary_IsVoxelFloatTextureValid_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVoxelBlueprintLibrary_IsVoxelFloatTextureValid_Statics::VoxelBlueprintLibrary_eventIsVoxelFloatTextureValid_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVoxelBlueprintLibrary_IsVoxelFloatTextureValid()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelBlueprintLibrary_IsVoxelFloatTextureValid_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelBlueprintLibrary::execIsVoxelFloatTextureValid)
{
	P_GET_STRUCT(FVoxelFloatTexture,Z_Param_Texture);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UVoxelBlueprintLibrary::IsVoxelFloatTextureValid(Z_Param_Texture);
	P_NATIVE_END;
}
// ********** End Class UVoxelBlueprintLibrary Function IsVoxelFloatTextureValid *******************

// ********** Begin Class UVoxelBlueprintLibrary Function IsVoxelPluginPro *************************
struct Z_Construct_UFunction_UVoxelBlueprintLibrary_IsVoxelPluginPro_Statics
{
	struct VoxelBlueprintLibrary_eventIsVoxelPluginPro_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelBlueprintLibrary.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UVoxelBlueprintLibrary_IsVoxelPluginPro_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((VoxelBlueprintLibrary_eventIsVoxelPluginPro_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_IsVoxelPluginPro_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VoxelBlueprintLibrary_eventIsVoxelPluginPro_Parms), &Z_Construct_UFunction_UVoxelBlueprintLibrary_IsVoxelPluginPro_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelBlueprintLibrary_IsVoxelPluginPro_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_IsVoxelPluginPro_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_IsVoxelPluginPro_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelBlueprintLibrary_IsVoxelPluginPro_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelBlueprintLibrary, nullptr, "IsVoxelPluginPro", Z_Construct_UFunction_UVoxelBlueprintLibrary_IsVoxelPluginPro_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_IsVoxelPluginPro_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVoxelBlueprintLibrary_IsVoxelPluginPro_Statics::VoxelBlueprintLibrary_eventIsVoxelPluginPro_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_IsVoxelPluginPro_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelBlueprintLibrary_IsVoxelPluginPro_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVoxelBlueprintLibrary_IsVoxelPluginPro_Statics::VoxelBlueprintLibrary_eventIsVoxelPluginPro_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVoxelBlueprintLibrary_IsVoxelPluginPro()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelBlueprintLibrary_IsVoxelPluginPro_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelBlueprintLibrary::execIsVoxelPluginPro)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UVoxelBlueprintLibrary::IsVoxelPluginPro();
	P_NATIVE_END;
}
// ********** End Class UVoxelBlueprintLibrary Function IsVoxelPluginPro ***************************

// ********** Begin Class UVoxelBlueprintLibrary Function IsVoxelWorldFoliageLoading ***************
struct Z_Construct_UFunction_UVoxelBlueprintLibrary_IsVoxelWorldFoliageLoading_Statics
{
	struct VoxelBlueprintLibrary_eventIsVoxelWorldFoliageLoading_Parms
	{
		AVoxelWorld* World;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Voxel|Render" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Returns true if there are still foliage tasks queued\n" },
#endif
		{ "DefaultToSelf", "World" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns true if there are still foliage tasks queued" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_IsVoxelWorldFoliageLoading_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventIsVoxelWorldFoliageLoading_Parms, World), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UVoxelBlueprintLibrary_IsVoxelWorldFoliageLoading_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((VoxelBlueprintLibrary_eventIsVoxelWorldFoliageLoading_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_IsVoxelWorldFoliageLoading_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VoxelBlueprintLibrary_eventIsVoxelWorldFoliageLoading_Parms), &Z_Construct_UFunction_UVoxelBlueprintLibrary_IsVoxelWorldFoliageLoading_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelBlueprintLibrary_IsVoxelWorldFoliageLoading_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_IsVoxelWorldFoliageLoading_Statics::NewProp_World,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_IsVoxelWorldFoliageLoading_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_IsVoxelWorldFoliageLoading_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelBlueprintLibrary_IsVoxelWorldFoliageLoading_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelBlueprintLibrary, nullptr, "IsVoxelWorldFoliageLoading", Z_Construct_UFunction_UVoxelBlueprintLibrary_IsVoxelWorldFoliageLoading_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_IsVoxelWorldFoliageLoading_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVoxelBlueprintLibrary_IsVoxelWorldFoliageLoading_Statics::VoxelBlueprintLibrary_eventIsVoxelWorldFoliageLoading_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_IsVoxelWorldFoliageLoading_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelBlueprintLibrary_IsVoxelWorldFoliageLoading_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVoxelBlueprintLibrary_IsVoxelWorldFoliageLoading_Statics::VoxelBlueprintLibrary_eventIsVoxelWorldFoliageLoading_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVoxelBlueprintLibrary_IsVoxelWorldFoliageLoading()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelBlueprintLibrary_IsVoxelWorldFoliageLoading_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelBlueprintLibrary::execIsVoxelWorldFoliageLoading)
{
	P_GET_OBJECT(AVoxelWorld,Z_Param_World);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UVoxelBlueprintLibrary::IsVoxelWorldFoliageLoading(Z_Param_World);
	P_NATIVE_END;
}
// ********** End Class UVoxelBlueprintLibrary Function IsVoxelWorldFoliageLoading *****************

// ********** Begin Class UVoxelBlueprintLibrary Function IsVoxelWorldMeshLoading ******************
struct Z_Construct_UFunction_UVoxelBlueprintLibrary_IsVoxelWorldMeshLoading_Statics
{
	struct VoxelBlueprintLibrary_eventIsVoxelWorldMeshLoading_Parms
	{
		AVoxelWorld* World;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Voxel|Render" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Returns true if there are still mesh tasks queued\n" },
#endif
		{ "DefaultToSelf", "World" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns true if there are still mesh tasks queued" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_IsVoxelWorldMeshLoading_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventIsVoxelWorldMeshLoading_Parms, World), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UVoxelBlueprintLibrary_IsVoxelWorldMeshLoading_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((VoxelBlueprintLibrary_eventIsVoxelWorldMeshLoading_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_IsVoxelWorldMeshLoading_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VoxelBlueprintLibrary_eventIsVoxelWorldMeshLoading_Parms), &Z_Construct_UFunction_UVoxelBlueprintLibrary_IsVoxelWorldMeshLoading_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelBlueprintLibrary_IsVoxelWorldMeshLoading_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_IsVoxelWorldMeshLoading_Statics::NewProp_World,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_IsVoxelWorldMeshLoading_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_IsVoxelWorldMeshLoading_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelBlueprintLibrary_IsVoxelWorldMeshLoading_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelBlueprintLibrary, nullptr, "IsVoxelWorldMeshLoading", Z_Construct_UFunction_UVoxelBlueprintLibrary_IsVoxelWorldMeshLoading_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_IsVoxelWorldMeshLoading_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVoxelBlueprintLibrary_IsVoxelWorldMeshLoading_Statics::VoxelBlueprintLibrary_eventIsVoxelWorldMeshLoading_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_IsVoxelWorldMeshLoading_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelBlueprintLibrary_IsVoxelWorldMeshLoading_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVoxelBlueprintLibrary_IsVoxelWorldMeshLoading_Statics::VoxelBlueprintLibrary_eventIsVoxelWorldMeshLoading_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVoxelBlueprintLibrary_IsVoxelWorldMeshLoading()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelBlueprintLibrary_IsVoxelWorldMeshLoading_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelBlueprintLibrary::execIsVoxelWorldMeshLoading)
{
	P_GET_OBJECT(AVoxelWorld,Z_Param_World);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UVoxelBlueprintLibrary::IsVoxelWorldMeshLoading(Z_Param_World);
	P_NATIVE_END;
}
// ********** End Class UVoxelBlueprintLibrary Function IsVoxelWorldMeshLoading ********************

// ********** Begin Class UVoxelBlueprintLibrary Function IsWorldVoxelPoolCreated ******************
struct Z_Construct_UFunction_UVoxelBlueprintLibrary_IsWorldVoxelPoolCreated_Statics
{
	struct VoxelBlueprintLibrary_eventIsWorldVoxelPoolCreated_Parms
	{
		UWorld* World;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Voxel|Threads" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Is the global voxel thread pool created?\n" },
#endif
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Is the global voxel thread pool created?" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_IsWorldVoxelPoolCreated_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventIsWorldVoxelPoolCreated_Parms, World), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UVoxelBlueprintLibrary_IsWorldVoxelPoolCreated_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((VoxelBlueprintLibrary_eventIsWorldVoxelPoolCreated_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_IsWorldVoxelPoolCreated_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VoxelBlueprintLibrary_eventIsWorldVoxelPoolCreated_Parms), &Z_Construct_UFunction_UVoxelBlueprintLibrary_IsWorldVoxelPoolCreated_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelBlueprintLibrary_IsWorldVoxelPoolCreated_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_IsWorldVoxelPoolCreated_Statics::NewProp_World,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_IsWorldVoxelPoolCreated_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_IsWorldVoxelPoolCreated_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelBlueprintLibrary_IsWorldVoxelPoolCreated_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelBlueprintLibrary, nullptr, "IsWorldVoxelPoolCreated", Z_Construct_UFunction_UVoxelBlueprintLibrary_IsWorldVoxelPoolCreated_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_IsWorldVoxelPoolCreated_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVoxelBlueprintLibrary_IsWorldVoxelPoolCreated_Statics::VoxelBlueprintLibrary_eventIsWorldVoxelPoolCreated_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_IsWorldVoxelPoolCreated_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelBlueprintLibrary_IsWorldVoxelPoolCreated_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVoxelBlueprintLibrary_IsWorldVoxelPoolCreated_Statics::VoxelBlueprintLibrary_eventIsWorldVoxelPoolCreated_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVoxelBlueprintLibrary_IsWorldVoxelPoolCreated()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelBlueprintLibrary_IsWorldVoxelPoolCreated_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelBlueprintLibrary::execIsWorldVoxelPoolCreated)
{
	P_GET_OBJECT(UWorld,Z_Param_World);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UVoxelBlueprintLibrary::IsWorldVoxelPoolCreated(Z_Param_World);
	P_NATIVE_END;
}
// ********** End Class UVoxelBlueprintLibrary Function IsWorldVoxelPoolCreated ********************

// ********** Begin Class UVoxelBlueprintLibrary Function LoadFromSpawnersSave *********************
struct Z_Construct_UFunction_UVoxelBlueprintLibrary_LoadFromSpawnersSave_Statics
{
	struct VoxelBlueprintLibrary_eventLoadFromSpawnersSave_Parms
	{
		AVoxelWorld* World;
		FVoxelSpawnersSave Save;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Voxel|Spawners" },
		{ "DefaultToSelf", "World" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelBlueprintLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Save_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Save;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_LoadFromSpawnersSave_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventLoadFromSpawnersSave_Parms, World), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_LoadFromSpawnersSave_Statics::NewProp_Save = { "Save", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventLoadFromSpawnersSave_Parms, Save), Z_Construct_UScriptStruct_FVoxelSpawnersSave, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Save_MetaData), NewProp_Save_MetaData) }; // 1801030647
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelBlueprintLibrary_LoadFromSpawnersSave_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_LoadFromSpawnersSave_Statics::NewProp_World,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_LoadFromSpawnersSave_Statics::NewProp_Save,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_LoadFromSpawnersSave_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelBlueprintLibrary_LoadFromSpawnersSave_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelBlueprintLibrary, nullptr, "LoadFromSpawnersSave", Z_Construct_UFunction_UVoxelBlueprintLibrary_LoadFromSpawnersSave_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_LoadFromSpawnersSave_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVoxelBlueprintLibrary_LoadFromSpawnersSave_Statics::VoxelBlueprintLibrary_eventLoadFromSpawnersSave_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_LoadFromSpawnersSave_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelBlueprintLibrary_LoadFromSpawnersSave_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVoxelBlueprintLibrary_LoadFromSpawnersSave_Statics::VoxelBlueprintLibrary_eventLoadFromSpawnersSave_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVoxelBlueprintLibrary_LoadFromSpawnersSave()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelBlueprintLibrary_LoadFromSpawnersSave_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelBlueprintLibrary::execLoadFromSpawnersSave)
{
	P_GET_OBJECT(AVoxelWorld,Z_Param_World);
	P_GET_STRUCT_REF(FVoxelSpawnersSave,Z_Param_Out_Save);
	P_FINISH;
	P_NATIVE_BEGIN;
	UVoxelBlueprintLibrary::LoadFromSpawnersSave(Z_Param_World,Z_Param_Out_Save);
	P_NATIVE_END;
}
// ********** End Class UVoxelBlueprintLibrary Function LoadFromSpawnersSave ***********************

// ********** Begin Class UVoxelBlueprintLibrary Function LogMemoryStats ***************************
struct Z_Construct_UFunction_UVoxelBlueprintLibrary_LogMemoryStats_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Voxel|Memory" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelBlueprintLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelBlueprintLibrary_LogMemoryStats_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelBlueprintLibrary, nullptr, "LogMemoryStats", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_LogMemoryStats_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelBlueprintLibrary_LogMemoryStats_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UVoxelBlueprintLibrary_LogMemoryStats()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelBlueprintLibrary_LogMemoryStats_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelBlueprintLibrary::execLogMemoryStats)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	UVoxelBlueprintLibrary::LogMemoryStats();
	P_NATIVE_END;
}
// ********** End Class UVoxelBlueprintLibrary Function LogMemoryStats *****************************

// ********** Begin Class UVoxelBlueprintLibrary Function MakeIntBoxFromGlobalPositionAndRadius ****
struct Z_Construct_UFunction_UVoxelBlueprintLibrary_MakeIntBoxFromGlobalPositionAndRadius_Statics
{
	struct VoxelBlueprintLibrary_eventMakeIntBoxFromGlobalPositionAndRadius_Parms
	{
		AVoxelWorld* World;
		FVector GlobalPosition;
		float Radius;
		FVoxelIntBox ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Voxel|Utilities" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Make IntBox from global position and radius\n\x09 * @param\x09Radius\x09in cm\n\x09 */" },
#endif
		{ "DefaultToSelf", "World" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Make IntBox from global position and radius\n@param       Radius  in cm" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GlobalPosition;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_MakeIntBoxFromGlobalPositionAndRadius_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventMakeIntBoxFromGlobalPositionAndRadius_Parms, World), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_MakeIntBoxFromGlobalPositionAndRadius_Statics::NewProp_GlobalPosition = { "GlobalPosition", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventMakeIntBoxFromGlobalPositionAndRadius_Parms, GlobalPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_MakeIntBoxFromGlobalPositionAndRadius_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventMakeIntBoxFromGlobalPositionAndRadius_Parms, Radius), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_MakeIntBoxFromGlobalPositionAndRadius_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventMakeIntBoxFromGlobalPositionAndRadius_Parms, ReturnValue), Z_Construct_UScriptStruct_FVoxelIntBox, METADATA_PARAMS(0, nullptr) }; // 3520536583
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelBlueprintLibrary_MakeIntBoxFromGlobalPositionAndRadius_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_MakeIntBoxFromGlobalPositionAndRadius_Statics::NewProp_World,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_MakeIntBoxFromGlobalPositionAndRadius_Statics::NewProp_GlobalPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_MakeIntBoxFromGlobalPositionAndRadius_Statics::NewProp_Radius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_MakeIntBoxFromGlobalPositionAndRadius_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_MakeIntBoxFromGlobalPositionAndRadius_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelBlueprintLibrary_MakeIntBoxFromGlobalPositionAndRadius_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelBlueprintLibrary, nullptr, "MakeIntBoxFromGlobalPositionAndRadius", Z_Construct_UFunction_UVoxelBlueprintLibrary_MakeIntBoxFromGlobalPositionAndRadius_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_MakeIntBoxFromGlobalPositionAndRadius_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVoxelBlueprintLibrary_MakeIntBoxFromGlobalPositionAndRadius_Statics::VoxelBlueprintLibrary_eventMakeIntBoxFromGlobalPositionAndRadius_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_MakeIntBoxFromGlobalPositionAndRadius_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelBlueprintLibrary_MakeIntBoxFromGlobalPositionAndRadius_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVoxelBlueprintLibrary_MakeIntBoxFromGlobalPositionAndRadius_Statics::VoxelBlueprintLibrary_eventMakeIntBoxFromGlobalPositionAndRadius_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVoxelBlueprintLibrary_MakeIntBoxFromGlobalPositionAndRadius()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelBlueprintLibrary_MakeIntBoxFromGlobalPositionAndRadius_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelBlueprintLibrary::execMakeIntBoxFromGlobalPositionAndRadius)
{
	P_GET_OBJECT(AVoxelWorld,Z_Param_World);
	P_GET_STRUCT(FVector,Z_Param_GlobalPosition);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Radius);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVoxelIntBox*)Z_Param__Result=UVoxelBlueprintLibrary::MakeIntBoxFromGlobalPositionAndRadius(Z_Param_World,Z_Param_GlobalPosition,Z_Param_Radius);
	P_NATIVE_END;
}
// ********** End Class UVoxelBlueprintLibrary Function MakeIntBoxFromGlobalPositionAndRadius ******

// ********** Begin Class UVoxelBlueprintLibrary Function MakeMaterialMask *************************
struct Z_Construct_UFunction_UVoxelBlueprintLibrary_MakeMaterialMask_Statics
{
	struct VoxelBlueprintLibrary_eventMakeMaterialMask_Parms
	{
		bool R;
		bool G;
		bool B;
		bool A;
		bool U0;
		bool V0;
		bool U1;
		bool V1;
		bool U2;
		bool V2;
		bool U3;
		bool V3;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Voxel|Materials" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelBlueprintLibrary.h" },
	};
#endif // WITH_METADATA
	static void NewProp_R_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_R;
	static void NewProp_G_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_G;
	static void NewProp_B_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_B;
	static void NewProp_A_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_A;
	static void NewProp_U0_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_U0;
	static void NewProp_V0_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_V0;
	static void NewProp_U1_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_U1;
	static void NewProp_V1_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_V1;
	static void NewProp_U2_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_U2;
	static void NewProp_V2_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_V2;
	static void NewProp_U3_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_U3;
	static void NewProp_V3_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_V3;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UVoxelBlueprintLibrary_MakeMaterialMask_Statics::NewProp_R_SetBit(void* Obj)
{
	((VoxelBlueprintLibrary_eventMakeMaterialMask_Parms*)Obj)->R = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_MakeMaterialMask_Statics::NewProp_R = { "R", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VoxelBlueprintLibrary_eventMakeMaterialMask_Parms), &Z_Construct_UFunction_UVoxelBlueprintLibrary_MakeMaterialMask_Statics::NewProp_R_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UVoxelBlueprintLibrary_MakeMaterialMask_Statics::NewProp_G_SetBit(void* Obj)
{
	((VoxelBlueprintLibrary_eventMakeMaterialMask_Parms*)Obj)->G = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_MakeMaterialMask_Statics::NewProp_G = { "G", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VoxelBlueprintLibrary_eventMakeMaterialMask_Parms), &Z_Construct_UFunction_UVoxelBlueprintLibrary_MakeMaterialMask_Statics::NewProp_G_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UVoxelBlueprintLibrary_MakeMaterialMask_Statics::NewProp_B_SetBit(void* Obj)
{
	((VoxelBlueprintLibrary_eventMakeMaterialMask_Parms*)Obj)->B = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_MakeMaterialMask_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VoxelBlueprintLibrary_eventMakeMaterialMask_Parms), &Z_Construct_UFunction_UVoxelBlueprintLibrary_MakeMaterialMask_Statics::NewProp_B_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UVoxelBlueprintLibrary_MakeMaterialMask_Statics::NewProp_A_SetBit(void* Obj)
{
	((VoxelBlueprintLibrary_eventMakeMaterialMask_Parms*)Obj)->A = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_MakeMaterialMask_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VoxelBlueprintLibrary_eventMakeMaterialMask_Parms), &Z_Construct_UFunction_UVoxelBlueprintLibrary_MakeMaterialMask_Statics::NewProp_A_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UVoxelBlueprintLibrary_MakeMaterialMask_Statics::NewProp_U0_SetBit(void* Obj)
{
	((VoxelBlueprintLibrary_eventMakeMaterialMask_Parms*)Obj)->U0 = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_MakeMaterialMask_Statics::NewProp_U0 = { "U0", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VoxelBlueprintLibrary_eventMakeMaterialMask_Parms), &Z_Construct_UFunction_UVoxelBlueprintLibrary_MakeMaterialMask_Statics::NewProp_U0_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UVoxelBlueprintLibrary_MakeMaterialMask_Statics::NewProp_V0_SetBit(void* Obj)
{
	((VoxelBlueprintLibrary_eventMakeMaterialMask_Parms*)Obj)->V0 = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_MakeMaterialMask_Statics::NewProp_V0 = { "V0", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VoxelBlueprintLibrary_eventMakeMaterialMask_Parms), &Z_Construct_UFunction_UVoxelBlueprintLibrary_MakeMaterialMask_Statics::NewProp_V0_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UVoxelBlueprintLibrary_MakeMaterialMask_Statics::NewProp_U1_SetBit(void* Obj)
{
	((VoxelBlueprintLibrary_eventMakeMaterialMask_Parms*)Obj)->U1 = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_MakeMaterialMask_Statics::NewProp_U1 = { "U1", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VoxelBlueprintLibrary_eventMakeMaterialMask_Parms), &Z_Construct_UFunction_UVoxelBlueprintLibrary_MakeMaterialMask_Statics::NewProp_U1_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UVoxelBlueprintLibrary_MakeMaterialMask_Statics::NewProp_V1_SetBit(void* Obj)
{
	((VoxelBlueprintLibrary_eventMakeMaterialMask_Parms*)Obj)->V1 = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_MakeMaterialMask_Statics::NewProp_V1 = { "V1", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VoxelBlueprintLibrary_eventMakeMaterialMask_Parms), &Z_Construct_UFunction_UVoxelBlueprintLibrary_MakeMaterialMask_Statics::NewProp_V1_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UVoxelBlueprintLibrary_MakeMaterialMask_Statics::NewProp_U2_SetBit(void* Obj)
{
	((VoxelBlueprintLibrary_eventMakeMaterialMask_Parms*)Obj)->U2 = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_MakeMaterialMask_Statics::NewProp_U2 = { "U2", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VoxelBlueprintLibrary_eventMakeMaterialMask_Parms), &Z_Construct_UFunction_UVoxelBlueprintLibrary_MakeMaterialMask_Statics::NewProp_U2_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UVoxelBlueprintLibrary_MakeMaterialMask_Statics::NewProp_V2_SetBit(void* Obj)
{
	((VoxelBlueprintLibrary_eventMakeMaterialMask_Parms*)Obj)->V2 = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_MakeMaterialMask_Statics::NewProp_V2 = { "V2", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VoxelBlueprintLibrary_eventMakeMaterialMask_Parms), &Z_Construct_UFunction_UVoxelBlueprintLibrary_MakeMaterialMask_Statics::NewProp_V2_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UVoxelBlueprintLibrary_MakeMaterialMask_Statics::NewProp_U3_SetBit(void* Obj)
{
	((VoxelBlueprintLibrary_eventMakeMaterialMask_Parms*)Obj)->U3 = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_MakeMaterialMask_Statics::NewProp_U3 = { "U3", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VoxelBlueprintLibrary_eventMakeMaterialMask_Parms), &Z_Construct_UFunction_UVoxelBlueprintLibrary_MakeMaterialMask_Statics::NewProp_U3_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UVoxelBlueprintLibrary_MakeMaterialMask_Statics::NewProp_V3_SetBit(void* Obj)
{
	((VoxelBlueprintLibrary_eventMakeMaterialMask_Parms*)Obj)->V3 = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_MakeMaterialMask_Statics::NewProp_V3 = { "V3", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VoxelBlueprintLibrary_eventMakeMaterialMask_Parms), &Z_Construct_UFunction_UVoxelBlueprintLibrary_MakeMaterialMask_Statics::NewProp_V3_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_MakeMaterialMask_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventMakeMaterialMask_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelBlueprintLibrary_MakeMaterialMask_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_MakeMaterialMask_Statics::NewProp_R,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_MakeMaterialMask_Statics::NewProp_G,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_MakeMaterialMask_Statics::NewProp_B,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_MakeMaterialMask_Statics::NewProp_A,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_MakeMaterialMask_Statics::NewProp_U0,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_MakeMaterialMask_Statics::NewProp_V0,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_MakeMaterialMask_Statics::NewProp_U1,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_MakeMaterialMask_Statics::NewProp_V1,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_MakeMaterialMask_Statics::NewProp_U2,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_MakeMaterialMask_Statics::NewProp_V2,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_MakeMaterialMask_Statics::NewProp_U3,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_MakeMaterialMask_Statics::NewProp_V3,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_MakeMaterialMask_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_MakeMaterialMask_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelBlueprintLibrary_MakeMaterialMask_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelBlueprintLibrary, nullptr, "MakeMaterialMask", Z_Construct_UFunction_UVoxelBlueprintLibrary_MakeMaterialMask_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_MakeMaterialMask_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVoxelBlueprintLibrary_MakeMaterialMask_Statics::VoxelBlueprintLibrary_eventMakeMaterialMask_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_MakeMaterialMask_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelBlueprintLibrary_MakeMaterialMask_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVoxelBlueprintLibrary_MakeMaterialMask_Statics::VoxelBlueprintLibrary_eventMakeMaterialMask_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVoxelBlueprintLibrary_MakeMaterialMask()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelBlueprintLibrary_MakeMaterialMask_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelBlueprintLibrary::execMakeMaterialMask)
{
	P_GET_UBOOL(Z_Param_R);
	P_GET_UBOOL(Z_Param_G);
	P_GET_UBOOL(Z_Param_B);
	P_GET_UBOOL(Z_Param_A);
	P_GET_UBOOL(Z_Param_U0);
	P_GET_UBOOL(Z_Param_V0);
	P_GET_UBOOL(Z_Param_U1);
	P_GET_UBOOL(Z_Param_V1);
	P_GET_UBOOL(Z_Param_U2);
	P_GET_UBOOL(Z_Param_V2);
	P_GET_UBOOL(Z_Param_U3);
	P_GET_UBOOL(Z_Param_V3);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=UVoxelBlueprintLibrary::MakeMaterialMask(Z_Param_R,Z_Param_G,Z_Param_B,Z_Param_A,Z_Param_U0,Z_Param_V0,Z_Param_U1,Z_Param_V1,Z_Param_U2,Z_Param_V2,Z_Param_U3,Z_Param_V3);
	P_NATIVE_END;
}
// ********** End Class UVoxelBlueprintLibrary Function MakeMaterialMask ***************************

// ********** Begin Class UVoxelBlueprintLibrary Function MakeRawMaterial **************************
struct Z_Construct_UFunction_UVoxelBlueprintLibrary_MakeRawMaterial_Statics
{
	struct VoxelBlueprintLibrary_eventMakeRawMaterial_Parms
	{
		uint8 R;
		uint8 G;
		uint8 B;
		uint8 A;
		uint8 U0;
		uint8 V0;
		uint8 U1;
		uint8 V1;
		uint8 U2;
		uint8 V2;
		uint8 U3;
		uint8 V3;
		FVoxelMaterial ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Voxel|Materials" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelBlueprintLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_R;
	static const UECodeGen_Private::FBytePropertyParams NewProp_G;
	static const UECodeGen_Private::FBytePropertyParams NewProp_B;
	static const UECodeGen_Private::FBytePropertyParams NewProp_A;
	static const UECodeGen_Private::FBytePropertyParams NewProp_U0;
	static const UECodeGen_Private::FBytePropertyParams NewProp_V0;
	static const UECodeGen_Private::FBytePropertyParams NewProp_U1;
	static const UECodeGen_Private::FBytePropertyParams NewProp_V1;
	static const UECodeGen_Private::FBytePropertyParams NewProp_U2;
	static const UECodeGen_Private::FBytePropertyParams NewProp_V2;
	static const UECodeGen_Private::FBytePropertyParams NewProp_U3;
	static const UECodeGen_Private::FBytePropertyParams NewProp_V3;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_MakeRawMaterial_Statics::NewProp_R = { "R", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventMakeRawMaterial_Parms, R), nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_MakeRawMaterial_Statics::NewProp_G = { "G", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventMakeRawMaterial_Parms, G), nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_MakeRawMaterial_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventMakeRawMaterial_Parms, B), nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_MakeRawMaterial_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventMakeRawMaterial_Parms, A), nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_MakeRawMaterial_Statics::NewProp_U0 = { "U0", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventMakeRawMaterial_Parms, U0), nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_MakeRawMaterial_Statics::NewProp_V0 = { "V0", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventMakeRawMaterial_Parms, V0), nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_MakeRawMaterial_Statics::NewProp_U1 = { "U1", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventMakeRawMaterial_Parms, U1), nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_MakeRawMaterial_Statics::NewProp_V1 = { "V1", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventMakeRawMaterial_Parms, V1), nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_MakeRawMaterial_Statics::NewProp_U2 = { "U2", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventMakeRawMaterial_Parms, U2), nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_MakeRawMaterial_Statics::NewProp_V2 = { "V2", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventMakeRawMaterial_Parms, V2), nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_MakeRawMaterial_Statics::NewProp_U3 = { "U3", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventMakeRawMaterial_Parms, U3), nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_MakeRawMaterial_Statics::NewProp_V3 = { "V3", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventMakeRawMaterial_Parms, V3), nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_MakeRawMaterial_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventMakeRawMaterial_Parms, ReturnValue), Z_Construct_UScriptStruct_FVoxelMaterial, METADATA_PARAMS(0, nullptr) }; // 3766892224
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelBlueprintLibrary_MakeRawMaterial_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_MakeRawMaterial_Statics::NewProp_R,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_MakeRawMaterial_Statics::NewProp_G,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_MakeRawMaterial_Statics::NewProp_B,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_MakeRawMaterial_Statics::NewProp_A,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_MakeRawMaterial_Statics::NewProp_U0,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_MakeRawMaterial_Statics::NewProp_V0,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_MakeRawMaterial_Statics::NewProp_U1,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_MakeRawMaterial_Statics::NewProp_V1,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_MakeRawMaterial_Statics::NewProp_U2,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_MakeRawMaterial_Statics::NewProp_V2,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_MakeRawMaterial_Statics::NewProp_U3,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_MakeRawMaterial_Statics::NewProp_V3,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_MakeRawMaterial_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_MakeRawMaterial_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelBlueprintLibrary_MakeRawMaterial_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelBlueprintLibrary, nullptr, "MakeRawMaterial", Z_Construct_UFunction_UVoxelBlueprintLibrary_MakeRawMaterial_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_MakeRawMaterial_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVoxelBlueprintLibrary_MakeRawMaterial_Statics::VoxelBlueprintLibrary_eventMakeRawMaterial_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_MakeRawMaterial_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelBlueprintLibrary_MakeRawMaterial_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVoxelBlueprintLibrary_MakeRawMaterial_Statics::VoxelBlueprintLibrary_eventMakeRawMaterial_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVoxelBlueprintLibrary_MakeRawMaterial()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelBlueprintLibrary_MakeRawMaterial_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelBlueprintLibrary::execMakeRawMaterial)
{
	P_GET_PROPERTY(FByteProperty,Z_Param_R);
	P_GET_PROPERTY(FByteProperty,Z_Param_G);
	P_GET_PROPERTY(FByteProperty,Z_Param_B);
	P_GET_PROPERTY(FByteProperty,Z_Param_A);
	P_GET_PROPERTY(FByteProperty,Z_Param_U0);
	P_GET_PROPERTY(FByteProperty,Z_Param_V0);
	P_GET_PROPERTY(FByteProperty,Z_Param_U1);
	P_GET_PROPERTY(FByteProperty,Z_Param_V1);
	P_GET_PROPERTY(FByteProperty,Z_Param_U2);
	P_GET_PROPERTY(FByteProperty,Z_Param_V2);
	P_GET_PROPERTY(FByteProperty,Z_Param_U3);
	P_GET_PROPERTY(FByteProperty,Z_Param_V3);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVoxelMaterial*)Z_Param__Result=UVoxelBlueprintLibrary::MakeRawMaterial(Z_Param_R,Z_Param_G,Z_Param_B,Z_Param_A,Z_Param_U0,Z_Param_V0,Z_Param_U1,Z_Param_V1,Z_Param_U2,Z_Param_V2,Z_Param_U3,Z_Param_V3);
	P_NATIVE_END;
}
// ********** End Class UVoxelBlueprintLibrary Function MakeRawMaterial ****************************

// ********** Begin Class UVoxelBlueprintLibrary Function MarkSpawnersDirty ************************
struct Z_Construct_UFunction_UVoxelBlueprintLibrary_MarkSpawnersDirty_Statics
{
	struct VoxelBlueprintLibrary_eventMarkSpawnersDirty_Parms
	{
		AVoxelWorld* World;
		FVoxelIntBox Bounds;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Voxel|Spawners" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Mark spawners as dirty so that they don't get trash if they go out of scope\n" },
#endif
		{ "DefaultToSelf", "World" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Mark spawners as dirty so that they don't get trash if they go out of scope" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Bounds;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_MarkSpawnersDirty_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventMarkSpawnersDirty_Parms, World), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_MarkSpawnersDirty_Statics::NewProp_Bounds = { "Bounds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventMarkSpawnersDirty_Parms, Bounds), Z_Construct_UScriptStruct_FVoxelIntBox, METADATA_PARAMS(0, nullptr) }; // 3520536583
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelBlueprintLibrary_MarkSpawnersDirty_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_MarkSpawnersDirty_Statics::NewProp_World,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_MarkSpawnersDirty_Statics::NewProp_Bounds,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_MarkSpawnersDirty_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelBlueprintLibrary_MarkSpawnersDirty_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelBlueprintLibrary, nullptr, "MarkSpawnersDirty", Z_Construct_UFunction_UVoxelBlueprintLibrary_MarkSpawnersDirty_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_MarkSpawnersDirty_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVoxelBlueprintLibrary_MarkSpawnersDirty_Statics::VoxelBlueprintLibrary_eventMarkSpawnersDirty_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_MarkSpawnersDirty_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelBlueprintLibrary_MarkSpawnersDirty_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVoxelBlueprintLibrary_MarkSpawnersDirty_Statics::VoxelBlueprintLibrary_eventMarkSpawnersDirty_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVoxelBlueprintLibrary_MarkSpawnersDirty()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelBlueprintLibrary_MarkSpawnersDirty_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelBlueprintLibrary::execMarkSpawnersDirty)
{
	P_GET_OBJECT(AVoxelWorld,Z_Param_World);
	P_GET_STRUCT(FVoxelIntBox,Z_Param_Bounds);
	P_FINISH;
	P_NATIVE_BEGIN;
	UVoxelBlueprintLibrary::MarkSpawnersDirty(Z_Param_World,Z_Param_Bounds);
	P_NATIVE_END;
}
// ********** End Class UVoxelBlueprintLibrary Function MarkSpawnersDirty **************************

// ********** Begin Class UVoxelBlueprintLibrary Function Multiply_IntIntVector ********************
struct Z_Construct_UFunction_UVoxelBlueprintLibrary_Multiply_IntIntVector_Statics
{
	struct VoxelBlueprintLibrary_eventMultiply_IntIntVector_Parms
	{
		int32 Left;
		FIntVector Right;
		FIntVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Math|IntVector" },
		{ "CompactNodeTitle", "*" },
		{ "DisplayName", "int * IntVector" },
		{ "Keywords", "* multiply" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelBlueprintLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Left;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Right;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_Multiply_IntIntVector_Statics::NewProp_Left = { "Left", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventMultiply_IntIntVector_Parms, Left), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_Multiply_IntIntVector_Statics::NewProp_Right = { "Right", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventMultiply_IntIntVector_Parms, Right), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_Multiply_IntIntVector_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventMultiply_IntIntVector_Parms, ReturnValue), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelBlueprintLibrary_Multiply_IntIntVector_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_Multiply_IntIntVector_Statics::NewProp_Left,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_Multiply_IntIntVector_Statics::NewProp_Right,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_Multiply_IntIntVector_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_Multiply_IntIntVector_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelBlueprintLibrary_Multiply_IntIntVector_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelBlueprintLibrary, nullptr, "Multiply_IntIntVector", Z_Construct_UFunction_UVoxelBlueprintLibrary_Multiply_IntIntVector_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_Multiply_IntIntVector_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVoxelBlueprintLibrary_Multiply_IntIntVector_Statics::VoxelBlueprintLibrary_eventMultiply_IntIntVector_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_Multiply_IntIntVector_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelBlueprintLibrary_Multiply_IntIntVector_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVoxelBlueprintLibrary_Multiply_IntIntVector_Statics::VoxelBlueprintLibrary_eventMultiply_IntIntVector_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVoxelBlueprintLibrary_Multiply_IntIntVector()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelBlueprintLibrary_Multiply_IntIntVector_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelBlueprintLibrary::execMultiply_IntIntVector)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Left);
	P_GET_STRUCT(FIntVector,Z_Param_Right);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FIntVector*)Z_Param__Result=UVoxelBlueprintLibrary::Multiply_IntIntVector(Z_Param_Left,Z_Param_Right);
	P_NATIVE_END;
}
// ********** End Class UVoxelBlueprintLibrary Function Multiply_IntIntVector **********************

// ********** Begin Class UVoxelBlueprintLibrary Function Multiply_IntVectorInt ********************
struct Z_Construct_UFunction_UVoxelBlueprintLibrary_Multiply_IntVectorInt_Statics
{
	struct VoxelBlueprintLibrary_eventMultiply_IntVectorInt_Parms
	{
		FIntVector Left;
		int32 Right;
		FIntVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Math|IntVector" },
		{ "CompactNodeTitle", "*" },
		{ "DisplayName", "IntVector * int" },
		{ "Keywords", "* multiply" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelBlueprintLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Left;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Right;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_Multiply_IntVectorInt_Statics::NewProp_Left = { "Left", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventMultiply_IntVectorInt_Parms, Left), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_Multiply_IntVectorInt_Statics::NewProp_Right = { "Right", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventMultiply_IntVectorInt_Parms, Right), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_Multiply_IntVectorInt_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventMultiply_IntVectorInt_Parms, ReturnValue), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelBlueprintLibrary_Multiply_IntVectorInt_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_Multiply_IntVectorInt_Statics::NewProp_Left,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_Multiply_IntVectorInt_Statics::NewProp_Right,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_Multiply_IntVectorInt_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_Multiply_IntVectorInt_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelBlueprintLibrary_Multiply_IntVectorInt_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelBlueprintLibrary, nullptr, "Multiply_IntVectorInt", Z_Construct_UFunction_UVoxelBlueprintLibrary_Multiply_IntVectorInt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_Multiply_IntVectorInt_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVoxelBlueprintLibrary_Multiply_IntVectorInt_Statics::VoxelBlueprintLibrary_eventMultiply_IntVectorInt_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_Multiply_IntVectorInt_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelBlueprintLibrary_Multiply_IntVectorInt_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVoxelBlueprintLibrary_Multiply_IntVectorInt_Statics::VoxelBlueprintLibrary_eventMultiply_IntVectorInt_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVoxelBlueprintLibrary_Multiply_IntVectorInt()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelBlueprintLibrary_Multiply_IntVectorInt_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelBlueprintLibrary::execMultiply_IntVectorInt)
{
	P_GET_STRUCT(FIntVector,Z_Param_Left);
	P_GET_PROPERTY(FIntProperty,Z_Param_Right);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FIntVector*)Z_Param__Result=UVoxelBlueprintLibrary::Multiply_IntVectorInt(Z_Param_Left,Z_Param_Right);
	P_NATIVE_END;
}
// ********** End Class UVoxelBlueprintLibrary Function Multiply_IntVectorInt **********************

// ********** Begin Class UVoxelBlueprintLibrary Function Multiply_IntVectorIntVector **************
struct Z_Construct_UFunction_UVoxelBlueprintLibrary_Multiply_IntVectorIntVector_Statics
{
	struct VoxelBlueprintLibrary_eventMultiply_IntVectorIntVector_Parms
	{
		FIntVector Left;
		FIntVector Right;
		FIntVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Math|IntVector" },
		{ "CompactNodeTitle", "*" },
		{ "DisplayName", "IntVector * IntVector" },
		{ "Keywords", "* multiply" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelBlueprintLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Left;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Right;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_Multiply_IntVectorIntVector_Statics::NewProp_Left = { "Left", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventMultiply_IntVectorIntVector_Parms, Left), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_Multiply_IntVectorIntVector_Statics::NewProp_Right = { "Right", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventMultiply_IntVectorIntVector_Parms, Right), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_Multiply_IntVectorIntVector_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventMultiply_IntVectorIntVector_Parms, ReturnValue), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelBlueprintLibrary_Multiply_IntVectorIntVector_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_Multiply_IntVectorIntVector_Statics::NewProp_Left,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_Multiply_IntVectorIntVector_Statics::NewProp_Right,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_Multiply_IntVectorIntVector_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_Multiply_IntVectorIntVector_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelBlueprintLibrary_Multiply_IntVectorIntVector_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelBlueprintLibrary, nullptr, "Multiply_IntVectorIntVector", Z_Construct_UFunction_UVoxelBlueprintLibrary_Multiply_IntVectorIntVector_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_Multiply_IntVectorIntVector_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVoxelBlueprintLibrary_Multiply_IntVectorIntVector_Statics::VoxelBlueprintLibrary_eventMultiply_IntVectorIntVector_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_Multiply_IntVectorIntVector_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelBlueprintLibrary_Multiply_IntVectorIntVector_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVoxelBlueprintLibrary_Multiply_IntVectorIntVector_Statics::VoxelBlueprintLibrary_eventMultiply_IntVectorIntVector_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVoxelBlueprintLibrary_Multiply_IntVectorIntVector()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelBlueprintLibrary_Multiply_IntVectorIntVector_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelBlueprintLibrary::execMultiply_IntVectorIntVector)
{
	P_GET_STRUCT(FIntVector,Z_Param_Left);
	P_GET_STRUCT(FIntVector,Z_Param_Right);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FIntVector*)Z_Param__Result=UVoxelBlueprintLibrary::Multiply_IntVectorIntVector(Z_Param_Left,Z_Param_Right);
	P_NATIVE_END;
}
// ********** End Class UVoxelBlueprintLibrary Function Multiply_IntVectorIntVector ****************

// ********** Begin Class UVoxelBlueprintLibrary Function NumberOfCores ****************************
struct Z_Construct_UFunction_UVoxelBlueprintLibrary_NumberOfCores_Statics
{
	struct VoxelBlueprintLibrary_eventNumberOfCores_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Voxel" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Returns the number of cores the CPU has. Ignores hyperthreading unless -usehyperthreading is passed as a command line argument.\n" },
#endif
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the number of cores the CPU has. Ignores hyperthreading unless -usehyperthreading is passed as a command line argument." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_NumberOfCores_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventNumberOfCores_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelBlueprintLibrary_NumberOfCores_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_NumberOfCores_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_NumberOfCores_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelBlueprintLibrary_NumberOfCores_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelBlueprintLibrary, nullptr, "NumberOfCores", Z_Construct_UFunction_UVoxelBlueprintLibrary_NumberOfCores_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_NumberOfCores_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVoxelBlueprintLibrary_NumberOfCores_Statics::VoxelBlueprintLibrary_eventNumberOfCores_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_NumberOfCores_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelBlueprintLibrary_NumberOfCores_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVoxelBlueprintLibrary_NumberOfCores_Statics::VoxelBlueprintLibrary_eventNumberOfCores_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVoxelBlueprintLibrary_NumberOfCores()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelBlueprintLibrary_NumberOfCores_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelBlueprintLibrary::execNumberOfCores)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=UVoxelBlueprintLibrary::NumberOfCores();
	P_NATIVE_END;
}
// ********** End Class UVoxelBlueprintLibrary Function NumberOfCores ******************************

// ********** Begin Class UVoxelBlueprintLibrary Function RaiseError *******************************
struct Z_Construct_UFunction_UVoxelBlueprintLibrary_RaiseError_Statics
{
	struct VoxelBlueprintLibrary_eventRaiseError_Parms
	{
		FString Message;
		UObject* Object;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "Object" },
		{ "Category", "Voxel" },
		{ "CPP_Default_Object", "None" },
		{ "DefaultToSelf", "Object" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelBlueprintLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Message;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Object;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_RaiseError_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventRaiseError_Parms, Message), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_RaiseError_Statics::NewProp_Object = { "Object", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventRaiseError_Parms, Object), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelBlueprintLibrary_RaiseError_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_RaiseError_Statics::NewProp_Message,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_RaiseError_Statics::NewProp_Object,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_RaiseError_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelBlueprintLibrary_RaiseError_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelBlueprintLibrary, nullptr, "RaiseError", Z_Construct_UFunction_UVoxelBlueprintLibrary_RaiseError_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_RaiseError_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVoxelBlueprintLibrary_RaiseError_Statics::VoxelBlueprintLibrary_eventRaiseError_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_RaiseError_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelBlueprintLibrary_RaiseError_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVoxelBlueprintLibrary_RaiseError_Statics::VoxelBlueprintLibrary_eventRaiseError_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVoxelBlueprintLibrary_RaiseError()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelBlueprintLibrary_RaiseError_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelBlueprintLibrary::execRaiseError)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Message);
	P_GET_OBJECT(UObject,Z_Param_Object);
	P_FINISH;
	P_NATIVE_BEGIN;
	UVoxelBlueprintLibrary::RaiseError(Z_Param_Message,Z_Param_Object);
	P_NATIVE_END;
}
// ********** End Class UVoxelBlueprintLibrary Function RaiseError *********************************

// ********** Begin Class UVoxelBlueprintLibrary Function RaiseInfo ********************************
struct Z_Construct_UFunction_UVoxelBlueprintLibrary_RaiseInfo_Statics
{
	struct VoxelBlueprintLibrary_eventRaiseInfo_Parms
	{
		FString Message;
		UObject* Object;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "Object" },
		{ "Category", "Voxel" },
		{ "CPP_Default_Object", "None" },
		{ "DefaultToSelf", "Object" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelBlueprintLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Message;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Object;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_RaiseInfo_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventRaiseInfo_Parms, Message), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_RaiseInfo_Statics::NewProp_Object = { "Object", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventRaiseInfo_Parms, Object), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelBlueprintLibrary_RaiseInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_RaiseInfo_Statics::NewProp_Message,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_RaiseInfo_Statics::NewProp_Object,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_RaiseInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelBlueprintLibrary_RaiseInfo_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelBlueprintLibrary, nullptr, "RaiseInfo", Z_Construct_UFunction_UVoxelBlueprintLibrary_RaiseInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_RaiseInfo_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVoxelBlueprintLibrary_RaiseInfo_Statics::VoxelBlueprintLibrary_eventRaiseInfo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_RaiseInfo_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelBlueprintLibrary_RaiseInfo_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVoxelBlueprintLibrary_RaiseInfo_Statics::VoxelBlueprintLibrary_eventRaiseInfo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVoxelBlueprintLibrary_RaiseInfo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelBlueprintLibrary_RaiseInfo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelBlueprintLibrary::execRaiseInfo)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Message);
	P_GET_OBJECT(UObject,Z_Param_Object);
	P_FINISH;
	P_NATIVE_BEGIN;
	UVoxelBlueprintLibrary::RaiseInfo(Z_Param_Message,Z_Param_Object);
	P_NATIVE_END;
}
// ********** End Class UVoxelBlueprintLibrary Function RaiseInfo **********************************

// ********** Begin Class UVoxelBlueprintLibrary Function RaiseWarning *****************************
struct Z_Construct_UFunction_UVoxelBlueprintLibrary_RaiseWarning_Statics
{
	struct VoxelBlueprintLibrary_eventRaiseWarning_Parms
	{
		FString Message;
		UObject* Object;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "Object" },
		{ "Category", "Voxel" },
		{ "CPP_Default_Object", "None" },
		{ "DefaultToSelf", "Object" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelBlueprintLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Message;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Object;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_RaiseWarning_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventRaiseWarning_Parms, Message), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_RaiseWarning_Statics::NewProp_Object = { "Object", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventRaiseWarning_Parms, Object), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelBlueprintLibrary_RaiseWarning_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_RaiseWarning_Statics::NewProp_Message,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_RaiseWarning_Statics::NewProp_Object,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_RaiseWarning_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelBlueprintLibrary_RaiseWarning_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelBlueprintLibrary, nullptr, "RaiseWarning", Z_Construct_UFunction_UVoxelBlueprintLibrary_RaiseWarning_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_RaiseWarning_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVoxelBlueprintLibrary_RaiseWarning_Statics::VoxelBlueprintLibrary_eventRaiseWarning_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_RaiseWarning_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelBlueprintLibrary_RaiseWarning_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVoxelBlueprintLibrary_RaiseWarning_Statics::VoxelBlueprintLibrary_eventRaiseWarning_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVoxelBlueprintLibrary_RaiseWarning()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelBlueprintLibrary_RaiseWarning_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelBlueprintLibrary::execRaiseWarning)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Message);
	P_GET_OBJECT(UObject,Z_Param_Object);
	P_FINISH;
	P_NATIVE_BEGIN;
	UVoxelBlueprintLibrary::RaiseWarning(Z_Param_Message,Z_Param_Object);
	P_NATIVE_END;
}
// ********** End Class UVoxelBlueprintLibrary Function RaiseWarning *******************************

// ********** Begin Class UVoxelBlueprintLibrary Function Recreate *********************************
struct Z_Construct_UFunction_UVoxelBlueprintLibrary_Recreate_Statics
{
	struct VoxelBlueprintLibrary_eventRecreate_Parms
	{
		AVoxelWorld* World;
		bool bSaveData;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Voxel|Render" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Call this to recreate the voxel world entirely, optionally keeping data intact by saving it\n" },
#endif
		{ "CPP_Default_bSaveData", "true" },
		{ "DefaultToSelf", "World" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Call this to recreate the voxel world entirely, optionally keeping data intact by saving it" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
	static void NewProp_bSaveData_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSaveData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_Recreate_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventRecreate_Parms, World), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UVoxelBlueprintLibrary_Recreate_Statics::NewProp_bSaveData_SetBit(void* Obj)
{
	((VoxelBlueprintLibrary_eventRecreate_Parms*)Obj)->bSaveData = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_Recreate_Statics::NewProp_bSaveData = { "bSaveData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VoxelBlueprintLibrary_eventRecreate_Parms), &Z_Construct_UFunction_UVoxelBlueprintLibrary_Recreate_Statics::NewProp_bSaveData_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelBlueprintLibrary_Recreate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_Recreate_Statics::NewProp_World,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_Recreate_Statics::NewProp_bSaveData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_Recreate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelBlueprintLibrary_Recreate_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelBlueprintLibrary, nullptr, "Recreate", Z_Construct_UFunction_UVoxelBlueprintLibrary_Recreate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_Recreate_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVoxelBlueprintLibrary_Recreate_Statics::VoxelBlueprintLibrary_eventRecreate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_Recreate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelBlueprintLibrary_Recreate_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVoxelBlueprintLibrary_Recreate_Statics::VoxelBlueprintLibrary_eventRecreate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVoxelBlueprintLibrary_Recreate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelBlueprintLibrary_Recreate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelBlueprintLibrary::execRecreate)
{
	P_GET_OBJECT(AVoxelWorld,Z_Param_World);
	P_GET_UBOOL(Z_Param_bSaveData);
	P_FINISH;
	P_NATIVE_BEGIN;
	UVoxelBlueprintLibrary::Recreate(Z_Param_World,Z_Param_bSaveData);
	P_NATIVE_END;
}
// ********** End Class UVoxelBlueprintLibrary Function Recreate ***********************************

// ********** Begin Class UVoxelBlueprintLibrary Function RecreateRender ***************************
struct Z_Construct_UFunction_UVoxelBlueprintLibrary_RecreateRender_Statics
{
	struct VoxelBlueprintLibrary_eventRecreateRender_Parms
	{
		AVoxelWorld* World;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Voxel|Render" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Call this to recreate the voxel world rendering entirely, keeping data intact\n" },
#endif
		{ "DefaultToSelf", "World" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Call this to recreate the voxel world rendering entirely, keeping data intact" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_RecreateRender_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventRecreateRender_Parms, World), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelBlueprintLibrary_RecreateRender_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_RecreateRender_Statics::NewProp_World,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_RecreateRender_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelBlueprintLibrary_RecreateRender_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelBlueprintLibrary, nullptr, "RecreateRender", Z_Construct_UFunction_UVoxelBlueprintLibrary_RecreateRender_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_RecreateRender_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVoxelBlueprintLibrary_RecreateRender_Statics::VoxelBlueprintLibrary_eventRecreateRender_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_RecreateRender_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelBlueprintLibrary_RecreateRender_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVoxelBlueprintLibrary_RecreateRender_Statics::VoxelBlueprintLibrary_eventRecreateRender_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVoxelBlueprintLibrary_RecreateRender()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelBlueprintLibrary_RecreateRender_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelBlueprintLibrary::execRecreateRender)
{
	P_GET_OBJECT(AVoxelWorld,Z_Param_World);
	P_FINISH;
	P_NATIVE_BEGIN;
	UVoxelBlueprintLibrary::RecreateRender(Z_Param_World);
	P_NATIVE_END;
}
// ********** End Class UVoxelBlueprintLibrary Function RecreateRender *****************************

// ********** Begin Class UVoxelBlueprintLibrary Function RecreateSpawners *************************
struct Z_Construct_UFunction_UVoxelBlueprintLibrary_RecreateSpawners_Statics
{
	struct VoxelBlueprintLibrary_eventRecreateSpawners_Parms
	{
		AVoxelWorld* World;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Voxel|Render" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Call this to recreate the voxel world spawners\n" },
#endif
		{ "DefaultToSelf", "World" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Call this to recreate the voxel world spawners" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_RecreateSpawners_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventRecreateSpawners_Parms, World), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelBlueprintLibrary_RecreateSpawners_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_RecreateSpawners_Statics::NewProp_World,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_RecreateSpawners_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelBlueprintLibrary_RecreateSpawners_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelBlueprintLibrary, nullptr, "RecreateSpawners", Z_Construct_UFunction_UVoxelBlueprintLibrary_RecreateSpawners_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_RecreateSpawners_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVoxelBlueprintLibrary_RecreateSpawners_Statics::VoxelBlueprintLibrary_eventRecreateSpawners_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_RecreateSpawners_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelBlueprintLibrary_RecreateSpawners_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVoxelBlueprintLibrary_RecreateSpawners_Statics::VoxelBlueprintLibrary_eventRecreateSpawners_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVoxelBlueprintLibrary_RecreateSpawners()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelBlueprintLibrary_RecreateSpawners_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelBlueprintLibrary::execRecreateSpawners)
{
	P_GET_OBJECT(AVoxelWorld,Z_Param_World);
	P_FINISH;
	P_NATIVE_BEGIN;
	UVoxelBlueprintLibrary::RecreateSpawners(Z_Param_World);
	P_NATIVE_END;
}
// ********** End Class UVoxelBlueprintLibrary Function RecreateSpawners ***************************

// ********** Begin Class UVoxelBlueprintLibrary Function Redo *************************************
struct Z_Construct_UFunction_UVoxelBlueprintLibrary_Redo_Statics
{
	struct VoxelBlueprintLibrary_eventRedo_Parms
	{
		AVoxelWorld* World;
		TArray<FVoxelIntBox> OutUpdatedBounds;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Voxel|UndoRedo" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Redo last undone frame. bEnableUndoRedo must be true, and SaveFrame must have been called after any edits\n// @return Success\n" },
#endif
		{ "DefaultToSelf", "World" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Redo last undone frame. bEnableUndoRedo must be true, and SaveFrame must have been called after any edits\n@return Success" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutUpdatedBounds_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutUpdatedBounds;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_Redo_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventRedo_Parms, World), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_Redo_Statics::NewProp_OutUpdatedBounds_Inner = { "OutUpdatedBounds", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVoxelIntBox, METADATA_PARAMS(0, nullptr) }; // 3520536583
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_Redo_Statics::NewProp_OutUpdatedBounds = { "OutUpdatedBounds", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventRedo_Parms, OutUpdatedBounds), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 3520536583
void Z_Construct_UFunction_UVoxelBlueprintLibrary_Redo_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((VoxelBlueprintLibrary_eventRedo_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_Redo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VoxelBlueprintLibrary_eventRedo_Parms), &Z_Construct_UFunction_UVoxelBlueprintLibrary_Redo_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelBlueprintLibrary_Redo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_Redo_Statics::NewProp_World,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_Redo_Statics::NewProp_OutUpdatedBounds_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_Redo_Statics::NewProp_OutUpdatedBounds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_Redo_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_Redo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelBlueprintLibrary_Redo_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelBlueprintLibrary, nullptr, "Redo", Z_Construct_UFunction_UVoxelBlueprintLibrary_Redo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_Redo_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVoxelBlueprintLibrary_Redo_Statics::VoxelBlueprintLibrary_eventRedo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_Redo_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelBlueprintLibrary_Redo_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVoxelBlueprintLibrary_Redo_Statics::VoxelBlueprintLibrary_eventRedo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVoxelBlueprintLibrary_Redo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelBlueprintLibrary_Redo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelBlueprintLibrary::execRedo)
{
	P_GET_OBJECT(AVoxelWorld,Z_Param_World);
	P_GET_TARRAY_REF(FVoxelIntBox,Z_Param_Out_OutUpdatedBounds);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UVoxelBlueprintLibrary::Redo(Z_Param_World,Z_Param_Out_OutUpdatedBounds);
	P_NATIVE_END;
}
// ********** End Class UVoxelBlueprintLibrary Function Redo ***************************************

// ********** Begin Class UVoxelBlueprintLibrary Function RegenerateSpawners ***********************
struct Z_Construct_UFunction_UVoxelBlueprintLibrary_RegenerateSpawners_Statics
{
	struct VoxelBlueprintLibrary_eventRegenerateSpawners_Parms
	{
		AVoxelWorld* World;
		FVoxelIntBox Bounds;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Voxel|Spawners" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * IVoxelSpawnerManager helpers\n\x09 */// Regenerate spawners in an aera\n" },
#endif
		{ "DefaultToSelf", "World" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "IVoxelSpawnerManager helpers\n        // Regenerate spawners in an aera" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Bounds;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_RegenerateSpawners_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventRegenerateSpawners_Parms, World), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_RegenerateSpawners_Statics::NewProp_Bounds = { "Bounds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventRegenerateSpawners_Parms, Bounds), Z_Construct_UScriptStruct_FVoxelIntBox, METADATA_PARAMS(0, nullptr) }; // 3520536583
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelBlueprintLibrary_RegenerateSpawners_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_RegenerateSpawners_Statics::NewProp_World,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_RegenerateSpawners_Statics::NewProp_Bounds,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_RegenerateSpawners_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelBlueprintLibrary_RegenerateSpawners_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelBlueprintLibrary, nullptr, "RegenerateSpawners", Z_Construct_UFunction_UVoxelBlueprintLibrary_RegenerateSpawners_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_RegenerateSpawners_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVoxelBlueprintLibrary_RegenerateSpawners_Statics::VoxelBlueprintLibrary_eventRegenerateSpawners_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_RegenerateSpawners_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelBlueprintLibrary_RegenerateSpawners_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVoxelBlueprintLibrary_RegenerateSpawners_Statics::VoxelBlueprintLibrary_eventRegenerateSpawners_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVoxelBlueprintLibrary_RegenerateSpawners()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelBlueprintLibrary_RegenerateSpawners_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelBlueprintLibrary::execRegenerateSpawners)
{
	P_GET_OBJECT(AVoxelWorld,Z_Param_World);
	P_GET_STRUCT(FVoxelIntBox,Z_Param_Bounds);
	P_FINISH;
	P_NATIVE_BEGIN;
	UVoxelBlueprintLibrary::RegenerateSpawners(Z_Param_World,Z_Param_Bounds);
	P_NATIVE_END;
}
// ********** End Class UVoxelBlueprintLibrary Function RegenerateSpawners *************************

// ********** Begin Class UVoxelBlueprintLibrary Function SaveFrame ********************************
struct Z_Construct_UFunction_UVoxelBlueprintLibrary_SaveFrame_Statics
{
	struct VoxelBlueprintLibrary_eventSaveFrame_Parms
	{
		AVoxelWorld* World;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Voxel|UndoRedo" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Save the edits since the last call to SaveFrame/Undo/Redo and clear the redo stack. bEnableUndoRedo must be true\n" },
#endif
		{ "DefaultToSelf", "World" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Save the edits since the last call to SaveFrame/Undo/Redo and clear the redo stack. bEnableUndoRedo must be true" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_SaveFrame_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventSaveFrame_Parms, World), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelBlueprintLibrary_SaveFrame_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_SaveFrame_Statics::NewProp_World,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_SaveFrame_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelBlueprintLibrary_SaveFrame_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelBlueprintLibrary, nullptr, "SaveFrame", Z_Construct_UFunction_UVoxelBlueprintLibrary_SaveFrame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_SaveFrame_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVoxelBlueprintLibrary_SaveFrame_Statics::VoxelBlueprintLibrary_eventSaveFrame_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_SaveFrame_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelBlueprintLibrary_SaveFrame_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVoxelBlueprintLibrary_SaveFrame_Statics::VoxelBlueprintLibrary_eventSaveFrame_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVoxelBlueprintLibrary_SaveFrame()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelBlueprintLibrary_SaveFrame_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelBlueprintLibrary::execSaveFrame)
{
	P_GET_OBJECT(AVoxelWorld,Z_Param_World);
	P_FINISH;
	P_NATIVE_BEGIN;
	UVoxelBlueprintLibrary::SaveFrame(Z_Param_World);
	P_NATIVE_END;
}
// ********** End Class UVoxelBlueprintLibrary Function SaveFrame **********************************

// ********** Begin Class UVoxelBlueprintLibrary Function ScaleData ********************************
struct Z_Construct_UFunction_UVoxelBlueprintLibrary_ScaleData_Statics
{
	struct VoxelBlueprintLibrary_eventScaleData_Parms
	{
		AVoxelWorld* World;
		FVector Scale;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Voxel|Data" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Scale the voxel world data. Will recreate the voxel world!\n" },
#endif
		{ "DefaultToSelf", "World" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Scale the voxel world data. Will recreate the voxel world!" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Scale_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Scale;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_ScaleData_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventScaleData_Parms, World), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_ScaleData_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventScaleData_Parms, Scale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Scale_MetaData), NewProp_Scale_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelBlueprintLibrary_ScaleData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_ScaleData_Statics::NewProp_World,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_ScaleData_Statics::NewProp_Scale,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_ScaleData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelBlueprintLibrary_ScaleData_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelBlueprintLibrary, nullptr, "ScaleData", Z_Construct_UFunction_UVoxelBlueprintLibrary_ScaleData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_ScaleData_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVoxelBlueprintLibrary_ScaleData_Statics::VoxelBlueprintLibrary_eventScaleData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_ScaleData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelBlueprintLibrary_ScaleData_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVoxelBlueprintLibrary_ScaleData_Statics::VoxelBlueprintLibrary_eventScaleData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVoxelBlueprintLibrary_ScaleData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelBlueprintLibrary_ScaleData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelBlueprintLibrary::execScaleData)
{
	P_GET_OBJECT(AVoxelWorld,Z_Param_World);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_Scale);
	P_FINISH;
	P_NATIVE_BEGIN;
	UVoxelBlueprintLibrary::ScaleData(Z_Param_World,Z_Param_Out_Scale);
	P_NATIVE_END;
}
// ********** End Class UVoxelBlueprintLibrary Function ScaleData **********************************

// ********** Begin Class UVoxelBlueprintLibrary Function SetToolRenderingBounds *******************
struct Z_Construct_UFunction_UVoxelBlueprintLibrary_SetToolRenderingBounds_Statics
{
	struct VoxelBlueprintLibrary_eventSetToolRenderingBounds_Parms
	{
		AVoxelWorld* World;
		FVoxelToolRenderingRef Ref;
		FBox Bounds;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Voxel|Tool Rendering" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Bounds: In world space\n" },
#endif
		{ "DefaultToSelf", "World" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Bounds: In world space" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Ref;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Bounds;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_SetToolRenderingBounds_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventSetToolRenderingBounds_Parms, World), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_SetToolRenderingBounds_Statics::NewProp_Ref = { "Ref", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventSetToolRenderingBounds_Parms, Ref), Z_Construct_UScriptStruct_FVoxelToolRenderingRef, METADATA_PARAMS(0, nullptr) }; // 1217300782
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_SetToolRenderingBounds_Statics::NewProp_Bounds = { "Bounds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventSetToolRenderingBounds_Parms, Bounds), Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelBlueprintLibrary_SetToolRenderingBounds_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_SetToolRenderingBounds_Statics::NewProp_World,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_SetToolRenderingBounds_Statics::NewProp_Ref,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_SetToolRenderingBounds_Statics::NewProp_Bounds,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_SetToolRenderingBounds_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelBlueprintLibrary_SetToolRenderingBounds_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelBlueprintLibrary, nullptr, "SetToolRenderingBounds", Z_Construct_UFunction_UVoxelBlueprintLibrary_SetToolRenderingBounds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_SetToolRenderingBounds_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVoxelBlueprintLibrary_SetToolRenderingBounds_Statics::VoxelBlueprintLibrary_eventSetToolRenderingBounds_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_SetToolRenderingBounds_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelBlueprintLibrary_SetToolRenderingBounds_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVoxelBlueprintLibrary_SetToolRenderingBounds_Statics::VoxelBlueprintLibrary_eventSetToolRenderingBounds_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVoxelBlueprintLibrary_SetToolRenderingBounds()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelBlueprintLibrary_SetToolRenderingBounds_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelBlueprintLibrary::execSetToolRenderingBounds)
{
	P_GET_OBJECT(AVoxelWorld,Z_Param_World);
	P_GET_STRUCT(FVoxelToolRenderingRef,Z_Param_Ref);
	P_GET_STRUCT(FBox,Z_Param_Bounds);
	P_FINISH;
	P_NATIVE_BEGIN;
	UVoxelBlueprintLibrary::SetToolRenderingBounds(Z_Param_World,Z_Param_Ref,Z_Param_Bounds);
	P_NATIVE_END;
}
// ********** End Class UVoxelBlueprintLibrary Function SetToolRenderingBounds *********************

// ********** Begin Class UVoxelBlueprintLibrary Function SetToolRenderingEnabled ******************
struct Z_Construct_UFunction_UVoxelBlueprintLibrary_SetToolRenderingEnabled_Statics
{
	struct VoxelBlueprintLibrary_eventSetToolRenderingEnabled_Parms
	{
		AVoxelWorld* World;
		FVoxelToolRenderingRef Ref;
		bool bEnabled;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Voxel|Tool Rendering" },
		{ "CPP_Default_bEnabled", "true" },
		{ "DefaultToSelf", "World" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelBlueprintLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Ref;
	static void NewProp_bEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_SetToolRenderingEnabled_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventSetToolRenderingEnabled_Parms, World), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_SetToolRenderingEnabled_Statics::NewProp_Ref = { "Ref", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventSetToolRenderingEnabled_Parms, Ref), Z_Construct_UScriptStruct_FVoxelToolRenderingRef, METADATA_PARAMS(0, nullptr) }; // 1217300782
void Z_Construct_UFunction_UVoxelBlueprintLibrary_SetToolRenderingEnabled_Statics::NewProp_bEnabled_SetBit(void* Obj)
{
	((VoxelBlueprintLibrary_eventSetToolRenderingEnabled_Parms*)Obj)->bEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_SetToolRenderingEnabled_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VoxelBlueprintLibrary_eventSetToolRenderingEnabled_Parms), &Z_Construct_UFunction_UVoxelBlueprintLibrary_SetToolRenderingEnabled_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelBlueprintLibrary_SetToolRenderingEnabled_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_SetToolRenderingEnabled_Statics::NewProp_World,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_SetToolRenderingEnabled_Statics::NewProp_Ref,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_SetToolRenderingEnabled_Statics::NewProp_bEnabled,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_SetToolRenderingEnabled_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelBlueprintLibrary_SetToolRenderingEnabled_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelBlueprintLibrary, nullptr, "SetToolRenderingEnabled", Z_Construct_UFunction_UVoxelBlueprintLibrary_SetToolRenderingEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_SetToolRenderingEnabled_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVoxelBlueprintLibrary_SetToolRenderingEnabled_Statics::VoxelBlueprintLibrary_eventSetToolRenderingEnabled_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_SetToolRenderingEnabled_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelBlueprintLibrary_SetToolRenderingEnabled_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVoxelBlueprintLibrary_SetToolRenderingEnabled_Statics::VoxelBlueprintLibrary_eventSetToolRenderingEnabled_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVoxelBlueprintLibrary_SetToolRenderingEnabled()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelBlueprintLibrary_SetToolRenderingEnabled_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelBlueprintLibrary::execSetToolRenderingEnabled)
{
	P_GET_OBJECT(AVoxelWorld,Z_Param_World);
	P_GET_STRUCT(FVoxelToolRenderingRef,Z_Param_Ref);
	P_GET_UBOOL(Z_Param_bEnabled);
	P_FINISH;
	P_NATIVE_BEGIN;
	UVoxelBlueprintLibrary::SetToolRenderingEnabled(Z_Param_World,Z_Param_Ref,Z_Param_bEnabled);
	P_NATIVE_END;
}
// ********** End Class UVoxelBlueprintLibrary Function SetToolRenderingEnabled ********************

// ********** Begin Class UVoxelBlueprintLibrary Function SetToolRenderingMaterial *****************
struct Z_Construct_UFunction_UVoxelBlueprintLibrary_SetToolRenderingMaterial_Statics
{
	struct VoxelBlueprintLibrary_eventSetToolRenderingMaterial_Parms
	{
		AVoxelWorld* World;
		FVoxelToolRenderingRef Ref;
		UMaterialInterface* Material;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Voxel|Tool Rendering" },
		{ "DefaultToSelf", "World" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelBlueprintLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Ref;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Material;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_SetToolRenderingMaterial_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventSetToolRenderingMaterial_Parms, World), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_SetToolRenderingMaterial_Statics::NewProp_Ref = { "Ref", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventSetToolRenderingMaterial_Parms, Ref), Z_Construct_UScriptStruct_FVoxelToolRenderingRef, METADATA_PARAMS(0, nullptr) }; // 1217300782
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_SetToolRenderingMaterial_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventSetToolRenderingMaterial_Parms, Material), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelBlueprintLibrary_SetToolRenderingMaterial_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_SetToolRenderingMaterial_Statics::NewProp_World,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_SetToolRenderingMaterial_Statics::NewProp_Ref,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_SetToolRenderingMaterial_Statics::NewProp_Material,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_SetToolRenderingMaterial_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelBlueprintLibrary_SetToolRenderingMaterial_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelBlueprintLibrary, nullptr, "SetToolRenderingMaterial", Z_Construct_UFunction_UVoxelBlueprintLibrary_SetToolRenderingMaterial_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_SetToolRenderingMaterial_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVoxelBlueprintLibrary_SetToolRenderingMaterial_Statics::VoxelBlueprintLibrary_eventSetToolRenderingMaterial_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_SetToolRenderingMaterial_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelBlueprintLibrary_SetToolRenderingMaterial_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVoxelBlueprintLibrary_SetToolRenderingMaterial_Statics::VoxelBlueprintLibrary_eventSetToolRenderingMaterial_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVoxelBlueprintLibrary_SetToolRenderingMaterial()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelBlueprintLibrary_SetToolRenderingMaterial_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelBlueprintLibrary::execSetToolRenderingMaterial)
{
	P_GET_OBJECT(AVoxelWorld,Z_Param_World);
	P_GET_STRUCT(FVoxelToolRenderingRef,Z_Param_Ref);
	P_GET_OBJECT(UMaterialInterface,Z_Param_Material);
	P_FINISH;
	P_NATIVE_BEGIN;
	UVoxelBlueprintLibrary::SetToolRenderingMaterial(Z_Param_World,Z_Param_Ref,Z_Param_Material);
	P_NATIVE_END;
}
// ********** End Class UVoxelBlueprintLibrary Function SetToolRenderingMaterial *******************

// ********** Begin Class UVoxelBlueprintLibrary Function SpawnVoxelSpawnerActorByInstanceIndex ****
struct Z_Construct_UFunction_UVoxelBlueprintLibrary_SpawnVoxelSpawnerActorByInstanceIndex_Statics
{
	struct VoxelBlueprintLibrary_eventSpawnVoxelSpawnerActorByInstanceIndex_Parms
	{
		AVoxelWorld* World;
		UVoxelHierarchicalInstancedStaticMeshComponent* Component;
		int32 InstanceIndex;
		AVoxelSpawnerActor* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Voxel|Spawners" },
		{ "DefaultToSelf", "World" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelBlueprintLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Component_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Component;
	static const UECodeGen_Private::FIntPropertyParams NewProp_InstanceIndex;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_SpawnVoxelSpawnerActorByInstanceIndex_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventSpawnVoxelSpawnerActorByInstanceIndex_Parms, World), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_SpawnVoxelSpawnerActorByInstanceIndex_Statics::NewProp_Component = { "Component", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventSpawnVoxelSpawnerActorByInstanceIndex_Parms, Component), Z_Construct_UClass_UVoxelHierarchicalInstancedStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Component_MetaData), NewProp_Component_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_SpawnVoxelSpawnerActorByInstanceIndex_Statics::NewProp_InstanceIndex = { "InstanceIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventSpawnVoxelSpawnerActorByInstanceIndex_Parms, InstanceIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_SpawnVoxelSpawnerActorByInstanceIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventSpawnVoxelSpawnerActorByInstanceIndex_Parms, ReturnValue), Z_Construct_UClass_AVoxelSpawnerActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelBlueprintLibrary_SpawnVoxelSpawnerActorByInstanceIndex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_SpawnVoxelSpawnerActorByInstanceIndex_Statics::NewProp_World,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_SpawnVoxelSpawnerActorByInstanceIndex_Statics::NewProp_Component,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_SpawnVoxelSpawnerActorByInstanceIndex_Statics::NewProp_InstanceIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_SpawnVoxelSpawnerActorByInstanceIndex_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_SpawnVoxelSpawnerActorByInstanceIndex_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelBlueprintLibrary_SpawnVoxelSpawnerActorByInstanceIndex_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelBlueprintLibrary, nullptr, "SpawnVoxelSpawnerActorByInstanceIndex", Z_Construct_UFunction_UVoxelBlueprintLibrary_SpawnVoxelSpawnerActorByInstanceIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_SpawnVoxelSpawnerActorByInstanceIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVoxelBlueprintLibrary_SpawnVoxelSpawnerActorByInstanceIndex_Statics::VoxelBlueprintLibrary_eventSpawnVoxelSpawnerActorByInstanceIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_SpawnVoxelSpawnerActorByInstanceIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelBlueprintLibrary_SpawnVoxelSpawnerActorByInstanceIndex_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVoxelBlueprintLibrary_SpawnVoxelSpawnerActorByInstanceIndex_Statics::VoxelBlueprintLibrary_eventSpawnVoxelSpawnerActorByInstanceIndex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVoxelBlueprintLibrary_SpawnVoxelSpawnerActorByInstanceIndex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelBlueprintLibrary_SpawnVoxelSpawnerActorByInstanceIndex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelBlueprintLibrary::execSpawnVoxelSpawnerActorByInstanceIndex)
{
	P_GET_OBJECT(AVoxelWorld,Z_Param_World);
	P_GET_OBJECT(UVoxelHierarchicalInstancedStaticMeshComponent,Z_Param_Component);
	P_GET_PROPERTY(FIntProperty,Z_Param_InstanceIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(AVoxelSpawnerActor**)Z_Param__Result=UVoxelBlueprintLibrary::SpawnVoxelSpawnerActorByInstanceIndex(Z_Param_World,Z_Param_Component,Z_Param_InstanceIndex);
	P_NATIVE_END;
}
// ********** End Class UVoxelBlueprintLibrary Function SpawnVoxelSpawnerActorByInstanceIndex ******

// ********** Begin Class UVoxelBlueprintLibrary Function SpawnVoxelSpawnerActorsInArea ************
struct Z_Construct_UFunction_UVoxelBlueprintLibrary_SpawnVoxelSpawnerActorsInArea_Statics
{
	struct VoxelBlueprintLibrary_eventSpawnVoxelSpawnerActorsInArea_Parms
	{
		TArray<AVoxelSpawnerActor*> OutActors;
		AVoxelWorld* World;
		FVoxelIntBox Bounds;
		EVoxelSpawnerActorSpawnType SpawnType;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Voxel|Spawners" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Will replace instanced static mesh instances by actors\n" },
#endif
		{ "CPP_Default_SpawnType", "OnlyFloating" },
		{ "DefaultToSelf", "World" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Will replace instanced static mesh instances by actors" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OutActors_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutActors;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Bounds;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SpawnType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SpawnType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_SpawnVoxelSpawnerActorsInArea_Statics::NewProp_OutActors_Inner = { "OutActors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AVoxelSpawnerActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_SpawnVoxelSpawnerActorsInArea_Statics::NewProp_OutActors = { "OutActors", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventSpawnVoxelSpawnerActorsInArea_Parms, OutActors), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_SpawnVoxelSpawnerActorsInArea_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventSpawnVoxelSpawnerActorsInArea_Parms, World), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_SpawnVoxelSpawnerActorsInArea_Statics::NewProp_Bounds = { "Bounds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventSpawnVoxelSpawnerActorsInArea_Parms, Bounds), Z_Construct_UScriptStruct_FVoxelIntBox, METADATA_PARAMS(0, nullptr) }; // 3520536583
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_SpawnVoxelSpawnerActorsInArea_Statics::NewProp_SpawnType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_SpawnVoxelSpawnerActorsInArea_Statics::NewProp_SpawnType = { "SpawnType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventSpawnVoxelSpawnerActorsInArea_Parms, SpawnType), Z_Construct_UEnum_Voxel_EVoxelSpawnerActorSpawnType, METADATA_PARAMS(0, nullptr) }; // 2195295666
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelBlueprintLibrary_SpawnVoxelSpawnerActorsInArea_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_SpawnVoxelSpawnerActorsInArea_Statics::NewProp_OutActors_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_SpawnVoxelSpawnerActorsInArea_Statics::NewProp_OutActors,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_SpawnVoxelSpawnerActorsInArea_Statics::NewProp_World,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_SpawnVoxelSpawnerActorsInArea_Statics::NewProp_Bounds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_SpawnVoxelSpawnerActorsInArea_Statics::NewProp_SpawnType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_SpawnVoxelSpawnerActorsInArea_Statics::NewProp_SpawnType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_SpawnVoxelSpawnerActorsInArea_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelBlueprintLibrary_SpawnVoxelSpawnerActorsInArea_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelBlueprintLibrary, nullptr, "SpawnVoxelSpawnerActorsInArea", Z_Construct_UFunction_UVoxelBlueprintLibrary_SpawnVoxelSpawnerActorsInArea_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_SpawnVoxelSpawnerActorsInArea_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVoxelBlueprintLibrary_SpawnVoxelSpawnerActorsInArea_Statics::VoxelBlueprintLibrary_eventSpawnVoxelSpawnerActorsInArea_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_SpawnVoxelSpawnerActorsInArea_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelBlueprintLibrary_SpawnVoxelSpawnerActorsInArea_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVoxelBlueprintLibrary_SpawnVoxelSpawnerActorsInArea_Statics::VoxelBlueprintLibrary_eventSpawnVoxelSpawnerActorsInArea_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVoxelBlueprintLibrary_SpawnVoxelSpawnerActorsInArea()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelBlueprintLibrary_SpawnVoxelSpawnerActorsInArea_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelBlueprintLibrary::execSpawnVoxelSpawnerActorsInArea)
{
	P_GET_TARRAY_REF(AVoxelSpawnerActor*,Z_Param_Out_OutActors);
	P_GET_OBJECT(AVoxelWorld,Z_Param_World);
	P_GET_STRUCT(FVoxelIntBox,Z_Param_Bounds);
	P_GET_ENUM(EVoxelSpawnerActorSpawnType,Z_Param_SpawnType);
	P_FINISH;
	P_NATIVE_BEGIN;
	UVoxelBlueprintLibrary::SpawnVoxelSpawnerActorsInArea(Z_Param_Out_OutActors,Z_Param_World,Z_Param_Bounds,EVoxelSpawnerActorSpawnType(Z_Param_SpawnType));
	P_NATIVE_END;
}
// ********** End Class UVoxelBlueprintLibrary Function SpawnVoxelSpawnerActorsInArea **************

// ********** Begin Class UVoxelBlueprintLibrary Function Substract_IntVectorIntVector *************
struct Z_Construct_UFunction_UVoxelBlueprintLibrary_Substract_IntVectorIntVector_Statics
{
	struct VoxelBlueprintLibrary_eventSubstract_IntVectorIntVector_Parms
	{
		FIntVector Left;
		FIntVector Right;
		FIntVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Math|IntVector" },
		{ "CompactNodeTitle", "-" },
		{ "DisplayName", "IntVector - IntVector" },
		{ "Keywords", "- subtract minus" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelBlueprintLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Left;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Right;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_Substract_IntVectorIntVector_Statics::NewProp_Left = { "Left", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventSubstract_IntVectorIntVector_Parms, Left), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_Substract_IntVectorIntVector_Statics::NewProp_Right = { "Right", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventSubstract_IntVectorIntVector_Parms, Right), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_Substract_IntVectorIntVector_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventSubstract_IntVectorIntVector_Parms, ReturnValue), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelBlueprintLibrary_Substract_IntVectorIntVector_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_Substract_IntVectorIntVector_Statics::NewProp_Left,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_Substract_IntVectorIntVector_Statics::NewProp_Right,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_Substract_IntVectorIntVector_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_Substract_IntVectorIntVector_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelBlueprintLibrary_Substract_IntVectorIntVector_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelBlueprintLibrary, nullptr, "Substract_IntVectorIntVector", Z_Construct_UFunction_UVoxelBlueprintLibrary_Substract_IntVectorIntVector_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_Substract_IntVectorIntVector_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVoxelBlueprintLibrary_Substract_IntVectorIntVector_Statics::VoxelBlueprintLibrary_eventSubstract_IntVectorIntVector_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_Substract_IntVectorIntVector_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelBlueprintLibrary_Substract_IntVectorIntVector_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVoxelBlueprintLibrary_Substract_IntVectorIntVector_Statics::VoxelBlueprintLibrary_eventSubstract_IntVectorIntVector_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVoxelBlueprintLibrary_Substract_IntVectorIntVector()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelBlueprintLibrary_Substract_IntVectorIntVector_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelBlueprintLibrary::execSubstract_IntVectorIntVector)
{
	P_GET_STRUCT(FIntVector,Z_Param_Left);
	P_GET_STRUCT(FIntVector,Z_Param_Right);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FIntVector*)Z_Param__Result=UVoxelBlueprintLibrary::Substract_IntVectorIntVector(Z_Param_Left,Z_Param_Right);
	P_NATIVE_END;
}
// ********** End Class UVoxelBlueprintLibrary Function Substract_IntVectorIntVector ***************

// ********** Begin Class UVoxelBlueprintLibrary Function TransformGlobalBoxToVoxelBox *************
struct Z_Construct_UFunction_UVoxelBlueprintLibrary_TransformGlobalBoxToVoxelBox_Statics
{
	struct VoxelBlueprintLibrary_eventTransformGlobalBoxToVoxelBox_Parms
	{
		AVoxelWorld* World;
		FBox Box;
		FVoxelIntBox ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Voxel|Helpers" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Transform a box in global space to voxel space\n\x09 */" },
#endif
		{ "DefaultToSelf", "World" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Transform a box in global space to voxel space" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Box;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_TransformGlobalBoxToVoxelBox_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventTransformGlobalBoxToVoxelBox_Parms, World), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_TransformGlobalBoxToVoxelBox_Statics::NewProp_Box = { "Box", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventTransformGlobalBoxToVoxelBox_Parms, Box), Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_TransformGlobalBoxToVoxelBox_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventTransformGlobalBoxToVoxelBox_Parms, ReturnValue), Z_Construct_UScriptStruct_FVoxelIntBox, METADATA_PARAMS(0, nullptr) }; // 3520536583
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelBlueprintLibrary_TransformGlobalBoxToVoxelBox_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_TransformGlobalBoxToVoxelBox_Statics::NewProp_World,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_TransformGlobalBoxToVoxelBox_Statics::NewProp_Box,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_TransformGlobalBoxToVoxelBox_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_TransformGlobalBoxToVoxelBox_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelBlueprintLibrary_TransformGlobalBoxToVoxelBox_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelBlueprintLibrary, nullptr, "TransformGlobalBoxToVoxelBox", Z_Construct_UFunction_UVoxelBlueprintLibrary_TransformGlobalBoxToVoxelBox_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_TransformGlobalBoxToVoxelBox_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVoxelBlueprintLibrary_TransformGlobalBoxToVoxelBox_Statics::VoxelBlueprintLibrary_eventTransformGlobalBoxToVoxelBox_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_TransformGlobalBoxToVoxelBox_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelBlueprintLibrary_TransformGlobalBoxToVoxelBox_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVoxelBlueprintLibrary_TransformGlobalBoxToVoxelBox_Statics::VoxelBlueprintLibrary_eventTransformGlobalBoxToVoxelBox_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVoxelBlueprintLibrary_TransformGlobalBoxToVoxelBox()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelBlueprintLibrary_TransformGlobalBoxToVoxelBox_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelBlueprintLibrary::execTransformGlobalBoxToVoxelBox)
{
	P_GET_OBJECT(AVoxelWorld,Z_Param_World);
	P_GET_STRUCT(FBox,Z_Param_Box);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVoxelIntBox*)Z_Param__Result=UVoxelBlueprintLibrary::TransformGlobalBoxToVoxelBox(Z_Param_World,Z_Param_Box);
	P_NATIVE_END;
}
// ********** End Class UVoxelBlueprintLibrary Function TransformGlobalBoxToVoxelBox ***************

// ********** Begin Class UVoxelBlueprintLibrary Function TransformVoxelBoxToGlobalBox *************
struct Z_Construct_UFunction_UVoxelBlueprintLibrary_TransformVoxelBoxToGlobalBox_Statics
{
	struct VoxelBlueprintLibrary_eventTransformVoxelBoxToGlobalBox_Parms
	{
		AVoxelWorld* World;
		FVoxelIntBox Box;
		FBox ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Voxel|Helpers" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Transform a box in voxel space to global space\n\x09 */" },
#endif
		{ "DefaultToSelf", "World" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Transform a box in voxel space to global space" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Box;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_TransformVoxelBoxToGlobalBox_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventTransformVoxelBoxToGlobalBox_Parms, World), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_TransformVoxelBoxToGlobalBox_Statics::NewProp_Box = { "Box", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventTransformVoxelBoxToGlobalBox_Parms, Box), Z_Construct_UScriptStruct_FVoxelIntBox, METADATA_PARAMS(0, nullptr) }; // 3520536583
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_TransformVoxelBoxToGlobalBox_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventTransformVoxelBoxToGlobalBox_Parms, ReturnValue), Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelBlueprintLibrary_TransformVoxelBoxToGlobalBox_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_TransformVoxelBoxToGlobalBox_Statics::NewProp_World,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_TransformVoxelBoxToGlobalBox_Statics::NewProp_Box,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_TransformVoxelBoxToGlobalBox_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_TransformVoxelBoxToGlobalBox_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelBlueprintLibrary_TransformVoxelBoxToGlobalBox_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelBlueprintLibrary, nullptr, "TransformVoxelBoxToGlobalBox", Z_Construct_UFunction_UVoxelBlueprintLibrary_TransformVoxelBoxToGlobalBox_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_TransformVoxelBoxToGlobalBox_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVoxelBlueprintLibrary_TransformVoxelBoxToGlobalBox_Statics::VoxelBlueprintLibrary_eventTransformVoxelBoxToGlobalBox_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_TransformVoxelBoxToGlobalBox_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelBlueprintLibrary_TransformVoxelBoxToGlobalBox_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVoxelBlueprintLibrary_TransformVoxelBoxToGlobalBox_Statics::VoxelBlueprintLibrary_eventTransformVoxelBoxToGlobalBox_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVoxelBlueprintLibrary_TransformVoxelBoxToGlobalBox()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelBlueprintLibrary_TransformVoxelBoxToGlobalBox_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelBlueprintLibrary::execTransformVoxelBoxToGlobalBox)
{
	P_GET_OBJECT(AVoxelWorld,Z_Param_World);
	P_GET_STRUCT(FVoxelIntBox,Z_Param_Box);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FBox*)Z_Param__Result=UVoxelBlueprintLibrary::TransformVoxelBoxToGlobalBox(Z_Param_World,Z_Param_Box);
	P_NATIVE_END;
}
// ********** End Class UVoxelBlueprintLibrary Function TransformVoxelBoxToGlobalBox ***************

// ********** Begin Class UVoxelBlueprintLibrary Function Undo *************************************
struct Z_Construct_UFunction_UVoxelBlueprintLibrary_Undo_Statics
{
	struct VoxelBlueprintLibrary_eventUndo_Parms
	{
		AVoxelWorld* World;
		TArray<FVoxelIntBox> OutUpdatedBounds;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Voxel|UndoRedo" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Undo last frame. bEnableUndoRedo must be true, and SaveFrame must have been called after any edits\n// @return Success\n" },
#endif
		{ "DefaultToSelf", "World" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Undo last frame. bEnableUndoRedo must be true, and SaveFrame must have been called after any edits\n@return Success" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutUpdatedBounds_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutUpdatedBounds;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_Undo_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventUndo_Parms, World), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_Undo_Statics::NewProp_OutUpdatedBounds_Inner = { "OutUpdatedBounds", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVoxelIntBox, METADATA_PARAMS(0, nullptr) }; // 3520536583
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_Undo_Statics::NewProp_OutUpdatedBounds = { "OutUpdatedBounds", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventUndo_Parms, OutUpdatedBounds), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 3520536583
void Z_Construct_UFunction_UVoxelBlueprintLibrary_Undo_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((VoxelBlueprintLibrary_eventUndo_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_Undo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VoxelBlueprintLibrary_eventUndo_Parms), &Z_Construct_UFunction_UVoxelBlueprintLibrary_Undo_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelBlueprintLibrary_Undo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_Undo_Statics::NewProp_World,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_Undo_Statics::NewProp_OutUpdatedBounds_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_Undo_Statics::NewProp_OutUpdatedBounds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_Undo_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_Undo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelBlueprintLibrary_Undo_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelBlueprintLibrary, nullptr, "Undo", Z_Construct_UFunction_UVoxelBlueprintLibrary_Undo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_Undo_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVoxelBlueprintLibrary_Undo_Statics::VoxelBlueprintLibrary_eventUndo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_Undo_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelBlueprintLibrary_Undo_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVoxelBlueprintLibrary_Undo_Statics::VoxelBlueprintLibrary_eventUndo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVoxelBlueprintLibrary_Undo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelBlueprintLibrary_Undo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelBlueprintLibrary::execUndo)
{
	P_GET_OBJECT(AVoxelWorld,Z_Param_World);
	P_GET_TARRAY_REF(FVoxelIntBox,Z_Param_Out_OutUpdatedBounds);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UVoxelBlueprintLibrary::Undo(Z_Param_World,Z_Param_Out_OutUpdatedBounds);
	P_NATIVE_END;
}
// ********** End Class UVoxelBlueprintLibrary Function Undo ***************************************

// ********** Begin Class UVoxelBlueprintLibrary Function UpdateAll ********************************
struct Z_Construct_UFunction_UVoxelBlueprintLibrary_UpdateAll_Statics
{
	struct VoxelBlueprintLibrary_eventUpdateAll_Parms
	{
		AVoxelWorld* World;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Voxel|Render" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Update all the chunks\n" },
#endif
		{ "DefaultToSelf", "World" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Update all the chunks" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_UpdateAll_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventUpdateAll_Parms, World), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelBlueprintLibrary_UpdateAll_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_UpdateAll_Statics::NewProp_World,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_UpdateAll_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelBlueprintLibrary_UpdateAll_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelBlueprintLibrary, nullptr, "UpdateAll", Z_Construct_UFunction_UVoxelBlueprintLibrary_UpdateAll_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_UpdateAll_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVoxelBlueprintLibrary_UpdateAll_Statics::VoxelBlueprintLibrary_eventUpdateAll_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_UpdateAll_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelBlueprintLibrary_UpdateAll_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVoxelBlueprintLibrary_UpdateAll_Statics::VoxelBlueprintLibrary_eventUpdateAll_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVoxelBlueprintLibrary_UpdateAll()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelBlueprintLibrary_UpdateAll_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelBlueprintLibrary::execUpdateAll)
{
	P_GET_OBJECT(AVoxelWorld,Z_Param_World);
	P_FINISH;
	P_NATIVE_BEGIN;
	UVoxelBlueprintLibrary::UpdateAll(Z_Param_World);
	P_NATIVE_END;
}
// ********** End Class UVoxelBlueprintLibrary Function UpdateAll **********************************

// ********** Begin Class UVoxelBlueprintLibrary Function UpdateBounds *****************************
struct Z_Construct_UFunction_UVoxelBlueprintLibrary_UpdateBounds_Statics
{
	struct VoxelBlueprintLibrary_eventUpdateBounds_Parms
	{
		AVoxelWorld* World;
		FVoxelIntBox Bounds;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Voxel|Render" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Update the chunks overlapping Bounds. \n" },
#endif
		{ "DefaultToSelf", "World" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Update the chunks overlapping Bounds." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Bounds;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_UpdateBounds_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventUpdateBounds_Parms, World), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_UpdateBounds_Statics::NewProp_Bounds = { "Bounds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventUpdateBounds_Parms, Bounds), Z_Construct_UScriptStruct_FVoxelIntBox, METADATA_PARAMS(0, nullptr) }; // 3520536583
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelBlueprintLibrary_UpdateBounds_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_UpdateBounds_Statics::NewProp_World,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_UpdateBounds_Statics::NewProp_Bounds,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_UpdateBounds_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelBlueprintLibrary_UpdateBounds_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelBlueprintLibrary, nullptr, "UpdateBounds", Z_Construct_UFunction_UVoxelBlueprintLibrary_UpdateBounds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_UpdateBounds_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVoxelBlueprintLibrary_UpdateBounds_Statics::VoxelBlueprintLibrary_eventUpdateBounds_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_UpdateBounds_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelBlueprintLibrary_UpdateBounds_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVoxelBlueprintLibrary_UpdateBounds_Statics::VoxelBlueprintLibrary_eventUpdateBounds_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVoxelBlueprintLibrary_UpdateBounds()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelBlueprintLibrary_UpdateBounds_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelBlueprintLibrary::execUpdateBounds)
{
	P_GET_OBJECT(AVoxelWorld,Z_Param_World);
	P_GET_STRUCT(FVoxelIntBox,Z_Param_Bounds);
	P_FINISH;
	P_NATIVE_BEGIN;
	UVoxelBlueprintLibrary::UpdateBounds(Z_Param_World,Z_Param_Bounds);
	P_NATIVE_END;
}
// ********** End Class UVoxelBlueprintLibrary Function UpdateBounds *******************************

// ********** Begin Class UVoxelBlueprintLibrary Function UpdatePosition ***************************
struct Z_Construct_UFunction_UVoxelBlueprintLibrary_UpdatePosition_Statics
{
	struct VoxelBlueprintLibrary_eventUpdatePosition_Parms
	{
		AVoxelWorld* World;
		FIntVector Position;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Voxel|Render" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Update the chunks overlapping Position\n" },
#endif
		{ "DefaultToSelf", "World" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Update the chunks overlapping Position" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Position;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_UpdatePosition_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventUpdatePosition_Parms, World), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelBlueprintLibrary_UpdatePosition_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelBlueprintLibrary_eventUpdatePosition_Parms, Position), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelBlueprintLibrary_UpdatePosition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_UpdatePosition_Statics::NewProp_World,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelBlueprintLibrary_UpdatePosition_Statics::NewProp_Position,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_UpdatePosition_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelBlueprintLibrary_UpdatePosition_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelBlueprintLibrary, nullptr, "UpdatePosition", Z_Construct_UFunction_UVoxelBlueprintLibrary_UpdatePosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_UpdatePosition_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVoxelBlueprintLibrary_UpdatePosition_Statics::VoxelBlueprintLibrary_eventUpdatePosition_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelBlueprintLibrary_UpdatePosition_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelBlueprintLibrary_UpdatePosition_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVoxelBlueprintLibrary_UpdatePosition_Statics::VoxelBlueprintLibrary_eventUpdatePosition_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVoxelBlueprintLibrary_UpdatePosition()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelBlueprintLibrary_UpdatePosition_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelBlueprintLibrary::execUpdatePosition)
{
	P_GET_OBJECT(AVoxelWorld,Z_Param_World);
	P_GET_STRUCT(FIntVector,Z_Param_Position);
	P_FINISH;
	P_NATIVE_BEGIN;
	UVoxelBlueprintLibrary::UpdatePosition(Z_Param_World,Z_Param_Position);
	P_NATIVE_END;
}
// ********** End Class UVoxelBlueprintLibrary Function UpdatePosition *****************************

// ********** Begin Class UVoxelBlueprintLibrary ***************************************************
void UVoxelBlueprintLibrary::StaticRegisterNativesUVoxelBlueprintLibrary()
{
	UClass* Class = UVoxelBlueprintLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Add_IntVectorIntVector", &UVoxelBlueprintLibrary::execAdd_IntVectorIntVector },
		{ "AddInstances", &UVoxelBlueprintLibrary::execAddInstances },
		{ "AddNeighborsToSet", &UVoxelBlueprintLibrary::execAddNeighborsToSet },
		{ "ApplyLODSettings", &UVoxelBlueprintLibrary::execApplyLODSettings },
		{ "ApplyNewMaterials", &UVoxelBlueprintLibrary::execApplyNewMaterials },
		{ "ApplyPaintMaterial", &UVoxelBlueprintLibrary::execApplyPaintMaterial },
		{ "AreCollisionsEnabled", &UVoxelBlueprintLibrary::execAreCollisionsEnabled },
		{ "BindVoxelChunkEvents", &UVoxelBlueprintLibrary::execBindVoxelChunkEvents },
		{ "BindVoxelGenerationEvent", &UVoxelBlueprintLibrary::execBindVoxelGenerationEvent },
		{ "ClearAllData", &UVoxelBlueprintLibrary::execClearAllData },
		{ "ClearDirtyData", &UVoxelBlueprintLibrary::execClearDirtyData },
		{ "ClearFrames", &UVoxelBlueprintLibrary::execClearFrames },
		{ "ClearMaterialData", &UVoxelBlueprintLibrary::execClearMaterialData },
		{ "ClearValueData", &UVoxelBlueprintLibrary::execClearValueData },
		{ "CreateColorPaintMaterial", &UVoxelBlueprintLibrary::execCreateColorPaintMaterial },
		{ "CreateFiveWayBlendPaintMaterial", &UVoxelBlueprintLibrary::execCreateFiveWayBlendPaintMaterial },
		{ "CreateGlobalVoxelThreadPool", &UVoxelBlueprintLibrary::execCreateGlobalVoxelThreadPool },
		{ "CreateMultiIndexPaintMaterial", &UVoxelBlueprintLibrary::execCreateMultiIndexPaintMaterial },
		{ "CreateMultiIndexRawPaintMaterial", &UVoxelBlueprintLibrary::execCreateMultiIndexRawPaintMaterial },
		{ "CreateMultiIndexWetnessPaintMaterial", &UVoxelBlueprintLibrary::execCreateMultiIndexWetnessPaintMaterial },
		{ "CreateOrUpdateTextureFromVoxelColorTexture", &UVoxelBlueprintLibrary::execCreateOrUpdateTextureFromVoxelColorTexture },
		{ "CreateOrUpdateTextureFromVoxelFloatTexture", &UVoxelBlueprintLibrary::execCreateOrUpdateTextureFromVoxelFloatTexture },
		{ "CreateSingleIndexPaintMaterial", &UVoxelBlueprintLibrary::execCreateSingleIndexPaintMaterial },
		{ "CreateTextureFromVoxelColorTexture", &UVoxelBlueprintLibrary::execCreateTextureFromVoxelColorTexture },
		{ "CreateTextureFromVoxelFloatTexture", &UVoxelBlueprintLibrary::execCreateTextureFromVoxelFloatTexture },
		{ "CreateToolRendering", &UVoxelBlueprintLibrary::execCreateToolRendering },
		{ "CreateUVPaintMaterial", &UVoxelBlueprintLibrary::execCreateUVPaintMaterial },
		{ "CreateVoxelColorTextureFromVoxelFloatTexture", &UVoxelBlueprintLibrary::execCreateVoxelColorTextureFromVoxelFloatTexture },
		{ "CreateVoxelFloatTextureFromTextureChannel", &UVoxelBlueprintLibrary::execCreateVoxelFloatTextureFromTextureChannel },
		{ "CreateWorldVoxelThreadPool", &UVoxelBlueprintLibrary::execCreateWorldVoxelThreadPool },
		{ "DestroyGlobalVoxelThreadPool", &UVoxelBlueprintLibrary::execDestroyGlobalVoxelThreadPool },
		{ "DestroyToolRendering", &UVoxelBlueprintLibrary::execDestroyToolRendering },
		{ "DestroyWorldVoxelThreadPool", &UVoxelBlueprintLibrary::execDestroyWorldVoxelThreadPool },
		{ "Divide_IntVectorInt", &UVoxelBlueprintLibrary::execDivide_IntVectorInt },
		{ "GetAllVoxelWorldsContainingPosition", &UVoxelBlueprintLibrary::execGetAllVoxelWorldsContainingPosition },
		{ "GetAllVoxelWorldsOverlappingActor", &UVoxelBlueprintLibrary::execGetAllVoxelWorldsOverlappingActor },
		{ "GetAllVoxelWorldsOverlappingBox", &UVoxelBlueprintLibrary::execGetAllVoxelWorldsOverlappingBox },
		{ "GetBounds", &UVoxelBlueprintLibrary::execGetBounds },
		{ "GetColor", &UVoxelBlueprintLibrary::execGetColor },
		{ "GetEstimatedCollisionsMemoryUsageInMB", &UVoxelBlueprintLibrary::execGetEstimatedCollisionsMemoryUsageInMB },
		{ "GetFloatOutput", &UVoxelBlueprintLibrary::execGetFloatOutput },
		{ "GetHistoryPosition", &UVoxelBlueprintLibrary::execGetHistoryPosition },
		{ "GetIntOutput", &UVoxelBlueprintLibrary::execGetIntOutput },
		{ "GetMax_Intvector", &UVoxelBlueprintLibrary::execGetMax_Intvector },
		{ "GetMemoryUsageInMB", &UVoxelBlueprintLibrary::execGetMemoryUsageInMB },
		{ "GetMin_Intvector", &UVoxelBlueprintLibrary::execGetMin_Intvector },
		{ "GetMultiIndex", &UVoxelBlueprintLibrary::execGetMultiIndex },
		{ "GetNormal", &UVoxelBlueprintLibrary::execGetNormal },
		{ "GetPeakMemoryUsageInMB", &UVoxelBlueprintLibrary::execGetPeakMemoryUsageInMB },
		{ "GetRawMaterial", &UVoxelBlueprintLibrary::execGetRawMaterial },
		{ "GetRenderBoundsOverlappingDataBounds", &UVoxelBlueprintLibrary::execGetRenderBoundsOverlappingDataBounds },
		{ "GetSingleIndex", &UVoxelBlueprintLibrary::execGetSingleIndex },
		{ "GetSpawnersSave", &UVoxelBlueprintLibrary::execGetSpawnersSave },
		{ "GetTaskCount", &UVoxelBlueprintLibrary::execGetTaskCount },
		{ "GetUV", &UVoxelBlueprintLibrary::execGetUV },
		{ "GetVoxelColorTextureSize", &UVoxelBlueprintLibrary::execGetVoxelColorTextureSize },
		{ "GetVoxelFloatTextureSize", &UVoxelBlueprintLibrary::execGetVoxelFloatTextureSize },
		{ "GetVoxelWorldContainingPosition", &UVoxelBlueprintLibrary::execGetVoxelWorldContainingPosition },
		{ "GetVoxelWorldOverlappingActor", &UVoxelBlueprintLibrary::execGetVoxelWorldOverlappingActor },
		{ "GetVoxelWorldOverlappingBox", &UVoxelBlueprintLibrary::execGetVoxelWorldOverlappingBox },
		{ "HasMaterialData", &UVoxelBlueprintLibrary::execHasMaterialData },
		{ "HasValueData", &UVoxelBlueprintLibrary::execHasValueData },
		{ "IsGlobalVoxelPoolCreated", &UVoxelBlueprintLibrary::execIsGlobalVoxelPoolCreated },
		{ "IsValidRef", &UVoxelBlueprintLibrary::execIsValidRef },
		{ "IsVoxelColorTextureValid", &UVoxelBlueprintLibrary::execIsVoxelColorTextureValid },
		{ "IsVoxelFloatTextureValid", &UVoxelBlueprintLibrary::execIsVoxelFloatTextureValid },
		{ "IsVoxelPluginPro", &UVoxelBlueprintLibrary::execIsVoxelPluginPro },
		{ "IsVoxelWorldFoliageLoading", &UVoxelBlueprintLibrary::execIsVoxelWorldFoliageLoading },
		{ "IsVoxelWorldMeshLoading", &UVoxelBlueprintLibrary::execIsVoxelWorldMeshLoading },
		{ "IsWorldVoxelPoolCreated", &UVoxelBlueprintLibrary::execIsWorldVoxelPoolCreated },
		{ "LoadFromSpawnersSave", &UVoxelBlueprintLibrary::execLoadFromSpawnersSave },
		{ "LogMemoryStats", &UVoxelBlueprintLibrary::execLogMemoryStats },
		{ "MakeIntBoxFromGlobalPositionAndRadius", &UVoxelBlueprintLibrary::execMakeIntBoxFromGlobalPositionAndRadius },
		{ "MakeMaterialMask", &UVoxelBlueprintLibrary::execMakeMaterialMask },
		{ "MakeRawMaterial", &UVoxelBlueprintLibrary::execMakeRawMaterial },
		{ "MarkSpawnersDirty", &UVoxelBlueprintLibrary::execMarkSpawnersDirty },
		{ "Multiply_IntIntVector", &UVoxelBlueprintLibrary::execMultiply_IntIntVector },
		{ "Multiply_IntVectorInt", &UVoxelBlueprintLibrary::execMultiply_IntVectorInt },
		{ "Multiply_IntVectorIntVector", &UVoxelBlueprintLibrary::execMultiply_IntVectorIntVector },
		{ "NumberOfCores", &UVoxelBlueprintLibrary::execNumberOfCores },
		{ "RaiseError", &UVoxelBlueprintLibrary::execRaiseError },
		{ "RaiseInfo", &UVoxelBlueprintLibrary::execRaiseInfo },
		{ "RaiseWarning", &UVoxelBlueprintLibrary::execRaiseWarning },
		{ "Recreate", &UVoxelBlueprintLibrary::execRecreate },
		{ "RecreateRender", &UVoxelBlueprintLibrary::execRecreateRender },
		{ "RecreateSpawners", &UVoxelBlueprintLibrary::execRecreateSpawners },
		{ "Redo", &UVoxelBlueprintLibrary::execRedo },
		{ "RegenerateSpawners", &UVoxelBlueprintLibrary::execRegenerateSpawners },
		{ "SaveFrame", &UVoxelBlueprintLibrary::execSaveFrame },
		{ "ScaleData", &UVoxelBlueprintLibrary::execScaleData },
		{ "SetToolRenderingBounds", &UVoxelBlueprintLibrary::execSetToolRenderingBounds },
		{ "SetToolRenderingEnabled", &UVoxelBlueprintLibrary::execSetToolRenderingEnabled },
		{ "SetToolRenderingMaterial", &UVoxelBlueprintLibrary::execSetToolRenderingMaterial },
		{ "SpawnVoxelSpawnerActorByInstanceIndex", &UVoxelBlueprintLibrary::execSpawnVoxelSpawnerActorByInstanceIndex },
		{ "SpawnVoxelSpawnerActorsInArea", &UVoxelBlueprintLibrary::execSpawnVoxelSpawnerActorsInArea },
		{ "Substract_IntVectorIntVector", &UVoxelBlueprintLibrary::execSubstract_IntVectorIntVector },
		{ "TransformGlobalBoxToVoxelBox", &UVoxelBlueprintLibrary::execTransformGlobalBoxToVoxelBox },
		{ "TransformVoxelBoxToGlobalBox", &UVoxelBlueprintLibrary::execTransformVoxelBoxToGlobalBox },
		{ "Undo", &UVoxelBlueprintLibrary::execUndo },
		{ "UpdateAll", &UVoxelBlueprintLibrary::execUpdateAll },
		{ "UpdateBounds", &UVoxelBlueprintLibrary::execUpdateBounds },
		{ "UpdatePosition", &UVoxelBlueprintLibrary::execUpdatePosition },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UVoxelBlueprintLibrary;
UClass* UVoxelBlueprintLibrary::GetPrivateStaticClass()
{
	using TClass = UVoxelBlueprintLibrary;
	if (!Z_Registration_Info_UClass_UVoxelBlueprintLibrary.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("VoxelBlueprintLibrary"),
			Z_Registration_Info_UClass_UVoxelBlueprintLibrary.InnerSingleton,
			StaticRegisterNativesUVoxelBlueprintLibrary,
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
	return Z_Registration_Info_UClass_UVoxelBlueprintLibrary.InnerSingleton;
}
UClass* Z_Construct_UClass_UVoxelBlueprintLibrary_NoRegister()
{
	return UVoxelBlueprintLibrary::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UVoxelBlueprintLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "VoxelTools/VoxelBlueprintLibrary.h" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelBlueprintLibrary.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UVoxelBlueprintLibrary_Add_IntVectorIntVector, "Add_IntVectorIntVector" }, // 1282486931
		{ &Z_Construct_UFunction_UVoxelBlueprintLibrary_AddInstances, "AddInstances" }, // 1006203960
		{ &Z_Construct_UFunction_UVoxelBlueprintLibrary_AddNeighborsToSet, "AddNeighborsToSet" }, // 2782146245
		{ &Z_Construct_UFunction_UVoxelBlueprintLibrary_ApplyLODSettings, "ApplyLODSettings" }, // 2079266013
		{ &Z_Construct_UFunction_UVoxelBlueprintLibrary_ApplyNewMaterials, "ApplyNewMaterials" }, // 1089464684
		{ &Z_Construct_UFunction_UVoxelBlueprintLibrary_ApplyPaintMaterial, "ApplyPaintMaterial" }, // 1774837469
		{ &Z_Construct_UFunction_UVoxelBlueprintLibrary_AreCollisionsEnabled, "AreCollisionsEnabled" }, // 528759723
		{ &Z_Construct_UFunction_UVoxelBlueprintLibrary_BindVoxelChunkEvents, "BindVoxelChunkEvents" }, // 80989745
		{ &Z_Construct_UFunction_UVoxelBlueprintLibrary_BindVoxelGenerationEvent, "BindVoxelGenerationEvent" }, // 3629099818
		{ &Z_Construct_UFunction_UVoxelBlueprintLibrary_ClearAllData, "ClearAllData" }, // 1566482704
		{ &Z_Construct_UFunction_UVoxelBlueprintLibrary_ClearDirtyData, "ClearDirtyData" }, // 2362331012
		{ &Z_Construct_UFunction_UVoxelBlueprintLibrary_ClearFrames, "ClearFrames" }, // 2157275779
		{ &Z_Construct_UFunction_UVoxelBlueprintLibrary_ClearMaterialData, "ClearMaterialData" }, // 2101413582
		{ &Z_Construct_UFunction_UVoxelBlueprintLibrary_ClearValueData, "ClearValueData" }, // 3336202931
		{ &Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateColorPaintMaterial, "CreateColorPaintMaterial" }, // 2953533827
		{ &Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateFiveWayBlendPaintMaterial, "CreateFiveWayBlendPaintMaterial" }, // 4236837904
		{ &Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateGlobalVoxelThreadPool, "CreateGlobalVoxelThreadPool" }, // 2870881661
		{ &Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateMultiIndexPaintMaterial, "CreateMultiIndexPaintMaterial" }, // 2978760264
		{ &Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateMultiIndexRawPaintMaterial, "CreateMultiIndexRawPaintMaterial" }, // 2932542398
		{ &Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateMultiIndexWetnessPaintMaterial, "CreateMultiIndexWetnessPaintMaterial" }, // 307025901
		{ &Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateOrUpdateTextureFromVoxelColorTexture, "CreateOrUpdateTextureFromVoxelColorTexture" }, // 2538907940
		{ &Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateOrUpdateTextureFromVoxelFloatTexture, "CreateOrUpdateTextureFromVoxelFloatTexture" }, // 2500056762
		{ &Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateSingleIndexPaintMaterial, "CreateSingleIndexPaintMaterial" }, // 121904517
		{ &Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateTextureFromVoxelColorTexture, "CreateTextureFromVoxelColorTexture" }, // 2617790533
		{ &Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateTextureFromVoxelFloatTexture, "CreateTextureFromVoxelFloatTexture" }, // 2395788875
		{ &Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateToolRendering, "CreateToolRendering" }, // 3500061066
		{ &Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateUVPaintMaterial, "CreateUVPaintMaterial" }, // 3931618914
		{ &Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateVoxelColorTextureFromVoxelFloatTexture, "CreateVoxelColorTextureFromVoxelFloatTexture" }, // 3998243333
		{ &Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateVoxelFloatTextureFromTextureChannel, "CreateVoxelFloatTextureFromTextureChannel" }, // 3171310258
		{ &Z_Construct_UFunction_UVoxelBlueprintLibrary_CreateWorldVoxelThreadPool, "CreateWorldVoxelThreadPool" }, // 821513905
		{ &Z_Construct_UFunction_UVoxelBlueprintLibrary_DestroyGlobalVoxelThreadPool, "DestroyGlobalVoxelThreadPool" }, // 873557209
		{ &Z_Construct_UFunction_UVoxelBlueprintLibrary_DestroyToolRendering, "DestroyToolRendering" }, // 3087424641
		{ &Z_Construct_UFunction_UVoxelBlueprintLibrary_DestroyWorldVoxelThreadPool, "DestroyWorldVoxelThreadPool" }, // 3941794246
		{ &Z_Construct_UFunction_UVoxelBlueprintLibrary_Divide_IntVectorInt, "Divide_IntVectorInt" }, // 2527207466
		{ &Z_Construct_UFunction_UVoxelBlueprintLibrary_GetAllVoxelWorldsContainingPosition, "GetAllVoxelWorldsContainingPosition" }, // 903706881
		{ &Z_Construct_UFunction_UVoxelBlueprintLibrary_GetAllVoxelWorldsOverlappingActor, "GetAllVoxelWorldsOverlappingActor" }, // 509390975
		{ &Z_Construct_UFunction_UVoxelBlueprintLibrary_GetAllVoxelWorldsOverlappingBox, "GetAllVoxelWorldsOverlappingBox" }, // 2614361203
		{ &Z_Construct_UFunction_UVoxelBlueprintLibrary_GetBounds, "GetBounds" }, // 2539366425
		{ &Z_Construct_UFunction_UVoxelBlueprintLibrary_GetColor, "GetColor" }, // 3929055337
		{ &Z_Construct_UFunction_UVoxelBlueprintLibrary_GetEstimatedCollisionsMemoryUsageInMB, "GetEstimatedCollisionsMemoryUsageInMB" }, // 2998085353
		{ &Z_Construct_UFunction_UVoxelBlueprintLibrary_GetFloatOutput, "GetFloatOutput" }, // 1794162781
		{ &Z_Construct_UFunction_UVoxelBlueprintLibrary_GetHistoryPosition, "GetHistoryPosition" }, // 1871026712
		{ &Z_Construct_UFunction_UVoxelBlueprintLibrary_GetIntOutput, "GetIntOutput" }, // 34024731
		{ &Z_Construct_UFunction_UVoxelBlueprintLibrary_GetMax_Intvector, "GetMax_Intvector" }, // 3967423900
		{ &Z_Construct_UFunction_UVoxelBlueprintLibrary_GetMemoryUsageInMB, "GetMemoryUsageInMB" }, // 261513460
		{ &Z_Construct_UFunction_UVoxelBlueprintLibrary_GetMin_Intvector, "GetMin_Intvector" }, // 2459360982
		{ &Z_Construct_UFunction_UVoxelBlueprintLibrary_GetMultiIndex, "GetMultiIndex" }, // 1221182225
		{ &Z_Construct_UFunction_UVoxelBlueprintLibrary_GetNormal, "GetNormal" }, // 3961966485
		{ &Z_Construct_UFunction_UVoxelBlueprintLibrary_GetPeakMemoryUsageInMB, "GetPeakMemoryUsageInMB" }, // 3764511755
		{ &Z_Construct_UFunction_UVoxelBlueprintLibrary_GetRawMaterial, "GetRawMaterial" }, // 4023355256
		{ &Z_Construct_UFunction_UVoxelBlueprintLibrary_GetRenderBoundsOverlappingDataBounds, "GetRenderBoundsOverlappingDataBounds" }, // 2992014860
		{ &Z_Construct_UFunction_UVoxelBlueprintLibrary_GetSingleIndex, "GetSingleIndex" }, // 1909650497
		{ &Z_Construct_UFunction_UVoxelBlueprintLibrary_GetSpawnersSave, "GetSpawnersSave" }, // 4209568832
		{ &Z_Construct_UFunction_UVoxelBlueprintLibrary_GetTaskCount, "GetTaskCount" }, // 1036060324
		{ &Z_Construct_UFunction_UVoxelBlueprintLibrary_GetUV, "GetUV" }, // 550917540
		{ &Z_Construct_UFunction_UVoxelBlueprintLibrary_GetVoxelColorTextureSize, "GetVoxelColorTextureSize" }, // 1796433061
		{ &Z_Construct_UFunction_UVoxelBlueprintLibrary_GetVoxelFloatTextureSize, "GetVoxelFloatTextureSize" }, // 3828453225
		{ &Z_Construct_UFunction_UVoxelBlueprintLibrary_GetVoxelWorldContainingPosition, "GetVoxelWorldContainingPosition" }, // 4180446494
		{ &Z_Construct_UFunction_UVoxelBlueprintLibrary_GetVoxelWorldOverlappingActor, "GetVoxelWorldOverlappingActor" }, // 2250300936
		{ &Z_Construct_UFunction_UVoxelBlueprintLibrary_GetVoxelWorldOverlappingBox, "GetVoxelWorldOverlappingBox" }, // 2788546173
		{ &Z_Construct_UFunction_UVoxelBlueprintLibrary_HasMaterialData, "HasMaterialData" }, // 2594532594
		{ &Z_Construct_UFunction_UVoxelBlueprintLibrary_HasValueData, "HasValueData" }, // 2523465466
		{ &Z_Construct_UFunction_UVoxelBlueprintLibrary_IsGlobalVoxelPoolCreated, "IsGlobalVoxelPoolCreated" }, // 2075393819
		{ &Z_Construct_UFunction_UVoxelBlueprintLibrary_IsValidRef, "IsValidRef" }, // 421440374
		{ &Z_Construct_UFunction_UVoxelBlueprintLibrary_IsVoxelColorTextureValid, "IsVoxelColorTextureValid" }, // 3666020417
		{ &Z_Construct_UFunction_UVoxelBlueprintLibrary_IsVoxelFloatTextureValid, "IsVoxelFloatTextureValid" }, // 4002980875
		{ &Z_Construct_UFunction_UVoxelBlueprintLibrary_IsVoxelPluginPro, "IsVoxelPluginPro" }, // 211437038
		{ &Z_Construct_UFunction_UVoxelBlueprintLibrary_IsVoxelWorldFoliageLoading, "IsVoxelWorldFoliageLoading" }, // 4260936660
		{ &Z_Construct_UFunction_UVoxelBlueprintLibrary_IsVoxelWorldMeshLoading, "IsVoxelWorldMeshLoading" }, // 4193800844
		{ &Z_Construct_UFunction_UVoxelBlueprintLibrary_IsWorldVoxelPoolCreated, "IsWorldVoxelPoolCreated" }, // 2294088346
		{ &Z_Construct_UFunction_UVoxelBlueprintLibrary_LoadFromSpawnersSave, "LoadFromSpawnersSave" }, // 2329243666
		{ &Z_Construct_UFunction_UVoxelBlueprintLibrary_LogMemoryStats, "LogMemoryStats" }, // 1638457161
		{ &Z_Construct_UFunction_UVoxelBlueprintLibrary_MakeIntBoxFromGlobalPositionAndRadius, "MakeIntBoxFromGlobalPositionAndRadius" }, // 408488665
		{ &Z_Construct_UFunction_UVoxelBlueprintLibrary_MakeMaterialMask, "MakeMaterialMask" }, // 1335571300
		{ &Z_Construct_UFunction_UVoxelBlueprintLibrary_MakeRawMaterial, "MakeRawMaterial" }, // 3400701128
		{ &Z_Construct_UFunction_UVoxelBlueprintLibrary_MarkSpawnersDirty, "MarkSpawnersDirty" }, // 37313168
		{ &Z_Construct_UFunction_UVoxelBlueprintLibrary_Multiply_IntIntVector, "Multiply_IntIntVector" }, // 1218679702
		{ &Z_Construct_UFunction_UVoxelBlueprintLibrary_Multiply_IntVectorInt, "Multiply_IntVectorInt" }, // 1815818688
		{ &Z_Construct_UFunction_UVoxelBlueprintLibrary_Multiply_IntVectorIntVector, "Multiply_IntVectorIntVector" }, // 292676169
		{ &Z_Construct_UFunction_UVoxelBlueprintLibrary_NumberOfCores, "NumberOfCores" }, // 649055886
		{ &Z_Construct_UFunction_UVoxelBlueprintLibrary_RaiseError, "RaiseError" }, // 3786098525
		{ &Z_Construct_UFunction_UVoxelBlueprintLibrary_RaiseInfo, "RaiseInfo" }, // 649550612
		{ &Z_Construct_UFunction_UVoxelBlueprintLibrary_RaiseWarning, "RaiseWarning" }, // 2565351128
		{ &Z_Construct_UFunction_UVoxelBlueprintLibrary_Recreate, "Recreate" }, // 2747732006
		{ &Z_Construct_UFunction_UVoxelBlueprintLibrary_RecreateRender, "RecreateRender" }, // 3990807065
		{ &Z_Construct_UFunction_UVoxelBlueprintLibrary_RecreateSpawners, "RecreateSpawners" }, // 3657397053
		{ &Z_Construct_UFunction_UVoxelBlueprintLibrary_Redo, "Redo" }, // 3391930965
		{ &Z_Construct_UFunction_UVoxelBlueprintLibrary_RegenerateSpawners, "RegenerateSpawners" }, // 863041652
		{ &Z_Construct_UFunction_UVoxelBlueprintLibrary_SaveFrame, "SaveFrame" }, // 4218643427
		{ &Z_Construct_UFunction_UVoxelBlueprintLibrary_ScaleData, "ScaleData" }, // 748211505
		{ &Z_Construct_UFunction_UVoxelBlueprintLibrary_SetToolRenderingBounds, "SetToolRenderingBounds" }, // 36066398
		{ &Z_Construct_UFunction_UVoxelBlueprintLibrary_SetToolRenderingEnabled, "SetToolRenderingEnabled" }, // 3802001329
		{ &Z_Construct_UFunction_UVoxelBlueprintLibrary_SetToolRenderingMaterial, "SetToolRenderingMaterial" }, // 2239712582
		{ &Z_Construct_UFunction_UVoxelBlueprintLibrary_SpawnVoxelSpawnerActorByInstanceIndex, "SpawnVoxelSpawnerActorByInstanceIndex" }, // 972320827
		{ &Z_Construct_UFunction_UVoxelBlueprintLibrary_SpawnVoxelSpawnerActorsInArea, "SpawnVoxelSpawnerActorsInArea" }, // 948179338
		{ &Z_Construct_UFunction_UVoxelBlueprintLibrary_Substract_IntVectorIntVector, "Substract_IntVectorIntVector" }, // 3304859721
		{ &Z_Construct_UFunction_UVoxelBlueprintLibrary_TransformGlobalBoxToVoxelBox, "TransformGlobalBoxToVoxelBox" }, // 1748721383
		{ &Z_Construct_UFunction_UVoxelBlueprintLibrary_TransformVoxelBoxToGlobalBox, "TransformVoxelBoxToGlobalBox" }, // 3263012587
		{ &Z_Construct_UFunction_UVoxelBlueprintLibrary_Undo, "Undo" }, // 832255305
		{ &Z_Construct_UFunction_UVoxelBlueprintLibrary_UpdateAll, "UpdateAll" }, // 739100537
		{ &Z_Construct_UFunction_UVoxelBlueprintLibrary_UpdateBounds, "UpdateBounds" }, // 3760806342
		{ &Z_Construct_UFunction_UVoxelBlueprintLibrary_UpdatePosition, "UpdatePosition" }, // 687244902
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelBlueprintLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UVoxelBlueprintLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelBlueprintLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelBlueprintLibrary_Statics::ClassParams = {
	&UVoxelBlueprintLibrary::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelBlueprintLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UVoxelBlueprintLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVoxelBlueprintLibrary()
{
	if (!Z_Registration_Info_UClass_UVoxelBlueprintLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelBlueprintLibrary.OuterSingleton, Z_Construct_UClass_UVoxelBlueprintLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVoxelBlueprintLibrary.OuterSingleton;
}
UVoxelBlueprintLibrary::UVoxelBlueprintLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelBlueprintLibrary);
UVoxelBlueprintLibrary::~UVoxelBlueprintLibrary() {}
// ********** End Class UVoxelBlueprintLibrary *****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelTools_VoxelBlueprintLibrary_h__Script_Voxel_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EVoxelMemoryUsageType_StaticEnum, TEXT("EVoxelMemoryUsageType"), &Z_Registration_Info_UEnum_EVoxelMemoryUsageType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 281796426U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FVoxelToolRenderingRef::StaticStruct, Z_Construct_UScriptStruct_FVoxelToolRenderingRef_Statics::NewStructOps, TEXT("VoxelToolRenderingRef"), &Z_Registration_Info_UScriptStruct_FVoxelToolRenderingRef, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVoxelToolRenderingRef), 1217300782U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UVoxelBlueprintLibrary, UVoxelBlueprintLibrary::StaticClass, TEXT("UVoxelBlueprintLibrary"), &Z_Registration_Info_UClass_UVoxelBlueprintLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelBlueprintLibrary), 2092014997U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelTools_VoxelBlueprintLibrary_h__Script_Voxel_1114113248(TEXT("/Script/Voxel"),
	Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelTools_VoxelBlueprintLibrary_h__Script_Voxel_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelTools_VoxelBlueprintLibrary_h__Script_Voxel_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelTools_VoxelBlueprintLibrary_h__Script_Voxel_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelTools_VoxelBlueprintLibrary_h__Script_Voxel_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelTools_VoxelBlueprintLibrary_h__Script_Voxel_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelTools_VoxelBlueprintLibrary_h__Script_Voxel_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
