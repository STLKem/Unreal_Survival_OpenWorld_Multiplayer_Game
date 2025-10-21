// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VoxelRender/MaterialCollections/VoxelMaterialCollectionBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeVoxelMaterialCollectionBase() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_Voxel();
VOXEL_API UClass* Z_Construct_UClass_UVoxelMaterialCollectionBase();
VOXEL_API UClass* Z_Construct_UClass_UVoxelMaterialCollectionBase_NoRegister();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UVoxelMaterialCollectionBase Function GetIndexMaterial *******************
struct Z_Construct_UFunction_UVoxelMaterialCollectionBase_GetIndexMaterial_Statics
{
	struct VoxelMaterialCollectionBase_eventGetIndexMaterial_Parms
	{
		uint8 Index;
		UMaterialInterface* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Voxel|Material Collection" },
		{ "ModuleRelativePath", "Public/VoxelRender/MaterialCollections/VoxelMaterialCollectionBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Index;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVoxelMaterialCollectionBase_GetIndexMaterial_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelMaterialCollectionBase_eventGetIndexMaterial_Parms, Index), nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelMaterialCollectionBase_GetIndexMaterial_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelMaterialCollectionBase_eventGetIndexMaterial_Parms, ReturnValue), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelMaterialCollectionBase_GetIndexMaterial_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelMaterialCollectionBase_GetIndexMaterial_Statics::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelMaterialCollectionBase_GetIndexMaterial_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelMaterialCollectionBase_GetIndexMaterial_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelMaterialCollectionBase_GetIndexMaterial_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelMaterialCollectionBase, nullptr, "GetIndexMaterial", Z_Construct_UFunction_UVoxelMaterialCollectionBase_GetIndexMaterial_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelMaterialCollectionBase_GetIndexMaterial_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVoxelMaterialCollectionBase_GetIndexMaterial_Statics::VoxelMaterialCollectionBase_eventGetIndexMaterial_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelMaterialCollectionBase_GetIndexMaterial_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelMaterialCollectionBase_GetIndexMaterial_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVoxelMaterialCollectionBase_GetIndexMaterial_Statics::VoxelMaterialCollectionBase_eventGetIndexMaterial_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVoxelMaterialCollectionBase_GetIndexMaterial()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelMaterialCollectionBase_GetIndexMaterial_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelMaterialCollectionBase::execGetIndexMaterial)
{
	P_GET_PROPERTY(FByteProperty,Z_Param_Index);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UMaterialInterface**)Z_Param__Result=P_THIS->GetIndexMaterial(Z_Param_Index);
	P_NATIVE_END;
}
// ********** End Class UVoxelMaterialCollectionBase Function GetIndexMaterial *********************

// ********** Begin Class UVoxelMaterialCollectionBase *********************************************
void UVoxelMaterialCollectionBase::StaticRegisterNativesUVoxelMaterialCollectionBase()
{
	UClass* Class = UVoxelMaterialCollectionBase::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetIndexMaterial", &UVoxelMaterialCollectionBase::execGetIndexMaterial },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UVoxelMaterialCollectionBase;
UClass* UVoxelMaterialCollectionBase::GetPrivateStaticClass()
{
	using TClass = UVoxelMaterialCollectionBase;
	if (!Z_Registration_Info_UClass_UVoxelMaterialCollectionBase.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("VoxelMaterialCollectionBase"),
			Z_Registration_Info_UClass_UVoxelMaterialCollectionBase.InnerSingleton,
			StaticRegisterNativesUVoxelMaterialCollectionBase,
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
	return Z_Registration_Info_UClass_UVoxelMaterialCollectionBase.InnerSingleton;
}
UClass* Z_Construct_UClass_UVoxelMaterialCollectionBase_NoRegister()
{
	return UVoxelMaterialCollectionBase::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UVoxelMaterialCollectionBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "VoxelRender/MaterialCollections/VoxelMaterialCollectionBase.h" },
		{ "ModuleRelativePath", "Public/VoxelRender/MaterialCollections/VoxelMaterialCollectionBase.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UVoxelMaterialCollectionBase_GetIndexMaterial, "GetIndexMaterial" }, // 2453759576
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelMaterialCollectionBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UVoxelMaterialCollectionBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelMaterialCollectionBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelMaterialCollectionBase_Statics::ClassParams = {
	&UVoxelMaterialCollectionBase::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelMaterialCollectionBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UVoxelMaterialCollectionBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVoxelMaterialCollectionBase()
{
	if (!Z_Registration_Info_UClass_UVoxelMaterialCollectionBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelMaterialCollectionBase.OuterSingleton, Z_Construct_UClass_UVoxelMaterialCollectionBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVoxelMaterialCollectionBase.OuterSingleton;
}
UVoxelMaterialCollectionBase::UVoxelMaterialCollectionBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelMaterialCollectionBase);
UVoxelMaterialCollectionBase::~UVoxelMaterialCollectionBase() {}
// ********** End Class UVoxelMaterialCollectionBase ***********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelRender_MaterialCollections_VoxelMaterialCollectionBase_h__Script_Voxel_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UVoxelMaterialCollectionBase, UVoxelMaterialCollectionBase::StaticClass, TEXT("UVoxelMaterialCollectionBase"), &Z_Registration_Info_UClass_UVoxelMaterialCollectionBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelMaterialCollectionBase), 2430463901U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelRender_MaterialCollections_VoxelMaterialCollectionBase_h__Script_Voxel_2143541812(TEXT("/Script/Voxel"),
	Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelRender_MaterialCollections_VoxelMaterialCollectionBase_h__Script_Voxel_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelRender_MaterialCollections_VoxelMaterialCollectionBase_h__Script_Voxel_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
