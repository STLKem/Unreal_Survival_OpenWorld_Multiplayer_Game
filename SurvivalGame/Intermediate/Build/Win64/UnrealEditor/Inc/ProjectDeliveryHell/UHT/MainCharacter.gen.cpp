// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MainCharacter.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeMainCharacter() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
PROJECTDELIVERYHELL_API UClass* Z_Construct_UClass_AMainCharacter();
PROJECTDELIVERYHELL_API UClass* Z_Construct_UClass_AMainCharacter_NoRegister();
PROJECTDELIVERYHELL_API UClass* Z_Construct_UClass_UBuildingComponent_NoRegister();
PROJECTDELIVERYHELL_API UClass* Z_Construct_UClass_UInventoryComponent_NoRegister();
PROJECTDELIVERYHELL_API UClass* Z_Construct_UClass_UMainInteractInterface_NoRegister();
PROJECTDELIVERYHELL_API UFunction* Z_Construct_UDelegateFunction_ProjectDeliveryHell_OnParameterUpdate__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_ProjectDeliveryHell();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FOnParameterUpdate ****************************************************
struct Z_Construct_UDelegateFunction_ProjectDeliveryHell_OnParameterUpdate__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MainCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_ProjectDeliveryHell_OnParameterUpdate__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_ProjectDeliveryHell, nullptr, "OnParameterUpdate__DelegateSignature", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectDeliveryHell_OnParameterUpdate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_ProjectDeliveryHell_OnParameterUpdate__DelegateSignature_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UDelegateFunction_ProjectDeliveryHell_OnParameterUpdate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ProjectDeliveryHell_OnParameterUpdate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnParameterUpdate_DelegateWrapper(const FMulticastScriptDelegate& OnParameterUpdate)
{
	OnParameterUpdate.ProcessMulticastDelegate<UObject>(NULL);
}
// ********** End Delegate FOnParameterUpdate ******************************************************

// ********** Begin Class AMainCharacter Function GetCameraData ************************************
struct Z_Construct_UFunction_AMainCharacter_GetCameraData_Statics
{
	struct MainCharacter_eventGetCameraData_Parms
	{
		FVector OutLocation;
		FVector OutForwardVector;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MainCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutForwardVector;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMainCharacter_GetCameraData_Statics::NewProp_OutLocation = { "OutLocation", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MainCharacter_eventGetCameraData_Parms, OutLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMainCharacter_GetCameraData_Statics::NewProp_OutForwardVector = { "OutForwardVector", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MainCharacter_eventGetCameraData_Parms, OutForwardVector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMainCharacter_GetCameraData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMainCharacter_GetCameraData_Statics::NewProp_OutLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMainCharacter_GetCameraData_Statics::NewProp_OutForwardVector,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMainCharacter_GetCameraData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMainCharacter_GetCameraData_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AMainCharacter, nullptr, "GetCameraData", Z_Construct_UFunction_AMainCharacter_GetCameraData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMainCharacter_GetCameraData_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMainCharacter_GetCameraData_Statics::MainCharacter_eventGetCameraData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMainCharacter_GetCameraData_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMainCharacter_GetCameraData_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AMainCharacter_GetCameraData_Statics::MainCharacter_eventGetCameraData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMainCharacter_GetCameraData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMainCharacter_GetCameraData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMainCharacter::execGetCameraData)
{
	P_GET_STRUCT_REF(FVector,Z_Param_Out_OutLocation);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_OutForwardVector);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetCameraData(Z_Param_Out_OutLocation,Z_Param_Out_OutForwardVector);
	P_NATIVE_END;
}
// ********** End Class AMainCharacter Function GetCameraData **************************************

// ********** Begin Class AMainCharacter Function Server_InteractWithResource **********************
struct MainCharacter_eventServer_InteractWithResource_Parms
{
	AActor* ResourceActor;
	AActor* Player;
};
static FName NAME_AMainCharacter_Server_InteractWithResource = FName(TEXT("Server_InteractWithResource"));
void AMainCharacter::Server_InteractWithResource(AActor* ResourceActor, AActor* Player)
{
	MainCharacter_eventServer_InteractWithResource_Parms Parms;
	Parms.ResourceActor=ResourceActor;
	Parms.Player=Player;
	UFunction* Func = FindFunctionChecked(NAME_AMainCharacter_Server_InteractWithResource);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AMainCharacter_Server_InteractWithResource_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MainCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ResourceActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Player;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMainCharacter_Server_InteractWithResource_Statics::NewProp_ResourceActor = { "ResourceActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MainCharacter_eventServer_InteractWithResource_Parms, ResourceActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMainCharacter_Server_InteractWithResource_Statics::NewProp_Player = { "Player", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MainCharacter_eventServer_InteractWithResource_Parms, Player), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMainCharacter_Server_InteractWithResource_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMainCharacter_Server_InteractWithResource_Statics::NewProp_ResourceActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMainCharacter_Server_InteractWithResource_Statics::NewProp_Player,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMainCharacter_Server_InteractWithResource_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMainCharacter_Server_InteractWithResource_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AMainCharacter, nullptr, "Server_InteractWithResource", Z_Construct_UFunction_AMainCharacter_Server_InteractWithResource_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMainCharacter_Server_InteractWithResource_Statics::PropPointers), sizeof(MainCharacter_eventServer_InteractWithResource_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00280CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMainCharacter_Server_InteractWithResource_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMainCharacter_Server_InteractWithResource_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(MainCharacter_eventServer_InteractWithResource_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMainCharacter_Server_InteractWithResource()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMainCharacter_Server_InteractWithResource_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMainCharacter::execServer_InteractWithResource)
{
	P_GET_OBJECT(AActor,Z_Param_ResourceActor);
	P_GET_OBJECT(AActor,Z_Param_Player);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Server_InteractWithResource_Implementation(Z_Param_ResourceActor,Z_Param_Player);
	P_NATIVE_END;
}
// ********** End Class AMainCharacter Function Server_InteractWithResource ************************

// ********** Begin Class AMainCharacter ***********************************************************
void AMainCharacter::StaticRegisterNativesAMainCharacter()
{
	UClass* Class = AMainCharacter::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetCameraData", &AMainCharacter::execGetCameraData },
		{ "Server_InteractWithResource", &AMainCharacter::execServer_InteractWithResource },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_AMainCharacter;
UClass* AMainCharacter::GetPrivateStaticClass()
{
	using TClass = AMainCharacter;
	if (!Z_Registration_Info_UClass_AMainCharacter.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("MainCharacter"),
			Z_Registration_Info_UClass_AMainCharacter.InnerSingleton,
			StaticRegisterNativesAMainCharacter,
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
	return Z_Registration_Info_UClass_AMainCharacter.InnerSingleton;
}
UClass* Z_Construct_UClass_AMainCharacter_NoRegister()
{
	return AMainCharacter::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AMainCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "MainCharacter.h" },
		{ "ModuleRelativePath", "Public/MainCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnParameterUpdate_MetaData[] = {
		{ "ModuleRelativePath", "Public/MainCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ViewCamera_MetaData[] = {
		{ "Category", "Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//UPROPERTY(VisibleAnywhere)\n//USpringArmComponent* CameraBoom;\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MainCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UPROPERTY(VisibleAnywhere)\nUSpringArmComponent* CameraBoom;" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BuildingComponent_MetaData[] = {
		{ "Category", "MainCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MainCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InventoryComponent_MetaData[] = {
		{ "Category", "MainCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MainCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Health_MetaData[] = {
		{ "Category", "MainCharacter" },
		{ "ModuleRelativePath", "Public/MainCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxHealth_MetaData[] = {
		{ "Category", "MainCharacter" },
		{ "ModuleRelativePath", "Public/MainCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Hunger_MetaData[] = {
		{ "Category", "MainCharacter" },
		{ "ModuleRelativePath", "Public/MainCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxHunger_MetaData[] = {
		{ "Category", "MainCharacter" },
		{ "ModuleRelativePath", "Public/MainCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Water_MetaData[] = {
		{ "Category", "MainCharacter" },
		{ "ModuleRelativePath", "Public/MainCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxWater_MetaData[] = {
		{ "Category", "MainCharacter" },
		{ "ModuleRelativePath", "Public/MainCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Temperature_MetaData[] = {
		{ "Category", "MainCharacter" },
		{ "ModuleRelativePath", "Public/MainCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Stamina_MetaData[] = {
		{ "Category", "MainCharacter" },
		{ "ModuleRelativePath", "Public/MainCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Armor_MetaData[] = {
		{ "Category", "MainCharacter" },
		{ "ModuleRelativePath", "Public/MainCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputMapping_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//UFUNCTION()\n//void OnRep_Parameter();\n" },
#endif
		{ "ModuleRelativePath", "Public/MainCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UFUNCTION()\nvoid OnRep_Parameter();" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MovementAction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/MainCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LookingAction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/MainCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Jumping_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/MainCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlacingBlock_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/MainCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Interacting_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/MainCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Shifting_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/MainCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Rotating_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/MainCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SwitchBuildMode_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/MainCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnParameterUpdate;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ViewCamera;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BuildingComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InventoryComponent;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Health;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxHealth;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Hunger;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxHunger;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Water;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxWater;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Temperature;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Stamina;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Armor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InputMapping;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MovementAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LookingAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Jumping;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlacingBlock;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Interacting;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Shifting;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Rotating;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SwitchBuildMode;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AMainCharacter_GetCameraData, "GetCameraData" }, // 2816787507
		{ &Z_Construct_UFunction_AMainCharacter_Server_InteractWithResource, "Server_InteractWithResource" }, // 1929039921
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMainCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AMainCharacter_Statics::NewProp_OnParameterUpdate = { "OnParameterUpdate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainCharacter, OnParameterUpdate), Z_Construct_UDelegateFunction_ProjectDeliveryHell_OnParameterUpdate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnParameterUpdate_MetaData), NewProp_OnParameterUpdate_MetaData) }; // 4277893747
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMainCharacter_Statics::NewProp_ViewCamera = { "ViewCamera", nullptr, (EPropertyFlags)0x002008000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainCharacter, ViewCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ViewCamera_MetaData), NewProp_ViewCamera_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMainCharacter_Statics::NewProp_BuildingComponent = { "BuildingComponent", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainCharacter, BuildingComponent), Z_Construct_UClass_UBuildingComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BuildingComponent_MetaData), NewProp_BuildingComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMainCharacter_Statics::NewProp_InventoryComponent = { "InventoryComponent", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainCharacter, InventoryComponent), Z_Construct_UClass_UInventoryComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InventoryComponent_MetaData), NewProp_InventoryComponent_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMainCharacter_Statics::NewProp_Health = { "Health", nullptr, (EPropertyFlags)0x0020080000020035, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainCharacter, Health), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Health_MetaData), NewProp_Health_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMainCharacter_Statics::NewProp_MaxHealth = { "MaxHealth", nullptr, (EPropertyFlags)0x0020080000020035, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainCharacter, MaxHealth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxHealth_MetaData), NewProp_MaxHealth_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMainCharacter_Statics::NewProp_Hunger = { "Hunger", nullptr, (EPropertyFlags)0x0020080000020035, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainCharacter, Hunger), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Hunger_MetaData), NewProp_Hunger_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMainCharacter_Statics::NewProp_MaxHunger = { "MaxHunger", nullptr, (EPropertyFlags)0x0020080000020035, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainCharacter, MaxHunger), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxHunger_MetaData), NewProp_MaxHunger_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMainCharacter_Statics::NewProp_Water = { "Water", nullptr, (EPropertyFlags)0x0020080000020035, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainCharacter, Water), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Water_MetaData), NewProp_Water_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMainCharacter_Statics::NewProp_MaxWater = { "MaxWater", nullptr, (EPropertyFlags)0x0020080000020035, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainCharacter, MaxWater), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxWater_MetaData), NewProp_MaxWater_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMainCharacter_Statics::NewProp_Temperature = { "Temperature", nullptr, (EPropertyFlags)0x0020080000020035, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainCharacter, Temperature), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Temperature_MetaData), NewProp_Temperature_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMainCharacter_Statics::NewProp_Stamina = { "Stamina", nullptr, (EPropertyFlags)0x0020080000020035, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainCharacter, Stamina), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Stamina_MetaData), NewProp_Stamina_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMainCharacter_Statics::NewProp_Armor = { "Armor", nullptr, (EPropertyFlags)0x0020080000020035, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainCharacter, Armor), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Armor_MetaData), NewProp_Armor_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMainCharacter_Statics::NewProp_InputMapping = { "InputMapping", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainCharacter, InputMapping), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputMapping_MetaData), NewProp_InputMapping_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMainCharacter_Statics::NewProp_MovementAction = { "MovementAction", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainCharacter, MovementAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MovementAction_MetaData), NewProp_MovementAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMainCharacter_Statics::NewProp_LookingAction = { "LookingAction", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainCharacter, LookingAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LookingAction_MetaData), NewProp_LookingAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMainCharacter_Statics::NewProp_Jumping = { "Jumping", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainCharacter, Jumping), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Jumping_MetaData), NewProp_Jumping_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMainCharacter_Statics::NewProp_PlacingBlock = { "PlacingBlock", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainCharacter, PlacingBlock), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlacingBlock_MetaData), NewProp_PlacingBlock_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMainCharacter_Statics::NewProp_Interacting = { "Interacting", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainCharacter, Interacting), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Interacting_MetaData), NewProp_Interacting_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMainCharacter_Statics::NewProp_Shifting = { "Shifting", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainCharacter, Shifting), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Shifting_MetaData), NewProp_Shifting_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMainCharacter_Statics::NewProp_Rotating = { "Rotating", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainCharacter, Rotating), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Rotating_MetaData), NewProp_Rotating_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMainCharacter_Statics::NewProp_SwitchBuildMode = { "SwitchBuildMode", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainCharacter, SwitchBuildMode), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SwitchBuildMode_MetaData), NewProp_SwitchBuildMode_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMainCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainCharacter_Statics::NewProp_OnParameterUpdate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainCharacter_Statics::NewProp_ViewCamera,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainCharacter_Statics::NewProp_BuildingComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainCharacter_Statics::NewProp_InventoryComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainCharacter_Statics::NewProp_Health,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainCharacter_Statics::NewProp_MaxHealth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainCharacter_Statics::NewProp_Hunger,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainCharacter_Statics::NewProp_MaxHunger,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainCharacter_Statics::NewProp_Water,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainCharacter_Statics::NewProp_MaxWater,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainCharacter_Statics::NewProp_Temperature,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainCharacter_Statics::NewProp_Stamina,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainCharacter_Statics::NewProp_Armor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainCharacter_Statics::NewProp_InputMapping,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainCharacter_Statics::NewProp_MovementAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainCharacter_Statics::NewProp_LookingAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainCharacter_Statics::NewProp_Jumping,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainCharacter_Statics::NewProp_PlacingBlock,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainCharacter_Statics::NewProp_Interacting,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainCharacter_Statics::NewProp_Shifting,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainCharacter_Statics::NewProp_Rotating,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainCharacter_Statics::NewProp_SwitchBuildMode,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMainCharacter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AMainCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectDeliveryHell,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMainCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AMainCharacter_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UMainInteractInterface_NoRegister, (int32)VTABLE_OFFSET(AMainCharacter, IMainInteractInterface), false },  // 2541149928
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMainCharacter_Statics::ClassParams = {
	&AMainCharacter::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AMainCharacter_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AMainCharacter_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMainCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_AMainCharacter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMainCharacter()
{
	if (!Z_Registration_Info_UClass_AMainCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMainCharacter.OuterSingleton, Z_Construct_UClass_AMainCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMainCharacter.OuterSingleton;
}
#if VALIDATE_CLASS_REPS
void AMainCharacter::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static FName Name_Health(TEXT("Health"));
	static FName Name_MaxHealth(TEXT("MaxHealth"));
	static FName Name_Hunger(TEXT("Hunger"));
	static FName Name_MaxHunger(TEXT("MaxHunger"));
	static FName Name_Water(TEXT("Water"));
	static FName Name_MaxWater(TEXT("MaxWater"));
	static FName Name_Temperature(TEXT("Temperature"));
	static FName Name_Stamina(TEXT("Stamina"));
	static FName Name_Armor(TEXT("Armor"));
	const bool bIsValid = true
		&& Name_Health == ClassReps[(int32)ENetFields_Private::Health].Property->GetFName()
		&& Name_MaxHealth == ClassReps[(int32)ENetFields_Private::MaxHealth].Property->GetFName()
		&& Name_Hunger == ClassReps[(int32)ENetFields_Private::Hunger].Property->GetFName()
		&& Name_MaxHunger == ClassReps[(int32)ENetFields_Private::MaxHunger].Property->GetFName()
		&& Name_Water == ClassReps[(int32)ENetFields_Private::Water].Property->GetFName()
		&& Name_MaxWater == ClassReps[(int32)ENetFields_Private::MaxWater].Property->GetFName()
		&& Name_Temperature == ClassReps[(int32)ENetFields_Private::Temperature].Property->GetFName()
		&& Name_Stamina == ClassReps[(int32)ENetFields_Private::Stamina].Property->GetFName()
		&& Name_Armor == ClassReps[(int32)ENetFields_Private::Armor].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in AMainCharacter"));
}
#endif
DEFINE_VTABLE_PTR_HELPER_CTOR(AMainCharacter);
AMainCharacter::~AMainCharacter() {}
// ********** End Class AMainCharacter *************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Source_ProjectDeliveryHell_Public_MainCharacter_h__Script_ProjectDeliveryHell_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMainCharacter, AMainCharacter::StaticClass, TEXT("AMainCharacter"), &Z_Registration_Info_UClass_AMainCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMainCharacter), 924292196U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Source_ProjectDeliveryHell_Public_MainCharacter_h__Script_ProjectDeliveryHell_1660833313(TEXT("/Script/ProjectDeliveryHell"),
	Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Source_ProjectDeliveryHell_Public_MainCharacter_h__Script_ProjectDeliveryHell_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Source_ProjectDeliveryHell_Public_MainCharacter_h__Script_ProjectDeliveryHell_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
