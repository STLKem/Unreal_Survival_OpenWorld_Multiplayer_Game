// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VoxelTools/Tools/VoxelTool.h"
#include "VoxelIntBox.h"
#include "VoxelTools/VoxelPaintMaterial.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeVoxelTool() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECollisionChannel();
UPackage* Z_Construct_UPackage__Script_Voxel();
VOXEL_API UClass* Z_Construct_UClass_AVoxelWorld_NoRegister();
VOXEL_API UClass* Z_Construct_UClass_UVoxelTool();
VOXEL_API UClass* Z_Construct_UClass_UVoxelTool_NoRegister();
VOXEL_API UClass* Z_Construct_UClass_UVoxelToolSharedConfig();
VOXEL_API UClass* Z_Construct_UClass_UVoxelToolSharedConfig_NoRegister();
VOXEL_API UFunction* Z_Construct_UDelegateFunction_UVoxelTool_DoEditDynamicOverride__DelegateSignature();
VOXEL_API UFunction* Z_Construct_UDelegateFunction_Voxel_VoxelTool_OnBoundsUpdated__DelegateSignature();
VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelIntBox();
VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelPaintMaterial();
VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelToolTickData();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FVoxelToolTickData ************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FVoxelToolTickData;
class UScriptStruct* FVoxelToolTickData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FVoxelToolTickData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FVoxelToolTickData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVoxelToolTickData, (UObject*)Z_Construct_UPackage__Script_Voxel(), TEXT("VoxelToolTickData"));
	}
	return Z_Registration_Info_UScriptStruct_FVoxelToolTickData.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FVoxelToolTickData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MousePosition_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraViewDirection_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEdit_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Keys_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Axes_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollisionChannel_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelTool.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_MousePosition;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CameraViewDirection;
	static void NewProp_bEdit_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEdit;
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Keys_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Keys_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_Keys;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Axes_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Axes_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_Axes;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CollisionChannel;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVoxelToolTickData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVoxelToolTickData_Statics::NewProp_MousePosition = { "MousePosition", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVoxelToolTickData, MousePosition), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MousePosition_MetaData), NewProp_MousePosition_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVoxelToolTickData_Statics::NewProp_CameraViewDirection = { "CameraViewDirection", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVoxelToolTickData, CameraViewDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraViewDirection_MetaData), NewProp_CameraViewDirection_MetaData) };
void Z_Construct_UScriptStruct_FVoxelToolTickData_Statics::NewProp_bEdit_SetBit(void* Obj)
{
	((FVoxelToolTickData*)Obj)->bEdit = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVoxelToolTickData_Statics::NewProp_bEdit = { "bEdit", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FVoxelToolTickData), &Z_Construct_UScriptStruct_FVoxelToolTickData_Statics::NewProp_bEdit_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEdit_MetaData), NewProp_bEdit_MetaData) };
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVoxelToolTickData_Statics::NewProp_Keys_ValueProp = { "Keys", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FVoxelToolTickData_Statics::NewProp_Keys_Key_KeyProp = { "Keys_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FVoxelToolTickData_Statics::NewProp_Keys = { "Keys", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVoxelToolTickData, Keys), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Keys_MetaData), NewProp_Keys_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVoxelToolTickData_Statics::NewProp_Axes_ValueProp = { "Axes", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FVoxelToolTickData_Statics::NewProp_Axes_Key_KeyProp = { "Axes_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FVoxelToolTickData_Statics::NewProp_Axes = { "Axes", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVoxelToolTickData, Axes), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Axes_MetaData), NewProp_Axes_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FVoxelToolTickData_Statics::NewProp_CollisionChannel = { "CollisionChannel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVoxelToolTickData, CollisionChannel), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollisionChannel_MetaData), NewProp_CollisionChannel_MetaData) }; // 756624936
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVoxelToolTickData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelToolTickData_Statics::NewProp_MousePosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelToolTickData_Statics::NewProp_CameraViewDirection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelToolTickData_Statics::NewProp_bEdit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelToolTickData_Statics::NewProp_Keys_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelToolTickData_Statics::NewProp_Keys_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelToolTickData_Statics::NewProp_Keys,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelToolTickData_Statics::NewProp_Axes_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelToolTickData_Statics::NewProp_Axes_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelToolTickData_Statics::NewProp_Axes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelToolTickData_Statics::NewProp_CollisionChannel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelToolTickData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVoxelToolTickData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
	nullptr,
	&NewStructOps,
	"VoxelToolTickData",
	Z_Construct_UScriptStruct_FVoxelToolTickData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelToolTickData_Statics::PropPointers),
	sizeof(FVoxelToolTickData),
	alignof(FVoxelToolTickData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelToolTickData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVoxelToolTickData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FVoxelToolTickData()
{
	if (!Z_Registration_Info_UScriptStruct_FVoxelToolTickData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FVoxelToolTickData.InnerSingleton, Z_Construct_UScriptStruct_FVoxelToolTickData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FVoxelToolTickData.InnerSingleton;
}
// ********** End ScriptStruct FVoxelToolTickData **************************************************

// ********** Begin Delegate FVoxelTool_OnBoundsUpdated ********************************************
struct Z_Construct_UDelegateFunction_Voxel_VoxelTool_OnBoundsUpdated__DelegateSignature_Statics
{
	struct _Script_Voxel_eventVoxelTool_OnBoundsUpdated_Parms
	{
		AVoxelWorld* World;
		FVoxelIntBox Bounds;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelTool.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Bounds;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_Voxel_VoxelTool_OnBoundsUpdated__DelegateSignature_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Voxel_eventVoxelTool_OnBoundsUpdated_Parms, World), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_Voxel_VoxelTool_OnBoundsUpdated__DelegateSignature_Statics::NewProp_Bounds = { "Bounds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Voxel_eventVoxelTool_OnBoundsUpdated_Parms, Bounds), Z_Construct_UScriptStruct_FVoxelIntBox, METADATA_PARAMS(0, nullptr) }; // 3520536583
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Voxel_VoxelTool_OnBoundsUpdated__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Voxel_VoxelTool_OnBoundsUpdated__DelegateSignature_Statics::NewProp_World,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Voxel_VoxelTool_OnBoundsUpdated__DelegateSignature_Statics::NewProp_Bounds,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Voxel_VoxelTool_OnBoundsUpdated__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_Voxel_VoxelTool_OnBoundsUpdated__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_Voxel, nullptr, "VoxelTool_OnBoundsUpdated__DelegateSignature", Z_Construct_UDelegateFunction_Voxel_VoxelTool_OnBoundsUpdated__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Voxel_VoxelTool_OnBoundsUpdated__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_Voxel_VoxelTool_OnBoundsUpdated__DelegateSignature_Statics::_Script_Voxel_eventVoxelTool_OnBoundsUpdated_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Voxel_VoxelTool_OnBoundsUpdated__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Voxel_VoxelTool_OnBoundsUpdated__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_Voxel_VoxelTool_OnBoundsUpdated__DelegateSignature_Statics::_Script_Voxel_eventVoxelTool_OnBoundsUpdated_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_Voxel_VoxelTool_OnBoundsUpdated__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Voxel_VoxelTool_OnBoundsUpdated__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FVoxelTool_OnBoundsUpdated_DelegateWrapper(const FMulticastScriptDelegate& VoxelTool_OnBoundsUpdated, AVoxelWorld* World, FVoxelIntBox Bounds)
{
	struct _Script_Voxel_eventVoxelTool_OnBoundsUpdated_Parms
	{
		AVoxelWorld* World;
		FVoxelIntBox Bounds;
	};
	_Script_Voxel_eventVoxelTool_OnBoundsUpdated_Parms Parms;
	Parms.World=World;
	Parms.Bounds=Bounds;
	VoxelTool_OnBoundsUpdated.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FVoxelTool_OnBoundsUpdated **********************************************

// ********** Begin Class UVoxelToolSharedConfig ***************************************************
void UVoxelToolSharedConfig::StaticRegisterNativesUVoxelToolSharedConfig()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UVoxelToolSharedConfig;
UClass* UVoxelToolSharedConfig::GetPrivateStaticClass()
{
	using TClass = UVoxelToolSharedConfig;
	if (!Z_Registration_Info_UClass_UVoxelToolSharedConfig.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("VoxelToolSharedConfig"),
			Z_Registration_Info_UClass_UVoxelToolSharedConfig.InnerSingleton,
			StaticRegisterNativesUVoxelToolSharedConfig,
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
	return Z_Registration_Info_UClass_UVoxelToolSharedConfig.InnerSingleton;
}
UClass* Z_Construct_UClass_UVoxelToolSharedConfig_NoRegister()
{
	return UVoxelToolSharedConfig::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UVoxelToolSharedConfig_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "VoxelTools/Tools/VoxelTool.h" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BrushSize_MetaData[] = {
		{ "Category", "Shared Config" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelTool.h" },
		{ "UIMax", "20000" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PaintMaterial_MetaData[] = {
		{ "Category", "Shared Config - Paint" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelTool.h" },
		{ "PaintMaterial", "" },
		{ "ShowOnlyInnerProperties", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ToolOpacity_MetaData[] = {
		{ "Category", "Shared Config" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelTool.h" },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AlignToMovementSmoothness_MetaData[] = {
		{ "Category", "Shared Config" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelTool.h" },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ControlSpeed_MetaData[] = {
		{ "Category", "Shared Config" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Input speed: 0.05 increase radius by 5% every time you press ]\n" },
#endif
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelTool.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Input speed: 0.05 increase radius by 5% every time you press ]" },
#endif
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldsToEdit_MetaData[] = {
		{ "Category", "Shared Config" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// If empty, allow editing all worlds\n" },
#endif
		{ "HideInPanel", "" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelTool.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If empty, allow editing all worlds" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCacheData_MetaData[] = {
		{ "Category", "Shared Config" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bMultiThreaded_MetaData[] = {
		{ "Category", "Shared Config" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRegenerateSpawners_MetaData[] = {
		{ "Category", "Shared Config" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCheckForSingleValues_MetaData[] = {
		{ "Category", "Shared Config" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWaitForUpdates_MetaData[] = {
		{ "Category", "Shared Config" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDebug_MetaData[] = {
		{ "Category", "Shared Config" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FixedDeltaTime_MetaData[] = {
		{ "Category", "Shared Config" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// This is used when calling ApplyTool\n// We cannot use the app delta time as it's not deterministic\n" },
#endif
		{ "HideInPanel", "" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelTool.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This is used when calling ApplyTool\nWe cannot use the app delta time as it's not deterministic" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlaneMesh_MetaData[] = {
		{ "Category", "Shared Config" },
		{ "HideInPanel", "" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlaneMaterial_MetaData[] = {
		{ "Category", "Shared Config" },
		{ "HideInPanel", "" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnBoundsUpdated_MetaData[] = {
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelTool.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BrushSize;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PaintMaterial;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ToolOpacity;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AlignToMovementSmoothness;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ControlSpeed;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldsToEdit_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_WorldsToEdit;
	static void NewProp_bCacheData_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCacheData;
	static void NewProp_bMultiThreaded_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bMultiThreaded;
	static void NewProp_bRegenerateSpawners_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRegenerateSpawners;
	static void NewProp_bCheckForSingleValues_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCheckForSingleValues;
	static void NewProp_bWaitForUpdates_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWaitForUpdates;
	static void NewProp_bDebug_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDebug;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FixedDeltaTime;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlaneMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlaneMaterial;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnBoundsUpdated;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelToolSharedConfig>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVoxelToolSharedConfig_Statics::NewProp_BrushSize = { "BrushSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelToolSharedConfig, BrushSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BrushSize_MetaData), NewProp_BrushSize_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVoxelToolSharedConfig_Statics::NewProp_PaintMaterial = { "PaintMaterial", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelToolSharedConfig, PaintMaterial), Z_Construct_UScriptStruct_FVoxelPaintMaterial, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PaintMaterial_MetaData), NewProp_PaintMaterial_MetaData) }; // 2783111154
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVoxelToolSharedConfig_Statics::NewProp_ToolOpacity = { "ToolOpacity", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelToolSharedConfig, ToolOpacity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ToolOpacity_MetaData), NewProp_ToolOpacity_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVoxelToolSharedConfig_Statics::NewProp_AlignToMovementSmoothness = { "AlignToMovementSmoothness", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelToolSharedConfig, AlignToMovementSmoothness), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AlignToMovementSmoothness_MetaData), NewProp_AlignToMovementSmoothness_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVoxelToolSharedConfig_Statics::NewProp_ControlSpeed = { "ControlSpeed", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelToolSharedConfig, ControlSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ControlSpeed_MetaData), NewProp_ControlSpeed_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVoxelToolSharedConfig_Statics::NewProp_WorldsToEdit_Inner = { "WorldsToEdit", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UVoxelToolSharedConfig_Statics::NewProp_WorldsToEdit = { "WorldsToEdit", nullptr, (EPropertyFlags)0x0114040000002005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelToolSharedConfig, WorldsToEdit), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldsToEdit_MetaData), NewProp_WorldsToEdit_MetaData) };
void Z_Construct_UClass_UVoxelToolSharedConfig_Statics::NewProp_bCacheData_SetBit(void* Obj)
{
	((UVoxelToolSharedConfig*)Obj)->bCacheData = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVoxelToolSharedConfig_Statics::NewProp_bCacheData = { "bCacheData", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UVoxelToolSharedConfig), &Z_Construct_UClass_UVoxelToolSharedConfig_Statics::NewProp_bCacheData_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCacheData_MetaData), NewProp_bCacheData_MetaData) };
void Z_Construct_UClass_UVoxelToolSharedConfig_Statics::NewProp_bMultiThreaded_SetBit(void* Obj)
{
	((UVoxelToolSharedConfig*)Obj)->bMultiThreaded = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVoxelToolSharedConfig_Statics::NewProp_bMultiThreaded = { "bMultiThreaded", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UVoxelToolSharedConfig), &Z_Construct_UClass_UVoxelToolSharedConfig_Statics::NewProp_bMultiThreaded_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bMultiThreaded_MetaData), NewProp_bMultiThreaded_MetaData) };
void Z_Construct_UClass_UVoxelToolSharedConfig_Statics::NewProp_bRegenerateSpawners_SetBit(void* Obj)
{
	((UVoxelToolSharedConfig*)Obj)->bRegenerateSpawners = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVoxelToolSharedConfig_Statics::NewProp_bRegenerateSpawners = { "bRegenerateSpawners", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UVoxelToolSharedConfig), &Z_Construct_UClass_UVoxelToolSharedConfig_Statics::NewProp_bRegenerateSpawners_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRegenerateSpawners_MetaData), NewProp_bRegenerateSpawners_MetaData) };
void Z_Construct_UClass_UVoxelToolSharedConfig_Statics::NewProp_bCheckForSingleValues_SetBit(void* Obj)
{
	((UVoxelToolSharedConfig*)Obj)->bCheckForSingleValues = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVoxelToolSharedConfig_Statics::NewProp_bCheckForSingleValues = { "bCheckForSingleValues", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UVoxelToolSharedConfig), &Z_Construct_UClass_UVoxelToolSharedConfig_Statics::NewProp_bCheckForSingleValues_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCheckForSingleValues_MetaData), NewProp_bCheckForSingleValues_MetaData) };
void Z_Construct_UClass_UVoxelToolSharedConfig_Statics::NewProp_bWaitForUpdates_SetBit(void* Obj)
{
	((UVoxelToolSharedConfig*)Obj)->bWaitForUpdates = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVoxelToolSharedConfig_Statics::NewProp_bWaitForUpdates = { "bWaitForUpdates", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UVoxelToolSharedConfig), &Z_Construct_UClass_UVoxelToolSharedConfig_Statics::NewProp_bWaitForUpdates_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWaitForUpdates_MetaData), NewProp_bWaitForUpdates_MetaData) };
void Z_Construct_UClass_UVoxelToolSharedConfig_Statics::NewProp_bDebug_SetBit(void* Obj)
{
	((UVoxelToolSharedConfig*)Obj)->bDebug = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVoxelToolSharedConfig_Statics::NewProp_bDebug = { "bDebug", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UVoxelToolSharedConfig), &Z_Construct_UClass_UVoxelToolSharedConfig_Statics::NewProp_bDebug_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDebug_MetaData), NewProp_bDebug_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVoxelToolSharedConfig_Statics::NewProp_FixedDeltaTime = { "FixedDeltaTime", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelToolSharedConfig, FixedDeltaTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FixedDeltaTime_MetaData), NewProp_FixedDeltaTime_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVoxelToolSharedConfig_Statics::NewProp_PlaneMesh = { "PlaneMesh", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelToolSharedConfig, PlaneMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlaneMesh_MetaData), NewProp_PlaneMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVoxelToolSharedConfig_Statics::NewProp_PlaneMaterial = { "PlaneMaterial", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelToolSharedConfig, PlaneMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlaneMaterial_MetaData), NewProp_PlaneMaterial_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UVoxelToolSharedConfig_Statics::NewProp_OnBoundsUpdated = { "OnBoundsUpdated", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelToolSharedConfig, OnBoundsUpdated), Z_Construct_UDelegateFunction_Voxel_VoxelTool_OnBoundsUpdated__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnBoundsUpdated_MetaData), NewProp_OnBoundsUpdated_MetaData) }; // 3647982283
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelToolSharedConfig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelToolSharedConfig_Statics::NewProp_BrushSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelToolSharedConfig_Statics::NewProp_PaintMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelToolSharedConfig_Statics::NewProp_ToolOpacity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelToolSharedConfig_Statics::NewProp_AlignToMovementSmoothness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelToolSharedConfig_Statics::NewProp_ControlSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelToolSharedConfig_Statics::NewProp_WorldsToEdit_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelToolSharedConfig_Statics::NewProp_WorldsToEdit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelToolSharedConfig_Statics::NewProp_bCacheData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelToolSharedConfig_Statics::NewProp_bMultiThreaded,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelToolSharedConfig_Statics::NewProp_bRegenerateSpawners,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelToolSharedConfig_Statics::NewProp_bCheckForSingleValues,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelToolSharedConfig_Statics::NewProp_bWaitForUpdates,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelToolSharedConfig_Statics::NewProp_bDebug,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelToolSharedConfig_Statics::NewProp_FixedDeltaTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelToolSharedConfig_Statics::NewProp_PlaneMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelToolSharedConfig_Statics::NewProp_PlaneMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelToolSharedConfig_Statics::NewProp_OnBoundsUpdated,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelToolSharedConfig_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UVoxelToolSharedConfig_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelToolSharedConfig_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelToolSharedConfig_Statics::ClassParams = {
	&UVoxelToolSharedConfig::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UVoxelToolSharedConfig_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelToolSharedConfig_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelToolSharedConfig_Statics::Class_MetaDataParams), Z_Construct_UClass_UVoxelToolSharedConfig_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVoxelToolSharedConfig()
{
	if (!Z_Registration_Info_UClass_UVoxelToolSharedConfig.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelToolSharedConfig.OuterSingleton, Z_Construct_UClass_UVoxelToolSharedConfig_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVoxelToolSharedConfig.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelToolSharedConfig);
UVoxelToolSharedConfig::~UVoxelToolSharedConfig() {}
// ********** End Class UVoxelToolSharedConfig *****************************************************

// ********** Begin Delegate FDoEditDynamicOverride ************************************************
struct Z_Construct_UDelegateFunction_UVoxelTool_DoEditDynamicOverride__DelegateSignature_Statics
{
	struct VoxelTool_eventDoEditDynamicOverride_Parms
	{
		FVector Position;
		FVector Normal;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelTool.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Position;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Normal;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_UVoxelTool_DoEditDynamicOverride__DelegateSignature_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelTool_eventDoEditDynamicOverride_Parms, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_UVoxelTool_DoEditDynamicOverride__DelegateSignature_Statics::NewProp_Normal = { "Normal", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelTool_eventDoEditDynamicOverride_Parms, Normal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UVoxelTool_DoEditDynamicOverride__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UVoxelTool_DoEditDynamicOverride__DelegateSignature_Statics::NewProp_Position,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UVoxelTool_DoEditDynamicOverride__DelegateSignature_Statics::NewProp_Normal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UVoxelTool_DoEditDynamicOverride__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_UVoxelTool_DoEditDynamicOverride__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelTool, nullptr, "DoEditDynamicOverride__DelegateSignature", Z_Construct_UDelegateFunction_UVoxelTool_DoEditDynamicOverride__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UVoxelTool_DoEditDynamicOverride__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UVoxelTool_DoEditDynamicOverride__DelegateSignature_Statics::VoxelTool_eventDoEditDynamicOverride_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00920000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UVoxelTool_DoEditDynamicOverride__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UVoxelTool_DoEditDynamicOverride__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_UVoxelTool_DoEditDynamicOverride__DelegateSignature_Statics::VoxelTool_eventDoEditDynamicOverride_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UVoxelTool_DoEditDynamicOverride__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UVoxelTool_DoEditDynamicOverride__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void UVoxelTool::FDoEditDynamicOverride_DelegateWrapper(const FScriptDelegate& DoEditDynamicOverride, FVector Position, FVector Normal)
{
	struct VoxelTool_eventDoEditDynamicOverride_Parms
	{
		FVector Position;
		FVector Normal;
	};
	VoxelTool_eventDoEditDynamicOverride_Parms Parms;
	Parms.Position=Position;
	Parms.Normal=Normal;
	DoEditDynamicOverride.ProcessDelegate<UObject>(&Parms);
}
// ********** End Delegate FDoEditDynamicOverride **************************************************

// ********** Begin Class UVoxelTool Function Apply ************************************************
struct Z_Construct_UFunction_UVoxelTool_Apply_Statics
{
	struct VoxelTool_eventApply_Parms
	{
		AVoxelWorld* World;
		FVector Position;
		FVector Normal;
		TMap<FName,bool> Keys;
		TMap<FName,float> Axes;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Keys, Axes" },
		{ "Category", "Voxel|Tools" },
		{ "DefaultToSelf", "World" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Keys_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Axes_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Position;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Normal;
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Keys_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Keys_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_Keys;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Axes_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Axes_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_Axes;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelTool_Apply_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelTool_eventApply_Parms, World), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelTool_Apply_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelTool_eventApply_Parms, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelTool_Apply_Statics::NewProp_Normal = { "Normal", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelTool_eventApply_Parms, Normal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelTool_Apply_Statics::NewProp_Keys_ValueProp = { "Keys", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UVoxelTool_Apply_Statics::NewProp_Keys_Key_KeyProp = { "Keys_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UVoxelTool_Apply_Statics::NewProp_Keys = { "Keys", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelTool_eventApply_Parms, Keys), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Keys_MetaData), NewProp_Keys_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoxelTool_Apply_Statics::NewProp_Axes_ValueProp = { "Axes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UVoxelTool_Apply_Statics::NewProp_Axes_Key_KeyProp = { "Axes_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UVoxelTool_Apply_Statics::NewProp_Axes = { "Axes", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelTool_eventApply_Parms, Axes), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Axes_MetaData), NewProp_Axes_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelTool_Apply_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelTool_Apply_Statics::NewProp_World,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelTool_Apply_Statics::NewProp_Position,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelTool_Apply_Statics::NewProp_Normal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelTool_Apply_Statics::NewProp_Keys_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelTool_Apply_Statics::NewProp_Keys_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelTool_Apply_Statics::NewProp_Keys,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelTool_Apply_Statics::NewProp_Axes_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelTool_Apply_Statics::NewProp_Axes_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelTool_Apply_Statics::NewProp_Axes,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelTool_Apply_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelTool_Apply_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelTool, nullptr, "Apply", Z_Construct_UFunction_UVoxelTool_Apply_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelTool_Apply_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVoxelTool_Apply_Statics::VoxelTool_eventApply_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelTool_Apply_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelTool_Apply_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVoxelTool_Apply_Statics::VoxelTool_eventApply_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVoxelTool_Apply()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelTool_Apply_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelTool::execApply)
{
	P_GET_OBJECT(AVoxelWorld,Z_Param_World);
	P_GET_STRUCT(FVector,Z_Param_Position);
	P_GET_STRUCT(FVector,Z_Param_Normal);
	P_GET_TMAP_REF(FName,bool,Z_Param_Out_Keys);
	P_GET_TMAP_REF(FName,float,Z_Param_Out_Axes);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Apply(Z_Param_World,Z_Param_Position,Z_Param_Normal,Z_Param_Out_Keys,Z_Param_Out_Axes);
	P_NATIVE_END;
}
// ********** End Class UVoxelTool Function Apply **************************************************

// ********** Begin Class UVoxelTool Function Deproject ********************************************
struct Z_Construct_UFunction_UVoxelTool_Deproject_Statics
{
	struct VoxelTool_eventDeproject_Parms
	{
		FVoxelToolTickData TickData;
		FVector2D ScreenPosition;
		FVector WorldPosition;
		FVector WorldDirection;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Voxel|Tools|Tick Data" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelTool.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_TickData;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ScreenPosition;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WorldPosition;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WorldDirection;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelTool_Deproject_Statics::NewProp_TickData = { "TickData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelTool_eventDeproject_Parms, TickData), Z_Construct_UScriptStruct_FVoxelToolTickData, METADATA_PARAMS(0, nullptr) }; // 3851510337
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelTool_Deproject_Statics::NewProp_ScreenPosition = { "ScreenPosition", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelTool_eventDeproject_Parms, ScreenPosition), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelTool_Deproject_Statics::NewProp_WorldPosition = { "WorldPosition", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelTool_eventDeproject_Parms, WorldPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelTool_Deproject_Statics::NewProp_WorldDirection = { "WorldDirection", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelTool_eventDeproject_Parms, WorldDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UVoxelTool_Deproject_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((VoxelTool_eventDeproject_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelTool_Deproject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VoxelTool_eventDeproject_Parms), &Z_Construct_UFunction_UVoxelTool_Deproject_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelTool_Deproject_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelTool_Deproject_Statics::NewProp_TickData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelTool_Deproject_Statics::NewProp_ScreenPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelTool_Deproject_Statics::NewProp_WorldPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelTool_Deproject_Statics::NewProp_WorldDirection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelTool_Deproject_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelTool_Deproject_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelTool_Deproject_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelTool, nullptr, "Deproject", Z_Construct_UFunction_UVoxelTool_Deproject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelTool_Deproject_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVoxelTool_Deproject_Statics::VoxelTool_eventDeproject_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelTool_Deproject_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelTool_Deproject_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVoxelTool_Deproject_Statics::VoxelTool_eventDeproject_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVoxelTool_Deproject()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelTool_Deproject_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelTool::execDeproject)
{
	P_GET_STRUCT(FVoxelToolTickData,Z_Param_TickData);
	P_GET_STRUCT(FVector2D,Z_Param_ScreenPosition);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_WorldPosition);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_WorldDirection);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UVoxelTool::Deproject(Z_Param_TickData,Z_Param_ScreenPosition,Z_Param_Out_WorldPosition,Z_Param_Out_WorldDirection);
	P_NATIVE_END;
}
// ********** End Class UVoxelTool Function Deproject **********************************************

// ********** Begin Class UVoxelTool Function DisableTool ******************************************
struct Z_Construct_UFunction_UVoxelTool_DisableTool_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Voxel|Tools" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Call this to delete any tool preview actors\n" },
#endif
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelTool.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Call this to delete any tool preview actors" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelTool_DisableTool_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelTool, nullptr, "DisableTool", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelTool_DisableTool_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelTool_DisableTool_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UVoxelTool_DisableTool()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelTool_DisableTool_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelTool::execDisableTool)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DisableTool();
	P_NATIVE_END;
}
// ********** End Class UVoxelTool Function DisableTool ********************************************

// ********** Begin Class UVoxelTool Function EnableTool *******************************************
struct Z_Construct_UFunction_UVoxelTool_EnableTool_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Voxel|Tools" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Call this to do some initial setup\n// Will be called in the first tool tick if you don't\n" },
#endif
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelTool.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Call this to do some initial setup\nWill be called in the first tool tick if you don't" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelTool_EnableTool_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelTool, nullptr, "EnableTool", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelTool_EnableTool_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelTool_EnableTool_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UVoxelTool_EnableTool()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelTool_EnableTool_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelTool::execEnableTool)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EnableTool();
	P_NATIVE_END;
}
// ********** End Class UVoxelTool Function EnableTool *********************************************

// ********** Begin Class UVoxelTool Function GetAxis **********************************************
struct Z_Construct_UFunction_UVoxelTool_GetAxis_Statics
{
	struct VoxelTool_eventGetAxis_Parms
	{
		FVoxelToolTickData TickData;
		FName Axis;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Voxel|Tools|Tick Data" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelTool.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_TickData;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Axis;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelTool_GetAxis_Statics::NewProp_TickData = { "TickData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelTool_eventGetAxis_Parms, TickData), Z_Construct_UScriptStruct_FVoxelToolTickData, METADATA_PARAMS(0, nullptr) }; // 3851510337
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UVoxelTool_GetAxis_Statics::NewProp_Axis = { "Axis", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelTool_eventGetAxis_Parms, Axis), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoxelTool_GetAxis_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelTool_eventGetAxis_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelTool_GetAxis_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelTool_GetAxis_Statics::NewProp_TickData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelTool_GetAxis_Statics::NewProp_Axis,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelTool_GetAxis_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelTool_GetAxis_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelTool_GetAxis_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelTool, nullptr, "GetAxis", Z_Construct_UFunction_UVoxelTool_GetAxis_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelTool_GetAxis_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVoxelTool_GetAxis_Statics::VoxelTool_eventGetAxis_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelTool_GetAxis_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelTool_GetAxis_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVoxelTool_GetAxis_Statics::VoxelTool_eventGetAxis_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVoxelTool_GetAxis()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelTool_GetAxis_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelTool::execGetAxis)
{
	P_GET_STRUCT(FVoxelToolTickData,Z_Param_TickData);
	P_GET_PROPERTY(FNameProperty,Z_Param_Axis);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=UVoxelTool::GetAxis(Z_Param_TickData,Z_Param_Axis);
	P_NATIVE_END;
}
// ********** End Class UVoxelTool Function GetAxis ************************************************

// ********** Begin Class UVoxelTool Function GetRayDirection **************************************
struct Z_Construct_UFunction_UVoxelTool_GetRayDirection_Statics
{
	struct VoxelTool_eventGetRayDirection_Parms
	{
		FVoxelToolTickData TickData;
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Voxel|Tools|Tick Data" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelTool.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_TickData;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelTool_GetRayDirection_Statics::NewProp_TickData = { "TickData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelTool_eventGetRayDirection_Parms, TickData), Z_Construct_UScriptStruct_FVoxelToolTickData, METADATA_PARAMS(0, nullptr) }; // 3851510337
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelTool_GetRayDirection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelTool_eventGetRayDirection_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelTool_GetRayDirection_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelTool_GetRayDirection_Statics::NewProp_TickData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelTool_GetRayDirection_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelTool_GetRayDirection_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelTool_GetRayDirection_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelTool, nullptr, "GetRayDirection", Z_Construct_UFunction_UVoxelTool_GetRayDirection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelTool_GetRayDirection_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVoxelTool_GetRayDirection_Statics::VoxelTool_eventGetRayDirection_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelTool_GetRayDirection_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelTool_GetRayDirection_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVoxelTool_GetRayDirection_Statics::VoxelTool_eventGetRayDirection_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVoxelTool_GetRayDirection()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelTool_GetRayDirection_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelTool::execGetRayDirection)
{
	P_GET_STRUCT(FVoxelToolTickData,Z_Param_TickData);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=UVoxelTool::GetRayDirection(Z_Param_TickData);
	P_NATIVE_END;
}
// ********** End Class UVoxelTool Function GetRayDirection ****************************************

// ********** Begin Class UVoxelTool Function GetRayOrigin *****************************************
struct Z_Construct_UFunction_UVoxelTool_GetRayOrigin_Statics
{
	struct VoxelTool_eventGetRayOrigin_Parms
	{
		FVoxelToolTickData TickData;
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Voxel|Tools|Tick Data" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelTool.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_TickData;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelTool_GetRayOrigin_Statics::NewProp_TickData = { "TickData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelTool_eventGetRayOrigin_Parms, TickData), Z_Construct_UScriptStruct_FVoxelToolTickData, METADATA_PARAMS(0, nullptr) }; // 3851510337
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelTool_GetRayOrigin_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelTool_eventGetRayOrigin_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelTool_GetRayOrigin_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelTool_GetRayOrigin_Statics::NewProp_TickData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelTool_GetRayOrigin_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelTool_GetRayOrigin_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelTool_GetRayOrigin_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelTool, nullptr, "GetRayOrigin", Z_Construct_UFunction_UVoxelTool_GetRayOrigin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelTool_GetRayOrigin_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVoxelTool_GetRayOrigin_Statics::VoxelTool_eventGetRayOrigin_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelTool_GetRayOrigin_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelTool_GetRayOrigin_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVoxelTool_GetRayOrigin_Statics::VoxelTool_eventGetRayOrigin_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVoxelTool_GetRayOrigin()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelTool_GetRayOrigin_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelTool::execGetRayOrigin)
{
	P_GET_STRUCT(FVoxelToolTickData,Z_Param_TickData);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=UVoxelTool::GetRayOrigin(Z_Param_TickData);
	P_NATIVE_END;
}
// ********** End Class UVoxelTool Function GetRayOrigin *******************************************

// ********** Begin Class UVoxelTool Function GetToolName ******************************************
struct Z_Construct_UFunction_UVoxelTool_GetToolName_Statics
{
	struct VoxelTool_eventGetToolName_Parms
	{
		FName ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Voxel|Tools" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelTool.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UVoxelTool_GetToolName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelTool_eventGetToolName_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelTool_GetToolName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelTool_GetToolName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelTool_GetToolName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelTool_GetToolName_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelTool, nullptr, "GetToolName", Z_Construct_UFunction_UVoxelTool_GetToolName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelTool_GetToolName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVoxelTool_GetToolName_Statics::VoxelTool_eventGetToolName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelTool_GetToolName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelTool_GetToolName_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVoxelTool_GetToolName_Statics::VoxelTool_eventGetToolName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVoxelTool_GetToolName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelTool_GetToolName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelTool::execGetToolName)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FName*)Z_Param__Result=P_THIS->GetToolName();
	P_NATIVE_END;
}
// ********** End Class UVoxelTool Function GetToolName ********************************************

// ********** Begin Class UVoxelTool Function GetVoxelWorld ****************************************
struct Z_Construct_UFunction_UVoxelTool_GetVoxelWorld_Statics
{
	struct VoxelTool_eventGetVoxelWorld_Parms
	{
		AVoxelWorld* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Voxel|Tools" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelTool.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelTool_GetVoxelWorld_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelTool_eventGetVoxelWorld_Parms, ReturnValue), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelTool_GetVoxelWorld_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelTool_GetVoxelWorld_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelTool_GetVoxelWorld_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelTool_GetVoxelWorld_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelTool, nullptr, "GetVoxelWorld", Z_Construct_UFunction_UVoxelTool_GetVoxelWorld_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelTool_GetVoxelWorld_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVoxelTool_GetVoxelWorld_Statics::VoxelTool_eventGetVoxelWorld_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelTool_GetVoxelWorld_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelTool_GetVoxelWorld_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVoxelTool_GetVoxelWorld_Statics::VoxelTool_eventGetVoxelWorld_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVoxelTool_GetVoxelWorld()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelTool_GetVoxelWorld_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelTool::execGetVoxelWorld)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(AVoxelWorld**)Z_Param__Result=P_THIS->GetVoxelWorld();
	P_NATIVE_END;
}
// ********** End Class UVoxelTool Function GetVoxelWorld ******************************************

// ********** Begin Class UVoxelTool Function IsAlternativeMode ************************************
struct Z_Construct_UFunction_UVoxelTool_IsAlternativeMode_Statics
{
	struct VoxelTool_eventIsAlternativeMode_Parms
	{
		FVoxelToolTickData TickData;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Voxel|Tools|Tick Data" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelTool.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_TickData;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelTool_IsAlternativeMode_Statics::NewProp_TickData = { "TickData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelTool_eventIsAlternativeMode_Parms, TickData), Z_Construct_UScriptStruct_FVoxelToolTickData, METADATA_PARAMS(0, nullptr) }; // 3851510337
void Z_Construct_UFunction_UVoxelTool_IsAlternativeMode_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((VoxelTool_eventIsAlternativeMode_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelTool_IsAlternativeMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VoxelTool_eventIsAlternativeMode_Parms), &Z_Construct_UFunction_UVoxelTool_IsAlternativeMode_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelTool_IsAlternativeMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelTool_IsAlternativeMode_Statics::NewProp_TickData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelTool_IsAlternativeMode_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelTool_IsAlternativeMode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelTool_IsAlternativeMode_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelTool, nullptr, "IsAlternativeMode", Z_Construct_UFunction_UVoxelTool_IsAlternativeMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelTool_IsAlternativeMode_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVoxelTool_IsAlternativeMode_Statics::VoxelTool_eventIsAlternativeMode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelTool_IsAlternativeMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelTool_IsAlternativeMode_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVoxelTool_IsAlternativeMode_Statics::VoxelTool_eventIsAlternativeMode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVoxelTool_IsAlternativeMode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelTool_IsAlternativeMode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelTool::execIsAlternativeMode)
{
	P_GET_STRUCT(FVoxelToolTickData,Z_Param_TickData);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UVoxelTool::IsAlternativeMode(Z_Param_TickData);
	P_NATIVE_END;
}
// ********** End Class UVoxelTool Function IsAlternativeMode **************************************

// ********** Begin Class UVoxelTool Function IsKeyDown ********************************************
struct Z_Construct_UFunction_UVoxelTool_IsKeyDown_Statics
{
	struct VoxelTool_eventIsKeyDown_Parms
	{
		FVoxelToolTickData TickData;
		FName Key;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Voxel|Tools|Tick Data" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelTool.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_TickData;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Key;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelTool_IsKeyDown_Statics::NewProp_TickData = { "TickData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelTool_eventIsKeyDown_Parms, TickData), Z_Construct_UScriptStruct_FVoxelToolTickData, METADATA_PARAMS(0, nullptr) }; // 3851510337
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UVoxelTool_IsKeyDown_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelTool_eventIsKeyDown_Parms, Key), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UVoxelTool_IsKeyDown_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((VoxelTool_eventIsKeyDown_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelTool_IsKeyDown_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VoxelTool_eventIsKeyDown_Parms), &Z_Construct_UFunction_UVoxelTool_IsKeyDown_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelTool_IsKeyDown_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelTool_IsKeyDown_Statics::NewProp_TickData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelTool_IsKeyDown_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelTool_IsKeyDown_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelTool_IsKeyDown_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelTool_IsKeyDown_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelTool, nullptr, "IsKeyDown", Z_Construct_UFunction_UVoxelTool_IsKeyDown_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelTool_IsKeyDown_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVoxelTool_IsKeyDown_Statics::VoxelTool_eventIsKeyDown_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelTool_IsKeyDown_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelTool_IsKeyDown_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVoxelTool_IsKeyDown_Statics::VoxelTool_eventIsKeyDown_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVoxelTool_IsKeyDown()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelTool_IsKeyDown_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelTool::execIsKeyDown)
{
	P_GET_STRUCT(FVoxelToolTickData,Z_Param_TickData);
	P_GET_PROPERTY(FNameProperty,Z_Param_Key);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UVoxelTool::IsKeyDown(Z_Param_TickData,Z_Param_Key);
	P_NATIVE_END;
}
// ********** End Class UVoxelTool Function IsKeyDown **********************************************

// ********** Begin Class UVoxelTool Function K2_AdvancedTick **************************************
struct Z_Construct_UFunction_UVoxelTool_K2_AdvancedTick_Statics
{
	struct VoxelTool_eventK2_AdvancedTick_Parms
	{
		UWorld* World;
		FVoxelToolTickData TickData;
		FScriptDelegate DoEditOverride;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "DoEditOverride" },
		{ "AutoCreateRefTerm", "DoEditOverride" },
		{ "Category", "Voxel|Tools" },
		{ "DisplayName", "AdvancedTick" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TickData_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DoEditOverride_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TickData;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_DoEditOverride;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelTool_K2_AdvancedTick_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelTool_eventK2_AdvancedTick_Parms, World), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelTool_K2_AdvancedTick_Statics::NewProp_TickData = { "TickData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelTool_eventK2_AdvancedTick_Parms, TickData), Z_Construct_UScriptStruct_FVoxelToolTickData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TickData_MetaData), NewProp_TickData_MetaData) }; // 3851510337
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UVoxelTool_K2_AdvancedTick_Statics::NewProp_DoEditOverride = { "DoEditOverride", nullptr, (EPropertyFlags)0x0010040008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelTool_eventK2_AdvancedTick_Parms, DoEditOverride), Z_Construct_UDelegateFunction_UVoxelTool_DoEditDynamicOverride__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DoEditOverride_MetaData), NewProp_DoEditOverride_MetaData) }; // 2879993156
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelTool_K2_AdvancedTick_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelTool_K2_AdvancedTick_Statics::NewProp_World,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelTool_K2_AdvancedTick_Statics::NewProp_TickData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelTool_K2_AdvancedTick_Statics::NewProp_DoEditOverride,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelTool_K2_AdvancedTick_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelTool_K2_AdvancedTick_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelTool, nullptr, "K2_AdvancedTick", Z_Construct_UFunction_UVoxelTool_K2_AdvancedTick_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelTool_K2_AdvancedTick_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVoxelTool_K2_AdvancedTick_Statics::VoxelTool_eventK2_AdvancedTick_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelTool_K2_AdvancedTick_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelTool_K2_AdvancedTick_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVoxelTool_K2_AdvancedTick_Statics::VoxelTool_eventK2_AdvancedTick_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVoxelTool_K2_AdvancedTick()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelTool_K2_AdvancedTick_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelTool::execK2_AdvancedTick)
{
	P_GET_OBJECT(UWorld,Z_Param_World);
	P_GET_STRUCT_REF(FVoxelToolTickData,Z_Param_Out_TickData);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_DoEditOverride);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->K2_AdvancedTick(Z_Param_World,Z_Param_Out_TickData,FDoEditDynamicOverride(Z_Param_Out_DoEditOverride));
	P_NATIVE_END;
}
// ********** End Class UVoxelTool Function K2_AdvancedTick ****************************************

// ********** Begin Class UVoxelTool Function K2_SimpleTick ****************************************
struct Z_Construct_UFunction_UVoxelTool_K2_SimpleTick_Statics
{
	struct VoxelTool_eventK2_SimpleTick_Parms
	{
		APlayerController* PlayerController;
		bool bEdit;
		TMap<FName,bool> Keys;
		TMap<FName,float> Axes;
		FScriptDelegate DoEditOverride;
		TEnumAsByte<ECollisionChannel> CollisionChannel;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "DoEditOverride" },
		{ "AutoCreateRefTerm", "Keys, Axes, DoEditOverride, CollisionChannel" },
		{ "Category", "Voxel|Tools" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Tick the tool\n\x09 * @param\x09PlayerController\x09The player controller - use GetPlayerController to get it\n\x09 * @param\x09""bEdit\x09\x09\x09\x09Whether the user is pressing the edit button this frame\n\x09 * @param\x09Keys\x09\x09\x09\x09The keys pressed this frame. Use MakeToolKeys. You can add additional values to the map if you have custom tools using them.\n\x09 * @param\x09""Axes\x09\x09\x09\x09The axes values in this frame, to control brush size/strength etc. Use MakeToolAxes. You can add additional values to the map if you have custom tools using them.\n\x09 * @param\x09""DoEditOverride\x09\x09If provided, the edit will not be done but this function will be called instead.\n\x09 *\x09\x09\x09\x09\x09\x09\x09\x09Useful for multiplayer, as you can broadcast the parameters to the other players & call ApplyTool\n\x09 * @param\x09""CollisionChannel\x09The collision channel to do traces against\n\x09 */" },
#endif
		{ "CPP_Default_CollisionChannel", "ECC_Visibility" },
		{ "DisplayName", "SimpleTick" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelTool.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Tick the tool\n@param       PlayerController        The player controller - use GetPlayerController to get it\n@param       bEdit                           Whether the user is pressing the edit button this frame\n@param       Keys                            The keys pressed this frame. Use MakeToolKeys. You can add additional values to the map if you have custom tools using them.\n@param       Axes                            The axes values in this frame, to control brush size/strength etc. Use MakeToolAxes. You can add additional values to the map if you have custom tools using them.\n@param       DoEditOverride          If provided, the edit will not be done but this function will be called instead.\n                                                             Useful for multiplayer, as you can broadcast the parameters to the other players & call ApplyTool\n@param       CollisionChannel        The collision channel to do traces against" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Keys_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Axes_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DoEditOverride_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerController;
	static void NewProp_bEdit_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEdit;
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Keys_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Keys_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_Keys;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Axes_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Axes_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_Axes;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_DoEditOverride;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CollisionChannel;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelTool_K2_SimpleTick_Statics::NewProp_PlayerController = { "PlayerController", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelTool_eventK2_SimpleTick_Parms, PlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UVoxelTool_K2_SimpleTick_Statics::NewProp_bEdit_SetBit(void* Obj)
{
	((VoxelTool_eventK2_SimpleTick_Parms*)Obj)->bEdit = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelTool_K2_SimpleTick_Statics::NewProp_bEdit = { "bEdit", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VoxelTool_eventK2_SimpleTick_Parms), &Z_Construct_UFunction_UVoxelTool_K2_SimpleTick_Statics::NewProp_bEdit_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelTool_K2_SimpleTick_Statics::NewProp_Keys_ValueProp = { "Keys", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UVoxelTool_K2_SimpleTick_Statics::NewProp_Keys_Key_KeyProp = { "Keys_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UVoxelTool_K2_SimpleTick_Statics::NewProp_Keys = { "Keys", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelTool_eventK2_SimpleTick_Parms, Keys), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Keys_MetaData), NewProp_Keys_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoxelTool_K2_SimpleTick_Statics::NewProp_Axes_ValueProp = { "Axes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UVoxelTool_K2_SimpleTick_Statics::NewProp_Axes_Key_KeyProp = { "Axes_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UVoxelTool_K2_SimpleTick_Statics::NewProp_Axes = { "Axes", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelTool_eventK2_SimpleTick_Parms, Axes), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Axes_MetaData), NewProp_Axes_MetaData) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UVoxelTool_K2_SimpleTick_Statics::NewProp_DoEditOverride = { "DoEditOverride", nullptr, (EPropertyFlags)0x0010040008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelTool_eventK2_SimpleTick_Parms, DoEditOverride), Z_Construct_UDelegateFunction_UVoxelTool_DoEditDynamicOverride__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DoEditOverride_MetaData), NewProp_DoEditOverride_MetaData) }; // 2879993156
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVoxelTool_K2_SimpleTick_Statics::NewProp_CollisionChannel = { "CollisionChannel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelTool_eventK2_SimpleTick_Parms, CollisionChannel), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(0, nullptr) }; // 756624936
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelTool_K2_SimpleTick_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelTool_K2_SimpleTick_Statics::NewProp_PlayerController,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelTool_K2_SimpleTick_Statics::NewProp_bEdit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelTool_K2_SimpleTick_Statics::NewProp_Keys_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelTool_K2_SimpleTick_Statics::NewProp_Keys_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelTool_K2_SimpleTick_Statics::NewProp_Keys,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelTool_K2_SimpleTick_Statics::NewProp_Axes_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelTool_K2_SimpleTick_Statics::NewProp_Axes_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelTool_K2_SimpleTick_Statics::NewProp_Axes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelTool_K2_SimpleTick_Statics::NewProp_DoEditOverride,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelTool_K2_SimpleTick_Statics::NewProp_CollisionChannel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelTool_K2_SimpleTick_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelTool_K2_SimpleTick_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelTool, nullptr, "K2_SimpleTick", Z_Construct_UFunction_UVoxelTool_K2_SimpleTick_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelTool_K2_SimpleTick_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVoxelTool_K2_SimpleTick_Statics::VoxelTool_eventK2_SimpleTick_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelTool_K2_SimpleTick_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelTool_K2_SimpleTick_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVoxelTool_K2_SimpleTick_Statics::VoxelTool_eventK2_SimpleTick_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVoxelTool_K2_SimpleTick()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelTool_K2_SimpleTick_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelTool::execK2_SimpleTick)
{
	P_GET_OBJECT(APlayerController,Z_Param_PlayerController);
	P_GET_UBOOL(Z_Param_bEdit);
	P_GET_TMAP_REF(FName,bool,Z_Param_Out_Keys);
	P_GET_TMAP_REF(FName,float,Z_Param_Out_Axes);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_DoEditOverride);
	P_GET_PROPERTY(FByteProperty,Z_Param_CollisionChannel);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->K2_SimpleTick(Z_Param_PlayerController,Z_Param_bEdit,Z_Param_Out_Keys,Z_Param_Out_Axes,FDoEditDynamicOverride(Z_Param_Out_DoEditOverride),ECollisionChannel(Z_Param_CollisionChannel));
	P_NATIVE_END;
}
// ********** End Class UVoxelTool Function K2_SimpleTick ******************************************

// ********** Begin Class UVoxelTool Function MakeToolAxes *****************************************
struct Z_Construct_UFunction_UVoxelTool_MakeToolAxes_Statics
{
	struct VoxelTool_eventMakeToolAxes_Parms
	{
		float BrushSizeDelta;
		float FalloffDelta;
		float StrengthDelta;
		TMap<FName,float> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Voxel|Tools" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelTool.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BrushSizeDelta;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FalloffDelta;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StrengthDelta;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoxelTool_MakeToolAxes_Statics::NewProp_BrushSizeDelta = { "BrushSizeDelta", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelTool_eventMakeToolAxes_Parms, BrushSizeDelta), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoxelTool_MakeToolAxes_Statics::NewProp_FalloffDelta = { "FalloffDelta", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelTool_eventMakeToolAxes_Parms, FalloffDelta), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoxelTool_MakeToolAxes_Statics::NewProp_StrengthDelta = { "StrengthDelta", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelTool_eventMakeToolAxes_Parms, StrengthDelta), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoxelTool_MakeToolAxes_Statics::NewProp_ReturnValue_ValueProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UVoxelTool_MakeToolAxes_Statics::NewProp_ReturnValue_Key_KeyProp = { "ReturnValue_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UVoxelTool_MakeToolAxes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelTool_eventMakeToolAxes_Parms, ReturnValue), EMapPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelTool_MakeToolAxes_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelTool_MakeToolAxes_Statics::NewProp_BrushSizeDelta,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelTool_MakeToolAxes_Statics::NewProp_FalloffDelta,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelTool_MakeToolAxes_Statics::NewProp_StrengthDelta,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelTool_MakeToolAxes_Statics::NewProp_ReturnValue_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelTool_MakeToolAxes_Statics::NewProp_ReturnValue_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelTool_MakeToolAxes_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelTool_MakeToolAxes_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelTool_MakeToolAxes_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelTool, nullptr, "MakeToolAxes", Z_Construct_UFunction_UVoxelTool_MakeToolAxes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelTool_MakeToolAxes_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVoxelTool_MakeToolAxes_Statics::VoxelTool_eventMakeToolAxes_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelTool_MakeToolAxes_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelTool_MakeToolAxes_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVoxelTool_MakeToolAxes_Statics::VoxelTool_eventMakeToolAxes_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVoxelTool_MakeToolAxes()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelTool_MakeToolAxes_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelTool::execMakeToolAxes)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_BrushSizeDelta);
	P_GET_PROPERTY(FFloatProperty,Z_Param_FalloffDelta);
	P_GET_PROPERTY(FFloatProperty,Z_Param_StrengthDelta);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TMap<FName,float>*)Z_Param__Result=UVoxelTool::MakeToolAxes(Z_Param_BrushSizeDelta,Z_Param_FalloffDelta,Z_Param_StrengthDelta);
	P_NATIVE_END;
}
// ********** End Class UVoxelTool Function MakeToolAxes *******************************************

// ********** Begin Class UVoxelTool Function MakeToolKeys *****************************************
struct Z_Construct_UFunction_UVoxelTool_MakeToolKeys_Statics
{
	struct VoxelTool_eventMakeToolKeys_Parms
	{
		bool bAlternativeMode;
		TMap<FName,bool> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Voxel|Tools" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelTool.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bAlternativeMode_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAlternativeMode;
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UVoxelTool_MakeToolKeys_Statics::NewProp_bAlternativeMode_SetBit(void* Obj)
{
	((VoxelTool_eventMakeToolKeys_Parms*)Obj)->bAlternativeMode = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelTool_MakeToolKeys_Statics::NewProp_bAlternativeMode = { "bAlternativeMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VoxelTool_eventMakeToolKeys_Parms), &Z_Construct_UFunction_UVoxelTool_MakeToolKeys_Statics::NewProp_bAlternativeMode_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelTool_MakeToolKeys_Statics::NewProp_ReturnValue_ValueProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UVoxelTool_MakeToolKeys_Statics::NewProp_ReturnValue_Key_KeyProp = { "ReturnValue_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UVoxelTool_MakeToolKeys_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelTool_eventMakeToolKeys_Parms, ReturnValue), EMapPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelTool_MakeToolKeys_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelTool_MakeToolKeys_Statics::NewProp_bAlternativeMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelTool_MakeToolKeys_Statics::NewProp_ReturnValue_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelTool_MakeToolKeys_Statics::NewProp_ReturnValue_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelTool_MakeToolKeys_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelTool_MakeToolKeys_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelTool_MakeToolKeys_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelTool, nullptr, "MakeToolKeys", Z_Construct_UFunction_UVoxelTool_MakeToolKeys_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelTool_MakeToolKeys_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVoxelTool_MakeToolKeys_Statics::VoxelTool_eventMakeToolKeys_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelTool_MakeToolKeys_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelTool_MakeToolKeys_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVoxelTool_MakeToolKeys_Statics::VoxelTool_eventMakeToolKeys_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVoxelTool_MakeToolKeys()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelTool_MakeToolKeys_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelTool::execMakeToolKeys)
{
	P_GET_UBOOL(Z_Param_bAlternativeMode);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TMap<FName,bool>*)Z_Param__Result=UVoxelTool::MakeToolKeys(Z_Param_bAlternativeMode);
	P_NATIVE_END;
}
// ********** End Class UVoxelTool Function MakeToolKeys *******************************************

// ********** Begin Class UVoxelTool Function MakeVoxelTool ****************************************
struct Z_Construct_UFunction_UVoxelTool_MakeVoxelTool_Statics
{
	struct VoxelTool_eventMakeVoxelTool_Parms
	{
		TSubclassOf<UVoxelTool> ToolClass;
		UVoxelTool* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Voxel|Tools" },
		{ "DeterminesOutputType", "ToolClass" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelTool.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_ToolClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UVoxelTool_MakeVoxelTool_Statics::NewProp_ToolClass = { "ToolClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelTool_eventMakeVoxelTool_Parms, ToolClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UVoxelTool_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelTool_MakeVoxelTool_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelTool_eventMakeVoxelTool_Parms, ReturnValue), Z_Construct_UClass_UVoxelTool_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelTool_MakeVoxelTool_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelTool_MakeVoxelTool_Statics::NewProp_ToolClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelTool_MakeVoxelTool_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelTool_MakeVoxelTool_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelTool_MakeVoxelTool_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelTool, nullptr, "MakeVoxelTool", Z_Construct_UFunction_UVoxelTool_MakeVoxelTool_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelTool_MakeVoxelTool_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVoxelTool_MakeVoxelTool_Statics::VoxelTool_eventMakeVoxelTool_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelTool_MakeVoxelTool_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelTool_MakeVoxelTool_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVoxelTool_MakeVoxelTool_Statics::VoxelTool_eventMakeVoxelTool_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVoxelTool_MakeVoxelTool()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelTool_MakeVoxelTool_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelTool::execMakeVoxelTool)
{
	P_GET_OBJECT(UClass,Z_Param_ToolClass);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UVoxelTool**)Z_Param__Result=UVoxelTool::MakeVoxelTool(Z_Param_ToolClass);
	P_NATIVE_END;
}
// ********** End Class UVoxelTool Function MakeVoxelTool ******************************************

// ********** Begin Class UVoxelTool ***************************************************************
void UVoxelTool::StaticRegisterNativesUVoxelTool()
{
	UClass* Class = UVoxelTool::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Apply", &UVoxelTool::execApply },
		{ "Deproject", &UVoxelTool::execDeproject },
		{ "DisableTool", &UVoxelTool::execDisableTool },
		{ "EnableTool", &UVoxelTool::execEnableTool },
		{ "GetAxis", &UVoxelTool::execGetAxis },
		{ "GetRayDirection", &UVoxelTool::execGetRayDirection },
		{ "GetRayOrigin", &UVoxelTool::execGetRayOrigin },
		{ "GetToolName", &UVoxelTool::execGetToolName },
		{ "GetVoxelWorld", &UVoxelTool::execGetVoxelWorld },
		{ "IsAlternativeMode", &UVoxelTool::execIsAlternativeMode },
		{ "IsKeyDown", &UVoxelTool::execIsKeyDown },
		{ "K2_AdvancedTick", &UVoxelTool::execK2_AdvancedTick },
		{ "K2_SimpleTick", &UVoxelTool::execK2_SimpleTick },
		{ "MakeToolAxes", &UVoxelTool::execMakeToolAxes },
		{ "MakeToolKeys", &UVoxelTool::execMakeToolKeys },
		{ "MakeVoxelTool", &UVoxelTool::execMakeVoxelTool },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UVoxelTool;
UClass* UVoxelTool::GetPrivateStaticClass()
{
	using TClass = UVoxelTool;
	if (!Z_Registration_Info_UClass_UVoxelTool.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("VoxelTool"),
			Z_Registration_Info_UClass_UVoxelTool.InnerSingleton,
			StaticRegisterNativesUVoxelTool,
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
	return Z_Registration_Info_UClass_UVoxelTool.InnerSingleton;
}
UClass* Z_Construct_UClass_UVoxelTool_NoRegister()
{
	return UVoxelTool::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UVoxelTool_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "VoxelTools/Tools/VoxelTool.h" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ToolName_MetaData[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ToolTip_MetaData[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShowInDropdown_MetaData[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShowPaintMaterial_MetaData[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SharedConfig_MetaData[] = {
		{ "Category", "Voxel" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Shared config allows to share some values across several tools, like the brush size or the paint material\n// If not set, it will be created in EnableTool\n" },
#endif
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelTool.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Shared config allows to share some values across several tools, like the brush size or the paint material\nIf not set, it will be created in EnableTool" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[] = {
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FrozenTickData_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// For debug\n" },
#endif
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelTool.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "For debug" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_ToolName;
	static const UECodeGen_Private::FTextPropertyParams NewProp_ToolTip;
	static void NewProp_bShowInDropdown_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowInDropdown;
	static void NewProp_bShowPaintMaterial_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowPaintMaterial;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SharedConfig;
	static void NewProp_bEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FrozenTickData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UVoxelTool_Apply, "Apply" }, // 3478398198
		{ &Z_Construct_UFunction_UVoxelTool_Deproject, "Deproject" }, // 1270285874
		{ &Z_Construct_UFunction_UVoxelTool_DisableTool, "DisableTool" }, // 655206355
		{ &Z_Construct_UDelegateFunction_UVoxelTool_DoEditDynamicOverride__DelegateSignature, "DoEditDynamicOverride__DelegateSignature" }, // 2879993156
		{ &Z_Construct_UFunction_UVoxelTool_EnableTool, "EnableTool" }, // 2001592791
		{ &Z_Construct_UFunction_UVoxelTool_GetAxis, "GetAxis" }, // 475486378
		{ &Z_Construct_UFunction_UVoxelTool_GetRayDirection, "GetRayDirection" }, // 3249803835
		{ &Z_Construct_UFunction_UVoxelTool_GetRayOrigin, "GetRayOrigin" }, // 2695999137
		{ &Z_Construct_UFunction_UVoxelTool_GetToolName, "GetToolName" }, // 4158859536
		{ &Z_Construct_UFunction_UVoxelTool_GetVoxelWorld, "GetVoxelWorld" }, // 1282847381
		{ &Z_Construct_UFunction_UVoxelTool_IsAlternativeMode, "IsAlternativeMode" }, // 3991187381
		{ &Z_Construct_UFunction_UVoxelTool_IsKeyDown, "IsKeyDown" }, // 643609039
		{ &Z_Construct_UFunction_UVoxelTool_K2_AdvancedTick, "K2_AdvancedTick" }, // 3979646676
		{ &Z_Construct_UFunction_UVoxelTool_K2_SimpleTick, "K2_SimpleTick" }, // 376762859
		{ &Z_Construct_UFunction_UVoxelTool_MakeToolAxes, "MakeToolAxes" }, // 238211098
		{ &Z_Construct_UFunction_UVoxelTool_MakeToolKeys, "MakeToolKeys" }, // 1542907957
		{ &Z_Construct_UFunction_UVoxelTool_MakeVoxelTool, "MakeVoxelTool" }, // 2809231247
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelTool>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UVoxelTool_Statics::NewProp_ToolName = { "ToolName", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelTool, ToolName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ToolName_MetaData), NewProp_ToolName_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UVoxelTool_Statics::NewProp_ToolTip = { "ToolTip", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelTool, ToolTip), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ToolTip_MetaData), NewProp_ToolTip_MetaData) };
void Z_Construct_UClass_UVoxelTool_Statics::NewProp_bShowInDropdown_SetBit(void* Obj)
{
	((UVoxelTool*)Obj)->bShowInDropdown = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVoxelTool_Statics::NewProp_bShowInDropdown = { "bShowInDropdown", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UVoxelTool), &Z_Construct_UClass_UVoxelTool_Statics::NewProp_bShowInDropdown_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShowInDropdown_MetaData), NewProp_bShowInDropdown_MetaData) };
void Z_Construct_UClass_UVoxelTool_Statics::NewProp_bShowPaintMaterial_SetBit(void* Obj)
{
	((UVoxelTool*)Obj)->bShowPaintMaterial = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVoxelTool_Statics::NewProp_bShowPaintMaterial = { "bShowPaintMaterial", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UVoxelTool), &Z_Construct_UClass_UVoxelTool_Statics::NewProp_bShowPaintMaterial_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShowPaintMaterial_MetaData), NewProp_bShowPaintMaterial_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVoxelTool_Statics::NewProp_SharedConfig = { "SharedConfig", nullptr, (EPropertyFlags)0x0114000000000014, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelTool, SharedConfig), Z_Construct_UClass_UVoxelToolSharedConfig_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SharedConfig_MetaData), NewProp_SharedConfig_MetaData) };
void Z_Construct_UClass_UVoxelTool_Statics::NewProp_bEnabled_SetBit(void* Obj)
{
	((UVoxelTool*)Obj)->bEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVoxelTool_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UVoxelTool), &Z_Construct_UClass_UVoxelTool_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnabled_MetaData), NewProp_bEnabled_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVoxelTool_Statics::NewProp_FrozenTickData = { "FrozenTickData", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelTool, FrozenTickData), Z_Construct_UScriptStruct_FVoxelToolTickData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FrozenTickData_MetaData), NewProp_FrozenTickData_MetaData) }; // 3851510337
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelTool_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelTool_Statics::NewProp_ToolName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelTool_Statics::NewProp_ToolTip,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelTool_Statics::NewProp_bShowInDropdown,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelTool_Statics::NewProp_bShowPaintMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelTool_Statics::NewProp_SharedConfig,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelTool_Statics::NewProp_bEnabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelTool_Statics::NewProp_FrozenTickData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelTool_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UVoxelTool_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelTool_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelTool_Statics::ClassParams = {
	&UVoxelTool::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UVoxelTool_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelTool_Statics::PropPointers),
	0,
	0x001000A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelTool_Statics::Class_MetaDataParams), Z_Construct_UClass_UVoxelTool_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVoxelTool()
{
	if (!Z_Registration_Info_UClass_UVoxelTool.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelTool.OuterSingleton, Z_Construct_UClass_UVoxelTool_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVoxelTool.OuterSingleton;
}
UVoxelTool::UVoxelTool(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelTool);
UVoxelTool::~UVoxelTool() {}
// ********** End Class UVoxelTool *****************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelTools_Tools_VoxelTool_h__Script_Voxel_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FVoxelToolTickData::StaticStruct, Z_Construct_UScriptStruct_FVoxelToolTickData_Statics::NewStructOps, TEXT("VoxelToolTickData"), &Z_Registration_Info_UScriptStruct_FVoxelToolTickData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVoxelToolTickData), 3851510337U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UVoxelToolSharedConfig, UVoxelToolSharedConfig::StaticClass, TEXT("UVoxelToolSharedConfig"), &Z_Registration_Info_UClass_UVoxelToolSharedConfig, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelToolSharedConfig), 1984213594U) },
		{ Z_Construct_UClass_UVoxelTool, UVoxelTool::StaticClass, TEXT("UVoxelTool"), &Z_Registration_Info_UClass_UVoxelTool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelTool), 384094087U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelTools_Tools_VoxelTool_h__Script_Voxel_2518265294(TEXT("/Script/Voxel"),
	Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelTools_Tools_VoxelTool_h__Script_Voxel_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelTools_Tools_VoxelTool_h__Script_Voxel_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelTools_Tools_VoxelTool_h__Script_Voxel_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelTools_Tools_VoxelTool_h__Script_Voxel_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
