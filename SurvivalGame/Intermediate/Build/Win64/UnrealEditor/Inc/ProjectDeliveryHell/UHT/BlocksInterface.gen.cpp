// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BlocksInterface.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeBlocksInterface() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
PROJECTDELIVERYHELL_API UClass* Z_Construct_UClass_UBlocksInterface();
PROJECTDELIVERYHELL_API UClass* Z_Construct_UClass_UBlocksInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_ProjectDeliveryHell();
// ********** End Cross Module References **********************************************************

// ********** Begin Interface UBlocksInterface Function GetExtend **********************************
struct BlocksInterface_eventGetExtend_Parms
{
	FVector ReturnValue;

	/** Constructor, initializes return property only **/
	BlocksInterface_eventGetExtend_Parms()
		: ReturnValue(ForceInit)
	{
	}
};
FVector IBlocksInterface::GetExtend()
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetExtend instead.");
	BlocksInterface_eventGetExtend_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_UBlocksInterface_GetExtend = FName(TEXT("GetExtend"));
FVector IBlocksInterface::Execute_GetExtend(UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UBlocksInterface::StaticClass()));
	BlocksInterface_eventGetExtend_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UBlocksInterface_GetExtend);
	if (Func)
	{
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (IBlocksInterface*)(O->GetNativeInterfaceAddress(UBlocksInterface::StaticClass())))
	{
		Parms.ReturnValue = I->GetExtend_Implementation();
	}
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UBlocksInterface_GetExtend_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BlocksInterface.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBlocksInterface_GetExtend_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlocksInterface_eventGetExtend_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlocksInterface_GetExtend_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlocksInterface_GetExtend_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlocksInterface_GetExtend_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlocksInterface_GetExtend_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBlocksInterface, nullptr, "GetExtend", Z_Construct_UFunction_UBlocksInterface_GetExtend_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlocksInterface_GetExtend_Statics::PropPointers), sizeof(BlocksInterface_eventGetExtend_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C820C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlocksInterface_GetExtend_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBlocksInterface_GetExtend_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(BlocksInterface_eventGetExtend_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBlocksInterface_GetExtend()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlocksInterface_GetExtend_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IBlocksInterface::execGetExtend)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=P_THIS->GetExtend_Implementation();
	P_NATIVE_END;
}
// ********** End Interface UBlocksInterface Function GetExtend ************************************

// ********** Begin Interface UBlocksInterface Function SetExtend **********************************
struct BlocksInterface_eventSetExtend_Parms
{
	FVector Extend;
};
void IBlocksInterface::SetExtend(FVector Extend)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SetExtend instead.");
}
static FName NAME_UBlocksInterface_SetExtend = FName(TEXT("SetExtend"));
void IBlocksInterface::Execute_SetExtend(UObject* O, FVector Extend)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UBlocksInterface::StaticClass()));
	BlocksInterface_eventSetExtend_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UBlocksInterface_SetExtend);
	if (Func)
	{
		Parms.Extend=Extend;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (IBlocksInterface*)(O->GetNativeInterfaceAddress(UBlocksInterface::StaticClass())))
	{
		I->SetExtend_Implementation(Extend);
	}
}
struct Z_Construct_UFunction_UBlocksInterface_SetExtend_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BlocksInterface.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Extend;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBlocksInterface_SetExtend_Statics::NewProp_Extend = { "Extend", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlocksInterface_eventSetExtend_Parms, Extend), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlocksInterface_SetExtend_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlocksInterface_SetExtend_Statics::NewProp_Extend,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlocksInterface_SetExtend_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlocksInterface_SetExtend_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBlocksInterface, nullptr, "SetExtend", Z_Construct_UFunction_UBlocksInterface_SetExtend_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlocksInterface_SetExtend_Statics::PropPointers), sizeof(BlocksInterface_eventSetExtend_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C820C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlocksInterface_SetExtend_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBlocksInterface_SetExtend_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(BlocksInterface_eventSetExtend_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBlocksInterface_SetExtend()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlocksInterface_SetExtend_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IBlocksInterface::execSetExtend)
{
	P_GET_STRUCT(FVector,Z_Param_Extend);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetExtend_Implementation(Z_Param_Extend);
	P_NATIVE_END;
}
// ********** End Interface UBlocksInterface Function SetExtend ************************************

// ********** Begin Interface UBlocksInterface *****************************************************
void UBlocksInterface::StaticRegisterNativesUBlocksInterface()
{
	UClass* Class = UBlocksInterface::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetExtend", &IBlocksInterface::execGetExtend },
		{ "SetExtend", &IBlocksInterface::execSetExtend },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UBlocksInterface;
UClass* UBlocksInterface::GetPrivateStaticClass()
{
	using TClass = UBlocksInterface;
	if (!Z_Registration_Info_UClass_UBlocksInterface.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("BlocksInterface"),
			Z_Registration_Info_UClass_UBlocksInterface.InnerSingleton,
			StaticRegisterNativesUBlocksInterface,
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
	return Z_Registration_Info_UClass_UBlocksInterface.InnerSingleton;
}
UClass* Z_Construct_UClass_UBlocksInterface_NoRegister()
{
	return UBlocksInterface::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UBlocksInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BlocksInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UBlocksInterface_GetExtend, "GetExtend" }, // 4241751452
		{ &Z_Construct_UFunction_UBlocksInterface_SetExtend, "SetExtend" }, // 378488933
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IBlocksInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UBlocksInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectDeliveryHell,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBlocksInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBlocksInterface_Statics::ClassParams = {
	&UBlocksInterface::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBlocksInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UBlocksInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBlocksInterface()
{
	if (!Z_Registration_Info_UClass_UBlocksInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBlocksInterface.OuterSingleton, Z_Construct_UClass_UBlocksInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBlocksInterface.OuterSingleton;
}
UBlocksInterface::UBlocksInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBlocksInterface);
// ********** End Interface UBlocksInterface *******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Source_ProjectDeliveryHell_Public_BlocksInterface_h__Script_ProjectDeliveryHell_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBlocksInterface, UBlocksInterface::StaticClass, TEXT("UBlocksInterface"), &Z_Registration_Info_UClass_UBlocksInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBlocksInterface), 3769490843U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Source_ProjectDeliveryHell_Public_BlocksInterface_h__Script_ProjectDeliveryHell_1149228926(TEXT("/Script/ProjectDeliveryHell"),
	Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Source_ProjectDeliveryHell_Public_BlocksInterface_h__Script_ProjectDeliveryHell_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Source_ProjectDeliveryHell_Public_BlocksInterface_h__Script_ProjectDeliveryHell_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
