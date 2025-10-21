// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MaterialExpressionBlendMaterialAttributesBarycentric.h"
#include "Materials/MaterialExpression.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeMaterialExpressionBlendMaterialAttributesBarycentric() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExpressionInput();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMaterialAttributesInput();
UPackage* Z_Construct_UPackage__Script_VoxelHelpers();
VOXELHELPERS_API UClass* Z_Construct_UClass_UMaterialExpressionBlendMaterialAttributesBarycentric();
VOXELHELPERS_API UClass* Z_Construct_UClass_UMaterialExpressionBlendMaterialAttributesBarycentric_NoRegister();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UMaterialExpressionBlendMaterialAttributesBarycentric ********************
void UMaterialExpressionBlendMaterialAttributesBarycentric::StaticRegisterNativesUMaterialExpressionBlendMaterialAttributesBarycentric()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UMaterialExpressionBlendMaterialAttributesBarycentric;
UClass* UMaterialExpressionBlendMaterialAttributesBarycentric::GetPrivateStaticClass()
{
	using TClass = UMaterialExpressionBlendMaterialAttributesBarycentric;
	if (!Z_Registration_Info_UClass_UMaterialExpressionBlendMaterialAttributesBarycentric.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("MaterialExpressionBlendMaterialAttributesBarycentric"),
			Z_Registration_Info_UClass_UMaterialExpressionBlendMaterialAttributesBarycentric.InnerSingleton,
			StaticRegisterNativesUMaterialExpressionBlendMaterialAttributesBarycentric,
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
	return Z_Registration_Info_UClass_UMaterialExpressionBlendMaterialAttributesBarycentric.InnerSingleton;
}
UClass* Z_Construct_UClass_UMaterialExpressionBlendMaterialAttributesBarycentric_NoRegister()
{
	return UMaterialExpressionBlendMaterialAttributesBarycentric::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UMaterialExpressionBlendMaterialAttributesBarycentric_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Returns A * AlphaA + B * AlphaB + C * (1 - AlphaA - AlphaB)\n" },
#endif
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "MaterialExpressionBlendMaterialAttributesBarycentric.h" },
		{ "ModuleRelativePath", "Public/MaterialExpressionBlendMaterialAttributesBarycentric.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns A * AlphaA + B * AlphaB + C * (1 - AlphaA - AlphaB)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[] = {
		{ "ModuleRelativePath", "Public/MaterialExpressionBlendMaterialAttributesBarycentric.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_B_MetaData[] = {
		{ "ModuleRelativePath", "Public/MaterialExpressionBlendMaterialAttributesBarycentric.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_C_MetaData[] = {
		{ "ModuleRelativePath", "Public/MaterialExpressionBlendMaterialAttributesBarycentric.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AlphaA_MetaData[] = {
		{ "ModuleRelativePath", "Public/MaterialExpressionBlendMaterialAttributesBarycentric.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AlphaB_MetaData[] = {
		{ "ModuleRelativePath", "Public/MaterialExpressionBlendMaterialAttributesBarycentric.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_A;
	static const UECodeGen_Private::FStructPropertyParams NewProp_B;
	static const UECodeGen_Private::FStructPropertyParams NewProp_C;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AlphaA;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AlphaB;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionBlendMaterialAttributesBarycentric>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionBlendMaterialAttributesBarycentric_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionBlendMaterialAttributesBarycentric, A), Z_Construct_UScriptStruct_FMaterialAttributesInput, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_A_MetaData), NewProp_A_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionBlendMaterialAttributesBarycentric_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionBlendMaterialAttributesBarycentric, B), Z_Construct_UScriptStruct_FMaterialAttributesInput, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_B_MetaData), NewProp_B_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionBlendMaterialAttributesBarycentric_Statics::NewProp_C = { "C", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionBlendMaterialAttributesBarycentric, C), Z_Construct_UScriptStruct_FMaterialAttributesInput, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_C_MetaData), NewProp_C_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionBlendMaterialAttributesBarycentric_Statics::NewProp_AlphaA = { "AlphaA", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionBlendMaterialAttributesBarycentric, AlphaA), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AlphaA_MetaData), NewProp_AlphaA_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionBlendMaterialAttributesBarycentric_Statics::NewProp_AlphaB = { "AlphaB", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionBlendMaterialAttributesBarycentric, AlphaB), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AlphaB_MetaData), NewProp_AlphaB_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionBlendMaterialAttributesBarycentric_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionBlendMaterialAttributesBarycentric_Statics::NewProp_A,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionBlendMaterialAttributesBarycentric_Statics::NewProp_B,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionBlendMaterialAttributesBarycentric_Statics::NewProp_C,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionBlendMaterialAttributesBarycentric_Statics::NewProp_AlphaA,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionBlendMaterialAttributesBarycentric_Statics::NewProp_AlphaB,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionBlendMaterialAttributesBarycentric_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMaterialExpressionBlendMaterialAttributesBarycentric_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
	(UObject* (*)())Z_Construct_UPackage__Script_VoxelHelpers,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionBlendMaterialAttributesBarycentric_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionBlendMaterialAttributesBarycentric_Statics::ClassParams = {
	&UMaterialExpressionBlendMaterialAttributesBarycentric::StaticClass,
	"MaterialExpressions",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMaterialExpressionBlendMaterialAttributesBarycentric_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionBlendMaterialAttributesBarycentric_Statics::PropPointers),
	0,
	0x000820B4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionBlendMaterialAttributesBarycentric_Statics::Class_MetaDataParams), Z_Construct_UClass_UMaterialExpressionBlendMaterialAttributesBarycentric_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMaterialExpressionBlendMaterialAttributesBarycentric()
{
	if (!Z_Registration_Info_UClass_UMaterialExpressionBlendMaterialAttributesBarycentric.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionBlendMaterialAttributesBarycentric.OuterSingleton, Z_Construct_UClass_UMaterialExpressionBlendMaterialAttributesBarycentric_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMaterialExpressionBlendMaterialAttributesBarycentric.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionBlendMaterialAttributesBarycentric);
UMaterialExpressionBlendMaterialAttributesBarycentric::~UMaterialExpressionBlendMaterialAttributesBarycentric() {}
// ********** End Class UMaterialExpressionBlendMaterialAttributesBarycentric **********************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_VoxelHelpers_Public_MaterialExpressionBlendMaterialAttributesBarycentric_h__Script_VoxelHelpers_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialExpressionBlendMaterialAttributesBarycentric, UMaterialExpressionBlendMaterialAttributesBarycentric::StaticClass, TEXT("UMaterialExpressionBlendMaterialAttributesBarycentric"), &Z_Registration_Info_UClass_UMaterialExpressionBlendMaterialAttributesBarycentric, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionBlendMaterialAttributesBarycentric), 2270027858U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_VoxelHelpers_Public_MaterialExpressionBlendMaterialAttributesBarycentric_h__Script_VoxelHelpers_4190796041(TEXT("/Script/VoxelHelpers"),
	Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_VoxelHelpers_Public_MaterialExpressionBlendMaterialAttributesBarycentric_h__Script_VoxelHelpers_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_VoxelHelpers_Public_MaterialExpressionBlendMaterialAttributesBarycentric_h__Script_VoxelHelpers_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
