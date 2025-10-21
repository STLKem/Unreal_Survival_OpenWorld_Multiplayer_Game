// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BlockSpawner.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeBlockSpawner() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMeshComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
PROJECTDELIVERYHELL_API UClass* Z_Construct_UClass_ABlockSpawner();
PROJECTDELIVERYHELL_API UClass* Z_Construct_UClass_ABlockSpawner_NoRegister();
UPackage* Z_Construct_UPackage__Script_ProjectDeliveryHell();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ABlockSpawner Function OnOverlapEnd **************************************
struct Z_Construct_UFunction_ABlockSpawner_OnOverlapEnd_Statics
{
	struct BlockSpawner_eventOnOverlapEnd_Parms
	{
		UPrimitiveComponent* OverlappedComp;
		AActor* OtherActor;
		UPrimitiveComponent* OtherComp;
		int32 OtherBodyIndex;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BlockSpawner.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComp_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABlockSpawner_OnOverlapEnd_Statics::NewProp_OverlappedComp = { "OverlappedComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlockSpawner_eventOnOverlapEnd_Parms, OverlappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlappedComp_MetaData), NewProp_OverlappedComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABlockSpawner_OnOverlapEnd_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlockSpawner_eventOnOverlapEnd_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABlockSpawner_OnOverlapEnd_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlockSpawner_eventOnOverlapEnd_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherComp_MetaData), NewProp_OtherComp_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ABlockSpawner_OnOverlapEnd_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlockSpawner_eventOnOverlapEnd_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABlockSpawner_OnOverlapEnd_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABlockSpawner_OnOverlapEnd_Statics::NewProp_OverlappedComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABlockSpawner_OnOverlapEnd_Statics::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABlockSpawner_OnOverlapEnd_Statics::NewProp_OtherComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABlockSpawner_OnOverlapEnd_Statics::NewProp_OtherBodyIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABlockSpawner_OnOverlapEnd_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABlockSpawner_OnOverlapEnd_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ABlockSpawner, nullptr, "OnOverlapEnd", Z_Construct_UFunction_ABlockSpawner_OnOverlapEnd_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABlockSpawner_OnOverlapEnd_Statics::PropPointers), sizeof(Z_Construct_UFunction_ABlockSpawner_OnOverlapEnd_Statics::BlockSpawner_eventOnOverlapEnd_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABlockSpawner_OnOverlapEnd_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABlockSpawner_OnOverlapEnd_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ABlockSpawner_OnOverlapEnd_Statics::BlockSpawner_eventOnOverlapEnd_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ABlockSpawner_OnOverlapEnd()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABlockSpawner_OnOverlapEnd_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABlockSpawner::execOnOverlapEnd)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp);
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
	P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnOverlapEnd(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex);
	P_NATIVE_END;
}
// ********** End Class ABlockSpawner Function OnOverlapEnd ****************************************

// ********** Begin Class ABlockSpawner Function SpawnBlock ****************************************
struct Z_Construct_UFunction_ABlockSpawner_SpawnBlock_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BlockSpawner.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABlockSpawner_SpawnBlock_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ABlockSpawner, nullptr, "SpawnBlock", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABlockSpawner_SpawnBlock_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABlockSpawner_SpawnBlock_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ABlockSpawner_SpawnBlock()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABlockSpawner_SpawnBlock_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABlockSpawner::execSpawnBlock)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SpawnBlock();
	P_NATIVE_END;
}
// ********** End Class ABlockSpawner Function SpawnBlock ******************************************

// ********** Begin Class ABlockSpawner ************************************************************
void ABlockSpawner::StaticRegisterNativesABlockSpawner()
{
	UClass* Class = ABlockSpawner::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnOverlapEnd", &ABlockSpawner::execOnOverlapEnd },
		{ "SpawnBlock", &ABlockSpawner::execSpawnBlock },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_ABlockSpawner;
UClass* ABlockSpawner::GetPrivateStaticClass()
{
	using TClass = ABlockSpawner;
	if (!Z_Registration_Info_UClass_ABlockSpawner.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("BlockSpawner"),
			Z_Registration_Info_UClass_ABlockSpawner.InnerSingleton,
			StaticRegisterNativesABlockSpawner,
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
	return Z_Registration_Info_UClass_ABlockSpawner.InnerSingleton;
}
UClass* Z_Construct_UClass_ABlockSpawner_NoRegister()
{
	return ABlockSpawner::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ABlockSpawner_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "BlockSpawner.h" },
		{ "ModuleRelativePath", "Public/BlockSpawner.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RootComp_MetaData[] = {
		{ "Category", "BlockSpawner" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BlockSpawner.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeshComp_MetaData[] = {
		{ "Category", "BlockSpawner" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BlockSpawner.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoxComp_MetaData[] = {
		{ "Category", "BlockSpawner" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BlockSpawner.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawningBlocks_MetaData[] = {
		{ "Category", "Building" },
		{ "ModuleRelativePath", "Public/BlockSpawner.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_canSpawn_MetaData[] = {
		{ "ModuleRelativePath", "Public/BlockSpawner.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnTime_MetaData[] = {
		{ "Category", "Spawn" },
		{ "ModuleRelativePath", "Public/BlockSpawner.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LeftToSpawn_MetaData[] = {
		{ "ModuleRelativePath", "Public/BlockSpawner.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SelectedClass_MetaData[] = {
		{ "ModuleRelativePath", "Public/BlockSpawner.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RootComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MeshComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BoxComp;
	static const UECodeGen_Private::FClassPropertyParams NewProp_SpawningBlocks_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SpawningBlocks;
	static void NewProp_canSpawn_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_canSpawn;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SpawnTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LeftToSpawn;
	static const UECodeGen_Private::FClassPropertyParams NewProp_SelectedClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ABlockSpawner_OnOverlapEnd, "OnOverlapEnd" }, // 997074089
		{ &Z_Construct_UFunction_ABlockSpawner_SpawnBlock, "SpawnBlock" }, // 878025836
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABlockSpawner>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABlockSpawner_Statics::NewProp_RootComp = { "RootComp", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABlockSpawner, RootComp), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RootComp_MetaData), NewProp_RootComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABlockSpawner_Statics::NewProp_MeshComp = { "MeshComp", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABlockSpawner, MeshComp), Z_Construct_UClass_UMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshComp_MetaData), NewProp_MeshComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABlockSpawner_Statics::NewProp_BoxComp = { "BoxComp", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABlockSpawner, BoxComp), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoxComp_MetaData), NewProp_BoxComp_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ABlockSpawner_Statics::NewProp_SpawningBlocks_Inner = { "SpawningBlocks", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ABlockSpawner_Statics::NewProp_SpawningBlocks = { "SpawningBlocks", nullptr, (EPropertyFlags)0x0024080000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABlockSpawner, SpawningBlocks), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawningBlocks_MetaData), NewProp_SpawningBlocks_MetaData) };
void Z_Construct_UClass_ABlockSpawner_Statics::NewProp_canSpawn_SetBit(void* Obj)
{
	((ABlockSpawner*)Obj)->canSpawn = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABlockSpawner_Statics::NewProp_canSpawn = { "canSpawn", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ABlockSpawner), &Z_Construct_UClass_ABlockSpawner_Statics::NewProp_canSpawn_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_canSpawn_MetaData), NewProp_canSpawn_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABlockSpawner_Statics::NewProp_SpawnTime = { "SpawnTime", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABlockSpawner, SpawnTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnTime_MetaData), NewProp_SpawnTime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABlockSpawner_Statics::NewProp_LeftToSpawn = { "LeftToSpawn", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABlockSpawner, LeftToSpawn), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LeftToSpawn_MetaData), NewProp_LeftToSpawn_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ABlockSpawner_Statics::NewProp_SelectedClass = { "SelectedClass", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABlockSpawner, SelectedClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SelectedClass_MetaData), NewProp_SelectedClass_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABlockSpawner_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlockSpawner_Statics::NewProp_RootComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlockSpawner_Statics::NewProp_MeshComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlockSpawner_Statics::NewProp_BoxComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlockSpawner_Statics::NewProp_SpawningBlocks_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlockSpawner_Statics::NewProp_SpawningBlocks,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlockSpawner_Statics::NewProp_canSpawn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlockSpawner_Statics::NewProp_SpawnTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlockSpawner_Statics::NewProp_LeftToSpawn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlockSpawner_Statics::NewProp_SelectedClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABlockSpawner_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ABlockSpawner_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectDeliveryHell,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABlockSpawner_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABlockSpawner_Statics::ClassParams = {
	&ABlockSpawner::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ABlockSpawner_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ABlockSpawner_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABlockSpawner_Statics::Class_MetaDataParams), Z_Construct_UClass_ABlockSpawner_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABlockSpawner()
{
	if (!Z_Registration_Info_UClass_ABlockSpawner.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABlockSpawner.OuterSingleton, Z_Construct_UClass_ABlockSpawner_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABlockSpawner.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABlockSpawner);
ABlockSpawner::~ABlockSpawner() {}
// ********** End Class ABlockSpawner **************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Source_ProjectDeliveryHell_Public_BlockSpawner_h__Script_ProjectDeliveryHell_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABlockSpawner, ABlockSpawner::StaticClass, TEXT("ABlockSpawner"), &Z_Registration_Info_UClass_ABlockSpawner, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABlockSpawner), 2658966235U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Source_ProjectDeliveryHell_Public_BlockSpawner_h__Script_ProjectDeliveryHell_3973116366(TEXT("/Script/ProjectDeliveryHell"),
	Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Source_ProjectDeliveryHell_Public_BlockSpawner_h__Script_ProjectDeliveryHell_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Source_ProjectDeliveryHell_Public_BlockSpawner_h__Script_ProjectDeliveryHell_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
