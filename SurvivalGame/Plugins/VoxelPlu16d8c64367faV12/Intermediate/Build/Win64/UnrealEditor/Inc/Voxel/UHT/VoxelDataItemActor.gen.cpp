// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VoxelPlaceableItems/Actors/VoxelDataItemActor.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeVoxelDataItemActor() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor();
UPackage* Z_Construct_UPackage__Script_Voxel();
VOXEL_API UClass* Z_Construct_UClass_AVoxelDataItemActor();
VOXEL_API UClass* Z_Construct_UClass_AVoxelDataItemActor_NoRegister();
VOXEL_API UClass* Z_Construct_UClass_AVoxelWorld_NoRegister();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AVoxelDataItemActor Function K2_AddItemToWorld ***************************
struct VoxelDataItemActor_eventK2_AddItemToWorld_Parms
{
	AVoxelWorld* World;
};
static FName NAME_AVoxelDataItemActor_K2_AddItemToWorld = FName(TEXT("K2_AddItemToWorld"));
void AVoxelDataItemActor::K2_AddItemToWorld(AVoxelWorld* World)
{
	UFunction* Func = FindFunctionChecked(NAME_AVoxelDataItemActor_K2_AddItemToWorld);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		VoxelDataItemActor_eventK2_AddItemToWorld_Parms Parms;
		Parms.World=World;
	ProcessEvent(Func,&Parms);
	}
	else
	{
		K2_AddItemToWorld_Implementation(World);
	}
}
struct Z_Construct_UFunction_AVoxelDataItemActor_K2_AddItemToWorld_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "DisplayName", "AddItemToWorld" },
		{ "ModuleRelativePath", "Public/VoxelPlaceableItems/Actors/VoxelDataItemActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AVoxelDataItemActor_K2_AddItemToWorld_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelDataItemActor_eventK2_AddItemToWorld_Parms, World), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVoxelDataItemActor_K2_AddItemToWorld_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVoxelDataItemActor_K2_AddItemToWorld_Statics::NewProp_World,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AVoxelDataItemActor_K2_AddItemToWorld_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVoxelDataItemActor_K2_AddItemToWorld_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AVoxelDataItemActor, nullptr, "K2_AddItemToWorld", Z_Construct_UFunction_AVoxelDataItemActor_K2_AddItemToWorld_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AVoxelDataItemActor_K2_AddItemToWorld_Statics::PropPointers), sizeof(VoxelDataItemActor_eventK2_AddItemToWorld_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AVoxelDataItemActor_K2_AddItemToWorld_Statics::Function_MetaDataParams), Z_Construct_UFunction_AVoxelDataItemActor_K2_AddItemToWorld_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(VoxelDataItemActor_eventK2_AddItemToWorld_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AVoxelDataItemActor_K2_AddItemToWorld()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVoxelDataItemActor_K2_AddItemToWorld_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AVoxelDataItemActor::execK2_AddItemToWorld)
{
	P_GET_OBJECT(AVoxelWorld,Z_Param_World);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->K2_AddItemToWorld_Implementation(Z_Param_World);
	P_NATIVE_END;
}
// ********** End Class AVoxelDataItemActor Function K2_AddItemToWorld *****************************

// ********** Begin Class AVoxelDataItemActor Function ScheduleRefresh *****************************
struct Z_Construct_UFunction_AVoxelDataItemActor_ScheduleRefresh_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Voxel Data Item Actor" },
		{ "ModuleRelativePath", "Public/VoxelPlaceableItems/Actors/VoxelDataItemActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVoxelDataItemActor_ScheduleRefresh_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AVoxelDataItemActor, nullptr, "ScheduleRefresh", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AVoxelDataItemActor_ScheduleRefresh_Statics::Function_MetaDataParams), Z_Construct_UFunction_AVoxelDataItemActor_ScheduleRefresh_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AVoxelDataItemActor_ScheduleRefresh()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVoxelDataItemActor_ScheduleRefresh_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AVoxelDataItemActor::execScheduleRefresh)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ScheduleRefresh();
	P_NATIVE_END;
}
// ********** End Class AVoxelDataItemActor Function ScheduleRefresh *******************************

// ********** Begin Class AVoxelDataItemActor ******************************************************
void AVoxelDataItemActor::StaticRegisterNativesAVoxelDataItemActor()
{
	UClass* Class = AVoxelDataItemActor::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "K2_AddItemToWorld", &AVoxelDataItemActor::execK2_AddItemToWorld },
		{ "ScheduleRefresh", &AVoxelDataItemActor::execScheduleRefresh },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_AVoxelDataItemActor;
UClass* AVoxelDataItemActor::GetPrivateStaticClass()
{
	using TClass = AVoxelDataItemActor;
	if (!Z_Registration_Info_UClass_AVoxelDataItemActor.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("VoxelDataItemActor"),
			Z_Registration_Info_UClass_AVoxelDataItemActor.InnerSingleton,
			StaticRegisterNativesAVoxelDataItemActor,
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
	return Z_Registration_Info_UClass_AVoxelDataItemActor.InnerSingleton;
}
UClass* Z_Construct_UClass_AVoxelDataItemActor_NoRegister()
{
	return AVoxelDataItemActor::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AVoxelDataItemActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "VoxelPlaceableItems/Actors/VoxelDataItemActor.h" },
		{ "ModuleRelativePath", "Public/VoxelPlaceableItems/Actors/VoxelDataItemActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAutomaticUpdates_MetaData[] = {
		{ "Category", "Config" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// If true, will automatically remove & add back the item to the voxel world when edited\n" },
#endif
		{ "ModuleRelativePath", "Public/VoxelPlaceableItems/Actors/VoxelDataItemActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If true, will automatically remove & add back the item to the voxel world when edited" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RefreshDelay_MetaData[] = {
		{ "Category", "Config" },
		{ "ClampMin", "0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Delay in second to queue the refresh, to merge eventual duplicate queries together\n" },
#endif
		{ "ModuleRelativePath", "Public/VoxelPlaceableItems/Actors/VoxelDataItemActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Delay in second to queue the refresh, to merge eventual duplicate queries together" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_bAutomaticUpdates_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutomaticUpdates;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RefreshDelay;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AVoxelDataItemActor_K2_AddItemToWorld, "K2_AddItemToWorld" }, // 698780139
		{ &Z_Construct_UFunction_AVoxelDataItemActor_ScheduleRefresh, "ScheduleRefresh" }, // 1760098130
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AVoxelDataItemActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_AVoxelDataItemActor_Statics::NewProp_bAutomaticUpdates_SetBit(void* Obj)
{
	((AVoxelDataItemActor*)Obj)->bAutomaticUpdates = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AVoxelDataItemActor_Statics::NewProp_bAutomaticUpdates = { "bAutomaticUpdates", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AVoxelDataItemActor), &Z_Construct_UClass_AVoxelDataItemActor_Statics::NewProp_bAutomaticUpdates_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAutomaticUpdates_MetaData), NewProp_bAutomaticUpdates_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AVoxelDataItemActor_Statics::NewProp_RefreshDelay = { "RefreshDelay", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVoxelDataItemActor, RefreshDelay), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RefreshDelay_MetaData), NewProp_RefreshDelay_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AVoxelDataItemActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelDataItemActor_Statics::NewProp_bAutomaticUpdates,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelDataItemActor_Statics::NewProp_RefreshDelay,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AVoxelDataItemActor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AVoxelDataItemActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AVoxelDataItemActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AVoxelDataItemActor_Statics::ClassParams = {
	&AVoxelDataItemActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AVoxelDataItemActor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AVoxelDataItemActor_Statics::PropPointers),
	0,
	0x009001A5u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AVoxelDataItemActor_Statics::Class_MetaDataParams), Z_Construct_UClass_AVoxelDataItemActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AVoxelDataItemActor()
{
	if (!Z_Registration_Info_UClass_AVoxelDataItemActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AVoxelDataItemActor.OuterSingleton, Z_Construct_UClass_AVoxelDataItemActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AVoxelDataItemActor.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AVoxelDataItemActor);
AVoxelDataItemActor::~AVoxelDataItemActor() {}
// ********** End Class AVoxelDataItemActor ********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelPlaceableItems_Actors_VoxelDataItemActor_h__Script_Voxel_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AVoxelDataItemActor, AVoxelDataItemActor::StaticClass, TEXT("AVoxelDataItemActor"), &Z_Registration_Info_UClass_AVoxelDataItemActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AVoxelDataItemActor), 852319103U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelPlaceableItems_Actors_VoxelDataItemActor_h__Script_Voxel_1102281631(TEXT("/Script/Voxel"),
	Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelPlaceableItems_Actors_VoxelDataItemActor_h__Script_Voxel_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelPlaceableItems_Actors_VoxelDataItemActor_h__Script_Voxel_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
