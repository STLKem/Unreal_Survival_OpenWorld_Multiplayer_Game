// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ResourceInterface.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeResourceInterface() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
PROJECTDELIVERYHELL_API UClass* Z_Construct_UClass_UResourceInterface();
PROJECTDELIVERYHELL_API UClass* Z_Construct_UClass_UResourceInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_ProjectDeliveryHell();
// ********** End Cross Module References **********************************************************

// ********** Begin Interface UResourceInterface Function AddToInv *********************************
struct ResourceInterface_eventAddToInv_Parms
{
	int32 ItemID;
	int32 ItemQuantity;
};
void IResourceInterface::AddToInv(int32 ItemID, int32 ItemQuantity)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_AddToInv instead.");
}
static FName NAME_UResourceInterface_AddToInv = FName(TEXT("AddToInv"));
void IResourceInterface::Execute_AddToInv(UObject* O, int32 ItemID, int32 ItemQuantity)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UResourceInterface::StaticClass()));
	ResourceInterface_eventAddToInv_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UResourceInterface_AddToInv);
	if (Func)
	{
		Parms.ItemID=ItemID;
		Parms.ItemQuantity=ItemQuantity;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (IResourceInterface*)(O->GetNativeInterfaceAddress(UResourceInterface::StaticClass())))
	{
		I->AddToInv_Implementation(ItemID,ItemQuantity);
	}
}
struct Z_Construct_UFunction_UResourceInterface_AddToInv_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ResourceInterface.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ItemID;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ItemQuantity;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UResourceInterface_AddToInv_Statics::NewProp_ItemID = { "ItemID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ResourceInterface_eventAddToInv_Parms, ItemID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UResourceInterface_AddToInv_Statics::NewProp_ItemQuantity = { "ItemQuantity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ResourceInterface_eventAddToInv_Parms, ItemQuantity), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UResourceInterface_AddToInv_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UResourceInterface_AddToInv_Statics::NewProp_ItemID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UResourceInterface_AddToInv_Statics::NewProp_ItemQuantity,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UResourceInterface_AddToInv_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UResourceInterface_AddToInv_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UResourceInterface, nullptr, "AddToInv", Z_Construct_UFunction_UResourceInterface_AddToInv_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UResourceInterface_AddToInv_Statics::PropPointers), sizeof(ResourceInterface_eventAddToInv_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UResourceInterface_AddToInv_Statics::Function_MetaDataParams), Z_Construct_UFunction_UResourceInterface_AddToInv_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(ResourceInterface_eventAddToInv_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UResourceInterface_AddToInv()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UResourceInterface_AddToInv_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IResourceInterface::execAddToInv)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_ItemID);
	P_GET_PROPERTY(FIntProperty,Z_Param_ItemQuantity);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddToInv_Implementation(Z_Param_ItemID,Z_Param_ItemQuantity);
	P_NATIVE_END;
}
// ********** End Interface UResourceInterface Function AddToInv ***********************************

// ********** Begin Interface UResourceInterface Function Interact *********************************
struct ResourceInterface_eventInteract_Parms
{
	AActor* Player;
};
void IResourceInterface::Interact(AActor* Player)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_Interact instead.");
}
static FName NAME_UResourceInterface_Interact = FName(TEXT("Interact"));
void IResourceInterface::Execute_Interact(UObject* O, AActor* Player)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UResourceInterface::StaticClass()));
	ResourceInterface_eventInteract_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UResourceInterface_Interact);
	if (Func)
	{
		Parms.Player=Player;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (IResourceInterface*)(O->GetNativeInterfaceAddress(UResourceInterface::StaticClass())))
	{
		I->Interact_Implementation(Player);
	}
}
struct Z_Construct_UFunction_UResourceInterface_Interact_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ResourceInterface.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Player;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UResourceInterface_Interact_Statics::NewProp_Player = { "Player", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ResourceInterface_eventInteract_Parms, Player), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UResourceInterface_Interact_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UResourceInterface_Interact_Statics::NewProp_Player,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UResourceInterface_Interact_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UResourceInterface_Interact_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UResourceInterface, nullptr, "Interact", Z_Construct_UFunction_UResourceInterface_Interact_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UResourceInterface_Interact_Statics::PropPointers), sizeof(ResourceInterface_eventInteract_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UResourceInterface_Interact_Statics::Function_MetaDataParams), Z_Construct_UFunction_UResourceInterface_Interact_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(ResourceInterface_eventInteract_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UResourceInterface_Interact()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UResourceInterface_Interact_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IResourceInterface::execInteract)
{
	P_GET_OBJECT(AActor,Z_Param_Player);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Interact_Implementation(Z_Param_Player);
	P_NATIVE_END;
}
// ********** End Interface UResourceInterface Function Interact ***********************************

// ********** Begin Interface UResourceInterface Function RemoveFromInv ****************************
void IResourceInterface::RemoveFromInv()
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_RemoveFromInv instead.");
}
static FName NAME_UResourceInterface_RemoveFromInv = FName(TEXT("RemoveFromInv"));
void IResourceInterface::Execute_RemoveFromInv(UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UResourceInterface::StaticClass()));
	UFunction* const Func = O->FindFunction(NAME_UResourceInterface_RemoveFromInv);
	if (Func)
	{
		O->ProcessEvent(Func, NULL);
	}
	else if (auto I = (IResourceInterface*)(O->GetNativeInterfaceAddress(UResourceInterface::StaticClass())))
	{
		I->RemoveFromInv_Implementation();
	}
}
struct Z_Construct_UFunction_UResourceInterface_RemoveFromInv_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ResourceInterface.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UResourceInterface_RemoveFromInv_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UResourceInterface, nullptr, "RemoveFromInv", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UResourceInterface_RemoveFromInv_Statics::Function_MetaDataParams), Z_Construct_UFunction_UResourceInterface_RemoveFromInv_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UResourceInterface_RemoveFromInv()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UResourceInterface_RemoveFromInv_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IResourceInterface::execRemoveFromInv)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemoveFromInv_Implementation();
	P_NATIVE_END;
}
// ********** End Interface UResourceInterface Function RemoveFromInv ******************************

// ********** Begin Interface UResourceInterface ***************************************************
void UResourceInterface::StaticRegisterNativesUResourceInterface()
{
	UClass* Class = UResourceInterface::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddToInv", &IResourceInterface::execAddToInv },
		{ "Interact", &IResourceInterface::execInteract },
		{ "RemoveFromInv", &IResourceInterface::execRemoveFromInv },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UResourceInterface;
UClass* UResourceInterface::GetPrivateStaticClass()
{
	using TClass = UResourceInterface;
	if (!Z_Registration_Info_UClass_UResourceInterface.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ResourceInterface"),
			Z_Registration_Info_UClass_UResourceInterface.InnerSingleton,
			StaticRegisterNativesUResourceInterface,
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
	return Z_Registration_Info_UClass_UResourceInterface.InnerSingleton;
}
UClass* Z_Construct_UClass_UResourceInterface_NoRegister()
{
	return UResourceInterface::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UResourceInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ResourceInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UResourceInterface_AddToInv, "AddToInv" }, // 893974861
		{ &Z_Construct_UFunction_UResourceInterface_Interact, "Interact" }, // 3135494743
		{ &Z_Construct_UFunction_UResourceInterface_RemoveFromInv, "RemoveFromInv" }, // 2323089246
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IResourceInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UResourceInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectDeliveryHell,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UResourceInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UResourceInterface_Statics::ClassParams = {
	&UResourceInterface::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UResourceInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UResourceInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UResourceInterface()
{
	if (!Z_Registration_Info_UClass_UResourceInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UResourceInterface.OuterSingleton, Z_Construct_UClass_UResourceInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UResourceInterface.OuterSingleton;
}
UResourceInterface::UResourceInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UResourceInterface);
// ********** End Interface UResourceInterface *****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Source_ProjectDeliveryHell_Public_ResourceInterface_h__Script_ProjectDeliveryHell_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UResourceInterface, UResourceInterface::StaticClass, TEXT("UResourceInterface"), &Z_Registration_Info_UClass_UResourceInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UResourceInterface), 2676584760U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Source_ProjectDeliveryHell_Public_ResourceInterface_h__Script_ProjectDeliveryHell_757888851(TEXT("/Script/ProjectDeliveryHell"),
	Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Source_ProjectDeliveryHell_Public_ResourceInterface_h__Script_ProjectDeliveryHell_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Source_ProjectDeliveryHell_Public_ResourceInterface_h__Script_ProjectDeliveryHell_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
