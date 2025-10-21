// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VoxelData/VoxelSaveUtilities.h"
#include "VoxelData/VoxelSave.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeVoxelSaveUtilities() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
UPackage* Z_Construct_UPackage__Script_Voxel();
VOXEL_API UClass* Z_Construct_UClass_UVoxelSaveUtilities();
VOXEL_API UClass* Z_Construct_UClass_UVoxelSaveUtilities_NoRegister();
VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelCompressedWorldSave();
VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelUncompressedWorldSave();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UVoxelSaveUtilities Function CompressVoxelSave ***************************
struct Z_Construct_UFunction_UVoxelSaveUtilities_CompressVoxelSave_Statics
{
	struct VoxelSaveUtilities_eventCompressVoxelSave_Parms
	{
		FVoxelUncompressedWorldSave UncompressedSave;
		FVoxelCompressedWorldSave OutCompressedSave;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Voxel|Data|Save" },
		{ "ModuleRelativePath", "Public/VoxelData/VoxelSaveUtilities.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UncompressedSave_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_UncompressedSave;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutCompressedSave;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSaveUtilities_CompressVoxelSave_Statics::NewProp_UncompressedSave = { "UncompressedSave", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelSaveUtilities_eventCompressVoxelSave_Parms, UncompressedSave), Z_Construct_UScriptStruct_FVoxelUncompressedWorldSave, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UncompressedSave_MetaData), NewProp_UncompressedSave_MetaData) }; // 1260233769
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSaveUtilities_CompressVoxelSave_Statics::NewProp_OutCompressedSave = { "OutCompressedSave", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelSaveUtilities_eventCompressVoxelSave_Parms, OutCompressedSave), Z_Construct_UScriptStruct_FVoxelCompressedWorldSave, METADATA_PARAMS(0, nullptr) }; // 407345368
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelSaveUtilities_CompressVoxelSave_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSaveUtilities_CompressVoxelSave_Statics::NewProp_UncompressedSave,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSaveUtilities_CompressVoxelSave_Statics::NewProp_OutCompressedSave,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSaveUtilities_CompressVoxelSave_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelSaveUtilities_CompressVoxelSave_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelSaveUtilities, nullptr, "CompressVoxelSave", Z_Construct_UFunction_UVoxelSaveUtilities_CompressVoxelSave_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSaveUtilities_CompressVoxelSave_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVoxelSaveUtilities_CompressVoxelSave_Statics::VoxelSaveUtilities_eventCompressVoxelSave_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSaveUtilities_CompressVoxelSave_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelSaveUtilities_CompressVoxelSave_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVoxelSaveUtilities_CompressVoxelSave_Statics::VoxelSaveUtilities_eventCompressVoxelSave_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVoxelSaveUtilities_CompressVoxelSave()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelSaveUtilities_CompressVoxelSave_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelSaveUtilities::execCompressVoxelSave)
{
	P_GET_STRUCT_REF(FVoxelUncompressedWorldSave,Z_Param_Out_UncompressedSave);
	P_GET_STRUCT_REF(FVoxelCompressedWorldSave,Z_Param_Out_OutCompressedSave);
	P_FINISH;
	P_NATIVE_BEGIN;
	UVoxelSaveUtilities::CompressVoxelSave(Z_Param_Out_UncompressedSave,Z_Param_Out_OutCompressedSave);
	P_NATIVE_END;
}
// ********** End Class UVoxelSaveUtilities Function CompressVoxelSave *****************************

// ********** Begin Class UVoxelSaveUtilities Function DecompressVoxelSave *************************
struct Z_Construct_UFunction_UVoxelSaveUtilities_DecompressVoxelSave_Statics
{
	struct VoxelSaveUtilities_eventDecompressVoxelSave_Parms
	{
		FVoxelCompressedWorldSave CompressedSave;
		FVoxelUncompressedWorldSave OutUncompressedSave;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Voxel|Data|Save" },
		{ "ModuleRelativePath", "Public/VoxelData/VoxelSaveUtilities.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CompressedSave_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_CompressedSave;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutUncompressedSave;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSaveUtilities_DecompressVoxelSave_Statics::NewProp_CompressedSave = { "CompressedSave", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelSaveUtilities_eventDecompressVoxelSave_Parms, CompressedSave), Z_Construct_UScriptStruct_FVoxelCompressedWorldSave, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CompressedSave_MetaData), NewProp_CompressedSave_MetaData) }; // 407345368
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSaveUtilities_DecompressVoxelSave_Statics::NewProp_OutUncompressedSave = { "OutUncompressedSave", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelSaveUtilities_eventDecompressVoxelSave_Parms, OutUncompressedSave), Z_Construct_UScriptStruct_FVoxelUncompressedWorldSave, METADATA_PARAMS(0, nullptr) }; // 1260233769
void Z_Construct_UFunction_UVoxelSaveUtilities_DecompressVoxelSave_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((VoxelSaveUtilities_eventDecompressVoxelSave_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelSaveUtilities_DecompressVoxelSave_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VoxelSaveUtilities_eventDecompressVoxelSave_Parms), &Z_Construct_UFunction_UVoxelSaveUtilities_DecompressVoxelSave_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelSaveUtilities_DecompressVoxelSave_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSaveUtilities_DecompressVoxelSave_Statics::NewProp_CompressedSave,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSaveUtilities_DecompressVoxelSave_Statics::NewProp_OutUncompressedSave,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSaveUtilities_DecompressVoxelSave_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSaveUtilities_DecompressVoxelSave_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelSaveUtilities_DecompressVoxelSave_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelSaveUtilities, nullptr, "DecompressVoxelSave", Z_Construct_UFunction_UVoxelSaveUtilities_DecompressVoxelSave_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSaveUtilities_DecompressVoxelSave_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVoxelSaveUtilities_DecompressVoxelSave_Statics::VoxelSaveUtilities_eventDecompressVoxelSave_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSaveUtilities_DecompressVoxelSave_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelSaveUtilities_DecompressVoxelSave_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVoxelSaveUtilities_DecompressVoxelSave_Statics::VoxelSaveUtilities_eventDecompressVoxelSave_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVoxelSaveUtilities_DecompressVoxelSave()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelSaveUtilities_DecompressVoxelSave_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelSaveUtilities::execDecompressVoxelSave)
{
	P_GET_STRUCT_REF(FVoxelCompressedWorldSave,Z_Param_Out_CompressedSave);
	P_GET_STRUCT_REF(FVoxelUncompressedWorldSave,Z_Param_Out_OutUncompressedSave);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UVoxelSaveUtilities::DecompressVoxelSave(Z_Param_Out_CompressedSave,Z_Param_Out_OutUncompressedSave);
	P_NATIVE_END;
}
// ********** End Class UVoxelSaveUtilities Function DecompressVoxelSave ***************************

// ********** Begin Class UVoxelSaveUtilities ******************************************************
void UVoxelSaveUtilities::StaticRegisterNativesUVoxelSaveUtilities()
{
	UClass* Class = UVoxelSaveUtilities::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CompressVoxelSave", &UVoxelSaveUtilities::execCompressVoxelSave },
		{ "DecompressVoxelSave", &UVoxelSaveUtilities::execDecompressVoxelSave },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UVoxelSaveUtilities;
UClass* UVoxelSaveUtilities::GetPrivateStaticClass()
{
	using TClass = UVoxelSaveUtilities;
	if (!Z_Registration_Info_UClass_UVoxelSaveUtilities.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("VoxelSaveUtilities"),
			Z_Registration_Info_UClass_UVoxelSaveUtilities.InnerSingleton,
			StaticRegisterNativesUVoxelSaveUtilities,
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
	return Z_Registration_Info_UClass_UVoxelSaveUtilities.InnerSingleton;
}
UClass* Z_Construct_UClass_UVoxelSaveUtilities_NoRegister()
{
	return UVoxelSaveUtilities::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UVoxelSaveUtilities_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "VoxelData/VoxelSaveUtilities.h" },
		{ "ModuleRelativePath", "Public/VoxelData/VoxelSaveUtilities.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UVoxelSaveUtilities_CompressVoxelSave, "CompressVoxelSave" }, // 2973876224
		{ &Z_Construct_UFunction_UVoxelSaveUtilities_DecompressVoxelSave, "DecompressVoxelSave" }, // 2170202087
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelSaveUtilities>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UVoxelSaveUtilities_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelSaveUtilities_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelSaveUtilities_Statics::ClassParams = {
	&UVoxelSaveUtilities::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelSaveUtilities_Statics::Class_MetaDataParams), Z_Construct_UClass_UVoxelSaveUtilities_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVoxelSaveUtilities()
{
	if (!Z_Registration_Info_UClass_UVoxelSaveUtilities.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelSaveUtilities.OuterSingleton, Z_Construct_UClass_UVoxelSaveUtilities_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVoxelSaveUtilities.OuterSingleton;
}
UVoxelSaveUtilities::UVoxelSaveUtilities(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelSaveUtilities);
UVoxelSaveUtilities::~UVoxelSaveUtilities() {}
// ********** End Class UVoxelSaveUtilities ********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelData_VoxelSaveUtilities_h__Script_Voxel_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UVoxelSaveUtilities, UVoxelSaveUtilities::StaticClass, TEXT("UVoxelSaveUtilities"), &Z_Registration_Info_UClass_UVoxelSaveUtilities, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelSaveUtilities), 781313609U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelData_VoxelSaveUtilities_h__Script_Voxel_2941139954(TEXT("/Script/Voxel"),
	Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelData_VoxelSaveUtilities_h__Script_Voxel_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelData_VoxelSaveUtilities_h__Script_Voxel_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
