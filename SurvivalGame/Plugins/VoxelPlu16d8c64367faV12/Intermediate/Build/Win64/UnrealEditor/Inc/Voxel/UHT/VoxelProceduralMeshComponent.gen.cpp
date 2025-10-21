// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VoxelRender/VoxelProceduralMeshComponent.h"
#include "VoxelIntBox.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeVoxelProceduralMeshComponent() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UBodySetup_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent();
UPackage* Z_Construct_UPackage__Script_Voxel();
VOXEL_API UClass* Z_Construct_UClass_UVoxelProceduralMeshComponent();
VOXEL_API UClass* Z_Construct_UClass_UVoxelProceduralMeshComponent_NoRegister();
VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelIntBox();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UVoxelProceduralMeshComponent Function AreVoxelCollisionsFrozen **********
struct Z_Construct_UFunction_UVoxelProceduralMeshComponent_AreVoxelCollisionsFrozen_Statics
{
	struct VoxelProceduralMeshComponent_eventAreVoxelCollisionsFrozen_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Voxel|Collisions" },
		{ "ModuleRelativePath", "Public/VoxelRender/VoxelProceduralMeshComponent.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UVoxelProceduralMeshComponent_AreVoxelCollisionsFrozen_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((VoxelProceduralMeshComponent_eventAreVoxelCollisionsFrozen_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelProceduralMeshComponent_AreVoxelCollisionsFrozen_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VoxelProceduralMeshComponent_eventAreVoxelCollisionsFrozen_Parms), &Z_Construct_UFunction_UVoxelProceduralMeshComponent_AreVoxelCollisionsFrozen_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelProceduralMeshComponent_AreVoxelCollisionsFrozen_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelProceduralMeshComponent_AreVoxelCollisionsFrozen_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelProceduralMeshComponent_AreVoxelCollisionsFrozen_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelProceduralMeshComponent_AreVoxelCollisionsFrozen_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelProceduralMeshComponent, nullptr, "AreVoxelCollisionsFrozen", Z_Construct_UFunction_UVoxelProceduralMeshComponent_AreVoxelCollisionsFrozen_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelProceduralMeshComponent_AreVoxelCollisionsFrozen_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVoxelProceduralMeshComponent_AreVoxelCollisionsFrozen_Statics::VoxelProceduralMeshComponent_eventAreVoxelCollisionsFrozen_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelProceduralMeshComponent_AreVoxelCollisionsFrozen_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelProceduralMeshComponent_AreVoxelCollisionsFrozen_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVoxelProceduralMeshComponent_AreVoxelCollisionsFrozen_Statics::VoxelProceduralMeshComponent_eventAreVoxelCollisionsFrozen_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVoxelProceduralMeshComponent_AreVoxelCollisionsFrozen()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelProceduralMeshComponent_AreVoxelCollisionsFrozen_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelProceduralMeshComponent::execAreVoxelCollisionsFrozen)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UVoxelProceduralMeshComponent::AreVoxelCollisionsFrozen();
	P_NATIVE_END;
}
// ********** End Class UVoxelProceduralMeshComponent Function AreVoxelCollisionsFrozen ************

// ********** Begin Class UVoxelProceduralMeshComponent Function InitChunk *************************
struct VoxelProceduralMeshComponent_eventInitChunk_Parms
{
	uint8 ChunkLOD;
	FVoxelIntBox ChunkBounds;
};
static FName NAME_UVoxelProceduralMeshComponent_InitChunk = FName(TEXT("InitChunk"));
void UVoxelProceduralMeshComponent::InitChunk(uint8 ChunkLOD, FVoxelIntBox ChunkBounds)
{
	VoxelProceduralMeshComponent_eventInitChunk_Parms Parms;
	Parms.ChunkLOD=ChunkLOD;
	Parms.ChunkBounds=ChunkBounds;
	UFunction* Func = FindFunctionChecked(NAME_UVoxelProceduralMeshComponent_InitChunk);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UVoxelProceduralMeshComponent_InitChunk_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelRender/VoxelProceduralMeshComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ChunkLOD;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ChunkBounds;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVoxelProceduralMeshComponent_InitChunk_Statics::NewProp_ChunkLOD = { "ChunkLOD", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelProceduralMeshComponent_eventInitChunk_Parms, ChunkLOD), nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelProceduralMeshComponent_InitChunk_Statics::NewProp_ChunkBounds = { "ChunkBounds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelProceduralMeshComponent_eventInitChunk_Parms, ChunkBounds), Z_Construct_UScriptStruct_FVoxelIntBox, METADATA_PARAMS(0, nullptr) }; // 3520536583
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelProceduralMeshComponent_InitChunk_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelProceduralMeshComponent_InitChunk_Statics::NewProp_ChunkLOD,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelProceduralMeshComponent_InitChunk_Statics::NewProp_ChunkBounds,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelProceduralMeshComponent_InitChunk_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelProceduralMeshComponent_InitChunk_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelProceduralMeshComponent, nullptr, "InitChunk", Z_Construct_UFunction_UVoxelProceduralMeshComponent_InitChunk_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelProceduralMeshComponent_InitChunk_Statics::PropPointers), sizeof(VoxelProceduralMeshComponent_eventInitChunk_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelProceduralMeshComponent_InitChunk_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelProceduralMeshComponent_InitChunk_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(VoxelProceduralMeshComponent_eventInitChunk_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVoxelProceduralMeshComponent_InitChunk()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelProceduralMeshComponent_InitChunk_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class UVoxelProceduralMeshComponent Function InitChunk ***************************

// ********** Begin Class UVoxelProceduralMeshComponent Function SetVoxelCollisionsFrozen **********
struct Z_Construct_UFunction_UVoxelProceduralMeshComponent_SetVoxelCollisionsFrozen_Statics
{
	struct VoxelProceduralMeshComponent_eventSetVoxelCollisionsFrozen_Parms
	{
		bool bFrozen;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Voxel|Collisions" },
		{ "ModuleRelativePath", "Public/VoxelRender/VoxelProceduralMeshComponent.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bFrozen_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFrozen;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UVoxelProceduralMeshComponent_SetVoxelCollisionsFrozen_Statics::NewProp_bFrozen_SetBit(void* Obj)
{
	((VoxelProceduralMeshComponent_eventSetVoxelCollisionsFrozen_Parms*)Obj)->bFrozen = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelProceduralMeshComponent_SetVoxelCollisionsFrozen_Statics::NewProp_bFrozen = { "bFrozen", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VoxelProceduralMeshComponent_eventSetVoxelCollisionsFrozen_Parms), &Z_Construct_UFunction_UVoxelProceduralMeshComponent_SetVoxelCollisionsFrozen_Statics::NewProp_bFrozen_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelProceduralMeshComponent_SetVoxelCollisionsFrozen_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelProceduralMeshComponent_SetVoxelCollisionsFrozen_Statics::NewProp_bFrozen,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelProceduralMeshComponent_SetVoxelCollisionsFrozen_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelProceduralMeshComponent_SetVoxelCollisionsFrozen_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelProceduralMeshComponent, nullptr, "SetVoxelCollisionsFrozen", Z_Construct_UFunction_UVoxelProceduralMeshComponent_SetVoxelCollisionsFrozen_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelProceduralMeshComponent_SetVoxelCollisionsFrozen_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVoxelProceduralMeshComponent_SetVoxelCollisionsFrozen_Statics::VoxelProceduralMeshComponent_eventSetVoxelCollisionsFrozen_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelProceduralMeshComponent_SetVoxelCollisionsFrozen_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelProceduralMeshComponent_SetVoxelCollisionsFrozen_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVoxelProceduralMeshComponent_SetVoxelCollisionsFrozen_Statics::VoxelProceduralMeshComponent_eventSetVoxelCollisionsFrozen_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVoxelProceduralMeshComponent_SetVoxelCollisionsFrozen()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelProceduralMeshComponent_SetVoxelCollisionsFrozen_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelProceduralMeshComponent::execSetVoxelCollisionsFrozen)
{
	P_GET_UBOOL(Z_Param_bFrozen);
	P_FINISH;
	P_NATIVE_BEGIN;
	UVoxelProceduralMeshComponent::SetVoxelCollisionsFrozen(Z_Param_bFrozen);
	P_NATIVE_END;
}
// ********** End Class UVoxelProceduralMeshComponent Function SetVoxelCollisionsFrozen ************

// ********** Begin Class UVoxelProceduralMeshComponent ********************************************
void UVoxelProceduralMeshComponent::StaticRegisterNativesUVoxelProceduralMeshComponent()
{
	UClass* Class = UVoxelProceduralMeshComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AreVoxelCollisionsFrozen", &UVoxelProceduralMeshComponent::execAreVoxelCollisionsFrozen },
		{ "SetVoxelCollisionsFrozen", &UVoxelProceduralMeshComponent::execSetVoxelCollisionsFrozen },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UVoxelProceduralMeshComponent;
UClass* UVoxelProceduralMeshComponent::GetPrivateStaticClass()
{
	using TClass = UVoxelProceduralMeshComponent;
	if (!Z_Registration_Info_UClass_UVoxelProceduralMeshComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("VoxelProceduralMeshComponent"),
			Z_Registration_Info_UClass_UVoxelProceduralMeshComponent.InnerSingleton,
			StaticRegisterNativesUVoxelProceduralMeshComponent,
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
	return Z_Registration_Info_UClass_UVoxelProceduralMeshComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_UVoxelProceduralMeshComponent_NoRegister()
{
	return UVoxelProceduralMeshComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UVoxelProceduralMeshComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Voxel" },
		{ "HideCategories", "Mobility VirtualTexture Trigger" },
		{ "IncludePath", "VoxelRender/VoxelProceduralMeshComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/VoxelRender/VoxelProceduralMeshComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BodySetup_MetaData[] = {
		{ "ModuleRelativePath", "Public/VoxelRender/VoxelProceduralMeshComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BodySetupBeingCooked_MetaData[] = {
		{ "ModuleRelativePath", "Public/VoxelRender/VoxelProceduralMeshComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BodySetup;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BodySetupBeingCooked;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UVoxelProceduralMeshComponent_AreVoxelCollisionsFrozen, "AreVoxelCollisionsFrozen" }, // 65809143
		{ &Z_Construct_UFunction_UVoxelProceduralMeshComponent_InitChunk, "InitChunk" }, // 291708788
		{ &Z_Construct_UFunction_UVoxelProceduralMeshComponent_SetVoxelCollisionsFrozen, "SetVoxelCollisionsFrozen" }, // 2731754648
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelProceduralMeshComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVoxelProceduralMeshComponent_Statics::NewProp_BodySetup = { "BodySetup", nullptr, (EPropertyFlags)0x0144000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelProceduralMeshComponent, BodySetup), Z_Construct_UClass_UBodySetup_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BodySetup_MetaData), NewProp_BodySetup_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVoxelProceduralMeshComponent_Statics::NewProp_BodySetupBeingCooked = { "BodySetupBeingCooked", nullptr, (EPropertyFlags)0x0144000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelProceduralMeshComponent, BodySetupBeingCooked), Z_Construct_UClass_UBodySetup_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BodySetupBeingCooked_MetaData), NewProp_BodySetupBeingCooked_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelProceduralMeshComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelProceduralMeshComponent_Statics::NewProp_BodySetup,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelProceduralMeshComponent_Statics::NewProp_BodySetupBeingCooked,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelProceduralMeshComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UVoxelProceduralMeshComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPrimitiveComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelProceduralMeshComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelProceduralMeshComponent_Statics::ClassParams = {
	&UVoxelProceduralMeshComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UVoxelProceduralMeshComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelProceduralMeshComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelProceduralMeshComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UVoxelProceduralMeshComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVoxelProceduralMeshComponent()
{
	if (!Z_Registration_Info_UClass_UVoxelProceduralMeshComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelProceduralMeshComponent.OuterSingleton, Z_Construct_UClass_UVoxelProceduralMeshComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVoxelProceduralMeshComponent.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelProceduralMeshComponent);
// ********** End Class UVoxelProceduralMeshComponent **********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelRender_VoxelProceduralMeshComponent_h__Script_Voxel_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UVoxelProceduralMeshComponent, UVoxelProceduralMeshComponent::StaticClass, TEXT("UVoxelProceduralMeshComponent"), &Z_Registration_Info_UClass_UVoxelProceduralMeshComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelProceduralMeshComponent), 905723446U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelRender_VoxelProceduralMeshComponent_h__Script_Voxel_186742148(TEXT("/Script/Voxel"),
	Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelRender_VoxelProceduralMeshComponent_h__Script_Voxel_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelRender_VoxelProceduralMeshComponent_h__Script_Voxel_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
