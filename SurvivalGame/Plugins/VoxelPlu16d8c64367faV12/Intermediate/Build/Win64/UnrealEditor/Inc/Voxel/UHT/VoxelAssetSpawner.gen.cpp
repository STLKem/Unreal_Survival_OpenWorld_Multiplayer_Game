// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VoxelSpawners/VoxelAssetSpawner.h"
#include "VoxelGenerators/VoxelGeneratorPicker.h"
#include "VoxelIntBox.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeVoxelAssetSpawner() {}

// ********** Begin Cross Module References ********************************************************
UPackage* Z_Construct_UPackage__Script_Voxel();
VOXEL_API UClass* Z_Construct_UClass_UVoxelAssetSpawner();
VOXEL_API UClass* Z_Construct_UClass_UVoxelAssetSpawner_NoRegister();
VOXEL_API UClass* Z_Construct_UClass_UVoxelBasicSpawner();
VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelIntBox();
VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelTransformableGeneratorPicker();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UVoxelAssetSpawner *******************************************************
void UVoxelAssetSpawner::StaticRegisterNativesUVoxelAssetSpawner()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UVoxelAssetSpawner;
UClass* UVoxelAssetSpawner::GetPrivateStaticClass()
{
	using TClass = UVoxelAssetSpawner;
	if (!Z_Registration_Info_UClass_UVoxelAssetSpawner.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("VoxelAssetSpawner"),
			Z_Registration_Info_UClass_UVoxelAssetSpawner.InnerSingleton,
			StaticRegisterNativesUVoxelAssetSpawner,
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
	return Z_Registration_Info_UClass_UVoxelAssetSpawner.InnerSingleton;
}
UClass* Z_Construct_UClass_UVoxelAssetSpawner_NoRegister()
{
	return UVoxelAssetSpawner::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UVoxelAssetSpawner_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "VoxelSpawners/VoxelAssetSpawner.h" },
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelAssetSpawner.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Generator_MetaData[] = {
		{ "Category", "General Settings" },
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelAssetSpawner.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GeneratorLocalBounds_MetaData[] = {
		{ "Category", "General Settings" },
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelAssetSpawner.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Seeds_MetaData[] = {
		{ "Category", "General Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The voxel world seeds will be sent to the generator.\n// Add the names of the seeds you want to be randomized here\n" },
#endif
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelAssetSpawner.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The voxel world seeds will be sent to the generator.\nAdd the names of the seeds you want to be randomized here" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumberOfDifferentSeedsToUse_MetaData[] = {
		{ "Category", "General Settings" },
		{ "ClampMin", "1" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// All generators are created at begin play\n" },
#endif
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelAssetSpawner.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "All generators are created at begin play" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Priority_MetaData[] = {
		{ "Category", "General Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Priority of the spawned assets\n" },
#endif
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelAssetSpawner.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Priority of the spawned assets" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRoundAssetPosition_MetaData[] = {
		{ "Category", "General Settings" },
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelAssetSpawner.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Generator;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GeneratorLocalBounds;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Seeds_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Seeds;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumberOfDifferentSeedsToUse;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Priority;
	static void NewProp_bRoundAssetPosition_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRoundAssetPosition;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelAssetSpawner>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVoxelAssetSpawner_Statics::NewProp_Generator = { "Generator", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelAssetSpawner, Generator), Z_Construct_UScriptStruct_FVoxelTransformableGeneratorPicker, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Generator_MetaData), NewProp_Generator_MetaData) }; // 3102180178
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVoxelAssetSpawner_Statics::NewProp_GeneratorLocalBounds = { "GeneratorLocalBounds", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelAssetSpawner, GeneratorLocalBounds), Z_Construct_UScriptStruct_FVoxelIntBox, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GeneratorLocalBounds_MetaData), NewProp_GeneratorLocalBounds_MetaData) }; // 3520536583
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UVoxelAssetSpawner_Statics::NewProp_Seeds_Inner = { "Seeds", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UVoxelAssetSpawner_Statics::NewProp_Seeds = { "Seeds", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelAssetSpawner, Seeds), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Seeds_MetaData), NewProp_Seeds_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UVoxelAssetSpawner_Statics::NewProp_NumberOfDifferentSeedsToUse = { "NumberOfDifferentSeedsToUse", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelAssetSpawner, NumberOfDifferentSeedsToUse), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumberOfDifferentSeedsToUse_MetaData), NewProp_NumberOfDifferentSeedsToUse_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UVoxelAssetSpawner_Statics::NewProp_Priority = { "Priority", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelAssetSpawner, Priority), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Priority_MetaData), NewProp_Priority_MetaData) };
void Z_Construct_UClass_UVoxelAssetSpawner_Statics::NewProp_bRoundAssetPosition_SetBit(void* Obj)
{
	((UVoxelAssetSpawner*)Obj)->bRoundAssetPosition = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVoxelAssetSpawner_Statics::NewProp_bRoundAssetPosition = { "bRoundAssetPosition", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UVoxelAssetSpawner), &Z_Construct_UClass_UVoxelAssetSpawner_Statics::NewProp_bRoundAssetPosition_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRoundAssetPosition_MetaData), NewProp_bRoundAssetPosition_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelAssetSpawner_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelAssetSpawner_Statics::NewProp_Generator,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelAssetSpawner_Statics::NewProp_GeneratorLocalBounds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelAssetSpawner_Statics::NewProp_Seeds_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelAssetSpawner_Statics::NewProp_Seeds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelAssetSpawner_Statics::NewProp_NumberOfDifferentSeedsToUse,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelAssetSpawner_Statics::NewProp_Priority,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelAssetSpawner_Statics::NewProp_bRoundAssetPosition,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelAssetSpawner_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UVoxelAssetSpawner_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UVoxelBasicSpawner,
	(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelAssetSpawner_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelAssetSpawner_Statics::ClassParams = {
	&UVoxelAssetSpawner::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UVoxelAssetSpawner_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelAssetSpawner_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelAssetSpawner_Statics::Class_MetaDataParams), Z_Construct_UClass_UVoxelAssetSpawner_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVoxelAssetSpawner()
{
	if (!Z_Registration_Info_UClass_UVoxelAssetSpawner.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelAssetSpawner.OuterSingleton, Z_Construct_UClass_UVoxelAssetSpawner_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVoxelAssetSpawner.OuterSingleton;
}
UVoxelAssetSpawner::UVoxelAssetSpawner(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelAssetSpawner);
UVoxelAssetSpawner::~UVoxelAssetSpawner() {}
// ********** End Class UVoxelAssetSpawner *********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelSpawners_VoxelAssetSpawner_h__Script_Voxel_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UVoxelAssetSpawner, UVoxelAssetSpawner::StaticClass, TEXT("UVoxelAssetSpawner"), &Z_Registration_Info_UClass_UVoxelAssetSpawner, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelAssetSpawner), 4271424386U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelSpawners_VoxelAssetSpawner_h__Script_Voxel_795073783(TEXT("/Script/Voxel"),
	Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelSpawners_VoxelAssetSpawner_h__Script_Voxel_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelSpawners_VoxelAssetSpawner_h__Script_Voxel_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
