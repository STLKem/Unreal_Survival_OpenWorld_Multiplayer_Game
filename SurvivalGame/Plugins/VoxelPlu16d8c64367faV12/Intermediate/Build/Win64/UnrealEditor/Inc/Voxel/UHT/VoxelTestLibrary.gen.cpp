// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VoxelTools/VoxelTestLibrary.h"
#include "VoxelIntBox.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeVoxelTestLibrary() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
UPackage* Z_Construct_UPackage__Script_Voxel();
VOXEL_API UClass* Z_Construct_UClass_AVoxelWorld_NoRegister();
VOXEL_API UClass* Z_Construct_UClass_UVoxelTestLibrary();
VOXEL_API UClass* Z_Construct_UClass_UVoxelTestLibrary_NoRegister();
VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelIntBox();
VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelTestValues();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FVoxelTestValues **************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FVoxelTestValues;
class UScriptStruct* FVoxelTestValues::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FVoxelTestValues.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FVoxelTestValues.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVoxelTestValues, (UObject*)Z_Construct_UPackage__Script_Voxel(), TEXT("VoxelTestValues"));
	}
	return Z_Registration_Info_UScriptStruct_FVoxelTestValues.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FVoxelTestValues_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelTestLibrary.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVoxelTestValues>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVoxelTestValues_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
	nullptr,
	&NewStructOps,
	"VoxelTestValues",
	nullptr,
	0,
	sizeof(FVoxelTestValues),
	alignof(FVoxelTestValues),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelTestValues_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVoxelTestValues_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FVoxelTestValues()
{
	if (!Z_Registration_Info_UScriptStruct_FVoxelTestValues.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FVoxelTestValues.InnerSingleton, Z_Construct_UScriptStruct_FVoxelTestValues_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FVoxelTestValues.InnerSingleton;
}
// ********** End ScriptStruct FVoxelTestValues ****************************************************

// ********** Begin Class UVoxelTestLibrary Function ReadValues ************************************
struct Z_Construct_UFunction_UVoxelTestLibrary_ReadValues_Statics
{
	struct VoxelTestLibrary_eventReadValues_Parms
	{
		AVoxelWorld* World;
		FVoxelIntBox Bounds;
		FVoxelTestValues ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Voxel|Test" },
		{ "DefaultToSelf", "World" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelTestLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Bounds;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelTestLibrary_ReadValues_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelTestLibrary_eventReadValues_Parms, World), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelTestLibrary_ReadValues_Statics::NewProp_Bounds = { "Bounds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelTestLibrary_eventReadValues_Parms, Bounds), Z_Construct_UScriptStruct_FVoxelIntBox, METADATA_PARAMS(0, nullptr) }; // 3520536583
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelTestLibrary_ReadValues_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelTestLibrary_eventReadValues_Parms, ReturnValue), Z_Construct_UScriptStruct_FVoxelTestValues, METADATA_PARAMS(0, nullptr) }; // 4106624832
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelTestLibrary_ReadValues_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelTestLibrary_ReadValues_Statics::NewProp_World,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelTestLibrary_ReadValues_Statics::NewProp_Bounds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelTestLibrary_ReadValues_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelTestLibrary_ReadValues_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelTestLibrary_ReadValues_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelTestLibrary, nullptr, "ReadValues", Z_Construct_UFunction_UVoxelTestLibrary_ReadValues_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelTestLibrary_ReadValues_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVoxelTestLibrary_ReadValues_Statics::VoxelTestLibrary_eventReadValues_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelTestLibrary_ReadValues_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelTestLibrary_ReadValues_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVoxelTestLibrary_ReadValues_Statics::VoxelTestLibrary_eventReadValues_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVoxelTestLibrary_ReadValues()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelTestLibrary_ReadValues_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelTestLibrary::execReadValues)
{
	P_GET_OBJECT(AVoxelWorld,Z_Param_World);
	P_GET_STRUCT(FVoxelIntBox,Z_Param_Bounds);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVoxelTestValues*)Z_Param__Result=UVoxelTestLibrary::ReadValues(Z_Param_World,Z_Param_Bounds);
	P_NATIVE_END;
}
// ********** End Class UVoxelTestLibrary Function ReadValues **************************************

// ********** Begin Class UVoxelTestLibrary Function TestValues ************************************
struct Z_Construct_UFunction_UVoxelTestLibrary_TestValues_Statics
{
	struct VoxelTestLibrary_eventTestValues_Parms
	{
		FVoxelTestValues ValuesA;
		FVoxelTestValues ValuesB;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Voxel|Test" },
		{ "DefaultToSelf", "World" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelTestLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ValuesA;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ValuesB;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelTestLibrary_TestValues_Statics::NewProp_ValuesA = { "ValuesA", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelTestLibrary_eventTestValues_Parms, ValuesA), Z_Construct_UScriptStruct_FVoxelTestValues, METADATA_PARAMS(0, nullptr) }; // 4106624832
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelTestLibrary_TestValues_Statics::NewProp_ValuesB = { "ValuesB", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelTestLibrary_eventTestValues_Parms, ValuesB), Z_Construct_UScriptStruct_FVoxelTestValues, METADATA_PARAMS(0, nullptr) }; // 4106624832
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelTestLibrary_TestValues_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelTestLibrary_TestValues_Statics::NewProp_ValuesA,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelTestLibrary_TestValues_Statics::NewProp_ValuesB,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelTestLibrary_TestValues_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelTestLibrary_TestValues_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelTestLibrary, nullptr, "TestValues", Z_Construct_UFunction_UVoxelTestLibrary_TestValues_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelTestLibrary_TestValues_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVoxelTestLibrary_TestValues_Statics::VoxelTestLibrary_eventTestValues_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelTestLibrary_TestValues_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelTestLibrary_TestValues_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVoxelTestLibrary_TestValues_Statics::VoxelTestLibrary_eventTestValues_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVoxelTestLibrary_TestValues()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelTestLibrary_TestValues_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelTestLibrary::execTestValues)
{
	P_GET_STRUCT(FVoxelTestValues,Z_Param_ValuesA);
	P_GET_STRUCT(FVoxelTestValues,Z_Param_ValuesB);
	P_FINISH;
	P_NATIVE_BEGIN;
	UVoxelTestLibrary::TestValues(Z_Param_ValuesA,Z_Param_ValuesB);
	P_NATIVE_END;
}
// ********** End Class UVoxelTestLibrary Function TestValues **************************************

// ********** Begin Class UVoxelTestLibrary ********************************************************
void UVoxelTestLibrary::StaticRegisterNativesUVoxelTestLibrary()
{
	UClass* Class = UVoxelTestLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ReadValues", &UVoxelTestLibrary::execReadValues },
		{ "TestValues", &UVoxelTestLibrary::execTestValues },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UVoxelTestLibrary;
UClass* UVoxelTestLibrary::GetPrivateStaticClass()
{
	using TClass = UVoxelTestLibrary;
	if (!Z_Registration_Info_UClass_UVoxelTestLibrary.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("VoxelTestLibrary"),
			Z_Registration_Info_UClass_UVoxelTestLibrary.InnerSingleton,
			StaticRegisterNativesUVoxelTestLibrary,
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
	return Z_Registration_Info_UClass_UVoxelTestLibrary.InnerSingleton;
}
UClass* Z_Construct_UClass_UVoxelTestLibrary_NoRegister()
{
	return UVoxelTestLibrary::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UVoxelTestLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "VoxelTools/VoxelTestLibrary.h" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelTestLibrary.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UVoxelTestLibrary_ReadValues, "ReadValues" }, // 1974815943
		{ &Z_Construct_UFunction_UVoxelTestLibrary_TestValues, "TestValues" }, // 232109366
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelTestLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UVoxelTestLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelTestLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelTestLibrary_Statics::ClassParams = {
	&UVoxelTestLibrary::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelTestLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UVoxelTestLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVoxelTestLibrary()
{
	if (!Z_Registration_Info_UClass_UVoxelTestLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelTestLibrary.OuterSingleton, Z_Construct_UClass_UVoxelTestLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVoxelTestLibrary.OuterSingleton;
}
UVoxelTestLibrary::UVoxelTestLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelTestLibrary);
UVoxelTestLibrary::~UVoxelTestLibrary() {}
// ********** End Class UVoxelTestLibrary **********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelTools_VoxelTestLibrary_h__Script_Voxel_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FVoxelTestValues::StaticStruct, Z_Construct_UScriptStruct_FVoxelTestValues_Statics::NewStructOps, TEXT("VoxelTestValues"), &Z_Registration_Info_UScriptStruct_FVoxelTestValues, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVoxelTestValues), 4106624832U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UVoxelTestLibrary, UVoxelTestLibrary::StaticClass, TEXT("UVoxelTestLibrary"), &Z_Registration_Info_UClass_UVoxelTestLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelTestLibrary), 2468293893U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelTools_VoxelTestLibrary_h__Script_Voxel_3611981938(TEXT("/Script/Voxel"),
	Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelTools_VoxelTestLibrary_h__Script_Voxel_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelTools_VoxelTestLibrary_h__Script_Voxel_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelTools_VoxelTestLibrary_h__Script_Voxel_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelTools_VoxelTestLibrary_h__Script_Voxel_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
