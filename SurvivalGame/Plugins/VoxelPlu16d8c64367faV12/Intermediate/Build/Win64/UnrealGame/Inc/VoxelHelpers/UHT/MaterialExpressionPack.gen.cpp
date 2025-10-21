// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VoxelHelpers/Public/MaterialExpressionPack.h"
#include "Materials/MaterialExpression.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeMaterialExpressionPack() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExpressionInput();
UPackage* Z_Construct_UPackage__Script_VoxelHelpers();
VOXELHELPERS_API UClass* Z_Construct_UClass_UMaterialExpressionPack();
VOXELHELPERS_API UClass* Z_Construct_UClass_UMaterialExpressionPack_NoRegister();
VOXELHELPERS_API UClass* Z_Construct_UClass_UMaterialExpressionUnpack();
VOXELHELPERS_API UClass* Z_Construct_UClass_UMaterialExpressionUnpack_NoRegister();
VOXELHELPERS_API UScriptStruct* Z_Construct_UScriptStruct_FMaterialPackInput();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FMaterialPackInput ************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FMaterialPackInput;
class UScriptStruct* FMaterialPackInput::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FMaterialPackInput.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FMaterialPackInput.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMaterialPackInput, (UObject*)Z_Construct_UPackage__Script_VoxelHelpers(), TEXT("MaterialPackInput"));
	}
	return Z_Registration_Info_UScriptStruct_FMaterialPackInput.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FMaterialPackInput_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MaterialExpressionPack.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputName_MetaData[] = {
		{ "Category", "PackInput" },
		{ "ModuleRelativePath", "Public/MaterialExpressionPack.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[] = {
		{ "Comment", "// Assign a default value to bypass copy paste bug when items are equal to default\n" },
		{ "ModuleRelativePath", "Public/MaterialExpressionPack.h" },
		{ "ToolTip", "Assign a default value to bypass copy paste bug when items are equal to default" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_InputName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Input;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMaterialPackInput>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FMaterialPackInput_Statics::NewProp_InputName = { "InputName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMaterialPackInput, InputName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputName_MetaData), NewProp_InputName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMaterialPackInput_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMaterialPackInput, Input), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Input_MetaData), NewProp_Input_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMaterialPackInput_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialPackInput_Statics::NewProp_InputName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialPackInput_Statics::NewProp_Input,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialPackInput_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMaterialPackInput_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_VoxelHelpers,
	nullptr,
	&NewStructOps,
	"MaterialPackInput",
	Z_Construct_UScriptStruct_FMaterialPackInput_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialPackInput_Statics::PropPointers),
	sizeof(FMaterialPackInput),
	alignof(FMaterialPackInput),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialPackInput_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMaterialPackInput_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMaterialPackInput()
{
	if (!Z_Registration_Info_UScriptStruct_FMaterialPackInput.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FMaterialPackInput.InnerSingleton, Z_Construct_UScriptStruct_FMaterialPackInput_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FMaterialPackInput.InnerSingleton;
}
// ********** End ScriptStruct FMaterialPackInput **************************************************

// ********** Begin Class UMaterialExpressionPack **************************************************
void UMaterialExpressionPack::StaticRegisterNativesUMaterialExpressionPack()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UMaterialExpressionPack;
UClass* UMaterialExpressionPack::GetPrivateStaticClass()
{
	using TClass = UMaterialExpressionPack;
	if (!Z_Registration_Info_UClass_UMaterialExpressionPack.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("MaterialExpressionPack"),
			Z_Registration_Info_UClass_UMaterialExpressionPack.InnerSingleton,
			StaticRegisterNativesUMaterialExpressionPack,
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
	return Z_Registration_Info_UClass_UMaterialExpressionPack.InnerSingleton;
}
UClass* Z_Construct_UClass_UMaterialExpressionPack_NoRegister()
{
	return UMaterialExpressionPack::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UMaterialExpressionPack_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "MaterialExpressionPack.h" },
		{ "ModuleRelativePath", "Public/MaterialExpressionPack.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Inputs_MetaData[] = {
		{ "Category", "MaterialExpressionPack" },
		{ "ModuleRelativePath", "Public/MaterialExpressionPack.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Inputs_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Inputs;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionPack>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionPack_Statics::NewProp_Inputs_Inner = { "Inputs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FMaterialPackInput, METADATA_PARAMS(0, nullptr) }; // 895431067
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMaterialExpressionPack_Statics::NewProp_Inputs = { "Inputs", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionPack, Inputs), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Inputs_MetaData), NewProp_Inputs_MetaData) }; // 895431067
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionPack_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionPack_Statics::NewProp_Inputs_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionPack_Statics::NewProp_Inputs,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionPack_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMaterialExpressionPack_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
	(UObject* (*)())Z_Construct_UPackage__Script_VoxelHelpers,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionPack_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionPack_Statics::ClassParams = {
	&UMaterialExpressionPack::StaticClass,
	"MaterialExpressions",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMaterialExpressionPack_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionPack_Statics::PropPointers),
	0,
	0x000020B4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionPack_Statics::Class_MetaDataParams), Z_Construct_UClass_UMaterialExpressionPack_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMaterialExpressionPack()
{
	if (!Z_Registration_Info_UClass_UMaterialExpressionPack.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionPack.OuterSingleton, Z_Construct_UClass_UMaterialExpressionPack_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMaterialExpressionPack.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionPack);
UMaterialExpressionPack::~UMaterialExpressionPack() {}
// ********** End Class UMaterialExpressionPack ****************************************************

// ********** Begin Class UMaterialExpressionUnpack ************************************************
void UMaterialExpressionUnpack::StaticRegisterNativesUMaterialExpressionUnpack()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UMaterialExpressionUnpack;
UClass* UMaterialExpressionUnpack::GetPrivateStaticClass()
{
	using TClass = UMaterialExpressionUnpack;
	if (!Z_Registration_Info_UClass_UMaterialExpressionUnpack.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("MaterialExpressionUnpack"),
			Z_Registration_Info_UClass_UMaterialExpressionUnpack.InnerSingleton,
			StaticRegisterNativesUMaterialExpressionUnpack,
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
	return Z_Registration_Info_UClass_UMaterialExpressionUnpack.InnerSingleton;
}
UClass* Z_Construct_UClass_UMaterialExpressionUnpack_NoRegister()
{
	return UMaterialExpressionUnpack::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UMaterialExpressionUnpack_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "MaterialExpressionPack.h" },
		{ "ModuleRelativePath", "Public/MaterialExpressionPack.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[] = {
		{ "ModuleRelativePath", "Public/MaterialExpressionPack.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRefresh_MetaData[] = {
		{ "Category", "MaterialExpressionUnpack" },
		{ "ModuleRelativePath", "Public/MaterialExpressionPack.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Input;
	static void NewProp_bRefresh_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRefresh;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionUnpack>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionUnpack_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionUnpack, Input), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Input_MetaData), NewProp_Input_MetaData) };
void Z_Construct_UClass_UMaterialExpressionUnpack_Statics::NewProp_bRefresh_SetBit(void* Obj)
{
	((UMaterialExpressionUnpack*)Obj)->bRefresh = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterialExpressionUnpack_Statics::NewProp_bRefresh = { "bRefresh", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMaterialExpressionUnpack), &Z_Construct_UClass_UMaterialExpressionUnpack_Statics::NewProp_bRefresh_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRefresh_MetaData), NewProp_bRefresh_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionUnpack_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionUnpack_Statics::NewProp_Input,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionUnpack_Statics::NewProp_bRefresh,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionUnpack_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMaterialExpressionUnpack_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
	(UObject* (*)())Z_Construct_UPackage__Script_VoxelHelpers,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionUnpack_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionUnpack_Statics::ClassParams = {
	&UMaterialExpressionUnpack::StaticClass,
	"MaterialExpressions",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMaterialExpressionUnpack_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionUnpack_Statics::PropPointers),
	0,
	0x000020B4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionUnpack_Statics::Class_MetaDataParams), Z_Construct_UClass_UMaterialExpressionUnpack_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMaterialExpressionUnpack()
{
	if (!Z_Registration_Info_UClass_UMaterialExpressionUnpack.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionUnpack.OuterSingleton, Z_Construct_UClass_UMaterialExpressionUnpack_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMaterialExpressionUnpack.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionUnpack);
UMaterialExpressionUnpack::~UMaterialExpressionUnpack() {}
// ********** End Class UMaterialExpressionUnpack **************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_VoxelHelpers_Public_MaterialExpressionPack_h__Script_VoxelHelpers_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FMaterialPackInput::StaticStruct, Z_Construct_UScriptStruct_FMaterialPackInput_Statics::NewStructOps, TEXT("MaterialPackInput"), &Z_Registration_Info_UScriptStruct_FMaterialPackInput, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMaterialPackInput), 895431067U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialExpressionPack, UMaterialExpressionPack::StaticClass, TEXT("UMaterialExpressionPack"), &Z_Registration_Info_UClass_UMaterialExpressionPack, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionPack), 3068405593U) },
		{ Z_Construct_UClass_UMaterialExpressionUnpack, UMaterialExpressionUnpack::StaticClass, TEXT("UMaterialExpressionUnpack"), &Z_Registration_Info_UClass_UMaterialExpressionUnpack, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionUnpack), 3320324632U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_VoxelHelpers_Public_MaterialExpressionPack_h__Script_VoxelHelpers_565132542(TEXT("/Script/VoxelHelpers"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_VoxelHelpers_Public_MaterialExpressionPack_h__Script_VoxelHelpers_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_VoxelHelpers_Public_MaterialExpressionPack_h__Script_VoxelHelpers_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_VoxelHelpers_Public_MaterialExpressionPack_h__Script_VoxelHelpers_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_VoxelHelpers_Public_MaterialExpressionPack_h__Script_VoxelHelpers_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
