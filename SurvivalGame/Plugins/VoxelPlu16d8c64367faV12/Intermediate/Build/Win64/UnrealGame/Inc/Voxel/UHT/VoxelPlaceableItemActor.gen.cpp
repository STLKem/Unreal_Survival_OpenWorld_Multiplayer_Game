// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Voxel/Public/VoxelPlaceableItems/Actors/VoxelPlaceableItemActor.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeVoxelPlaceableItemActor() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor();
UPackage* Z_Construct_UPackage__Script_Voxel();
VOXEL_API UClass* Z_Construct_UClass_AVoxelPlaceableItemActor();
VOXEL_API UClass* Z_Construct_UClass_AVoxelPlaceableItemActor_NoRegister();
VOXEL_API UClass* Z_Construct_UClass_AVoxelWorld_NoRegister();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AVoxelPlaceableItemActor Function K2_AddItemToWorld **********************
struct VoxelPlaceableItemActor_eventK2_AddItemToWorld_Parms
{
	AVoxelWorld* World;
};
static FName NAME_AVoxelPlaceableItemActor_K2_AddItemToWorld = FName(TEXT("K2_AddItemToWorld"));
void AVoxelPlaceableItemActor::K2_AddItemToWorld(AVoxelWorld* World)
{
	UFunction* Func = FindFunctionChecked(NAME_AVoxelPlaceableItemActor_K2_AddItemToWorld);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		VoxelPlaceableItemActor_eventK2_AddItemToWorld_Parms Parms;
		Parms.World=World;
	ProcessEvent(Func,&Parms);
	}
	else
	{
		K2_AddItemToWorld_Implementation(World);
	}
}
struct Z_Construct_UFunction_AVoxelPlaceableItemActor_K2_AddItemToWorld_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "DisplayName", "AddItemToWorld" },
		{ "ModuleRelativePath", "Public/VoxelPlaceableItems/Actors/VoxelPlaceableItemActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AVoxelPlaceableItemActor_K2_AddItemToWorld_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelPlaceableItemActor_eventK2_AddItemToWorld_Parms, World), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVoxelPlaceableItemActor_K2_AddItemToWorld_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVoxelPlaceableItemActor_K2_AddItemToWorld_Statics::NewProp_World,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AVoxelPlaceableItemActor_K2_AddItemToWorld_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVoxelPlaceableItemActor_K2_AddItemToWorld_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AVoxelPlaceableItemActor, nullptr, "K2_AddItemToWorld", Z_Construct_UFunction_AVoxelPlaceableItemActor_K2_AddItemToWorld_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AVoxelPlaceableItemActor_K2_AddItemToWorld_Statics::PropPointers), sizeof(VoxelPlaceableItemActor_eventK2_AddItemToWorld_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AVoxelPlaceableItemActor_K2_AddItemToWorld_Statics::Function_MetaDataParams), Z_Construct_UFunction_AVoxelPlaceableItemActor_K2_AddItemToWorld_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(VoxelPlaceableItemActor_eventK2_AddItemToWorld_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AVoxelPlaceableItemActor_K2_AddItemToWorld()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVoxelPlaceableItemActor_K2_AddItemToWorld_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AVoxelPlaceableItemActor::execK2_AddItemToWorld)
{
	P_GET_OBJECT(AVoxelWorld,Z_Param_World);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->K2_AddItemToWorld_Implementation(Z_Param_World);
	P_NATIVE_END;
}
// ********** End Class AVoxelPlaceableItemActor Function K2_AddItemToWorld ************************

// ********** Begin Class AVoxelPlaceableItemActor Function K2_GetPriority *************************
struct VoxelPlaceableItemActor_eventK2_GetPriority_Parms
{
	int32 ReturnValue;

	/** Constructor, initializes return property only **/
	VoxelPlaceableItemActor_eventK2_GetPriority_Parms()
		: ReturnValue(0)
	{
	}
};
static FName NAME_AVoxelPlaceableItemActor_K2_GetPriority = FName(TEXT("K2_GetPriority"));
int32 AVoxelPlaceableItemActor::K2_GetPriority() const
{
	UFunction* Func = FindFunctionChecked(NAME_AVoxelPlaceableItemActor_K2_GetPriority);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		VoxelPlaceableItemActor_eventK2_GetPriority_Parms Parms;
		const_cast<AVoxelPlaceableItemActor*>(this)->ProcessEvent(Func,&Parms);
		return Parms.ReturnValue;
	}
	else
	{
		return const_cast<AVoxelPlaceableItemActor*>(this)->K2_GetPriority_Implementation();
	}
}
struct Z_Construct_UFunction_AVoxelPlaceableItemActor_K2_GetPriority_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "DisplayName", "GetPriority" },
		{ "ModuleRelativePath", "Public/VoxelPlaceableItems/Actors/VoxelPlaceableItemActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AVoxelPlaceableItemActor_K2_GetPriority_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelPlaceableItemActor_eventK2_GetPriority_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVoxelPlaceableItemActor_K2_GetPriority_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVoxelPlaceableItemActor_K2_GetPriority_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AVoxelPlaceableItemActor_K2_GetPriority_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVoxelPlaceableItemActor_K2_GetPriority_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AVoxelPlaceableItemActor, nullptr, "K2_GetPriority", Z_Construct_UFunction_AVoxelPlaceableItemActor_K2_GetPriority_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AVoxelPlaceableItemActor_K2_GetPriority_Statics::PropPointers), sizeof(VoxelPlaceableItemActor_eventK2_GetPriority_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AVoxelPlaceableItemActor_K2_GetPriority_Statics::Function_MetaDataParams), Z_Construct_UFunction_AVoxelPlaceableItemActor_K2_GetPriority_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(VoxelPlaceableItemActor_eventK2_GetPriority_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AVoxelPlaceableItemActor_K2_GetPriority()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVoxelPlaceableItemActor_K2_GetPriority_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AVoxelPlaceableItemActor::execK2_GetPriority)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->K2_GetPriority_Implementation();
	P_NATIVE_END;
}
// ********** End Class AVoxelPlaceableItemActor Function K2_GetPriority ***************************

// ********** Begin Class AVoxelPlaceableItemActor *************************************************
void AVoxelPlaceableItemActor::StaticRegisterNativesAVoxelPlaceableItemActor()
{
	UClass* Class = AVoxelPlaceableItemActor::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "K2_AddItemToWorld", &AVoxelPlaceableItemActor::execK2_AddItemToWorld },
		{ "K2_GetPriority", &AVoxelPlaceableItemActor::execK2_GetPriority },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_AVoxelPlaceableItemActor;
UClass* AVoxelPlaceableItemActor::GetPrivateStaticClass()
{
	using TClass = AVoxelPlaceableItemActor;
	if (!Z_Registration_Info_UClass_AVoxelPlaceableItemActor.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("VoxelPlaceableItemActor"),
			Z_Registration_Info_UClass_AVoxelPlaceableItemActor.InnerSingleton,
			StaticRegisterNativesAVoxelPlaceableItemActor,
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
	return Z_Registration_Info_UClass_AVoxelPlaceableItemActor.InnerSingleton;
}
UClass* Z_Construct_UClass_AVoxelPlaceableItemActor_NoRegister()
{
	return AVoxelPlaceableItemActor::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AVoxelPlaceableItemActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "VoxelPlaceableItems/Actors/VoxelPlaceableItemActor.h" },
		{ "ModuleRelativePath", "Public/VoxelPlaceableItems/Actors/VoxelPlaceableItemActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PreviewWorld_MetaData[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Placeable Item Actor Settings" },
		{ "ModuleRelativePath", "Public/VoxelPlaceableItems/Actors/VoxelPlaceableItemActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOnlyImportIntoPreviewWorld_MetaData[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Placeable Item Actor Settings" },
		{ "Comment", "// If true, will only affect PreviewWorld. If false, will affect all the voxel worlds spawned into the scene\n" },
		{ "ModuleRelativePath", "Public/VoxelPlaceableItems/Actors/VoxelPlaceableItemActor.h" },
		{ "ToolTip", "If true, will only affect PreviewWorld. If false, will affect all the voxel worlds spawned into the scene" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PreviewWorld;
	static void NewProp_bOnlyImportIntoPreviewWorld_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOnlyImportIntoPreviewWorld;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AVoxelPlaceableItemActor_K2_AddItemToWorld, "K2_AddItemToWorld" }, // 1653556464
		{ &Z_Construct_UFunction_AVoxelPlaceableItemActor_K2_GetPriority, "K2_GetPriority" }, // 1037625112
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AVoxelPlaceableItemActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVoxelPlaceableItemActor_Statics::NewProp_PreviewWorld = { "PreviewWorld", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVoxelPlaceableItemActor, PreviewWorld), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PreviewWorld_MetaData), NewProp_PreviewWorld_MetaData) };
void Z_Construct_UClass_AVoxelPlaceableItemActor_Statics::NewProp_bOnlyImportIntoPreviewWorld_SetBit(void* Obj)
{
	((AVoxelPlaceableItemActor*)Obj)->bOnlyImportIntoPreviewWorld = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AVoxelPlaceableItemActor_Statics::NewProp_bOnlyImportIntoPreviewWorld = { "bOnlyImportIntoPreviewWorld", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AVoxelPlaceableItemActor), &Z_Construct_UClass_AVoxelPlaceableItemActor_Statics::NewProp_bOnlyImportIntoPreviewWorld_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOnlyImportIntoPreviewWorld_MetaData), NewProp_bOnlyImportIntoPreviewWorld_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AVoxelPlaceableItemActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelPlaceableItemActor_Statics::NewProp_PreviewWorld,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelPlaceableItemActor_Statics::NewProp_bOnlyImportIntoPreviewWorld,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AVoxelPlaceableItemActor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AVoxelPlaceableItemActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AVoxelPlaceableItemActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AVoxelPlaceableItemActor_Statics::ClassParams = {
	&AVoxelPlaceableItemActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AVoxelPlaceableItemActor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AVoxelPlaceableItemActor_Statics::PropPointers),
	0,
	0x009001A5u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AVoxelPlaceableItemActor_Statics::Class_MetaDataParams), Z_Construct_UClass_AVoxelPlaceableItemActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AVoxelPlaceableItemActor()
{
	if (!Z_Registration_Info_UClass_AVoxelPlaceableItemActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AVoxelPlaceableItemActor.OuterSingleton, Z_Construct_UClass_AVoxelPlaceableItemActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AVoxelPlaceableItemActor.OuterSingleton;
}
AVoxelPlaceableItemActor::AVoxelPlaceableItemActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AVoxelPlaceableItemActor);
AVoxelPlaceableItemActor::~AVoxelPlaceableItemActor() {}
// ********** End Class AVoxelPlaceableItemActor ***************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelPlaceableItems_Actors_VoxelPlaceableItemActor_h__Script_Voxel_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AVoxelPlaceableItemActor, AVoxelPlaceableItemActor::StaticClass, TEXT("AVoxelPlaceableItemActor"), &Z_Registration_Info_UClass_AVoxelPlaceableItemActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AVoxelPlaceableItemActor), 640826925U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelPlaceableItems_Actors_VoxelPlaceableItemActor_h__Script_Voxel_2745517767(TEXT("/Script/Voxel"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelPlaceableItems_Actors_VoxelPlaceableItemActor_h__Script_Voxel_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelPlaceableItems_Actors_VoxelPlaceableItemActor_h__Script_Voxel_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
