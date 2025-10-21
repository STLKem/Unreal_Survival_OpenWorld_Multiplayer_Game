// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VoxelNodes/VoxelLocalVariables.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeVoxelLocalVariables() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
UPackage* Z_Construct_UPackage__Script_VoxelGraph();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelLocalVariableBase();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelLocalVariableBase_NoRegister();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelLocalVariableDeclaration();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelLocalVariableDeclaration_NoRegister();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelLocalVariableUsage();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelLocalVariableUsage_NoRegister();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode();
VOXELGRAPH_API UEnum* Z_Construct_UEnum_VoxelGraph_EVoxelPortalNodePinCategory();
VOXELGRAPH_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelPortalNodeSelector();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UVoxelLocalVariableBase **************************************************
void UVoxelLocalVariableBase::StaticRegisterNativesUVoxelLocalVariableBase()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UVoxelLocalVariableBase;
UClass* UVoxelLocalVariableBase::GetPrivateStaticClass()
{
	using TClass = UVoxelLocalVariableBase;
	if (!Z_Registration_Info_UClass_UVoxelLocalVariableBase.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("VoxelLocalVariableBase"),
			Z_Registration_Info_UClass_UVoxelLocalVariableBase.InnerSingleton,
			StaticRegisterNativesUVoxelLocalVariableBase,
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
	return Z_Registration_Info_UClass_UVoxelLocalVariableBase.InnerSingleton;
}
UClass* Z_Construct_UClass_UVoxelLocalVariableBase_NoRegister()
{
	return UVoxelLocalVariableBase::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UVoxelLocalVariableBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelNodes/VoxelLocalVariables.h" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelLocalVariables.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelLocalVariableBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UVoxelLocalVariableBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UVoxelNode,
	(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelLocalVariableBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelLocalVariableBase_Statics::ClassParams = {
	&UVoxelLocalVariableBase::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelLocalVariableBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UVoxelLocalVariableBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVoxelLocalVariableBase()
{
	if (!Z_Registration_Info_UClass_UVoxelLocalVariableBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelLocalVariableBase.OuterSingleton, Z_Construct_UClass_UVoxelLocalVariableBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVoxelLocalVariableBase.OuterSingleton;
}
UVoxelLocalVariableBase::UVoxelLocalVariableBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelLocalVariableBase);
UVoxelLocalVariableBase::~UVoxelLocalVariableBase() {}
// ********** End Class UVoxelLocalVariableBase ****************************************************

// ********** Begin Enum EVoxelPortalNodePinCategory ***********************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EVoxelPortalNodePinCategory;
static UEnum* EVoxelPortalNodePinCategory_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EVoxelPortalNodePinCategory.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EVoxelPortalNodePinCategory.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_VoxelGraph_EVoxelPortalNodePinCategory, (UObject*)Z_Construct_UPackage__Script_VoxelGraph(), TEXT("EVoxelPortalNodePinCategory"));
	}
	return Z_Registration_Info_UEnum_EVoxelPortalNodePinCategory.OuterSingleton;
}
template<> VOXELGRAPH_API UEnum* StaticEnum<EVoxelPortalNodePinCategory>()
{
	return EVoxelPortalNodePinCategory_StaticEnum();
}
struct Z_Construct_UEnum_VoxelGraph_EVoxelPortalNodePinCategory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Boolean.Name", "EVoxelPortalNodePinCategory::Boolean" },
		{ "Color.Name", "EVoxelPortalNodePinCategory::Color" },
		{ "Float.Name", "EVoxelPortalNodePinCategory::Float" },
		{ "Int.Name", "EVoxelPortalNodePinCategory::Int" },
		{ "Material.Name", "EVoxelPortalNodePinCategory::Material" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelLocalVariables.h" },
		{ "Seed.Name", "EVoxelPortalNodePinCategory::Seed" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EVoxelPortalNodePinCategory::Boolean", (int64)EVoxelPortalNodePinCategory::Boolean },
		{ "EVoxelPortalNodePinCategory::Int", (int64)EVoxelPortalNodePinCategory::Int },
		{ "EVoxelPortalNodePinCategory::Float", (int64)EVoxelPortalNodePinCategory::Float },
		{ "EVoxelPortalNodePinCategory::Material", (int64)EVoxelPortalNodePinCategory::Material },
		{ "EVoxelPortalNodePinCategory::Color", (int64)EVoxelPortalNodePinCategory::Color },
		{ "EVoxelPortalNodePinCategory::Seed", (int64)EVoxelPortalNodePinCategory::Seed },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_VoxelGraph_EVoxelPortalNodePinCategory_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_VoxelGraph,
	nullptr,
	"EVoxelPortalNodePinCategory",
	"EVoxelPortalNodePinCategory",
	Z_Construct_UEnum_VoxelGraph_EVoxelPortalNodePinCategory_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_VoxelGraph_EVoxelPortalNodePinCategory_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_VoxelGraph_EVoxelPortalNodePinCategory_Statics::Enum_MetaDataParams), Z_Construct_UEnum_VoxelGraph_EVoxelPortalNodePinCategory_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_VoxelGraph_EVoxelPortalNodePinCategory()
{
	if (!Z_Registration_Info_UEnum_EVoxelPortalNodePinCategory.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EVoxelPortalNodePinCategory.InnerSingleton, Z_Construct_UEnum_VoxelGraph_EVoxelPortalNodePinCategory_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EVoxelPortalNodePinCategory.InnerSingleton;
}
// ********** End Enum EVoxelPortalNodePinCategory *************************************************

// ********** Begin ScriptStruct FVoxelPortalNodeSelector ******************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FVoxelPortalNodeSelector;
class UScriptStruct* FVoxelPortalNodeSelector::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FVoxelPortalNodeSelector.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FVoxelPortalNodeSelector.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVoxelPortalNodeSelector, (UObject*)Z_Construct_UPackage__Script_VoxelGraph(), TEXT("VoxelPortalNodeSelector"));
	}
	return Z_Registration_Info_UScriptStruct_FVoxelPortalNodeSelector.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FVoxelPortalNodeSelector_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelLocalVariables.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[] = {
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelLocalVariables.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_Input;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVoxelPortalNodeSelector>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FVoxelPortalNodeSelector_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVoxelPortalNodeSelector, Input), Z_Construct_UClass_UVoxelLocalVariableDeclaration_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Input_MetaData), NewProp_Input_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVoxelPortalNodeSelector_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelPortalNodeSelector_Statics::NewProp_Input,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelPortalNodeSelector_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVoxelPortalNodeSelector_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
	nullptr,
	&NewStructOps,
	"VoxelPortalNodeSelector",
	Z_Construct_UScriptStruct_FVoxelPortalNodeSelector_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelPortalNodeSelector_Statics::PropPointers),
	sizeof(FVoxelPortalNodeSelector),
	alignof(FVoxelPortalNodeSelector),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelPortalNodeSelector_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVoxelPortalNodeSelector_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FVoxelPortalNodeSelector()
{
	if (!Z_Registration_Info_UScriptStruct_FVoxelPortalNodeSelector.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FVoxelPortalNodeSelector.InnerSingleton, Z_Construct_UScriptStruct_FVoxelPortalNodeSelector_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FVoxelPortalNodeSelector.InnerSingleton;
}
// ********** End ScriptStruct FVoxelPortalNodeSelector ********************************************

// ********** Begin Class UVoxelLocalVariableDeclaration *******************************************
void UVoxelLocalVariableDeclaration::StaticRegisterNativesUVoxelLocalVariableDeclaration()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UVoxelLocalVariableDeclaration;
UClass* UVoxelLocalVariableDeclaration::GetPrivateStaticClass()
{
	using TClass = UVoxelLocalVariableDeclaration;
	if (!Z_Registration_Info_UClass_UVoxelLocalVariableDeclaration.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("VoxelLocalVariableDeclaration"),
			Z_Registration_Info_UClass_UVoxelLocalVariableDeclaration.InnerSingleton,
			StaticRegisterNativesUVoxelLocalVariableDeclaration,
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
	return Z_Registration_Info_UClass_UVoxelLocalVariableDeclaration.InnerSingleton;
}
UClass* Z_Construct_UClass_UVoxelLocalVariableDeclaration_NoRegister()
{
	return UVoxelLocalVariableDeclaration::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UVoxelLocalVariableDeclaration_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelNodes/VoxelLocalVariables.h" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelLocalVariables.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelLocalVariables.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Category_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelLocalVariables.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VariableGuid_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The variable GUID, to support copy across graphs\n" },
#endif
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelLocalVariables.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The variable GUID, to support copy across graphs" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Category_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Category;
	static const UECodeGen_Private::FStructPropertyParams NewProp_VariableGuid;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelLocalVariableDeclaration>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UVoxelLocalVariableDeclaration_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelLocalVariableDeclaration, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UVoxelLocalVariableDeclaration_Statics::NewProp_Category_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UVoxelLocalVariableDeclaration_Statics::NewProp_Category = { "Category", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelLocalVariableDeclaration, Category), Z_Construct_UEnum_VoxelGraph_EVoxelPortalNodePinCategory, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Category_MetaData), NewProp_Category_MetaData) }; // 516649964
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVoxelLocalVariableDeclaration_Statics::NewProp_VariableGuid = { "VariableGuid", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelLocalVariableDeclaration, VariableGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VariableGuid_MetaData), NewProp_VariableGuid_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelLocalVariableDeclaration_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelLocalVariableDeclaration_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelLocalVariableDeclaration_Statics::NewProp_Category_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelLocalVariableDeclaration_Statics::NewProp_Category,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelLocalVariableDeclaration_Statics::NewProp_VariableGuid,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelLocalVariableDeclaration_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UVoxelLocalVariableDeclaration_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UVoxelLocalVariableBase,
	(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelLocalVariableDeclaration_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelLocalVariableDeclaration_Statics::ClassParams = {
	&UVoxelLocalVariableDeclaration::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UVoxelLocalVariableDeclaration_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelLocalVariableDeclaration_Statics::PropPointers),
	0,
	0x001012A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelLocalVariableDeclaration_Statics::Class_MetaDataParams), Z_Construct_UClass_UVoxelLocalVariableDeclaration_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVoxelLocalVariableDeclaration()
{
	if (!Z_Registration_Info_UClass_UVoxelLocalVariableDeclaration.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelLocalVariableDeclaration.OuterSingleton, Z_Construct_UClass_UVoxelLocalVariableDeclaration_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVoxelLocalVariableDeclaration.OuterSingleton;
}
UVoxelLocalVariableDeclaration::UVoxelLocalVariableDeclaration(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelLocalVariableDeclaration);
UVoxelLocalVariableDeclaration::~UVoxelLocalVariableDeclaration() {}
// ********** End Class UVoxelLocalVariableDeclaration *********************************************

// ********** Begin Class UVoxelLocalVariableUsage *************************************************
void UVoxelLocalVariableUsage::StaticRegisterNativesUVoxelLocalVariableUsage()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UVoxelLocalVariableUsage;
UClass* UVoxelLocalVariableUsage::GetPrivateStaticClass()
{
	using TClass = UVoxelLocalVariableUsage;
	if (!Z_Registration_Info_UClass_UVoxelLocalVariableUsage.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("VoxelLocalVariableUsage"),
			Z_Registration_Info_UClass_UVoxelLocalVariableUsage.InnerSingleton,
			StaticRegisterNativesUVoxelLocalVariableUsage,
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
	return Z_Registration_Info_UClass_UVoxelLocalVariableUsage.InnerSingleton;
}
UClass* Z_Construct_UClass_UVoxelLocalVariableUsage_NoRegister()
{
	return UVoxelLocalVariableUsage::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UVoxelLocalVariableUsage_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelNodes/VoxelLocalVariables.h" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelLocalVariables.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Selector_MetaData[] = {
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelLocalVariables.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Declaration_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The declaration this node is linked to\n" },
#endif
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelLocalVariables.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The declaration this node is linked to" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeclarationGuid_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The variable GUID, to support copy across graphs\n" },
#endif
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelLocalVariables.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The variable GUID, to support copy across graphs" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Selector;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Declaration;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DeclarationGuid;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelLocalVariableUsage>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVoxelLocalVariableUsage_Statics::NewProp_Selector = { "Selector", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelLocalVariableUsage, Selector_DEPRECATED), Z_Construct_UScriptStruct_FVoxelPortalNodeSelector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Selector_MetaData), NewProp_Selector_MetaData) }; // 782538474
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVoxelLocalVariableUsage_Statics::NewProp_Declaration = { "Declaration", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelLocalVariableUsage, Declaration), Z_Construct_UClass_UVoxelLocalVariableDeclaration_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Declaration_MetaData), NewProp_Declaration_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVoxelLocalVariableUsage_Statics::NewProp_DeclarationGuid = { "DeclarationGuid", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelLocalVariableUsage, DeclarationGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeclarationGuid_MetaData), NewProp_DeclarationGuid_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelLocalVariableUsage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelLocalVariableUsage_Statics::NewProp_Selector,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelLocalVariableUsage_Statics::NewProp_Declaration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelLocalVariableUsage_Statics::NewProp_DeclarationGuid,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelLocalVariableUsage_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UVoxelLocalVariableUsage_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UVoxelLocalVariableBase,
	(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelLocalVariableUsage_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelLocalVariableUsage_Statics::ClassParams = {
	&UVoxelLocalVariableUsage::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UVoxelLocalVariableUsage_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelLocalVariableUsage_Statics::PropPointers),
	0,
	0x001012A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelLocalVariableUsage_Statics::Class_MetaDataParams), Z_Construct_UClass_UVoxelLocalVariableUsage_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVoxelLocalVariableUsage()
{
	if (!Z_Registration_Info_UClass_UVoxelLocalVariableUsage.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelLocalVariableUsage.OuterSingleton, Z_Construct_UClass_UVoxelLocalVariableUsage_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVoxelLocalVariableUsage.OuterSingleton;
}
UVoxelLocalVariableUsage::UVoxelLocalVariableUsage(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelLocalVariableUsage);
UVoxelLocalVariableUsage::~UVoxelLocalVariableUsage() {}
// ********** End Class UVoxelLocalVariableUsage ***************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_VoxelGraph_Public_VoxelNodes_VoxelLocalVariables_h__Script_VoxelGraph_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EVoxelPortalNodePinCategory_StaticEnum, TEXT("EVoxelPortalNodePinCategory"), &Z_Registration_Info_UEnum_EVoxelPortalNodePinCategory, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 516649964U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FVoxelPortalNodeSelector::StaticStruct, Z_Construct_UScriptStruct_FVoxelPortalNodeSelector_Statics::NewStructOps, TEXT("VoxelPortalNodeSelector"), &Z_Registration_Info_UScriptStruct_FVoxelPortalNodeSelector, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVoxelPortalNodeSelector), 782538474U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UVoxelLocalVariableBase, UVoxelLocalVariableBase::StaticClass, TEXT("UVoxelLocalVariableBase"), &Z_Registration_Info_UClass_UVoxelLocalVariableBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelLocalVariableBase), 2284088643U) },
		{ Z_Construct_UClass_UVoxelLocalVariableDeclaration, UVoxelLocalVariableDeclaration::StaticClass, TEXT("UVoxelLocalVariableDeclaration"), &Z_Registration_Info_UClass_UVoxelLocalVariableDeclaration, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelLocalVariableDeclaration), 176362028U) },
		{ Z_Construct_UClass_UVoxelLocalVariableUsage, UVoxelLocalVariableUsage::StaticClass, TEXT("UVoxelLocalVariableUsage"), &Z_Registration_Info_UClass_UVoxelLocalVariableUsage, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelLocalVariableUsage), 893316052U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_VoxelGraph_Public_VoxelNodes_VoxelLocalVariables_h__Script_VoxelGraph_2948290399(TEXT("/Script/VoxelGraph"),
	Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_VoxelGraph_Public_VoxelNodes_VoxelLocalVariables_h__Script_VoxelGraph_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_VoxelGraph_Public_VoxelNodes_VoxelLocalVariables_h__Script_VoxelGraph_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_VoxelGraph_Public_VoxelNodes_VoxelLocalVariables_h__Script_VoxelGraph_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_VoxelGraph_Public_VoxelNodes_VoxelLocalVariables_h__Script_VoxelGraph_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_VoxelGraph_Public_VoxelNodes_VoxelLocalVariables_h__Script_VoxelGraph_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_VoxelGraph_Public_VoxelNodes_VoxelLocalVariables_h__Script_VoxelGraph_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
