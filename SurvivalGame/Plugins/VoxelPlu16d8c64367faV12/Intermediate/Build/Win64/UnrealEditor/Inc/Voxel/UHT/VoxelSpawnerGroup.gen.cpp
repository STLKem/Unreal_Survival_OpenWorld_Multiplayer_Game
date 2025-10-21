// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VoxelSpawners/VoxelSpawnerGroup.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeVoxelSpawnerGroup() {}

// ********** Begin Cross Module References ********************************************************
UPackage* Z_Construct_UPackage__Script_Voxel();
VOXEL_API UClass* Z_Construct_UClass_UVoxelSpawner();
VOXEL_API UClass* Z_Construct_UClass_UVoxelSpawner_NoRegister();
VOXEL_API UClass* Z_Construct_UClass_UVoxelSpawnerGroup();
VOXEL_API UClass* Z_Construct_UClass_UVoxelSpawnerGroup_NoRegister();
VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelSpawnerGroupChild();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FVoxelSpawnerGroupChild *******************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FVoxelSpawnerGroupChild;
class UScriptStruct* FVoxelSpawnerGroupChild::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FVoxelSpawnerGroupChild.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FVoxelSpawnerGroupChild.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVoxelSpawnerGroupChild, (UObject*)Z_Construct_UPackage__Script_Voxel(), TEXT("VoxelSpawnerGroupChild"));
	}
	return Z_Registration_Info_UScriptStruct_FVoxelSpawnerGroupChild.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FVoxelSpawnerGroupChild_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelSpawnerGroup.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Spawner_MetaData[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelSpawnerGroup.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Probability_MetaData[] = {
		{ "Category", "Config" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelSpawnerGroup.h" },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Spawner;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Probability;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVoxelSpawnerGroupChild>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FVoxelSpawnerGroupChild_Statics::NewProp_Spawner = { "Spawner", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVoxelSpawnerGroupChild, Spawner), Z_Construct_UClass_UVoxelSpawner_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Spawner_MetaData), NewProp_Spawner_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVoxelSpawnerGroupChild_Statics::NewProp_Probability = { "Probability", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVoxelSpawnerGroupChild, Probability), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Probability_MetaData), NewProp_Probability_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVoxelSpawnerGroupChild_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelSpawnerGroupChild_Statics::NewProp_Spawner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelSpawnerGroupChild_Statics::NewProp_Probability,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelSpawnerGroupChild_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVoxelSpawnerGroupChild_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
	nullptr,
	&NewStructOps,
	"VoxelSpawnerGroupChild",
	Z_Construct_UScriptStruct_FVoxelSpawnerGroupChild_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelSpawnerGroupChild_Statics::PropPointers),
	sizeof(FVoxelSpawnerGroupChild),
	alignof(FVoxelSpawnerGroupChild),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelSpawnerGroupChild_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVoxelSpawnerGroupChild_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FVoxelSpawnerGroupChild()
{
	if (!Z_Registration_Info_UScriptStruct_FVoxelSpawnerGroupChild.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FVoxelSpawnerGroupChild.InnerSingleton, Z_Construct_UScriptStruct_FVoxelSpawnerGroupChild_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FVoxelSpawnerGroupChild.InnerSingleton;
}
// ********** End ScriptStruct FVoxelSpawnerGroupChild *********************************************

// ********** Begin Class UVoxelSpawnerGroup *******************************************************
void UVoxelSpawnerGroup::StaticRegisterNativesUVoxelSpawnerGroup()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UVoxelSpawnerGroup;
UClass* UVoxelSpawnerGroup::GetPrivateStaticClass()
{
	using TClass = UVoxelSpawnerGroup;
	if (!Z_Registration_Info_UClass_UVoxelSpawnerGroup.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("VoxelSpawnerGroup"),
			Z_Registration_Info_UClass_UVoxelSpawnerGroup.InnerSingleton,
			StaticRegisterNativesUVoxelSpawnerGroup,
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
	return Z_Registration_Info_UClass_UVoxelSpawnerGroup.InnerSingleton;
}
UClass* Z_Construct_UClass_UVoxelSpawnerGroup_NoRegister()
{
	return UVoxelSpawnerGroup::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UVoxelSpawnerGroup_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "VoxelSpawners/VoxelSpawnerGroup.h" },
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelSpawnerGroup.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bNormalizeProbabilitiesOnEdit_MetaData[] = {
		{ "Category", "Config" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Probabilities do not need to be normalized, although it might be harder to understand what's happening if they're not\n" },
#endif
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelSpawnerGroup.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Probabilities do not need to be normalized, although it might be harder to understand what's happening if they're not" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Children_MetaData[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelSpawnerGroup.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bNormalizeProbabilitiesOnEdit_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bNormalizeProbabilitiesOnEdit;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Children_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Children;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelSpawnerGroup>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UVoxelSpawnerGroup_Statics::NewProp_bNormalizeProbabilitiesOnEdit_SetBit(void* Obj)
{
	((UVoxelSpawnerGroup*)Obj)->bNormalizeProbabilitiesOnEdit = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVoxelSpawnerGroup_Statics::NewProp_bNormalizeProbabilitiesOnEdit = { "bNormalizeProbabilitiesOnEdit", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UVoxelSpawnerGroup), &Z_Construct_UClass_UVoxelSpawnerGroup_Statics::NewProp_bNormalizeProbabilitiesOnEdit_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bNormalizeProbabilitiesOnEdit_MetaData), NewProp_bNormalizeProbabilitiesOnEdit_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVoxelSpawnerGroup_Statics::NewProp_Children_Inner = { "Children", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVoxelSpawnerGroupChild, METADATA_PARAMS(0, nullptr) }; // 917324269
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UVoxelSpawnerGroup_Statics::NewProp_Children = { "Children", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelSpawnerGroup, Children), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Children_MetaData), NewProp_Children_MetaData) }; // 917324269
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelSpawnerGroup_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelSpawnerGroup_Statics::NewProp_bNormalizeProbabilitiesOnEdit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelSpawnerGroup_Statics::NewProp_Children_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelSpawnerGroup_Statics::NewProp_Children,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelSpawnerGroup_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UVoxelSpawnerGroup_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UVoxelSpawner,
	(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelSpawnerGroup_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelSpawnerGroup_Statics::ClassParams = {
	&UVoxelSpawnerGroup::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UVoxelSpawnerGroup_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelSpawnerGroup_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelSpawnerGroup_Statics::Class_MetaDataParams), Z_Construct_UClass_UVoxelSpawnerGroup_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVoxelSpawnerGroup()
{
	if (!Z_Registration_Info_UClass_UVoxelSpawnerGroup.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelSpawnerGroup.OuterSingleton, Z_Construct_UClass_UVoxelSpawnerGroup_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVoxelSpawnerGroup.OuterSingleton;
}
UVoxelSpawnerGroup::UVoxelSpawnerGroup(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelSpawnerGroup);
UVoxelSpawnerGroup::~UVoxelSpawnerGroup() {}
// ********** End Class UVoxelSpawnerGroup *********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelSpawners_VoxelSpawnerGroup_h__Script_Voxel_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FVoxelSpawnerGroupChild::StaticStruct, Z_Construct_UScriptStruct_FVoxelSpawnerGroupChild_Statics::NewStructOps, TEXT("VoxelSpawnerGroupChild"), &Z_Registration_Info_UScriptStruct_FVoxelSpawnerGroupChild, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVoxelSpawnerGroupChild), 917324269U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UVoxelSpawnerGroup, UVoxelSpawnerGroup::StaticClass, TEXT("UVoxelSpawnerGroup"), &Z_Registration_Info_UClass_UVoxelSpawnerGroup, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelSpawnerGroup), 3582589094U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelSpawners_VoxelSpawnerGroup_h__Script_Voxel_3435490176(TEXT("/Script/Voxel"),
	Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelSpawners_VoxelSpawnerGroup_h__Script_Voxel_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelSpawners_VoxelSpawnerGroup_h__Script_Voxel_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelSpawners_VoxelSpawnerGroup_h__Script_Voxel_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelSpawners_VoxelSpawnerGroup_h__Script_Voxel_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
