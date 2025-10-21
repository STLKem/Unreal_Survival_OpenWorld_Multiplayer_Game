// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VoxelShaders/VoxelErosion.h"
#include "VoxelTexture.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeVoxelErosion() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
UPackage* Z_Construct_UPackage__Script_Voxel();
VOXEL_API UClass* Z_Construct_UClass_UVoxelErosion();
VOXEL_API UClass* Z_Construct_UClass_UVoxelErosion_NoRegister();
VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelFloatTexture();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UVoxelErosion Function GetSedimentTexture ********************************
struct Z_Construct_UFunction_UVoxelErosion_GetSedimentTexture_Statics
{
	struct VoxelErosion_eventGetSedimentTexture_Parms
	{
		FVoxelFloatTexture ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Voxel|Erosion" },
		{ "ModuleRelativePath", "Public/VoxelShaders/VoxelErosion.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelErosion_GetSedimentTexture_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelErosion_eventGetSedimentTexture_Parms, ReturnValue), Z_Construct_UScriptStruct_FVoxelFloatTexture, METADATA_PARAMS(0, nullptr) }; // 369089072
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelErosion_GetSedimentTexture_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelErosion_GetSedimentTexture_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelErosion_GetSedimentTexture_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelErosion_GetSedimentTexture_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelErosion, nullptr, "GetSedimentTexture", Z_Construct_UFunction_UVoxelErosion_GetSedimentTexture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelErosion_GetSedimentTexture_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVoxelErosion_GetSedimentTexture_Statics::VoxelErosion_eventGetSedimentTexture_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelErosion_GetSedimentTexture_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelErosion_GetSedimentTexture_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVoxelErosion_GetSedimentTexture_Statics::VoxelErosion_eventGetSedimentTexture_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVoxelErosion_GetSedimentTexture()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelErosion_GetSedimentTexture_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelErosion::execGetSedimentTexture)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVoxelFloatTexture*)Z_Param__Result=P_THIS->GetSedimentTexture();
	P_NATIVE_END;
}
// ********** End Class UVoxelErosion Function GetSedimentTexture **********************************

// ********** Begin Class UVoxelErosion Function GetTerrainHeightTexture ***************************
struct Z_Construct_UFunction_UVoxelErosion_GetTerrainHeightTexture_Statics
{
	struct VoxelErosion_eventGetTerrainHeightTexture_Parms
	{
		FVoxelFloatTexture ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Voxel|Erosion" },
		{ "ModuleRelativePath", "Public/VoxelShaders/VoxelErosion.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelErosion_GetTerrainHeightTexture_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelErosion_eventGetTerrainHeightTexture_Parms, ReturnValue), Z_Construct_UScriptStruct_FVoxelFloatTexture, METADATA_PARAMS(0, nullptr) }; // 369089072
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelErosion_GetTerrainHeightTexture_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelErosion_GetTerrainHeightTexture_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelErosion_GetTerrainHeightTexture_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelErosion_GetTerrainHeightTexture_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelErosion, nullptr, "GetTerrainHeightTexture", Z_Construct_UFunction_UVoxelErosion_GetTerrainHeightTexture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelErosion_GetTerrainHeightTexture_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVoxelErosion_GetTerrainHeightTexture_Statics::VoxelErosion_eventGetTerrainHeightTexture_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelErosion_GetTerrainHeightTexture_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelErosion_GetTerrainHeightTexture_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVoxelErosion_GetTerrainHeightTexture_Statics::VoxelErosion_eventGetTerrainHeightTexture_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVoxelErosion_GetTerrainHeightTexture()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelErosion_GetTerrainHeightTexture_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelErosion::execGetTerrainHeightTexture)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVoxelFloatTexture*)Z_Param__Result=P_THIS->GetTerrainHeightTexture();
	P_NATIVE_END;
}
// ********** End Class UVoxelErosion Function GetTerrainHeightTexture *****************************

// ********** Begin Class UVoxelErosion Function GetWaterHeightTexture *****************************
struct Z_Construct_UFunction_UVoxelErosion_GetWaterHeightTexture_Statics
{
	struct VoxelErosion_eventGetWaterHeightTexture_Parms
	{
		FVoxelFloatTexture ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Voxel|Erosion" },
		{ "ModuleRelativePath", "Public/VoxelShaders/VoxelErosion.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelErosion_GetWaterHeightTexture_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelErosion_eventGetWaterHeightTexture_Parms, ReturnValue), Z_Construct_UScriptStruct_FVoxelFloatTexture, METADATA_PARAMS(0, nullptr) }; // 369089072
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelErosion_GetWaterHeightTexture_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelErosion_GetWaterHeightTexture_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelErosion_GetWaterHeightTexture_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelErosion_GetWaterHeightTexture_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelErosion, nullptr, "GetWaterHeightTexture", Z_Construct_UFunction_UVoxelErosion_GetWaterHeightTexture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelErosion_GetWaterHeightTexture_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVoxelErosion_GetWaterHeightTexture_Statics::VoxelErosion_eventGetWaterHeightTexture_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelErosion_GetWaterHeightTexture_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelErosion_GetWaterHeightTexture_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVoxelErosion_GetWaterHeightTexture_Statics::VoxelErosion_eventGetWaterHeightTexture_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVoxelErosion_GetWaterHeightTexture()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelErosion_GetWaterHeightTexture_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelErosion::execGetWaterHeightTexture)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVoxelFloatTexture*)Z_Param__Result=P_THIS->GetWaterHeightTexture();
	P_NATIVE_END;
}
// ********** End Class UVoxelErosion Function GetWaterHeightTexture *******************************

// ********** Begin Class UVoxelErosion Function Initialize ****************************************
struct Z_Construct_UFunction_UVoxelErosion_Initialize_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Voxel|Erosion" },
		{ "ModuleRelativePath", "Public/VoxelShaders/VoxelErosion.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelErosion_Initialize_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelErosion, nullptr, "Initialize", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelErosion_Initialize_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelErosion_Initialize_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UVoxelErosion_Initialize()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelErosion_Initialize_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelErosion::execInitialize)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Initialize();
	P_NATIVE_END;
}
// ********** End Class UVoxelErosion Function Initialize ******************************************

// ********** Begin Class UVoxelErosion Function IsInitialized *************************************
struct Z_Construct_UFunction_UVoxelErosion_IsInitialized_Statics
{
	struct VoxelErosion_eventIsInitialized_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Voxel|Erosion" },
		{ "ModuleRelativePath", "Public/VoxelShaders/VoxelErosion.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UVoxelErosion_IsInitialized_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((VoxelErosion_eventIsInitialized_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelErosion_IsInitialized_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VoxelErosion_eventIsInitialized_Parms), &Z_Construct_UFunction_UVoxelErosion_IsInitialized_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelErosion_IsInitialized_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelErosion_IsInitialized_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelErosion_IsInitialized_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelErosion_IsInitialized_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelErosion, nullptr, "IsInitialized", Z_Construct_UFunction_UVoxelErosion_IsInitialized_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelErosion_IsInitialized_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVoxelErosion_IsInitialized_Statics::VoxelErosion_eventIsInitialized_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelErosion_IsInitialized_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelErosion_IsInitialized_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVoxelErosion_IsInitialized_Statics::VoxelErosion_eventIsInitialized_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVoxelErosion_IsInitialized()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelErosion_IsInitialized_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelErosion::execIsInitialized)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsInitialized();
	P_NATIVE_END;
}
// ********** End Class UVoxelErosion Function IsInitialized ***************************************

// ********** Begin Class UVoxelErosion Function Step **********************************************
struct Z_Construct_UFunction_UVoxelErosion_Step_Statics
{
	struct VoxelErosion_eventStep_Parms
	{
		int32 Count;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Voxel|Erosion" },
		{ "CPP_Default_Count", "10" },
		{ "ModuleRelativePath", "Public/VoxelShaders/VoxelErosion.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Count;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVoxelErosion_Step_Statics::NewProp_Count = { "Count", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelErosion_eventStep_Parms, Count), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelErosion_Step_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelErosion_Step_Statics::NewProp_Count,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelErosion_Step_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelErosion_Step_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelErosion, nullptr, "Step", Z_Construct_UFunction_UVoxelErosion_Step_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelErosion_Step_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVoxelErosion_Step_Statics::VoxelErosion_eventStep_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelErosion_Step_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelErosion_Step_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVoxelErosion_Step_Statics::VoxelErosion_eventStep_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVoxelErosion_Step()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelErosion_Step_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelErosion::execStep)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Count);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Step(Z_Param_Count);
	P_NATIVE_END;
}
// ********** End Class UVoxelErosion Function Step ************************************************

// ********** Begin Class UVoxelErosion ************************************************************
void UVoxelErosion::StaticRegisterNativesUVoxelErosion()
{
	UClass* Class = UVoxelErosion::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetSedimentTexture", &UVoxelErosion::execGetSedimentTexture },
		{ "GetTerrainHeightTexture", &UVoxelErosion::execGetTerrainHeightTexture },
		{ "GetWaterHeightTexture", &UVoxelErosion::execGetWaterHeightTexture },
		{ "Initialize", &UVoxelErosion::execInitialize },
		{ "IsInitialized", &UVoxelErosion::execIsInitialized },
		{ "Step", &UVoxelErosion::execStep },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UVoxelErosion;
UClass* UVoxelErosion::GetPrivateStaticClass()
{
	using TClass = UVoxelErosion;
	if (!Z_Registration_Info_UClass_UVoxelErosion.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("VoxelErosion"),
			Z_Registration_Info_UClass_UVoxelErosion.InnerSingleton,
			StaticRegisterNativesUVoxelErosion,
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
	return Z_Registration_Info_UClass_UVoxelErosion.InnerSingleton;
}
UClass* Z_Construct_UClass_UVoxelErosion_NoRegister()
{
	return UVoxelErosion::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UVoxelErosion_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "VoxelShaders/VoxelErosion.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/VoxelShaders/VoxelErosion.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Size_MetaData[] = {
		{ "Category", "Erosion Parameters" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Must be a multiple of 32\n" },
#endif
		{ "ModuleRelativePath", "Public/VoxelShaders/VoxelErosion.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Must be a multiple of 32" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeltaTime_MetaData[] = {
		{ "Category", "Erosion Parameters" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Time elapsed between each simulation step. Smaller = more stable, but slower\n" },
#endif
		{ "ModuleRelativePath", "Public/VoxelShaders/VoxelErosion.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Time elapsed between each simulation step. Smaller = more stable, but slower" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Scale_MetaData[] = {
		{ "Category", "Erosion Parameters" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The scale of the simulation. Should leave to default\n" },
#endif
		{ "ModuleRelativePath", "Public/VoxelShaders/VoxelErosion.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The scale of the simulation. Should leave to default" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Gravity_MetaData[] = {
		{ "Category", "Erosion Parameters" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Gravity, use to compute the speed of the water\n" },
#endif
		{ "ModuleRelativePath", "Public/VoxelShaders/VoxelErosion.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gravity, use to compute the speed of the water" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SedimentCapacity_MetaData[] = {
		{ "Category", "Erosion Parameters" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// How much sediment a volume of water can carry\n" },
#endif
		{ "ModuleRelativePath", "Public/VoxelShaders/VoxelErosion.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "How much sediment a volume of water can carry" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SedimentDissolving_MetaData[] = {
		{ "Category", "Erosion Parameters" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// How much sediment is removed from height by the water in each step\n// This controls the \"strength\" of the erosion\n" },
#endif
		{ "ModuleRelativePath", "Public/VoxelShaders/VoxelErosion.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "How much sediment is removed from height by the water in each step\nThis controls the \"strength\" of the erosion" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SedimentDeposition_MetaData[] = {
		{ "Category", "Erosion Parameters" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// How much sediment can go from the water to the height\n// This controls how far the sediments are carried\n" },
#endif
		{ "ModuleRelativePath", "Public/VoxelShaders/VoxelErosion.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "How much sediment can go from the water to the height\nThis controls how far the sediments are carried" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RainStrength_MetaData[] = {
		{ "Category", "Erosion Parameters" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Amount of water added per step\n" },
#endif
		{ "ModuleRelativePath", "Public/VoxelShaders/VoxelErosion.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Amount of water added per step" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Evaporation_MetaData[] = {
		{ "Category", "Erosion Parameters" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Controls the evaporation of the water\n" },
#endif
		{ "ModuleRelativePath", "Public/VoxelShaders/VoxelErosion.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Controls the evaporation of the water" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RainMapInit_MetaData[] = {
		{ "Category", "Init Parameters" },
		{ "ModuleRelativePath", "Public/VoxelShaders/VoxelErosion.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HeightmapInit_MetaData[] = {
		{ "Category", "Init Parameters" },
		{ "ModuleRelativePath", "Public/VoxelShaders/VoxelErosion.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Size;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Scale;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Gravity;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SedimentCapacity;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SedimentDissolving;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SedimentDeposition;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RainStrength;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Evaporation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RainMapInit;
	static const UECodeGen_Private::FStructPropertyParams NewProp_HeightmapInit;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UVoxelErosion_GetSedimentTexture, "GetSedimentTexture" }, // 2272566944
		{ &Z_Construct_UFunction_UVoxelErosion_GetTerrainHeightTexture, "GetTerrainHeightTexture" }, // 3468097474
		{ &Z_Construct_UFunction_UVoxelErosion_GetWaterHeightTexture, "GetWaterHeightTexture" }, // 1165563355
		{ &Z_Construct_UFunction_UVoxelErosion_Initialize, "Initialize" }, // 732935682
		{ &Z_Construct_UFunction_UVoxelErosion_IsInitialized, "IsInitialized" }, // 3592781580
		{ &Z_Construct_UFunction_UVoxelErosion_Step, "Step" }, // 3329124874
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelErosion>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UVoxelErosion_Statics::NewProp_Size = { "Size", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelErosion, Size), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Size_MetaData), NewProp_Size_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVoxelErosion_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelErosion, DeltaTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeltaTime_MetaData), NewProp_DeltaTime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVoxelErosion_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelErosion, Scale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Scale_MetaData), NewProp_Scale_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVoxelErosion_Statics::NewProp_Gravity = { "Gravity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelErosion, Gravity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Gravity_MetaData), NewProp_Gravity_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVoxelErosion_Statics::NewProp_SedimentCapacity = { "SedimentCapacity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelErosion, SedimentCapacity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SedimentCapacity_MetaData), NewProp_SedimentCapacity_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVoxelErosion_Statics::NewProp_SedimentDissolving = { "SedimentDissolving", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelErosion, SedimentDissolving), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SedimentDissolving_MetaData), NewProp_SedimentDissolving_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVoxelErosion_Statics::NewProp_SedimentDeposition = { "SedimentDeposition", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelErosion, SedimentDeposition), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SedimentDeposition_MetaData), NewProp_SedimentDeposition_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVoxelErosion_Statics::NewProp_RainStrength = { "RainStrength", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelErosion, RainStrength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RainStrength_MetaData), NewProp_RainStrength_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVoxelErosion_Statics::NewProp_Evaporation = { "Evaporation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelErosion, Evaporation), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Evaporation_MetaData), NewProp_Evaporation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVoxelErosion_Statics::NewProp_RainMapInit = { "RainMapInit", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelErosion, RainMapInit), Z_Construct_UScriptStruct_FVoxelFloatTexture, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RainMapInit_MetaData), NewProp_RainMapInit_MetaData) }; // 369089072
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVoxelErosion_Statics::NewProp_HeightmapInit = { "HeightmapInit", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelErosion, HeightmapInit), Z_Construct_UScriptStruct_FVoxelFloatTexture, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HeightmapInit_MetaData), NewProp_HeightmapInit_MetaData) }; // 369089072
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelErosion_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelErosion_Statics::NewProp_Size,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelErosion_Statics::NewProp_DeltaTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelErosion_Statics::NewProp_Scale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelErosion_Statics::NewProp_Gravity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelErosion_Statics::NewProp_SedimentCapacity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelErosion_Statics::NewProp_SedimentDissolving,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelErosion_Statics::NewProp_SedimentDeposition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelErosion_Statics::NewProp_RainStrength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelErosion_Statics::NewProp_Evaporation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelErosion_Statics::NewProp_RainMapInit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelErosion_Statics::NewProp_HeightmapInit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelErosion_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UVoxelErosion_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelErosion_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelErosion_Statics::ClassParams = {
	&UVoxelErosion::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UVoxelErosion_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelErosion_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelErosion_Statics::Class_MetaDataParams), Z_Construct_UClass_UVoxelErosion_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVoxelErosion()
{
	if (!Z_Registration_Info_UClass_UVoxelErosion.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelErosion.OuterSingleton, Z_Construct_UClass_UVoxelErosion_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVoxelErosion.OuterSingleton;
}
UVoxelErosion::UVoxelErosion(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelErosion);
UVoxelErosion::~UVoxelErosion() {}
// ********** End Class UVoxelErosion **************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelShaders_VoxelErosion_h__Script_Voxel_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UVoxelErosion, UVoxelErosion::StaticClass, TEXT("UVoxelErosion"), &Z_Registration_Info_UClass_UVoxelErosion, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelErosion), 446000683U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelShaders_VoxelErosion_h__Script_Voxel_3314708300(TEXT("/Script/Voxel"),
	Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelShaders_VoxelErosion_h__Script_Voxel_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelShaders_VoxelErosion_h__Script_Voxel_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
