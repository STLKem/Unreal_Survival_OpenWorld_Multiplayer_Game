// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MainInteractInterface.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeMainInteractInterface() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
PROJECTDELIVERYHELL_API UClass* Z_Construct_UClass_UMainInteractInterface();
PROJECTDELIVERYHELL_API UClass* Z_Construct_UClass_UMainInteractInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_ProjectDeliveryHell();
// ********** End Cross Module References **********************************************************

// ********** Begin Interface UMainInteractInterface Function AddToInv *****************************
struct MainInteractInterface_eventAddToInv_Parms
{
	int32 ItemID;
	int32 ItemQuantity;
};
void IMainInteractInterface::AddToInv(int32 ItemID, int32 ItemQuantity)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_AddToInv instead.");
}
static FName NAME_UMainInteractInterface_AddToInv = FName(TEXT("AddToInv"));
void IMainInteractInterface::Execute_AddToInv(UObject* O, int32 ItemID, int32 ItemQuantity)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UMainInteractInterface::StaticClass()));
	MainInteractInterface_eventAddToInv_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UMainInteractInterface_AddToInv);
	if (Func)
	{
		Parms.ItemID=ItemID;
		Parms.ItemQuantity=ItemQuantity;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (IMainInteractInterface*)(O->GetNativeInterfaceAddress(UMainInteractInterface::StaticClass())))
	{
		I->AddToInv_Implementation(ItemID,ItemQuantity);
	}
}
struct Z_Construct_UFunction_UMainInteractInterface_AddToInv_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MainInteractInterface.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ItemID;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ItemQuantity;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMainInteractInterface_AddToInv_Statics::NewProp_ItemID = { "ItemID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MainInteractInterface_eventAddToInv_Parms, ItemID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMainInteractInterface_AddToInv_Statics::NewProp_ItemQuantity = { "ItemQuantity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MainInteractInterface_eventAddToInv_Parms, ItemQuantity), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMainInteractInterface_AddToInv_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMainInteractInterface_AddToInv_Statics::NewProp_ItemID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMainInteractInterface_AddToInv_Statics::NewProp_ItemQuantity,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMainInteractInterface_AddToInv_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMainInteractInterface_AddToInv_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMainInteractInterface, nullptr, "AddToInv", Z_Construct_UFunction_UMainInteractInterface_AddToInv_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMainInteractInterface_AddToInv_Statics::PropPointers), sizeof(MainInteractInterface_eventAddToInv_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMainInteractInterface_AddToInv_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMainInteractInterface_AddToInv_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(MainInteractInterface_eventAddToInv_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMainInteractInterface_AddToInv()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMainInteractInterface_AddToInv_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IMainInteractInterface::execAddToInv)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_ItemID);
	P_GET_PROPERTY(FIntProperty,Z_Param_ItemQuantity);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddToInv_Implementation(Z_Param_ItemID,Z_Param_ItemQuantity);
	P_NATIVE_END;
}
// ********** End Interface UMainInteractInterface Function AddToInv *******************************

// ********** Begin Interface UMainInteractInterface Function ChangeHealth *************************
struct MainInteractInterface_eventChangeHealth_Parms
{
	int32 Heal;
};
void IMainInteractInterface::ChangeHealth(int32 Heal)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_ChangeHealth instead.");
}
static FName NAME_UMainInteractInterface_ChangeHealth = FName(TEXT("ChangeHealth"));
void IMainInteractInterface::Execute_ChangeHealth(UObject* O, int32 Heal)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UMainInteractInterface::StaticClass()));
	MainInteractInterface_eventChangeHealth_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UMainInteractInterface_ChangeHealth);
	if (Func)
	{
		Parms.Heal=Heal;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (IMainInteractInterface*)(O->GetNativeInterfaceAddress(UMainInteractInterface::StaticClass())))
	{
		I->ChangeHealth_Implementation(Heal);
	}
}
struct Z_Construct_UFunction_UMainInteractInterface_ChangeHealth_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MainInteractInterface.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Heal;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMainInteractInterface_ChangeHealth_Statics::NewProp_Heal = { "Heal", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MainInteractInterface_eventChangeHealth_Parms, Heal), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMainInteractInterface_ChangeHealth_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMainInteractInterface_ChangeHealth_Statics::NewProp_Heal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMainInteractInterface_ChangeHealth_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMainInteractInterface_ChangeHealth_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMainInteractInterface, nullptr, "ChangeHealth", Z_Construct_UFunction_UMainInteractInterface_ChangeHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMainInteractInterface_ChangeHealth_Statics::PropPointers), sizeof(MainInteractInterface_eventChangeHealth_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMainInteractInterface_ChangeHealth_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMainInteractInterface_ChangeHealth_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(MainInteractInterface_eventChangeHealth_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMainInteractInterface_ChangeHealth()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMainInteractInterface_ChangeHealth_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IMainInteractInterface::execChangeHealth)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Heal);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ChangeHealth_Implementation(Z_Param_Heal);
	P_NATIVE_END;
}
// ********** End Interface UMainInteractInterface Function ChangeHealth ***************************

// ********** Begin Interface UMainInteractInterface Function ChangeHunger *************************
struct MainInteractInterface_eventChangeHunger_Parms
{
	int32 HungerValue;
};
void IMainInteractInterface::ChangeHunger(int32 HungerValue)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_ChangeHunger instead.");
}
static FName NAME_UMainInteractInterface_ChangeHunger = FName(TEXT("ChangeHunger"));
void IMainInteractInterface::Execute_ChangeHunger(UObject* O, int32 HungerValue)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UMainInteractInterface::StaticClass()));
	MainInteractInterface_eventChangeHunger_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UMainInteractInterface_ChangeHunger);
	if (Func)
	{
		Parms.HungerValue=HungerValue;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (IMainInteractInterface*)(O->GetNativeInterfaceAddress(UMainInteractInterface::StaticClass())))
	{
		I->ChangeHunger_Implementation(HungerValue);
	}
}
struct Z_Construct_UFunction_UMainInteractInterface_ChangeHunger_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MainInteractInterface.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_HungerValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMainInteractInterface_ChangeHunger_Statics::NewProp_HungerValue = { "HungerValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MainInteractInterface_eventChangeHunger_Parms, HungerValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMainInteractInterface_ChangeHunger_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMainInteractInterface_ChangeHunger_Statics::NewProp_HungerValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMainInteractInterface_ChangeHunger_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMainInteractInterface_ChangeHunger_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMainInteractInterface, nullptr, "ChangeHunger", Z_Construct_UFunction_UMainInteractInterface_ChangeHunger_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMainInteractInterface_ChangeHunger_Statics::PropPointers), sizeof(MainInteractInterface_eventChangeHunger_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMainInteractInterface_ChangeHunger_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMainInteractInterface_ChangeHunger_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(MainInteractInterface_eventChangeHunger_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMainInteractInterface_ChangeHunger()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMainInteractInterface_ChangeHunger_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IMainInteractInterface::execChangeHunger)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_HungerValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ChangeHunger_Implementation(Z_Param_HungerValue);
	P_NATIVE_END;
}
// ********** End Interface UMainInteractInterface Function ChangeHunger ***************************

// ********** Begin Interface UMainInteractInterface Function ChangeTemperature ********************
struct MainInteractInterface_eventChangeTemperature_Parms
{
	float TemperatureValue;
};
void IMainInteractInterface::ChangeTemperature(float TemperatureValue)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_ChangeTemperature instead.");
}
static FName NAME_UMainInteractInterface_ChangeTemperature = FName(TEXT("ChangeTemperature"));
void IMainInteractInterface::Execute_ChangeTemperature(UObject* O, float TemperatureValue)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UMainInteractInterface::StaticClass()));
	MainInteractInterface_eventChangeTemperature_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UMainInteractInterface_ChangeTemperature);
	if (Func)
	{
		Parms.TemperatureValue=TemperatureValue;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (IMainInteractInterface*)(O->GetNativeInterfaceAddress(UMainInteractInterface::StaticClass())))
	{
		I->ChangeTemperature_Implementation(TemperatureValue);
	}
}
struct Z_Construct_UFunction_UMainInteractInterface_ChangeTemperature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MainInteractInterface.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TemperatureValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMainInteractInterface_ChangeTemperature_Statics::NewProp_TemperatureValue = { "TemperatureValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MainInteractInterface_eventChangeTemperature_Parms, TemperatureValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMainInteractInterface_ChangeTemperature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMainInteractInterface_ChangeTemperature_Statics::NewProp_TemperatureValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMainInteractInterface_ChangeTemperature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMainInteractInterface_ChangeTemperature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMainInteractInterface, nullptr, "ChangeTemperature", Z_Construct_UFunction_UMainInteractInterface_ChangeTemperature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMainInteractInterface_ChangeTemperature_Statics::PropPointers), sizeof(MainInteractInterface_eventChangeTemperature_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMainInteractInterface_ChangeTemperature_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMainInteractInterface_ChangeTemperature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(MainInteractInterface_eventChangeTemperature_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMainInteractInterface_ChangeTemperature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMainInteractInterface_ChangeTemperature_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IMainInteractInterface::execChangeTemperature)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_TemperatureValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ChangeTemperature_Implementation(Z_Param_TemperatureValue);
	P_NATIVE_END;
}
// ********** End Interface UMainInteractInterface Function ChangeTemperature **********************

// ********** Begin Interface UMainInteractInterface Function ChangeWater **************************
struct MainInteractInterface_eventChangeWater_Parms
{
	int32 WaterValue;
};
void IMainInteractInterface::ChangeWater(int32 WaterValue)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_ChangeWater instead.");
}
static FName NAME_UMainInteractInterface_ChangeWater = FName(TEXT("ChangeWater"));
void IMainInteractInterface::Execute_ChangeWater(UObject* O, int32 WaterValue)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UMainInteractInterface::StaticClass()));
	MainInteractInterface_eventChangeWater_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UMainInteractInterface_ChangeWater);
	if (Func)
	{
		Parms.WaterValue=WaterValue;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (IMainInteractInterface*)(O->GetNativeInterfaceAddress(UMainInteractInterface::StaticClass())))
	{
		I->ChangeWater_Implementation(WaterValue);
	}
}
struct Z_Construct_UFunction_UMainInteractInterface_ChangeWater_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MainInteractInterface.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_WaterValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMainInteractInterface_ChangeWater_Statics::NewProp_WaterValue = { "WaterValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MainInteractInterface_eventChangeWater_Parms, WaterValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMainInteractInterface_ChangeWater_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMainInteractInterface_ChangeWater_Statics::NewProp_WaterValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMainInteractInterface_ChangeWater_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMainInteractInterface_ChangeWater_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMainInteractInterface, nullptr, "ChangeWater", Z_Construct_UFunction_UMainInteractInterface_ChangeWater_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMainInteractInterface_ChangeWater_Statics::PropPointers), sizeof(MainInteractInterface_eventChangeWater_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMainInteractInterface_ChangeWater_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMainInteractInterface_ChangeWater_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(MainInteractInterface_eventChangeWater_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMainInteractInterface_ChangeWater()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMainInteractInterface_ChangeWater_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IMainInteractInterface::execChangeWater)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_WaterValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ChangeWater_Implementation(Z_Param_WaterValue);
	P_NATIVE_END;
}
// ********** End Interface UMainInteractInterface Function ChangeWater ****************************

// ********** Begin Interface UMainInteractInterface Function Interact *****************************
struct MainInteractInterface_eventInteract_Parms
{
	AActor* Player;
};
void IMainInteractInterface::Interact(AActor* Player)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_Interact instead.");
}
static FName NAME_UMainInteractInterface_Interact = FName(TEXT("Interact"));
void IMainInteractInterface::Execute_Interact(UObject* O, AActor* Player)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UMainInteractInterface::StaticClass()));
	MainInteractInterface_eventInteract_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UMainInteractInterface_Interact);
	if (Func)
	{
		Parms.Player=Player;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (IMainInteractInterface*)(O->GetNativeInterfaceAddress(UMainInteractInterface::StaticClass())))
	{
		I->Interact_Implementation(Player);
	}
}
struct Z_Construct_UFunction_UMainInteractInterface_Interact_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MainInteractInterface.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Player;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMainInteractInterface_Interact_Statics::NewProp_Player = { "Player", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MainInteractInterface_eventInteract_Parms, Player), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMainInteractInterface_Interact_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMainInteractInterface_Interact_Statics::NewProp_Player,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMainInteractInterface_Interact_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMainInteractInterface_Interact_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMainInteractInterface, nullptr, "Interact", Z_Construct_UFunction_UMainInteractInterface_Interact_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMainInteractInterface_Interact_Statics::PropPointers), sizeof(MainInteractInterface_eventInteract_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMainInteractInterface_Interact_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMainInteractInterface_Interact_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(MainInteractInterface_eventInteract_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMainInteractInterface_Interact()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMainInteractInterface_Interact_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IMainInteractInterface::execInteract)
{
	P_GET_OBJECT(AActor,Z_Param_Player);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Interact_Implementation(Z_Param_Player);
	P_NATIVE_END;
}
// ********** End Interface UMainInteractInterface Function Interact *******************************

// ********** Begin Interface UMainInteractInterface Function RemoveFromInv ************************
void IMainInteractInterface::RemoveFromInv()
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_RemoveFromInv instead.");
}
static FName NAME_UMainInteractInterface_RemoveFromInv = FName(TEXT("RemoveFromInv"));
void IMainInteractInterface::Execute_RemoveFromInv(UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UMainInteractInterface::StaticClass()));
	UFunction* const Func = O->FindFunction(NAME_UMainInteractInterface_RemoveFromInv);
	if (Func)
	{
		O->ProcessEvent(Func, NULL);
	}
	else if (auto I = (IMainInteractInterface*)(O->GetNativeInterfaceAddress(UMainInteractInterface::StaticClass())))
	{
		I->RemoveFromInv_Implementation();
	}
}
struct Z_Construct_UFunction_UMainInteractInterface_RemoveFromInv_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MainInteractInterface.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMainInteractInterface_RemoveFromInv_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMainInteractInterface, nullptr, "RemoveFromInv", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMainInteractInterface_RemoveFromInv_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMainInteractInterface_RemoveFromInv_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UMainInteractInterface_RemoveFromInv()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMainInteractInterface_RemoveFromInv_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IMainInteractInterface::execRemoveFromInv)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemoveFromInv_Implementation();
	P_NATIVE_END;
}
// ********** End Interface UMainInteractInterface Function RemoveFromInv **************************

// ********** Begin Interface UMainInteractInterface ***********************************************
void UMainInteractInterface::StaticRegisterNativesUMainInteractInterface()
{
	UClass* Class = UMainInteractInterface::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddToInv", &IMainInteractInterface::execAddToInv },
		{ "ChangeHealth", &IMainInteractInterface::execChangeHealth },
		{ "ChangeHunger", &IMainInteractInterface::execChangeHunger },
		{ "ChangeTemperature", &IMainInteractInterface::execChangeTemperature },
		{ "ChangeWater", &IMainInteractInterface::execChangeWater },
		{ "Interact", &IMainInteractInterface::execInteract },
		{ "RemoveFromInv", &IMainInteractInterface::execRemoveFromInv },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UMainInteractInterface;
UClass* UMainInteractInterface::GetPrivateStaticClass()
{
	using TClass = UMainInteractInterface;
	if (!Z_Registration_Info_UClass_UMainInteractInterface.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("MainInteractInterface"),
			Z_Registration_Info_UClass_UMainInteractInterface.InnerSingleton,
			StaticRegisterNativesUMainInteractInterface,
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
	return Z_Registration_Info_UClass_UMainInteractInterface.InnerSingleton;
}
UClass* Z_Construct_UClass_UMainInteractInterface_NoRegister()
{
	return UMainInteractInterface::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UMainInteractInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MainInteractInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMainInteractInterface_AddToInv, "AddToInv" }, // 2767584334
		{ &Z_Construct_UFunction_UMainInteractInterface_ChangeHealth, "ChangeHealth" }, // 2688822062
		{ &Z_Construct_UFunction_UMainInteractInterface_ChangeHunger, "ChangeHunger" }, // 1375238271
		{ &Z_Construct_UFunction_UMainInteractInterface_ChangeTemperature, "ChangeTemperature" }, // 139970442
		{ &Z_Construct_UFunction_UMainInteractInterface_ChangeWater, "ChangeWater" }, // 2837926388
		{ &Z_Construct_UFunction_UMainInteractInterface_Interact, "Interact" }, // 2992568325
		{ &Z_Construct_UFunction_UMainInteractInterface_RemoveFromInv, "RemoveFromInv" }, // 2293069529
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IMainInteractInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMainInteractInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectDeliveryHell,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMainInteractInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMainInteractInterface_Statics::ClassParams = {
	&UMainInteractInterface::StaticClass,
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
	0x000840A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMainInteractInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UMainInteractInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMainInteractInterface()
{
	if (!Z_Registration_Info_UClass_UMainInteractInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMainInteractInterface.OuterSingleton, Z_Construct_UClass_UMainInteractInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMainInteractInterface.OuterSingleton;
}
UMainInteractInterface::UMainInteractInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMainInteractInterface);
// ********** End Interface UMainInteractInterface *************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Source_ProjectDeliveryHell_Public_MainInteractInterface_h__Script_ProjectDeliveryHell_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMainInteractInterface, UMainInteractInterface::StaticClass, TEXT("UMainInteractInterface"), &Z_Registration_Info_UClass_UMainInteractInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMainInteractInterface), 2541149928U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Source_ProjectDeliveryHell_Public_MainInteractInterface_h__Script_ProjectDeliveryHell_654392437(TEXT("/Script/ProjectDeliveryHell"),
	Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Source_ProjectDeliveryHell_Public_MainInteractInterface_h__Script_ProjectDeliveryHell_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Source_ProjectDeliveryHell_Public_MainInteractInterface_h__Script_ProjectDeliveryHell_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
