// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Details/VoxelGeneratorPickerCustomization.h"
#include "VoxelGenerators/VoxelGeneratorParameters.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeVoxelGeneratorPickerCustomization() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprint_NoRegister();
UPackage* Z_Construct_UPackage__Script_VoxelEditor();
VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelGeneratorParameter();
VOXELEDITOR_API UClass* Z_Construct_UClass_UVoxelGeneratorPickerBlueprintPool();
VOXELEDITOR_API UClass* Z_Construct_UClass_UVoxelGeneratorPickerBlueprintPool_NoRegister();
VOXELEDITOR_API UClass* Z_Construct_UClass_UVoxelGeneratorPickerEditorData();
VOXELEDITOR_API UClass* Z_Construct_UClass_UVoxelGeneratorPickerEditorData_NoRegister();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UVoxelGeneratorPickerEditorData ******************************************
void UVoxelGeneratorPickerEditorData::StaticRegisterNativesUVoxelGeneratorPickerEditorData()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UVoxelGeneratorPickerEditorData;
UClass* UVoxelGeneratorPickerEditorData::GetPrivateStaticClass()
{
	using TClass = UVoxelGeneratorPickerEditorData;
	if (!Z_Registration_Info_UClass_UVoxelGeneratorPickerEditorData.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("VoxelGeneratorPickerEditorData"),
			Z_Registration_Info_UClass_UVoxelGeneratorPickerEditorData.InnerSingleton,
			StaticRegisterNativesUVoxelGeneratorPickerEditorData,
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
	return Z_Registration_Info_UClass_UVoxelGeneratorPickerEditorData.InnerSingleton;
}
UClass* Z_Construct_UClass_UVoxelGeneratorPickerEditorData_NoRegister()
{
	return UVoxelGeneratorPickerEditorData::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UVoxelGeneratorPickerEditorData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Details/VoxelGeneratorPickerCustomization.h" },
		{ "ModuleRelativePath", "Private/Details/VoxelGeneratorPickerCustomization.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GeneratorObject_MetaData[] = {
		{ "ModuleRelativePath", "Private/Details/VoxelGeneratorPickerCustomization.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Parameters_MetaData[] = {
		{ "ModuleRelativePath", "Private/Details/VoxelGeneratorPickerCustomization.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Blueprint_MetaData[] = {
		{ "ModuleRelativePath", "Private/Details/VoxelGeneratorPickerCustomization.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlueprintInstance_MetaData[] = {
		{ "ModuleRelativePath", "Private/Details/VoxelGeneratorPickerCustomization.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GeneratorObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Parameters_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Parameters;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Blueprint;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BlueprintInstance;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelGeneratorPickerEditorData>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVoxelGeneratorPickerEditorData_Statics::NewProp_GeneratorObject = { "GeneratorObject", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelGeneratorPickerEditorData, GeneratorObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GeneratorObject_MetaData), NewProp_GeneratorObject_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVoxelGeneratorPickerEditorData_Statics::NewProp_Parameters_Inner = { "Parameters", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVoxelGeneratorParameter, METADATA_PARAMS(0, nullptr) }; // 3464621009
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UVoxelGeneratorPickerEditorData_Statics::NewProp_Parameters = { "Parameters", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelGeneratorPickerEditorData, Parameters), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Parameters_MetaData), NewProp_Parameters_MetaData) }; // 3464621009
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVoxelGeneratorPickerEditorData_Statics::NewProp_Blueprint = { "Blueprint", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelGeneratorPickerEditorData, Blueprint), Z_Construct_UClass_UBlueprint_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Blueprint_MetaData), NewProp_Blueprint_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVoxelGeneratorPickerEditorData_Statics::NewProp_BlueprintInstance = { "BlueprintInstance", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelGeneratorPickerEditorData, BlueprintInstance), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlueprintInstance_MetaData), NewProp_BlueprintInstance_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelGeneratorPickerEditorData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelGeneratorPickerEditorData_Statics::NewProp_GeneratorObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelGeneratorPickerEditorData_Statics::NewProp_Parameters_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelGeneratorPickerEditorData_Statics::NewProp_Parameters,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelGeneratorPickerEditorData_Statics::NewProp_Blueprint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelGeneratorPickerEditorData_Statics::NewProp_BlueprintInstance,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelGeneratorPickerEditorData_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UVoxelGeneratorPickerEditorData_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_VoxelEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelGeneratorPickerEditorData_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelGeneratorPickerEditorData_Statics::ClassParams = {
	&UVoxelGeneratorPickerEditorData::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UVoxelGeneratorPickerEditorData_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelGeneratorPickerEditorData_Statics::PropPointers),
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelGeneratorPickerEditorData_Statics::Class_MetaDataParams), Z_Construct_UClass_UVoxelGeneratorPickerEditorData_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVoxelGeneratorPickerEditorData()
{
	if (!Z_Registration_Info_UClass_UVoxelGeneratorPickerEditorData.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelGeneratorPickerEditorData.OuterSingleton, Z_Construct_UClass_UVoxelGeneratorPickerEditorData_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVoxelGeneratorPickerEditorData.OuterSingleton;
}
UVoxelGeneratorPickerEditorData::UVoxelGeneratorPickerEditorData(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelGeneratorPickerEditorData);
UVoxelGeneratorPickerEditorData::~UVoxelGeneratorPickerEditorData() {}
// ********** End Class UVoxelGeneratorPickerEditorData ********************************************

// ********** Begin Class UVoxelGeneratorPickerBlueprintPool ***************************************
void UVoxelGeneratorPickerBlueprintPool::StaticRegisterNativesUVoxelGeneratorPickerBlueprintPool()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UVoxelGeneratorPickerBlueprintPool;
UClass* UVoxelGeneratorPickerBlueprintPool::GetPrivateStaticClass()
{
	using TClass = UVoxelGeneratorPickerBlueprintPool;
	if (!Z_Registration_Info_UClass_UVoxelGeneratorPickerBlueprintPool.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("VoxelGeneratorPickerBlueprintPool"),
			Z_Registration_Info_UClass_UVoxelGeneratorPickerBlueprintPool.InnerSingleton,
			StaticRegisterNativesUVoxelGeneratorPickerBlueprintPool,
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
	return Z_Registration_Info_UClass_UVoxelGeneratorPickerBlueprintPool.InnerSingleton;
}
UClass* Z_Construct_UClass_UVoxelGeneratorPickerBlueprintPool_NoRegister()
{
	return UVoxelGeneratorPickerBlueprintPool::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UVoxelGeneratorPickerBlueprintPool_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Details/VoxelGeneratorPickerCustomization.h" },
		{ "ModuleRelativePath", "Private/Details/VoxelGeneratorPickerCustomization.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Blueprints_MetaData[] = {
		{ "ModuleRelativePath", "Private/Details/VoxelGeneratorPickerCustomization.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Blueprints_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Blueprints;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelGeneratorPickerBlueprintPool>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVoxelGeneratorPickerBlueprintPool_Statics::NewProp_Blueprints_Inner = { "Blueprints", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UBlueprint_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UVoxelGeneratorPickerBlueprintPool_Statics::NewProp_Blueprints = { "Blueprints", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelGeneratorPickerBlueprintPool, Blueprints), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Blueprints_MetaData), NewProp_Blueprints_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelGeneratorPickerBlueprintPool_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelGeneratorPickerBlueprintPool_Statics::NewProp_Blueprints_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelGeneratorPickerBlueprintPool_Statics::NewProp_Blueprints,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelGeneratorPickerBlueprintPool_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UVoxelGeneratorPickerBlueprintPool_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_VoxelEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelGeneratorPickerBlueprintPool_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelGeneratorPickerBlueprintPool_Statics::ClassParams = {
	&UVoxelGeneratorPickerBlueprintPool::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UVoxelGeneratorPickerBlueprintPool_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelGeneratorPickerBlueprintPool_Statics::PropPointers),
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelGeneratorPickerBlueprintPool_Statics::Class_MetaDataParams), Z_Construct_UClass_UVoxelGeneratorPickerBlueprintPool_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVoxelGeneratorPickerBlueprintPool()
{
	if (!Z_Registration_Info_UClass_UVoxelGeneratorPickerBlueprintPool.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelGeneratorPickerBlueprintPool.OuterSingleton, Z_Construct_UClass_UVoxelGeneratorPickerBlueprintPool_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVoxelGeneratorPickerBlueprintPool.OuterSingleton;
}
UVoxelGeneratorPickerBlueprintPool::UVoxelGeneratorPickerBlueprintPool(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelGeneratorPickerBlueprintPool);
UVoxelGeneratorPickerBlueprintPool::~UVoxelGeneratorPickerBlueprintPool() {}
// ********** End Class UVoxelGeneratorPickerBlueprintPool *****************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_VoxelEditor_Private_Details_VoxelGeneratorPickerCustomization_h__Script_VoxelEditor_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UVoxelGeneratorPickerEditorData, UVoxelGeneratorPickerEditorData::StaticClass, TEXT("UVoxelGeneratorPickerEditorData"), &Z_Registration_Info_UClass_UVoxelGeneratorPickerEditorData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelGeneratorPickerEditorData), 438493642U) },
		{ Z_Construct_UClass_UVoxelGeneratorPickerBlueprintPool, UVoxelGeneratorPickerBlueprintPool::StaticClass, TEXT("UVoxelGeneratorPickerBlueprintPool"), &Z_Registration_Info_UClass_UVoxelGeneratorPickerBlueprintPool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelGeneratorPickerBlueprintPool), 3993346954U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_VoxelEditor_Private_Details_VoxelGeneratorPickerCustomization_h__Script_VoxelEditor_2317391105(TEXT("/Script/VoxelEditor"),
	Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_VoxelEditor_Private_Details_VoxelGeneratorPickerCustomization_h__Script_VoxelEditor_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_VoxelEditor_Private_Details_VoxelGeneratorPickerCustomization_h__Script_VoxelEditor_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
