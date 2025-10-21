// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VoxelNodes/VoxelParameterNodes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeVoxelParameterNodes() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
UPackage* Z_Construct_UPackage__Script_VoxelGraph();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelExposedNode();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_BoolParameter();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_BoolParameter_NoRegister();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_ColorParameter();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_ColorParameter_NoRegister();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_FloatParameter();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_FloatParameter_NoRegister();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_IntParameter();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_IntParameter_NoRegister();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UVoxelNode_FloatParameter ************************************************
void UVoxelNode_FloatParameter::StaticRegisterNativesUVoxelNode_FloatParameter()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UVoxelNode_FloatParameter;
UClass* UVoxelNode_FloatParameter::GetPrivateStaticClass()
{
	using TClass = UVoxelNode_FloatParameter;
	if (!Z_Registration_Info_UClass_UVoxelNode_FloatParameter.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("VoxelNode_FloatParameter"),
			Z_Registration_Info_UClass_UVoxelNode_FloatParameter.InnerSingleton,
			StaticRegisterNativesUVoxelNode_FloatParameter,
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
	return Z_Registration_Info_UClass_UVoxelNode_FloatParameter.InnerSingleton;
}
UClass* Z_Construct_UClass_UVoxelNode_FloatParameter_NoRegister()
{
	return UVoxelNode_FloatParameter::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UVoxelNode_FloatParameter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Float parameter\n" },
#endif
		{ "DisplayName", "float parameter" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelNodes/VoxelParameterNodes.h" },
		{ "Keywords", "constant" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelParameterNodes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Float parameter" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelParameterNodes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelNode_FloatParameter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVoxelNode_FloatParameter_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelNode_FloatParameter, Value), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelNode_FloatParameter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelNode_FloatParameter_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_FloatParameter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UVoxelNode_FloatParameter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UVoxelExposedNode,
	(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_FloatParameter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelNode_FloatParameter_Statics::ClassParams = {
	&UVoxelNode_FloatParameter::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UVoxelNode_FloatParameter_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_FloatParameter_Statics::PropPointers),
	0,
	0x001010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_FloatParameter_Statics::Class_MetaDataParams), Z_Construct_UClass_UVoxelNode_FloatParameter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVoxelNode_FloatParameter()
{
	if (!Z_Registration_Info_UClass_UVoxelNode_FloatParameter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelNode_FloatParameter.OuterSingleton, Z_Construct_UClass_UVoxelNode_FloatParameter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVoxelNode_FloatParameter.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelNode_FloatParameter);
UVoxelNode_FloatParameter::~UVoxelNode_FloatParameter() {}
// ********** End Class UVoxelNode_FloatParameter **************************************************

// ********** Begin Class UVoxelNode_IntParameter **************************************************
void UVoxelNode_IntParameter::StaticRegisterNativesUVoxelNode_IntParameter()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UVoxelNode_IntParameter;
UClass* UVoxelNode_IntParameter::GetPrivateStaticClass()
{
	using TClass = UVoxelNode_IntParameter;
	if (!Z_Registration_Info_UClass_UVoxelNode_IntParameter.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("VoxelNode_IntParameter"),
			Z_Registration_Info_UClass_UVoxelNode_IntParameter.InnerSingleton,
			StaticRegisterNativesUVoxelNode_IntParameter,
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
	return Z_Registration_Info_UClass_UVoxelNode_IntParameter.InnerSingleton;
}
UClass* Z_Construct_UClass_UVoxelNode_IntParameter_NoRegister()
{
	return UVoxelNode_IntParameter::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UVoxelNode_IntParameter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Int parameter\n" },
#endif
		{ "DisplayName", "int parameter" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelNodes/VoxelParameterNodes.h" },
		{ "Keywords", "constant" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelParameterNodes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Int parameter" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelParameterNodes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelNode_IntParameter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UVoxelNode_IntParameter_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelNode_IntParameter, Value), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelNode_IntParameter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelNode_IntParameter_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_IntParameter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UVoxelNode_IntParameter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UVoxelExposedNode,
	(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_IntParameter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelNode_IntParameter_Statics::ClassParams = {
	&UVoxelNode_IntParameter::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UVoxelNode_IntParameter_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_IntParameter_Statics::PropPointers),
	0,
	0x001010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_IntParameter_Statics::Class_MetaDataParams), Z_Construct_UClass_UVoxelNode_IntParameter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVoxelNode_IntParameter()
{
	if (!Z_Registration_Info_UClass_UVoxelNode_IntParameter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelNode_IntParameter.OuterSingleton, Z_Construct_UClass_UVoxelNode_IntParameter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVoxelNode_IntParameter.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelNode_IntParameter);
UVoxelNode_IntParameter::~UVoxelNode_IntParameter() {}
// ********** End Class UVoxelNode_IntParameter ****************************************************

// ********** Begin Class UVoxelNode_ColorParameter ************************************************
void UVoxelNode_ColorParameter::StaticRegisterNativesUVoxelNode_ColorParameter()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UVoxelNode_ColorParameter;
UClass* UVoxelNode_ColorParameter::GetPrivateStaticClass()
{
	using TClass = UVoxelNode_ColorParameter;
	if (!Z_Registration_Info_UClass_UVoxelNode_ColorParameter.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("VoxelNode_ColorParameter"),
			Z_Registration_Info_UClass_UVoxelNode_ColorParameter.InnerSingleton,
			StaticRegisterNativesUVoxelNode_ColorParameter,
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
	return Z_Registration_Info_UClass_UVoxelNode_ColorParameter.InnerSingleton;
}
UClass* Z_Construct_UClass_UVoxelNode_ColorParameter_NoRegister()
{
	return UVoxelNode_ColorParameter::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UVoxelNode_ColorParameter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Color parameter\n" },
#endif
		{ "DisplayName", "color parameter" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelNodes/VoxelParameterNodes.h" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelParameterNodes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Color parameter" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelParameterNodes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelNode_ColorParameter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVoxelNode_ColorParameter_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelNode_ColorParameter, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Color_MetaData), NewProp_Color_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelNode_ColorParameter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelNode_ColorParameter_Statics::NewProp_Color,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_ColorParameter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UVoxelNode_ColorParameter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UVoxelExposedNode,
	(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_ColorParameter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelNode_ColorParameter_Statics::ClassParams = {
	&UVoxelNode_ColorParameter::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UVoxelNode_ColorParameter_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_ColorParameter_Statics::PropPointers),
	0,
	0x001010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_ColorParameter_Statics::Class_MetaDataParams), Z_Construct_UClass_UVoxelNode_ColorParameter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVoxelNode_ColorParameter()
{
	if (!Z_Registration_Info_UClass_UVoxelNode_ColorParameter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelNode_ColorParameter.OuterSingleton, Z_Construct_UClass_UVoxelNode_ColorParameter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVoxelNode_ColorParameter.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelNode_ColorParameter);
UVoxelNode_ColorParameter::~UVoxelNode_ColorParameter() {}
// ********** End Class UVoxelNode_ColorParameter **************************************************

// ********** Begin Class UVoxelNode_BoolParameter *************************************************
void UVoxelNode_BoolParameter::StaticRegisterNativesUVoxelNode_BoolParameter()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UVoxelNode_BoolParameter;
UClass* UVoxelNode_BoolParameter::GetPrivateStaticClass()
{
	using TClass = UVoxelNode_BoolParameter;
	if (!Z_Registration_Info_UClass_UVoxelNode_BoolParameter.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("VoxelNode_BoolParameter"),
			Z_Registration_Info_UClass_UVoxelNode_BoolParameter.InnerSingleton,
			StaticRegisterNativesUVoxelNode_BoolParameter,
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
	return Z_Registration_Info_UClass_UVoxelNode_BoolParameter.InnerSingleton;
}
UClass* Z_Construct_UClass_UVoxelNode_BoolParameter_NoRegister()
{
	return UVoxelNode_BoolParameter::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UVoxelNode_BoolParameter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Bool parameter\n" },
#endif
		{ "DisplayName", "bool parameter" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelNodes/VoxelParameterNodes.h" },
		{ "Keywords", "constant" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelParameterNodes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Bool parameter" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelParameterNodes.h" },
	};
#endif // WITH_METADATA
	static void NewProp_Value_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelNode_BoolParameter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UVoxelNode_BoolParameter_Statics::NewProp_Value_SetBit(void* Obj)
{
	((UVoxelNode_BoolParameter*)Obj)->Value = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVoxelNode_BoolParameter_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UVoxelNode_BoolParameter), &Z_Construct_UClass_UVoxelNode_BoolParameter_Statics::NewProp_Value_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelNode_BoolParameter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelNode_BoolParameter_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_BoolParameter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UVoxelNode_BoolParameter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UVoxelExposedNode,
	(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_BoolParameter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelNode_BoolParameter_Statics::ClassParams = {
	&UVoxelNode_BoolParameter::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UVoxelNode_BoolParameter_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_BoolParameter_Statics::PropPointers),
	0,
	0x001010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_BoolParameter_Statics::Class_MetaDataParams), Z_Construct_UClass_UVoxelNode_BoolParameter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVoxelNode_BoolParameter()
{
	if (!Z_Registration_Info_UClass_UVoxelNode_BoolParameter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelNode_BoolParameter.OuterSingleton, Z_Construct_UClass_UVoxelNode_BoolParameter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVoxelNode_BoolParameter.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelNode_BoolParameter);
UVoxelNode_BoolParameter::~UVoxelNode_BoolParameter() {}
// ********** End Class UVoxelNode_BoolParameter ***************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_VoxelGraph_Public_VoxelNodes_VoxelParameterNodes_h__Script_VoxelGraph_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UVoxelNode_FloatParameter, UVoxelNode_FloatParameter::StaticClass, TEXT("UVoxelNode_FloatParameter"), &Z_Registration_Info_UClass_UVoxelNode_FloatParameter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelNode_FloatParameter), 3430603377U) },
		{ Z_Construct_UClass_UVoxelNode_IntParameter, UVoxelNode_IntParameter::StaticClass, TEXT("UVoxelNode_IntParameter"), &Z_Registration_Info_UClass_UVoxelNode_IntParameter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelNode_IntParameter), 1091981254U) },
		{ Z_Construct_UClass_UVoxelNode_ColorParameter, UVoxelNode_ColorParameter::StaticClass, TEXT("UVoxelNode_ColorParameter"), &Z_Registration_Info_UClass_UVoxelNode_ColorParameter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelNode_ColorParameter), 2050487957U) },
		{ Z_Construct_UClass_UVoxelNode_BoolParameter, UVoxelNode_BoolParameter::StaticClass, TEXT("UVoxelNode_BoolParameter"), &Z_Registration_Info_UClass_UVoxelNode_BoolParameter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelNode_BoolParameter), 510724298U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_VoxelGraph_Public_VoxelNodes_VoxelParameterNodes_h__Script_VoxelGraph_3546808652(TEXT("/Script/VoxelGraph"),
	Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_VoxelGraph_Public_VoxelNodes_VoxelParameterNodes_h__Script_VoxelGraph_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_VoxelGraph_Public_VoxelNodes_VoxelParameterNodes_h__Script_VoxelGraph_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
