// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VoxelComponents/VoxelInvokerComponent.h"
#include "VoxelInvokerSettings.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeVoxelInvokerComponent() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntVector();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AVolume();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
UPackage* Z_Construct_UPackage__Script_Voxel();
VOXEL_API UClass* Z_Construct_UClass_AVoxelLODVolume();
VOXEL_API UClass* Z_Construct_UClass_AVoxelLODVolume_NoRegister();
VOXEL_API UClass* Z_Construct_UClass_AVoxelWorldInterface_NoRegister();
VOXEL_API UClass* Z_Construct_UClass_UVoxelInvokerAutoCameraComponent();
VOXEL_API UClass* Z_Construct_UClass_UVoxelInvokerAutoCameraComponent_NoRegister();
VOXEL_API UClass* Z_Construct_UClass_UVoxelInvokerComponentBase();
VOXEL_API UClass* Z_Construct_UClass_UVoxelInvokerComponentBase_NoRegister();
VOXEL_API UClass* Z_Construct_UClass_UVoxelInvokerWithPredictionComponent();
VOXEL_API UClass* Z_Construct_UClass_UVoxelInvokerWithPredictionComponent_NoRegister();
VOXEL_API UClass* Z_Construct_UClass_UVoxelLODVolumeInvokerComponent();
VOXEL_API UClass* Z_Construct_UClass_UVoxelLODVolumeInvokerComponent_NoRegister();
VOXEL_API UClass* Z_Construct_UClass_UVoxelSimpleInvokerComponent();
VOXEL_API UClass* Z_Construct_UClass_UVoxelSimpleInvokerComponent_NoRegister();
VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelInvokerSettings();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UVoxelInvokerComponentBase Function DisableInvoker ***********************
struct Z_Construct_UFunction_UVoxelInvokerComponentBase_DisableInvoker_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Voxel|Invoker" },
		{ "ModuleRelativePath", "Public/VoxelComponents/VoxelInvokerComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelInvokerComponentBase_DisableInvoker_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelInvokerComponentBase, nullptr, "DisableInvoker", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelInvokerComponentBase_DisableInvoker_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelInvokerComponentBase_DisableInvoker_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UVoxelInvokerComponentBase_DisableInvoker()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelInvokerComponentBase_DisableInvoker_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelInvokerComponentBase::execDisableInvoker)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DisableInvoker();
	P_NATIVE_END;
}
// ********** End Class UVoxelInvokerComponentBase Function DisableInvoker *************************

// ********** Begin Class UVoxelInvokerComponentBase Function EnableInvoker ************************
struct Z_Construct_UFunction_UVoxelInvokerComponentBase_EnableInvoker_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Voxel|Invoker" },
		{ "ModuleRelativePath", "Public/VoxelComponents/VoxelInvokerComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelInvokerComponentBase_EnableInvoker_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelInvokerComponentBase, nullptr, "EnableInvoker", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelInvokerComponentBase_EnableInvoker_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelInvokerComponentBase_EnableInvoker_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UVoxelInvokerComponentBase_EnableInvoker()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelInvokerComponentBase_EnableInvoker_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelInvokerComponentBase::execEnableInvoker)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EnableInvoker();
	P_NATIVE_END;
}
// ********** End Class UVoxelInvokerComponentBase Function EnableInvoker **************************

// ********** Begin Class UVoxelInvokerComponentBase Function GetInvokerSettings *******************
struct VoxelInvokerComponentBase_eventGetInvokerSettings_Parms
{
	AVoxelWorldInterface* VoxelWorld;
	FVoxelInvokerSettings ReturnValue;
};
static FName NAME_UVoxelInvokerComponentBase_GetInvokerSettings = FName(TEXT("GetInvokerSettings"));
FVoxelInvokerSettings UVoxelInvokerComponentBase::GetInvokerSettings(AVoxelWorldInterface* VoxelWorld) const
{
	UFunction* Func = FindFunctionChecked(NAME_UVoxelInvokerComponentBase_GetInvokerSettings);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		VoxelInvokerComponentBase_eventGetInvokerSettings_Parms Parms;
		Parms.VoxelWorld=VoxelWorld;
		const_cast<UVoxelInvokerComponentBase*>(this)->ProcessEvent(Func,&Parms);
		return Parms.ReturnValue;
	}
	else
	{
		return const_cast<UVoxelInvokerComponentBase*>(this)->GetInvokerSettings_Implementation(VoxelWorld);
	}
}
struct Z_Construct_UFunction_UVoxelInvokerComponentBase_GetInvokerSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Voxel|Invoker" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Get the invoker settings\n// All the bounds are in voxel space\n" },
#endif
		{ "ModuleRelativePath", "Public/VoxelComponents/VoxelInvokerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get the invoker settings\nAll the bounds are in voxel space" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_VoxelWorld;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelInvokerComponentBase_GetInvokerSettings_Statics::NewProp_VoxelWorld = { "VoxelWorld", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelInvokerComponentBase_eventGetInvokerSettings_Parms, VoxelWorld), Z_Construct_UClass_AVoxelWorldInterface_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelInvokerComponentBase_GetInvokerSettings_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelInvokerComponentBase_eventGetInvokerSettings_Parms, ReturnValue), Z_Construct_UScriptStruct_FVoxelInvokerSettings, METADATA_PARAMS(0, nullptr) }; // 591204715
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelInvokerComponentBase_GetInvokerSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelInvokerComponentBase_GetInvokerSettings_Statics::NewProp_VoxelWorld,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelInvokerComponentBase_GetInvokerSettings_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelInvokerComponentBase_GetInvokerSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelInvokerComponentBase_GetInvokerSettings_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelInvokerComponentBase, nullptr, "GetInvokerSettings", Z_Construct_UFunction_UVoxelInvokerComponentBase_GetInvokerSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelInvokerComponentBase_GetInvokerSettings_Statics::PropPointers), sizeof(VoxelInvokerComponentBase_eventGetInvokerSettings_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelInvokerComponentBase_GetInvokerSettings_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelInvokerComponentBase_GetInvokerSettings_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(VoxelInvokerComponentBase_eventGetInvokerSettings_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVoxelInvokerComponentBase_GetInvokerSettings()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelInvokerComponentBase_GetInvokerSettings_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelInvokerComponentBase::execGetInvokerSettings)
{
	P_GET_OBJECT(AVoxelWorldInterface,Z_Param_VoxelWorld);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVoxelInvokerSettings*)Z_Param__Result=P_THIS->GetInvokerSettings_Implementation(Z_Param_VoxelWorld);
	P_NATIVE_END;
}
// ********** End Class UVoxelInvokerComponentBase Function GetInvokerSettings *********************

// ********** Begin Class UVoxelInvokerComponentBase Function GetInvokerVoxelPosition **************
struct VoxelInvokerComponentBase_eventGetInvokerVoxelPosition_Parms
{
	AVoxelWorldInterface* VoxelWorld;
	FIntVector ReturnValue;

	/** Constructor, initializes return property only **/
	VoxelInvokerComponentBase_eventGetInvokerVoxelPosition_Parms()
		: ReturnValue(ForceInit)
	{
	}
};
static FName NAME_UVoxelInvokerComponentBase_GetInvokerVoxelPosition = FName(TEXT("GetInvokerVoxelPosition"));
FIntVector UVoxelInvokerComponentBase::GetInvokerVoxelPosition(AVoxelWorldInterface* VoxelWorld) const
{
	UFunction* Func = FindFunctionChecked(NAME_UVoxelInvokerComponentBase_GetInvokerVoxelPosition);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		VoxelInvokerComponentBase_eventGetInvokerVoxelPosition_Parms Parms;
		Parms.VoxelWorld=VoxelWorld;
		const_cast<UVoxelInvokerComponentBase*>(this)->ProcessEvent(Func,&Parms);
		return Parms.ReturnValue;
	}
	else
	{
		return const_cast<UVoxelInvokerComponentBase*>(this)->GetInvokerVoxelPosition_Implementation(VoxelWorld);
	}
}
struct Z_Construct_UFunction_UVoxelInvokerComponentBase_GetInvokerVoxelPosition_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Voxel|Invoker" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Used to detect if the invoker has moved\n// Also used for events\n" },
#endif
		{ "ModuleRelativePath", "Public/VoxelComponents/VoxelInvokerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Used to detect if the invoker has moved\nAlso used for events" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_VoxelWorld;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelInvokerComponentBase_GetInvokerVoxelPosition_Statics::NewProp_VoxelWorld = { "VoxelWorld", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelInvokerComponentBase_eventGetInvokerVoxelPosition_Parms, VoxelWorld), Z_Construct_UClass_AVoxelWorldInterface_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelInvokerComponentBase_GetInvokerVoxelPosition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelInvokerComponentBase_eventGetInvokerVoxelPosition_Parms, ReturnValue), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelInvokerComponentBase_GetInvokerVoxelPosition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelInvokerComponentBase_GetInvokerVoxelPosition_Statics::NewProp_VoxelWorld,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelInvokerComponentBase_GetInvokerVoxelPosition_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelInvokerComponentBase_GetInvokerVoxelPosition_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelInvokerComponentBase_GetInvokerVoxelPosition_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelInvokerComponentBase, nullptr, "GetInvokerVoxelPosition", Z_Construct_UFunction_UVoxelInvokerComponentBase_GetInvokerVoxelPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelInvokerComponentBase_GetInvokerVoxelPosition_Statics::PropPointers), sizeof(VoxelInvokerComponentBase_eventGetInvokerVoxelPosition_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48820C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelInvokerComponentBase_GetInvokerVoxelPosition_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelInvokerComponentBase_GetInvokerVoxelPosition_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(VoxelInvokerComponentBase_eventGetInvokerVoxelPosition_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVoxelInvokerComponentBase_GetInvokerVoxelPosition()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelInvokerComponentBase_GetInvokerVoxelPosition_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelInvokerComponentBase::execGetInvokerVoxelPosition)
{
	P_GET_OBJECT(AVoxelWorldInterface,Z_Param_VoxelWorld);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FIntVector*)Z_Param__Result=P_THIS->GetInvokerVoxelPosition_Implementation(Z_Param_VoxelWorld);
	P_NATIVE_END;
}
// ********** End Class UVoxelInvokerComponentBase Function GetInvokerVoxelPosition ****************

// ********** Begin Class UVoxelInvokerComponentBase Function IsInvokerEnabled *********************
struct Z_Construct_UFunction_UVoxelInvokerComponentBase_IsInvokerEnabled_Statics
{
	struct VoxelInvokerComponentBase_eventIsInvokerEnabled_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Voxel|Invoker" },
		{ "ModuleRelativePath", "Public/VoxelComponents/VoxelInvokerComponent.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UVoxelInvokerComponentBase_IsInvokerEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((VoxelInvokerComponentBase_eventIsInvokerEnabled_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelInvokerComponentBase_IsInvokerEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VoxelInvokerComponentBase_eventIsInvokerEnabled_Parms), &Z_Construct_UFunction_UVoxelInvokerComponentBase_IsInvokerEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelInvokerComponentBase_IsInvokerEnabled_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelInvokerComponentBase_IsInvokerEnabled_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelInvokerComponentBase_IsInvokerEnabled_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelInvokerComponentBase_IsInvokerEnabled_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelInvokerComponentBase, nullptr, "IsInvokerEnabled", Z_Construct_UFunction_UVoxelInvokerComponentBase_IsInvokerEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelInvokerComponentBase_IsInvokerEnabled_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVoxelInvokerComponentBase_IsInvokerEnabled_Statics::VoxelInvokerComponentBase_eventIsInvokerEnabled_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelInvokerComponentBase_IsInvokerEnabled_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelInvokerComponentBase_IsInvokerEnabled_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVoxelInvokerComponentBase_IsInvokerEnabled_Statics::VoxelInvokerComponentBase_eventIsInvokerEnabled_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVoxelInvokerComponentBase_IsInvokerEnabled()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelInvokerComponentBase_IsInvokerEnabled_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelInvokerComponentBase::execIsInvokerEnabled)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsInvokerEnabled();
	P_NATIVE_END;
}
// ********** End Class UVoxelInvokerComponentBase Function IsInvokerEnabled ***********************

// ********** Begin Class UVoxelInvokerComponentBase Function IsLocalInvoker ***********************
struct VoxelInvokerComponentBase_eventIsLocalInvoker_Parms
{
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	VoxelInvokerComponentBase_eventIsLocalInvoker_Parms()
		: ReturnValue(false)
	{
	}
};
static FName NAME_UVoxelInvokerComponentBase_IsLocalInvoker = FName(TEXT("IsLocalInvoker"));
bool UVoxelInvokerComponentBase::IsLocalInvoker() const
{
	UFunction* Func = FindFunctionChecked(NAME_UVoxelInvokerComponentBase_IsLocalInvoker);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		VoxelInvokerComponentBase_eventIsLocalInvoker_Parms Parms;
		const_cast<UVoxelInvokerComponentBase*>(this)->ProcessEvent(Func,&Parms);
		return !!Parms.ReturnValue;
	}
	else
	{
		return const_cast<UVoxelInvokerComponentBase*>(this)->IsLocalInvoker_Implementation();
	}
}
struct Z_Construct_UFunction_UVoxelInvokerComponentBase_IsLocalInvoker_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Voxel|Invoker" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Is this invoker local? If false, bUseForLOD will always be considered as false\n// Useful for multiplayer, to only compute the LOD for the local player\n// Defaults to Cast<APawn>(GetOwner())->IsLocallyControlled()\n" },
#endif
		{ "ModuleRelativePath", "Public/VoxelComponents/VoxelInvokerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Is this invoker local? If false, bUseForLOD will always be considered as false\nUseful for multiplayer, to only compute the LOD for the local player\nDefaults to Cast<APawn>(GetOwner())->IsLocallyControlled()" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UVoxelInvokerComponentBase_IsLocalInvoker_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((VoxelInvokerComponentBase_eventIsLocalInvoker_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelInvokerComponentBase_IsLocalInvoker_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VoxelInvokerComponentBase_eventIsLocalInvoker_Parms), &Z_Construct_UFunction_UVoxelInvokerComponentBase_IsLocalInvoker_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelInvokerComponentBase_IsLocalInvoker_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelInvokerComponentBase_IsLocalInvoker_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelInvokerComponentBase_IsLocalInvoker_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelInvokerComponentBase_IsLocalInvoker_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelInvokerComponentBase, nullptr, "IsLocalInvoker", Z_Construct_UFunction_UVoxelInvokerComponentBase_IsLocalInvoker_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelInvokerComponentBase_IsLocalInvoker_Statics::PropPointers), sizeof(VoxelInvokerComponentBase_eventIsLocalInvoker_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelInvokerComponentBase_IsLocalInvoker_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelInvokerComponentBase_IsLocalInvoker_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(VoxelInvokerComponentBase_eventIsLocalInvoker_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVoxelInvokerComponentBase_IsLocalInvoker()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelInvokerComponentBase_IsLocalInvoker_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelInvokerComponentBase::execIsLocalInvoker)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsLocalInvoker_Implementation();
	P_NATIVE_END;
}
// ********** End Class UVoxelInvokerComponentBase Function IsLocalInvoker *************************

// ********** Begin Class UVoxelInvokerComponentBase Function RefreshAllVoxelInvokers **************
struct Z_Construct_UFunction_UVoxelInvokerComponentBase_RefreshAllVoxelInvokers_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Voxel|Invoker" },
		{ "ModuleRelativePath", "Public/VoxelComponents/VoxelInvokerComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelInvokerComponentBase_RefreshAllVoxelInvokers_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelInvokerComponentBase, nullptr, "RefreshAllVoxelInvokers", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelInvokerComponentBase_RefreshAllVoxelInvokers_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelInvokerComponentBase_RefreshAllVoxelInvokers_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UVoxelInvokerComponentBase_RefreshAllVoxelInvokers()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelInvokerComponentBase_RefreshAllVoxelInvokers_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelInvokerComponentBase::execRefreshAllVoxelInvokers)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	UVoxelInvokerComponentBase::RefreshAllVoxelInvokers();
	P_NATIVE_END;
}
// ********** End Class UVoxelInvokerComponentBase Function RefreshAllVoxelInvokers ****************

// ********** Begin Class UVoxelInvokerComponentBase ***********************************************
void UVoxelInvokerComponentBase::StaticRegisterNativesUVoxelInvokerComponentBase()
{
	UClass* Class = UVoxelInvokerComponentBase::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "DisableInvoker", &UVoxelInvokerComponentBase::execDisableInvoker },
		{ "EnableInvoker", &UVoxelInvokerComponentBase::execEnableInvoker },
		{ "GetInvokerSettings", &UVoxelInvokerComponentBase::execGetInvokerSettings },
		{ "GetInvokerVoxelPosition", &UVoxelInvokerComponentBase::execGetInvokerVoxelPosition },
		{ "IsInvokerEnabled", &UVoxelInvokerComponentBase::execIsInvokerEnabled },
		{ "IsLocalInvoker", &UVoxelInvokerComponentBase::execIsLocalInvoker },
		{ "RefreshAllVoxelInvokers", &UVoxelInvokerComponentBase::execRefreshAllVoxelInvokers },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UVoxelInvokerComponentBase;
UClass* UVoxelInvokerComponentBase::GetPrivateStaticClass()
{
	using TClass = UVoxelInvokerComponentBase;
	if (!Z_Registration_Info_UClass_UVoxelInvokerComponentBase.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("VoxelInvokerComponentBase"),
			Z_Registration_Info_UClass_UVoxelInvokerComponentBase.InnerSingleton,
			StaticRegisterNativesUVoxelInvokerComponentBase,
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
	return Z_Registration_Info_UClass_UVoxelInvokerComponentBase.InnerSingleton;
}
UClass* Z_Construct_UClass_UVoxelInvokerComponentBase_NoRegister()
{
	return UVoxelInvokerComponentBase::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UVoxelInvokerComponentBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Voxel" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Voxel Invokers are used to configure the voxel world LOD, collisions and navmesh\n" },
#endif
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "VoxelComponents/VoxelInvokerComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/VoxelComponents/VoxelInvokerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Voxel Invokers are used to configure the voxel world LOD, collisions and navmesh" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseForEvents_MetaData[] = {
		{ "Category", "Voxel Invoker|Events" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Whether or not this invoker will be used to trigger voxel events\n// Example of voxel events include:\n// - foliage spawning\n// - foliage collisions\n// - manually bound events\n" },
#endif
		{ "ModuleRelativePath", "Public/VoxelComponents/VoxelInvokerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether or not this invoker will be used to trigger voxel events\nExample of voxel events include:\n- foliage spawning\n- foliage collisions\n- manually bound events" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseForPriorities_MetaData[] = {
		{ "Category", "Voxel Invoker|Priority" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Whether to use to compute the tasks priorities\n// If true, the task priorities will be higher if they are closer to this\n" },
#endif
		{ "ModuleRelativePath", "Public/VoxelComponents/VoxelInvokerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether to use to compute the tasks priorities\nIf true, the task priorities will be higher if they are closer to this" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bStartsEnabled_MetaData[] = {
		{ "Category", "Voxel Invoker" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Whether to enable the invoker when spawned\n// If not, you'll need to call EnableInvoker\n" },
#endif
		{ "ModuleRelativePath", "Public/VoxelComponents/VoxelInvokerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether to enable the invoker when spawned\nIf not, you'll need to call EnableInvoker" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_bUseForEvents_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseForEvents;
	static void NewProp_bUseForPriorities_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseForPriorities;
	static void NewProp_bStartsEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bStartsEnabled;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UVoxelInvokerComponentBase_DisableInvoker, "DisableInvoker" }, // 3876462669
		{ &Z_Construct_UFunction_UVoxelInvokerComponentBase_EnableInvoker, "EnableInvoker" }, // 3060404164
		{ &Z_Construct_UFunction_UVoxelInvokerComponentBase_GetInvokerSettings, "GetInvokerSettings" }, // 2461869680
		{ &Z_Construct_UFunction_UVoxelInvokerComponentBase_GetInvokerVoxelPosition, "GetInvokerVoxelPosition" }, // 2623966350
		{ &Z_Construct_UFunction_UVoxelInvokerComponentBase_IsInvokerEnabled, "IsInvokerEnabled" }, // 1106984921
		{ &Z_Construct_UFunction_UVoxelInvokerComponentBase_IsLocalInvoker, "IsLocalInvoker" }, // 4071274695
		{ &Z_Construct_UFunction_UVoxelInvokerComponentBase_RefreshAllVoxelInvokers, "RefreshAllVoxelInvokers" }, // 3328130646
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelInvokerComponentBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UVoxelInvokerComponentBase_Statics::NewProp_bUseForEvents_SetBit(void* Obj)
{
	((UVoxelInvokerComponentBase*)Obj)->bUseForEvents = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVoxelInvokerComponentBase_Statics::NewProp_bUseForEvents = { "bUseForEvents", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UVoxelInvokerComponentBase), &Z_Construct_UClass_UVoxelInvokerComponentBase_Statics::NewProp_bUseForEvents_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseForEvents_MetaData), NewProp_bUseForEvents_MetaData) };
void Z_Construct_UClass_UVoxelInvokerComponentBase_Statics::NewProp_bUseForPriorities_SetBit(void* Obj)
{
	((UVoxelInvokerComponentBase*)Obj)->bUseForPriorities = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVoxelInvokerComponentBase_Statics::NewProp_bUseForPriorities = { "bUseForPriorities", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UVoxelInvokerComponentBase), &Z_Construct_UClass_UVoxelInvokerComponentBase_Statics::NewProp_bUseForPriorities_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseForPriorities_MetaData), NewProp_bUseForPriorities_MetaData) };
void Z_Construct_UClass_UVoxelInvokerComponentBase_Statics::NewProp_bStartsEnabled_SetBit(void* Obj)
{
	((UVoxelInvokerComponentBase*)Obj)->bStartsEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVoxelInvokerComponentBase_Statics::NewProp_bStartsEnabled = { "bStartsEnabled", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UVoxelInvokerComponentBase), &Z_Construct_UClass_UVoxelInvokerComponentBase_Statics::NewProp_bStartsEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bStartsEnabled_MetaData), NewProp_bStartsEnabled_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelInvokerComponentBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelInvokerComponentBase_Statics::NewProp_bUseForEvents,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelInvokerComponentBase_Statics::NewProp_bUseForPriorities,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelInvokerComponentBase_Statics::NewProp_bStartsEnabled,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelInvokerComponentBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UVoxelInvokerComponentBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USceneComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelInvokerComponentBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelInvokerComponentBase_Statics::ClassParams = {
	&UVoxelInvokerComponentBase::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UVoxelInvokerComponentBase_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelInvokerComponentBase_Statics::PropPointers),
	0,
	0x00B000A5u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelInvokerComponentBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UVoxelInvokerComponentBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVoxelInvokerComponentBase()
{
	if (!Z_Registration_Info_UClass_UVoxelInvokerComponentBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelInvokerComponentBase.OuterSingleton, Z_Construct_UClass_UVoxelInvokerComponentBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVoxelInvokerComponentBase.OuterSingleton;
}
UVoxelInvokerComponentBase::UVoxelInvokerComponentBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelInvokerComponentBase);
UVoxelInvokerComponentBase::~UVoxelInvokerComponentBase() {}
// ********** End Class UVoxelInvokerComponentBase *************************************************

// ********** Begin Class UVoxelSimpleInvokerComponent Function GetInvokerGlobalPosition ***********
struct VoxelSimpleInvokerComponent_eventGetInvokerGlobalPosition_Parms
{
	FVector ReturnValue;

	/** Constructor, initializes return property only **/
	VoxelSimpleInvokerComponent_eventGetInvokerGlobalPosition_Parms()
		: ReturnValue(ForceInit)
	{
	}
};
static FName NAME_UVoxelSimpleInvokerComponent_GetInvokerGlobalPosition = FName(TEXT("GetInvokerGlobalPosition"));
FVector UVoxelSimpleInvokerComponent::GetInvokerGlobalPosition() const
{
	UFunction* Func = FindFunctionChecked(NAME_UVoxelSimpleInvokerComponent_GetInvokerGlobalPosition);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		VoxelSimpleInvokerComponent_eventGetInvokerGlobalPosition_Parms Parms;
		const_cast<UVoxelSimpleInvokerComponent*>(this)->ProcessEvent(Func,&Parms);
		return Parms.ReturnValue;
	}
	else
	{
		return const_cast<UVoxelSimpleInvokerComponent*>(this)->GetInvokerGlobalPosition_Implementation();
	}
}
struct Z_Construct_UFunction_UVoxelSimpleInvokerComponent_GetInvokerGlobalPosition_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Voxel|Invoker" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// VoxelSimpleInvokerComponent's GetInvokerVoxelPosition and GetInvokerSettings functions are calling GetInvokerGlobalPosition to find the global position of the invoker\n// Defaults to GetComponentPosition\n" },
#endif
		{ "ModuleRelativePath", "Public/VoxelComponents/VoxelInvokerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "VoxelSimpleInvokerComponent's GetInvokerVoxelPosition and GetInvokerSettings functions are calling GetInvokerGlobalPosition to find the global position of the invoker\nDefaults to GetComponentPosition" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSimpleInvokerComponent_GetInvokerGlobalPosition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelSimpleInvokerComponent_eventGetInvokerGlobalPosition_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelSimpleInvokerComponent_GetInvokerGlobalPosition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSimpleInvokerComponent_GetInvokerGlobalPosition_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSimpleInvokerComponent_GetInvokerGlobalPosition_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelSimpleInvokerComponent_GetInvokerGlobalPosition_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelSimpleInvokerComponent, nullptr, "GetInvokerGlobalPosition", Z_Construct_UFunction_UVoxelSimpleInvokerComponent_GetInvokerGlobalPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSimpleInvokerComponent_GetInvokerGlobalPosition_Statics::PropPointers), sizeof(VoxelSimpleInvokerComponent_eventGetInvokerGlobalPosition_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48820C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSimpleInvokerComponent_GetInvokerGlobalPosition_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelSimpleInvokerComponent_GetInvokerGlobalPosition_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(VoxelSimpleInvokerComponent_eventGetInvokerGlobalPosition_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVoxelSimpleInvokerComponent_GetInvokerGlobalPosition()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelSimpleInvokerComponent_GetInvokerGlobalPosition_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelSimpleInvokerComponent::execGetInvokerGlobalPosition)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=P_THIS->GetInvokerGlobalPosition_Implementation();
	P_NATIVE_END;
}
// ********** End Class UVoxelSimpleInvokerComponent Function GetInvokerGlobalPosition *************

// ********** Begin Class UVoxelSimpleInvokerComponent *********************************************
void UVoxelSimpleInvokerComponent::StaticRegisterNativesUVoxelSimpleInvokerComponent()
{
	UClass* Class = UVoxelSimpleInvokerComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetInvokerGlobalPosition", &UVoxelSimpleInvokerComponent::execGetInvokerGlobalPosition },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UVoxelSimpleInvokerComponent;
UClass* UVoxelSimpleInvokerComponent::GetPrivateStaticClass()
{
	using TClass = UVoxelSimpleInvokerComponent;
	if (!Z_Registration_Info_UClass_UVoxelSimpleInvokerComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("VoxelSimpleInvokerComponent"),
			Z_Registration_Info_UClass_UVoxelSimpleInvokerComponent.InnerSingleton,
			StaticRegisterNativesUVoxelSimpleInvokerComponent,
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
	return Z_Registration_Info_UClass_UVoxelSimpleInvokerComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_UVoxelSimpleInvokerComponent_NoRegister()
{
	return UVoxelSimpleInvokerComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UVoxelSimpleInvokerComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Voxel" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Voxel Invokers are used to configure the voxel world LOD, collisions and navmesh\n// Simple position based invoker\n" },
#endif
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "VoxelComponents/VoxelInvokerComponent.h" },
		{ "ModuleRelativePath", "Public/VoxelComponents/VoxelInvokerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Voxel Invokers are used to configure the voxel world LOD, collisions and navmesh\nSimple position based invoker" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseForLOD_MetaData[] = {
		{ "Category", "Voxel Invoker|LOD" },
		{ "ModuleRelativePath", "Public/VoxelComponents/VoxelInvokerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LODToSet_MetaData[] = {
		{ "Category", "Voxel Invoker|LOD" },
		{ "ClampMax", "26" },
		{ "ClampMin", "0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// You should leave this to 0\n" },
#endif
		{ "DisplayName", "LOD to Set" },
		{ "EditCondition", "bUseForLOD" },
		{ "ModuleRelativePath", "Public/VoxelComponents/VoxelInvokerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "You should leave this to 0" },
#endif
		{ "UIMax", "26" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LODRange_MetaData[] = {
		{ "Category", "Voxel Invoker|LOD" },
		{ "ClampMin", "0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// In cm. Will set LODToSet around the invoker on this distance\n" },
#endif
		{ "DisplayName", "LOD Range" },
		{ "EditCondition", "bUseForLOD" },
		{ "ModuleRelativePath", "Public/VoxelComponents/VoxelInvokerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "In cm. Will set LODToSet around the invoker on this distance" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseForCollisions_MetaData[] = {
		{ "Category", "Voxel Invoker|Collisions" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Will enable high res collisions around the invoker\n" },
#endif
		{ "ModuleRelativePath", "Public/VoxelComponents/VoxelInvokerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Will enable high res collisions around the invoker" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollisionsRange_MetaData[] = {
		{ "Category", "Voxel Invoker|Collisions" },
		{ "ClampMin", "0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// In cm. Will enable high res collisions on chunks under this distance from this invoker\n" },
#endif
		{ "EditCondition", "bUseForCollisions" },
		{ "ModuleRelativePath", "Public/VoxelComponents/VoxelInvokerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "In cm. Will enable high res collisions on chunks under this distance from this invoker" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseForNavmesh_MetaData[] = {
		{ "Category", "Voxel Invoker|Navmesh" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Will enable high res navmesh around the invoker\n" },
#endif
		{ "ModuleRelativePath", "Public/VoxelComponents/VoxelInvokerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Will enable high res navmesh around the invoker" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NavmeshRange_MetaData[] = {
		{ "Category", "Voxel Invoker|Navmesh" },
		{ "ClampMin", "0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// In cm. Will enable high res navmesh on chunks under this distance from this invoker\n" },
#endif
		{ "EditCondition", "bUseForNavmesh" },
		{ "ModuleRelativePath", "Public/VoxelComponents/VoxelInvokerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "In cm. Will enable high res navmesh on chunks under this distance from this invoker" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_bUseForLOD_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseForLOD;
	static const UECodeGen_Private::FIntPropertyParams NewProp_LODToSet;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LODRange;
	static void NewProp_bUseForCollisions_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseForCollisions;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CollisionsRange;
	static void NewProp_bUseForNavmesh_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseForNavmesh;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NavmeshRange;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UVoxelSimpleInvokerComponent_GetInvokerGlobalPosition, "GetInvokerGlobalPosition" }, // 1026228621
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelSimpleInvokerComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UVoxelSimpleInvokerComponent_Statics::NewProp_bUseForLOD_SetBit(void* Obj)
{
	((UVoxelSimpleInvokerComponent*)Obj)->bUseForLOD = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVoxelSimpleInvokerComponent_Statics::NewProp_bUseForLOD = { "bUseForLOD", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UVoxelSimpleInvokerComponent), &Z_Construct_UClass_UVoxelSimpleInvokerComponent_Statics::NewProp_bUseForLOD_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseForLOD_MetaData), NewProp_bUseForLOD_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UVoxelSimpleInvokerComponent_Statics::NewProp_LODToSet = { "LODToSet", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelSimpleInvokerComponent, LODToSet), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LODToSet_MetaData), NewProp_LODToSet_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVoxelSimpleInvokerComponent_Statics::NewProp_LODRange = { "LODRange", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelSimpleInvokerComponent, LODRange), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LODRange_MetaData), NewProp_LODRange_MetaData) };
void Z_Construct_UClass_UVoxelSimpleInvokerComponent_Statics::NewProp_bUseForCollisions_SetBit(void* Obj)
{
	((UVoxelSimpleInvokerComponent*)Obj)->bUseForCollisions = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVoxelSimpleInvokerComponent_Statics::NewProp_bUseForCollisions = { "bUseForCollisions", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UVoxelSimpleInvokerComponent), &Z_Construct_UClass_UVoxelSimpleInvokerComponent_Statics::NewProp_bUseForCollisions_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseForCollisions_MetaData), NewProp_bUseForCollisions_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVoxelSimpleInvokerComponent_Statics::NewProp_CollisionsRange = { "CollisionsRange", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelSimpleInvokerComponent, CollisionsRange), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollisionsRange_MetaData), NewProp_CollisionsRange_MetaData) };
void Z_Construct_UClass_UVoxelSimpleInvokerComponent_Statics::NewProp_bUseForNavmesh_SetBit(void* Obj)
{
	((UVoxelSimpleInvokerComponent*)Obj)->bUseForNavmesh = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVoxelSimpleInvokerComponent_Statics::NewProp_bUseForNavmesh = { "bUseForNavmesh", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UVoxelSimpleInvokerComponent), &Z_Construct_UClass_UVoxelSimpleInvokerComponent_Statics::NewProp_bUseForNavmesh_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseForNavmesh_MetaData), NewProp_bUseForNavmesh_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVoxelSimpleInvokerComponent_Statics::NewProp_NavmeshRange = { "NavmeshRange", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelSimpleInvokerComponent, NavmeshRange), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NavmeshRange_MetaData), NewProp_NavmeshRange_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelSimpleInvokerComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelSimpleInvokerComponent_Statics::NewProp_bUseForLOD,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelSimpleInvokerComponent_Statics::NewProp_LODToSet,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelSimpleInvokerComponent_Statics::NewProp_LODRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelSimpleInvokerComponent_Statics::NewProp_bUseForCollisions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelSimpleInvokerComponent_Statics::NewProp_CollisionsRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelSimpleInvokerComponent_Statics::NewProp_bUseForNavmesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelSimpleInvokerComponent_Statics::NewProp_NavmeshRange,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelSimpleInvokerComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UVoxelSimpleInvokerComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UVoxelInvokerComponentBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelSimpleInvokerComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelSimpleInvokerComponent_Statics::ClassParams = {
	&UVoxelSimpleInvokerComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UVoxelSimpleInvokerComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelSimpleInvokerComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelSimpleInvokerComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UVoxelSimpleInvokerComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVoxelSimpleInvokerComponent()
{
	if (!Z_Registration_Info_UClass_UVoxelSimpleInvokerComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelSimpleInvokerComponent.OuterSingleton, Z_Construct_UClass_UVoxelSimpleInvokerComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVoxelSimpleInvokerComponent.OuterSingleton;
}
UVoxelSimpleInvokerComponent::UVoxelSimpleInvokerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelSimpleInvokerComponent);
UVoxelSimpleInvokerComponent::~UVoxelSimpleInvokerComponent() {}
// ********** End Class UVoxelSimpleInvokerComponent ***********************************************

// ********** Begin Class UVoxelInvokerWithPredictionComponent *************************************
void UVoxelInvokerWithPredictionComponent::StaticRegisterNativesUVoxelInvokerWithPredictionComponent()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UVoxelInvokerWithPredictionComponent;
UClass* UVoxelInvokerWithPredictionComponent::GetPrivateStaticClass()
{
	using TClass = UVoxelInvokerWithPredictionComponent;
	if (!Z_Registration_Info_UClass_UVoxelInvokerWithPredictionComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("VoxelInvokerWithPredictionComponent"),
			Z_Registration_Info_UClass_UVoxelInvokerWithPredictionComponent.InnerSingleton,
			StaticRegisterNativesUVoxelInvokerWithPredictionComponent,
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
	return Z_Registration_Info_UClass_UVoxelInvokerWithPredictionComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_UVoxelInvokerWithPredictionComponent_NoRegister()
{
	return UVoxelInvokerWithPredictionComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UVoxelInvokerWithPredictionComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Voxel" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Voxel Invokers are used to configure the voxel world LOD, collisions and navmesh\n// Same as simple invoker, but optionally use the velocity to predict the position\n" },
#endif
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "VoxelComponents/VoxelInvokerComponent.h" },
		{ "ModuleRelativePath", "Public/VoxelComponents/VoxelInvokerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Voxel Invokers are used to configure the voxel world LOD, collisions and navmesh\nSame as simple invoker, but optionally use the velocity to predict the position" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnablePrediction_MetaData[] = {
		{ "Category", "Voxel Invoker|Prediction" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Will use the speed of the owner to determine the position to use\n" },
#endif
		{ "ModuleRelativePath", "Public/VoxelComponents/VoxelInvokerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Will use the speed of the owner to determine the position to use" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PredictionTime_MetaData[] = {
		{ "Category", "Voxel Invoker|Prediction" },
		{ "ClampMin", "0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Will multiply the velocity by this to get the new position\n" },
#endif
		{ "EditCondition", "bEnablePrediction" },
		{ "ModuleRelativePath", "Public/VoxelComponents/VoxelInvokerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Will multiply the velocity by this to get the new position" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_bEnablePrediction_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnablePrediction;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PredictionTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelInvokerWithPredictionComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UVoxelInvokerWithPredictionComponent_Statics::NewProp_bEnablePrediction_SetBit(void* Obj)
{
	((UVoxelInvokerWithPredictionComponent*)Obj)->bEnablePrediction = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVoxelInvokerWithPredictionComponent_Statics::NewProp_bEnablePrediction = { "bEnablePrediction", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UVoxelInvokerWithPredictionComponent), &Z_Construct_UClass_UVoxelInvokerWithPredictionComponent_Statics::NewProp_bEnablePrediction_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnablePrediction_MetaData), NewProp_bEnablePrediction_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVoxelInvokerWithPredictionComponent_Statics::NewProp_PredictionTime = { "PredictionTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelInvokerWithPredictionComponent, PredictionTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PredictionTime_MetaData), NewProp_PredictionTime_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelInvokerWithPredictionComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelInvokerWithPredictionComponent_Statics::NewProp_bEnablePrediction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelInvokerWithPredictionComponent_Statics::NewProp_PredictionTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelInvokerWithPredictionComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UVoxelInvokerWithPredictionComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UVoxelSimpleInvokerComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelInvokerWithPredictionComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelInvokerWithPredictionComponent_Statics::ClassParams = {
	&UVoxelInvokerWithPredictionComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UVoxelInvokerWithPredictionComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelInvokerWithPredictionComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelInvokerWithPredictionComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UVoxelInvokerWithPredictionComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVoxelInvokerWithPredictionComponent()
{
	if (!Z_Registration_Info_UClass_UVoxelInvokerWithPredictionComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelInvokerWithPredictionComponent.OuterSingleton, Z_Construct_UClass_UVoxelInvokerWithPredictionComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVoxelInvokerWithPredictionComponent.OuterSingleton;
}
UVoxelInvokerWithPredictionComponent::UVoxelInvokerWithPredictionComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelInvokerWithPredictionComponent);
UVoxelInvokerWithPredictionComponent::~UVoxelInvokerWithPredictionComponent() {}
// ********** End Class UVoxelInvokerWithPredictionComponent ***************************************

// ********** Begin Class UVoxelInvokerAutoCameraComponent *****************************************
void UVoxelInvokerAutoCameraComponent::StaticRegisterNativesUVoxelInvokerAutoCameraComponent()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UVoxelInvokerAutoCameraComponent;
UClass* UVoxelInvokerAutoCameraComponent::GetPrivateStaticClass()
{
	using TClass = UVoxelInvokerAutoCameraComponent;
	if (!Z_Registration_Info_UClass_UVoxelInvokerAutoCameraComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("VoxelInvokerAutoCameraComponent"),
			Z_Registration_Info_UClass_UVoxelInvokerAutoCameraComponent.InnerSingleton,
			StaticRegisterNativesUVoxelInvokerAutoCameraComponent,
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
	return Z_Registration_Info_UClass_UVoxelInvokerAutoCameraComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_UVoxelInvokerAutoCameraComponent_NoRegister()
{
	return UVoxelInvokerAutoCameraComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UVoxelInvokerAutoCameraComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Voxel" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Voxel Invokers are used to configure the voxel world LOD, collisions and navmesh\n// Will find the camera and use it to set its position\n" },
#endif
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "VoxelComponents/VoxelInvokerComponent.h" },
		{ "ModuleRelativePath", "Public/VoxelComponents/VoxelInvokerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Voxel Invokers are used to configure the voxel world LOD, collisions and navmesh\nWill find the camera and use it to set its position" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelInvokerAutoCameraComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UVoxelInvokerAutoCameraComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UVoxelSimpleInvokerComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelInvokerAutoCameraComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelInvokerAutoCameraComponent_Statics::ClassParams = {
	&UVoxelInvokerAutoCameraComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelInvokerAutoCameraComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UVoxelInvokerAutoCameraComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVoxelInvokerAutoCameraComponent()
{
	if (!Z_Registration_Info_UClass_UVoxelInvokerAutoCameraComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelInvokerAutoCameraComponent.OuterSingleton, Z_Construct_UClass_UVoxelInvokerAutoCameraComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVoxelInvokerAutoCameraComponent.OuterSingleton;
}
UVoxelInvokerAutoCameraComponent::UVoxelInvokerAutoCameraComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelInvokerAutoCameraComponent);
UVoxelInvokerAutoCameraComponent::~UVoxelInvokerAutoCameraComponent() {}
// ********** End Class UVoxelInvokerAutoCameraComponent *******************************************

// ********** Begin Class UVoxelLODVolumeInvokerComponent ******************************************
void UVoxelLODVolumeInvokerComponent::StaticRegisterNativesUVoxelLODVolumeInvokerComponent()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UVoxelLODVolumeInvokerComponent;
UClass* UVoxelLODVolumeInvokerComponent::GetPrivateStaticClass()
{
	using TClass = UVoxelLODVolumeInvokerComponent;
	if (!Z_Registration_Info_UClass_UVoxelLODVolumeInvokerComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("VoxelLODVolumeInvokerComponent"),
			Z_Registration_Info_UClass_UVoxelLODVolumeInvokerComponent.InnerSingleton,
			StaticRegisterNativesUVoxelLODVolumeInvokerComponent,
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
	return Z_Registration_Info_UClass_UVoxelLODVolumeInvokerComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_UVoxelLODVolumeInvokerComponent_NoRegister()
{
	return UVoxelLODVolumeInvokerComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UVoxelLODVolumeInvokerComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "VoxelComponents/VoxelInvokerComponent.h" },
		{ "ModuleRelativePath", "Public/VoxelComponents/VoxelInvokerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseForLOD_MetaData[] = {
		{ "Category", "Voxel Invoker|Volume" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Will set the LOD in the volume to a fixed value\n// Note that the displayed LOD might have a higher resolution than this if another invoker is close\n" },
#endif
		{ "DisplayName", "Use for LOD" },
		{ "ModuleRelativePath", "Public/VoxelComponents/VoxelInvokerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Will set the LOD in the volume to a fixed value\nNote that the displayed LOD might have a higher resolution than this if another invoker is close" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LODToSet_MetaData[] = {
		{ "Category", "Voxel Invoker|Volume" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Will set the LOD in the volume to a fixed value\n// Note that the displayed LOD might have a higher resolution than this if another invoker is close\n" },
#endif
		{ "DisplayName", "LOD to Set" },
		{ "EditCondition", "bUseForLOD" },
		{ "ModuleRelativePath", "Public/VoxelComponents/VoxelInvokerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Will set the LOD in the volume to a fixed value\nNote that the displayed LOD might have a higher resolution than this if another invoker is close" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseForCollisions_MetaData[] = {
		{ "Category", "Voxel Invoker|Volume" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Will compute high res collision in the volume\n// Note that collisions might still be computed by the voxel world even if this is false\n" },
#endif
		{ "ModuleRelativePath", "Public/VoxelComponents/VoxelInvokerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Will compute high res collision in the volume\nNote that collisions might still be computed by the voxel world even if this is false" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseForNavmesh_MetaData[] = {
		{ "Category", "Voxel Invoker|Volume" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Will compute high res navmesh in the volume\n// Note that navmesh might still be computed by the voxel world even if this is false\n" },
#endif
		{ "ModuleRelativePath", "Public/VoxelComponents/VoxelInvokerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Will compute high res navmesh in the volume\nNote that navmesh might still be computed by the voxel world even if this is false" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_bUseForLOD_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseForLOD;
	static const UECodeGen_Private::FIntPropertyParams NewProp_LODToSet;
	static void NewProp_bUseForCollisions_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseForCollisions;
	static void NewProp_bUseForNavmesh_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseForNavmesh;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelLODVolumeInvokerComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UVoxelLODVolumeInvokerComponent_Statics::NewProp_bUseForLOD_SetBit(void* Obj)
{
	((UVoxelLODVolumeInvokerComponent*)Obj)->bUseForLOD = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVoxelLODVolumeInvokerComponent_Statics::NewProp_bUseForLOD = { "bUseForLOD", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UVoxelLODVolumeInvokerComponent), &Z_Construct_UClass_UVoxelLODVolumeInvokerComponent_Statics::NewProp_bUseForLOD_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseForLOD_MetaData), NewProp_bUseForLOD_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UVoxelLODVolumeInvokerComponent_Statics::NewProp_LODToSet = { "LODToSet", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelLODVolumeInvokerComponent, LODToSet), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LODToSet_MetaData), NewProp_LODToSet_MetaData) };
void Z_Construct_UClass_UVoxelLODVolumeInvokerComponent_Statics::NewProp_bUseForCollisions_SetBit(void* Obj)
{
	((UVoxelLODVolumeInvokerComponent*)Obj)->bUseForCollisions = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVoxelLODVolumeInvokerComponent_Statics::NewProp_bUseForCollisions = { "bUseForCollisions", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UVoxelLODVolumeInvokerComponent), &Z_Construct_UClass_UVoxelLODVolumeInvokerComponent_Statics::NewProp_bUseForCollisions_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseForCollisions_MetaData), NewProp_bUseForCollisions_MetaData) };
void Z_Construct_UClass_UVoxelLODVolumeInvokerComponent_Statics::NewProp_bUseForNavmesh_SetBit(void* Obj)
{
	((UVoxelLODVolumeInvokerComponent*)Obj)->bUseForNavmesh = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVoxelLODVolumeInvokerComponent_Statics::NewProp_bUseForNavmesh = { "bUseForNavmesh", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UVoxelLODVolumeInvokerComponent), &Z_Construct_UClass_UVoxelLODVolumeInvokerComponent_Statics::NewProp_bUseForNavmesh_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseForNavmesh_MetaData), NewProp_bUseForNavmesh_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelLODVolumeInvokerComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelLODVolumeInvokerComponent_Statics::NewProp_bUseForLOD,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelLODVolumeInvokerComponent_Statics::NewProp_LODToSet,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelLODVolumeInvokerComponent_Statics::NewProp_bUseForCollisions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelLODVolumeInvokerComponent_Statics::NewProp_bUseForNavmesh,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelLODVolumeInvokerComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UVoxelLODVolumeInvokerComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UVoxelInvokerComponentBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelLODVolumeInvokerComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelLODVolumeInvokerComponent_Statics::ClassParams = {
	&UVoxelLODVolumeInvokerComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UVoxelLODVolumeInvokerComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelLODVolumeInvokerComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelLODVolumeInvokerComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UVoxelLODVolumeInvokerComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVoxelLODVolumeInvokerComponent()
{
	if (!Z_Registration_Info_UClass_UVoxelLODVolumeInvokerComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelLODVolumeInvokerComponent.OuterSingleton, Z_Construct_UClass_UVoxelLODVolumeInvokerComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVoxelLODVolumeInvokerComponent.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelLODVolumeInvokerComponent);
UVoxelLODVolumeInvokerComponent::~UVoxelLODVolumeInvokerComponent() {}
// ********** End Class UVoxelLODVolumeInvokerComponent ********************************************

// ********** Begin Class AVoxelLODVolume **********************************************************
void AVoxelLODVolume::StaticRegisterNativesAVoxelLODVolume()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AVoxelLODVolume;
UClass* AVoxelLODVolume::GetPrivateStaticClass()
{
	using TClass = AVoxelLODVolume;
	if (!Z_Registration_Info_UClass_AVoxelLODVolume.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("VoxelLODVolume"),
			Z_Registration_Info_UClass_AVoxelLODVolume.InnerSingleton,
			StaticRegisterNativesAVoxelLODVolume,
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
	return Z_Registration_Info_UClass_AVoxelLODVolume.InnerSingleton;
}
UClass* Z_Construct_UClass_AVoxelLODVolume_NoRegister()
{
	return AVoxelLODVolume::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AVoxelLODVolume_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Volume with a voxel invoker\n// Sets the LOD of the voxels in a volume, or always enable collision/navmesh in a volume\n" },
#endif
		{ "DisplayName", "Voxel LOD Volume" },
		{ "HideCategories", "Advanced Attachment Collision Volume Brush Physics Object Blueprint Display Rendering Physics Input" },
		{ "IncludePath", "VoxelComponents/VoxelInvokerComponent.h" },
		{ "ModuleRelativePath", "Public/VoxelComponents/VoxelInvokerComponent.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Volume with a voxel invoker\nSets the LOD of the voxels in a volume, or always enable collision/navmesh in a volume" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InvokerComponent_MetaData[] = {
		{ "Category", "Voxel" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/VoxelComponents/VoxelInvokerComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InvokerComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AVoxelLODVolume>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVoxelLODVolume_Statics::NewProp_InvokerComponent = { "InvokerComponent", nullptr, (EPropertyFlags)0x01140000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVoxelLODVolume, InvokerComponent), Z_Construct_UClass_UVoxelLODVolumeInvokerComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InvokerComponent_MetaData), NewProp_InvokerComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AVoxelLODVolume_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelLODVolume_Statics::NewProp_InvokerComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AVoxelLODVolume_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AVoxelLODVolume_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AVolume,
	(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AVoxelLODVolume_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AVoxelLODVolume_Statics::ClassParams = {
	&AVoxelLODVolume::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AVoxelLODVolume_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AVoxelLODVolume_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AVoxelLODVolume_Statics::Class_MetaDataParams), Z_Construct_UClass_AVoxelLODVolume_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AVoxelLODVolume()
{
	if (!Z_Registration_Info_UClass_AVoxelLODVolume.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AVoxelLODVolume.OuterSingleton, Z_Construct_UClass_AVoxelLODVolume_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AVoxelLODVolume.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AVoxelLODVolume);
AVoxelLODVolume::~AVoxelLODVolume() {}
// ********** End Class AVoxelLODVolume ************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelComponents_VoxelInvokerComponent_h__Script_Voxel_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UVoxelInvokerComponentBase, UVoxelInvokerComponentBase::StaticClass, TEXT("UVoxelInvokerComponentBase"), &Z_Registration_Info_UClass_UVoxelInvokerComponentBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelInvokerComponentBase), 1168252948U) },
		{ Z_Construct_UClass_UVoxelSimpleInvokerComponent, UVoxelSimpleInvokerComponent::StaticClass, TEXT("UVoxelSimpleInvokerComponent"), &Z_Registration_Info_UClass_UVoxelSimpleInvokerComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelSimpleInvokerComponent), 3244965261U) },
		{ Z_Construct_UClass_UVoxelInvokerWithPredictionComponent, UVoxelInvokerWithPredictionComponent::StaticClass, TEXT("UVoxelInvokerWithPredictionComponent"), &Z_Registration_Info_UClass_UVoxelInvokerWithPredictionComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelInvokerWithPredictionComponent), 182811831U) },
		{ Z_Construct_UClass_UVoxelInvokerAutoCameraComponent, UVoxelInvokerAutoCameraComponent::StaticClass, TEXT("UVoxelInvokerAutoCameraComponent"), &Z_Registration_Info_UClass_UVoxelInvokerAutoCameraComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelInvokerAutoCameraComponent), 1744774229U) },
		{ Z_Construct_UClass_UVoxelLODVolumeInvokerComponent, UVoxelLODVolumeInvokerComponent::StaticClass, TEXT("UVoxelLODVolumeInvokerComponent"), &Z_Registration_Info_UClass_UVoxelLODVolumeInvokerComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelLODVolumeInvokerComponent), 3860430700U) },
		{ Z_Construct_UClass_AVoxelLODVolume, AVoxelLODVolume::StaticClass, TEXT("AVoxelLODVolume"), &Z_Registration_Info_UClass_AVoxelLODVolume, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AVoxelLODVolume), 2985802629U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelComponents_VoxelInvokerComponent_h__Script_Voxel_802129700(TEXT("/Script/Voxel"),
	Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelComponents_VoxelInvokerComponent_h__Script_Voxel_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelComponents_VoxelInvokerComponent_h__Script_Voxel_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
