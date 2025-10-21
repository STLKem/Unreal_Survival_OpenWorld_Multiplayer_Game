// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VoxelGenerators/VoxelGeneratorInstanceWrapper.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeVoxelGeneratorInstanceWrapper() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
UPackage* Z_Construct_UPackage__Script_Voxel();
VOXEL_API UClass* Z_Construct_UClass_UVoxelGeneratorInstanceWrapper();
VOXEL_API UClass* Z_Construct_UClass_UVoxelGeneratorInstanceWrapper_NoRegister();
VOXEL_API UClass* Z_Construct_UClass_UVoxelTransformableGeneratorInstanceWrapper();
VOXEL_API UClass* Z_Construct_UClass_UVoxelTransformableGeneratorInstanceWrapper_NoRegister();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UVoxelGeneratorInstanceWrapper Function IsValid **************************
struct Z_Construct_UFunction_UVoxelGeneratorInstanceWrapper_IsValid_Statics
{
	struct VoxelGeneratorInstanceWrapper_eventIsValid_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Voxel|Generators" },
		{ "ModuleRelativePath", "Public/VoxelGenerators/VoxelGeneratorInstanceWrapper.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UVoxelGeneratorInstanceWrapper_IsValid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((VoxelGeneratorInstanceWrapper_eventIsValid_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelGeneratorInstanceWrapper_IsValid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VoxelGeneratorInstanceWrapper_eventIsValid_Parms), &Z_Construct_UFunction_UVoxelGeneratorInstanceWrapper_IsValid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelGeneratorInstanceWrapper_IsValid_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelGeneratorInstanceWrapper_IsValid_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelGeneratorInstanceWrapper_IsValid_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelGeneratorInstanceWrapper_IsValid_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelGeneratorInstanceWrapper, nullptr, "IsValid", Z_Construct_UFunction_UVoxelGeneratorInstanceWrapper_IsValid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelGeneratorInstanceWrapper_IsValid_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVoxelGeneratorInstanceWrapper_IsValid_Statics::VoxelGeneratorInstanceWrapper_eventIsValid_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelGeneratorInstanceWrapper_IsValid_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelGeneratorInstanceWrapper_IsValid_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVoxelGeneratorInstanceWrapper_IsValid_Statics::VoxelGeneratorInstanceWrapper_eventIsValid_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVoxelGeneratorInstanceWrapper_IsValid()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelGeneratorInstanceWrapper_IsValid_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelGeneratorInstanceWrapper::execIsValid)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsValid();
	P_NATIVE_END;
}
// ********** End Class UVoxelGeneratorInstanceWrapper Function IsValid ****************************

// ********** Begin Class UVoxelGeneratorInstanceWrapper *******************************************
void UVoxelGeneratorInstanceWrapper::StaticRegisterNativesUVoxelGeneratorInstanceWrapper()
{
	UClass* Class = UVoxelGeneratorInstanceWrapper::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "IsValid", &UVoxelGeneratorInstanceWrapper::execIsValid },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UVoxelGeneratorInstanceWrapper;
UClass* UVoxelGeneratorInstanceWrapper::GetPrivateStaticClass()
{
	using TClass = UVoxelGeneratorInstanceWrapper;
	if (!Z_Registration_Info_UClass_UVoxelGeneratorInstanceWrapper.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("VoxelGeneratorInstanceWrapper"),
			Z_Registration_Info_UClass_UVoxelGeneratorInstanceWrapper.InnerSingleton,
			StaticRegisterNativesUVoxelGeneratorInstanceWrapper,
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
	return Z_Registration_Info_UClass_UVoxelGeneratorInstanceWrapper.InnerSingleton;
}
UClass* Z_Construct_UClass_UVoxelGeneratorInstanceWrapper_NoRegister()
{
	return UVoxelGeneratorInstanceWrapper::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UVoxelGeneratorInstanceWrapper_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "VoxelGenerators/VoxelGeneratorInstanceWrapper.h" },
		{ "ModuleRelativePath", "Public/VoxelGenerators/VoxelGeneratorInstanceWrapper.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UVoxelGeneratorInstanceWrapper_IsValid, "IsValid" }, // 2619745796
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelGeneratorInstanceWrapper>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UVoxelGeneratorInstanceWrapper_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelGeneratorInstanceWrapper_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelGeneratorInstanceWrapper_Statics::ClassParams = {
	&UVoxelGeneratorInstanceWrapper::StaticClass,
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
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelGeneratorInstanceWrapper_Statics::Class_MetaDataParams), Z_Construct_UClass_UVoxelGeneratorInstanceWrapper_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVoxelGeneratorInstanceWrapper()
{
	if (!Z_Registration_Info_UClass_UVoxelGeneratorInstanceWrapper.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelGeneratorInstanceWrapper.OuterSingleton, Z_Construct_UClass_UVoxelGeneratorInstanceWrapper_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVoxelGeneratorInstanceWrapper.OuterSingleton;
}
UVoxelGeneratorInstanceWrapper::UVoxelGeneratorInstanceWrapper(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelGeneratorInstanceWrapper);
UVoxelGeneratorInstanceWrapper::~UVoxelGeneratorInstanceWrapper() {}
// ********** End Class UVoxelGeneratorInstanceWrapper *********************************************

// ********** Begin Class UVoxelTransformableGeneratorInstanceWrapper Function IsValid *************
struct Z_Construct_UFunction_UVoxelTransformableGeneratorInstanceWrapper_IsValid_Statics
{
	struct VoxelTransformableGeneratorInstanceWrapper_eventIsValid_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Voxel|Generators" },
		{ "ModuleRelativePath", "Public/VoxelGenerators/VoxelGeneratorInstanceWrapper.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UVoxelTransformableGeneratorInstanceWrapper_IsValid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((VoxelTransformableGeneratorInstanceWrapper_eventIsValid_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelTransformableGeneratorInstanceWrapper_IsValid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VoxelTransformableGeneratorInstanceWrapper_eventIsValid_Parms), &Z_Construct_UFunction_UVoxelTransformableGeneratorInstanceWrapper_IsValid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelTransformableGeneratorInstanceWrapper_IsValid_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelTransformableGeneratorInstanceWrapper_IsValid_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelTransformableGeneratorInstanceWrapper_IsValid_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelTransformableGeneratorInstanceWrapper_IsValid_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelTransformableGeneratorInstanceWrapper, nullptr, "IsValid", Z_Construct_UFunction_UVoxelTransformableGeneratorInstanceWrapper_IsValid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelTransformableGeneratorInstanceWrapper_IsValid_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVoxelTransformableGeneratorInstanceWrapper_IsValid_Statics::VoxelTransformableGeneratorInstanceWrapper_eventIsValid_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelTransformableGeneratorInstanceWrapper_IsValid_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelTransformableGeneratorInstanceWrapper_IsValid_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVoxelTransformableGeneratorInstanceWrapper_IsValid_Statics::VoxelTransformableGeneratorInstanceWrapper_eventIsValid_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVoxelTransformableGeneratorInstanceWrapper_IsValid()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelTransformableGeneratorInstanceWrapper_IsValid_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelTransformableGeneratorInstanceWrapper::execIsValid)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsValid();
	P_NATIVE_END;
}
// ********** End Class UVoxelTransformableGeneratorInstanceWrapper Function IsValid ***************

// ********** Begin Class UVoxelTransformableGeneratorInstanceWrapper ******************************
void UVoxelTransformableGeneratorInstanceWrapper::StaticRegisterNativesUVoxelTransformableGeneratorInstanceWrapper()
{
	UClass* Class = UVoxelTransformableGeneratorInstanceWrapper::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "IsValid", &UVoxelTransformableGeneratorInstanceWrapper::execIsValid },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UVoxelTransformableGeneratorInstanceWrapper;
UClass* UVoxelTransformableGeneratorInstanceWrapper::GetPrivateStaticClass()
{
	using TClass = UVoxelTransformableGeneratorInstanceWrapper;
	if (!Z_Registration_Info_UClass_UVoxelTransformableGeneratorInstanceWrapper.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("VoxelTransformableGeneratorInstanceWrapper"),
			Z_Registration_Info_UClass_UVoxelTransformableGeneratorInstanceWrapper.InnerSingleton,
			StaticRegisterNativesUVoxelTransformableGeneratorInstanceWrapper,
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
	return Z_Registration_Info_UClass_UVoxelTransformableGeneratorInstanceWrapper.InnerSingleton;
}
UClass* Z_Construct_UClass_UVoxelTransformableGeneratorInstanceWrapper_NoRegister()
{
	return UVoxelTransformableGeneratorInstanceWrapper::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UVoxelTransformableGeneratorInstanceWrapper_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "VoxelGenerators/VoxelGeneratorInstanceWrapper.h" },
		{ "ModuleRelativePath", "Public/VoxelGenerators/VoxelGeneratorInstanceWrapper.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UVoxelTransformableGeneratorInstanceWrapper_IsValid, "IsValid" }, // 4204311900
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelTransformableGeneratorInstanceWrapper>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UVoxelTransformableGeneratorInstanceWrapper_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelTransformableGeneratorInstanceWrapper_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelTransformableGeneratorInstanceWrapper_Statics::ClassParams = {
	&UVoxelTransformableGeneratorInstanceWrapper::StaticClass,
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
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelTransformableGeneratorInstanceWrapper_Statics::Class_MetaDataParams), Z_Construct_UClass_UVoxelTransformableGeneratorInstanceWrapper_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVoxelTransformableGeneratorInstanceWrapper()
{
	if (!Z_Registration_Info_UClass_UVoxelTransformableGeneratorInstanceWrapper.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelTransformableGeneratorInstanceWrapper.OuterSingleton, Z_Construct_UClass_UVoxelTransformableGeneratorInstanceWrapper_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVoxelTransformableGeneratorInstanceWrapper.OuterSingleton;
}
UVoxelTransformableGeneratorInstanceWrapper::UVoxelTransformableGeneratorInstanceWrapper(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelTransformableGeneratorInstanceWrapper);
UVoxelTransformableGeneratorInstanceWrapper::~UVoxelTransformableGeneratorInstanceWrapper() {}
// ********** End Class UVoxelTransformableGeneratorInstanceWrapper ********************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelGenerators_VoxelGeneratorInstanceWrapper_h__Script_Voxel_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UVoxelGeneratorInstanceWrapper, UVoxelGeneratorInstanceWrapper::StaticClass, TEXT("UVoxelGeneratorInstanceWrapper"), &Z_Registration_Info_UClass_UVoxelGeneratorInstanceWrapper, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelGeneratorInstanceWrapper), 4097440708U) },
		{ Z_Construct_UClass_UVoxelTransformableGeneratorInstanceWrapper, UVoxelTransformableGeneratorInstanceWrapper::StaticClass, TEXT("UVoxelTransformableGeneratorInstanceWrapper"), &Z_Registration_Info_UClass_UVoxelTransformableGeneratorInstanceWrapper, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelTransformableGeneratorInstanceWrapper), 2059982857U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelGenerators_VoxelGeneratorInstanceWrapper_h__Script_Voxel_2454282907(TEXT("/Script/Voxel"),
	Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelGenerators_VoxelGeneratorInstanceWrapper_h__Script_Voxel_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelGenerators_VoxelGeneratorInstanceWrapper_h__Script_Voxel_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
