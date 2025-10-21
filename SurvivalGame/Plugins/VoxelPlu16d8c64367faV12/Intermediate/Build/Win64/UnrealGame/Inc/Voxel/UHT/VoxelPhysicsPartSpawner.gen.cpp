// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Voxel/Public/VoxelTools/VoxelPhysicsPartSpawner.h"
#include "Voxel/Public/VoxelTools/VoxelPhysicsPartSpawnerInterface.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeVoxelPhysicsPartSpawner() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ENGINE_API UClass* Z_Construct_UClass_AStaticMeshActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
UPackage* Z_Construct_UPackage__Script_Voxel();
VOXEL_API UClass* Z_Construct_UClass_AVoxelWorld_NoRegister();
VOXEL_API UClass* Z_Construct_UClass_UVoxelPhysicsPartSpawner_Cubes();
VOXEL_API UClass* Z_Construct_UClass_UVoxelPhysicsPartSpawner_Cubes_NoRegister();
VOXEL_API UClass* Z_Construct_UClass_UVoxelPhysicsPartSpawner_GetVoxels();
VOXEL_API UClass* Z_Construct_UClass_UVoxelPhysicsPartSpawner_GetVoxels_NoRegister();
VOXEL_API UClass* Z_Construct_UClass_UVoxelPhysicsPartSpawner_NoRegister();
VOXEL_API UClass* Z_Construct_UClass_UVoxelPhysicsPartSpawner_VoxelWorlds();
VOXEL_API UClass* Z_Construct_UClass_UVoxelPhysicsPartSpawner_VoxelWorlds_NoRegister();
VOXEL_API UClass* Z_Construct_UClass_UVoxelPhysicsPartSpawnerResult_Cubes();
VOXEL_API UClass* Z_Construct_UClass_UVoxelPhysicsPartSpawnerResult_Cubes_NoRegister();
VOXEL_API UClass* Z_Construct_UClass_UVoxelPhysicsPartSpawnerResult_GetVoxels();
VOXEL_API UClass* Z_Construct_UClass_UVoxelPhysicsPartSpawnerResult_GetVoxels_NoRegister();
VOXEL_API UClass* Z_Construct_UClass_UVoxelPhysicsPartSpawnerResult_NoRegister();
VOXEL_API UClass* Z_Construct_UClass_UVoxelPhysicsPartSpawnerResult_VoxelWorlds();
VOXEL_API UClass* Z_Construct_UClass_UVoxelPhysicsPartSpawnerResult_VoxelWorlds_NoRegister();
VOXEL_API UFunction* Z_Construct_UDelegateFunction_UVoxelPhysicsPartSpawner_VoxelWorlds_ConfigureVoxelWorld__DelegateSignature();
VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelPositionValueMaterial();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UVoxelPhysicsPartSpawnerResult_VoxelWorlds *******************************
void UVoxelPhysicsPartSpawnerResult_VoxelWorlds::StaticRegisterNativesUVoxelPhysicsPartSpawnerResult_VoxelWorlds()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UVoxelPhysicsPartSpawnerResult_VoxelWorlds;
UClass* UVoxelPhysicsPartSpawnerResult_VoxelWorlds::GetPrivateStaticClass()
{
	using TClass = UVoxelPhysicsPartSpawnerResult_VoxelWorlds;
	if (!Z_Registration_Info_UClass_UVoxelPhysicsPartSpawnerResult_VoxelWorlds.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("VoxelPhysicsPartSpawnerResult_VoxelWorlds"),
			Z_Registration_Info_UClass_UVoxelPhysicsPartSpawnerResult_VoxelWorlds.InnerSingleton,
			StaticRegisterNativesUVoxelPhysicsPartSpawnerResult_VoxelWorlds,
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
	return Z_Registration_Info_UClass_UVoxelPhysicsPartSpawnerResult_VoxelWorlds.InnerSingleton;
}
UClass* Z_Construct_UClass_UVoxelPhysicsPartSpawnerResult_VoxelWorlds_NoRegister()
{
	return UVoxelPhysicsPartSpawnerResult_VoxelWorlds::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UVoxelPhysicsPartSpawnerResult_VoxelWorlds_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "VoxelTools/VoxelPhysicsPartSpawner.h" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelPhysicsPartSpawner.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VoxelWorld_MetaData[] = {
		{ "Category", "Voxel" },
		{ "Comment", "// The voxel world representing this part\n" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelPhysicsPartSpawner.h" },
		{ "ToolTip", "The voxel world representing this part" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_VoxelWorld;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelPhysicsPartSpawnerResult_VoxelWorlds>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVoxelPhysicsPartSpawnerResult_VoxelWorlds_Statics::NewProp_VoxelWorld = { "VoxelWorld", nullptr, (EPropertyFlags)0x0114000000000014, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelPhysicsPartSpawnerResult_VoxelWorlds, VoxelWorld), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VoxelWorld_MetaData), NewProp_VoxelWorld_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelPhysicsPartSpawnerResult_VoxelWorlds_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelPhysicsPartSpawnerResult_VoxelWorlds_Statics::NewProp_VoxelWorld,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelPhysicsPartSpawnerResult_VoxelWorlds_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UVoxelPhysicsPartSpawnerResult_VoxelWorlds_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelPhysicsPartSpawnerResult_VoxelWorlds_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UVoxelPhysicsPartSpawnerResult_VoxelWorlds_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UVoxelPhysicsPartSpawnerResult_NoRegister, (int32)VTABLE_OFFSET(UVoxelPhysicsPartSpawnerResult_VoxelWorlds, IVoxelPhysicsPartSpawnerResult), false },  // 2734093083
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelPhysicsPartSpawnerResult_VoxelWorlds_Statics::ClassParams = {
	&UVoxelPhysicsPartSpawnerResult_VoxelWorlds::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UVoxelPhysicsPartSpawnerResult_VoxelWorlds_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelPhysicsPartSpawnerResult_VoxelWorlds_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelPhysicsPartSpawnerResult_VoxelWorlds_Statics::Class_MetaDataParams), Z_Construct_UClass_UVoxelPhysicsPartSpawnerResult_VoxelWorlds_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVoxelPhysicsPartSpawnerResult_VoxelWorlds()
{
	if (!Z_Registration_Info_UClass_UVoxelPhysicsPartSpawnerResult_VoxelWorlds.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelPhysicsPartSpawnerResult_VoxelWorlds.OuterSingleton, Z_Construct_UClass_UVoxelPhysicsPartSpawnerResult_VoxelWorlds_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVoxelPhysicsPartSpawnerResult_VoxelWorlds.OuterSingleton;
}
UVoxelPhysicsPartSpawnerResult_VoxelWorlds::UVoxelPhysicsPartSpawnerResult_VoxelWorlds(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelPhysicsPartSpawnerResult_VoxelWorlds);
UVoxelPhysicsPartSpawnerResult_VoxelWorlds::~UVoxelPhysicsPartSpawnerResult_VoxelWorlds() {}
// ********** End Class UVoxelPhysicsPartSpawnerResult_VoxelWorlds *********************************

// ********** Begin Delegate FConfigureVoxelWorld **************************************************
struct Z_Construct_UDelegateFunction_UVoxelPhysicsPartSpawner_VoxelWorlds_ConfigureVoxelWorld__DelegateSignature_Statics
{
	struct VoxelPhysicsPartSpawner_VoxelWorlds_eventConfigureVoxelWorld_Parms
	{
		AVoxelWorld* VoxelWorld;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelPhysicsPartSpawner.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_VoxelWorld;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UVoxelPhysicsPartSpawner_VoxelWorlds_ConfigureVoxelWorld__DelegateSignature_Statics::NewProp_VoxelWorld = { "VoxelWorld", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelPhysicsPartSpawner_VoxelWorlds_eventConfigureVoxelWorld_Parms, VoxelWorld), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UVoxelPhysicsPartSpawner_VoxelWorlds_ConfigureVoxelWorld__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UVoxelPhysicsPartSpawner_VoxelWorlds_ConfigureVoxelWorld__DelegateSignature_Statics::NewProp_VoxelWorld,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UVoxelPhysicsPartSpawner_VoxelWorlds_ConfigureVoxelWorld__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_UVoxelPhysicsPartSpawner_VoxelWorlds_ConfigureVoxelWorld__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelPhysicsPartSpawner_VoxelWorlds, nullptr, "ConfigureVoxelWorld__DelegateSignature", Z_Construct_UDelegateFunction_UVoxelPhysicsPartSpawner_VoxelWorlds_ConfigureVoxelWorld__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UVoxelPhysicsPartSpawner_VoxelWorlds_ConfigureVoxelWorld__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UVoxelPhysicsPartSpawner_VoxelWorlds_ConfigureVoxelWorld__DelegateSignature_Statics::VoxelPhysicsPartSpawner_VoxelWorlds_eventConfigureVoxelWorld_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UVoxelPhysicsPartSpawner_VoxelWorlds_ConfigureVoxelWorld__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UVoxelPhysicsPartSpawner_VoxelWorlds_ConfigureVoxelWorld__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_UVoxelPhysicsPartSpawner_VoxelWorlds_ConfigureVoxelWorld__DelegateSignature_Statics::VoxelPhysicsPartSpawner_VoxelWorlds_eventConfigureVoxelWorld_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UVoxelPhysicsPartSpawner_VoxelWorlds_ConfigureVoxelWorld__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UVoxelPhysicsPartSpawner_VoxelWorlds_ConfigureVoxelWorld__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void UVoxelPhysicsPartSpawner_VoxelWorlds::FConfigureVoxelWorld_DelegateWrapper(const FScriptDelegate& ConfigureVoxelWorld, AVoxelWorld* VoxelWorld)
{
	struct VoxelPhysicsPartSpawner_VoxelWorlds_eventConfigureVoxelWorld_Parms
	{
		AVoxelWorld* VoxelWorld;
	};
	VoxelPhysicsPartSpawner_VoxelWorlds_eventConfigureVoxelWorld_Parms Parms;
	Parms.VoxelWorld=VoxelWorld;
	ConfigureVoxelWorld.ProcessDelegate<UObject>(&Parms);
}
// ********** End Delegate FConfigureVoxelWorld ****************************************************

// ********** Begin Class UVoxelPhysicsPartSpawner_VoxelWorlds *************************************
void UVoxelPhysicsPartSpawner_VoxelWorlds::StaticRegisterNativesUVoxelPhysicsPartSpawner_VoxelWorlds()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UVoxelPhysicsPartSpawner_VoxelWorlds;
UClass* UVoxelPhysicsPartSpawner_VoxelWorlds::GetPrivateStaticClass()
{
	using TClass = UVoxelPhysicsPartSpawner_VoxelWorlds;
	if (!Z_Registration_Info_UClass_UVoxelPhysicsPartSpawner_VoxelWorlds.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("VoxelPhysicsPartSpawner_VoxelWorlds"),
			Z_Registration_Info_UClass_UVoxelPhysicsPartSpawner_VoxelWorlds.InnerSingleton,
			StaticRegisterNativesUVoxelPhysicsPartSpawner_VoxelWorlds,
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
	return Z_Registration_Info_UClass_UVoxelPhysicsPartSpawner_VoxelWorlds.InnerSingleton;
}
UClass* Z_Construct_UClass_UVoxelPhysicsPartSpawner_VoxelWorlds_NoRegister()
{
	return UVoxelPhysicsPartSpawner_VoxelWorlds::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UVoxelPhysicsPartSpawner_VoxelWorlds_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Will spawn a voxel world per part\n// The voxel worlds are return in the Results\n// You can configure each voxel world by binding ConfigureVoxelWorld: this callback will be run before creating the voxel worlds\n// The voxel worlds will be created when the initial world update will be done\n// By default this will enable SimulatePhysics on the new world, and set the CollisionTraceFlag to SimpleAndComplex\n" },
		{ "IncludePath", "VoxelTools/VoxelPhysicsPartSpawner.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelPhysicsPartSpawner.h" },
		{ "ToolTip", "Will spawn a voxel world per part\nThe voxel worlds are return in the Results\nYou can configure each voxel world by binding ConfigureVoxelWorld: this callback will be run before creating the voxel worlds\nThe voxel worlds will be created when the initial world update will be done\nBy default this will enable SimulatePhysics on the new world, and set the CollisionTraceFlag to SimpleAndComplex" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConfigureVoxelWorld_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelPhysicsPartSpawner.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VoxelWorldClass_MetaData[] = {
		{ "Category", "Voxel" },
		{ "Comment", "// All the voxel world properties will be overriden! Use this for events, and use ConfigureVoxelWorld if you want to set properties\n" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelPhysicsPartSpawner.h" },
		{ "ToolTip", "All the voxel world properties will be overriden! Use this for events, and use ConfigureVoxelWorld if you want to set properties" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_ConfigureVoxelWorld;
	static const UECodeGen_Private::FClassPropertyParams NewProp_VoxelWorldClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UDelegateFunction_UVoxelPhysicsPartSpawner_VoxelWorlds_ConfigureVoxelWorld__DelegateSignature, "ConfigureVoxelWorld__DelegateSignature" }, // 1218112133
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelPhysicsPartSpawner_VoxelWorlds>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UClass_UVoxelPhysicsPartSpawner_VoxelWorlds_Statics::NewProp_ConfigureVoxelWorld = { "ConfigureVoxelWorld", nullptr, (EPropertyFlags)0x0010000000080005, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelPhysicsPartSpawner_VoxelWorlds, ConfigureVoxelWorld), Z_Construct_UDelegateFunction_UVoxelPhysicsPartSpawner_VoxelWorlds_ConfigureVoxelWorld__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConfigureVoxelWorld_MetaData), NewProp_ConfigureVoxelWorld_MetaData) }; // 1218112133
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UVoxelPhysicsPartSpawner_VoxelWorlds_Statics::NewProp_VoxelWorldClass = { "VoxelWorldClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelPhysicsPartSpawner_VoxelWorlds, VoxelWorldClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VoxelWorldClass_MetaData), NewProp_VoxelWorldClass_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelPhysicsPartSpawner_VoxelWorlds_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelPhysicsPartSpawner_VoxelWorlds_Statics::NewProp_ConfigureVoxelWorld,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelPhysicsPartSpawner_VoxelWorlds_Statics::NewProp_VoxelWorldClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelPhysicsPartSpawner_VoxelWorlds_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UVoxelPhysicsPartSpawner_VoxelWorlds_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelPhysicsPartSpawner_VoxelWorlds_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UVoxelPhysicsPartSpawner_VoxelWorlds_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UVoxelPhysicsPartSpawner_NoRegister, (int32)VTABLE_OFFSET(UVoxelPhysicsPartSpawner_VoxelWorlds, IVoxelPhysicsPartSpawner), false },  // 3800609994
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelPhysicsPartSpawner_VoxelWorlds_Statics::ClassParams = {
	&UVoxelPhysicsPartSpawner_VoxelWorlds::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UVoxelPhysicsPartSpawner_VoxelWorlds_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelPhysicsPartSpawner_VoxelWorlds_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelPhysicsPartSpawner_VoxelWorlds_Statics::Class_MetaDataParams), Z_Construct_UClass_UVoxelPhysicsPartSpawner_VoxelWorlds_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVoxelPhysicsPartSpawner_VoxelWorlds()
{
	if (!Z_Registration_Info_UClass_UVoxelPhysicsPartSpawner_VoxelWorlds.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelPhysicsPartSpawner_VoxelWorlds.OuterSingleton, Z_Construct_UClass_UVoxelPhysicsPartSpawner_VoxelWorlds_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVoxelPhysicsPartSpawner_VoxelWorlds.OuterSingleton;
}
UVoxelPhysicsPartSpawner_VoxelWorlds::UVoxelPhysicsPartSpawner_VoxelWorlds(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelPhysicsPartSpawner_VoxelWorlds);
UVoxelPhysicsPartSpawner_VoxelWorlds::~UVoxelPhysicsPartSpawner_VoxelWorlds() {}
// ********** End Class UVoxelPhysicsPartSpawner_VoxelWorlds ***************************************

// ********** Begin Class UVoxelPhysicsPartSpawnerResult_Cubes *************************************
void UVoxelPhysicsPartSpawnerResult_Cubes::StaticRegisterNativesUVoxelPhysicsPartSpawnerResult_Cubes()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UVoxelPhysicsPartSpawnerResult_Cubes;
UClass* UVoxelPhysicsPartSpawnerResult_Cubes::GetPrivateStaticClass()
{
	using TClass = UVoxelPhysicsPartSpawnerResult_Cubes;
	if (!Z_Registration_Info_UClass_UVoxelPhysicsPartSpawnerResult_Cubes.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("VoxelPhysicsPartSpawnerResult_Cubes"),
			Z_Registration_Info_UClass_UVoxelPhysicsPartSpawnerResult_Cubes.InnerSingleton,
			StaticRegisterNativesUVoxelPhysicsPartSpawnerResult_Cubes,
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
	return Z_Registration_Info_UClass_UVoxelPhysicsPartSpawnerResult_Cubes.InnerSingleton;
}
UClass* Z_Construct_UClass_UVoxelPhysicsPartSpawnerResult_Cubes_NoRegister()
{
	return UVoxelPhysicsPartSpawnerResult_Cubes::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UVoxelPhysicsPartSpawnerResult_Cubes_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "///////////////////////////////////////////////////////////////////////////////\n" },
		{ "IncludePath", "VoxelTools/VoxelPhysicsPartSpawner.h" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelPhysicsPartSpawner.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Cubes_MetaData[] = {
		{ "Category", "Voxel" },
		{ "Comment", "// The cubes for this part\n" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelPhysicsPartSpawner.h" },
		{ "ToolTip", "The cubes for this part" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Cubes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Cubes;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelPhysicsPartSpawnerResult_Cubes>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVoxelPhysicsPartSpawnerResult_Cubes_Statics::NewProp_Cubes_Inner = { "Cubes", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AStaticMeshActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UVoxelPhysicsPartSpawnerResult_Cubes_Statics::NewProp_Cubes = { "Cubes", nullptr, (EPropertyFlags)0x0114000000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelPhysicsPartSpawnerResult_Cubes, Cubes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Cubes_MetaData), NewProp_Cubes_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelPhysicsPartSpawnerResult_Cubes_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelPhysicsPartSpawnerResult_Cubes_Statics::NewProp_Cubes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelPhysicsPartSpawnerResult_Cubes_Statics::NewProp_Cubes,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelPhysicsPartSpawnerResult_Cubes_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UVoxelPhysicsPartSpawnerResult_Cubes_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelPhysicsPartSpawnerResult_Cubes_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UVoxelPhysicsPartSpawnerResult_Cubes_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UVoxelPhysicsPartSpawnerResult_NoRegister, (int32)VTABLE_OFFSET(UVoxelPhysicsPartSpawnerResult_Cubes, IVoxelPhysicsPartSpawnerResult), false },  // 2734093083
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelPhysicsPartSpawnerResult_Cubes_Statics::ClassParams = {
	&UVoxelPhysicsPartSpawnerResult_Cubes::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UVoxelPhysicsPartSpawnerResult_Cubes_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelPhysicsPartSpawnerResult_Cubes_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelPhysicsPartSpawnerResult_Cubes_Statics::Class_MetaDataParams), Z_Construct_UClass_UVoxelPhysicsPartSpawnerResult_Cubes_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVoxelPhysicsPartSpawnerResult_Cubes()
{
	if (!Z_Registration_Info_UClass_UVoxelPhysicsPartSpawnerResult_Cubes.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelPhysicsPartSpawnerResult_Cubes.OuterSingleton, Z_Construct_UClass_UVoxelPhysicsPartSpawnerResult_Cubes_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVoxelPhysicsPartSpawnerResult_Cubes.OuterSingleton;
}
UVoxelPhysicsPartSpawnerResult_Cubes::UVoxelPhysicsPartSpawnerResult_Cubes(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelPhysicsPartSpawnerResult_Cubes);
UVoxelPhysicsPartSpawnerResult_Cubes::~UVoxelPhysicsPartSpawnerResult_Cubes() {}
// ********** End Class UVoxelPhysicsPartSpawnerResult_Cubes ***************************************

// ********** Begin Class UVoxelPhysicsPartSpawner_Cubes *******************************************
void UVoxelPhysicsPartSpawner_Cubes::StaticRegisterNativesUVoxelPhysicsPartSpawner_Cubes()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UVoxelPhysicsPartSpawner_Cubes;
UClass* UVoxelPhysicsPartSpawner_Cubes::GetPrivateStaticClass()
{
	using TClass = UVoxelPhysicsPartSpawner_Cubes;
	if (!Z_Registration_Info_UClass_UVoxelPhysicsPartSpawner_Cubes.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("VoxelPhysicsPartSpawner_Cubes"),
			Z_Registration_Info_UClass_UVoxelPhysicsPartSpawner_Cubes.InnerSingleton,
			StaticRegisterNativesUVoxelPhysicsPartSpawner_Cubes,
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
	return Z_Registration_Info_UClass_UVoxelPhysicsPartSpawner_Cubes.InnerSingleton;
}
UClass* Z_Construct_UClass_UVoxelPhysicsPartSpawner_Cubes_NoRegister()
{
	return UVoxelPhysicsPartSpawner_Cubes::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UVoxelPhysicsPartSpawner_Cubes_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Will spawn a cube actor for each floating voxel\n// Can get the spawned actors in Cubes\n// The actors will have physics enabled once the voxel world will be updated (to avoid spawning cubes inside the world)\n" },
		{ "IncludePath", "VoxelTools/VoxelPhysicsPartSpawner.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelPhysicsPartSpawner.h" },
		{ "ToolTip", "Will spawn a cube actor for each floating voxel\nCan get the spawned actors in Cubes\nThe actors will have physics enabled once the voxel world will be updated (to avoid spawning cubes inside the world)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Material_MetaData[] = {
		{ "Category", "Voxel" },
		{ "Comment", "// Same material as the voxel world, but instead of a vertex color input use a vector parameter named VertexColor\n" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelPhysicsPartSpawner.h" },
		{ "ToolTip", "Same material as the voxel world, but instead of a vertex color input use a vector parameter named VertexColor" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CubeMesh_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelPhysicsPartSpawner.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnProbability_MetaData[] = {
		{ "Category", "Voxel" },
		{ "Comment", "// Spawn probability for each cube. Use this to reduce the amount of cubes spawned.\n" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelPhysicsPartSpawner.h" },
		{ "ToolTip", "Spawn probability for each cube. Use this to reduce the amount of cubes spawned." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Material;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CubeMesh;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SpawnProbability;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelPhysicsPartSpawner_Cubes>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVoxelPhysicsPartSpawner_Cubes_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelPhysicsPartSpawner_Cubes, Material), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Material_MetaData), NewProp_Material_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVoxelPhysicsPartSpawner_Cubes_Statics::NewProp_CubeMesh = { "CubeMesh", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelPhysicsPartSpawner_Cubes, CubeMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CubeMesh_MetaData), NewProp_CubeMesh_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVoxelPhysicsPartSpawner_Cubes_Statics::NewProp_SpawnProbability = { "SpawnProbability", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelPhysicsPartSpawner_Cubes, SpawnProbability), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnProbability_MetaData), NewProp_SpawnProbability_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelPhysicsPartSpawner_Cubes_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelPhysicsPartSpawner_Cubes_Statics::NewProp_Material,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelPhysicsPartSpawner_Cubes_Statics::NewProp_CubeMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelPhysicsPartSpawner_Cubes_Statics::NewProp_SpawnProbability,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelPhysicsPartSpawner_Cubes_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UVoxelPhysicsPartSpawner_Cubes_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelPhysicsPartSpawner_Cubes_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UVoxelPhysicsPartSpawner_Cubes_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UVoxelPhysicsPartSpawner_NoRegister, (int32)VTABLE_OFFSET(UVoxelPhysicsPartSpawner_Cubes, IVoxelPhysicsPartSpawner), false },  // 3800609994
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelPhysicsPartSpawner_Cubes_Statics::ClassParams = {
	&UVoxelPhysicsPartSpawner_Cubes::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UVoxelPhysicsPartSpawner_Cubes_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelPhysicsPartSpawner_Cubes_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelPhysicsPartSpawner_Cubes_Statics::Class_MetaDataParams), Z_Construct_UClass_UVoxelPhysicsPartSpawner_Cubes_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVoxelPhysicsPartSpawner_Cubes()
{
	if (!Z_Registration_Info_UClass_UVoxelPhysicsPartSpawner_Cubes.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelPhysicsPartSpawner_Cubes.OuterSingleton, Z_Construct_UClass_UVoxelPhysicsPartSpawner_Cubes_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVoxelPhysicsPartSpawner_Cubes.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelPhysicsPartSpawner_Cubes);
UVoxelPhysicsPartSpawner_Cubes::~UVoxelPhysicsPartSpawner_Cubes() {}
// ********** End Class UVoxelPhysicsPartSpawner_Cubes *********************************************

// ********** Begin Class UVoxelPhysicsPartSpawnerResult_GetVoxels *********************************
void UVoxelPhysicsPartSpawnerResult_GetVoxels::StaticRegisterNativesUVoxelPhysicsPartSpawnerResult_GetVoxels()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UVoxelPhysicsPartSpawnerResult_GetVoxels;
UClass* UVoxelPhysicsPartSpawnerResult_GetVoxels::GetPrivateStaticClass()
{
	using TClass = UVoxelPhysicsPartSpawnerResult_GetVoxels;
	if (!Z_Registration_Info_UClass_UVoxelPhysicsPartSpawnerResult_GetVoxels.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("VoxelPhysicsPartSpawnerResult_GetVoxels"),
			Z_Registration_Info_UClass_UVoxelPhysicsPartSpawnerResult_GetVoxels.InnerSingleton,
			StaticRegisterNativesUVoxelPhysicsPartSpawnerResult_GetVoxels,
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
	return Z_Registration_Info_UClass_UVoxelPhysicsPartSpawnerResult_GetVoxels.InnerSingleton;
}
UClass* Z_Construct_UClass_UVoxelPhysicsPartSpawnerResult_GetVoxels_NoRegister()
{
	return UVoxelPhysicsPartSpawnerResult_GetVoxels::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UVoxelPhysicsPartSpawnerResult_GetVoxels_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "///////////////////////////////////////////////////////////////////////////////\n" },
		{ "IncludePath", "VoxelTools/VoxelPhysicsPartSpawner.h" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelPhysicsPartSpawner.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Voxels_MetaData[] = {
		{ "Category", "Voxel" },
		{ "Comment", "// The voxels inside this part\n" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelPhysicsPartSpawner.h" },
		{ "ToolTip", "The voxels inside this part" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Voxels_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Voxels;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelPhysicsPartSpawnerResult_GetVoxels>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVoxelPhysicsPartSpawnerResult_GetVoxels_Statics::NewProp_Voxels_Inner = { "Voxels", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVoxelPositionValueMaterial, METADATA_PARAMS(0, nullptr) }; // 2431736861
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UVoxelPhysicsPartSpawnerResult_GetVoxels_Statics::NewProp_Voxels = { "Voxels", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelPhysicsPartSpawnerResult_GetVoxels, Voxels), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Voxels_MetaData), NewProp_Voxels_MetaData) }; // 2431736861
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelPhysicsPartSpawnerResult_GetVoxels_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelPhysicsPartSpawnerResult_GetVoxels_Statics::NewProp_Voxels_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelPhysicsPartSpawnerResult_GetVoxels_Statics::NewProp_Voxels,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelPhysicsPartSpawnerResult_GetVoxels_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UVoxelPhysicsPartSpawnerResult_GetVoxels_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelPhysicsPartSpawnerResult_GetVoxels_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UVoxelPhysicsPartSpawnerResult_GetVoxels_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UVoxelPhysicsPartSpawnerResult_NoRegister, (int32)VTABLE_OFFSET(UVoxelPhysicsPartSpawnerResult_GetVoxels, IVoxelPhysicsPartSpawnerResult), false },  // 2734093083
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelPhysicsPartSpawnerResult_GetVoxels_Statics::ClassParams = {
	&UVoxelPhysicsPartSpawnerResult_GetVoxels::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UVoxelPhysicsPartSpawnerResult_GetVoxels_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelPhysicsPartSpawnerResult_GetVoxels_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelPhysicsPartSpawnerResult_GetVoxels_Statics::Class_MetaDataParams), Z_Construct_UClass_UVoxelPhysicsPartSpawnerResult_GetVoxels_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVoxelPhysicsPartSpawnerResult_GetVoxels()
{
	if (!Z_Registration_Info_UClass_UVoxelPhysicsPartSpawnerResult_GetVoxels.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelPhysicsPartSpawnerResult_GetVoxels.OuterSingleton, Z_Construct_UClass_UVoxelPhysicsPartSpawnerResult_GetVoxels_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVoxelPhysicsPartSpawnerResult_GetVoxels.OuterSingleton;
}
UVoxelPhysicsPartSpawnerResult_GetVoxels::UVoxelPhysicsPartSpawnerResult_GetVoxels(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelPhysicsPartSpawnerResult_GetVoxels);
UVoxelPhysicsPartSpawnerResult_GetVoxels::~UVoxelPhysicsPartSpawnerResult_GetVoxels() {}
// ********** End Class UVoxelPhysicsPartSpawnerResult_GetVoxels ***********************************

// ********** Begin Class UVoxelPhysicsPartSpawner_GetVoxels ***************************************
void UVoxelPhysicsPartSpawner_GetVoxels::StaticRegisterNativesUVoxelPhysicsPartSpawner_GetVoxels()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UVoxelPhysicsPartSpawner_GetVoxels;
UClass* UVoxelPhysicsPartSpawner_GetVoxels::GetPrivateStaticClass()
{
	using TClass = UVoxelPhysicsPartSpawner_GetVoxels;
	if (!Z_Registration_Info_UClass_UVoxelPhysicsPartSpawner_GetVoxels.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("VoxelPhysicsPartSpawner_GetVoxels"),
			Z_Registration_Info_UClass_UVoxelPhysicsPartSpawner_GetVoxels.InnerSingleton,
			StaticRegisterNativesUVoxelPhysicsPartSpawner_GetVoxels,
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
	return Z_Registration_Info_UClass_UVoxelPhysicsPartSpawner_GetVoxels.InnerSingleton;
}
UClass* Z_Construct_UClass_UVoxelPhysicsPartSpawner_GetVoxels_NoRegister()
{
	return UVoxelPhysicsPartSpawner_GetVoxels::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UVoxelPhysicsPartSpawner_GetVoxels_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// The data is accessible immediately in the result\n" },
		{ "IncludePath", "VoxelTools/VoxelPhysicsPartSpawner.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelPhysicsPartSpawner.h" },
		{ "ToolTip", "The data is accessible immediately in the result" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelPhysicsPartSpawner_GetVoxels>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UVoxelPhysicsPartSpawner_GetVoxels_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelPhysicsPartSpawner_GetVoxels_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UVoxelPhysicsPartSpawner_GetVoxels_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UVoxelPhysicsPartSpawner_NoRegister, (int32)VTABLE_OFFSET(UVoxelPhysicsPartSpawner_GetVoxels, IVoxelPhysicsPartSpawner), false },  // 3800609994
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelPhysicsPartSpawner_GetVoxels_Statics::ClassParams = {
	&UVoxelPhysicsPartSpawner_GetVoxels::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	UE_ARRAY_COUNT(InterfaceParams),
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelPhysicsPartSpawner_GetVoxels_Statics::Class_MetaDataParams), Z_Construct_UClass_UVoxelPhysicsPartSpawner_GetVoxels_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVoxelPhysicsPartSpawner_GetVoxels()
{
	if (!Z_Registration_Info_UClass_UVoxelPhysicsPartSpawner_GetVoxels.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelPhysicsPartSpawner_GetVoxels.OuterSingleton, Z_Construct_UClass_UVoxelPhysicsPartSpawner_GetVoxels_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVoxelPhysicsPartSpawner_GetVoxels.OuterSingleton;
}
UVoxelPhysicsPartSpawner_GetVoxels::UVoxelPhysicsPartSpawner_GetVoxels(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelPhysicsPartSpawner_GetVoxels);
UVoxelPhysicsPartSpawner_GetVoxels::~UVoxelPhysicsPartSpawner_GetVoxels() {}
// ********** End Class UVoxelPhysicsPartSpawner_GetVoxels *****************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelTools_VoxelPhysicsPartSpawner_h__Script_Voxel_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UVoxelPhysicsPartSpawnerResult_VoxelWorlds, UVoxelPhysicsPartSpawnerResult_VoxelWorlds::StaticClass, TEXT("UVoxelPhysicsPartSpawnerResult_VoxelWorlds"), &Z_Registration_Info_UClass_UVoxelPhysicsPartSpawnerResult_VoxelWorlds, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelPhysicsPartSpawnerResult_VoxelWorlds), 3943941631U) },
		{ Z_Construct_UClass_UVoxelPhysicsPartSpawner_VoxelWorlds, UVoxelPhysicsPartSpawner_VoxelWorlds::StaticClass, TEXT("UVoxelPhysicsPartSpawner_VoxelWorlds"), &Z_Registration_Info_UClass_UVoxelPhysicsPartSpawner_VoxelWorlds, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelPhysicsPartSpawner_VoxelWorlds), 2669308868U) },
		{ Z_Construct_UClass_UVoxelPhysicsPartSpawnerResult_Cubes, UVoxelPhysicsPartSpawnerResult_Cubes::StaticClass, TEXT("UVoxelPhysicsPartSpawnerResult_Cubes"), &Z_Registration_Info_UClass_UVoxelPhysicsPartSpawnerResult_Cubes, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelPhysicsPartSpawnerResult_Cubes), 1998460467U) },
		{ Z_Construct_UClass_UVoxelPhysicsPartSpawner_Cubes, UVoxelPhysicsPartSpawner_Cubes::StaticClass, TEXT("UVoxelPhysicsPartSpawner_Cubes"), &Z_Registration_Info_UClass_UVoxelPhysicsPartSpawner_Cubes, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelPhysicsPartSpawner_Cubes), 2463658621U) },
		{ Z_Construct_UClass_UVoxelPhysicsPartSpawnerResult_GetVoxels, UVoxelPhysicsPartSpawnerResult_GetVoxels::StaticClass, TEXT("UVoxelPhysicsPartSpawnerResult_GetVoxels"), &Z_Registration_Info_UClass_UVoxelPhysicsPartSpawnerResult_GetVoxels, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelPhysicsPartSpawnerResult_GetVoxels), 53059003U) },
		{ Z_Construct_UClass_UVoxelPhysicsPartSpawner_GetVoxels, UVoxelPhysicsPartSpawner_GetVoxels::StaticClass, TEXT("UVoxelPhysicsPartSpawner_GetVoxels"), &Z_Registration_Info_UClass_UVoxelPhysicsPartSpawner_GetVoxels, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelPhysicsPartSpawner_GetVoxels), 2896025298U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelTools_VoxelPhysicsPartSpawner_h__Script_Voxel_652100603(TEXT("/Script/Voxel"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelTools_VoxelPhysicsPartSpawner_h__Script_Voxel_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelTools_VoxelPhysicsPartSpawner_h__Script_Voxel_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
