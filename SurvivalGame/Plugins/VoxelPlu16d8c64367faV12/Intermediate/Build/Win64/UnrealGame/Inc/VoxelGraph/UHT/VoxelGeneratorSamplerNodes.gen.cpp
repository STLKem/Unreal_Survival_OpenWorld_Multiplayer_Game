// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VoxelGraph/Public/VoxelNodes/VoxelGeneratorSamplerNodes.h"
#include "Voxel/Public/VoxelGenerators/VoxelGeneratorPicker.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeVoxelGeneratorSamplerNodes() {}

// ********** Begin Cross Module References ********************************************************
UPackage* Z_Construct_UPackage__Script_VoxelGraph();
VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelGeneratorPicker();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelExposedNode();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_GeneratorSamplerBase();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_GeneratorSamplerBase_NoRegister();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_GetGeneratorCustomOutput();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_GetGeneratorCustomOutput_NoRegister();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_GetGeneratorMaterial();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_GetGeneratorMaterial_NoRegister();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_GetGeneratorValue();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_GetGeneratorValue_NoRegister();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_SingleGeneratorSamplerBase();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_SingleGeneratorSamplerBase_NoRegister();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UVoxelNode_GeneratorSamplerBase ******************************************
void UVoxelNode_GeneratorSamplerBase::StaticRegisterNativesUVoxelNode_GeneratorSamplerBase()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UVoxelNode_GeneratorSamplerBase;
UClass* UVoxelNode_GeneratorSamplerBase::GetPrivateStaticClass()
{
	using TClass = UVoxelNode_GeneratorSamplerBase;
	if (!Z_Registration_Info_UClass_UVoxelNode_GeneratorSamplerBase.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("VoxelNode_GeneratorSamplerBase"),
			Z_Registration_Info_UClass_UVoxelNode_GeneratorSamplerBase.InnerSingleton,
			StaticRegisterNativesUVoxelNode_GeneratorSamplerBase,
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
	return Z_Registration_Info_UClass_UVoxelNode_GeneratorSamplerBase.InnerSingleton;
}
UClass* Z_Construct_UClass_UVoxelNode_GeneratorSamplerBase_NoRegister()
{
	return UVoxelNode_GeneratorSamplerBase::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UVoxelNode_GeneratorSamplerBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Category", "Generator" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelNodes/VoxelGeneratorSamplerNodes.h" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelGeneratorSamplerNodes.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelNode_GeneratorSamplerBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UVoxelNode_GeneratorSamplerBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UVoxelExposedNode,
	(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_GeneratorSamplerBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelNode_GeneratorSamplerBase_Statics::ClassParams = {
	&UVoxelNode_GeneratorSamplerBase::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001010A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_GeneratorSamplerBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UVoxelNode_GeneratorSamplerBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVoxelNode_GeneratorSamplerBase()
{
	if (!Z_Registration_Info_UClass_UVoxelNode_GeneratorSamplerBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelNode_GeneratorSamplerBase.OuterSingleton, Z_Construct_UClass_UVoxelNode_GeneratorSamplerBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVoxelNode_GeneratorSamplerBase.OuterSingleton;
}
UVoxelNode_GeneratorSamplerBase::UVoxelNode_GeneratorSamplerBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelNode_GeneratorSamplerBase);
UVoxelNode_GeneratorSamplerBase::~UVoxelNode_GeneratorSamplerBase() {}
// ********** End Class UVoxelNode_GeneratorSamplerBase ********************************************

// ********** Begin Class UVoxelNode_SingleGeneratorSamplerBase ************************************
void UVoxelNode_SingleGeneratorSamplerBase::StaticRegisterNativesUVoxelNode_SingleGeneratorSamplerBase()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UVoxelNode_SingleGeneratorSamplerBase;
UClass* UVoxelNode_SingleGeneratorSamplerBase::GetPrivateStaticClass()
{
	using TClass = UVoxelNode_SingleGeneratorSamplerBase;
	if (!Z_Registration_Info_UClass_UVoxelNode_SingleGeneratorSamplerBase.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("VoxelNode_SingleGeneratorSamplerBase"),
			Z_Registration_Info_UClass_UVoxelNode_SingleGeneratorSamplerBase.InnerSingleton,
			StaticRegisterNativesUVoxelNode_SingleGeneratorSamplerBase,
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
	return Z_Registration_Info_UClass_UVoxelNode_SingleGeneratorSamplerBase.InnerSingleton;
}
UClass* Z_Construct_UClass_UVoxelNode_SingleGeneratorSamplerBase_NoRegister()
{
	return UVoxelNode_SingleGeneratorSamplerBase::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UVoxelNode_SingleGeneratorSamplerBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelNodes/VoxelGeneratorSamplerNodes.h" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelGeneratorSamplerNodes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Generator_MetaData[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelGeneratorSamplerNodes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Generator;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelNode_SingleGeneratorSamplerBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVoxelNode_SingleGeneratorSamplerBase_Statics::NewProp_Generator = { "Generator", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelNode_SingleGeneratorSamplerBase, Generator), Z_Construct_UScriptStruct_FVoxelGeneratorPicker, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Generator_MetaData), NewProp_Generator_MetaData) }; // 3276742823
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelNode_SingleGeneratorSamplerBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelNode_SingleGeneratorSamplerBase_Statics::NewProp_Generator,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_SingleGeneratorSamplerBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UVoxelNode_SingleGeneratorSamplerBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UVoxelNode_GeneratorSamplerBase,
	(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_SingleGeneratorSamplerBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelNode_SingleGeneratorSamplerBase_Statics::ClassParams = {
	&UVoxelNode_SingleGeneratorSamplerBase::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UVoxelNode_SingleGeneratorSamplerBase_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_SingleGeneratorSamplerBase_Statics::PropPointers),
	0,
	0x001010A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_SingleGeneratorSamplerBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UVoxelNode_SingleGeneratorSamplerBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVoxelNode_SingleGeneratorSamplerBase()
{
	if (!Z_Registration_Info_UClass_UVoxelNode_SingleGeneratorSamplerBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelNode_SingleGeneratorSamplerBase.OuterSingleton, Z_Construct_UClass_UVoxelNode_SingleGeneratorSamplerBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVoxelNode_SingleGeneratorSamplerBase.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelNode_SingleGeneratorSamplerBase);
UVoxelNode_SingleGeneratorSamplerBase::~UVoxelNode_SingleGeneratorSamplerBase() {}
// ********** End Class UVoxelNode_SingleGeneratorSamplerBase **************************************

// ********** Begin Class UVoxelNode_GetGeneratorValue *********************************************
void UVoxelNode_GetGeneratorValue::StaticRegisterNativesUVoxelNode_GetGeneratorValue()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UVoxelNode_GetGeneratorValue;
UClass* UVoxelNode_GetGeneratorValue::GetPrivateStaticClass()
{
	using TClass = UVoxelNode_GetGeneratorValue;
	if (!Z_Registration_Info_UClass_UVoxelNode_GetGeneratorValue.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("VoxelNode_GetGeneratorValue"),
			Z_Registration_Info_UClass_UVoxelNode_GetGeneratorValue.InnerSingleton,
			StaticRegisterNativesUVoxelNode_GetGeneratorValue,
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
	return Z_Registration_Info_UClass_UVoxelNode_GetGeneratorValue.InnerSingleton;
}
UClass* Z_Construct_UClass_UVoxelNode_GetGeneratorValue_NoRegister()
{
	return UVoxelNode_GetGeneratorValue::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UVoxelNode_GetGeneratorValue_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "DisplayName", "Get Generator Value" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelNodes/VoxelGeneratorSamplerNodes.h" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelGeneratorSamplerNodes.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelNode_GetGeneratorValue>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UVoxelNode_GetGeneratorValue_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UVoxelNode_SingleGeneratorSamplerBase,
	(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_GetGeneratorValue_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelNode_GetGeneratorValue_Statics::ClassParams = {
	&UVoxelNode_GetGeneratorValue::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_GetGeneratorValue_Statics::Class_MetaDataParams), Z_Construct_UClass_UVoxelNode_GetGeneratorValue_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVoxelNode_GetGeneratorValue()
{
	if (!Z_Registration_Info_UClass_UVoxelNode_GetGeneratorValue.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelNode_GetGeneratorValue.OuterSingleton, Z_Construct_UClass_UVoxelNode_GetGeneratorValue_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVoxelNode_GetGeneratorValue.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelNode_GetGeneratorValue);
UVoxelNode_GetGeneratorValue::~UVoxelNode_GetGeneratorValue() {}
// ********** End Class UVoxelNode_GetGeneratorValue ***********************************************

// ********** Begin Class UVoxelNode_GetGeneratorMaterial ******************************************
void UVoxelNode_GetGeneratorMaterial::StaticRegisterNativesUVoxelNode_GetGeneratorMaterial()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UVoxelNode_GetGeneratorMaterial;
UClass* UVoxelNode_GetGeneratorMaterial::GetPrivateStaticClass()
{
	using TClass = UVoxelNode_GetGeneratorMaterial;
	if (!Z_Registration_Info_UClass_UVoxelNode_GetGeneratorMaterial.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("VoxelNode_GetGeneratorMaterial"),
			Z_Registration_Info_UClass_UVoxelNode_GetGeneratorMaterial.InnerSingleton,
			StaticRegisterNativesUVoxelNode_GetGeneratorMaterial,
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
	return Z_Registration_Info_UClass_UVoxelNode_GetGeneratorMaterial.InnerSingleton;
}
UClass* Z_Construct_UClass_UVoxelNode_GetGeneratorMaterial_NoRegister()
{
	return UVoxelNode_GetGeneratorMaterial::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UVoxelNode_GetGeneratorMaterial_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "DisplayName", "Get Generator Material" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelNodes/VoxelGeneratorSamplerNodes.h" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelGeneratorSamplerNodes.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelNode_GetGeneratorMaterial>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UVoxelNode_GetGeneratorMaterial_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UVoxelNode_SingleGeneratorSamplerBase,
	(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_GetGeneratorMaterial_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelNode_GetGeneratorMaterial_Statics::ClassParams = {
	&UVoxelNode_GetGeneratorMaterial::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_GetGeneratorMaterial_Statics::Class_MetaDataParams), Z_Construct_UClass_UVoxelNode_GetGeneratorMaterial_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVoxelNode_GetGeneratorMaterial()
{
	if (!Z_Registration_Info_UClass_UVoxelNode_GetGeneratorMaterial.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelNode_GetGeneratorMaterial.OuterSingleton, Z_Construct_UClass_UVoxelNode_GetGeneratorMaterial_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVoxelNode_GetGeneratorMaterial.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelNode_GetGeneratorMaterial);
UVoxelNode_GetGeneratorMaterial::~UVoxelNode_GetGeneratorMaterial() {}
// ********** End Class UVoxelNode_GetGeneratorMaterial ********************************************

// ********** Begin Class UVoxelNode_GetGeneratorCustomOutput **************************************
void UVoxelNode_GetGeneratorCustomOutput::StaticRegisterNativesUVoxelNode_GetGeneratorCustomOutput()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UVoxelNode_GetGeneratorCustomOutput;
UClass* UVoxelNode_GetGeneratorCustomOutput::GetPrivateStaticClass()
{
	using TClass = UVoxelNode_GetGeneratorCustomOutput;
	if (!Z_Registration_Info_UClass_UVoxelNode_GetGeneratorCustomOutput.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("VoxelNode_GetGeneratorCustomOutput"),
			Z_Registration_Info_UClass_UVoxelNode_GetGeneratorCustomOutput.InnerSingleton,
			StaticRegisterNativesUVoxelNode_GetGeneratorCustomOutput,
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
	return Z_Registration_Info_UClass_UVoxelNode_GetGeneratorCustomOutput.InnerSingleton;
}
UClass* Z_Construct_UClass_UVoxelNode_GetGeneratorCustomOutput_NoRegister()
{
	return UVoxelNode_GetGeneratorCustomOutput::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UVoxelNode_GetGeneratorCustomOutput_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "DisplayName", "Get Generator Custom Output" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelNodes/VoxelGeneratorSamplerNodes.h" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelGeneratorSamplerNodes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OutputName_MetaData[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelGeneratorSamplerNodes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_OutputName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelNode_GetGeneratorCustomOutput>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UVoxelNode_GetGeneratorCustomOutput_Statics::NewProp_OutputName = { "OutputName", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelNode_GetGeneratorCustomOutput, OutputName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutputName_MetaData), NewProp_OutputName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelNode_GetGeneratorCustomOutput_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelNode_GetGeneratorCustomOutput_Statics::NewProp_OutputName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_GetGeneratorCustomOutput_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UVoxelNode_GetGeneratorCustomOutput_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UVoxelNode_SingleGeneratorSamplerBase,
	(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_GetGeneratorCustomOutput_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelNode_GetGeneratorCustomOutput_Statics::ClassParams = {
	&UVoxelNode_GetGeneratorCustomOutput::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UVoxelNode_GetGeneratorCustomOutput_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_GetGeneratorCustomOutput_Statics::PropPointers),
	0,
	0x001010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_GetGeneratorCustomOutput_Statics::Class_MetaDataParams), Z_Construct_UClass_UVoxelNode_GetGeneratorCustomOutput_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVoxelNode_GetGeneratorCustomOutput()
{
	if (!Z_Registration_Info_UClass_UVoxelNode_GetGeneratorCustomOutput.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelNode_GetGeneratorCustomOutput.OuterSingleton, Z_Construct_UClass_UVoxelNode_GetGeneratorCustomOutput_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVoxelNode_GetGeneratorCustomOutput.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelNode_GetGeneratorCustomOutput);
UVoxelNode_GetGeneratorCustomOutput::~UVoxelNode_GetGeneratorCustomOutput() {}
// ********** End Class UVoxelNode_GetGeneratorCustomOutput ****************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_VoxelGraph_Public_VoxelNodes_VoxelGeneratorSamplerNodes_h__Script_VoxelGraph_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UVoxelNode_GeneratorSamplerBase, UVoxelNode_GeneratorSamplerBase::StaticClass, TEXT("UVoxelNode_GeneratorSamplerBase"), &Z_Registration_Info_UClass_UVoxelNode_GeneratorSamplerBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelNode_GeneratorSamplerBase), 4148080554U) },
		{ Z_Construct_UClass_UVoxelNode_SingleGeneratorSamplerBase, UVoxelNode_SingleGeneratorSamplerBase::StaticClass, TEXT("UVoxelNode_SingleGeneratorSamplerBase"), &Z_Registration_Info_UClass_UVoxelNode_SingleGeneratorSamplerBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelNode_SingleGeneratorSamplerBase), 2593383789U) },
		{ Z_Construct_UClass_UVoxelNode_GetGeneratorValue, UVoxelNode_GetGeneratorValue::StaticClass, TEXT("UVoxelNode_GetGeneratorValue"), &Z_Registration_Info_UClass_UVoxelNode_GetGeneratorValue, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelNode_GetGeneratorValue), 2409980672U) },
		{ Z_Construct_UClass_UVoxelNode_GetGeneratorMaterial, UVoxelNode_GetGeneratorMaterial::StaticClass, TEXT("UVoxelNode_GetGeneratorMaterial"), &Z_Registration_Info_UClass_UVoxelNode_GetGeneratorMaterial, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelNode_GetGeneratorMaterial), 1889816239U) },
		{ Z_Construct_UClass_UVoxelNode_GetGeneratorCustomOutput, UVoxelNode_GetGeneratorCustomOutput::StaticClass, TEXT("UVoxelNode_GetGeneratorCustomOutput"), &Z_Registration_Info_UClass_UVoxelNode_GetGeneratorCustomOutput, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelNode_GetGeneratorCustomOutput), 889077016U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_VoxelGraph_Public_VoxelNodes_VoxelGeneratorSamplerNodes_h__Script_VoxelGraph_1089608506(TEXT("/Script/VoxelGraph"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_VoxelGraph_Public_VoxelNodes_VoxelGeneratorSamplerNodes_h__Script_VoxelGraph_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_VoxelGraph_Public_VoxelNodes_VoxelGeneratorSamplerNodes_h__Script_VoxelGraph_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
