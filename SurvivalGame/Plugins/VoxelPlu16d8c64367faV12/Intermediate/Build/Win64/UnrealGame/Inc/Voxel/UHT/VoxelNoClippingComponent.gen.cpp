// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Voxel/Public/VoxelComponents/VoxelNoClippingComponent.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeVoxelNoClippingComponent() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
UPackage* Z_Construct_UPackage__Script_Voxel();
VOXEL_API UClass* Z_Construct_UClass_AVoxelWorld_NoRegister();
VOXEL_API UClass* Z_Construct_UClass_UVoxelNoClippingComponent();
VOXEL_API UClass* Z_Construct_UClass_UVoxelNoClippingComponent_NoRegister();
VOXEL_API UFunction* Z_Construct_UDelegateFunction_UVoxelNoClippingComponent_OnMoveTowardsSurface__DelegateSignature();
VOXEL_API UFunction* Z_Construct_UDelegateFunction_UVoxelNoClippingComponent_OnStopMovingTowardsSurface__DelegateSignature();
VOXEL_API UFunction* Z_Construct_UDelegateFunction_UVoxelNoClippingComponent_OnTeleported__DelegateSignature();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FOnMoveTowardsSurface *************************************************
struct Z_Construct_UDelegateFunction_UVoxelNoClippingComponent_OnMoveTowardsSurface__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/VoxelComponents/VoxelNoClippingComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_UVoxelNoClippingComponent_OnMoveTowardsSurface__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelNoClippingComponent, nullptr, "OnMoveTowardsSurface__DelegateSignature", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UVoxelNoClippingComponent_OnMoveTowardsSurface__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UVoxelNoClippingComponent_OnMoveTowardsSurface__DelegateSignature_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UDelegateFunction_UVoxelNoClippingComponent_OnMoveTowardsSurface__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UVoxelNoClippingComponent_OnMoveTowardsSurface__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void UVoxelNoClippingComponent::FOnMoveTowardsSurface_DelegateWrapper(const FMulticastScriptDelegate& OnMoveTowardsSurface)
{
	OnMoveTowardsSurface.ProcessMulticastDelegate<UObject>(NULL);
}
// ********** End Delegate FOnMoveTowardsSurface ***************************************************

// ********** Begin Delegate FOnStopMovingTowardsSurface *******************************************
struct Z_Construct_UDelegateFunction_UVoxelNoClippingComponent_OnStopMovingTowardsSurface__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/VoxelComponents/VoxelNoClippingComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_UVoxelNoClippingComponent_OnStopMovingTowardsSurface__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelNoClippingComponent, nullptr, "OnStopMovingTowardsSurface__DelegateSignature", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UVoxelNoClippingComponent_OnStopMovingTowardsSurface__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UVoxelNoClippingComponent_OnStopMovingTowardsSurface__DelegateSignature_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UDelegateFunction_UVoxelNoClippingComponent_OnStopMovingTowardsSurface__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UVoxelNoClippingComponent_OnStopMovingTowardsSurface__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void UVoxelNoClippingComponent::FOnStopMovingTowardsSurface_DelegateWrapper(const FMulticastScriptDelegate& OnStopMovingTowardsSurface)
{
	OnStopMovingTowardsSurface.ProcessMulticastDelegate<UObject>(NULL);
}
// ********** End Delegate FOnStopMovingTowardsSurface *********************************************

// ********** Begin Delegate FOnTeleported *********************************************************
struct Z_Construct_UDelegateFunction_UVoxelNoClippingComponent_OnTeleported__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/VoxelComponents/VoxelNoClippingComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_UVoxelNoClippingComponent_OnTeleported__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelNoClippingComponent, nullptr, "OnTeleported__DelegateSignature", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UVoxelNoClippingComponent_OnTeleported__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UVoxelNoClippingComponent_OnTeleported__DelegateSignature_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UDelegateFunction_UVoxelNoClippingComponent_OnTeleported__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UVoxelNoClippingComponent_OnTeleported__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void UVoxelNoClippingComponent::FOnTeleported_DelegateWrapper(const FMulticastScriptDelegate& OnTeleported)
{
	OnTeleported.ProcessMulticastDelegate<UObject>(NULL);
}
// ********** End Delegate FOnTeleported ***********************************************************

// ********** Begin Class UVoxelNoClippingComponent Function ShouldUseVoxelWorld *******************
struct VoxelNoClippingComponent_eventShouldUseVoxelWorld_Parms
{
	AVoxelWorld* VoxelWorld;
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	VoxelNoClippingComponent_eventShouldUseVoxelWorld_Parms()
		: ReturnValue(false)
	{
	}
};
static FName NAME_UVoxelNoClippingComponent_ShouldUseVoxelWorld = FName(TEXT("ShouldUseVoxelWorld"));
bool UVoxelNoClippingComponent::ShouldUseVoxelWorld(AVoxelWorld* VoxelWorld)
{
	UFunction* Func = FindFunctionChecked(NAME_UVoxelNoClippingComponent_ShouldUseVoxelWorld);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		VoxelNoClippingComponent_eventShouldUseVoxelWorld_Parms Parms;
		Parms.VoxelWorld=VoxelWorld;
	ProcessEvent(Func,&Parms);
		return !!Parms.ReturnValue;
	}
	else
	{
		return ShouldUseVoxelWorld_Implementation(VoxelWorld);
	}
}
struct Z_Construct_UFunction_UVoxelNoClippingComponent_ShouldUseVoxelWorld_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Voxel" },
		{ "Comment", "// Implement this to select which voxel worlds to consider\n" },
		{ "ModuleRelativePath", "Public/VoxelComponents/VoxelNoClippingComponent.h" },
		{ "ToolTip", "Implement this to select which voxel worlds to consider" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_VoxelWorld;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelNoClippingComponent_ShouldUseVoxelWorld_Statics::NewProp_VoxelWorld = { "VoxelWorld", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelNoClippingComponent_eventShouldUseVoxelWorld_Parms, VoxelWorld), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UVoxelNoClippingComponent_ShouldUseVoxelWorld_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((VoxelNoClippingComponent_eventShouldUseVoxelWorld_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelNoClippingComponent_ShouldUseVoxelWorld_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VoxelNoClippingComponent_eventShouldUseVoxelWorld_Parms), &Z_Construct_UFunction_UVoxelNoClippingComponent_ShouldUseVoxelWorld_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelNoClippingComponent_ShouldUseVoxelWorld_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelNoClippingComponent_ShouldUseVoxelWorld_Statics::NewProp_VoxelWorld,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelNoClippingComponent_ShouldUseVoxelWorld_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelNoClippingComponent_ShouldUseVoxelWorld_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelNoClippingComponent_ShouldUseVoxelWorld_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelNoClippingComponent, nullptr, "ShouldUseVoxelWorld", Z_Construct_UFunction_UVoxelNoClippingComponent_ShouldUseVoxelWorld_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelNoClippingComponent_ShouldUseVoxelWorld_Statics::PropPointers), sizeof(VoxelNoClippingComponent_eventShouldUseVoxelWorld_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelNoClippingComponent_ShouldUseVoxelWorld_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelNoClippingComponent_ShouldUseVoxelWorld_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(VoxelNoClippingComponent_eventShouldUseVoxelWorld_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVoxelNoClippingComponent_ShouldUseVoxelWorld()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelNoClippingComponent_ShouldUseVoxelWorld_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelNoClippingComponent::execShouldUseVoxelWorld)
{
	P_GET_OBJECT(AVoxelWorld,Z_Param_VoxelWorld);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->ShouldUseVoxelWorld_Implementation(Z_Param_VoxelWorld);
	P_NATIVE_END;
}
// ********** End Class UVoxelNoClippingComponent Function ShouldUseVoxelWorld *********************

// ********** Begin Class UVoxelNoClippingComponent ************************************************
void UVoxelNoClippingComponent::StaticRegisterNativesUVoxelNoClippingComponent()
{
	UClass* Class = UVoxelNoClippingComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ShouldUseVoxelWorld", &UVoxelNoClippingComponent::execShouldUseVoxelWorld },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UVoxelNoClippingComponent;
UClass* UVoxelNoClippingComponent::GetPrivateStaticClass()
{
	using TClass = UVoxelNoClippingComponent;
	if (!Z_Registration_Info_UClass_UVoxelNoClippingComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("VoxelNoClippingComponent"),
			Z_Registration_Info_UClass_UVoxelNoClippingComponent.InnerSingleton,
			StaticRegisterNativesUVoxelNoClippingComponent,
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
	return Z_Registration_Info_UClass_UVoxelNoClippingComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_UVoxelNoClippingComponent_NoRegister()
{
	return UVoxelNoClippingComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UVoxelNoClippingComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Voxel" },
		{ "Comment", "// Add this to your player to prevent it from falling through the voxel world when digging under its feet\n//\n// On tick, will check if the player is inside the voxel world surface\n// If it is, it will search for the nearest safe position\n// - if found: teleport there, resetting its velocity. OnTeleported will be fired.\n// - if not: the MoveTowardsSurface event will be fired every tick, ignoring TickRate. Bind this and eg move the player upwards.\n//   When the player will be safe again, StopMovingTowardsSurface will be fired, eg to reset the velocity.\n//\n// If you set EnableDefaultBehavior to true, you don't need to bind any of the event, Characters will be automatically handled\n" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "VoxelComponents/VoxelNoClippingComponent.h" },
		{ "ModuleRelativePath", "Public/VoxelComponents/VoxelNoClippingComponent.h" },
		{ "ToolTip", "Add this to your player to prevent it from falling through the voxel world when digging under its feet\n\nOn tick, will check if the player is inside the voxel world surface\nIf it is, it will search for the nearest safe position\n- if found: teleport there, resetting its velocity. OnTeleported will be fired.\n- if not: the MoveTowardsSurface event will be fired every tick, ignoring TickRate. Bind this and eg move the player upwards.\n  When the player will be safe again, StopMovingTowardsSurface will be fired, eg to reset the velocity.\n\nIf you set EnableDefaultBehavior to true, you don't need to bind any of the event, Characters will be automatically handled" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TickRate_MetaData[] = {
		{ "Category", "Voxel - Config" },
		{ "Comment", "// Delay in seconds between checks\n" },
		{ "ModuleRelativePath", "Public/VoxelComponents/VoxelNoClippingComponent.h" },
		{ "ToolTip", "Delay in seconds between checks" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SearchRange_MetaData[] = {
		{ "Category", "Voxel - Config" },
		{ "Comment", "// How far in voxels to search for an empty voxel\n// Keep low!\n" },
		{ "ModuleRelativePath", "Public/VoxelComponents/VoxelNoClippingComponent.h" },
		{ "ToolTip", "How far in voxels to search for an empty voxel\nKeep low!" },
		{ "UIMax", "32" },
		{ "UIMin", "1" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableDefaultBehavior_MetaData[] = {
		{ "Category", "Voxel - Default Behavior" },
		{ "Comment", "// If true, you don't need to implement any of the events, just set the settings below\n// If the owner is a character, it will be automatically detected & the correct behavior will be applied\n" },
		{ "ModuleRelativePath", "Public/VoxelComponents/VoxelNoClippingComponent.h" },
		{ "ToolTip", "If true, you don't need to implement any of the events, just set the settings below\nIf the owner is a character, it will be automatically detected & the correct behavior will be applied" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Speed_MetaData[] = {
		{ "Category", "Voxel - Default Behavior" },
		{ "Comment", "// Speed in unreal units per second at which to move towards the surface\n// If you set this too high, we might overshot!\n" },
		{ "EditCondition", "bEnableDefaultBehavior" },
		{ "ModuleRelativePath", "Public/VoxelComponents/VoxelNoClippingComponent.h" },
		{ "ToolTip", "Speed in unreal units per second at which to move towards the surface\nIf you set this too high, we might overshot!" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsPlanet_MetaData[] = {
		{ "Category", "Voxel - Default Behavior" },
		{ "Comment", "// If true, will move away from a point instead of upwards\n" },
		{ "EditCondition", "bEnableDefaultBehavior" },
		{ "ModuleRelativePath", "Public/VoxelComponents/VoxelNoClippingComponent.h" },
		{ "ToolTip", "If true, will move away from a point instead of upwards" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlanetCenter_MetaData[] = {
		{ "Category", "Voxel - Default Behavior" },
		{ "EditCondition", "bEnableDefaultBehavior && bIsPlanet" },
		{ "ModuleRelativePath", "Public/VoxelComponents/VoxelNoClippingComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveTowardsSurface_MetaData[] = {
		{ "Comment", "// Will be called when we're clipping, but no safe position can be found\n// You can bind this to eg move the player upward\n// When the player will be safe again, StopMovingTowardsSurface will be fired\n" },
		{ "ModuleRelativePath", "Public/VoxelComponents/VoxelNoClippingComponent.h" },
		{ "ToolTip", "Will be called when we're clipping, but no safe position can be found\nYou can bind this to eg move the player upward\nWhen the player will be safe again, StopMovingTowardsSurface will be fired" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StopMovingTowardsSurface_MetaData[] = {
		{ "Comment", "// Will be fired once we're safe again\n" },
		{ "ModuleRelativePath", "Public/VoxelComponents/VoxelNoClippingComponent.h" },
		{ "ToolTip", "Will be fired once we're safe again" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnTeleported_MetaData[] = {
		{ "Comment", "// Called when we teleported to a safe location. You usually want to clear the velocity in there to avoid issues\n" },
		{ "ModuleRelativePath", "Public/VoxelComponents/VoxelNoClippingComponent.h" },
		{ "ToolTip", "Called when we teleported to a safe location. You usually want to clear the velocity in there to avoid issues" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsInsideSurface_MetaData[] = {
		{ "Category", "Voxel" },
		{ "Comment", "// True if we are currently inside the voxel world surface\n" },
		{ "ModuleRelativePath", "Public/VoxelComponents/VoxelNoClippingComponent.h" },
		{ "ToolTip", "True if we are currently inside the voxel world surface" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TickRate;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SearchRange;
	static void NewProp_bEnableDefaultBehavior_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableDefaultBehavior;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Speed;
	static void NewProp_bIsPlanet_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsPlanet;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PlanetCenter;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_MoveTowardsSurface;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_StopMovingTowardsSurface;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnTeleported;
	static void NewProp_bIsInsideSurface_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsInsideSurface;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UDelegateFunction_UVoxelNoClippingComponent_OnMoveTowardsSurface__DelegateSignature, "OnMoveTowardsSurface__DelegateSignature" }, // 1595158468
		{ &Z_Construct_UDelegateFunction_UVoxelNoClippingComponent_OnStopMovingTowardsSurface__DelegateSignature, "OnStopMovingTowardsSurface__DelegateSignature" }, // 1072679425
		{ &Z_Construct_UDelegateFunction_UVoxelNoClippingComponent_OnTeleported__DelegateSignature, "OnTeleported__DelegateSignature" }, // 317260606
		{ &Z_Construct_UFunction_UVoxelNoClippingComponent_ShouldUseVoxelWorld, "ShouldUseVoxelWorld" }, // 3359184052
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelNoClippingComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVoxelNoClippingComponent_Statics::NewProp_TickRate = { "TickRate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelNoClippingComponent, TickRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TickRate_MetaData), NewProp_TickRate_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UVoxelNoClippingComponent_Statics::NewProp_SearchRange = { "SearchRange", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelNoClippingComponent, SearchRange), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SearchRange_MetaData), NewProp_SearchRange_MetaData) };
void Z_Construct_UClass_UVoxelNoClippingComponent_Statics::NewProp_bEnableDefaultBehavior_SetBit(void* Obj)
{
	((UVoxelNoClippingComponent*)Obj)->bEnableDefaultBehavior = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVoxelNoClippingComponent_Statics::NewProp_bEnableDefaultBehavior = { "bEnableDefaultBehavior", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UVoxelNoClippingComponent), &Z_Construct_UClass_UVoxelNoClippingComponent_Statics::NewProp_bEnableDefaultBehavior_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableDefaultBehavior_MetaData), NewProp_bEnableDefaultBehavior_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVoxelNoClippingComponent_Statics::NewProp_Speed = { "Speed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelNoClippingComponent, Speed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Speed_MetaData), NewProp_Speed_MetaData) };
void Z_Construct_UClass_UVoxelNoClippingComponent_Statics::NewProp_bIsPlanet_SetBit(void* Obj)
{
	((UVoxelNoClippingComponent*)Obj)->bIsPlanet = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVoxelNoClippingComponent_Statics::NewProp_bIsPlanet = { "bIsPlanet", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UVoxelNoClippingComponent), &Z_Construct_UClass_UVoxelNoClippingComponent_Statics::NewProp_bIsPlanet_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsPlanet_MetaData), NewProp_bIsPlanet_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVoxelNoClippingComponent_Statics::NewProp_PlanetCenter = { "PlanetCenter", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelNoClippingComponent, PlanetCenter), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlanetCenter_MetaData), NewProp_PlanetCenter_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UVoxelNoClippingComponent_Statics::NewProp_MoveTowardsSurface = { "MoveTowardsSurface", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelNoClippingComponent, MoveTowardsSurface), Z_Construct_UDelegateFunction_UVoxelNoClippingComponent_OnMoveTowardsSurface__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveTowardsSurface_MetaData), NewProp_MoveTowardsSurface_MetaData) }; // 1595158468
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UVoxelNoClippingComponent_Statics::NewProp_StopMovingTowardsSurface = { "StopMovingTowardsSurface", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelNoClippingComponent, StopMovingTowardsSurface), Z_Construct_UDelegateFunction_UVoxelNoClippingComponent_OnStopMovingTowardsSurface__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StopMovingTowardsSurface_MetaData), NewProp_StopMovingTowardsSurface_MetaData) }; // 1072679425
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UVoxelNoClippingComponent_Statics::NewProp_OnTeleported = { "OnTeleported", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelNoClippingComponent, OnTeleported), Z_Construct_UDelegateFunction_UVoxelNoClippingComponent_OnTeleported__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnTeleported_MetaData), NewProp_OnTeleported_MetaData) }; // 317260606
void Z_Construct_UClass_UVoxelNoClippingComponent_Statics::NewProp_bIsInsideSurface_SetBit(void* Obj)
{
	((UVoxelNoClippingComponent*)Obj)->bIsInsideSurface = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVoxelNoClippingComponent_Statics::NewProp_bIsInsideSurface = { "bIsInsideSurface", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UVoxelNoClippingComponent), &Z_Construct_UClass_UVoxelNoClippingComponent_Statics::NewProp_bIsInsideSurface_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsInsideSurface_MetaData), NewProp_bIsInsideSurface_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelNoClippingComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelNoClippingComponent_Statics::NewProp_TickRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelNoClippingComponent_Statics::NewProp_SearchRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelNoClippingComponent_Statics::NewProp_bEnableDefaultBehavior,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelNoClippingComponent_Statics::NewProp_Speed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelNoClippingComponent_Statics::NewProp_bIsPlanet,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelNoClippingComponent_Statics::NewProp_PlanetCenter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelNoClippingComponent_Statics::NewProp_MoveTowardsSurface,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelNoClippingComponent_Statics::NewProp_StopMovingTowardsSurface,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelNoClippingComponent_Statics::NewProp_OnTeleported,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelNoClippingComponent_Statics::NewProp_bIsInsideSurface,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNoClippingComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UVoxelNoClippingComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USceneComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNoClippingComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelNoClippingComponent_Statics::ClassParams = {
	&UVoxelNoClippingComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UVoxelNoClippingComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNoClippingComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNoClippingComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UVoxelNoClippingComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVoxelNoClippingComponent()
{
	if (!Z_Registration_Info_UClass_UVoxelNoClippingComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelNoClippingComponent.OuterSingleton, Z_Construct_UClass_UVoxelNoClippingComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVoxelNoClippingComponent.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelNoClippingComponent);
UVoxelNoClippingComponent::~UVoxelNoClippingComponent() {}
// ********** End Class UVoxelNoClippingComponent **************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelComponents_VoxelNoClippingComponent_h__Script_Voxel_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UVoxelNoClippingComponent, UVoxelNoClippingComponent::StaticClass, TEXT("UVoxelNoClippingComponent"), &Z_Registration_Info_UClass_UVoxelNoClippingComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelNoClippingComponent), 4035803006U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelComponents_VoxelNoClippingComponent_h__Script_Voxel_3392205319(TEXT("/Script/Voxel"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelComponents_VoxelNoClippingComponent_h__Script_Voxel_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelComponents_VoxelNoClippingComponent_h__Script_Voxel_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
