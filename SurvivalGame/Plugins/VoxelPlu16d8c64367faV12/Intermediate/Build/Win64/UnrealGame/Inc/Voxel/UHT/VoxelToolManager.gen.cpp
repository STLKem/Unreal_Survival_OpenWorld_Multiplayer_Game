// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Voxel/Public/VoxelTools/VoxelToolManager.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeVoxelToolManager() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
UPackage* Z_Construct_UPackage__Script_Voxel();
VOXEL_API UClass* Z_Construct_UClass_UVoxelTool_NoRegister();
VOXEL_API UClass* Z_Construct_UClass_UVoxelToolManager();
VOXEL_API UClass* Z_Construct_UClass_UVoxelToolManager_NoRegister();
VOXEL_API UClass* Z_Construct_UClass_UVoxelToolSharedConfig_NoRegister();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UVoxelToolManager Function CreateDefaultTools ****************************
struct Z_Construct_UFunction_UVoxelToolManager_CreateDefaultTools_Statics
{
	struct VoxelToolManager_eventCreateDefaultTools_Parms
	{
		bool bLoadBlueprints;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Voxel|Tools" },
		{ "Comment", "// If bLoadBlueprints is true, all the blueprints inheriting from VoxelTool will be force loaded\n// If false, tools whose blueprints are not loaded won't show up\n" },
		{ "CPP_Default_bLoadBlueprints", "false" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelToolManager.h" },
		{ "ToolTip", "If bLoadBlueprints is true, all the blueprints inheriting from VoxelTool will be force loaded\nIf false, tools whose blueprints are not loaded won't show up" },
	};
#endif // WITH_METADATA
	static void NewProp_bLoadBlueprints_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLoadBlueprints;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UVoxelToolManager_CreateDefaultTools_Statics::NewProp_bLoadBlueprints_SetBit(void* Obj)
{
	((VoxelToolManager_eventCreateDefaultTools_Parms*)Obj)->bLoadBlueprints = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelToolManager_CreateDefaultTools_Statics::NewProp_bLoadBlueprints = { "bLoadBlueprints", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VoxelToolManager_eventCreateDefaultTools_Parms), &Z_Construct_UFunction_UVoxelToolManager_CreateDefaultTools_Statics::NewProp_bLoadBlueprints_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelToolManager_CreateDefaultTools_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelToolManager_CreateDefaultTools_Statics::NewProp_bLoadBlueprints,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelToolManager_CreateDefaultTools_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelToolManager_CreateDefaultTools_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelToolManager, nullptr, "CreateDefaultTools", Z_Construct_UFunction_UVoxelToolManager_CreateDefaultTools_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelToolManager_CreateDefaultTools_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVoxelToolManager_CreateDefaultTools_Statics::VoxelToolManager_eventCreateDefaultTools_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelToolManager_CreateDefaultTools_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelToolManager_CreateDefaultTools_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVoxelToolManager_CreateDefaultTools_Statics::VoxelToolManager_eventCreateDefaultTools_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVoxelToolManager_CreateDefaultTools()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelToolManager_CreateDefaultTools_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelToolManager::execCreateDefaultTools)
{
	P_GET_UBOOL(Z_Param_bLoadBlueprints);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CreateDefaultTools(Z_Param_bLoadBlueprints);
	P_NATIVE_END;
}
// ********** End Class UVoxelToolManager Function CreateDefaultTools ******************************

// ********** Begin Class UVoxelToolManager Function GetActiveTool *********************************
struct Z_Construct_UFunction_UVoxelToolManager_GetActiveTool_Statics
{
	struct VoxelToolManager_eventGetActiveTool_Parms
	{
		UVoxelTool* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Voxel|Tools" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelToolManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelToolManager_GetActiveTool_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelToolManager_eventGetActiveTool_Parms, ReturnValue), Z_Construct_UClass_UVoxelTool_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelToolManager_GetActiveTool_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelToolManager_GetActiveTool_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelToolManager_GetActiveTool_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelToolManager_GetActiveTool_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelToolManager, nullptr, "GetActiveTool", Z_Construct_UFunction_UVoxelToolManager_GetActiveTool_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelToolManager_GetActiveTool_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVoxelToolManager_GetActiveTool_Statics::VoxelToolManager_eventGetActiveTool_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelToolManager_GetActiveTool_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelToolManager_GetActiveTool_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVoxelToolManager_GetActiveTool_Statics::VoxelToolManager_eventGetActiveTool_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVoxelToolManager_GetActiveTool()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelToolManager_GetActiveTool_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelToolManager::execGetActiveTool)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UVoxelTool**)Z_Param__Result=P_THIS->GetActiveTool();
	P_NATIVE_END;
}
// ********** End Class UVoxelToolManager Function GetActiveTool ***********************************

// ********** Begin Class UVoxelToolManager Function GetTools **************************************
struct Z_Construct_UFunction_UVoxelToolManager_GetTools_Statics
{
	struct VoxelToolManager_eventGetTools_Parms
	{
		TArray<UVoxelTool*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Voxel|Tools" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelToolManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelToolManager_GetTools_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UVoxelTool_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVoxelToolManager_GetTools_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelToolManager_eventGetTools_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelToolManager_GetTools_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelToolManager_GetTools_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelToolManager_GetTools_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelToolManager_GetTools_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelToolManager_GetTools_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelToolManager, nullptr, "GetTools", Z_Construct_UFunction_UVoxelToolManager_GetTools_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelToolManager_GetTools_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVoxelToolManager_GetTools_Statics::VoxelToolManager_eventGetTools_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelToolManager_GetTools_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelToolManager_GetTools_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVoxelToolManager_GetTools_Statics::VoxelToolManager_eventGetTools_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVoxelToolManager_GetTools()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelToolManager_GetTools_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelToolManager::execGetTools)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<UVoxelTool*>*)Z_Param__Result=P_THIS->GetTools();
	P_NATIVE_END;
}
// ********** End Class UVoxelToolManager Function GetTools ****************************************

// ********** Begin Class UVoxelToolManager Function K2_GetSharedConfig ****************************
struct Z_Construct_UFunction_UVoxelToolManager_K2_GetSharedConfig_Statics
{
	struct VoxelToolManager_eventK2_GetSharedConfig_Parms
	{
		UVoxelToolSharedConfig* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Voxel|Tools" },
		{ "DisplayName", "Get Shared Config" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelToolManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelToolManager_K2_GetSharedConfig_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelToolManager_eventK2_GetSharedConfig_Parms, ReturnValue), Z_Construct_UClass_UVoxelToolSharedConfig_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelToolManager_K2_GetSharedConfig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelToolManager_K2_GetSharedConfig_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelToolManager_K2_GetSharedConfig_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelToolManager_K2_GetSharedConfig_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelToolManager, nullptr, "K2_GetSharedConfig", Z_Construct_UFunction_UVoxelToolManager_K2_GetSharedConfig_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelToolManager_K2_GetSharedConfig_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVoxelToolManager_K2_GetSharedConfig_Statics::VoxelToolManager_eventK2_GetSharedConfig_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelToolManager_K2_GetSharedConfig_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelToolManager_K2_GetSharedConfig_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVoxelToolManager_K2_GetSharedConfig_Statics::VoxelToolManager_eventK2_GetSharedConfig_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVoxelToolManager_K2_GetSharedConfig()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelToolManager_K2_GetSharedConfig_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelToolManager::execK2_GetSharedConfig)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UVoxelToolSharedConfig**)Z_Param__Result=P_THIS->K2_GetSharedConfig();
	P_NATIVE_END;
}
// ********** End Class UVoxelToolManager Function K2_GetSharedConfig ******************************

// ********** Begin Class UVoxelToolManager Function SetActiveTool *********************************
struct Z_Construct_UFunction_UVoxelToolManager_SetActiveTool_Statics
{
	struct VoxelToolManager_eventSetActiveTool_Parms
	{
		UVoxelTool* NewActiveTool;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Voxel|Tools" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelToolManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewActiveTool;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelToolManager_SetActiveTool_Statics::NewProp_NewActiveTool = { "NewActiveTool", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelToolManager_eventSetActiveTool_Parms, NewActiveTool), Z_Construct_UClass_UVoxelTool_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelToolManager_SetActiveTool_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelToolManager_SetActiveTool_Statics::NewProp_NewActiveTool,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelToolManager_SetActiveTool_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelToolManager_SetActiveTool_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelToolManager, nullptr, "SetActiveTool", Z_Construct_UFunction_UVoxelToolManager_SetActiveTool_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelToolManager_SetActiveTool_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVoxelToolManager_SetActiveTool_Statics::VoxelToolManager_eventSetActiveTool_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelToolManager_SetActiveTool_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelToolManager_SetActiveTool_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVoxelToolManager_SetActiveTool_Statics::VoxelToolManager_eventSetActiveTool_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVoxelToolManager_SetActiveTool()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelToolManager_SetActiveTool_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelToolManager::execSetActiveTool)
{
	P_GET_OBJECT(UVoxelTool,Z_Param_NewActiveTool);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetActiveTool(Z_Param_NewActiveTool);
	P_NATIVE_END;
}
// ********** End Class UVoxelToolManager Function SetActiveTool ***********************************

// ********** Begin Class UVoxelToolManager Function SetActiveToolByClass **************************
struct Z_Construct_UFunction_UVoxelToolManager_SetActiveToolByClass_Statics
{
	struct VoxelToolManager_eventSetActiveToolByClass_Parms
	{
		TSubclassOf<UVoxelTool> NewActiveTool;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Voxel|Tools" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelToolManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_NewActiveTool;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UVoxelToolManager_SetActiveToolByClass_Statics::NewProp_NewActiveTool = { "NewActiveTool", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelToolManager_eventSetActiveToolByClass_Parms, NewActiveTool), Z_Construct_UClass_UClass, Z_Construct_UClass_UVoxelTool_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelToolManager_SetActiveToolByClass_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelToolManager_SetActiveToolByClass_Statics::NewProp_NewActiveTool,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelToolManager_SetActiveToolByClass_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelToolManager_SetActiveToolByClass_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelToolManager, nullptr, "SetActiveToolByClass", Z_Construct_UFunction_UVoxelToolManager_SetActiveToolByClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelToolManager_SetActiveToolByClass_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVoxelToolManager_SetActiveToolByClass_Statics::VoxelToolManager_eventSetActiveToolByClass_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelToolManager_SetActiveToolByClass_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelToolManager_SetActiveToolByClass_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVoxelToolManager_SetActiveToolByClass_Statics::VoxelToolManager_eventSetActiveToolByClass_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVoxelToolManager_SetActiveToolByClass()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelToolManager_SetActiveToolByClass_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelToolManager::execSetActiveToolByClass)
{
	P_GET_OBJECT(UClass,Z_Param_NewActiveTool);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetActiveToolByClass(Z_Param_NewActiveTool);
	P_NATIVE_END;
}
// ********** End Class UVoxelToolManager Function SetActiveToolByClass ****************************

// ********** Begin Class UVoxelToolManager Function SetActiveToolByName ***************************
struct Z_Construct_UFunction_UVoxelToolManager_SetActiveToolByName_Statics
{
	struct VoxelToolManager_eventSetActiveToolByName_Parms
	{
		FName NewActiveTool;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Voxel|Tools" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelToolManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_NewActiveTool;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UVoxelToolManager_SetActiveToolByName_Statics::NewProp_NewActiveTool = { "NewActiveTool", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelToolManager_eventSetActiveToolByName_Parms, NewActiveTool), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelToolManager_SetActiveToolByName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelToolManager_SetActiveToolByName_Statics::NewProp_NewActiveTool,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelToolManager_SetActiveToolByName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelToolManager_SetActiveToolByName_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelToolManager, nullptr, "SetActiveToolByName", Z_Construct_UFunction_UVoxelToolManager_SetActiveToolByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelToolManager_SetActiveToolByName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVoxelToolManager_SetActiveToolByName_Statics::VoxelToolManager_eventSetActiveToolByName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelToolManager_SetActiveToolByName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelToolManager_SetActiveToolByName_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVoxelToolManager_SetActiveToolByName_Statics::VoxelToolManager_eventSetActiveToolByName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVoxelToolManager_SetActiveToolByName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelToolManager_SetActiveToolByName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelToolManager::execSetActiveToolByName)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_NewActiveTool);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetActiveToolByName(Z_Param_NewActiveTool);
	P_NATIVE_END;
}
// ********** End Class UVoxelToolManager Function SetActiveToolByName *****************************

// ********** Begin Class UVoxelToolManager ********************************************************
void UVoxelToolManager::StaticRegisterNativesUVoxelToolManager()
{
	UClass* Class = UVoxelToolManager::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CreateDefaultTools", &UVoxelToolManager::execCreateDefaultTools },
		{ "GetActiveTool", &UVoxelToolManager::execGetActiveTool },
		{ "GetTools", &UVoxelToolManager::execGetTools },
		{ "K2_GetSharedConfig", &UVoxelToolManager::execK2_GetSharedConfig },
		{ "SetActiveTool", &UVoxelToolManager::execSetActiveTool },
		{ "SetActiveToolByClass", &UVoxelToolManager::execSetActiveToolByClass },
		{ "SetActiveToolByName", &UVoxelToolManager::execSetActiveToolByName },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UVoxelToolManager;
UClass* UVoxelToolManager::GetPrivateStaticClass()
{
	using TClass = UVoxelToolManager;
	if (!Z_Registration_Info_UClass_UVoxelToolManager.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("VoxelToolManager"),
			Z_Registration_Info_UClass_UVoxelToolManager.InnerSingleton,
			StaticRegisterNativesUVoxelToolManager,
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
	return Z_Registration_Info_UClass_UVoxelToolManager.InnerSingleton;
}
UClass* Z_Construct_UClass_UVoxelToolManager_NoRegister()
{
	return UVoxelToolManager::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UVoxelToolManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "VoxelTools/VoxelToolManager.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelToolManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SharedConfig_MetaData[] = {
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelToolManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActiveTool_MetaData[] = {
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelToolManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Tools_MetaData[] = {
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelToolManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SharedConfig;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ActiveTool;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Tools_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Tools;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UVoxelToolManager_CreateDefaultTools, "CreateDefaultTools" }, // 3427782045
		{ &Z_Construct_UFunction_UVoxelToolManager_GetActiveTool, "GetActiveTool" }, // 2794490524
		{ &Z_Construct_UFunction_UVoxelToolManager_GetTools, "GetTools" }, // 364883900
		{ &Z_Construct_UFunction_UVoxelToolManager_K2_GetSharedConfig, "K2_GetSharedConfig" }, // 634316416
		{ &Z_Construct_UFunction_UVoxelToolManager_SetActiveTool, "SetActiveTool" }, // 2526723623
		{ &Z_Construct_UFunction_UVoxelToolManager_SetActiveToolByClass, "SetActiveToolByClass" }, // 4142820990
		{ &Z_Construct_UFunction_UVoxelToolManager_SetActiveToolByName, "SetActiveToolByName" }, // 894073093
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelToolManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVoxelToolManager_Statics::NewProp_SharedConfig = { "SharedConfig", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelToolManager, SharedConfig), Z_Construct_UClass_UVoxelToolSharedConfig_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SharedConfig_MetaData), NewProp_SharedConfig_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVoxelToolManager_Statics::NewProp_ActiveTool = { "ActiveTool", nullptr, (EPropertyFlags)0x0144000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelToolManager, ActiveTool), Z_Construct_UClass_UVoxelTool_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActiveTool_MetaData), NewProp_ActiveTool_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVoxelToolManager_Statics::NewProp_Tools_Inner = { "Tools", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UVoxelTool_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UVoxelToolManager_Statics::NewProp_Tools = { "Tools", nullptr, (EPropertyFlags)0x0144000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelToolManager, Tools), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tools_MetaData), NewProp_Tools_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelToolManager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelToolManager_Statics::NewProp_SharedConfig,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelToolManager_Statics::NewProp_ActiveTool,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelToolManager_Statics::NewProp_Tools_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelToolManager_Statics::NewProp_Tools,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelToolManager_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UVoxelToolManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelToolManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelToolManager_Statics::ClassParams = {
	&UVoxelToolManager::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UVoxelToolManager_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelToolManager_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelToolManager_Statics::Class_MetaDataParams), Z_Construct_UClass_UVoxelToolManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVoxelToolManager()
{
	if (!Z_Registration_Info_UClass_UVoxelToolManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelToolManager.OuterSingleton, Z_Construct_UClass_UVoxelToolManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVoxelToolManager.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelToolManager);
UVoxelToolManager::~UVoxelToolManager() {}
// ********** End Class UVoxelToolManager **********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelTools_VoxelToolManager_h__Script_Voxel_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UVoxelToolManager, UVoxelToolManager::StaticClass, TEXT("UVoxelToolManager"), &Z_Registration_Info_UClass_UVoxelToolManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelToolManager), 1969049426U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelTools_VoxelToolManager_h__Script_Voxel_825972703(TEXT("/Script/Voxel"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelTools_VoxelToolManager_h__Script_Voxel_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelTools_VoxelToolManager_h__Script_Voxel_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
