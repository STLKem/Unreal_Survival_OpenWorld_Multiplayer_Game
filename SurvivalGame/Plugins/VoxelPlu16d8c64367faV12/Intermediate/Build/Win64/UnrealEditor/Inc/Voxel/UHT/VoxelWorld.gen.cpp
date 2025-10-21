// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VoxelWorld.h"
#include "PhysicsEngine/BodyInstance.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#include "VoxelGenerators/VoxelGeneratorInit.h"
#include "VoxelGenerators/VoxelGeneratorPicker.h"
#include "VoxelIntBox.h"
#include "VoxelRender/VoxelLODMaterials.h"
#include "VoxelRender/VoxelMeshConfig.h"
#include "VoxelRender/VoxelPrimitiveComponentSettings.h"
#include "VoxelWorldCreateInfo.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeVoxelWorld() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFilePath();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntVector();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECanBeCharacterBase();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECollisionChannel();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECollisionResponse();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBodyInstance();
PHYSICSCORE_API UClass* Z_Construct_UClass_UPhysicalMaterial_NoRegister();
PHYSICSCORE_API UEnum* Z_Construct_UEnum_PhysicsCore_ECollisionTraceFlag();
UPackage* Z_Construct_UPackage__Script_Voxel();
VOXEL_API UClass* Z_Construct_UClass_AVoxelWorld();
VOXEL_API UClass* Z_Construct_UClass_AVoxelWorld_NoRegister();
VOXEL_API UClass* Z_Construct_UClass_AVoxelWorldInterface();
VOXEL_API UClass* Z_Construct_UClass_UVoxelEditorDelegatesInterface_NoRegister();
VOXEL_API UClass* Z_Construct_UClass_UVoxelGenerator_NoRegister();
VOXEL_API UClass* Z_Construct_UClass_UVoxelGeneratorCache_NoRegister();
VOXEL_API UClass* Z_Construct_UClass_UVoxelLineBatchComponent_NoRegister();
VOXEL_API UClass* Z_Construct_UClass_UVoxelMaterialCollectionBase_NoRegister();
VOXEL_API UClass* Z_Construct_UClass_UVoxelMultiplayerInterface_NoRegister();
VOXEL_API UClass* Z_Construct_UClass_UVoxelPlaceableItemActorHelper_NoRegister();
VOXEL_API UClass* Z_Construct_UClass_UVoxelPlaceableItemManager_NoRegister();
VOXEL_API UClass* Z_Construct_UClass_UVoxelProceduralMeshComponent_NoRegister();
VOXEL_API UClass* Z_Construct_UClass_UVoxelSpawnerConfig_NoRegister();
VOXEL_API UClass* Z_Construct_UClass_UVoxelWorldRootComponent_NoRegister();
VOXEL_API UClass* Z_Construct_UClass_UVoxelWorldSaveObject_NoRegister();
VOXEL_API UEnum* Z_Construct_UEnum_Voxel_EVoxelMaterialConfig();
VOXEL_API UEnum* Z_Construct_UEnum_Voxel_EVoxelNormalConfig();
VOXEL_API UEnum* Z_Construct_UEnum_Voxel_EVoxelRenderType();
VOXEL_API UEnum* Z_Construct_UEnum_Voxel_EVoxelRGBHardness();
VOXEL_API UEnum* Z_Construct_UEnum_Voxel_EVoxelTaskType();
VOXEL_API UEnum* Z_Construct_UEnum_Voxel_EVoxelUVConfig();
VOXEL_API UEnum* Z_Construct_UEnum_Voxel_EVoxelWorldCoordinatesRounding();
VOXEL_API UFunction* Z_Construct_UDelegateFunction_AVoxelWorld_OnGenerateWorld__DelegateSignature();
VOXEL_API UFunction* Z_Construct_UDelegateFunction_AVoxelWorld_OnMaxFoliageInstancesReached__DelegateSignature();
VOXEL_API UFunction* Z_Construct_UDelegateFunction_AVoxelWorld_OnWorldDestroyed__DelegateSignature();
VOXEL_API UFunction* Z_Construct_UDelegateFunction_AVoxelWorld_OnWorldLoaded__DelegateSignature();
VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelGeneratorInit();
VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelGeneratorPicker();
VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelIntBox();
VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelLODMaterialCollections();
VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelLODMaterials();
VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelMeshConfig();
VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelPrimitiveComponentSettings();
VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelWorldCreateInfo();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FOnGenerateWorld ******************************************************
struct Z_Construct_UDelegateFunction_AVoxelWorld_OnGenerateWorld__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/VoxelWorld.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_AVoxelWorld_OnGenerateWorld__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AVoxelWorld, nullptr, "OnGenerateWorld__DelegateSignature", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AVoxelWorld_OnGenerateWorld__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_AVoxelWorld_OnGenerateWorld__DelegateSignature_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UDelegateFunction_AVoxelWorld_OnGenerateWorld__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AVoxelWorld_OnGenerateWorld__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void AVoxelWorld::FOnGenerateWorld_DelegateWrapper(const FMulticastScriptDelegate& OnGenerateWorld)
{
	OnGenerateWorld.ProcessMulticastDelegate<UObject>(NULL);
}
// ********** End Delegate FOnGenerateWorld ********************************************************

// ********** Begin Delegate FOnWorldLoaded ********************************************************
struct Z_Construct_UDelegateFunction_AVoxelWorld_OnWorldLoaded__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/VoxelWorld.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_AVoxelWorld_OnWorldLoaded__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AVoxelWorld, nullptr, "OnWorldLoaded__DelegateSignature", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AVoxelWorld_OnWorldLoaded__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_AVoxelWorld_OnWorldLoaded__DelegateSignature_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UDelegateFunction_AVoxelWorld_OnWorldLoaded__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AVoxelWorld_OnWorldLoaded__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void AVoxelWorld::FOnWorldLoaded_DelegateWrapper(const FMulticastScriptDelegate& OnWorldLoaded)
{
	OnWorldLoaded.ProcessMulticastDelegate<UObject>(NULL);
}
// ********** End Delegate FOnWorldLoaded **********************************************************

// ********** Begin Delegate FOnWorldDestroyed *****************************************************
struct Z_Construct_UDelegateFunction_AVoxelWorld_OnWorldDestroyed__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/VoxelWorld.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_AVoxelWorld_OnWorldDestroyed__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AVoxelWorld, nullptr, "OnWorldDestroyed__DelegateSignature", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AVoxelWorld_OnWorldDestroyed__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_AVoxelWorld_OnWorldDestroyed__DelegateSignature_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UDelegateFunction_AVoxelWorld_OnWorldDestroyed__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AVoxelWorld_OnWorldDestroyed__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void AVoxelWorld::FOnWorldDestroyed_DelegateWrapper(const FMulticastScriptDelegate& OnWorldDestroyed)
{
	OnWorldDestroyed.ProcessMulticastDelegate<UObject>(NULL);
}
// ********** End Delegate FOnWorldDestroyed *******************************************************

// ********** Begin Delegate FOnMaxFoliageInstancesReached *****************************************
struct Z_Construct_UDelegateFunction_AVoxelWorld_OnMaxFoliageInstancesReached__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/VoxelWorld.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_AVoxelWorld_OnMaxFoliageInstancesReached__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AVoxelWorld, nullptr, "OnMaxFoliageInstancesReached__DelegateSignature", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AVoxelWorld_OnMaxFoliageInstancesReached__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_AVoxelWorld_OnMaxFoliageInstancesReached__DelegateSignature_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UDelegateFunction_AVoxelWorld_OnMaxFoliageInstancesReached__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AVoxelWorld_OnMaxFoliageInstancesReached__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void AVoxelWorld::FOnMaxFoliageInstancesReached_DelegateWrapper(const FMulticastScriptDelegate& OnMaxFoliageInstancesReached)
{
	OnMaxFoliageInstancesReached.ProcessMulticastDelegate<UObject>(NULL);
}
// ********** End Delegate FOnMaxFoliageInstancesReached *******************************************

// ********** Begin Class AVoxelWorld Function AddOffset *******************************************
struct Z_Construct_UFunction_AVoxelWorld_AddOffset_Statics
{
	struct VoxelWorld_eventAddOffset_Parms
	{
		FIntVector OffsetInVoxels;
		bool bMoveActor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Voxel|General" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Add an offset to the world coordinate system (eg for rebasing)\n\x09 * @param\x09OffsetInVoxels\x09Offset\n\x09 * @param\x09""bMoveActor\x09\x09If false, the actor will keep its current position\n\x09 */" },
#endif
		{ "CPP_Default_bMoveActor", "true" },
		{ "ModuleRelativePath", "Public/VoxelWorld.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Add an offset to the world coordinate system (eg for rebasing)\n@param       OffsetInVoxels  Offset\n@param       bMoveActor              If false, the actor will keep its current position" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OffsetInVoxels_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OffsetInVoxels;
	static void NewProp_bMoveActor_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bMoveActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AVoxelWorld_AddOffset_Statics::NewProp_OffsetInVoxels = { "OffsetInVoxels", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelWorld_eventAddOffset_Parms, OffsetInVoxels), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OffsetInVoxels_MetaData), NewProp_OffsetInVoxels_MetaData) };
void Z_Construct_UFunction_AVoxelWorld_AddOffset_Statics::NewProp_bMoveActor_SetBit(void* Obj)
{
	((VoxelWorld_eventAddOffset_Parms*)Obj)->bMoveActor = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AVoxelWorld_AddOffset_Statics::NewProp_bMoveActor = { "bMoveActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VoxelWorld_eventAddOffset_Parms), &Z_Construct_UFunction_AVoxelWorld_AddOffset_Statics::NewProp_bMoveActor_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVoxelWorld_AddOffset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVoxelWorld_AddOffset_Statics::NewProp_OffsetInVoxels,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVoxelWorld_AddOffset_Statics::NewProp_bMoveActor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AVoxelWorld_AddOffset_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVoxelWorld_AddOffset_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AVoxelWorld, nullptr, "AddOffset", Z_Construct_UFunction_AVoxelWorld_AddOffset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AVoxelWorld_AddOffset_Statics::PropPointers), sizeof(Z_Construct_UFunction_AVoxelWorld_AddOffset_Statics::VoxelWorld_eventAddOffset_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AVoxelWorld_AddOffset_Statics::Function_MetaDataParams), Z_Construct_UFunction_AVoxelWorld_AddOffset_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AVoxelWorld_AddOffset_Statics::VoxelWorld_eventAddOffset_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AVoxelWorld_AddOffset()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVoxelWorld_AddOffset_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AVoxelWorld::execAddOffset)
{
	P_GET_STRUCT_REF(FIntVector,Z_Param_Out_OffsetInVoxels);
	P_GET_UBOOL(Z_Param_bMoveActor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddOffset(Z_Param_Out_OffsetInVoxels,Z_Param_bMoveActor);
	P_NATIVE_END;
}
// ********** End Class AVoxelWorld Function AddOffset *********************************************

// ********** Begin Class AVoxelWorld Function CreateMultiplayerInterfaceInstance ******************
struct Z_Construct_UFunction_AVoxelWorld_CreateMultiplayerInterfaceInstance_Statics
{
	struct VoxelWorld_eventCreateMultiplayerInterfaceInstance_Parms
	{
		UVoxelMultiplayerInterface* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Voxel|Multiplayer" },
		{ "ModuleRelativePath", "Public/VoxelWorld.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AVoxelWorld_CreateMultiplayerInterfaceInstance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelWorld_eventCreateMultiplayerInterfaceInstance_Parms, ReturnValue), Z_Construct_UClass_UVoxelMultiplayerInterface_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVoxelWorld_CreateMultiplayerInterfaceInstance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVoxelWorld_CreateMultiplayerInterfaceInstance_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AVoxelWorld_CreateMultiplayerInterfaceInstance_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVoxelWorld_CreateMultiplayerInterfaceInstance_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AVoxelWorld, nullptr, "CreateMultiplayerInterfaceInstance", Z_Construct_UFunction_AVoxelWorld_CreateMultiplayerInterfaceInstance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AVoxelWorld_CreateMultiplayerInterfaceInstance_Statics::PropPointers), sizeof(Z_Construct_UFunction_AVoxelWorld_CreateMultiplayerInterfaceInstance_Statics::VoxelWorld_eventCreateMultiplayerInterfaceInstance_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AVoxelWorld_CreateMultiplayerInterfaceInstance_Statics::Function_MetaDataParams), Z_Construct_UFunction_AVoxelWorld_CreateMultiplayerInterfaceInstance_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AVoxelWorld_CreateMultiplayerInterfaceInstance_Statics::VoxelWorld_eventCreateMultiplayerInterfaceInstance_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AVoxelWorld_CreateMultiplayerInterfaceInstance()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVoxelWorld_CreateMultiplayerInterfaceInstance_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AVoxelWorld::execCreateMultiplayerInterfaceInstance)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UVoxelMultiplayerInterface**)Z_Param__Result=P_THIS->CreateMultiplayerInterfaceInstance();
	P_NATIVE_END;
}
// ********** End Class AVoxelWorld Function CreateMultiplayerInterfaceInstance ********************

// ********** Begin Class AVoxelWorld Function CreateWorld *****************************************
struct Z_Construct_UFunction_AVoxelWorld_CreateWorld_Statics
{
	struct VoxelWorld_eventCreateWorld_Parms
	{
		FVoxelWorldCreateInfo Info;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Voxel|General" },
		{ "ModuleRelativePath", "Public/VoxelWorld.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Info;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AVoxelWorld_CreateWorld_Statics::NewProp_Info = { "Info", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelWorld_eventCreateWorld_Parms, Info), Z_Construct_UScriptStruct_FVoxelWorldCreateInfo, METADATA_PARAMS(0, nullptr) }; // 4101309925
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVoxelWorld_CreateWorld_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVoxelWorld_CreateWorld_Statics::NewProp_Info,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AVoxelWorld_CreateWorld_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVoxelWorld_CreateWorld_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AVoxelWorld, nullptr, "CreateWorld", Z_Construct_UFunction_AVoxelWorld_CreateWorld_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AVoxelWorld_CreateWorld_Statics::PropPointers), sizeof(Z_Construct_UFunction_AVoxelWorld_CreateWorld_Statics::VoxelWorld_eventCreateWorld_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AVoxelWorld_CreateWorld_Statics::Function_MetaDataParams), Z_Construct_UFunction_AVoxelWorld_CreateWorld_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AVoxelWorld_CreateWorld_Statics::VoxelWorld_eventCreateWorld_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AVoxelWorld_CreateWorld()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVoxelWorld_CreateWorld_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AVoxelWorld::execCreateWorld)
{
	P_GET_STRUCT(FVoxelWorldCreateInfo,Z_Param_Info);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CreateWorld(Z_Param_Info);
	P_NATIVE_END;
}
// ********** End Class AVoxelWorld Function CreateWorld *******************************************

// ********** Begin Class AVoxelWorld Function DestroyWorld ****************************************
struct Z_Construct_UFunction_AVoxelWorld_DestroyWorld_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Voxel|General" },
		{ "ModuleRelativePath", "Public/VoxelWorld.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVoxelWorld_DestroyWorld_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AVoxelWorld, nullptr, "DestroyWorld", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AVoxelWorld_DestroyWorld_Statics::Function_MetaDataParams), Z_Construct_UFunction_AVoxelWorld_DestroyWorld_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AVoxelWorld_DestroyWorld()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVoxelWorld_DestroyWorld_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AVoxelWorld::execDestroyWorld)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DestroyWorld();
	P_NATIVE_END;
}
// ********** End Class AVoxelWorld Function DestroyWorld ******************************************

// ********** Begin Class AVoxelWorld Function GetGeneratorInit ************************************
struct Z_Construct_UFunction_AVoxelWorld_GetGeneratorInit_Statics
{
	struct VoxelWorld_eventGetGeneratorInit_Parms
	{
		FVoxelGeneratorInit ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Voxel|General" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Used to init generators\n" },
#endif
		{ "ModuleRelativePath", "Public/VoxelWorld.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Used to init generators" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AVoxelWorld_GetGeneratorInit_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelWorld_eventGetGeneratorInit_Parms, ReturnValue), Z_Construct_UScriptStruct_FVoxelGeneratorInit, METADATA_PARAMS(0, nullptr) }; // 2675460303
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVoxelWorld_GetGeneratorInit_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVoxelWorld_GetGeneratorInit_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AVoxelWorld_GetGeneratorInit_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVoxelWorld_GetGeneratorInit_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AVoxelWorld, nullptr, "GetGeneratorInit", Z_Construct_UFunction_AVoxelWorld_GetGeneratorInit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AVoxelWorld_GetGeneratorInit_Statics::PropPointers), sizeof(Z_Construct_UFunction_AVoxelWorld_GetGeneratorInit_Statics::VoxelWorld_eventGetGeneratorInit_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AVoxelWorld_GetGeneratorInit_Statics::Function_MetaDataParams), Z_Construct_UFunction_AVoxelWorld_GetGeneratorInit_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AVoxelWorld_GetGeneratorInit_Statics::VoxelWorld_eventGetGeneratorInit_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AVoxelWorld_GetGeneratorInit()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVoxelWorld_GetGeneratorInit_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AVoxelWorld::execGetGeneratorInit)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVoxelGeneratorInit*)Z_Param__Result=P_THIS->GetGeneratorInit();
	P_NATIVE_END;
}
// ********** End Class AVoxelWorld Function GetGeneratorInit **************************************

// ********** Begin Class AVoxelWorld Function GetMultiplayerInterfaceInstance *********************
struct Z_Construct_UFunction_AVoxelWorld_GetMultiplayerInterfaceInstance_Statics
{
	struct VoxelWorld_eventGetMultiplayerInterfaceInstance_Parms
	{
		UVoxelMultiplayerInterface* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Voxel|Multiplayer" },
		{ "ModuleRelativePath", "Public/VoxelWorld.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AVoxelWorld_GetMultiplayerInterfaceInstance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelWorld_eventGetMultiplayerInterfaceInstance_Parms, ReturnValue), Z_Construct_UClass_UVoxelMultiplayerInterface_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVoxelWorld_GetMultiplayerInterfaceInstance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVoxelWorld_GetMultiplayerInterfaceInstance_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AVoxelWorld_GetMultiplayerInterfaceInstance_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVoxelWorld_GetMultiplayerInterfaceInstance_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AVoxelWorld, nullptr, "GetMultiplayerInterfaceInstance", Z_Construct_UFunction_AVoxelWorld_GetMultiplayerInterfaceInstance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AVoxelWorld_GetMultiplayerInterfaceInstance_Statics::PropPointers), sizeof(Z_Construct_UFunction_AVoxelWorld_GetMultiplayerInterfaceInstance_Statics::VoxelWorld_eventGetMultiplayerInterfaceInstance_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AVoxelWorld_GetMultiplayerInterfaceInstance_Statics::Function_MetaDataParams), Z_Construct_UFunction_AVoxelWorld_GetMultiplayerInterfaceInstance_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AVoxelWorld_GetMultiplayerInterfaceInstance_Statics::VoxelWorld_eventGetMultiplayerInterfaceInstance_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AVoxelWorld_GetMultiplayerInterfaceInstance()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVoxelWorld_GetMultiplayerInterfaceInstance_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AVoxelWorld::execGetMultiplayerInterfaceInstance)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UVoxelMultiplayerInterface**)Z_Param__Result=P_THIS->GetMultiplayerInterfaceInstance();
	P_NATIVE_END;
}
// ********** End Class AVoxelWorld Function GetMultiplayerInterfaceInstance ***********************

// ********** Begin Class AVoxelWorld Function GetNeighboringPositions *****************************
struct Z_Construct_UFunction_AVoxelWorld_GetNeighboringPositions_Statics
{
	struct VoxelWorld_eventGetNeighboringPositions_Parms
	{
		FVector GlobalPosition;
		TArray<FIntVector> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Voxel|General|Coordinates" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Get the 8 neighbors in voxel space of GlobalPosition\n\x09 * @param\x09GlobalPosition\x09The position in world space\n\x09 * @return\x09The 8 neighbors in voxel space \n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/VoxelWorld.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get the 8 neighbors in voxel space of GlobalPosition\n@param       GlobalPosition  The position in world space\n@return      The 8 neighbors in voxel space" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GlobalPosition_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_GlobalPosition;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AVoxelWorld_GetNeighboringPositions_Statics::NewProp_GlobalPosition = { "GlobalPosition", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelWorld_eventGetNeighboringPositions_Parms, GlobalPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GlobalPosition_MetaData), NewProp_GlobalPosition_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AVoxelWorld_GetNeighboringPositions_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AVoxelWorld_GetNeighboringPositions_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelWorld_eventGetNeighboringPositions_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVoxelWorld_GetNeighboringPositions_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVoxelWorld_GetNeighboringPositions_Statics::NewProp_GlobalPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVoxelWorld_GetNeighboringPositions_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVoxelWorld_GetNeighboringPositions_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AVoxelWorld_GetNeighboringPositions_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVoxelWorld_GetNeighboringPositions_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AVoxelWorld, nullptr, "GetNeighboringPositions", Z_Construct_UFunction_AVoxelWorld_GetNeighboringPositions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AVoxelWorld_GetNeighboringPositions_Statics::PropPointers), sizeof(Z_Construct_UFunction_AVoxelWorld_GetNeighboringPositions_Statics::VoxelWorld_eventGetNeighboringPositions_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AVoxelWorld_GetNeighboringPositions_Statics::Function_MetaDataParams), Z_Construct_UFunction_AVoxelWorld_GetNeighboringPositions_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AVoxelWorld_GetNeighboringPositions_Statics::VoxelWorld_eventGetNeighboringPositions_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AVoxelWorld_GetNeighboringPositions()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVoxelWorld_GetNeighboringPositions_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AVoxelWorld::execGetNeighboringPositions)
{
	P_GET_STRUCT_REF(FVector,Z_Param_Out_GlobalPosition);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FIntVector>*)Z_Param__Result=P_THIS->GetNeighboringPositions(Z_Param_Out_GlobalPosition);
	P_NATIVE_END;
}
// ********** End Class AVoxelWorld Function GetNeighboringPositions *******************************

// ********** Begin Class AVoxelWorld Function GlobalToLocal ***************************************
struct Z_Construct_UFunction_AVoxelWorld_GlobalToLocal_Statics
{
	struct VoxelWorld_eventGlobalToLocal_Parms
	{
		FVector Position;
		EVoxelWorldCoordinatesRounding Rounding;
		FIntVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "Rounding" },
		{ "Category", "Voxel|General|Coordinates" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Convert position from world space to voxel space\n\x09 * @param\x09Position\x09Position in world space\n\x09 * @param\x09Rounding\x09How to round\n\x09 * @return\x09Position in voxel space\n\x09 */" },
#endif
		{ "CPP_Default_Rounding", "RoundToNearest" },
		{ "DisplayName", "World Position to Voxel" },
		{ "ModuleRelativePath", "Public/VoxelWorld.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Convert position from world space to voxel space\n@param       Position        Position in world space\n@param       Rounding        How to round\n@return      Position in voxel space" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Position;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Rounding_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Rounding;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AVoxelWorld_GlobalToLocal_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelWorld_eventGlobalToLocal_Parms, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Position_MetaData), NewProp_Position_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AVoxelWorld_GlobalToLocal_Statics::NewProp_Rounding_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AVoxelWorld_GlobalToLocal_Statics::NewProp_Rounding = { "Rounding", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelWorld_eventGlobalToLocal_Parms, Rounding), Z_Construct_UEnum_Voxel_EVoxelWorldCoordinatesRounding, METADATA_PARAMS(0, nullptr) }; // 322150197
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AVoxelWorld_GlobalToLocal_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelWorld_eventGlobalToLocal_Parms, ReturnValue), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVoxelWorld_GlobalToLocal_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVoxelWorld_GlobalToLocal_Statics::NewProp_Position,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVoxelWorld_GlobalToLocal_Statics::NewProp_Rounding_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVoxelWorld_GlobalToLocal_Statics::NewProp_Rounding,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVoxelWorld_GlobalToLocal_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AVoxelWorld_GlobalToLocal_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVoxelWorld_GlobalToLocal_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AVoxelWorld, nullptr, "GlobalToLocal", Z_Construct_UFunction_AVoxelWorld_GlobalToLocal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AVoxelWorld_GlobalToLocal_Statics::PropPointers), sizeof(Z_Construct_UFunction_AVoxelWorld_GlobalToLocal_Statics::VoxelWorld_eventGlobalToLocal_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AVoxelWorld_GlobalToLocal_Statics::Function_MetaDataParams), Z_Construct_UFunction_AVoxelWorld_GlobalToLocal_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AVoxelWorld_GlobalToLocal_Statics::VoxelWorld_eventGlobalToLocal_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AVoxelWorld_GlobalToLocal()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVoxelWorld_GlobalToLocal_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AVoxelWorld::execGlobalToLocal)
{
	P_GET_STRUCT_REF(FVector,Z_Param_Out_Position);
	P_GET_ENUM(EVoxelWorldCoordinatesRounding,Z_Param_Rounding);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FIntVector*)Z_Param__Result=P_THIS->GlobalToLocal(Z_Param_Out_Position,EVoxelWorldCoordinatesRounding(Z_Param_Rounding));
	P_NATIVE_END;
}
// ********** End Class AVoxelWorld Function GlobalToLocal *****************************************

// ********** Begin Class AVoxelWorld Function GlobalToLocalFloatBP ********************************
struct Z_Construct_UFunction_AVoxelWorld_GlobalToLocalFloatBP_Statics
{
	struct VoxelWorld_eventGlobalToLocalFloatBP_Parms
	{
		FVector Position;
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Voxel|General|Coordinates" },
		{ "DisplayName", "World Position to Voxel Float" },
		{ "ModuleRelativePath", "Public/VoxelWorld.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Position;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AVoxelWorld_GlobalToLocalFloatBP_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelWorld_eventGlobalToLocalFloatBP_Parms, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Position_MetaData), NewProp_Position_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AVoxelWorld_GlobalToLocalFloatBP_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelWorld_eventGlobalToLocalFloatBP_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVoxelWorld_GlobalToLocalFloatBP_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVoxelWorld_GlobalToLocalFloatBP_Statics::NewProp_Position,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVoxelWorld_GlobalToLocalFloatBP_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AVoxelWorld_GlobalToLocalFloatBP_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVoxelWorld_GlobalToLocalFloatBP_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AVoxelWorld, nullptr, "GlobalToLocalFloatBP", Z_Construct_UFunction_AVoxelWorld_GlobalToLocalFloatBP_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AVoxelWorld_GlobalToLocalFloatBP_Statics::PropPointers), sizeof(Z_Construct_UFunction_AVoxelWorld_GlobalToLocalFloatBP_Statics::VoxelWorld_eventGlobalToLocalFloatBP_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AVoxelWorld_GlobalToLocalFloatBP_Statics::Function_MetaDataParams), Z_Construct_UFunction_AVoxelWorld_GlobalToLocalFloatBP_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AVoxelWorld_GlobalToLocalFloatBP_Statics::VoxelWorld_eventGlobalToLocalFloatBP_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AVoxelWorld_GlobalToLocalFloatBP()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVoxelWorld_GlobalToLocalFloatBP_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AVoxelWorld::execGlobalToLocalFloatBP)
{
	P_GET_STRUCT_REF(FVector,Z_Param_Out_Position);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=P_THIS->GlobalToLocalFloatBP(Z_Param_Out_Position);
	P_NATIVE_END;
}
// ********** End Class AVoxelWorld Function GlobalToLocalFloatBP **********************************

// ********** Begin Class AVoxelWorld Function IsCreated *******************************************
struct Z_Construct_UFunction_AVoxelWorld_IsCreated_Statics
{
	struct VoxelWorld_eventIsCreated_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Voxel|General" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Is this world created?\n" },
#endif
		{ "ModuleRelativePath", "Public/VoxelWorld.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Is this world created?" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AVoxelWorld_IsCreated_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((VoxelWorld_eventIsCreated_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AVoxelWorld_IsCreated_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VoxelWorld_eventIsCreated_Parms), &Z_Construct_UFunction_AVoxelWorld_IsCreated_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVoxelWorld_IsCreated_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVoxelWorld_IsCreated_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AVoxelWorld_IsCreated_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVoxelWorld_IsCreated_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AVoxelWorld, nullptr, "IsCreated", Z_Construct_UFunction_AVoxelWorld_IsCreated_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AVoxelWorld_IsCreated_Statics::PropPointers), sizeof(Z_Construct_UFunction_AVoxelWorld_IsCreated_Statics::VoxelWorld_eventIsCreated_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AVoxelWorld_IsCreated_Statics::Function_MetaDataParams), Z_Construct_UFunction_AVoxelWorld_IsCreated_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AVoxelWorld_IsCreated_Statics::VoxelWorld_eventIsCreated_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AVoxelWorld_IsCreated()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVoxelWorld_IsCreated_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AVoxelWorld::execIsCreated)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsCreated();
	P_NATIVE_END;
}
// ********** End Class AVoxelWorld Function IsCreated *********************************************

// ********** Begin Class AVoxelWorld Function IsLoaded ********************************************
struct Z_Construct_UFunction_AVoxelWorld_IsLoaded_Statics
{
	struct VoxelWorld_eventIsLoaded_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Voxel|General" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Has the VoxelRenderer finished loading?\n" },
#endif
		{ "ModuleRelativePath", "Public/VoxelWorld.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Has the VoxelRenderer finished loading?" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AVoxelWorld_IsLoaded_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((VoxelWorld_eventIsLoaded_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AVoxelWorld_IsLoaded_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VoxelWorld_eventIsLoaded_Parms), &Z_Construct_UFunction_AVoxelWorld_IsLoaded_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVoxelWorld_IsLoaded_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVoxelWorld_IsLoaded_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AVoxelWorld_IsLoaded_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVoxelWorld_IsLoaded_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AVoxelWorld, nullptr, "IsLoaded", Z_Construct_UFunction_AVoxelWorld_IsLoaded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AVoxelWorld_IsLoaded_Statics::PropPointers), sizeof(Z_Construct_UFunction_AVoxelWorld_IsLoaded_Statics::VoxelWorld_eventIsLoaded_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AVoxelWorld_IsLoaded_Statics::Function_MetaDataParams), Z_Construct_UFunction_AVoxelWorld_IsLoaded_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AVoxelWorld_IsLoaded_Statics::VoxelWorld_eventIsLoaded_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AVoxelWorld_IsLoaded()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVoxelWorld_IsLoaded_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AVoxelWorld::execIsLoaded)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsLoaded();
	P_NATIVE_END;
}
// ********** End Class AVoxelWorld Function IsLoaded **********************************************

// ********** Begin Class AVoxelWorld Function K2_GetGeneratorCache ********************************
struct Z_Construct_UFunction_AVoxelWorld_K2_GetGeneratorCache_Statics
{
	struct VoxelWorld_eventK2_GetGeneratorCache_Parms
	{
		UVoxelGeneratorCache* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Voxel|General" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The generator cache allows to reuse generator objects\n// This is required for DataItemActors to allow for smaller update when moving them\n" },
#endif
		{ "DisplayName", "Get Generator Cache" },
		{ "ModuleRelativePath", "Public/VoxelWorld.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The generator cache allows to reuse generator objects\nThis is required for DataItemActors to allow for smaller update when moving them" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AVoxelWorld_K2_GetGeneratorCache_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelWorld_eventK2_GetGeneratorCache_Parms, ReturnValue), Z_Construct_UClass_UVoxelGeneratorCache_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVoxelWorld_K2_GetGeneratorCache_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVoxelWorld_K2_GetGeneratorCache_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AVoxelWorld_K2_GetGeneratorCache_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVoxelWorld_K2_GetGeneratorCache_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AVoxelWorld, nullptr, "K2_GetGeneratorCache", Z_Construct_UFunction_AVoxelWorld_K2_GetGeneratorCache_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AVoxelWorld_K2_GetGeneratorCache_Statics::PropPointers), sizeof(Z_Construct_UFunction_AVoxelWorld_K2_GetGeneratorCache_Statics::VoxelWorld_eventK2_GetGeneratorCache_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AVoxelWorld_K2_GetGeneratorCache_Statics::Function_MetaDataParams), Z_Construct_UFunction_AVoxelWorld_K2_GetGeneratorCache_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AVoxelWorld_K2_GetGeneratorCache_Statics::VoxelWorld_eventK2_GetGeneratorCache_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AVoxelWorld_K2_GetGeneratorCache()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVoxelWorld_K2_GetGeneratorCache_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AVoxelWorld::execK2_GetGeneratorCache)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UVoxelGeneratorCache**)Z_Param__Result=P_THIS->K2_GetGeneratorCache();
	P_NATIVE_END;
}
// ********** End Class AVoxelWorld Function K2_GetGeneratorCache **********************************

// ********** Begin Class AVoxelWorld Function LocalToGlobal ***************************************
struct Z_Construct_UFunction_AVoxelWorld_LocalToGlobal_Statics
{
	struct VoxelWorld_eventLocalToGlobal_Parms
	{
		FIntVector Position;
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Voxel|General|Coordinates" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Convert position from voxel space to world space\n\x09 * @param\x09Position\x09Position in voxel space\n\x09 * @return\x09Position in world space\n\x09 */" },
#endif
		{ "DisplayName", "Voxel Position to World" },
		{ "ModuleRelativePath", "Public/VoxelWorld.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Convert position from voxel space to world space\n@param       Position        Position in voxel space\n@return      Position in world space" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Position;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AVoxelWorld_LocalToGlobal_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelWorld_eventLocalToGlobal_Parms, Position), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Position_MetaData), NewProp_Position_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AVoxelWorld_LocalToGlobal_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelWorld_eventLocalToGlobal_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVoxelWorld_LocalToGlobal_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVoxelWorld_LocalToGlobal_Statics::NewProp_Position,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVoxelWorld_LocalToGlobal_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AVoxelWorld_LocalToGlobal_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVoxelWorld_LocalToGlobal_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AVoxelWorld, nullptr, "LocalToGlobal", Z_Construct_UFunction_AVoxelWorld_LocalToGlobal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AVoxelWorld_LocalToGlobal_Statics::PropPointers), sizeof(Z_Construct_UFunction_AVoxelWorld_LocalToGlobal_Statics::VoxelWorld_eventLocalToGlobal_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AVoxelWorld_LocalToGlobal_Statics::Function_MetaDataParams), Z_Construct_UFunction_AVoxelWorld_LocalToGlobal_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AVoxelWorld_LocalToGlobal_Statics::VoxelWorld_eventLocalToGlobal_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AVoxelWorld_LocalToGlobal()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVoxelWorld_LocalToGlobal_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AVoxelWorld::execLocalToGlobal)
{
	P_GET_STRUCT_REF(FIntVector,Z_Param_Out_Position);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=P_THIS->LocalToGlobal(Z_Param_Out_Position);
	P_NATIVE_END;
}
// ********** End Class AVoxelWorld Function LocalToGlobal *****************************************

// ********** Begin Class AVoxelWorld Function LocalToGlobalFloatBP ********************************
struct Z_Construct_UFunction_AVoxelWorld_LocalToGlobalFloatBP_Statics
{
	struct VoxelWorld_eventLocalToGlobalFloatBP_Parms
	{
		FVector Position;
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Voxel|General|Coordinates" },
		{ "DisplayName", "Voxel Position to World Float" },
		{ "ModuleRelativePath", "Public/VoxelWorld.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Position;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AVoxelWorld_LocalToGlobalFloatBP_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelWorld_eventLocalToGlobalFloatBP_Parms, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Position_MetaData), NewProp_Position_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AVoxelWorld_LocalToGlobalFloatBP_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelWorld_eventLocalToGlobalFloatBP_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVoxelWorld_LocalToGlobalFloatBP_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVoxelWorld_LocalToGlobalFloatBP_Statics::NewProp_Position,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVoxelWorld_LocalToGlobalFloatBP_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AVoxelWorld_LocalToGlobalFloatBP_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVoxelWorld_LocalToGlobalFloatBP_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AVoxelWorld, nullptr, "LocalToGlobalFloatBP", Z_Construct_UFunction_AVoxelWorld_LocalToGlobalFloatBP_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AVoxelWorld_LocalToGlobalFloatBP_Statics::PropPointers), sizeof(Z_Construct_UFunction_AVoxelWorld_LocalToGlobalFloatBP_Statics::VoxelWorld_eventLocalToGlobalFloatBP_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AVoxelWorld_LocalToGlobalFloatBP_Statics::Function_MetaDataParams), Z_Construct_UFunction_AVoxelWorld_LocalToGlobalFloatBP_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AVoxelWorld_LocalToGlobalFloatBP_Statics::VoxelWorld_eventLocalToGlobalFloatBP_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AVoxelWorld_LocalToGlobalFloatBP()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVoxelWorld_LocalToGlobalFloatBP_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AVoxelWorld::execLocalToGlobalFloatBP)
{
	P_GET_STRUCT_REF(FVector,Z_Param_Out_Position);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=P_THIS->LocalToGlobalFloatBP(Z_Param_Out_Position);
	P_NATIVE_END;
}
// ********** End Class AVoxelWorld Function LocalToGlobalFloatBP **********************************

// ********** Begin Class AVoxelWorld Function SetCollisionResponseToChannel ***********************
struct Z_Construct_UFunction_AVoxelWorld_SetCollisionResponseToChannel_Statics
{
	struct VoxelWorld_eventSetCollisionResponseToChannel_Parms
	{
		TEnumAsByte<ECollisionChannel> Channel;
		TEnumAsByte<ECollisionResponse> NewResponse;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Voxel|Collision" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Can be called at runtime\n" },
#endif
		{ "ModuleRelativePath", "Public/VoxelWorld.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Can be called at runtime" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Channel;
	static const UECodeGen_Private::FBytePropertyParams NewProp_NewResponse;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AVoxelWorld_SetCollisionResponseToChannel_Statics::NewProp_Channel = { "Channel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelWorld_eventSetCollisionResponseToChannel_Parms, Channel), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(0, nullptr) }; // 756624936
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AVoxelWorld_SetCollisionResponseToChannel_Statics::NewProp_NewResponse = { "NewResponse", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelWorld_eventSetCollisionResponseToChannel_Parms, NewResponse), Z_Construct_UEnum_Engine_ECollisionResponse, METADATA_PARAMS(0, nullptr) }; // 1009580041
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVoxelWorld_SetCollisionResponseToChannel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVoxelWorld_SetCollisionResponseToChannel_Statics::NewProp_Channel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVoxelWorld_SetCollisionResponseToChannel_Statics::NewProp_NewResponse,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AVoxelWorld_SetCollisionResponseToChannel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVoxelWorld_SetCollisionResponseToChannel_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AVoxelWorld, nullptr, "SetCollisionResponseToChannel", Z_Construct_UFunction_AVoxelWorld_SetCollisionResponseToChannel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AVoxelWorld_SetCollisionResponseToChannel_Statics::PropPointers), sizeof(Z_Construct_UFunction_AVoxelWorld_SetCollisionResponseToChannel_Statics::VoxelWorld_eventSetCollisionResponseToChannel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AVoxelWorld_SetCollisionResponseToChannel_Statics::Function_MetaDataParams), Z_Construct_UFunction_AVoxelWorld_SetCollisionResponseToChannel_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AVoxelWorld_SetCollisionResponseToChannel_Statics::VoxelWorld_eventSetCollisionResponseToChannel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AVoxelWorld_SetCollisionResponseToChannel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVoxelWorld_SetCollisionResponseToChannel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AVoxelWorld::execSetCollisionResponseToChannel)
{
	P_GET_PROPERTY(FByteProperty,Z_Param_Channel);
	P_GET_PROPERTY(FByteProperty,Z_Param_NewResponse);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetCollisionResponseToChannel(ECollisionChannel(Z_Param_Channel),ECollisionResponse(Z_Param_NewResponse));
	P_NATIVE_END;
}
// ********** End Class AVoxelWorld Function SetCollisionResponseToChannel *************************

// ********** Begin Class AVoxelWorld Function SetGeneratorClass ***********************************
struct Z_Construct_UFunction_AVoxelWorld_SetGeneratorClass_Statics
{
	struct VoxelWorld_eventSetGeneratorClass_Parms
	{
		TSubclassOf<UVoxelGenerator> NewGeneratorClass;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Voxel|General" },
		{ "ModuleRelativePath", "Public/VoxelWorld.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_NewGeneratorClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AVoxelWorld_SetGeneratorClass_Statics::NewProp_NewGeneratorClass = { "NewGeneratorClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelWorld_eventSetGeneratorClass_Parms, NewGeneratorClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UVoxelGenerator_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVoxelWorld_SetGeneratorClass_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVoxelWorld_SetGeneratorClass_Statics::NewProp_NewGeneratorClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AVoxelWorld_SetGeneratorClass_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVoxelWorld_SetGeneratorClass_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AVoxelWorld, nullptr, "SetGeneratorClass", Z_Construct_UFunction_AVoxelWorld_SetGeneratorClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AVoxelWorld_SetGeneratorClass_Statics::PropPointers), sizeof(Z_Construct_UFunction_AVoxelWorld_SetGeneratorClass_Statics::VoxelWorld_eventSetGeneratorClass_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AVoxelWorld_SetGeneratorClass_Statics::Function_MetaDataParams), Z_Construct_UFunction_AVoxelWorld_SetGeneratorClass_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AVoxelWorld_SetGeneratorClass_Statics::VoxelWorld_eventSetGeneratorClass_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AVoxelWorld_SetGeneratorClass()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVoxelWorld_SetGeneratorClass_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AVoxelWorld::execSetGeneratorClass)
{
	P_GET_OBJECT(UClass,Z_Param_NewGeneratorClass);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetGeneratorClass(Z_Param_NewGeneratorClass);
	P_NATIVE_END;
}
// ********** End Class AVoxelWorld Function SetGeneratorClass *************************************

// ********** Begin Class AVoxelWorld Function SetGeneratorObject **********************************
struct Z_Construct_UFunction_AVoxelWorld_SetGeneratorObject_Statics
{
	struct VoxelWorld_eventSetGeneratorObject_Parms
	{
		UVoxelGenerator* NewGenerator;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Voxel|General" },
		{ "ModuleRelativePath", "Public/VoxelWorld.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewGenerator;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AVoxelWorld_SetGeneratorObject_Statics::NewProp_NewGenerator = { "NewGenerator", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelWorld_eventSetGeneratorObject_Parms, NewGenerator), Z_Construct_UClass_UVoxelGenerator_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVoxelWorld_SetGeneratorObject_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVoxelWorld_SetGeneratorObject_Statics::NewProp_NewGenerator,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AVoxelWorld_SetGeneratorObject_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVoxelWorld_SetGeneratorObject_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AVoxelWorld, nullptr, "SetGeneratorObject", Z_Construct_UFunction_AVoxelWorld_SetGeneratorObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AVoxelWorld_SetGeneratorObject_Statics::PropPointers), sizeof(Z_Construct_UFunction_AVoxelWorld_SetGeneratorObject_Statics::VoxelWorld_eventSetGeneratorObject_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AVoxelWorld_SetGeneratorObject_Statics::Function_MetaDataParams), Z_Construct_UFunction_AVoxelWorld_SetGeneratorObject_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AVoxelWorld_SetGeneratorObject_Statics::VoxelWorld_eventSetGeneratorObject_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AVoxelWorld_SetGeneratorObject()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVoxelWorld_SetGeneratorObject_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AVoxelWorld::execSetGeneratorObject)
{
	P_GET_OBJECT(UVoxelGenerator,Z_Param_NewGenerator);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetGeneratorObject(Z_Param_NewGenerator);
	P_NATIVE_END;
}
// ********** End Class AVoxelWorld Function SetGeneratorObject ************************************

// ********** Begin Class AVoxelWorld Function SetOffset *******************************************
struct Z_Construct_UFunction_AVoxelWorld_SetOffset_Statics
{
	struct VoxelWorld_eventSetOffset_Parms
	{
		FIntVector OffsetInVoxels;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Voxel|General" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Set the voxel world voxel offset\n\x09 * @param\x09OffsetInVoxels\x09Offset\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/VoxelWorld.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set the voxel world voxel offset\n@param       OffsetInVoxels  Offset" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OffsetInVoxels_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OffsetInVoxels;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AVoxelWorld_SetOffset_Statics::NewProp_OffsetInVoxels = { "OffsetInVoxels", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelWorld_eventSetOffset_Parms, OffsetInVoxels), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OffsetInVoxels_MetaData), NewProp_OffsetInVoxels_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVoxelWorld_SetOffset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVoxelWorld_SetOffset_Statics::NewProp_OffsetInVoxels,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AVoxelWorld_SetOffset_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVoxelWorld_SetOffset_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AVoxelWorld, nullptr, "SetOffset", Z_Construct_UFunction_AVoxelWorld_SetOffset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AVoxelWorld_SetOffset_Statics::PropPointers), sizeof(Z_Construct_UFunction_AVoxelWorld_SetOffset_Statics::VoxelWorld_eventSetOffset_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AVoxelWorld_SetOffset_Statics::Function_MetaDataParams), Z_Construct_UFunction_AVoxelWorld_SetOffset_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AVoxelWorld_SetOffset_Statics::VoxelWorld_eventSetOffset_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AVoxelWorld_SetOffset()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVoxelWorld_SetOffset_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AVoxelWorld::execSetOffset)
{
	P_GET_STRUCT_REF(FIntVector,Z_Param_Out_OffsetInVoxels);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetOffset(Z_Param_Out_OffsetInVoxels);
	P_NATIVE_END;
}
// ********** End Class AVoxelWorld Function SetOffset *********************************************

// ********** Begin Class AVoxelWorld Function SetRenderOctreeDepth ********************************
struct Z_Construct_UFunction_AVoxelWorld_SetRenderOctreeDepth_Statics
{
	struct VoxelWorld_eventSetRenderOctreeDepth_Parms
	{
		int32 NewDepth;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Voxel|World Size" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Set the render octree depth\n" },
#endif
		{ "ModuleRelativePath", "Public/VoxelWorld.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set the render octree depth" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_NewDepth;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AVoxelWorld_SetRenderOctreeDepth_Statics::NewProp_NewDepth = { "NewDepth", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelWorld_eventSetRenderOctreeDepth_Parms, NewDepth), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVoxelWorld_SetRenderOctreeDepth_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVoxelWorld_SetRenderOctreeDepth_Statics::NewProp_NewDepth,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AVoxelWorld_SetRenderOctreeDepth_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVoxelWorld_SetRenderOctreeDepth_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AVoxelWorld, nullptr, "SetRenderOctreeDepth", Z_Construct_UFunction_AVoxelWorld_SetRenderOctreeDepth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AVoxelWorld_SetRenderOctreeDepth_Statics::PropPointers), sizeof(Z_Construct_UFunction_AVoxelWorld_SetRenderOctreeDepth_Statics::VoxelWorld_eventSetRenderOctreeDepth_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AVoxelWorld_SetRenderOctreeDepth_Statics::Function_MetaDataParams), Z_Construct_UFunction_AVoxelWorld_SetRenderOctreeDepth_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AVoxelWorld_SetRenderOctreeDepth_Statics::VoxelWorld_eventSetRenderOctreeDepth_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AVoxelWorld_SetRenderOctreeDepth()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVoxelWorld_SetRenderOctreeDepth_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AVoxelWorld::execSetRenderOctreeDepth)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_NewDepth);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetRenderOctreeDepth(Z_Param_NewDepth);
	P_NATIVE_END;
}
// ********** End Class AVoxelWorld Function SetRenderOctreeDepth **********************************

// ********** Begin Class AVoxelWorld Function SetWorldSize ****************************************
struct Z_Construct_UFunction_AVoxelWorld_SetWorldSize_Statics
{
	struct VoxelWorld_eventSetWorldSize_Parms
	{
		int32 NewWorldSizeInVoxels;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Voxel|World Size" },
		{ "ModuleRelativePath", "Public/VoxelWorld.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_NewWorldSizeInVoxels;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AVoxelWorld_SetWorldSize_Statics::NewProp_NewWorldSizeInVoxels = { "NewWorldSizeInVoxels", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelWorld_eventSetWorldSize_Parms, NewWorldSizeInVoxels), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVoxelWorld_SetWorldSize_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVoxelWorld_SetWorldSize_Statics::NewProp_NewWorldSizeInVoxels,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AVoxelWorld_SetWorldSize_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVoxelWorld_SetWorldSize_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AVoxelWorld, nullptr, "SetWorldSize", Z_Construct_UFunction_AVoxelWorld_SetWorldSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AVoxelWorld_SetWorldSize_Statics::PropPointers), sizeof(Z_Construct_UFunction_AVoxelWorld_SetWorldSize_Statics::VoxelWorld_eventSetWorldSize_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AVoxelWorld_SetWorldSize_Statics::Function_MetaDataParams), Z_Construct_UFunction_AVoxelWorld_SetWorldSize_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AVoxelWorld_SetWorldSize_Statics::VoxelWorld_eventSetWorldSize_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AVoxelWorld_SetWorldSize()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVoxelWorld_SetWorldSize_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AVoxelWorld::execSetWorldSize)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_NewWorldSizeInVoxels);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetWorldSize(Z_Param_NewWorldSizeInVoxels);
	P_NATIVE_END;
}
// ********** End Class AVoxelWorld Function SetWorldSize ******************************************

// ********** Begin Class AVoxelWorld **************************************************************
void AVoxelWorld::StaticRegisterNativesAVoxelWorld()
{
	UClass* Class = AVoxelWorld::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddOffset", &AVoxelWorld::execAddOffset },
		{ "CreateMultiplayerInterfaceInstance", &AVoxelWorld::execCreateMultiplayerInterfaceInstance },
		{ "CreateWorld", &AVoxelWorld::execCreateWorld },
		{ "DestroyWorld", &AVoxelWorld::execDestroyWorld },
		{ "GetGeneratorInit", &AVoxelWorld::execGetGeneratorInit },
		{ "GetMultiplayerInterfaceInstance", &AVoxelWorld::execGetMultiplayerInterfaceInstance },
		{ "GetNeighboringPositions", &AVoxelWorld::execGetNeighboringPositions },
		{ "GlobalToLocal", &AVoxelWorld::execGlobalToLocal },
		{ "GlobalToLocalFloatBP", &AVoxelWorld::execGlobalToLocalFloatBP },
		{ "IsCreated", &AVoxelWorld::execIsCreated },
		{ "IsLoaded", &AVoxelWorld::execIsLoaded },
		{ "K2_GetGeneratorCache", &AVoxelWorld::execK2_GetGeneratorCache },
		{ "LocalToGlobal", &AVoxelWorld::execLocalToGlobal },
		{ "LocalToGlobalFloatBP", &AVoxelWorld::execLocalToGlobalFloatBP },
		{ "SetCollisionResponseToChannel", &AVoxelWorld::execSetCollisionResponseToChannel },
		{ "SetGeneratorClass", &AVoxelWorld::execSetGeneratorClass },
		{ "SetGeneratorObject", &AVoxelWorld::execSetGeneratorObject },
		{ "SetOffset", &AVoxelWorld::execSetOffset },
		{ "SetRenderOctreeDepth", &AVoxelWorld::execSetRenderOctreeDepth },
		{ "SetWorldSize", &AVoxelWorld::execSetWorldSize },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_AVoxelWorld;
UClass* AVoxelWorld::GetPrivateStaticClass()
{
	using TClass = AVoxelWorld;
	if (!Z_Registration_Info_UClass_AVoxelWorld.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("VoxelWorld"),
			Z_Registration_Info_UClass_AVoxelWorld.InnerSingleton,
			StaticRegisterNativesAVoxelWorld,
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
	return Z_Registration_Info_UClass_AVoxelWorld.InnerSingleton;
}
UClass* Z_Construct_UClass_AVoxelWorld_NoRegister()
{
	return AVoxelWorld::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AVoxelWorld_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Voxel World actor class\n */" },
#endif
		{ "IncludePath", "VoxelWorld.h" },
		{ "ModuleRelativePath", "Public/VoxelWorld.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Voxel World actor class" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnGenerateWorld_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Called when generating the world, right after it's created\n// Bind this to add data items, or to do something right after the world is created\n" },
#endif
		{ "ModuleRelativePath", "Public/VoxelWorld.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called when generating the world, right after it's created\nBind this to add data items, or to do something right after the world is created" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnWorldLoaded_MetaData[] = {
		{ "ModuleRelativePath", "Public/VoxelWorld.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnWorldDestroyed_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Called right before destroying the world. Use this if you want to save data\n" },
#endif
		{ "ModuleRelativePath", "Public/VoxelWorld.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called right before destroying the world. Use this if you want to save data" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnMaxFoliageInstancesReached_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Called when max foliage instances is reached\n" },
#endif
		{ "ModuleRelativePath", "Public/VoxelWorld.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called when max foliage instances is reached" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldRoot_MetaData[] = {
		{ "Category", "Voxel" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/VoxelWorld.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LineBatchComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/VoxelWorld.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SaveObject_MetaData[] = {
		{ "Category", "Voxel - Save" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Automatically loaded on creation\n" },
#endif
		{ "ModuleRelativePath", "Public/VoxelWorld.h" },
		{ "Recreate", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Automatically loaded on creation" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SaveFilePath_MetaData[] = {
		{ "Category", "Voxel - Save" },
		{ "ModuleRelativePath", "Public/VoxelWorld.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAutomaticallySaveToFile_MetaData[] = {
		{ "Category", "Voxel - Save" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// If true, will save the world to SaveFilePath each time it's saved to the save object\n" },
#endif
		{ "ModuleRelativePath", "Public/VoxelWorld.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If true, will save the world to SaveFilePath each time it's saved to the save object" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAppendDateToSavePath_MetaData[] = {
		{ "Category", "Voxel - Save" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// If true, will add the current time & date to the filepath when saving\n" },
#endif
		{ "ModuleRelativePath", "Public/VoxelWorld.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If true, will add the current time & date to the filepath when saving" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRecomputeNormalsBeforeBaking_MetaData[] = {
		{ "Category", "Voxel - Bake" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//////////////////////////////////////////////////////////////////////////////\n" },
#endif
		{ "ModuleRelativePath", "Public/VoxelWorld.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BakedMeshTemplate_MetaData[] = {
		{ "Category", "Voxel - Bake" },
		{ "ModuleRelativePath", "Public/VoxelWorld.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BakedMeshComponentTemplate_MetaData[] = {
		{ "Category", "Voxel - Bake" },
		{ "ModuleRelativePath", "Public/VoxelWorld.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BakedDataPath_MetaData[] = {
		{ "Category", "Voxel - Bake" },
		{ "ModuleRelativePath", "Public/VoxelWorld.h" },
		{ "RelativeToGameContentDir", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumberOfThreadsForPreview_MetaData[] = {
		{ "Category", "Voxel - Preview" },
		{ "ClampMin", "1" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//////////////////////////////////////////////////////////////////////////////\n" },
#endif
		{ "ModuleRelativePath", "Public/VoxelWorld.h" },
		{ "Recreate", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableFoliageInEditor_MetaData[] = {
		{ "Category", "Voxel - Preview" },
		{ "ModuleRelativePath", "Public/VoxelWorld.h" },
		{ "Recreate", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAutomaticallyRefreshMaterials_MetaData[] = {
		{ "Category", "Voxel - Preview" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Turns this off if there's a significant lag when changing material properties\n" },
#endif
		{ "ModuleRelativePath", "Public/VoxelWorld.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Turns this off if there's a significant lag when changing material properties" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAutomaticallyRefreshFoliage_MetaData[] = {
		{ "Category", "Voxel - Preview" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Turns this off if there's a significant lag when changing foliage properties\n" },
#endif
		{ "ModuleRelativePath", "Public/VoxelWorld.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Turns this off if there's a significant lag when changing foliage properties" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EditorOnly_NewScale_MetaData[] = {
		{ "Category", "Voxel - Preview" },
		{ "DisplayName", "New Scale" },
		{ "ModuleRelativePath", "Public/VoxelWorld.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VoxelSize_MetaData[] = {
		{ "Category", "Voxel - General" },
		{ "ClampMin", "0.000100" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Size of a voxel in cm\n" },
#endif
		{ "ModuleRelativePath", "Public/VoxelWorld.h" },
		{ "Recreate", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Size of a voxel in cm" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Generator_MetaData[] = {
		{ "Category", "Voxel - General" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Generator of this world\n" },
#endif
		{ "ModuleRelativePath", "Public/VoxelWorld.h" },
		{ "Recreate", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Generator of this world" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlaceableItemManager_MetaData[] = {
		{ "Category", "Voxel - General" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Will be automatically created if not set\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/VoxelWorld.h" },
		{ "Recreate", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Will be automatically created if not set" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Seeds_MetaData[] = {
		{ "Category", "Voxel - General" },
		{ "DisplayName", "Seeds (DEPRECATED)" },
		{ "ModuleRelativePath", "Public/VoxelWorld.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCreateWorldAutomatically_MetaData[] = {
		{ "Category", "Voxel - General" },
		{ "ModuleRelativePath", "Public/VoxelWorld.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseCameraIfNoInvokersFound_MetaData[] = {
		{ "Category", "Voxel - General" },
		{ "DisplayName", "Use camera if no invokers found" },
		{ "ModuleRelativePath", "Public/VoxelWorld.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableUndoRedo_MetaData[] = {
		{ "Category", "Voxel - General" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Keep all the changes in memory to enable undo/redo. Can be expensive\n" },
#endif
		{ "ModuleRelativePath", "Public/VoxelWorld.h" },
		{ "Recreate", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Keep all the changes in memory to enable undo/redo. Can be expensive" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableCustomWorldRebasing_MetaData[] = {
		{ "Category", "Voxel - General" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// If true, the voxel world will try to stay near its original coordinates when rebasing, and will offset the voxel coordinates instead\n" },
#endif
		{ "ModuleRelativePath", "Public/VoxelWorld.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If true, the voxel world will try to stay near its original coordinates when rebasing, and will offset the voxel coordinates instead" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bMergeAssetActors_MetaData[] = {
		{ "Category", "Voxel - General" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// If true, will merge asset actors in the scene on create.\n" },
#endif
		{ "ModuleRelativePath", "Public/VoxelWorld.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If true, will merge asset actors in the scene on create." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bMergeDisableEditsBoxes_MetaData[] = {
		{ "Category", "Voxel - General" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// If true, will merge disable edits boxes in the scene on create.\n" },
#endif
		{ "ModuleRelativePath", "Public/VoxelWorld.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If true, will merge disable edits boxes in the scene on create." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDisableOnScreenMessages_MetaData[] = {
		{ "Category", "Voxel - General" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Will hide voxel messages\n" },
#endif
		{ "ModuleRelativePath", "Public/VoxelWorld.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Will hide voxel messages" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDisableDebugManager_MetaData[] = {
		{ "Category", "Voxel - General" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Will disable all debug features\n" },
#endif
		{ "ModuleRelativePath", "Public/VoxelWorld.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Will disable all debug features" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RenderOctreeDepth_MetaData[] = {
		{ "Category", "Voxel - World Size" },
		{ "ClampMax", "26" },
		{ "ClampMin", "1" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// WorldSizeInVoxel = RENDER_CHUNK_SIZE * 2^DataOctreeDepth.\n" },
#endif
		{ "ModuleRelativePath", "Public/VoxelWorld.h" },
		{ "Recreate", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "WorldSizeInVoxel = RENDER_CHUNK_SIZE * 2^DataOctreeDepth." },
#endif
		{ "UIMax", "26" },
		{ "UIMin", "1" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldSizeInVoxel_MetaData[] = {
		{ "Category", "Voxel - World Size" },
		{ "ClampMin", "1" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Size of an edge of the world\n" },
#endif
		{ "DisplayName", "World Size (in voxel)" },
		{ "ModuleRelativePath", "Public/VoxelWorld.h" },
		{ "Recreate", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Size of an edge of the world" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseCustomWorldBounds_MetaData[] = {
		{ "Category", "Voxel - World Size" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/VoxelWorld.h" },
		{ "Recreate", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomWorldBounds_MetaData[] = {
		{ "Category", "Voxel - World Size" },
		{ "EditCondition", "bUseCustomWorldBounds" },
		{ "ModuleRelativePath", "Public/VoxelWorld.h" },
		{ "Recreate", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxLOD_MetaData[] = {
		{ "Category", "Voxel - LOD Settings" },
		{ "ClampMax", "25" },
		{ "ClampMin", "0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Chunks can't have a LOD strictly higher than this. Useful is background has a too low resolution.\n" },
#endif
		{ "ModuleRelativePath", "Public/VoxelWorld.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Chunks can't have a LOD strictly higher than this. Useful is background has a too low resolution." },
#endif
		{ "UIMax", "25" },
		{ "UIMin", "0" },
		{ "UpdateLODs", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinLOD_MetaData[] = {
		{ "Category", "Voxel - LOD Settings" },
		{ "ClampMax", "25" },
		{ "ClampMin", "0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Chunks can't have a LOD strictly lower than this. Useful when in space for instance, combined with a manual BP call to ApplyLODSettings\n" },
#endif
		{ "ModuleRelativePath", "Public/VoxelWorld.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Chunks can't have a LOD strictly lower than this. Useful when in space for instance, combined with a manual BP call to ApplyLODSettings" },
#endif
		{ "UIMax", "25" },
		{ "UIMin", "0" },
		{ "UpdateLODs", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InvokerDistanceThreshold_MetaData[] = {
		{ "Category", "Voxel - LOD Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// In world space. If invokers move by less than this distance LODs won't be updated\n" },
#endif
		{ "ModuleRelativePath", "Public/VoxelWorld.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "In world space. If invokers move by less than this distance LODs won't be updated" },
#endif
		{ "UpdateLODs", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinDelayBetweenLODUpdates_MetaData[] = {
		{ "Category", "Voxel - LOD Settings" },
		{ "ClampMin", "0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Min delay between two LOD updates, in seconds\n" },
#endif
		{ "DisplayName", "Min Delay Between LOD Updates" },
		{ "ModuleRelativePath", "Public/VoxelWorld.h" },
		{ "RecreateRender", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Min delay between two LOD updates, in seconds" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bConstantLOD_MetaData[] = {
		{ "Category", "Voxel - LOD Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// If true, the LODs will be updated only once at start\n// LODs can still be updated using ForceLODsUpdate or ApplyLODSettings\n// For example, can be useful when used with a Max LOD of 0 for worlds that have the highest resolution LOD everywhere\n" },
#endif
		{ "ModuleRelativePath", "Public/VoxelWorld.h" },
		{ "RecreateRender", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If true, the LODs will be updated only once at start\nLODs can still be updated using ForceLODsUpdate or ApplyLODSettings\nFor example, can be useful when used with a Max LOD of 0 for worlds that have the highest resolution LOD everywhere" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaterialConfig_MetaData[] = {
		{ "Category", "Voxel - Materials" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* also used by generator */" },
#endif
		{ "ModuleRelativePath", "Public/VoxelWorld.h" },
		{ "Recreate", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "also used by generator" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VoxelMaterial_MetaData[] = {
		{ "Category", "Voxel - Materials" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Only used if Material Config = RGB\n" },
#endif
		{ "ModuleRelativePath", "Public/VoxelWorld.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Only used if Material Config = RGB" },
#endif
		{ "UpdateRenderer", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaterialCollection_MetaData[] = {
		{ "Category", "Voxel - Materials" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The material collection to use in Single Index or Double Index material config\n" },
#endif
		{ "ModuleRelativePath", "Public/VoxelWorld.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The material collection to use in Single Index or Double Index material config" },
#endif
		{ "UpdateRenderer", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LODMaterials_MetaData[] = {
		{ "Category", "Voxel - Materials|LOD" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Per LOD material overrides\n" },
#endif
		{ "DisplayName", "LOD Materials" },
		{ "ModuleRelativePath", "Public/VoxelWorld.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Per LOD material overrides" },
#endif
		{ "UpdateRenderer", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LODMaterialCollections_MetaData[] = {
		{ "Category", "Voxel - Materials|LOD" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Per LOD material collections overrides\n" },
#endif
		{ "DisplayName", "LOD Material Collections" },
		{ "ModuleRelativePath", "Public/VoxelWorld.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Per LOD material collections overrides" },
#endif
		{ "UpdateRenderer", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UVConfig_MetaData[] = {
		{ "Category", "Voxel - Materials|UVs" },
		{ "DisplayName", "UV Config" },
		{ "ModuleRelativePath", "Public/VoxelWorld.h" },
		{ "RecreateRender", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UVScale_MetaData[] = {
		{ "Category", "Voxel - Materials|UVs" },
		{ "DisplayName", "UV Scale" },
		{ "ModuleRelativePath", "Public/VoxelWorld.h" },
		{ "RecreateRender", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NormalConfig_MetaData[] = {
		{ "Category", "Voxel - Materials|Normals" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Normal config, only respected by Marching Cubes\n" },
#endif
		{ "ModuleRelativePath", "Public/VoxelWorld.h" },
		{ "RecreateRender", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Normal config, only respected by Marching Cubes" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RGBHardness_MetaData[] = {
		{ "Category", "Voxel - Materials|Hardness" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Hardness settings for RGB\n" },
#endif
		{ "DisplayName", "RGB Hardness" },
		{ "ModuleRelativePath", "Public/VoxelWorld.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Hardness settings for RGB" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaterialsHardness_MetaData[] = {
		{ "Category", "Voxel - Materials|Hardness" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Material Index -> Hardness, for Single/Multi index, or RGB if Four/Five Way Blend\n" },
#endif
		{ "ModuleRelativePath", "Public/VoxelWorld.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Material Index -> Hardness, for Single/Multi index, or RGB if Four/Five Way Blend" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHardColorTransitions_MetaData[] = {
		{ "Category", "Voxel - Materials" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// If true, then in RGB mode additional vertices will be created to ensure that no colors are ever blended\n" },
#endif
		{ "ModuleRelativePath", "Public/VoxelWorld.h" },
		{ "RecreateRender", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If true, then in RGB mode additional vertices will be created to ensure that no colors are ever blended" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOneMaterialPerCubeSide_MetaData[] = {
		{ "Category", "Voxel - Materials" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Only for Cubic mode. If true, the material index will be 3 x Index + 0 for top, 3 x Index + 1 for sides and 3 x Index + 2 for bottom\n" },
#endif
		{ "ModuleRelativePath", "Public/VoxelWorld.h" },
		{ "RecreateRender", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Only for Cubic mode. If true, the material index will be 3 x Index + 0 for top, 3 x Index + 1 for sides and 3 x Index + 2 for bottom" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HolesMaterials_MetaData[] = {
		{ "Category", "Voxel - Materials" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// These materials won't be rendered nor have any collision\n" },
#endif
		{ "ModuleRelativePath", "Public/VoxelWorld.h" },
		{ "RecreateRender", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "These materials won't be rendered nor have any collision" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaterialsMeshConfigs_MetaData[] = {
		{ "Category", "Voxel - Materials" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Apply custom mesh settings per material index\n// Will create more mesh components!\n" },
#endif
		{ "ModuleRelativePath", "Public/VoxelWorld.h" },
		{ "RecreateRender", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Apply custom mesh settings per material index\nWill create more mesh components!" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHalfPrecisionCoordinates_MetaData[] = {
		{ "Category", "Voxel - Materials" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Use 16 bits float instead of 32 bits. Halves the UVs memory usage, but lower precision\n" },
#endif
		{ "ModuleRelativePath", "Public/VoxelWorld.h" },
		{ "RecreateRender", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Use 16 bits float instead of 32 bits. Halves the UVs memory usage, but lower precision" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bInterpolateColors_MetaData[] = {
		{ "Category", "Voxel - Materials" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// If true, will interpolate the adjacent voxels colors to find the exact vertex color\n// In SingleIndex, will interpolate DataA/B/C\n// In MultiIndex, will interpolate Blend and Wetness\n// Twice as expensive, as requires to make twice as many material queries!\n// Might not look as great if the material outside of the voxel surface isn't set to something nice\n// Only works with marching cubes for now\n" },
#endif
		{ "ModuleRelativePath", "Public/VoxelWorld.h" },
		{ "RecreateRender", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If true, will interpolate the adjacent voxels colors to find the exact vertex color\nIn SingleIndex, will interpolate DataA/B/C\nIn MultiIndex, will interpolate Blend and Wetness\nTwice as expensive, as requires to make twice as many material queries!\nMight not look as great if the material outside of the voxel surface isn't set to something nice\nOnly works with marching cubes for now" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bInterpolateUVs_MetaData[] = {
		{ "Category", "Voxel - Materials" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// If true, will interpolate the adjacent voxels uvs to find the exact vertex uvs\n// Twice as expensive, as requires to make twice as many material queries!\n// Only works with marching cubes for now\n" },
#endif
		{ "ModuleRelativePath", "Public/VoxelWorld.h" },
		{ "RecreateRender", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If true, will interpolate the adjacent voxels uvs to find the exact vertex uvs\nTwice as expensive, as requires to make twice as many material queries!\nOnly works with marching cubes for now" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSRGBColors_MetaData[] = {
		{ "Category", "Voxel - Materials" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// When ticked, will convert the color stored in the material (as a 4 bytes color) from sRGB to Linear\n// However, since the target will still be 4 bytes, the conversion won't be perfect\n// This is a limitation of vertex colors sadly\n// NOTE: It is recommended to leave this off, and to tick bLinearColor when painting colors instead\n// That way color operations are done in linear space, which is recommended\n// NOTE: DO NOT enable in Multi Index, it will just mess up the blend parameters\n" },
#endif
		{ "DisplayName", "sRGB Colors" },
		{ "ModuleRelativePath", "Public/VoxelWorld.h" },
		{ "RecreateRender", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "When ticked, will convert the color stored in the material (as a 4 bytes color) from sRGB to Linear\nHowever, since the target will still be 4 bytes, the conversion won't be perfect\nThis is a limitation of vertex colors sadly\nNOTE: It is recommended to leave this off, and to tick bLinearColor when painting colors instead\nThat way color operations are done in linear space, which is recommended\nNOTE: DO NOT enable in Multi Index, it will just mess up the blend parameters" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RenderType_MetaData[] = {
		{ "Category", "Voxel - Rendering" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//////////////////////////////////////////////////////////////////////////////\n" },
#endif
		{ "ModuleRelativePath", "Public/VoxelWorld.h" },
		{ "RecreateRender", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RenderSharpness_MetaData[] = {
		{ "Category", "Voxel - Rendering" },
		{ "ClampMin", "0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// For marching cubes only\n// If 0, will do nothing\n// If above zero, will round the vertices positions to the nearest multiple of (1 / RenderSharpness)\n// Visually, it will give a more \"sharp\" look, 1 being the sharpest, 2 3 etc being less and less sharp\n" },
#endif
		{ "ModuleRelativePath", "Public/VoxelWorld.h" },
		{ "RecreateRender", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "For marching cubes only\nIf 0, will do nothing\nIf above zero, will round the vertices positions to the nearest multiple of (1 / RenderSharpness)\nVisually, it will give a more \"sharp\" look, 1 being the sharpest, 2 3 etc being less and less sharp" },
#endif
		{ "UIMax", "10" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCreateMaterialInstances_MetaData[] = {
		{ "Category", "Voxel - Rendering" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// If true, a dynamic instance will be created for each chunk. Else, the material will be used directly\n// Disable this if you want to use dynamic material instances as voxel world materials\n" },
#endif
		{ "ModuleRelativePath", "Public/VoxelWorld.h" },
		{ "RecreateRender", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If true, a dynamic instance will be created for each chunk. Else, the material will be used directly\nDisable this if you want to use dynamic material instances as voxel world materials" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDitherChunks_MetaData[] = {
		{ "Category", "Voxel - Rendering" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Whether to dither chunks\n// Requires CreateMaterialInstances\n" },
#endif
		{ "EditCondition", "bCreateMaterialInstances" },
		{ "ModuleRelativePath", "Public/VoxelWorld.h" },
		{ "RecreateRender", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether to dither chunks\nRequires CreateMaterialInstances" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChunksDitheringDuration_MetaData[] = {
		{ "Category", "Voxel - Rendering" },
		{ "ClampMin", "0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Dithering duration when changing LODs\n" },
#endif
		{ "EditCondition", "bDitherChunks" },
		{ "ModuleRelativePath", "Public/VoxelWorld.h" },
		{ "RecreateRender", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Dithering duration when changing LODs" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProcMeshClass_MetaData[] = {
		{ "Category", "Voxel - Rendering" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Custom procedural mesh class to use\n// Use this to override specific rendering settings such as cast shadows, render custom depth...\n" },
#endif
		{ "ModuleRelativePath", "Public/VoxelWorld.h" },
		{ "RecreateRender", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Custom procedural mesh class to use\nUse this to override specific rendering settings such as cast shadows, render custom depth..." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChunksCullingLOD_MetaData[] = {
		{ "Category", "Voxel - Rendering" },
		{ "ClampMax", "26" },
		{ "ClampMin", "0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Chunks with a LOD strictly higher than this won't be rendered\n" },
#endif
		{ "ModuleRelativePath", "Public/VoxelWorld.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Chunks with a LOD strictly higher than this won't be rendered" },
#endif
		{ "UIMax", "26" },
		{ "UIMin", "0" },
		{ "UpdateLODs", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRenderWorld_MetaData[] = {
		{ "Category", "Voxel - Rendering" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Whether to render the world, or to just use it for collisions/navmesh\n" },
#endif
		{ "ModuleRelativePath", "Public/VoxelWorld.h" },
		{ "Recreate", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether to render the world, or to just use it for collisions/navmesh" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bStaticWorld_MetaData[] = {
		{ "Category", "Voxel - Rendering" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Will destroy any intermediate render data to free up memory\n// Does not support any kind of updates\n// Note: if MergeChunks is true, chunk meshes memory won't be cleared as it can't know if a new mesh will be added to the cluster\n" },
#endif
		{ "ModuleRelativePath", "Public/VoxelWorld.h" },
		{ "RecreateRender", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Will destroy any intermediate render data to free up memory\nDoes not support any kind of updates\nNote: if MergeChunks is true, chunk meshes memory won't be cleared as it can't know if a new mesh will be added to the cluster" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOptimizeIndices_MetaData[] = {
		{ "Category", "Voxel - Rendering" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// If true, the mesh indices will be sorted to improve GPU cache performance. Adds a cost to the async mesh building. If you don't see any perf difference, leave it off\n" },
#endif
		{ "ModuleRelativePath", "Public/VoxelWorld.h" },
		{ "RecreateRender", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If true, the mesh indices will be sorted to improve GPU cache performance. Adds a cost to the async mesh building. If you don't see any perf difference, leave it off" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bGenerateDistanceFields_MetaData[] = {
		{ "Category", "Voxel - Rendering" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Will generate distance fields on LOD 0 chunks\n// Has a cost of around 1 ms per chunk (on async thread)\n// Doesn't work with chunks merging or single/double index material config with different materials per chunk\n// Requires UE 4.23+\n" },
#endif
		{ "ModuleRelativePath", "Public/VoxelWorld.h" },
		{ "RecreateRender", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Will generate distance fields on LOD 0 chunks\nHas a cost of around 1 ms per chunk (on async thread)\nDoesn't work with chunks merging or single/double index material config with different materials per chunk\nRequires UE 4.23+" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxDistanceFieldLOD_MetaData[] = {
		{ "Category", "Voxel - Rendering" },
		{ "ClampMax", "26" },
		{ "ClampMin", "0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Chunks with LOD <= this will have distance fields\n// Be careful when increasing because of the memory usage caused by distance fields\n" },
#endif
		{ "EditCondition", "bGenerateDistanceFields" },
		{ "ModuleRelativePath", "Public/VoxelWorld.h" },
		{ "RecreateRender", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Chunks with LOD <= this will have distance fields\nBe careful when increasing because of the memory usage caused by distance fields" },
#endif
		{ "UIMax", "26" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DistanceFieldBoundsExtension_MetaData[] = {
		{ "Category", "Voxel - Rendering" },
		{ "ClampMax", "32" },
		{ "ClampMin", "0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// By how many voxels to extend the chunks distance fields (on every side)\n// This is needed so that distance fields nicely overlap\n" },
#endif
		{ "EditCondition", "bGenerateDistanceFields" },
		{ "ModuleRelativePath", "Public/VoxelWorld.h" },
		{ "RecreateRender", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "By how many voxels to extend the chunks distance fields (on every side)\nThis is needed so that distance fields nicely overlap" },
#endif
		{ "UIMax", "8" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DistanceFieldResolutionDivisor_MetaData[] = {
		{ "Category", "Voxel - Rendering" },
		{ "ClampMax", "32" },
		{ "ClampMin", "1" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// By how much to divide the distance field resolution\n// By default it'll be 32x32x32: if the divisor is 2, it'll be 16x16x16, if 4 8x8x8...\n// Increasing this decreases quality of the distance field, but saves huge amount of VRAM\n// NOTE: increasing this can lead to messy distance fields as some signs are messy\n" },
#endif
		{ "EditCondition", "bGenerateDistanceFields" },
		{ "ModuleRelativePath", "Public/VoxelWorld.h" },
		{ "RecreateRender", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "By how much to divide the distance field resolution\nBy default it'll be 32x32x32: if the divisor is 2, it'll be 16x16x16, if 4 8x8x8...\nIncreasing this decreases quality of the distance field, but saves huge amount of VRAM\nNOTE: increasing this can lead to messy distance fields as some signs are messy" },
#endif
		{ "UIMax", "8" },
		{ "UIMin", "1" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DistanceFieldSelfShadowBias_MetaData[] = {
		{ "Category", "Voxel - Rendering" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Useful for reducing self shadowing from distance field methods when using world position offset to animate the mesh's vertices. */" },
#endif
		{ "EditCondition", "bGenerateDistanceFields" },
		{ "ModuleRelativePath", "Public/VoxelWorld.h" },
		{ "RecreateRender", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Useful for reducing self shadowing from distance field methods when using world position offset to animate the mesh's vertices." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableTransitions_MetaData[] = {
		{ "Category", "Voxel - Rendering" },
		{ "ModuleRelativePath", "Public/VoxelWorld.h" },
		{ "RecreateRender", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bMergeChunks_MetaData[] = {
		{ "Category", "Voxel - Rendering" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Will merge chunks together to reduce draw calls.\n// Only merges chunks of the same LOD!\n// Enabling this disables CreateMaterialInstances and DitherChunks.\n// When turning this on, it is recommended to reduce the priority of the Mesh Merge category (eg set it to 0)\n// Else mesh merge are done before meshing tasks, even if these meshing tasks would have made the merge invalid\n" },
#endif
		{ "ModuleRelativePath", "Public/VoxelWorld.h" },
		{ "RecreateRender", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Will merge chunks together to reduce draw calls.\nOnly merges chunks of the same LOD!\nEnabling this disables CreateMaterialInstances and DitherChunks.\nWhen turning this on, it is recommended to reduce the priority of the Mesh Merge category (eg set it to 0)\nElse mesh merge are done before meshing tasks, even if these meshing tasks would have made the merge invalid" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChunksClustersSize_MetaData[] = {
		{ "Category", "Voxel - Rendering" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Size in voxels of the clusters. Scales with LOD (eg if 64, for LOD 3 it will be 64 * 2 * 2 * 2 = 512)\n" },
#endif
		{ "EditCondition", "bMergeChunks" },
		{ "ModuleRelativePath", "Public/VoxelWorld.h" },
		{ "RecreateRender", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Size in voxels of the clusters. Scales with LOD (eg if 64, for LOD 3 it will be 64 * 2 * 2 * 2 = 512)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDoNotMergeCollisionsAndNavmesh_MetaData[] = {
		{ "Category", "Voxel - Rendering" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// If true, additional meshes with the normal chunk size will be spawned only for collisions & navmesh\n// Recommended, as cooking collision for merged chunks takes forever\n" },
#endif
		{ "EditCondition", "bMergeChunks" },
		{ "ModuleRelativePath", "Public/VoxelWorld.h" },
		{ "RecreateRender", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If true, additional meshes with the normal chunk size will be spawned only for collisions & navmesh\nRecommended, as cooking collision for merged chunks takes forever" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoundsExtension_MetaData[] = {
		{ "Category", "Voxel - Rendering" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Increases the chunks bounding boxes, useful when using tessellation\n// Setting it to 0 can cause issues on flat worlds\n" },
#endif
		{ "ModuleRelativePath", "Public/VoxelWorld.h" },
		{ "RecreateRender", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Increases the chunks bounding boxes, useful when using tessellation\nSetting it to 0 can cause issues on flat worlds" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PrimitiveSettings_MetaData[] = {
		{ "Category", "Voxel - Rendering" },
		{ "ModuleRelativePath", "Public/VoxelWorld.h" },
		{ "RecreateRender", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnerConfig_MetaData[] = {
		{ "Category", "Voxel - Spawners" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//////////////////////////////////////////////////////////////////////////////\n" },
#endif
		{ "ModuleRelativePath", "Public/VoxelWorld.h" },
		{ "RecreateSpawners", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HISMChunkSize_MetaData[] = {
		{ "Category", "Voxel - Spawners" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The chunk size, in voxels, of a single HISM component\n// Lower = higher draw calls/object count\n// Higher = more delay when building the occlusion tree\n" },
#endif
		{ "DisplayName", "HISM Chunk Size" },
		{ "ModuleRelativePath", "Public/VoxelWorld.h" },
		{ "RecreateSpawners", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The chunk size, in voxels, of a single HISM component\nLower = higher draw calls/object count\nHigher = more delay when building the occlusion tree" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnersCollisionDistanceInVoxel_MetaData[] = {
		{ "Category", "Voxel - Spawners" },
		{ "ClampMin", "0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Only nearby instances have collisions\n// Configure the distance using this\n// In voxels!\n" },
#endif
		{ "ModuleRelativePath", "Public/VoxelWorld.h" },
		{ "RecreateSpawners", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Only nearby instances have collisions\nConfigure the distance using this\nIn voxels!" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxNumberOfFoliageInstances_MetaData[] = {
		{ "Category", "Voxel - Spawners" },
		{ "ClampMin", "0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// If more instances than this are spawned, they will not be displayed\n" },
#endif
		{ "ModuleRelativePath", "Public/VoxelWorld.h" },
		{ "RecreateSpawners", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If more instances than this are spawned, they will not be displayed" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableCollisions_MetaData[] = {
		{ "Category", "Voxel - Collisions" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//////////////////////////////////////////////////////////////////////////////\n" },
#endif
		{ "ModuleRelativePath", "Public/VoxelWorld.h" },
		{ "RecreateRender", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollisionPresets_MetaData[] = {
		{ "Category", "Voxel - Collisions" },
		{ "EditCondition", "bEnableCollisions" },
		{ "ModuleRelativePath", "Public/VoxelWorld.h" },
		{ "Recreate", "" },
		{ "ShowOnlyInnerProperties", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollisionTraceFlag_MetaData[] = {
		{ "Category", "Voxel - Collisions" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Whether to compute simple collision meshes or not\n// Change this only if you want to use the voxel world as a rigidbody\n// Simple collision won't match the geometry exactly\n// Using simple collision is not less expensive than using complex collisions, as the convex hulls are far from optimized\n" },
#endif
		{ "EditCondition", "bEnableCollisions" },
		{ "ModuleRelativePath", "Public/VoxelWorld.h" },
		{ "Recreate", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether to compute simple collision meshes or not\nChange this only if you want to use the voxel world as a rigidbody\nSimple collision won't match the geometry exactly\nUsing simple collision is not less expensive than using complex collisions, as the convex hulls are far from optimized" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CanCharacterStepUpOn_MetaData[] = {
		{ "Category", "Voxel - Collisions" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Determine whether a Character can step up onto this component.\n\x09 * This controls whether they can try to step up on it when they bump in to it, not whether they can walk on it after landing on it.\n\x09 * @see FWalkableSlopeOverride\n\x09 */" },
#endif
		{ "EditCondition", "bEnableCollisions" },
		{ "ModuleRelativePath", "Public/VoxelWorld.h" },
		{ "Recreate", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Determine whether a Character can step up onto this component.\nThis controls whether they can try to step up on it when they bump in to it, not whether they can walk on it after landing on it.\n@see FWalkableSlopeOverride" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bNotifyRigidBodyCollision_MetaData[] = {
		{ "Category", "Voxel - Collisions|Events" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\x09Should 'Hit' events fire when this object collides during physics simulation. */" },
#endif
		{ "DisplayName", "Simulation Generates Hit Events" },
		{ "EditCondition", "bEnableCollisions" },
		{ "ModuleRelativePath", "Public/VoxelWorld.h" },
		{ "Recreate", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Should 'Hit' events fire when this object collides during physics simulation." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bGenerateOverlapEvents_MetaData[] = {
		{ "Category", "Voxel - Collisions|Events" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * If true, this component will generate overlap events when it is overlapping other components (eg Begin Overlap).\n\x09 * Both components (this and the other) must have this enabled for overlap events to occur.\n\x09 *\n\x09 * @see [Overlap Events](https://docs.unrealengine.com/latest/INT/Engine/Physics/Collision/index.html#overlapandgenerateoverlapevents)\n\x09 * @see UpdateOverlaps(), BeginComponentOverlap(), EndComponentOverlap()\n\x09 */" },
#endif
		{ "EditCondition", "bEnableCollisions" },
		{ "ModuleRelativePath", "Public/VoxelWorld.h" },
		{ "Recreate", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If true, this component will generate overlap events when it is overlapping other components (eg Begin Overlap).\nBoth components (this and the other) must have this enabled for overlap events to occur.\n\n@see [Overlap Events](https://docs.unrealengine.com/latest/INT/Engine/Physics/Collision/index.html#overlapandgenerateoverlapevents)\n@see UpdateOverlaps(), BeginComponentOverlap(), EndComponentOverlap()" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bComputeVisibleChunksCollisions_MetaData[] = {
		{ "Category", "Voxel - Collisions|Visible Chunks" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// If false, use only invokers collisions settings\n" },
#endif
		{ "EditCondition", "bEnableCollisions" },
		{ "ModuleRelativePath", "Public/VoxelWorld.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If false, use only invokers collisions settings" },
#endif
		{ "UpdateLODs", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VisibleChunksCollisionsMaxLOD_MetaData[] = {
		{ "Category", "Voxel - Collisions|Visible Chunks" },
		{ "ClampMax", "26" },
		{ "ClampMin", "0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Max LOD to compute collisions on. Inclusive. If not 0 collisions won't be precise. Does not affect invokers\n" },
#endif
		{ "EditCondition", "bComputeVisibleChunksCollisions && bEnableCollisions" },
		{ "ModuleRelativePath", "Public/VoxelWorld.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Max LOD to compute collisions on. Inclusive. If not 0 collisions won't be precise. Does not affect invokers" },
#endif
		{ "UIMax", "26" },
		{ "UIMin", "0" },
		{ "UpdateLODs", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PhysMaterialOverride_MetaData[] = {
		{ "Category", "Voxel - Collisions" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\x09""Allows you to override the PhysicalMaterial to use for simple collision on this body. */" },
#endif
		{ "EditCondition", "bEnableCollisions" },
		{ "ModuleRelativePath", "Public/VoxelWorld.h" },
		{ "Recreate", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Allows you to override the PhysicalMaterial to use for simple collision on this body." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseCCD_MetaData[] = {
		{ "Category", "Voxel - Collisions" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** If true Continuous Collision Detection (CCD) will be used for this component */" },
#endif
		{ "EditCondition", "bEnableCollisions" },
		{ "ModuleRelativePath", "Public/VoxelWorld.h" },
		{ "Recreate", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If true Continuous Collision Detection (CCD) will be used for this component" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumConvexHullsPerAxis_MetaData[] = {
		{ "Category", "Voxel - Collisions" },
		{ "ClampMax", "32" },
		{ "ClampMin", "1" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Number of convex hulls to create per chunk per axis for simple collisions\n// More hulls = more precise collisions, but much more expensive physics\n// You can check the result in the Player Collision view\n" },
#endif
		{ "EditCondition", "bEnableCollisions" },
		{ "ModuleRelativePath", "Public/VoxelWorld.h" },
		{ "RecreateRender", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Number of convex hulls to create per chunk per axis for simple collisions\nMore hulls = more precise collisions, but much more expensive physics\nYou can check the result in the Player Collision view" },
#endif
		{ "UIMax", "32" },
		{ "UIMin", "1" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCleanCollisionMeshes_MetaData[] = {
		{ "Category", "Voxel - Collisions" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Clean collisions meshes when cooking them.\n// Disabling this makes cooking collision slightly faster, but might lead to physx crashing in case of invalid geometry.\n// Enable this if you are getting crashes in the physx code\n// To check the performance improvements: voxel.LogCollisionCookingTimes 1\n" },
#endif
		{ "EditCondition", "bEnableCollisions" },
		{ "ModuleRelativePath", "Public/VoxelWorld.h" },
		{ "RecreateRender", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Clean collisions meshes when cooking them.\nDisabling this makes cooking collision slightly faster, but might lead to physx crashing in case of invalid geometry.\nEnable this if you are getting crashes in the physx code\nTo check the performance improvements: voxel.LogCollisionCookingTimes 1" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableNavmesh_MetaData[] = {
		{ "Category", "Voxel - Navmesh" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//////////////////////////////////////////////////////////////////////////////\n" },
#endif
		{ "ModuleRelativePath", "Public/VoxelWorld.h" },
		{ "RecreateRender", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bComputeVisibleChunksNavmesh_MetaData[] = {
		{ "Category", "Voxel - Navmesh" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// If false, use only invokers navmesh settings\n" },
#endif
		{ "EditCondition", "bEnableNavmesh" },
		{ "ModuleRelativePath", "Public/VoxelWorld.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If false, use only invokers navmesh settings" },
#endif
		{ "UpdateLODs", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VisibleChunksNavmeshMaxLOD_MetaData[] = {
		{ "Category", "Voxel - Navmesh" },
		{ "ClampMax", "26" },
		{ "ClampMin", "0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Max LOD to compute navmesh on. Inclusive. Does not affect invokers\n" },
#endif
		{ "EditCondition", "bEnableNavmesh && bComputeVisibleChunksNavmesh" },
		{ "ModuleRelativePath", "Public/VoxelWorld.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Max LOD to compute navmesh on. Inclusive. Does not affect invokers" },
#endif
		{ "UIMax", "26" },
		{ "UIMin", "0" },
		{ "UpdateLODs", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCreateGlobalPool_MetaData[] = {
		{ "Category", "Voxel - Performance" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// If you have more than one voxel world, set this to false and call CreateGlobalVoxelThreadPool at BeginPlay (for instance in your level blueprint)\n" },
#endif
		{ "ModuleRelativePath", "Public/VoxelWorld.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If you have more than one voxel world, set this to false and call CreateGlobalVoxelThreadPool at BeginPlay (for instance in your level blueprint)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumberOfThreads_MetaData[] = {
		{ "Category", "Voxel - Performance" },
		{ "ClampMin", "1" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Number of threads allocated for the voxel background processing. Setting it too high may impact performance\n" },
#endif
		{ "EditCondition", "bCreateGlobalPool" },
		{ "ModuleRelativePath", "Public/VoxelWorld.h" },
		{ "Recreate", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Number of threads allocated for the voxel background processing. Setting it too high may impact performance" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PriorityCategories_MetaData[] = {
		{ "Category", "Voxel - Performance" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Async tasks are sorted based on 2 values:\n// - first, their priority category\n// - then, their own priority (most of the time their distance from voxel invokers)\n// Using priority categories, you can determine which tasks to compute first\n// Setting 2 task type to the same category will allow to sort them only based on their distance from a voxel invoker\n// eg, for foliage and meshing tasks: meshes will spawn at the same time as the foliage on top of them\n// If you want to spawn the meshes slightly before foliage, you can offset the tasks own priorities using the PriorityOffsets below\n" },
#endif
		{ "EditCondition", "bCreateGlobalPool" },
		{ "ModuleRelativePath", "Public/VoxelWorld.h" },
		{ "Recreate", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Async tasks are sorted based on 2 values:\n- first, their priority category\n- then, their own priority (most of the time their distance from voxel invokers)\nUsing priority categories, you can determine which tasks to compute first\nSetting 2 task type to the same category will allow to sort them only based on their distance from a voxel invoker\neg, for foliage and meshing tasks: meshes will spawn at the same time as the foliage on top of them\nIf you want to spawn the meshes slightly before foliage, you can offset the tasks own priorities using the PriorityOffsets below" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PriorityOffsets_MetaData[] = {
		{ "Category", "Voxel - Performance" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Allows to offset tasks own priorities\n// Only useful for tasks that have the same priority category!\n// Most values are in voxel\n" },
#endif
		{ "EditCondition", "bCreateGlobalPool" },
		{ "ModuleRelativePath", "Public/VoxelWorld.h" },
		{ "Recreate", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Allows to offset tasks own priorities\nOnly useful for tasks that have the same priority category!\nMost values are in voxel" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bConstantPriorities_MetaData[] = {
		{ "Category", "Voxel - Performance" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// If true, won't recompute task priorities once they are queued\n// If false, will recompute task priorities with the new voxel invoker positions every PriorityDuration seconds\n// True: useful if you have many tasks\n// False: useful if you want precise task scheduling, eg if you are moving relatively fast\n" },
#endif
		{ "EditCondition", "bCreateGlobalPool" },
		{ "ModuleRelativePath", "Public/VoxelWorld.h" },
		{ "Recreate", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If true, won't recompute task priorities once they are queued\nIf false, will recompute task priorities with the new voxel invoker positions every PriorityDuration seconds\nTrue: useful if you have many tasks\nFalse: useful if you want precise task scheduling, eg if you are moving relatively fast" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PriorityDuration_MetaData[] = {
		{ "Category", "Voxel - Performance" },
		{ "ClampMin", "0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Only used if ConstantPriorities is false\n// Time, in seconds, during which a task priority is valid and does not need to be recomputed\n// Lowering this will increase async cost to recompute priorities, but will lead to more precise scheduling\n// Increasing this will decreasing async cost to recompute priorities, but might lead to imprecise scheduling if the invokers are moving fast\n" },
#endif
		{ "EditCondition", "!bConstantPriorities" },
		{ "ModuleRelativePath", "Public/VoxelWorld.h" },
		{ "RecreateRender", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Only used if ConstantPriorities is false\nTime, in seconds, during which a task priority is valid and does not need to be recomputed\nLowering this will increase async cost to recompute priorities, but will lead to more precise scheduling\nIncreasing this will decreasing async cost to recompute priorities, but might lead to imprecise scheduling if the invokers are moving fast" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeshUpdatesBudget_MetaData[] = {
		{ "Category", "Voxel - Performance" },
		{ "ClampMin", "0.001000" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Max time in milliseconds to spend on mesh updates per tick\n// If this is too low world will generate very slowly\n// If this is too high you will get lag spikes\n" },
#endif
		{ "ModuleRelativePath", "Public/VoxelWorld.h" },
		{ "RecreateRender", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Max time in milliseconds to spend on mesh updates per tick\nIf this is too low world will generate very slowly\nIf this is too high you will get lag spikes" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EventsTickRate_MetaData[] = {
		{ "Category", "Voxel - Performance" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The rate at which events are fired (number of updates per seconds). Used for foliage spawning, foliage collision, binded BP events...\n" },
#endif
		{ "ModuleRelativePath", "Public/VoxelWorld.h" },
		{ "RecreateRender", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The rate at which events are fired (number of updates per seconds). Used for foliage spawning, foliage collision, binded BP events..." },
#endif
		{ "UIMax", "60" },
		{ "UIMin", "1" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DataOctreeInitialSubdivisionDepth_MetaData[] = {
		{ "Category", "Voxel - Performance" },
		{ "ClampMin", "0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Depth to which to subdivide the data octree on start\n// Will create 8^X nodes, so keep low!\n// Useful to avoid update tasks locking the entire octree\n" },
#endif
		{ "ModuleRelativePath", "Public/VoxelWorld.h" },
		{ "Recreate", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Depth to which to subdivide the data octree on start\nWill create 8^X nodes, so keep low!\nUseful to avoid update tasks locking the entire octree" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableMultiplayer_MetaData[] = {
		{ "Category", "Voxel - Multiplayer" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Is this world synchronized using the plugin multiplayer system?\n" },
#endif
		{ "ModuleRelativePath", "Public/VoxelWorld.h" },
		{ "Recreate", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Is this world synchronized using the plugin multiplayer system?" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MultiplayerInterface_MetaData[] = {
		{ "Category", "Voxel - Multiplayer" },
		{ "EditCondition", "bMultiplayer" },
		{ "ModuleRelativePath", "Public/VoxelWorld.h" },
		{ "Recreate", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MultiplayerSyncRate_MetaData[] = {
		{ "Category", "Voxel - Multiplayer" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Number of sync per second\n" },
#endif
		{ "EditCondition", "bMultiplayer" },
		{ "ModuleRelativePath", "Public/VoxelWorld.h" },
		{ "Recreate", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Number of sync per second" },
#endif
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VoxelWorldEditor_MetaData[] = {
		{ "ModuleRelativePath", "Public/VoxelWorld.h" },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MultiplayerInterfaceInstance_MetaData[] = {
		{ "ModuleRelativePath", "Public/VoxelWorld.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GeneratorCache_MetaData[] = {
		{ "ModuleRelativePath", "Public/VoxelWorld.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlaceableItemActorHelper_MetaData[] = {
		{ "ModuleRelativePath", "Public/VoxelWorld.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsToggled_MetaData[] = {
		{ "ModuleRelativePath", "Public/VoxelWorld.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnGenerateWorld;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnWorldLoaded;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnWorldDestroyed;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnMaxFoliageInstancesReached;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldRoot;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LineBatchComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SaveObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SaveFilePath;
	static void NewProp_bAutomaticallySaveToFile_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutomaticallySaveToFile;
	static void NewProp_bAppendDateToSavePath_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAppendDateToSavePath;
	static void NewProp_bRecomputeNormalsBeforeBaking_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRecomputeNormalsBeforeBaking;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BakedMeshTemplate;
	static const UECodeGen_Private::FClassPropertyParams NewProp_BakedMeshComponentTemplate;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BakedDataPath;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumberOfThreadsForPreview;
	static void NewProp_bEnableFoliageInEditor_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableFoliageInEditor;
	static void NewProp_bAutomaticallyRefreshMaterials_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutomaticallyRefreshMaterials;
	static void NewProp_bAutomaticallyRefreshFoliage_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutomaticallyRefreshFoliage;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EditorOnly_NewScale;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_VoxelSize;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Generator;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlaceableItemManager;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Seeds_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Seeds_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_Seeds;
	static void NewProp_bCreateWorldAutomatically_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCreateWorldAutomatically;
	static void NewProp_bUseCameraIfNoInvokersFound_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseCameraIfNoInvokersFound;
	static void NewProp_bEnableUndoRedo_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableUndoRedo;
	static void NewProp_bEnableCustomWorldRebasing_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableCustomWorldRebasing;
	static void NewProp_bMergeAssetActors_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bMergeAssetActors;
	static void NewProp_bMergeDisableEditsBoxes_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bMergeDisableEditsBoxes;
	static void NewProp_bDisableOnScreenMessages_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDisableOnScreenMessages;
	static void NewProp_bDisableDebugManager_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDisableDebugManager;
	static const UECodeGen_Private::FIntPropertyParams NewProp_RenderOctreeDepth;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_WorldSizeInVoxel;
	static void NewProp_bUseCustomWorldBounds_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseCustomWorldBounds;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CustomWorldBounds;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxLOD;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MinLOD;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InvokerDistanceThreshold;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinDelayBetweenLODUpdates;
	static void NewProp_bConstantLOD_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bConstantLOD;
	static const UECodeGen_Private::FBytePropertyParams NewProp_MaterialConfig_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_MaterialConfig;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_VoxelMaterial;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MaterialCollection;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LODMaterials_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_LODMaterials;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LODMaterialCollections_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_LODMaterialCollections;
	static const UECodeGen_Private::FBytePropertyParams NewProp_UVConfig_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_UVConfig;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_UVScale;
	static const UECodeGen_Private::FBytePropertyParams NewProp_NormalConfig_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_NormalConfig;
	static const UECodeGen_Private::FBytePropertyParams NewProp_RGBHardness_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_RGBHardness;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaterialsHardness_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_MaterialsHardness_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_MaterialsHardness;
	static void NewProp_bHardColorTransitions_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHardColorTransitions;
	static void NewProp_bOneMaterialPerCubeSide_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOneMaterialPerCubeSide;
	static const UECodeGen_Private::FBytePropertyParams NewProp_HolesMaterials_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_HolesMaterials;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MaterialsMeshConfigs_ValueProp;
	static const UECodeGen_Private::FBytePropertyParams NewProp_MaterialsMeshConfigs_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_MaterialsMeshConfigs;
	static void NewProp_bHalfPrecisionCoordinates_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHalfPrecisionCoordinates;
	static void NewProp_bInterpolateColors_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInterpolateColors;
	static void NewProp_bInterpolateUVs_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInterpolateUVs;
	static void NewProp_bSRGBColors_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSRGBColors;
	static const UECodeGen_Private::FBytePropertyParams NewProp_RenderType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_RenderType;
	static const UECodeGen_Private::FIntPropertyParams NewProp_RenderSharpness;
	static void NewProp_bCreateMaterialInstances_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCreateMaterialInstances;
	static void NewProp_bDitherChunks_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDitherChunks;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ChunksDitheringDuration;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ProcMeshClass;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ChunksCullingLOD;
	static void NewProp_bRenderWorld_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRenderWorld;
	static void NewProp_bStaticWorld_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bStaticWorld;
	static void NewProp_bOptimizeIndices_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOptimizeIndices;
	static void NewProp_bGenerateDistanceFields_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bGenerateDistanceFields;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxDistanceFieldLOD;
	static const UECodeGen_Private::FIntPropertyParams NewProp_DistanceFieldBoundsExtension;
	static const UECodeGen_Private::FIntPropertyParams NewProp_DistanceFieldResolutionDivisor;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DistanceFieldSelfShadowBias;
	static void NewProp_bEnableTransitions_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableTransitions;
	static void NewProp_bMergeChunks_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bMergeChunks;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ChunksClustersSize;
	static void NewProp_bDoNotMergeCollisionsAndNavmesh_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDoNotMergeCollisionsAndNavmesh;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BoundsExtension;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PrimitiveSettings;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpawnerConfig;
	static const UECodeGen_Private::FIntPropertyParams NewProp_HISMChunkSize;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SpawnersCollisionDistanceInVoxel;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_MaxNumberOfFoliageInstances;
	static void NewProp_bEnableCollisions_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableCollisions;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CollisionPresets;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CollisionTraceFlag;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CanCharacterStepUpOn;
	static void NewProp_bNotifyRigidBodyCollision_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bNotifyRigidBodyCollision;
	static void NewProp_bGenerateOverlapEvents_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bGenerateOverlapEvents;
	static void NewProp_bComputeVisibleChunksCollisions_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bComputeVisibleChunksCollisions;
	static const UECodeGen_Private::FIntPropertyParams NewProp_VisibleChunksCollisionsMaxLOD;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PhysMaterialOverride;
	static void NewProp_bUseCCD_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseCCD;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumConvexHullsPerAxis;
	static void NewProp_bCleanCollisionMeshes_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCleanCollisionMeshes;
	static void NewProp_bEnableNavmesh_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableNavmesh;
	static void NewProp_bComputeVisibleChunksNavmesh_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bComputeVisibleChunksNavmesh;
	static const UECodeGen_Private::FIntPropertyParams NewProp_VisibleChunksNavmeshMaxLOD;
	static void NewProp_bCreateGlobalPool_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCreateGlobalPool;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumberOfThreads;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PriorityCategories_ValueProp;
	static const UECodeGen_Private::FBytePropertyParams NewProp_PriorityCategories_Key_KeyProp_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_PriorityCategories_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_PriorityCategories;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PriorityOffsets_ValueProp;
	static const UECodeGen_Private::FBytePropertyParams NewProp_PriorityOffsets_Key_KeyProp_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_PriorityOffsets_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_PriorityOffsets;
	static void NewProp_bConstantPriorities_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bConstantPriorities;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PriorityDuration;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MeshUpdatesBudget;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_EventsTickRate;
	static const UECodeGen_Private::FIntPropertyParams NewProp_DataOctreeInitialSubdivisionDepth;
	static void NewProp_bEnableMultiplayer_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableMultiplayer;
	static const UECodeGen_Private::FClassPropertyParams NewProp_MultiplayerInterface;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MultiplayerSyncRate;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_VoxelWorldEditor;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MultiplayerInterfaceInstance;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GeneratorCache;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlaceableItemActorHelper;
	static void NewProp_bIsToggled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsToggled;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AVoxelWorld_AddOffset, "AddOffset" }, // 3943109672
		{ &Z_Construct_UFunction_AVoxelWorld_CreateMultiplayerInterfaceInstance, "CreateMultiplayerInterfaceInstance" }, // 691867044
		{ &Z_Construct_UFunction_AVoxelWorld_CreateWorld, "CreateWorld" }, // 2665787573
		{ &Z_Construct_UFunction_AVoxelWorld_DestroyWorld, "DestroyWorld" }, // 4240701298
		{ &Z_Construct_UFunction_AVoxelWorld_GetGeneratorInit, "GetGeneratorInit" }, // 1527877844
		{ &Z_Construct_UFunction_AVoxelWorld_GetMultiplayerInterfaceInstance, "GetMultiplayerInterfaceInstance" }, // 4274289036
		{ &Z_Construct_UFunction_AVoxelWorld_GetNeighboringPositions, "GetNeighboringPositions" }, // 3345021065
		{ &Z_Construct_UFunction_AVoxelWorld_GlobalToLocal, "GlobalToLocal" }, // 711597682
		{ &Z_Construct_UFunction_AVoxelWorld_GlobalToLocalFloatBP, "GlobalToLocalFloatBP" }, // 439726731
		{ &Z_Construct_UFunction_AVoxelWorld_IsCreated, "IsCreated" }, // 1085103322
		{ &Z_Construct_UFunction_AVoxelWorld_IsLoaded, "IsLoaded" }, // 4202410048
		{ &Z_Construct_UFunction_AVoxelWorld_K2_GetGeneratorCache, "K2_GetGeneratorCache" }, // 832127919
		{ &Z_Construct_UFunction_AVoxelWorld_LocalToGlobal, "LocalToGlobal" }, // 4128112718
		{ &Z_Construct_UFunction_AVoxelWorld_LocalToGlobalFloatBP, "LocalToGlobalFloatBP" }, // 2780671758
		{ &Z_Construct_UDelegateFunction_AVoxelWorld_OnGenerateWorld__DelegateSignature, "OnGenerateWorld__DelegateSignature" }, // 1005879022
		{ &Z_Construct_UDelegateFunction_AVoxelWorld_OnMaxFoliageInstancesReached__DelegateSignature, "OnMaxFoliageInstancesReached__DelegateSignature" }, // 2503466018
		{ &Z_Construct_UDelegateFunction_AVoxelWorld_OnWorldDestroyed__DelegateSignature, "OnWorldDestroyed__DelegateSignature" }, // 1235821168
		{ &Z_Construct_UDelegateFunction_AVoxelWorld_OnWorldLoaded__DelegateSignature, "OnWorldLoaded__DelegateSignature" }, // 2627169443
		{ &Z_Construct_UFunction_AVoxelWorld_SetCollisionResponseToChannel, "SetCollisionResponseToChannel" }, // 2418612692
		{ &Z_Construct_UFunction_AVoxelWorld_SetGeneratorClass, "SetGeneratorClass" }, // 3560611206
		{ &Z_Construct_UFunction_AVoxelWorld_SetGeneratorObject, "SetGeneratorObject" }, // 4058253643
		{ &Z_Construct_UFunction_AVoxelWorld_SetOffset, "SetOffset" }, // 1713974896
		{ &Z_Construct_UFunction_AVoxelWorld_SetRenderOctreeDepth, "SetRenderOctreeDepth" }, // 3291886640
		{ &Z_Construct_UFunction_AVoxelWorld_SetWorldSize, "SetWorldSize" }, // 3955092330
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AVoxelWorld>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AVoxelWorld_Statics::NewProp_OnGenerateWorld = { "OnGenerateWorld", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVoxelWorld, OnGenerateWorld), Z_Construct_UDelegateFunction_AVoxelWorld_OnGenerateWorld__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnGenerateWorld_MetaData), NewProp_OnGenerateWorld_MetaData) }; // 1005879022
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AVoxelWorld_Statics::NewProp_OnWorldLoaded = { "OnWorldLoaded", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVoxelWorld, OnWorldLoaded), Z_Construct_UDelegateFunction_AVoxelWorld_OnWorldLoaded__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnWorldLoaded_MetaData), NewProp_OnWorldLoaded_MetaData) }; // 2627169443
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AVoxelWorld_Statics::NewProp_OnWorldDestroyed = { "OnWorldDestroyed", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVoxelWorld, OnWorldDestroyed), Z_Construct_UDelegateFunction_AVoxelWorld_OnWorldDestroyed__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnWorldDestroyed_MetaData), NewProp_OnWorldDestroyed_MetaData) }; // 1235821168
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AVoxelWorld_Statics::NewProp_OnMaxFoliageInstancesReached = { "OnMaxFoliageInstancesReached", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVoxelWorld, OnMaxFoliageInstancesReached), Z_Construct_UDelegateFunction_AVoxelWorld_OnMaxFoliageInstancesReached__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnMaxFoliageInstancesReached_MetaData), NewProp_OnMaxFoliageInstancesReached_MetaData) }; // 2503466018
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVoxelWorld_Statics::NewProp_WorldRoot = { "WorldRoot", nullptr, (EPropertyFlags)0x01240800000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVoxelWorld, WorldRoot), Z_Construct_UClass_UVoxelWorldRootComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldRoot_MetaData), NewProp_WorldRoot_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVoxelWorld_Statics::NewProp_LineBatchComponent = { "LineBatchComponent", nullptr, (EPropertyFlags)0x0124080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVoxelWorld, LineBatchComponent), Z_Construct_UClass_UVoxelLineBatchComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LineBatchComponent_MetaData), NewProp_LineBatchComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVoxelWorld_Statics::NewProp_SaveObject = { "SaveObject", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVoxelWorld, SaveObject), Z_Construct_UClass_UVoxelWorldSaveObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SaveObject_MetaData), NewProp_SaveObject_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_AVoxelWorld_Statics::NewProp_SaveFilePath = { "SaveFilePath", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVoxelWorld, SaveFilePath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SaveFilePath_MetaData), NewProp_SaveFilePath_MetaData) };
void Z_Construct_UClass_AVoxelWorld_Statics::NewProp_bAutomaticallySaveToFile_SetBit(void* Obj)
{
	((AVoxelWorld*)Obj)->bAutomaticallySaveToFile = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AVoxelWorld_Statics::NewProp_bAutomaticallySaveToFile = { "bAutomaticallySaveToFile", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AVoxelWorld), &Z_Construct_UClass_AVoxelWorld_Statics::NewProp_bAutomaticallySaveToFile_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAutomaticallySaveToFile_MetaData), NewProp_bAutomaticallySaveToFile_MetaData) };
void Z_Construct_UClass_AVoxelWorld_Statics::NewProp_bAppendDateToSavePath_SetBit(void* Obj)
{
	((AVoxelWorld*)Obj)->bAppendDateToSavePath = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AVoxelWorld_Statics::NewProp_bAppendDateToSavePath = { "bAppendDateToSavePath", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AVoxelWorld), &Z_Construct_UClass_AVoxelWorld_Statics::NewProp_bAppendDateToSavePath_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAppendDateToSavePath_MetaData), NewProp_bAppendDateToSavePath_MetaData) };
void Z_Construct_UClass_AVoxelWorld_Statics::NewProp_bRecomputeNormalsBeforeBaking_SetBit(void* Obj)
{
	((AVoxelWorld*)Obj)->bRecomputeNormalsBeforeBaking = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AVoxelWorld_Statics::NewProp_bRecomputeNormalsBeforeBaking = { "bRecomputeNormalsBeforeBaking", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AVoxelWorld), &Z_Construct_UClass_AVoxelWorld_Statics::NewProp_bRecomputeNormalsBeforeBaking_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRecomputeNormalsBeforeBaking_MetaData), NewProp_bRecomputeNormalsBeforeBaking_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVoxelWorld_Statics::NewProp_BakedMeshTemplate = { "BakedMeshTemplate", nullptr, (EPropertyFlags)0x0114040000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVoxelWorld, BakedMeshTemplate), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BakedMeshTemplate_MetaData), NewProp_BakedMeshTemplate_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AVoxelWorld_Statics::NewProp_BakedMeshComponentTemplate = { "BakedMeshComponentTemplate", nullptr, (EPropertyFlags)0x0014040000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVoxelWorld, BakedMeshComponentTemplate), Z_Construct_UClass_UClass, Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BakedMeshComponentTemplate_MetaData), NewProp_BakedMeshComponentTemplate_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AVoxelWorld_Statics::NewProp_BakedDataPath = { "BakedDataPath", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVoxelWorld, BakedDataPath), Z_Construct_UScriptStruct_FFilePath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BakedDataPath_MetaData), NewProp_BakedDataPath_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AVoxelWorld_Statics::NewProp_NumberOfThreadsForPreview = { "NumberOfThreadsForPreview", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVoxelWorld, NumberOfThreadsForPreview), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumberOfThreadsForPreview_MetaData), NewProp_NumberOfThreadsForPreview_MetaData) };
void Z_Construct_UClass_AVoxelWorld_Statics::NewProp_bEnableFoliageInEditor_SetBit(void* Obj)
{
	((AVoxelWorld*)Obj)->bEnableFoliageInEditor = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AVoxelWorld_Statics::NewProp_bEnableFoliageInEditor = { "bEnableFoliageInEditor", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AVoxelWorld), &Z_Construct_UClass_AVoxelWorld_Statics::NewProp_bEnableFoliageInEditor_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableFoliageInEditor_MetaData), NewProp_bEnableFoliageInEditor_MetaData) };
void Z_Construct_UClass_AVoxelWorld_Statics::NewProp_bAutomaticallyRefreshMaterials_SetBit(void* Obj)
{
	((AVoxelWorld*)Obj)->bAutomaticallyRefreshMaterials = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AVoxelWorld_Statics::NewProp_bAutomaticallyRefreshMaterials = { "bAutomaticallyRefreshMaterials", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AVoxelWorld), &Z_Construct_UClass_AVoxelWorld_Statics::NewProp_bAutomaticallyRefreshMaterials_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAutomaticallyRefreshMaterials_MetaData), NewProp_bAutomaticallyRefreshMaterials_MetaData) };
void Z_Construct_UClass_AVoxelWorld_Statics::NewProp_bAutomaticallyRefreshFoliage_SetBit(void* Obj)
{
	((AVoxelWorld*)Obj)->bAutomaticallyRefreshFoliage = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AVoxelWorld_Statics::NewProp_bAutomaticallyRefreshFoliage = { "bAutomaticallyRefreshFoliage", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AVoxelWorld), &Z_Construct_UClass_AVoxelWorld_Statics::NewProp_bAutomaticallyRefreshFoliage_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAutomaticallyRefreshFoliage_MetaData), NewProp_bAutomaticallyRefreshFoliage_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AVoxelWorld_Statics::NewProp_EditorOnly_NewScale = { "EditorOnly_NewScale", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVoxelWorld, EditorOnly_NewScale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EditorOnly_NewScale_MetaData), NewProp_EditorOnly_NewScale_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AVoxelWorld_Statics::NewProp_VoxelSize = { "VoxelSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVoxelWorld, VoxelSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VoxelSize_MetaData), NewProp_VoxelSize_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AVoxelWorld_Statics::NewProp_Generator = { "Generator", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVoxelWorld, Generator), Z_Construct_UScriptStruct_FVoxelGeneratorPicker, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Generator_MetaData), NewProp_Generator_MetaData) }; // 3276742823
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVoxelWorld_Statics::NewProp_PlaceableItemManager = { "PlaceableItemManager", nullptr, (EPropertyFlags)0x011600000008000d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVoxelWorld, PlaceableItemManager), Z_Construct_UClass_UVoxelPlaceableItemManager_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlaceableItemManager_MetaData), NewProp_PlaceableItemManager_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AVoxelWorld_Statics::NewProp_Seeds_ValueProp = { "Seeds", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_AVoxelWorld_Statics::NewProp_Seeds_Key_KeyProp = { "Seeds_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_AVoxelWorld_Statics::NewProp_Seeds = { "Seeds", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVoxelWorld, Seeds), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Seeds_MetaData), NewProp_Seeds_MetaData) };
void Z_Construct_UClass_AVoxelWorld_Statics::NewProp_bCreateWorldAutomatically_SetBit(void* Obj)
{
	((AVoxelWorld*)Obj)->bCreateWorldAutomatically = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AVoxelWorld_Statics::NewProp_bCreateWorldAutomatically = { "bCreateWorldAutomatically", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AVoxelWorld), &Z_Construct_UClass_AVoxelWorld_Statics::NewProp_bCreateWorldAutomatically_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCreateWorldAutomatically_MetaData), NewProp_bCreateWorldAutomatically_MetaData) };
void Z_Construct_UClass_AVoxelWorld_Statics::NewProp_bUseCameraIfNoInvokersFound_SetBit(void* Obj)
{
	((AVoxelWorld*)Obj)->bUseCameraIfNoInvokersFound = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AVoxelWorld_Statics::NewProp_bUseCameraIfNoInvokersFound = { "bUseCameraIfNoInvokersFound", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AVoxelWorld), &Z_Construct_UClass_AVoxelWorld_Statics::NewProp_bUseCameraIfNoInvokersFound_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseCameraIfNoInvokersFound_MetaData), NewProp_bUseCameraIfNoInvokersFound_MetaData) };
void Z_Construct_UClass_AVoxelWorld_Statics::NewProp_bEnableUndoRedo_SetBit(void* Obj)
{
	((AVoxelWorld*)Obj)->bEnableUndoRedo = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AVoxelWorld_Statics::NewProp_bEnableUndoRedo = { "bEnableUndoRedo", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AVoxelWorld), &Z_Construct_UClass_AVoxelWorld_Statics::NewProp_bEnableUndoRedo_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableUndoRedo_MetaData), NewProp_bEnableUndoRedo_MetaData) };
void Z_Construct_UClass_AVoxelWorld_Statics::NewProp_bEnableCustomWorldRebasing_SetBit(void* Obj)
{
	((AVoxelWorld*)Obj)->bEnableCustomWorldRebasing = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AVoxelWorld_Statics::NewProp_bEnableCustomWorldRebasing = { "bEnableCustomWorldRebasing", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AVoxelWorld), &Z_Construct_UClass_AVoxelWorld_Statics::NewProp_bEnableCustomWorldRebasing_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableCustomWorldRebasing_MetaData), NewProp_bEnableCustomWorldRebasing_MetaData) };
void Z_Construct_UClass_AVoxelWorld_Statics::NewProp_bMergeAssetActors_SetBit(void* Obj)
{
	((AVoxelWorld*)Obj)->bMergeAssetActors = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AVoxelWorld_Statics::NewProp_bMergeAssetActors = { "bMergeAssetActors", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AVoxelWorld), &Z_Construct_UClass_AVoxelWorld_Statics::NewProp_bMergeAssetActors_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bMergeAssetActors_MetaData), NewProp_bMergeAssetActors_MetaData) };
void Z_Construct_UClass_AVoxelWorld_Statics::NewProp_bMergeDisableEditsBoxes_SetBit(void* Obj)
{
	((AVoxelWorld*)Obj)->bMergeDisableEditsBoxes = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AVoxelWorld_Statics::NewProp_bMergeDisableEditsBoxes = { "bMergeDisableEditsBoxes", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AVoxelWorld), &Z_Construct_UClass_AVoxelWorld_Statics::NewProp_bMergeDisableEditsBoxes_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bMergeDisableEditsBoxes_MetaData), NewProp_bMergeDisableEditsBoxes_MetaData) };
void Z_Construct_UClass_AVoxelWorld_Statics::NewProp_bDisableOnScreenMessages_SetBit(void* Obj)
{
	((AVoxelWorld*)Obj)->bDisableOnScreenMessages = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AVoxelWorld_Statics::NewProp_bDisableOnScreenMessages = { "bDisableOnScreenMessages", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AVoxelWorld), &Z_Construct_UClass_AVoxelWorld_Statics::NewProp_bDisableOnScreenMessages_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDisableOnScreenMessages_MetaData), NewProp_bDisableOnScreenMessages_MetaData) };
void Z_Construct_UClass_AVoxelWorld_Statics::NewProp_bDisableDebugManager_SetBit(void* Obj)
{
	((AVoxelWorld*)Obj)->bDisableDebugManager = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AVoxelWorld_Statics::NewProp_bDisableDebugManager = { "bDisableDebugManager", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AVoxelWorld), &Z_Construct_UClass_AVoxelWorld_Statics::NewProp_bDisableDebugManager_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDisableDebugManager_MetaData), NewProp_bDisableDebugManager_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AVoxelWorld_Statics::NewProp_RenderOctreeDepth = { "RenderOctreeDepth", nullptr, (EPropertyFlags)0x0010040000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVoxelWorld, RenderOctreeDepth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RenderOctreeDepth_MetaData), NewProp_RenderOctreeDepth_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_AVoxelWorld_Statics::NewProp_WorldSizeInVoxel = { "WorldSizeInVoxel", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVoxelWorld, WorldSizeInVoxel), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldSizeInVoxel_MetaData), NewProp_WorldSizeInVoxel_MetaData) };
void Z_Construct_UClass_AVoxelWorld_Statics::NewProp_bUseCustomWorldBounds_SetBit(void* Obj)
{
	((AVoxelWorld*)Obj)->bUseCustomWorldBounds = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AVoxelWorld_Statics::NewProp_bUseCustomWorldBounds = { "bUseCustomWorldBounds", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AVoxelWorld), &Z_Construct_UClass_AVoxelWorld_Statics::NewProp_bUseCustomWorldBounds_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseCustomWorldBounds_MetaData), NewProp_bUseCustomWorldBounds_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AVoxelWorld_Statics::NewProp_CustomWorldBounds = { "CustomWorldBounds", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVoxelWorld, CustomWorldBounds), Z_Construct_UScriptStruct_FVoxelIntBox, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomWorldBounds_MetaData), NewProp_CustomWorldBounds_MetaData) }; // 3520536583
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AVoxelWorld_Statics::NewProp_MaxLOD = { "MaxLOD", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVoxelWorld, MaxLOD), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxLOD_MetaData), NewProp_MaxLOD_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AVoxelWorld_Statics::NewProp_MinLOD = { "MinLOD", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVoxelWorld, MinLOD), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinLOD_MetaData), NewProp_MinLOD_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AVoxelWorld_Statics::NewProp_InvokerDistanceThreshold = { "InvokerDistanceThreshold", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVoxelWorld, InvokerDistanceThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InvokerDistanceThreshold_MetaData), NewProp_InvokerDistanceThreshold_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AVoxelWorld_Statics::NewProp_MinDelayBetweenLODUpdates = { "MinDelayBetweenLODUpdates", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVoxelWorld, MinDelayBetweenLODUpdates), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinDelayBetweenLODUpdates_MetaData), NewProp_MinDelayBetweenLODUpdates_MetaData) };
void Z_Construct_UClass_AVoxelWorld_Statics::NewProp_bConstantLOD_SetBit(void* Obj)
{
	((AVoxelWorld*)Obj)->bConstantLOD = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AVoxelWorld_Statics::NewProp_bConstantLOD = { "bConstantLOD", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AVoxelWorld), &Z_Construct_UClass_AVoxelWorld_Statics::NewProp_bConstantLOD_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bConstantLOD_MetaData), NewProp_bConstantLOD_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AVoxelWorld_Statics::NewProp_MaterialConfig_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AVoxelWorld_Statics::NewProp_MaterialConfig = { "MaterialConfig", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVoxelWorld, MaterialConfig), Z_Construct_UEnum_Voxel_EVoxelMaterialConfig, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaterialConfig_MetaData), NewProp_MaterialConfig_MetaData) }; // 762384558
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVoxelWorld_Statics::NewProp_VoxelMaterial = { "VoxelMaterial", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVoxelWorld, VoxelMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VoxelMaterial_MetaData), NewProp_VoxelMaterial_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVoxelWorld_Statics::NewProp_MaterialCollection = { "MaterialCollection", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVoxelWorld, MaterialCollection), Z_Construct_UClass_UVoxelMaterialCollectionBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaterialCollection_MetaData), NewProp_MaterialCollection_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AVoxelWorld_Statics::NewProp_LODMaterials_Inner = { "LODMaterials", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVoxelLODMaterials, METADATA_PARAMS(0, nullptr) }; // 1458254023
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AVoxelWorld_Statics::NewProp_LODMaterials = { "LODMaterials", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVoxelWorld, LODMaterials), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LODMaterials_MetaData), NewProp_LODMaterials_MetaData) }; // 1458254023
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AVoxelWorld_Statics::NewProp_LODMaterialCollections_Inner = { "LODMaterialCollections", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVoxelLODMaterialCollections, METADATA_PARAMS(0, nullptr) }; // 1346999118
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AVoxelWorld_Statics::NewProp_LODMaterialCollections = { "LODMaterialCollections", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVoxelWorld, LODMaterialCollections), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LODMaterialCollections_MetaData), NewProp_LODMaterialCollections_MetaData) }; // 1346999118
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AVoxelWorld_Statics::NewProp_UVConfig_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AVoxelWorld_Statics::NewProp_UVConfig = { "UVConfig", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVoxelWorld, UVConfig), Z_Construct_UEnum_Voxel_EVoxelUVConfig, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UVConfig_MetaData), NewProp_UVConfig_MetaData) }; // 3904514116
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AVoxelWorld_Statics::NewProp_UVScale = { "UVScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVoxelWorld, UVScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UVScale_MetaData), NewProp_UVScale_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AVoxelWorld_Statics::NewProp_NormalConfig_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AVoxelWorld_Statics::NewProp_NormalConfig = { "NormalConfig", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVoxelWorld, NormalConfig), Z_Construct_UEnum_Voxel_EVoxelNormalConfig, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NormalConfig_MetaData), NewProp_NormalConfig_MetaData) }; // 913853248
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AVoxelWorld_Statics::NewProp_RGBHardness_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AVoxelWorld_Statics::NewProp_RGBHardness = { "RGBHardness", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVoxelWorld, RGBHardness), Z_Construct_UEnum_Voxel_EVoxelRGBHardness, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RGBHardness_MetaData), NewProp_RGBHardness_MetaData) }; // 3591508132
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AVoxelWorld_Statics::NewProp_MaterialsHardness_ValueProp = { "MaterialsHardness", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_AVoxelWorld_Statics::NewProp_MaterialsHardness_Key_KeyProp = { "MaterialsHardness_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_AVoxelWorld_Statics::NewProp_MaterialsHardness = { "MaterialsHardness", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVoxelWorld, MaterialsHardness), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaterialsHardness_MetaData), NewProp_MaterialsHardness_MetaData) };
void Z_Construct_UClass_AVoxelWorld_Statics::NewProp_bHardColorTransitions_SetBit(void* Obj)
{
	((AVoxelWorld*)Obj)->bHardColorTransitions = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AVoxelWorld_Statics::NewProp_bHardColorTransitions = { "bHardColorTransitions", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AVoxelWorld), &Z_Construct_UClass_AVoxelWorld_Statics::NewProp_bHardColorTransitions_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHardColorTransitions_MetaData), NewProp_bHardColorTransitions_MetaData) };
void Z_Construct_UClass_AVoxelWorld_Statics::NewProp_bOneMaterialPerCubeSide_SetBit(void* Obj)
{
	((AVoxelWorld*)Obj)->bOneMaterialPerCubeSide = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AVoxelWorld_Statics::NewProp_bOneMaterialPerCubeSide = { "bOneMaterialPerCubeSide", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AVoxelWorld), &Z_Construct_UClass_AVoxelWorld_Statics::NewProp_bOneMaterialPerCubeSide_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOneMaterialPerCubeSide_MetaData), NewProp_bOneMaterialPerCubeSide_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AVoxelWorld_Statics::NewProp_HolesMaterials_Inner = { "HolesMaterials", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AVoxelWorld_Statics::NewProp_HolesMaterials = { "HolesMaterials", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVoxelWorld, HolesMaterials), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HolesMaterials_MetaData), NewProp_HolesMaterials_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AVoxelWorld_Statics::NewProp_MaterialsMeshConfigs_ValueProp = { "MaterialsMeshConfigs", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FVoxelMeshConfig, METADATA_PARAMS(0, nullptr) }; // 2108453530
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AVoxelWorld_Statics::NewProp_MaterialsMeshConfigs_Key_KeyProp = { "MaterialsMeshConfigs_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_AVoxelWorld_Statics::NewProp_MaterialsMeshConfigs = { "MaterialsMeshConfigs", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVoxelWorld, MaterialsMeshConfigs), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaterialsMeshConfigs_MetaData), NewProp_MaterialsMeshConfigs_MetaData) }; // 2108453530
void Z_Construct_UClass_AVoxelWorld_Statics::NewProp_bHalfPrecisionCoordinates_SetBit(void* Obj)
{
	((AVoxelWorld*)Obj)->bHalfPrecisionCoordinates = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AVoxelWorld_Statics::NewProp_bHalfPrecisionCoordinates = { "bHalfPrecisionCoordinates", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AVoxelWorld), &Z_Construct_UClass_AVoxelWorld_Statics::NewProp_bHalfPrecisionCoordinates_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHalfPrecisionCoordinates_MetaData), NewProp_bHalfPrecisionCoordinates_MetaData) };
void Z_Construct_UClass_AVoxelWorld_Statics::NewProp_bInterpolateColors_SetBit(void* Obj)
{
	((AVoxelWorld*)Obj)->bInterpolateColors = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AVoxelWorld_Statics::NewProp_bInterpolateColors = { "bInterpolateColors", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AVoxelWorld), &Z_Construct_UClass_AVoxelWorld_Statics::NewProp_bInterpolateColors_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bInterpolateColors_MetaData), NewProp_bInterpolateColors_MetaData) };
void Z_Construct_UClass_AVoxelWorld_Statics::NewProp_bInterpolateUVs_SetBit(void* Obj)
{
	((AVoxelWorld*)Obj)->bInterpolateUVs = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AVoxelWorld_Statics::NewProp_bInterpolateUVs = { "bInterpolateUVs", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AVoxelWorld), &Z_Construct_UClass_AVoxelWorld_Statics::NewProp_bInterpolateUVs_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bInterpolateUVs_MetaData), NewProp_bInterpolateUVs_MetaData) };
void Z_Construct_UClass_AVoxelWorld_Statics::NewProp_bSRGBColors_SetBit(void* Obj)
{
	((AVoxelWorld*)Obj)->bSRGBColors = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AVoxelWorld_Statics::NewProp_bSRGBColors = { "bSRGBColors", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AVoxelWorld), &Z_Construct_UClass_AVoxelWorld_Statics::NewProp_bSRGBColors_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSRGBColors_MetaData), NewProp_bSRGBColors_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AVoxelWorld_Statics::NewProp_RenderType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AVoxelWorld_Statics::NewProp_RenderType = { "RenderType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVoxelWorld, RenderType), Z_Construct_UEnum_Voxel_EVoxelRenderType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RenderType_MetaData), NewProp_RenderType_MetaData) }; // 1529021437
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AVoxelWorld_Statics::NewProp_RenderSharpness = { "RenderSharpness", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVoxelWorld, RenderSharpness), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RenderSharpness_MetaData), NewProp_RenderSharpness_MetaData) };
void Z_Construct_UClass_AVoxelWorld_Statics::NewProp_bCreateMaterialInstances_SetBit(void* Obj)
{
	((AVoxelWorld*)Obj)->bCreateMaterialInstances = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AVoxelWorld_Statics::NewProp_bCreateMaterialInstances = { "bCreateMaterialInstances", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AVoxelWorld), &Z_Construct_UClass_AVoxelWorld_Statics::NewProp_bCreateMaterialInstances_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCreateMaterialInstances_MetaData), NewProp_bCreateMaterialInstances_MetaData) };
void Z_Construct_UClass_AVoxelWorld_Statics::NewProp_bDitherChunks_SetBit(void* Obj)
{
	((AVoxelWorld*)Obj)->bDitherChunks = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AVoxelWorld_Statics::NewProp_bDitherChunks = { "bDitherChunks", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AVoxelWorld), &Z_Construct_UClass_AVoxelWorld_Statics::NewProp_bDitherChunks_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDitherChunks_MetaData), NewProp_bDitherChunks_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AVoxelWorld_Statics::NewProp_ChunksDitheringDuration = { "ChunksDitheringDuration", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVoxelWorld, ChunksDitheringDuration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChunksDitheringDuration_MetaData), NewProp_ChunksDitheringDuration_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AVoxelWorld_Statics::NewProp_ProcMeshClass = { "ProcMeshClass", nullptr, (EPropertyFlags)0x0014040000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVoxelWorld, ProcMeshClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UVoxelProceduralMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProcMeshClass_MetaData), NewProp_ProcMeshClass_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AVoxelWorld_Statics::NewProp_ChunksCullingLOD = { "ChunksCullingLOD", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVoxelWorld, ChunksCullingLOD), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChunksCullingLOD_MetaData), NewProp_ChunksCullingLOD_MetaData) };
void Z_Construct_UClass_AVoxelWorld_Statics::NewProp_bRenderWorld_SetBit(void* Obj)
{
	((AVoxelWorld*)Obj)->bRenderWorld = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AVoxelWorld_Statics::NewProp_bRenderWorld = { "bRenderWorld", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AVoxelWorld), &Z_Construct_UClass_AVoxelWorld_Statics::NewProp_bRenderWorld_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRenderWorld_MetaData), NewProp_bRenderWorld_MetaData) };
void Z_Construct_UClass_AVoxelWorld_Statics::NewProp_bStaticWorld_SetBit(void* Obj)
{
	((AVoxelWorld*)Obj)->bStaticWorld = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AVoxelWorld_Statics::NewProp_bStaticWorld = { "bStaticWorld", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AVoxelWorld), &Z_Construct_UClass_AVoxelWorld_Statics::NewProp_bStaticWorld_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bStaticWorld_MetaData), NewProp_bStaticWorld_MetaData) };
void Z_Construct_UClass_AVoxelWorld_Statics::NewProp_bOptimizeIndices_SetBit(void* Obj)
{
	((AVoxelWorld*)Obj)->bOptimizeIndices = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AVoxelWorld_Statics::NewProp_bOptimizeIndices = { "bOptimizeIndices", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AVoxelWorld), &Z_Construct_UClass_AVoxelWorld_Statics::NewProp_bOptimizeIndices_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOptimizeIndices_MetaData), NewProp_bOptimizeIndices_MetaData) };
void Z_Construct_UClass_AVoxelWorld_Statics::NewProp_bGenerateDistanceFields_SetBit(void* Obj)
{
	((AVoxelWorld*)Obj)->bGenerateDistanceFields = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AVoxelWorld_Statics::NewProp_bGenerateDistanceFields = { "bGenerateDistanceFields", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AVoxelWorld), &Z_Construct_UClass_AVoxelWorld_Statics::NewProp_bGenerateDistanceFields_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bGenerateDistanceFields_MetaData), NewProp_bGenerateDistanceFields_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AVoxelWorld_Statics::NewProp_MaxDistanceFieldLOD = { "MaxDistanceFieldLOD", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVoxelWorld, MaxDistanceFieldLOD), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxDistanceFieldLOD_MetaData), NewProp_MaxDistanceFieldLOD_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AVoxelWorld_Statics::NewProp_DistanceFieldBoundsExtension = { "DistanceFieldBoundsExtension", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVoxelWorld, DistanceFieldBoundsExtension), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DistanceFieldBoundsExtension_MetaData), NewProp_DistanceFieldBoundsExtension_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AVoxelWorld_Statics::NewProp_DistanceFieldResolutionDivisor = { "DistanceFieldResolutionDivisor", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVoxelWorld, DistanceFieldResolutionDivisor), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DistanceFieldResolutionDivisor_MetaData), NewProp_DistanceFieldResolutionDivisor_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AVoxelWorld_Statics::NewProp_DistanceFieldSelfShadowBias = { "DistanceFieldSelfShadowBias", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVoxelWorld, DistanceFieldSelfShadowBias), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DistanceFieldSelfShadowBias_MetaData), NewProp_DistanceFieldSelfShadowBias_MetaData) };
void Z_Construct_UClass_AVoxelWorld_Statics::NewProp_bEnableTransitions_SetBit(void* Obj)
{
	((AVoxelWorld*)Obj)->bEnableTransitions = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AVoxelWorld_Statics::NewProp_bEnableTransitions = { "bEnableTransitions", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AVoxelWorld), &Z_Construct_UClass_AVoxelWorld_Statics::NewProp_bEnableTransitions_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableTransitions_MetaData), NewProp_bEnableTransitions_MetaData) };
void Z_Construct_UClass_AVoxelWorld_Statics::NewProp_bMergeChunks_SetBit(void* Obj)
{
	((AVoxelWorld*)Obj)->bMergeChunks = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AVoxelWorld_Statics::NewProp_bMergeChunks = { "bMergeChunks", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AVoxelWorld), &Z_Construct_UClass_AVoxelWorld_Statics::NewProp_bMergeChunks_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bMergeChunks_MetaData), NewProp_bMergeChunks_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AVoxelWorld_Statics::NewProp_ChunksClustersSize = { "ChunksClustersSize", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVoxelWorld, ChunksClustersSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChunksClustersSize_MetaData), NewProp_ChunksClustersSize_MetaData) };
void Z_Construct_UClass_AVoxelWorld_Statics::NewProp_bDoNotMergeCollisionsAndNavmesh_SetBit(void* Obj)
{
	((AVoxelWorld*)Obj)->bDoNotMergeCollisionsAndNavmesh = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AVoxelWorld_Statics::NewProp_bDoNotMergeCollisionsAndNavmesh = { "bDoNotMergeCollisionsAndNavmesh", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AVoxelWorld), &Z_Construct_UClass_AVoxelWorld_Statics::NewProp_bDoNotMergeCollisionsAndNavmesh_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDoNotMergeCollisionsAndNavmesh_MetaData), NewProp_bDoNotMergeCollisionsAndNavmesh_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AVoxelWorld_Statics::NewProp_BoundsExtension = { "BoundsExtension", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVoxelWorld, BoundsExtension), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoundsExtension_MetaData), NewProp_BoundsExtension_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AVoxelWorld_Statics::NewProp_PrimitiveSettings = { "PrimitiveSettings", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVoxelWorld, PrimitiveSettings), Z_Construct_UScriptStruct_FVoxelPrimitiveComponentSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PrimitiveSettings_MetaData), NewProp_PrimitiveSettings_MetaData) }; // 2999943215
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVoxelWorld_Statics::NewProp_SpawnerConfig = { "SpawnerConfig", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVoxelWorld, SpawnerConfig), Z_Construct_UClass_UVoxelSpawnerConfig_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnerConfig_MetaData), NewProp_SpawnerConfig_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AVoxelWorld_Statics::NewProp_HISMChunkSize = { "HISMChunkSize", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVoxelWorld, HISMChunkSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HISMChunkSize_MetaData), NewProp_HISMChunkSize_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AVoxelWorld_Statics::NewProp_SpawnersCollisionDistanceInVoxel = { "SpawnersCollisionDistanceInVoxel", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVoxelWorld, SpawnersCollisionDistanceInVoxel), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnersCollisionDistanceInVoxel_MetaData), NewProp_SpawnersCollisionDistanceInVoxel_MetaData) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UClass_AVoxelWorld_Statics::NewProp_MaxNumberOfFoliageInstances = { "MaxNumberOfFoliageInstances", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVoxelWorld, MaxNumberOfFoliageInstances), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxNumberOfFoliageInstances_MetaData), NewProp_MaxNumberOfFoliageInstances_MetaData) };
void Z_Construct_UClass_AVoxelWorld_Statics::NewProp_bEnableCollisions_SetBit(void* Obj)
{
	((AVoxelWorld*)Obj)->bEnableCollisions = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AVoxelWorld_Statics::NewProp_bEnableCollisions = { "bEnableCollisions", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AVoxelWorld), &Z_Construct_UClass_AVoxelWorld_Statics::NewProp_bEnableCollisions_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableCollisions_MetaData), NewProp_bEnableCollisions_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AVoxelWorld_Statics::NewProp_CollisionPresets = { "CollisionPresets", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVoxelWorld, CollisionPresets), Z_Construct_UScriptStruct_FBodyInstance, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollisionPresets_MetaData), NewProp_CollisionPresets_MetaData) }; // 289277017
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AVoxelWorld_Statics::NewProp_CollisionTraceFlag = { "CollisionTraceFlag", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVoxelWorld, CollisionTraceFlag), Z_Construct_UEnum_PhysicsCore_ECollisionTraceFlag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollisionTraceFlag_MetaData), NewProp_CollisionTraceFlag_MetaData) }; // 4042370968
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AVoxelWorld_Statics::NewProp_CanCharacterStepUpOn = { "CanCharacterStepUpOn", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVoxelWorld, CanCharacterStepUpOn), Z_Construct_UEnum_Engine_ECanBeCharacterBase, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CanCharacterStepUpOn_MetaData), NewProp_CanCharacterStepUpOn_MetaData) }; // 1140627000
void Z_Construct_UClass_AVoxelWorld_Statics::NewProp_bNotifyRigidBodyCollision_SetBit(void* Obj)
{
	((AVoxelWorld*)Obj)->bNotifyRigidBodyCollision = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AVoxelWorld_Statics::NewProp_bNotifyRigidBodyCollision = { "bNotifyRigidBodyCollision", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AVoxelWorld), &Z_Construct_UClass_AVoxelWorld_Statics::NewProp_bNotifyRigidBodyCollision_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bNotifyRigidBodyCollision_MetaData), NewProp_bNotifyRigidBodyCollision_MetaData) };
void Z_Construct_UClass_AVoxelWorld_Statics::NewProp_bGenerateOverlapEvents_SetBit(void* Obj)
{
	((AVoxelWorld*)Obj)->bGenerateOverlapEvents = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AVoxelWorld_Statics::NewProp_bGenerateOverlapEvents = { "bGenerateOverlapEvents", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AVoxelWorld), &Z_Construct_UClass_AVoxelWorld_Statics::NewProp_bGenerateOverlapEvents_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bGenerateOverlapEvents_MetaData), NewProp_bGenerateOverlapEvents_MetaData) };
void Z_Construct_UClass_AVoxelWorld_Statics::NewProp_bComputeVisibleChunksCollisions_SetBit(void* Obj)
{
	((AVoxelWorld*)Obj)->bComputeVisibleChunksCollisions = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AVoxelWorld_Statics::NewProp_bComputeVisibleChunksCollisions = { "bComputeVisibleChunksCollisions", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AVoxelWorld), &Z_Construct_UClass_AVoxelWorld_Statics::NewProp_bComputeVisibleChunksCollisions_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bComputeVisibleChunksCollisions_MetaData), NewProp_bComputeVisibleChunksCollisions_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AVoxelWorld_Statics::NewProp_VisibleChunksCollisionsMaxLOD = { "VisibleChunksCollisionsMaxLOD", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVoxelWorld, VisibleChunksCollisionsMaxLOD), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VisibleChunksCollisionsMaxLOD_MetaData), NewProp_VisibleChunksCollisionsMaxLOD_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVoxelWorld_Statics::NewProp_PhysMaterialOverride = { "PhysMaterialOverride", nullptr, (EPropertyFlags)0x0114040000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVoxelWorld, PhysMaterialOverride), Z_Construct_UClass_UPhysicalMaterial_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PhysMaterialOverride_MetaData), NewProp_PhysMaterialOverride_MetaData) };
void Z_Construct_UClass_AVoxelWorld_Statics::NewProp_bUseCCD_SetBit(void* Obj)
{
	((AVoxelWorld*)Obj)->bUseCCD = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AVoxelWorld_Statics::NewProp_bUseCCD = { "bUseCCD", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AVoxelWorld), &Z_Construct_UClass_AVoxelWorld_Statics::NewProp_bUseCCD_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseCCD_MetaData), NewProp_bUseCCD_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AVoxelWorld_Statics::NewProp_NumConvexHullsPerAxis = { "NumConvexHullsPerAxis", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVoxelWorld, NumConvexHullsPerAxis), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumConvexHullsPerAxis_MetaData), NewProp_NumConvexHullsPerAxis_MetaData) };
void Z_Construct_UClass_AVoxelWorld_Statics::NewProp_bCleanCollisionMeshes_SetBit(void* Obj)
{
	((AVoxelWorld*)Obj)->bCleanCollisionMeshes = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AVoxelWorld_Statics::NewProp_bCleanCollisionMeshes = { "bCleanCollisionMeshes", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AVoxelWorld), &Z_Construct_UClass_AVoxelWorld_Statics::NewProp_bCleanCollisionMeshes_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCleanCollisionMeshes_MetaData), NewProp_bCleanCollisionMeshes_MetaData) };
void Z_Construct_UClass_AVoxelWorld_Statics::NewProp_bEnableNavmesh_SetBit(void* Obj)
{
	((AVoxelWorld*)Obj)->bEnableNavmesh = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AVoxelWorld_Statics::NewProp_bEnableNavmesh = { "bEnableNavmesh", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AVoxelWorld), &Z_Construct_UClass_AVoxelWorld_Statics::NewProp_bEnableNavmesh_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableNavmesh_MetaData), NewProp_bEnableNavmesh_MetaData) };
void Z_Construct_UClass_AVoxelWorld_Statics::NewProp_bComputeVisibleChunksNavmesh_SetBit(void* Obj)
{
	((AVoxelWorld*)Obj)->bComputeVisibleChunksNavmesh = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AVoxelWorld_Statics::NewProp_bComputeVisibleChunksNavmesh = { "bComputeVisibleChunksNavmesh", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AVoxelWorld), &Z_Construct_UClass_AVoxelWorld_Statics::NewProp_bComputeVisibleChunksNavmesh_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bComputeVisibleChunksNavmesh_MetaData), NewProp_bComputeVisibleChunksNavmesh_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AVoxelWorld_Statics::NewProp_VisibleChunksNavmeshMaxLOD = { "VisibleChunksNavmeshMaxLOD", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVoxelWorld, VisibleChunksNavmeshMaxLOD), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VisibleChunksNavmeshMaxLOD_MetaData), NewProp_VisibleChunksNavmeshMaxLOD_MetaData) };
void Z_Construct_UClass_AVoxelWorld_Statics::NewProp_bCreateGlobalPool_SetBit(void* Obj)
{
	((AVoxelWorld*)Obj)->bCreateGlobalPool = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AVoxelWorld_Statics::NewProp_bCreateGlobalPool = { "bCreateGlobalPool", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AVoxelWorld), &Z_Construct_UClass_AVoxelWorld_Statics::NewProp_bCreateGlobalPool_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCreateGlobalPool_MetaData), NewProp_bCreateGlobalPool_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AVoxelWorld_Statics::NewProp_NumberOfThreads = { "NumberOfThreads", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVoxelWorld, NumberOfThreads), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumberOfThreads_MetaData), NewProp_NumberOfThreads_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AVoxelWorld_Statics::NewProp_PriorityCategories_ValueProp = { "PriorityCategories", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AVoxelWorld_Statics::NewProp_PriorityCategories_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AVoxelWorld_Statics::NewProp_PriorityCategories_Key_KeyProp = { "PriorityCategories_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_Voxel_EVoxelTaskType, METADATA_PARAMS(0, nullptr) }; // 4243771042
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_AVoxelWorld_Statics::NewProp_PriorityCategories = { "PriorityCategories", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVoxelWorld, PriorityCategories), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PriorityCategories_MetaData), NewProp_PriorityCategories_MetaData) }; // 4243771042
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AVoxelWorld_Statics::NewProp_PriorityOffsets_ValueProp = { "PriorityOffsets", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AVoxelWorld_Statics::NewProp_PriorityOffsets_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AVoxelWorld_Statics::NewProp_PriorityOffsets_Key_KeyProp = { "PriorityOffsets_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_Voxel_EVoxelTaskType, METADATA_PARAMS(0, nullptr) }; // 4243771042
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_AVoxelWorld_Statics::NewProp_PriorityOffsets = { "PriorityOffsets", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVoxelWorld, PriorityOffsets), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PriorityOffsets_MetaData), NewProp_PriorityOffsets_MetaData) }; // 4243771042
void Z_Construct_UClass_AVoxelWorld_Statics::NewProp_bConstantPriorities_SetBit(void* Obj)
{
	((AVoxelWorld*)Obj)->bConstantPriorities = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AVoxelWorld_Statics::NewProp_bConstantPriorities = { "bConstantPriorities", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AVoxelWorld), &Z_Construct_UClass_AVoxelWorld_Statics::NewProp_bConstantPriorities_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bConstantPriorities_MetaData), NewProp_bConstantPriorities_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AVoxelWorld_Statics::NewProp_PriorityDuration = { "PriorityDuration", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVoxelWorld, PriorityDuration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PriorityDuration_MetaData), NewProp_PriorityDuration_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AVoxelWorld_Statics::NewProp_MeshUpdatesBudget = { "MeshUpdatesBudget", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVoxelWorld, MeshUpdatesBudget), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshUpdatesBudget_MetaData), NewProp_MeshUpdatesBudget_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AVoxelWorld_Statics::NewProp_EventsTickRate = { "EventsTickRate", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVoxelWorld, EventsTickRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EventsTickRate_MetaData), NewProp_EventsTickRate_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AVoxelWorld_Statics::NewProp_DataOctreeInitialSubdivisionDepth = { "DataOctreeInitialSubdivisionDepth", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVoxelWorld, DataOctreeInitialSubdivisionDepth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DataOctreeInitialSubdivisionDepth_MetaData), NewProp_DataOctreeInitialSubdivisionDepth_MetaData) };
void Z_Construct_UClass_AVoxelWorld_Statics::NewProp_bEnableMultiplayer_SetBit(void* Obj)
{
	((AVoxelWorld*)Obj)->bEnableMultiplayer = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AVoxelWorld_Statics::NewProp_bEnableMultiplayer = { "bEnableMultiplayer", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AVoxelWorld), &Z_Construct_UClass_AVoxelWorld_Statics::NewProp_bEnableMultiplayer_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableMultiplayer_MetaData), NewProp_bEnableMultiplayer_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AVoxelWorld_Statics::NewProp_MultiplayerInterface = { "MultiplayerInterface", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVoxelWorld, MultiplayerInterface), Z_Construct_UClass_UClass, Z_Construct_UClass_UVoxelMultiplayerInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MultiplayerInterface_MetaData), NewProp_MultiplayerInterface_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AVoxelWorld_Statics::NewProp_MultiplayerSyncRate = { "MultiplayerSyncRate", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVoxelWorld, MultiplayerSyncRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MultiplayerSyncRate_MetaData), NewProp_MultiplayerSyncRate_MetaData) };
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVoxelWorld_Statics::NewProp_VoxelWorldEditor = { "VoxelWorldEditor", nullptr, (EPropertyFlags)0x0144000800002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVoxelWorld, VoxelWorldEditor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VoxelWorldEditor_MetaData), NewProp_VoxelWorldEditor_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVoxelWorld_Statics::NewProp_MultiplayerInterfaceInstance = { "MultiplayerInterfaceInstance", nullptr, (EPropertyFlags)0x0144000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVoxelWorld, MultiplayerInterfaceInstance), Z_Construct_UClass_UVoxelMultiplayerInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MultiplayerInterfaceInstance_MetaData), NewProp_MultiplayerInterfaceInstance_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVoxelWorld_Statics::NewProp_GeneratorCache = { "GeneratorCache", nullptr, (EPropertyFlags)0x0144000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVoxelWorld, GeneratorCache), Z_Construct_UClass_UVoxelGeneratorCache_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GeneratorCache_MetaData), NewProp_GeneratorCache_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVoxelWorld_Statics::NewProp_PlaceableItemActorHelper = { "PlaceableItemActorHelper", nullptr, (EPropertyFlags)0x0144000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVoxelWorld, PlaceableItemActorHelper), Z_Construct_UClass_UVoxelPlaceableItemActorHelper_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlaceableItemActorHelper_MetaData), NewProp_PlaceableItemActorHelper_MetaData) };
void Z_Construct_UClass_AVoxelWorld_Statics::NewProp_bIsToggled_SetBit(void* Obj)
{
	((AVoxelWorld*)Obj)->bIsToggled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AVoxelWorld_Statics::NewProp_bIsToggled = { "bIsToggled", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AVoxelWorld), &Z_Construct_UClass_AVoxelWorld_Statics::NewProp_bIsToggled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsToggled_MetaData), NewProp_bIsToggled_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AVoxelWorld_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelWorld_Statics::NewProp_OnGenerateWorld,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelWorld_Statics::NewProp_OnWorldLoaded,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelWorld_Statics::NewProp_OnWorldDestroyed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelWorld_Statics::NewProp_OnMaxFoliageInstancesReached,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelWorld_Statics::NewProp_WorldRoot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelWorld_Statics::NewProp_LineBatchComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelWorld_Statics::NewProp_SaveObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelWorld_Statics::NewProp_SaveFilePath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelWorld_Statics::NewProp_bAutomaticallySaveToFile,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelWorld_Statics::NewProp_bAppendDateToSavePath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelWorld_Statics::NewProp_bRecomputeNormalsBeforeBaking,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelWorld_Statics::NewProp_BakedMeshTemplate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelWorld_Statics::NewProp_BakedMeshComponentTemplate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelWorld_Statics::NewProp_BakedDataPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelWorld_Statics::NewProp_NumberOfThreadsForPreview,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelWorld_Statics::NewProp_bEnableFoliageInEditor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelWorld_Statics::NewProp_bAutomaticallyRefreshMaterials,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelWorld_Statics::NewProp_bAutomaticallyRefreshFoliage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelWorld_Statics::NewProp_EditorOnly_NewScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelWorld_Statics::NewProp_VoxelSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelWorld_Statics::NewProp_Generator,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelWorld_Statics::NewProp_PlaceableItemManager,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelWorld_Statics::NewProp_Seeds_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelWorld_Statics::NewProp_Seeds_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelWorld_Statics::NewProp_Seeds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelWorld_Statics::NewProp_bCreateWorldAutomatically,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelWorld_Statics::NewProp_bUseCameraIfNoInvokersFound,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelWorld_Statics::NewProp_bEnableUndoRedo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelWorld_Statics::NewProp_bEnableCustomWorldRebasing,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelWorld_Statics::NewProp_bMergeAssetActors,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelWorld_Statics::NewProp_bMergeDisableEditsBoxes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelWorld_Statics::NewProp_bDisableOnScreenMessages,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelWorld_Statics::NewProp_bDisableDebugManager,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelWorld_Statics::NewProp_RenderOctreeDepth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelWorld_Statics::NewProp_WorldSizeInVoxel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelWorld_Statics::NewProp_bUseCustomWorldBounds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelWorld_Statics::NewProp_CustomWorldBounds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelWorld_Statics::NewProp_MaxLOD,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelWorld_Statics::NewProp_MinLOD,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelWorld_Statics::NewProp_InvokerDistanceThreshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelWorld_Statics::NewProp_MinDelayBetweenLODUpdates,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelWorld_Statics::NewProp_bConstantLOD,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelWorld_Statics::NewProp_MaterialConfig_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelWorld_Statics::NewProp_MaterialConfig,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelWorld_Statics::NewProp_VoxelMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelWorld_Statics::NewProp_MaterialCollection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelWorld_Statics::NewProp_LODMaterials_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelWorld_Statics::NewProp_LODMaterials,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelWorld_Statics::NewProp_LODMaterialCollections_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelWorld_Statics::NewProp_LODMaterialCollections,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelWorld_Statics::NewProp_UVConfig_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelWorld_Statics::NewProp_UVConfig,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelWorld_Statics::NewProp_UVScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelWorld_Statics::NewProp_NormalConfig_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelWorld_Statics::NewProp_NormalConfig,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelWorld_Statics::NewProp_RGBHardness_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelWorld_Statics::NewProp_RGBHardness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelWorld_Statics::NewProp_MaterialsHardness_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelWorld_Statics::NewProp_MaterialsHardness_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelWorld_Statics::NewProp_MaterialsHardness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelWorld_Statics::NewProp_bHardColorTransitions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelWorld_Statics::NewProp_bOneMaterialPerCubeSide,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelWorld_Statics::NewProp_HolesMaterials_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelWorld_Statics::NewProp_HolesMaterials,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelWorld_Statics::NewProp_MaterialsMeshConfigs_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelWorld_Statics::NewProp_MaterialsMeshConfigs_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelWorld_Statics::NewProp_MaterialsMeshConfigs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelWorld_Statics::NewProp_bHalfPrecisionCoordinates,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelWorld_Statics::NewProp_bInterpolateColors,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelWorld_Statics::NewProp_bInterpolateUVs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelWorld_Statics::NewProp_bSRGBColors,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelWorld_Statics::NewProp_RenderType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelWorld_Statics::NewProp_RenderType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelWorld_Statics::NewProp_RenderSharpness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelWorld_Statics::NewProp_bCreateMaterialInstances,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelWorld_Statics::NewProp_bDitherChunks,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelWorld_Statics::NewProp_ChunksDitheringDuration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelWorld_Statics::NewProp_ProcMeshClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelWorld_Statics::NewProp_ChunksCullingLOD,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelWorld_Statics::NewProp_bRenderWorld,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelWorld_Statics::NewProp_bStaticWorld,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelWorld_Statics::NewProp_bOptimizeIndices,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelWorld_Statics::NewProp_bGenerateDistanceFields,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelWorld_Statics::NewProp_MaxDistanceFieldLOD,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelWorld_Statics::NewProp_DistanceFieldBoundsExtension,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelWorld_Statics::NewProp_DistanceFieldResolutionDivisor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelWorld_Statics::NewProp_DistanceFieldSelfShadowBias,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelWorld_Statics::NewProp_bEnableTransitions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelWorld_Statics::NewProp_bMergeChunks,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelWorld_Statics::NewProp_ChunksClustersSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelWorld_Statics::NewProp_bDoNotMergeCollisionsAndNavmesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelWorld_Statics::NewProp_BoundsExtension,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelWorld_Statics::NewProp_PrimitiveSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelWorld_Statics::NewProp_SpawnerConfig,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelWorld_Statics::NewProp_HISMChunkSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelWorld_Statics::NewProp_SpawnersCollisionDistanceInVoxel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelWorld_Statics::NewProp_MaxNumberOfFoliageInstances,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelWorld_Statics::NewProp_bEnableCollisions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelWorld_Statics::NewProp_CollisionPresets,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelWorld_Statics::NewProp_CollisionTraceFlag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelWorld_Statics::NewProp_CanCharacterStepUpOn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelWorld_Statics::NewProp_bNotifyRigidBodyCollision,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelWorld_Statics::NewProp_bGenerateOverlapEvents,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelWorld_Statics::NewProp_bComputeVisibleChunksCollisions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelWorld_Statics::NewProp_VisibleChunksCollisionsMaxLOD,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelWorld_Statics::NewProp_PhysMaterialOverride,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelWorld_Statics::NewProp_bUseCCD,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelWorld_Statics::NewProp_NumConvexHullsPerAxis,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelWorld_Statics::NewProp_bCleanCollisionMeshes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelWorld_Statics::NewProp_bEnableNavmesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelWorld_Statics::NewProp_bComputeVisibleChunksNavmesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelWorld_Statics::NewProp_VisibleChunksNavmeshMaxLOD,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelWorld_Statics::NewProp_bCreateGlobalPool,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelWorld_Statics::NewProp_NumberOfThreads,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelWorld_Statics::NewProp_PriorityCategories_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelWorld_Statics::NewProp_PriorityCategories_Key_KeyProp_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelWorld_Statics::NewProp_PriorityCategories_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelWorld_Statics::NewProp_PriorityCategories,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelWorld_Statics::NewProp_PriorityOffsets_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelWorld_Statics::NewProp_PriorityOffsets_Key_KeyProp_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelWorld_Statics::NewProp_PriorityOffsets_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelWorld_Statics::NewProp_PriorityOffsets,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelWorld_Statics::NewProp_bConstantPriorities,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelWorld_Statics::NewProp_PriorityDuration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelWorld_Statics::NewProp_MeshUpdatesBudget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelWorld_Statics::NewProp_EventsTickRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelWorld_Statics::NewProp_DataOctreeInitialSubdivisionDepth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelWorld_Statics::NewProp_bEnableMultiplayer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelWorld_Statics::NewProp_MultiplayerInterface,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelWorld_Statics::NewProp_MultiplayerSyncRate,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelWorld_Statics::NewProp_VoxelWorldEditor,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelWorld_Statics::NewProp_MultiplayerInterfaceInstance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelWorld_Statics::NewProp_GeneratorCache,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelWorld_Statics::NewProp_PlaceableItemActorHelper,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelWorld_Statics::NewProp_bIsToggled,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AVoxelWorld_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AVoxelWorld_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AVoxelWorldInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AVoxelWorld_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AVoxelWorld_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UVoxelEditorDelegatesInterface_NoRegister, (int32)VTABLE_OFFSET(AVoxelWorld, IVoxelEditorDelegatesInterface), false },  // 1557566173
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_AVoxelWorld_Statics::ClassParams = {
	&AVoxelWorld::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AVoxelWorld_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AVoxelWorld_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AVoxelWorld_Statics::Class_MetaDataParams), Z_Construct_UClass_AVoxelWorld_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AVoxelWorld()
{
	if (!Z_Registration_Info_UClass_AVoxelWorld.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AVoxelWorld.OuterSingleton, Z_Construct_UClass_AVoxelWorld_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AVoxelWorld.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AVoxelWorld);
AVoxelWorld::~AVoxelWorld() {}
IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(AVoxelWorld)
// ********** End Class AVoxelWorld ****************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelWorld_h__Script_Voxel_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AVoxelWorld, AVoxelWorld::StaticClass, TEXT("AVoxelWorld"), &Z_Registration_Info_UClass_AVoxelWorld, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AVoxelWorld), 999696210U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelWorld_h__Script_Voxel_2645096301(TEXT("/Script/Voxel"),
	Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelWorld_h__Script_Voxel_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelWorld_h__Script_Voxel_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
