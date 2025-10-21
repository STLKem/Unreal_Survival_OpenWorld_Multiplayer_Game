// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VoxelSpawners/VoxelSpawnerActor.h"
#include "PhysicsEngine/BodyInstance.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeVoxelSpawnerActor() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBodyInstance();
UPackage* Z_Construct_UPackage__Script_Voxel();
VOXEL_API UClass* Z_Construct_UClass_AVoxelMeshSpawnerActor();
VOXEL_API UClass* Z_Construct_UClass_AVoxelMeshSpawnerActor_NoRegister();
VOXEL_API UClass* Z_Construct_UClass_AVoxelMeshWithPhysicsRelevancySpawnerActor();
VOXEL_API UClass* Z_Construct_UClass_AVoxelMeshWithPhysicsRelevancySpawnerActor_NoRegister();
VOXEL_API UClass* Z_Construct_UClass_AVoxelSpawnerActor();
VOXEL_API UClass* Z_Construct_UClass_AVoxelSpawnerActor_NoRegister();
VOXEL_API UClass* Z_Construct_UClass_UVoxelPhysicsRelevancyComponent_NoRegister();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AVoxelSpawnerActor Function SetInstanceRandom ****************************
struct VoxelSpawnerActor_eventSetInstanceRandom_Parms
{
	float Value;
};
static FName NAME_AVoxelSpawnerActor_SetInstanceRandom = FName(TEXT("SetInstanceRandom"));
void AVoxelSpawnerActor::SetInstanceRandom(float Value)
{
	UFunction* Func = FindFunctionChecked(NAME_AVoxelSpawnerActor_SetInstanceRandom);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		VoxelSpawnerActor_eventSetInstanceRandom_Parms Parms;
		Parms.Value=Value;
	ProcessEvent(Func,&Parms);
	}
	else
	{
		SetInstanceRandom_Implementation(Value);
	}
}
struct Z_Construct_UFunction_AVoxelSpawnerActor_SetInstanceRandom_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelSpawnerActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AVoxelSpawnerActor_SetInstanceRandom_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelSpawnerActor_eventSetInstanceRandom_Parms, Value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVoxelSpawnerActor_SetInstanceRandom_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVoxelSpawnerActor_SetInstanceRandom_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AVoxelSpawnerActor_SetInstanceRandom_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVoxelSpawnerActor_SetInstanceRandom_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AVoxelSpawnerActor, nullptr, "SetInstanceRandom", Z_Construct_UFunction_AVoxelSpawnerActor_SetInstanceRandom_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AVoxelSpawnerActor_SetInstanceRandom_Statics::PropPointers), sizeof(VoxelSpawnerActor_eventSetInstanceRandom_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AVoxelSpawnerActor_SetInstanceRandom_Statics::Function_MetaDataParams), Z_Construct_UFunction_AVoxelSpawnerActor_SetInstanceRandom_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(VoxelSpawnerActor_eventSetInstanceRandom_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AVoxelSpawnerActor_SetInstanceRandom()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVoxelSpawnerActor_SetInstanceRandom_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AVoxelSpawnerActor::execSetInstanceRandom)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetInstanceRandom_Implementation(Z_Param_Value);
	P_NATIVE_END;
}
// ********** End Class AVoxelSpawnerActor Function SetInstanceRandom ******************************

// ********** Begin Class AVoxelSpawnerActor Function SetStaticMesh ********************************
struct VoxelSpawnerActor_eventSetStaticMesh_Parms
{
	UStaticMesh* Mesh;
	TMap<int32,UMaterialInterface*> SectionsMaterials;
	FBodyInstance CollisionPresets;
};
static FName NAME_AVoxelSpawnerActor_SetStaticMesh = FName(TEXT("SetStaticMesh"));
void AVoxelSpawnerActor::SetStaticMesh(UStaticMesh* Mesh, TMap<int32,UMaterialInterface*> const& SectionsMaterials, FBodyInstance const& CollisionPresets)
{
	UFunction* Func = FindFunctionChecked(NAME_AVoxelSpawnerActor_SetStaticMesh);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		VoxelSpawnerActor_eventSetStaticMesh_Parms Parms;
		Parms.Mesh=Mesh;
		Parms.SectionsMaterials=SectionsMaterials;
		Parms.CollisionPresets=CollisionPresets;
	ProcessEvent(Func,&Parms);
	}
	else
	{
		SetStaticMesh_Implementation(Mesh, SectionsMaterials, CollisionPresets);
	}
}
struct Z_Construct_UFunction_AVoxelSpawnerActor_SetStaticMesh_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelSpawnerActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SectionsMaterials_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollisionPresets_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Mesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SectionsMaterials_ValueProp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SectionsMaterials_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_SectionsMaterials;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CollisionPresets;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AVoxelSpawnerActor_SetStaticMesh_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelSpawnerActor_eventSetStaticMesh_Parms, Mesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AVoxelSpawnerActor_SetStaticMesh_Statics::NewProp_SectionsMaterials_ValueProp = { "SectionsMaterials", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AVoxelSpawnerActor_SetStaticMesh_Statics::NewProp_SectionsMaterials_Key_KeyProp = { "SectionsMaterials_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_AVoxelSpawnerActor_SetStaticMesh_Statics::NewProp_SectionsMaterials = { "SectionsMaterials", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelSpawnerActor_eventSetStaticMesh_Parms, SectionsMaterials), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SectionsMaterials_MetaData), NewProp_SectionsMaterials_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AVoxelSpawnerActor_SetStaticMesh_Statics::NewProp_CollisionPresets = { "CollisionPresets", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelSpawnerActor_eventSetStaticMesh_Parms, CollisionPresets), Z_Construct_UScriptStruct_FBodyInstance, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollisionPresets_MetaData), NewProp_CollisionPresets_MetaData) }; // 289277017
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVoxelSpawnerActor_SetStaticMesh_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVoxelSpawnerActor_SetStaticMesh_Statics::NewProp_Mesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVoxelSpawnerActor_SetStaticMesh_Statics::NewProp_SectionsMaterials_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVoxelSpawnerActor_SetStaticMesh_Statics::NewProp_SectionsMaterials_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVoxelSpawnerActor_SetStaticMesh_Statics::NewProp_SectionsMaterials,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVoxelSpawnerActor_SetStaticMesh_Statics::NewProp_CollisionPresets,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AVoxelSpawnerActor_SetStaticMesh_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVoxelSpawnerActor_SetStaticMesh_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AVoxelSpawnerActor, nullptr, "SetStaticMesh", Z_Construct_UFunction_AVoxelSpawnerActor_SetStaticMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AVoxelSpawnerActor_SetStaticMesh_Statics::PropPointers), sizeof(VoxelSpawnerActor_eventSetStaticMesh_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AVoxelSpawnerActor_SetStaticMesh_Statics::Function_MetaDataParams), Z_Construct_UFunction_AVoxelSpawnerActor_SetStaticMesh_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(VoxelSpawnerActor_eventSetStaticMesh_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AVoxelSpawnerActor_SetStaticMesh()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVoxelSpawnerActor_SetStaticMesh_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AVoxelSpawnerActor::execSetStaticMesh)
{
	P_GET_OBJECT(UStaticMesh,Z_Param_Mesh);
	P_GET_TMAP_REF(int32,UMaterialInterface*,Z_Param_Out_SectionsMaterials);
	P_GET_STRUCT_REF(FBodyInstance,Z_Param_Out_CollisionPresets);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetStaticMesh_Implementation(Z_Param_Mesh,Z_Param_Out_SectionsMaterials,Z_Param_Out_CollisionPresets);
	P_NATIVE_END;
}
// ********** End Class AVoxelSpawnerActor Function SetStaticMesh **********************************

// ********** Begin Class AVoxelSpawnerActor *******************************************************
void AVoxelSpawnerActor::StaticRegisterNativesAVoxelSpawnerActor()
{
	UClass* Class = AVoxelSpawnerActor::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SetInstanceRandom", &AVoxelSpawnerActor::execSetInstanceRandom },
		{ "SetStaticMesh", &AVoxelSpawnerActor::execSetStaticMesh },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_AVoxelSpawnerActor;
UClass* AVoxelSpawnerActor::GetPrivateStaticClass()
{
	using TClass = AVoxelSpawnerActor;
	if (!Z_Registration_Info_UClass_AVoxelSpawnerActor.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("VoxelSpawnerActor"),
			Z_Registration_Info_UClass_AVoxelSpawnerActor.InnerSingleton,
			StaticRegisterNativesAVoxelSpawnerActor,
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
	return Z_Registration_Info_UClass_AVoxelSpawnerActor.InnerSingleton;
}
UClass* Z_Construct_UClass_AVoxelSpawnerActor_NoRegister()
{
	return AVoxelSpawnerActor::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AVoxelSpawnerActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Actor that can be spawned by voxel spawners\n// Base class: does nothing\n" },
#endif
		{ "IncludePath", "VoxelSpawners/VoxelSpawnerActor.h" },
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelSpawnerActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Actor that can be spawned by voxel spawners\nBase class: does nothing" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AVoxelSpawnerActor_SetInstanceRandom, "SetInstanceRandom" }, // 4259877284
		{ &Z_Construct_UFunction_AVoxelSpawnerActor_SetStaticMesh, "SetStaticMesh" }, // 1209893885
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AVoxelSpawnerActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AVoxelSpawnerActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AVoxelSpawnerActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AVoxelSpawnerActor_Statics::ClassParams = {
	&AVoxelSpawnerActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AVoxelSpawnerActor_Statics::Class_MetaDataParams), Z_Construct_UClass_AVoxelSpawnerActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AVoxelSpawnerActor()
{
	if (!Z_Registration_Info_UClass_AVoxelSpawnerActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AVoxelSpawnerActor.OuterSingleton, Z_Construct_UClass_AVoxelSpawnerActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AVoxelSpawnerActor.OuterSingleton;
}
AVoxelSpawnerActor::AVoxelSpawnerActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AVoxelSpawnerActor);
AVoxelSpawnerActor::~AVoxelSpawnerActor() {}
// ********** End Class AVoxelSpawnerActor *********************************************************

// ********** Begin Class AVoxelMeshSpawnerActor ***************************************************
void AVoxelMeshSpawnerActor::StaticRegisterNativesAVoxelMeshSpawnerActor()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AVoxelMeshSpawnerActor;
UClass* AVoxelMeshSpawnerActor::GetPrivateStaticClass()
{
	using TClass = AVoxelMeshSpawnerActor;
	if (!Z_Registration_Info_UClass_AVoxelMeshSpawnerActor.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("VoxelMeshSpawnerActor"),
			Z_Registration_Info_UClass_AVoxelMeshSpawnerActor.InnerSingleton,
			StaticRegisterNativesAVoxelMeshSpawnerActor,
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
	return Z_Registration_Info_UClass_AVoxelMeshSpawnerActor.InnerSingleton;
}
UClass* Z_Construct_UClass_AVoxelMeshSpawnerActor_NoRegister()
{
	return AVoxelMeshSpawnerActor::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AVoxelMeshSpawnerActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Basic voxel actor with a static mesh component\n" },
#endif
		{ "IncludePath", "VoxelSpawners/VoxelSpawnerActor.h" },
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelSpawnerActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Basic voxel actor with a static mesh component" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StaticMeshComponent_MetaData[] = {
		{ "Category", "Voxel" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelSpawnerActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMeshComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AVoxelMeshSpawnerActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVoxelMeshSpawnerActor_Statics::NewProp_StaticMeshComponent = { "StaticMeshComponent", nullptr, (EPropertyFlags)0x01140000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVoxelMeshSpawnerActor, StaticMeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StaticMeshComponent_MetaData), NewProp_StaticMeshComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AVoxelMeshSpawnerActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelMeshSpawnerActor_Statics::NewProp_StaticMeshComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AVoxelMeshSpawnerActor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AVoxelMeshSpawnerActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AVoxelSpawnerActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AVoxelMeshSpawnerActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AVoxelMeshSpawnerActor_Statics::ClassParams = {
	&AVoxelMeshSpawnerActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AVoxelMeshSpawnerActor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AVoxelMeshSpawnerActor_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AVoxelMeshSpawnerActor_Statics::Class_MetaDataParams), Z_Construct_UClass_AVoxelMeshSpawnerActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AVoxelMeshSpawnerActor()
{
	if (!Z_Registration_Info_UClass_AVoxelMeshSpawnerActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AVoxelMeshSpawnerActor.OuterSingleton, Z_Construct_UClass_AVoxelMeshSpawnerActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AVoxelMeshSpawnerActor.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AVoxelMeshSpawnerActor);
AVoxelMeshSpawnerActor::~AVoxelMeshSpawnerActor() {}
// ********** End Class AVoxelMeshSpawnerActor *****************************************************

// ********** Begin Class AVoxelMeshWithPhysicsRelevancySpawnerActor *******************************
void AVoxelMeshWithPhysicsRelevancySpawnerActor::StaticRegisterNativesAVoxelMeshWithPhysicsRelevancySpawnerActor()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AVoxelMeshWithPhysicsRelevancySpawnerActor;
UClass* AVoxelMeshWithPhysicsRelevancySpawnerActor::GetPrivateStaticClass()
{
	using TClass = AVoxelMeshWithPhysicsRelevancySpawnerActor;
	if (!Z_Registration_Info_UClass_AVoxelMeshWithPhysicsRelevancySpawnerActor.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("VoxelMeshWithPhysicsRelevancySpawnerActor"),
			Z_Registration_Info_UClass_AVoxelMeshWithPhysicsRelevancySpawnerActor.InnerSingleton,
			StaticRegisterNativesAVoxelMeshWithPhysicsRelevancySpawnerActor,
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
	return Z_Registration_Info_UClass_AVoxelMeshWithPhysicsRelevancySpawnerActor.InnerSingleton;
}
UClass* Z_Construct_UClass_AVoxelMeshWithPhysicsRelevancySpawnerActor_NoRegister()
{
	return AVoxelMeshWithPhysicsRelevancySpawnerActor::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AVoxelMeshWithPhysicsRelevancySpawnerActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Basic voxel actor with a static mesh component and a voxel physics relevancy component: physics will be frozen when outside the voxel world collision range\n" },
#endif
		{ "IncludePath", "VoxelSpawners/VoxelSpawnerActor.h" },
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelSpawnerActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Basic voxel actor with a static mesh component and a voxel physics relevancy component: physics will be frozen when outside the voxel world collision range" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PhysicsRelevancyComponent_MetaData[] = {
		{ "Category", "Voxel" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelSpawnerActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PhysicsRelevancyComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AVoxelMeshWithPhysicsRelevancySpawnerActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVoxelMeshWithPhysicsRelevancySpawnerActor_Statics::NewProp_PhysicsRelevancyComponent = { "PhysicsRelevancyComponent", nullptr, (EPropertyFlags)0x01140000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVoxelMeshWithPhysicsRelevancySpawnerActor, PhysicsRelevancyComponent), Z_Construct_UClass_UVoxelPhysicsRelevancyComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PhysicsRelevancyComponent_MetaData), NewProp_PhysicsRelevancyComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AVoxelMeshWithPhysicsRelevancySpawnerActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelMeshWithPhysicsRelevancySpawnerActor_Statics::NewProp_PhysicsRelevancyComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AVoxelMeshWithPhysicsRelevancySpawnerActor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AVoxelMeshWithPhysicsRelevancySpawnerActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AVoxelMeshSpawnerActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AVoxelMeshWithPhysicsRelevancySpawnerActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AVoxelMeshWithPhysicsRelevancySpawnerActor_Statics::ClassParams = {
	&AVoxelMeshWithPhysicsRelevancySpawnerActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AVoxelMeshWithPhysicsRelevancySpawnerActor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AVoxelMeshWithPhysicsRelevancySpawnerActor_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AVoxelMeshWithPhysicsRelevancySpawnerActor_Statics::Class_MetaDataParams), Z_Construct_UClass_AVoxelMeshWithPhysicsRelevancySpawnerActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AVoxelMeshWithPhysicsRelevancySpawnerActor()
{
	if (!Z_Registration_Info_UClass_AVoxelMeshWithPhysicsRelevancySpawnerActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AVoxelMeshWithPhysicsRelevancySpawnerActor.OuterSingleton, Z_Construct_UClass_AVoxelMeshWithPhysicsRelevancySpawnerActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AVoxelMeshWithPhysicsRelevancySpawnerActor.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AVoxelMeshWithPhysicsRelevancySpawnerActor);
AVoxelMeshWithPhysicsRelevancySpawnerActor::~AVoxelMeshWithPhysicsRelevancySpawnerActor() {}
// ********** End Class AVoxelMeshWithPhysicsRelevancySpawnerActor *********************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelSpawners_VoxelSpawnerActor_h__Script_Voxel_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AVoxelSpawnerActor, AVoxelSpawnerActor::StaticClass, TEXT("AVoxelSpawnerActor"), &Z_Registration_Info_UClass_AVoxelSpawnerActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AVoxelSpawnerActor), 246131319U) },
		{ Z_Construct_UClass_AVoxelMeshSpawnerActor, AVoxelMeshSpawnerActor::StaticClass, TEXT("AVoxelMeshSpawnerActor"), &Z_Registration_Info_UClass_AVoxelMeshSpawnerActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AVoxelMeshSpawnerActor), 2638025991U) },
		{ Z_Construct_UClass_AVoxelMeshWithPhysicsRelevancySpawnerActor, AVoxelMeshWithPhysicsRelevancySpawnerActor::StaticClass, TEXT("AVoxelMeshWithPhysicsRelevancySpawnerActor"), &Z_Registration_Info_UClass_AVoxelMeshWithPhysicsRelevancySpawnerActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AVoxelMeshWithPhysicsRelevancySpawnerActor), 558068902U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelSpawners_VoxelSpawnerActor_h__Script_Voxel_1635693462(TEXT("/Script/Voxel"),
	Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelSpawners_VoxelSpawnerActor_h__Script_Voxel_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelSpawners_VoxelSpawnerActor_h__Script_Voxel_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
