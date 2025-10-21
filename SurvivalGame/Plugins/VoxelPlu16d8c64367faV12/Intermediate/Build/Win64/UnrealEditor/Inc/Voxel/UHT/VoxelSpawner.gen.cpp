// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VoxelSpawners/VoxelSpawner.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeVoxelSpawner() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
UPackage* Z_Construct_UPackage__Script_Voxel();
VOXEL_API UClass* Z_Construct_UClass_UVoxelSpawner();
VOXEL_API UClass* Z_Construct_UClass_UVoxelSpawner_NoRegister();
VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelSpawnersSave();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UVoxelSpawner ************************************************************
void UVoxelSpawner::StaticRegisterNativesUVoxelSpawner()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UVoxelSpawner;
UClass* UVoxelSpawner::GetPrivateStaticClass()
{
	using TClass = UVoxelSpawner;
	if (!Z_Registration_Info_UClass_UVoxelSpawner.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("VoxelSpawner"),
			Z_Registration_Info_UClass_UVoxelSpawner.InnerSingleton,
			StaticRegisterNativesUVoxelSpawner,
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
	return Z_Registration_Info_UClass_UVoxelSpawner.InnerSingleton;
}
UClass* Z_Construct_UClass_UVoxelSpawner_NoRegister()
{
	return UVoxelSpawner::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UVoxelSpawner_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "///////////////////////////////////////////////////////////////////////////////\n///////////////////////////////////////////////////////////////////////////////\n///////////////////////////////////////////////////////////////////////////////\n" },
#endif
		{ "IncludePath", "VoxelSpawners/VoxelSpawner.h" },
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelSpawner.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DistanceBetweenInstancesInVoxel_MetaData[] = {
		{ "Category", "General Settings" },
		{ "ClampMin", "0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Average distance between the instances, in voxels\n// Num Instances = Area in voxels / Square(DistanceBetweenInstancesInVoxel)\n// Not a density because the values would be too small to store in a float\n" },
#endif
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelSpawner.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Average distance between the instances, in voxels\nNum Instances = Area in voxels / Square(DistanceBetweenInstancesInVoxel)\nNot a density because the values would be too small to store in a float" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SeedOverride_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Use this if you create the spawner at runtime\n" },
#endif
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelSpawner.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Use this if you create the spawner at runtime" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DistanceBetweenInstancesInVoxel;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_SeedOverride;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelSpawner>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVoxelSpawner_Statics::NewProp_DistanceBetweenInstancesInVoxel = { "DistanceBetweenInstancesInVoxel", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelSpawner, DistanceBetweenInstancesInVoxel), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DistanceBetweenInstancesInVoxel_MetaData), NewProp_DistanceBetweenInstancesInVoxel_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UVoxelSpawner_Statics::NewProp_SeedOverride = { "SeedOverride", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelSpawner, SeedOverride), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SeedOverride_MetaData), NewProp_SeedOverride_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelSpawner_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelSpawner_Statics::NewProp_DistanceBetweenInstancesInVoxel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelSpawner_Statics::NewProp_SeedOverride,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelSpawner_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UVoxelSpawner_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelSpawner_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelSpawner_Statics::ClassParams = {
	&UVoxelSpawner::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UVoxelSpawner_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelSpawner_Statics::PropPointers),
	0,
	0x001000A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelSpawner_Statics::Class_MetaDataParams), Z_Construct_UClass_UVoxelSpawner_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVoxelSpawner()
{
	if (!Z_Registration_Info_UClass_UVoxelSpawner.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelSpawner.OuterSingleton, Z_Construct_UClass_UVoxelSpawner_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVoxelSpawner.OuterSingleton;
}
UVoxelSpawner::UVoxelSpawner(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelSpawner);
UVoxelSpawner::~UVoxelSpawner() {}
// ********** End Class UVoxelSpawner **************************************************************

// ********** Begin ScriptStruct FVoxelSpawnersSave ************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FVoxelSpawnersSave;
class UScriptStruct* FVoxelSpawnersSave::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FVoxelSpawnersSave.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FVoxelSpawnersSave.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVoxelSpawnersSave, (UObject*)Z_Construct_UPackage__Script_Voxel(), TEXT("VoxelSpawnersSave"));
	}
	return Z_Registration_Info_UScriptStruct_FVoxelSpawnersSave.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FVoxelSpawnersSave_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelSpawner.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVoxelSpawnersSave>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVoxelSpawnersSave_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
	nullptr,
	&NewStructOps,
	"VoxelSpawnersSave",
	nullptr,
	0,
	sizeof(FVoxelSpawnersSave),
	alignof(FVoxelSpawnersSave),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelSpawnersSave_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVoxelSpawnersSave_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FVoxelSpawnersSave()
{
	if (!Z_Registration_Info_UScriptStruct_FVoxelSpawnersSave.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FVoxelSpawnersSave.InnerSingleton, Z_Construct_UScriptStruct_FVoxelSpawnersSave_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FVoxelSpawnersSave.InnerSingleton;
}
// ********** End ScriptStruct FVoxelSpawnersSave **************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelSpawners_VoxelSpawner_h__Script_Voxel_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FVoxelSpawnersSave::StaticStruct, Z_Construct_UScriptStruct_FVoxelSpawnersSave_Statics::NewStructOps, TEXT("VoxelSpawnersSave"), &Z_Registration_Info_UScriptStruct_FVoxelSpawnersSave, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVoxelSpawnersSave), 1801030647U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UVoxelSpawner, UVoxelSpawner::StaticClass, TEXT("UVoxelSpawner"), &Z_Registration_Info_UClass_UVoxelSpawner, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelSpawner), 1253139236U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelSpawners_VoxelSpawner_h__Script_Voxel_1841163764(TEXT("/Script/Voxel"),
	Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelSpawners_VoxelSpawner_h__Script_Voxel_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelSpawners_VoxelSpawner_h__Script_Voxel_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelSpawners_VoxelSpawner_h__Script_Voxel_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelSpawners_VoxelSpawner_h__Script_Voxel_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
