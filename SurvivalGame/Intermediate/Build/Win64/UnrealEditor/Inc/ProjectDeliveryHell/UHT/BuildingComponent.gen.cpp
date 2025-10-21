// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BuildingComponent.h"
#include "Engine/HitResult.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeBuildingComponent() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
PROJECTDELIVERYHELL_API UClass* Z_Construct_UClass_UBuildingComponent();
PROJECTDELIVERYHELL_API UClass* Z_Construct_UClass_UBuildingComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_ProjectDeliveryHell();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UBuildingComponent Function PlaceBlock ***********************************
struct Z_Construct_UFunction_UBuildingComponent_PlaceBlock_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BuildingComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBuildingComponent_PlaceBlock_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBuildingComponent, nullptr, "PlaceBlock", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBuildingComponent_PlaceBlock_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBuildingComponent_PlaceBlock_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UBuildingComponent_PlaceBlock()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBuildingComponent_PlaceBlock_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBuildingComponent::execPlaceBlock)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PlaceBlock();
	P_NATIVE_END;
}
// ********** End Class UBuildingComponent Function PlaceBlock *************************************

// ********** Begin Class UBuildingComponent *******************************************************
void UBuildingComponent::StaticRegisterNativesUBuildingComponent()
{
	UClass* Class = UBuildingComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "PlaceBlock", &UBuildingComponent::execPlaceBlock },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UBuildingComponent;
UClass* UBuildingComponent::GetPrivateStaticClass()
{
	using TClass = UBuildingComponent;
	if (!Z_Registration_Info_UClass_UBuildingComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("BuildingComponent"),
			Z_Registration_Info_UClass_UBuildingComponent.InnerSingleton,
			StaticRegisterNativesUBuildingComponent,
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
	return Z_Registration_Info_UClass_UBuildingComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_UBuildingComponent_NoRegister()
{
	return UBuildingComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UBuildingComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "BuildingComponent.h" },
		{ "ModuleRelativePath", "Public/BuildingComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_hasBlock_MetaData[] = {
		{ "Category", "BuildingComponent" },
		{ "ModuleRelativePath", "Public/BuildingComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_isShifting_MetaData[] = {
		{ "Category", "BuildingComponent" },
		{ "ModuleRelativePath", "Public/BuildingComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Hit_MetaData[] = {
		{ "ModuleRelativePath", "Public/BuildingComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsBuilding_MetaData[] = {
		{ "Category", "BuildingComponent" },
		{ "ModuleRelativePath", "Public/BuildingComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Building_MetaData[] = {
		{ "Category", "BuildingComponent" },
		{ "ModuleRelativePath", "Public/BuildingComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultActor_MetaData[] = {
		{ "ModuleRelativePath", "Public/BuildingComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnedActor_MetaData[] = {
		{ "ModuleRelativePath", "Public/BuildingComponent.h" },
	};
#endif // WITH_METADATA
	static void NewProp_hasBlock_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_hasBlock;
	static void NewProp_isShifting_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_isShifting;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Hit;
	static void NewProp_bIsBuilding_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsBuilding;
	static const UECodeGen_Private::FClassPropertyParams NewProp_Building;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpawnedActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UBuildingComponent_PlaceBlock, "PlaceBlock" }, // 806678943
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBuildingComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UBuildingComponent_Statics::NewProp_hasBlock_SetBit(void* Obj)
{
	((UBuildingComponent*)Obj)->hasBlock = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBuildingComponent_Statics::NewProp_hasBlock = { "hasBlock", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UBuildingComponent), &Z_Construct_UClass_UBuildingComponent_Statics::NewProp_hasBlock_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_hasBlock_MetaData), NewProp_hasBlock_MetaData) };
void Z_Construct_UClass_UBuildingComponent_Statics::NewProp_isShifting_SetBit(void* Obj)
{
	((UBuildingComponent*)Obj)->isShifting = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBuildingComponent_Statics::NewProp_isShifting = { "isShifting", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UBuildingComponent), &Z_Construct_UClass_UBuildingComponent_Statics::NewProp_isShifting_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_isShifting_MetaData), NewProp_isShifting_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBuildingComponent_Statics::NewProp_Hit = { "Hit", nullptr, (EPropertyFlags)0x0010008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBuildingComponent, Hit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Hit_MetaData), NewProp_Hit_MetaData) }; // 267591329
void Z_Construct_UClass_UBuildingComponent_Statics::NewProp_bIsBuilding_SetBit(void* Obj)
{
	((UBuildingComponent*)Obj)->bIsBuilding = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBuildingComponent_Statics::NewProp_bIsBuilding = { "bIsBuilding", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UBuildingComponent), &Z_Construct_UClass_UBuildingComponent_Statics::NewProp_bIsBuilding_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsBuilding_MetaData), NewProp_bIsBuilding_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UBuildingComponent_Statics::NewProp_Building = { "Building", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBuildingComponent, Building), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Building_MetaData), NewProp_Building_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBuildingComponent_Statics::NewProp_DefaultActor = { "DefaultActor", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBuildingComponent, DefaultActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultActor_MetaData), NewProp_DefaultActor_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBuildingComponent_Statics::NewProp_SpawnedActor = { "SpawnedActor", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBuildingComponent, SpawnedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnedActor_MetaData), NewProp_SpawnedActor_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBuildingComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBuildingComponent_Statics::NewProp_hasBlock,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBuildingComponent_Statics::NewProp_isShifting,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBuildingComponent_Statics::NewProp_Hit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBuildingComponent_Statics::NewProp_bIsBuilding,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBuildingComponent_Statics::NewProp_Building,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBuildingComponent_Statics::NewProp_DefaultActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBuildingComponent_Statics::NewProp_SpawnedActor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBuildingComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBuildingComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectDeliveryHell,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBuildingComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBuildingComponent_Statics::ClassParams = {
	&UBuildingComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UBuildingComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UBuildingComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBuildingComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UBuildingComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBuildingComponent()
{
	if (!Z_Registration_Info_UClass_UBuildingComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBuildingComponent.OuterSingleton, Z_Construct_UClass_UBuildingComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBuildingComponent.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBuildingComponent);
UBuildingComponent::~UBuildingComponent() {}
// ********** End Class UBuildingComponent *********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Source_ProjectDeliveryHell_Public_BuildingComponent_h__Script_ProjectDeliveryHell_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBuildingComponent, UBuildingComponent::StaticClass, TEXT("UBuildingComponent"), &Z_Registration_Info_UClass_UBuildingComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBuildingComponent), 280567372U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Source_ProjectDeliveryHell_Public_BuildingComponent_h__Script_ProjectDeliveryHell_3519616122(TEXT("/Script/ProjectDeliveryHell"),
	Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Source_ProjectDeliveryHell_Public_BuildingComponent_h__Script_ProjectDeliveryHell_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Source_ProjectDeliveryHell_Public_BuildingComponent_h__Script_ProjectDeliveryHell_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
