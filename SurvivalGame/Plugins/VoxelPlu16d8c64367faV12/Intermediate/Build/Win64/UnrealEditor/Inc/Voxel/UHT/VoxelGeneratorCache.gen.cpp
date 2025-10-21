// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VoxelGenerators/VoxelGeneratorCache.h"
#include "VoxelGenerators/VoxelGeneratorInit.h"
#include "VoxelGenerators/VoxelGeneratorPicker.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeVoxelGeneratorCache() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
UPackage* Z_Construct_UPackage__Script_Voxel();
VOXEL_API UClass* Z_Construct_UClass_UVoxelGeneratorCache();
VOXEL_API UClass* Z_Construct_UClass_UVoxelGeneratorCache_NoRegister();
VOXEL_API UClass* Z_Construct_UClass_UVoxelGeneratorInstanceWrapper_NoRegister();
VOXEL_API UClass* Z_Construct_UClass_UVoxelTransformableGeneratorInstanceWrapper_NoRegister();
VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelGeneratorInit();
VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelGeneratorPicker();
VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelTransformableGeneratorPicker();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UVoxelGeneratorCache Function MakeGeneratorInstance **********************
struct Z_Construct_UFunction_UVoxelGeneratorCache_MakeGeneratorInstance_Statics
{
	struct VoxelGeneratorCache_eventMakeGeneratorInstance_Parms
	{
		FVoxelGeneratorPicker Picker;
		UVoxelGeneratorInstanceWrapper* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Voxel" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Creates (or reuse if possible) a new generator instance\n\x09 *\n\x09 * Among other things, this is required for DataItemActors to reuse generators, which allows for smaller update when moving them\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/VoxelGenerators/VoxelGeneratorCache.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Creates (or reuse if possible) a new generator instance\n\nAmong other things, this is required for DataItemActors to reuse generators, which allows for smaller update when moving them" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Picker;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelGeneratorCache_MakeGeneratorInstance_Statics::NewProp_Picker = { "Picker", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelGeneratorCache_eventMakeGeneratorInstance_Parms, Picker), Z_Construct_UScriptStruct_FVoxelGeneratorPicker, METADATA_PARAMS(0, nullptr) }; // 3276742823
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelGeneratorCache_MakeGeneratorInstance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelGeneratorCache_eventMakeGeneratorInstance_Parms, ReturnValue), Z_Construct_UClass_UVoxelGeneratorInstanceWrapper_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelGeneratorCache_MakeGeneratorInstance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelGeneratorCache_MakeGeneratorInstance_Statics::NewProp_Picker,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelGeneratorCache_MakeGeneratorInstance_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelGeneratorCache_MakeGeneratorInstance_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelGeneratorCache_MakeGeneratorInstance_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelGeneratorCache, nullptr, "MakeGeneratorInstance", Z_Construct_UFunction_UVoxelGeneratorCache_MakeGeneratorInstance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelGeneratorCache_MakeGeneratorInstance_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVoxelGeneratorCache_MakeGeneratorInstance_Statics::VoxelGeneratorCache_eventMakeGeneratorInstance_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelGeneratorCache_MakeGeneratorInstance_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelGeneratorCache_MakeGeneratorInstance_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVoxelGeneratorCache_MakeGeneratorInstance_Statics::VoxelGeneratorCache_eventMakeGeneratorInstance_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVoxelGeneratorCache_MakeGeneratorInstance()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelGeneratorCache_MakeGeneratorInstance_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelGeneratorCache::execMakeGeneratorInstance)
{
	P_GET_STRUCT(FVoxelGeneratorPicker,Z_Param_Picker);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UVoxelGeneratorInstanceWrapper**)Z_Param__Result=P_THIS->MakeGeneratorInstance(Z_Param_Picker);
	P_NATIVE_END;
}
// ********** End Class UVoxelGeneratorCache Function MakeGeneratorInstance ************************

// ********** Begin Class UVoxelGeneratorCache Function MakeTransformableGeneratorInstance *********
struct Z_Construct_UFunction_UVoxelGeneratorCache_MakeTransformableGeneratorInstance_Statics
{
	struct VoxelGeneratorCache_eventMakeTransformableGeneratorInstance_Parms
	{
		FVoxelTransformableGeneratorPicker Picker;
		UVoxelTransformableGeneratorInstanceWrapper* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Voxel" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Creates (or reuse if possible) a new generator instance\n\x09 *\n\x09 * Among other things, this is required for DataItemActors to reuse generators, which allows for smaller update when moving them\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/VoxelGenerators/VoxelGeneratorCache.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Creates (or reuse if possible) a new generator instance\n\nAmong other things, this is required for DataItemActors to reuse generators, which allows for smaller update when moving them" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Picker;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelGeneratorCache_MakeTransformableGeneratorInstance_Statics::NewProp_Picker = { "Picker", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelGeneratorCache_eventMakeTransformableGeneratorInstance_Parms, Picker), Z_Construct_UScriptStruct_FVoxelTransformableGeneratorPicker, METADATA_PARAMS(0, nullptr) }; // 3102180178
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelGeneratorCache_MakeTransformableGeneratorInstance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelGeneratorCache_eventMakeTransformableGeneratorInstance_Parms, ReturnValue), Z_Construct_UClass_UVoxelTransformableGeneratorInstanceWrapper_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelGeneratorCache_MakeTransformableGeneratorInstance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelGeneratorCache_MakeTransformableGeneratorInstance_Statics::NewProp_Picker,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelGeneratorCache_MakeTransformableGeneratorInstance_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelGeneratorCache_MakeTransformableGeneratorInstance_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelGeneratorCache_MakeTransformableGeneratorInstance_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelGeneratorCache, nullptr, "MakeTransformableGeneratorInstance", Z_Construct_UFunction_UVoxelGeneratorCache_MakeTransformableGeneratorInstance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelGeneratorCache_MakeTransformableGeneratorInstance_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVoxelGeneratorCache_MakeTransformableGeneratorInstance_Statics::VoxelGeneratorCache_eventMakeTransformableGeneratorInstance_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelGeneratorCache_MakeTransformableGeneratorInstance_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelGeneratorCache_MakeTransformableGeneratorInstance_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVoxelGeneratorCache_MakeTransformableGeneratorInstance_Statics::VoxelGeneratorCache_eventMakeTransformableGeneratorInstance_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVoxelGeneratorCache_MakeTransformableGeneratorInstance()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelGeneratorCache_MakeTransformableGeneratorInstance_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelGeneratorCache::execMakeTransformableGeneratorInstance)
{
	P_GET_STRUCT(FVoxelTransformableGeneratorPicker,Z_Param_Picker);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UVoxelTransformableGeneratorInstanceWrapper**)Z_Param__Result=P_THIS->MakeTransformableGeneratorInstance(Z_Param_Picker);
	P_NATIVE_END;
}
// ********** End Class UVoxelGeneratorCache Function MakeTransformableGeneratorInstance ***********

// ********** Begin Class UVoxelGeneratorCache *****************************************************
void UVoxelGeneratorCache::StaticRegisterNativesUVoxelGeneratorCache()
{
	UClass* Class = UVoxelGeneratorCache::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "MakeGeneratorInstance", &UVoxelGeneratorCache::execMakeGeneratorInstance },
		{ "MakeTransformableGeneratorInstance", &UVoxelGeneratorCache::execMakeTransformableGeneratorInstance },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UVoxelGeneratorCache;
UClass* UVoxelGeneratorCache::GetPrivateStaticClass()
{
	using TClass = UVoxelGeneratorCache;
	if (!Z_Registration_Info_UClass_UVoxelGeneratorCache.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("VoxelGeneratorCache"),
			Z_Registration_Info_UClass_UVoxelGeneratorCache.InnerSingleton,
			StaticRegisterNativesUVoxelGeneratorCache,
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
	return Z_Registration_Info_UClass_UVoxelGeneratorCache.InnerSingleton;
}
UClass* Z_Construct_UClass_UVoxelGeneratorCache_NoRegister()
{
	return UVoxelGeneratorCache::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UVoxelGeneratorCache_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "VoxelGenerators/VoxelGeneratorCache.h" },
		{ "ModuleRelativePath", "Public/VoxelGenerators/VoxelGeneratorCache.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GeneratorInit_MetaData[] = {
		{ "ModuleRelativePath", "Public/VoxelGenerators/VoxelGeneratorCache.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Cache_MetaData[] = {
		{ "ModuleRelativePath", "Public/VoxelGenerators/VoxelGeneratorCache.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TransformableCache_MetaData[] = {
		{ "ModuleRelativePath", "Public/VoxelGenerators/VoxelGeneratorCache.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_GeneratorInit;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Cache_ValueProp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Cache_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_Cache;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TransformableCache_ValueProp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TransformableCache_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_TransformableCache;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UVoxelGeneratorCache_MakeGeneratorInstance, "MakeGeneratorInstance" }, // 2833878938
		{ &Z_Construct_UFunction_UVoxelGeneratorCache_MakeTransformableGeneratorInstance, "MakeTransformableGeneratorInstance" }, // 46944883
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelGeneratorCache>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVoxelGeneratorCache_Statics::NewProp_GeneratorInit = { "GeneratorInit", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelGeneratorCache, GeneratorInit), Z_Construct_UScriptStruct_FVoxelGeneratorInit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GeneratorInit_MetaData), NewProp_GeneratorInit_MetaData) }; // 2675460303
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVoxelGeneratorCache_Statics::NewProp_Cache_ValueProp = { "Cache", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UVoxelGeneratorInstanceWrapper_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVoxelGeneratorCache_Statics::NewProp_Cache_Key_KeyProp = { "Cache_Key", nullptr, (EPropertyFlags)0x0100000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVoxelGeneratorPicker, METADATA_PARAMS(0, nullptr) }; // 3276742823
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UVoxelGeneratorCache_Statics::NewProp_Cache = { "Cache", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelGeneratorCache, Cache), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Cache_MetaData), NewProp_Cache_MetaData) }; // 3276742823
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVoxelGeneratorCache_Statics::NewProp_TransformableCache_ValueProp = { "TransformableCache", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UVoxelTransformableGeneratorInstanceWrapper_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVoxelGeneratorCache_Statics::NewProp_TransformableCache_Key_KeyProp = { "TransformableCache_Key", nullptr, (EPropertyFlags)0x0100000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVoxelTransformableGeneratorPicker, METADATA_PARAMS(0, nullptr) }; // 3102180178
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UVoxelGeneratorCache_Statics::NewProp_TransformableCache = { "TransformableCache", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelGeneratorCache, TransformableCache), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TransformableCache_MetaData), NewProp_TransformableCache_MetaData) }; // 3102180178
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelGeneratorCache_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelGeneratorCache_Statics::NewProp_GeneratorInit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelGeneratorCache_Statics::NewProp_Cache_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelGeneratorCache_Statics::NewProp_Cache_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelGeneratorCache_Statics::NewProp_Cache,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelGeneratorCache_Statics::NewProp_TransformableCache_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelGeneratorCache_Statics::NewProp_TransformableCache_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelGeneratorCache_Statics::NewProp_TransformableCache,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelGeneratorCache_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UVoxelGeneratorCache_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelGeneratorCache_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelGeneratorCache_Statics::ClassParams = {
	&UVoxelGeneratorCache::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UVoxelGeneratorCache_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelGeneratorCache_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelGeneratorCache_Statics::Class_MetaDataParams), Z_Construct_UClass_UVoxelGeneratorCache_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVoxelGeneratorCache()
{
	if (!Z_Registration_Info_UClass_UVoxelGeneratorCache.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelGeneratorCache.OuterSingleton, Z_Construct_UClass_UVoxelGeneratorCache_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVoxelGeneratorCache.OuterSingleton;
}
UVoxelGeneratorCache::UVoxelGeneratorCache(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelGeneratorCache);
UVoxelGeneratorCache::~UVoxelGeneratorCache() {}
// ********** End Class UVoxelGeneratorCache *******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelGenerators_VoxelGeneratorCache_h__Script_Voxel_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UVoxelGeneratorCache, UVoxelGeneratorCache::StaticClass, TEXT("UVoxelGeneratorCache"), &Z_Registration_Info_UClass_UVoxelGeneratorCache, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelGeneratorCache), 405851931U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelGenerators_VoxelGeneratorCache_h__Script_Voxel_4008917189(TEXT("/Script/Voxel"),
	Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelGenerators_VoxelGeneratorCache_h__Script_Voxel_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelGenerators_VoxelGeneratorCache_h__Script_Voxel_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
