// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VoxelTools/VoxelPhysics.h"
#include "Engine/LatentActionManager.h"
#include "VoxelIntBox.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeVoxelPhysics() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FLatentActionInfo();
UPackage* Z_Construct_UPackage__Script_Voxel();
VOXEL_API UClass* Z_Construct_UClass_AVoxelWorld_NoRegister();
VOXEL_API UClass* Z_Construct_UClass_UVoxelPhysicsPartSpawner_NoRegister();
VOXEL_API UClass* Z_Construct_UClass_UVoxelPhysicsPartSpawnerResult_NoRegister();
VOXEL_API UClass* Z_Construct_UClass_UVoxelPhysicsTools();
VOXEL_API UClass* Z_Construct_UClass_UVoxelPhysicsTools_NoRegister();
VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelIntBox();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UVoxelPhysicsTools Function ApplyVoxelPhysics ****************************
struct Z_Construct_UFunction_UVoxelPhysicsTools_ApplyVoxelPhysics_Statics
{
	struct VoxelPhysicsTools_eventApplyVoxelPhysics_Parms
	{
		UObject* WorldContextObject;
		FLatentActionInfo LatentInfo;
		TArray<TScriptInterface<IVoxelPhysicsPartSpawnerResult>> Results;
		AVoxelWorld* World;
		FVoxelIntBox Bounds;
		TScriptInterface<IVoxelPhysicsPartSpawner> PartSpawner;
		int32 MinParts;
		bool bDebug;
		bool bHideLatentWarnings;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "MinParts, bDebug, bHideLatentWarnings" },
		{ "Category", "Voxel" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Apply voxel physics in a section of the voxel world by removing floating parts\n\x09 * @param Results\x09\x09\x09\x09""Each part spawner result correspond to an individual floating part. Cast them to their corresponding class to get info from them.\n\x09 * @param World\x09\x09\x09\x09\x09The voxel world\n\x09 * @param Bounds\x09\x09\x09\x09The bounds to search in (caution: keep this small!)\n\x09 * @param PartSpawner\x09\x09\x09The part spawner that will handle the spawning of new parts (construct a new object of class VoxelPhysicsPartSpawner_Smthg)\n\x09 *\x09\x09\x09\x09\x09\x09\x09\x09If null will just remove the floating parts\n\x09 * @param MinParts\x09\x09\x09\x09The minimum number of parts (inclusive) to have before removing them. This is useful to avoid considering the whole world as a floating part\n\x09 * @param bHideLatentWarnings\x09Hide latent warnings\n\x09 */" },
#endif
		{ "CPP_Default_bDebug", "false" },
		{ "CPP_Default_bHideLatentWarnings", "false" },
		{ "CPP_Default_MinParts", "2" },
		{ "DefaultToSelf", "World" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelPhysics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Apply voxel physics in a section of the voxel world by removing floating parts\n@param Results                               Each part spawner result correspond to an individual floating part. Cast them to their corresponding class to get info from them.\n@param World                                 The voxel world\n@param Bounds                                The bounds to search in (caution: keep this small!)\n@param PartSpawner                   The part spawner that will handle the spawning of new parts (construct a new object of class VoxelPhysicsPartSpawner_Smthg)\n                                                             If null will just remove the floating parts\n@param MinParts                              The minimum number of parts (inclusive) to have before removing them. This is useful to avoid considering the whole world as a floating part\n@param bHideLatentWarnings   Hide latent warnings" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
	static const UECodeGen_Private::FInterfacePropertyParams NewProp_Results_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Results;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Bounds;
	static const UECodeGen_Private::FInterfacePropertyParams NewProp_PartSpawner;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MinParts;
	static void NewProp_bDebug_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDebug;
	static void NewProp_bHideLatentWarnings_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHideLatentWarnings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelPhysicsTools_ApplyVoxelPhysics_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelPhysicsTools_eventApplyVoxelPhysics_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelPhysicsTools_ApplyVoxelPhysics_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelPhysicsTools_eventApplyVoxelPhysics_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(0, nullptr) }; // 4146275481
const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UVoxelPhysicsTools_ApplyVoxelPhysics_Statics::NewProp_Results_Inner = { "Results", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UVoxelPhysicsPartSpawnerResult_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVoxelPhysicsTools_ApplyVoxelPhysics_Statics::NewProp_Results = { "Results", nullptr, (EPropertyFlags)0x0014000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelPhysicsTools_eventApplyVoxelPhysics_Parms, Results), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelPhysicsTools_ApplyVoxelPhysics_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelPhysicsTools_eventApplyVoxelPhysics_Parms, World), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelPhysicsTools_ApplyVoxelPhysics_Statics::NewProp_Bounds = { "Bounds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelPhysicsTools_eventApplyVoxelPhysics_Parms, Bounds), Z_Construct_UScriptStruct_FVoxelIntBox, METADATA_PARAMS(0, nullptr) }; // 3520536583
const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UVoxelPhysicsTools_ApplyVoxelPhysics_Statics::NewProp_PartSpawner = { "PartSpawner", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelPhysicsTools_eventApplyVoxelPhysics_Parms, PartSpawner), Z_Construct_UClass_UVoxelPhysicsPartSpawner_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVoxelPhysicsTools_ApplyVoxelPhysics_Statics::NewProp_MinParts = { "MinParts", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelPhysicsTools_eventApplyVoxelPhysics_Parms, MinParts), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UVoxelPhysicsTools_ApplyVoxelPhysics_Statics::NewProp_bDebug_SetBit(void* Obj)
{
	((VoxelPhysicsTools_eventApplyVoxelPhysics_Parms*)Obj)->bDebug = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelPhysicsTools_ApplyVoxelPhysics_Statics::NewProp_bDebug = { "bDebug", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VoxelPhysicsTools_eventApplyVoxelPhysics_Parms), &Z_Construct_UFunction_UVoxelPhysicsTools_ApplyVoxelPhysics_Statics::NewProp_bDebug_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UVoxelPhysicsTools_ApplyVoxelPhysics_Statics::NewProp_bHideLatentWarnings_SetBit(void* Obj)
{
	((VoxelPhysicsTools_eventApplyVoxelPhysics_Parms*)Obj)->bHideLatentWarnings = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelPhysicsTools_ApplyVoxelPhysics_Statics::NewProp_bHideLatentWarnings = { "bHideLatentWarnings", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VoxelPhysicsTools_eventApplyVoxelPhysics_Parms), &Z_Construct_UFunction_UVoxelPhysicsTools_ApplyVoxelPhysics_Statics::NewProp_bHideLatentWarnings_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelPhysicsTools_ApplyVoxelPhysics_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelPhysicsTools_ApplyVoxelPhysics_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelPhysicsTools_ApplyVoxelPhysics_Statics::NewProp_LatentInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelPhysicsTools_ApplyVoxelPhysics_Statics::NewProp_Results_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelPhysicsTools_ApplyVoxelPhysics_Statics::NewProp_Results,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelPhysicsTools_ApplyVoxelPhysics_Statics::NewProp_World,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelPhysicsTools_ApplyVoxelPhysics_Statics::NewProp_Bounds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelPhysicsTools_ApplyVoxelPhysics_Statics::NewProp_PartSpawner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelPhysicsTools_ApplyVoxelPhysics_Statics::NewProp_MinParts,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelPhysicsTools_ApplyVoxelPhysics_Statics::NewProp_bDebug,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelPhysicsTools_ApplyVoxelPhysics_Statics::NewProp_bHideLatentWarnings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelPhysicsTools_ApplyVoxelPhysics_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelPhysicsTools_ApplyVoxelPhysics_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelPhysicsTools, nullptr, "ApplyVoxelPhysics", Z_Construct_UFunction_UVoxelPhysicsTools_ApplyVoxelPhysics_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelPhysicsTools_ApplyVoxelPhysics_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVoxelPhysicsTools_ApplyVoxelPhysics_Statics::VoxelPhysicsTools_eventApplyVoxelPhysics_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelPhysicsTools_ApplyVoxelPhysics_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelPhysicsTools_ApplyVoxelPhysics_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVoxelPhysicsTools_ApplyVoxelPhysics_Statics::VoxelPhysicsTools_eventApplyVoxelPhysics_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVoxelPhysicsTools_ApplyVoxelPhysics()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelPhysicsTools_ApplyVoxelPhysics_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelPhysicsTools::execApplyVoxelPhysics)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
	P_GET_TARRAY_REF(TScriptInterface<IVoxelPhysicsPartSpawnerResult>,Z_Param_Out_Results);
	P_GET_OBJECT(AVoxelWorld,Z_Param_World);
	P_GET_STRUCT(FVoxelIntBox,Z_Param_Bounds);
	P_GET_TINTERFACE(IVoxelPhysicsPartSpawner,Z_Param_PartSpawner);
	P_GET_PROPERTY(FIntProperty,Z_Param_MinParts);
	P_GET_UBOOL(Z_Param_bDebug);
	P_GET_UBOOL(Z_Param_bHideLatentWarnings);
	P_FINISH;
	P_NATIVE_BEGIN;
	UVoxelPhysicsTools::ApplyVoxelPhysics(Z_Param_WorldContextObject,Z_Param_LatentInfo,Z_Param_Out_Results,Z_Param_World,Z_Param_Bounds,Z_Param_PartSpawner,Z_Param_MinParts,Z_Param_bDebug,Z_Param_bHideLatentWarnings);
	P_NATIVE_END;
}
// ********** End Class UVoxelPhysicsTools Function ApplyVoxelPhysics ******************************

// ********** Begin Class UVoxelPhysicsTools *******************************************************
void UVoxelPhysicsTools::StaticRegisterNativesUVoxelPhysicsTools()
{
	UClass* Class = UVoxelPhysicsTools::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ApplyVoxelPhysics", &UVoxelPhysicsTools::execApplyVoxelPhysics },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UVoxelPhysicsTools;
UClass* UVoxelPhysicsTools::GetPrivateStaticClass()
{
	using TClass = UVoxelPhysicsTools;
	if (!Z_Registration_Info_UClass_UVoxelPhysicsTools.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("VoxelPhysicsTools"),
			Z_Registration_Info_UClass_UVoxelPhysicsTools.InnerSingleton,
			StaticRegisterNativesUVoxelPhysicsTools,
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
	return Z_Registration_Info_UClass_UVoxelPhysicsTools.InnerSingleton;
}
UClass* Z_Construct_UClass_UVoxelPhysicsTools_NoRegister()
{
	return UVoxelPhysicsTools::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UVoxelPhysicsTools_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "VoxelTools/VoxelPhysics.h" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelPhysics.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UVoxelPhysicsTools_ApplyVoxelPhysics, "ApplyVoxelPhysics" }, // 2181601712
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelPhysicsTools>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UVoxelPhysicsTools_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelPhysicsTools_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelPhysicsTools_Statics::ClassParams = {
	&UVoxelPhysicsTools::StaticClass,
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
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelPhysicsTools_Statics::Class_MetaDataParams), Z_Construct_UClass_UVoxelPhysicsTools_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVoxelPhysicsTools()
{
	if (!Z_Registration_Info_UClass_UVoxelPhysicsTools.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelPhysicsTools.OuterSingleton, Z_Construct_UClass_UVoxelPhysicsTools_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVoxelPhysicsTools.OuterSingleton;
}
UVoxelPhysicsTools::UVoxelPhysicsTools(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelPhysicsTools);
UVoxelPhysicsTools::~UVoxelPhysicsTools() {}
// ********** End Class UVoxelPhysicsTools *********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelTools_VoxelPhysics_h__Script_Voxel_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UVoxelPhysicsTools, UVoxelPhysicsTools::StaticClass, TEXT("UVoxelPhysicsTools"), &Z_Registration_Info_UClass_UVoxelPhysicsTools, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelPhysicsTools), 4185142020U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelTools_VoxelPhysics_h__Script_Voxel_2106782731(TEXT("/Script/Voxel"),
	Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelTools_VoxelPhysics_h__Script_Voxel_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelTools_VoxelPhysics_h__Script_Voxel_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
