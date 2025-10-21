// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VoxelTools/VoxelPhysicsPartSpawnerInterface.h"
#include "VoxelMaterial.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeVoxelPhysicsPartSpawnerInterface() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntVector();
UPackage* Z_Construct_UPackage__Script_Voxel();
VOXEL_API UClass* Z_Construct_UClass_UVoxelPhysicsPartSpawner();
VOXEL_API UClass* Z_Construct_UClass_UVoxelPhysicsPartSpawner_NoRegister();
VOXEL_API UClass* Z_Construct_UClass_UVoxelPhysicsPartSpawnerResult();
VOXEL_API UClass* Z_Construct_UClass_UVoxelPhysicsPartSpawnerResult_NoRegister();
VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelMaterial();
VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelPositionValueMaterial();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FVoxelPositionValueMaterial ***************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FVoxelPositionValueMaterial;
class UScriptStruct* FVoxelPositionValueMaterial::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FVoxelPositionValueMaterial.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FVoxelPositionValueMaterial.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVoxelPositionValueMaterial, (UObject*)Z_Construct_UPackage__Script_Voxel(), TEXT("VoxelPositionValueMaterial"));
	}
	return Z_Registration_Info_UScriptStruct_FVoxelPositionValueMaterial.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FVoxelPositionValueMaterial_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelPhysicsPartSpawnerInterface.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelPhysicsPartSpawnerInterface.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelPhysicsPartSpawnerInterface.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Material_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelPhysicsPartSpawnerInterface.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Position;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Material;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVoxelPositionValueMaterial>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVoxelPositionValueMaterial_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVoxelPositionValueMaterial, Position), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Position_MetaData), NewProp_Position_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVoxelPositionValueMaterial_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVoxelPositionValueMaterial, Value), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVoxelPositionValueMaterial_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVoxelPositionValueMaterial, Material), Z_Construct_UScriptStruct_FVoxelMaterial, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Material_MetaData), NewProp_Material_MetaData) }; // 3766892224
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVoxelPositionValueMaterial_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelPositionValueMaterial_Statics::NewProp_Position,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelPositionValueMaterial_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelPositionValueMaterial_Statics::NewProp_Material,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelPositionValueMaterial_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVoxelPositionValueMaterial_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
	nullptr,
	&NewStructOps,
	"VoxelPositionValueMaterial",
	Z_Construct_UScriptStruct_FVoxelPositionValueMaterial_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelPositionValueMaterial_Statics::PropPointers),
	sizeof(FVoxelPositionValueMaterial),
	alignof(FVoxelPositionValueMaterial),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelPositionValueMaterial_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVoxelPositionValueMaterial_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FVoxelPositionValueMaterial()
{
	if (!Z_Registration_Info_UScriptStruct_FVoxelPositionValueMaterial.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FVoxelPositionValueMaterial.InnerSingleton, Z_Construct_UScriptStruct_FVoxelPositionValueMaterial_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FVoxelPositionValueMaterial.InnerSingleton;
}
// ********** End ScriptStruct FVoxelPositionValueMaterial *****************************************

// ********** Begin Interface UVoxelPhysicsPartSpawnerResult ***************************************
void UVoxelPhysicsPartSpawnerResult::StaticRegisterNativesUVoxelPhysicsPartSpawnerResult()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UVoxelPhysicsPartSpawnerResult;
UClass* UVoxelPhysicsPartSpawnerResult::GetPrivateStaticClass()
{
	using TClass = UVoxelPhysicsPartSpawnerResult;
	if (!Z_Registration_Info_UClass_UVoxelPhysicsPartSpawnerResult.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("VoxelPhysicsPartSpawnerResult"),
			Z_Registration_Info_UClass_UVoxelPhysicsPartSpawnerResult.InnerSingleton,
			StaticRegisterNativesUVoxelPhysicsPartSpawnerResult,
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
	return Z_Registration_Info_UClass_UVoxelPhysicsPartSpawnerResult.InnerSingleton;
}
UClass* Z_Construct_UClass_UVoxelPhysicsPartSpawnerResult_NoRegister()
{
	return UVoxelPhysicsPartSpawnerResult::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UVoxelPhysicsPartSpawnerResult_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelPhysicsPartSpawnerInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IVoxelPhysicsPartSpawnerResult>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UVoxelPhysicsPartSpawnerResult_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelPhysicsPartSpawnerResult_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelPhysicsPartSpawnerResult_Statics::ClassParams = {
	&UVoxelPhysicsPartSpawnerResult::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001040A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelPhysicsPartSpawnerResult_Statics::Class_MetaDataParams), Z_Construct_UClass_UVoxelPhysicsPartSpawnerResult_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVoxelPhysicsPartSpawnerResult()
{
	if (!Z_Registration_Info_UClass_UVoxelPhysicsPartSpawnerResult.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelPhysicsPartSpawnerResult.OuterSingleton, Z_Construct_UClass_UVoxelPhysicsPartSpawnerResult_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVoxelPhysicsPartSpawnerResult.OuterSingleton;
}
UVoxelPhysicsPartSpawnerResult::UVoxelPhysicsPartSpawnerResult(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelPhysicsPartSpawnerResult);
// ********** End Interface UVoxelPhysicsPartSpawnerResult *****************************************

// ********** Begin Interface UVoxelPhysicsPartSpawner *********************************************
void UVoxelPhysicsPartSpawner::StaticRegisterNativesUVoxelPhysicsPartSpawner()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UVoxelPhysicsPartSpawner;
UClass* UVoxelPhysicsPartSpawner::GetPrivateStaticClass()
{
	using TClass = UVoxelPhysicsPartSpawner;
	if (!Z_Registration_Info_UClass_UVoxelPhysicsPartSpawner.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("VoxelPhysicsPartSpawner"),
			Z_Registration_Info_UClass_UVoxelPhysicsPartSpawner.InnerSingleton,
			StaticRegisterNativesUVoxelPhysicsPartSpawner,
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
	return Z_Registration_Info_UClass_UVoxelPhysicsPartSpawner.InnerSingleton;
}
UClass* Z_Construct_UClass_UVoxelPhysicsPartSpawner_NoRegister()
{
	return UVoxelPhysicsPartSpawner::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UVoxelPhysicsPartSpawner_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelPhysicsPartSpawnerInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IVoxelPhysicsPartSpawner>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UVoxelPhysicsPartSpawner_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelPhysicsPartSpawner_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelPhysicsPartSpawner_Statics::ClassParams = {
	&UVoxelPhysicsPartSpawner::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001040A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelPhysicsPartSpawner_Statics::Class_MetaDataParams), Z_Construct_UClass_UVoxelPhysicsPartSpawner_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVoxelPhysicsPartSpawner()
{
	if (!Z_Registration_Info_UClass_UVoxelPhysicsPartSpawner.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelPhysicsPartSpawner.OuterSingleton, Z_Construct_UClass_UVoxelPhysicsPartSpawner_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVoxelPhysicsPartSpawner.OuterSingleton;
}
UVoxelPhysicsPartSpawner::UVoxelPhysicsPartSpawner(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelPhysicsPartSpawner);
// ********** End Interface UVoxelPhysicsPartSpawner ***********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelTools_VoxelPhysicsPartSpawnerInterface_h__Script_Voxel_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FVoxelPositionValueMaterial::StaticStruct, Z_Construct_UScriptStruct_FVoxelPositionValueMaterial_Statics::NewStructOps, TEXT("VoxelPositionValueMaterial"), &Z_Registration_Info_UScriptStruct_FVoxelPositionValueMaterial, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVoxelPositionValueMaterial), 3272362482U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UVoxelPhysicsPartSpawnerResult, UVoxelPhysicsPartSpawnerResult::StaticClass, TEXT("UVoxelPhysicsPartSpawnerResult"), &Z_Registration_Info_UClass_UVoxelPhysicsPartSpawnerResult, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelPhysicsPartSpawnerResult), 2734093083U) },
		{ Z_Construct_UClass_UVoxelPhysicsPartSpawner, UVoxelPhysicsPartSpawner::StaticClass, TEXT("UVoxelPhysicsPartSpawner"), &Z_Registration_Info_UClass_UVoxelPhysicsPartSpawner, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelPhysicsPartSpawner), 3800609994U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelTools_VoxelPhysicsPartSpawnerInterface_h__Script_Voxel_13857419(TEXT("/Script/Voxel"),
	Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelTools_VoxelPhysicsPartSpawnerInterface_h__Script_Voxel_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelTools_VoxelPhysicsPartSpawnerInterface_h__Script_Voxel_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelTools_VoxelPhysicsPartSpawnerInterface_h__Script_Voxel_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelTools_VoxelPhysicsPartSpawnerInterface_h__Script_Voxel_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
