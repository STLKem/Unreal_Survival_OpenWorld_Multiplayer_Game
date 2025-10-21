// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VoxelNodes/VoxelBinaryNodes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeVoxelBinaryNodes() {}

// ********** Begin Cross Module References ********************************************************
UPackage* Z_Construct_UPackage__Script_VoxelGraph();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_FEqual();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_FEqual_NoRegister();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_FGreater();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_FGreater_NoRegister();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_FGreaterEqual();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_FGreaterEqual_NoRegister();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_FLess();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_FLess_NoRegister();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_FLessEqual();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_FLessEqual_NoRegister();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_FNotEqual();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_FNotEqual_NoRegister();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_IEqual();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_IEqual_NoRegister();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_IGreater();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_IGreater_NoRegister();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_IGreaterEqual();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_IGreaterEqual_NoRegister();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_ILess();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_ILess_NoRegister();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_ILessEqual();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_ILessEqual_NoRegister();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_INotEqual();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_INotEqual_NoRegister();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelPureNode();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UVoxelNode_FLess *********************************************************
void UVoxelNode_FLess::StaticRegisterNativesUVoxelNode_FLess()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UVoxelNode_FLess;
UClass* UVoxelNode_FLess::GetPrivateStaticClass()
{
	using TClass = UVoxelNode_FLess;
	if (!Z_Registration_Info_UClass_UVoxelNode_FLess.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("VoxelNode_FLess"),
			Z_Registration_Info_UClass_UVoxelNode_FLess.InnerSingleton,
			StaticRegisterNativesUVoxelNode_FLess,
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
	return Z_Registration_Info_UClass_UVoxelNode_FLess.InnerSingleton;
}
UClass* Z_Construct_UClass_UVoxelNode_FLess_NoRegister()
{
	return UVoxelNode_FLess::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UVoxelNode_FLess_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Category", "Math|Float" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// A < B\n" },
#endif
		{ "DisplayName", "float < float" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelNodes/VoxelBinaryNodes.h" },
		{ "Keywords", "< less" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelBinaryNodes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A < B" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelNode_FLess>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UVoxelNode_FLess_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UVoxelPureNode,
	(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_FLess_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelNode_FLess_Statics::ClassParams = {
	&UVoxelNode_FLess::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_FLess_Statics::Class_MetaDataParams), Z_Construct_UClass_UVoxelNode_FLess_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVoxelNode_FLess()
{
	if (!Z_Registration_Info_UClass_UVoxelNode_FLess.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelNode_FLess.OuterSingleton, Z_Construct_UClass_UVoxelNode_FLess_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVoxelNode_FLess.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelNode_FLess);
UVoxelNode_FLess::~UVoxelNode_FLess() {}
// ********** End Class UVoxelNode_FLess ***********************************************************

// ********** Begin Class UVoxelNode_FLessEqual ****************************************************
void UVoxelNode_FLessEqual::StaticRegisterNativesUVoxelNode_FLessEqual()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UVoxelNode_FLessEqual;
UClass* UVoxelNode_FLessEqual::GetPrivateStaticClass()
{
	using TClass = UVoxelNode_FLessEqual;
	if (!Z_Registration_Info_UClass_UVoxelNode_FLessEqual.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("VoxelNode_FLessEqual"),
			Z_Registration_Info_UClass_UVoxelNode_FLessEqual.InnerSingleton,
			StaticRegisterNativesUVoxelNode_FLessEqual,
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
	return Z_Registration_Info_UClass_UVoxelNode_FLessEqual.InnerSingleton;
}
UClass* Z_Construct_UClass_UVoxelNode_FLessEqual_NoRegister()
{
	return UVoxelNode_FLessEqual::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UVoxelNode_FLessEqual_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Category", "Math|Float" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// A <= B\n" },
#endif
		{ "DisplayName", "float <= float" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelNodes/VoxelBinaryNodes.h" },
		{ "Keywords", "<= less" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelBinaryNodes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A <= B" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelNode_FLessEqual>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UVoxelNode_FLessEqual_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UVoxelPureNode,
	(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_FLessEqual_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelNode_FLessEqual_Statics::ClassParams = {
	&UVoxelNode_FLessEqual::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_FLessEqual_Statics::Class_MetaDataParams), Z_Construct_UClass_UVoxelNode_FLessEqual_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVoxelNode_FLessEqual()
{
	if (!Z_Registration_Info_UClass_UVoxelNode_FLessEqual.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelNode_FLessEqual.OuterSingleton, Z_Construct_UClass_UVoxelNode_FLessEqual_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVoxelNode_FLessEqual.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelNode_FLessEqual);
UVoxelNode_FLessEqual::~UVoxelNode_FLessEqual() {}
// ********** End Class UVoxelNode_FLessEqual ******************************************************

// ********** Begin Class UVoxelNode_FGreater ******************************************************
void UVoxelNode_FGreater::StaticRegisterNativesUVoxelNode_FGreater()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UVoxelNode_FGreater;
UClass* UVoxelNode_FGreater::GetPrivateStaticClass()
{
	using TClass = UVoxelNode_FGreater;
	if (!Z_Registration_Info_UClass_UVoxelNode_FGreater.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("VoxelNode_FGreater"),
			Z_Registration_Info_UClass_UVoxelNode_FGreater.InnerSingleton,
			StaticRegisterNativesUVoxelNode_FGreater,
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
	return Z_Registration_Info_UClass_UVoxelNode_FGreater.InnerSingleton;
}
UClass* Z_Construct_UClass_UVoxelNode_FGreater_NoRegister()
{
	return UVoxelNode_FGreater::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UVoxelNode_FGreater_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Category", "Math|Float" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// A > B\n" },
#endif
		{ "DisplayName", "float > float" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelNodes/VoxelBinaryNodes.h" },
		{ "Keywords", "> greater" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelBinaryNodes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A > B" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelNode_FGreater>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UVoxelNode_FGreater_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UVoxelPureNode,
	(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_FGreater_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelNode_FGreater_Statics::ClassParams = {
	&UVoxelNode_FGreater::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_FGreater_Statics::Class_MetaDataParams), Z_Construct_UClass_UVoxelNode_FGreater_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVoxelNode_FGreater()
{
	if (!Z_Registration_Info_UClass_UVoxelNode_FGreater.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelNode_FGreater.OuterSingleton, Z_Construct_UClass_UVoxelNode_FGreater_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVoxelNode_FGreater.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelNode_FGreater);
UVoxelNode_FGreater::~UVoxelNode_FGreater() {}
// ********** End Class UVoxelNode_FGreater ********************************************************

// ********** Begin Class UVoxelNode_FGreaterEqual *************************************************
void UVoxelNode_FGreaterEqual::StaticRegisterNativesUVoxelNode_FGreaterEqual()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UVoxelNode_FGreaterEqual;
UClass* UVoxelNode_FGreaterEqual::GetPrivateStaticClass()
{
	using TClass = UVoxelNode_FGreaterEqual;
	if (!Z_Registration_Info_UClass_UVoxelNode_FGreaterEqual.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("VoxelNode_FGreaterEqual"),
			Z_Registration_Info_UClass_UVoxelNode_FGreaterEqual.InnerSingleton,
			StaticRegisterNativesUVoxelNode_FGreaterEqual,
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
	return Z_Registration_Info_UClass_UVoxelNode_FGreaterEqual.InnerSingleton;
}
UClass* Z_Construct_UClass_UVoxelNode_FGreaterEqual_NoRegister()
{
	return UVoxelNode_FGreaterEqual::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UVoxelNode_FGreaterEqual_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Category", "Math|Float" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// A >= B\n" },
#endif
		{ "DisplayName", "float >= float" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelNodes/VoxelBinaryNodes.h" },
		{ "Keywords", ">= greater" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelBinaryNodes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A >= B" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelNode_FGreaterEqual>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UVoxelNode_FGreaterEqual_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UVoxelPureNode,
	(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_FGreaterEqual_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelNode_FGreaterEqual_Statics::ClassParams = {
	&UVoxelNode_FGreaterEqual::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_FGreaterEqual_Statics::Class_MetaDataParams), Z_Construct_UClass_UVoxelNode_FGreaterEqual_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVoxelNode_FGreaterEqual()
{
	if (!Z_Registration_Info_UClass_UVoxelNode_FGreaterEqual.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelNode_FGreaterEqual.OuterSingleton, Z_Construct_UClass_UVoxelNode_FGreaterEqual_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVoxelNode_FGreaterEqual.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelNode_FGreaterEqual);
UVoxelNode_FGreaterEqual::~UVoxelNode_FGreaterEqual() {}
// ********** End Class UVoxelNode_FGreaterEqual ***************************************************

// ********** Begin Class UVoxelNode_FEqual ********************************************************
void UVoxelNode_FEqual::StaticRegisterNativesUVoxelNode_FEqual()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UVoxelNode_FEqual;
UClass* UVoxelNode_FEqual::GetPrivateStaticClass()
{
	using TClass = UVoxelNode_FEqual;
	if (!Z_Registration_Info_UClass_UVoxelNode_FEqual.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("VoxelNode_FEqual"),
			Z_Registration_Info_UClass_UVoxelNode_FEqual.InnerSingleton,
			StaticRegisterNativesUVoxelNode_FEqual,
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
	return Z_Registration_Info_UClass_UVoxelNode_FEqual.InnerSingleton;
}
UClass* Z_Construct_UClass_UVoxelNode_FEqual_NoRegister()
{
	return UVoxelNode_FEqual::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UVoxelNode_FEqual_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Category", "Math|Float" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// A == B\n" },
#endif
		{ "DisplayName", "float == float" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelNodes/VoxelBinaryNodes.h" },
		{ "Keywords", "== equal" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelBinaryNodes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A == B" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelNode_FEqual>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UVoxelNode_FEqual_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UVoxelPureNode,
	(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_FEqual_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelNode_FEqual_Statics::ClassParams = {
	&UVoxelNode_FEqual::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_FEqual_Statics::Class_MetaDataParams), Z_Construct_UClass_UVoxelNode_FEqual_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVoxelNode_FEqual()
{
	if (!Z_Registration_Info_UClass_UVoxelNode_FEqual.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelNode_FEqual.OuterSingleton, Z_Construct_UClass_UVoxelNode_FEqual_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVoxelNode_FEqual.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelNode_FEqual);
UVoxelNode_FEqual::~UVoxelNode_FEqual() {}
// ********** End Class UVoxelNode_FEqual **********************************************************

// ********** Begin Class UVoxelNode_FNotEqual *****************************************************
void UVoxelNode_FNotEqual::StaticRegisterNativesUVoxelNode_FNotEqual()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UVoxelNode_FNotEqual;
UClass* UVoxelNode_FNotEqual::GetPrivateStaticClass()
{
	using TClass = UVoxelNode_FNotEqual;
	if (!Z_Registration_Info_UClass_UVoxelNode_FNotEqual.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("VoxelNode_FNotEqual"),
			Z_Registration_Info_UClass_UVoxelNode_FNotEqual.InnerSingleton,
			StaticRegisterNativesUVoxelNode_FNotEqual,
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
	return Z_Registration_Info_UClass_UVoxelNode_FNotEqual.InnerSingleton;
}
UClass* Z_Construct_UClass_UVoxelNode_FNotEqual_NoRegister()
{
	return UVoxelNode_FNotEqual::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UVoxelNode_FNotEqual_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Category", "Math|Float" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// A != B\n" },
#endif
		{ "DisplayName", "float != float" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelNodes/VoxelBinaryNodes.h" },
		{ "Keywords", "!= not equal" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelBinaryNodes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A != B" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelNode_FNotEqual>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UVoxelNode_FNotEqual_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UVoxelPureNode,
	(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_FNotEqual_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelNode_FNotEqual_Statics::ClassParams = {
	&UVoxelNode_FNotEqual::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_FNotEqual_Statics::Class_MetaDataParams), Z_Construct_UClass_UVoxelNode_FNotEqual_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVoxelNode_FNotEqual()
{
	if (!Z_Registration_Info_UClass_UVoxelNode_FNotEqual.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelNode_FNotEqual.OuterSingleton, Z_Construct_UClass_UVoxelNode_FNotEqual_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVoxelNode_FNotEqual.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelNode_FNotEqual);
UVoxelNode_FNotEqual::~UVoxelNode_FNotEqual() {}
// ********** End Class UVoxelNode_FNotEqual *******************************************************

// ********** Begin Class UVoxelNode_ILess *********************************************************
void UVoxelNode_ILess::StaticRegisterNativesUVoxelNode_ILess()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UVoxelNode_ILess;
UClass* UVoxelNode_ILess::GetPrivateStaticClass()
{
	using TClass = UVoxelNode_ILess;
	if (!Z_Registration_Info_UClass_UVoxelNode_ILess.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("VoxelNode_ILess"),
			Z_Registration_Info_UClass_UVoxelNode_ILess.InnerSingleton,
			StaticRegisterNativesUVoxelNode_ILess,
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
	return Z_Registration_Info_UClass_UVoxelNode_ILess.InnerSingleton;
}
UClass* Z_Construct_UClass_UVoxelNode_ILess_NoRegister()
{
	return UVoxelNode_ILess::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UVoxelNode_ILess_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Category", "Math|Integer" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// A < B\n" },
#endif
		{ "DisplayName", "int < int" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelNodes/VoxelBinaryNodes.h" },
		{ "Keywords", "< less" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelBinaryNodes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A < B" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelNode_ILess>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UVoxelNode_ILess_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UVoxelPureNode,
	(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_ILess_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelNode_ILess_Statics::ClassParams = {
	&UVoxelNode_ILess::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_ILess_Statics::Class_MetaDataParams), Z_Construct_UClass_UVoxelNode_ILess_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVoxelNode_ILess()
{
	if (!Z_Registration_Info_UClass_UVoxelNode_ILess.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelNode_ILess.OuterSingleton, Z_Construct_UClass_UVoxelNode_ILess_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVoxelNode_ILess.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelNode_ILess);
UVoxelNode_ILess::~UVoxelNode_ILess() {}
// ********** End Class UVoxelNode_ILess ***********************************************************

// ********** Begin Class UVoxelNode_ILessEqual ****************************************************
void UVoxelNode_ILessEqual::StaticRegisterNativesUVoxelNode_ILessEqual()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UVoxelNode_ILessEqual;
UClass* UVoxelNode_ILessEqual::GetPrivateStaticClass()
{
	using TClass = UVoxelNode_ILessEqual;
	if (!Z_Registration_Info_UClass_UVoxelNode_ILessEqual.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("VoxelNode_ILessEqual"),
			Z_Registration_Info_UClass_UVoxelNode_ILessEqual.InnerSingleton,
			StaticRegisterNativesUVoxelNode_ILessEqual,
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
	return Z_Registration_Info_UClass_UVoxelNode_ILessEqual.InnerSingleton;
}
UClass* Z_Construct_UClass_UVoxelNode_ILessEqual_NoRegister()
{
	return UVoxelNode_ILessEqual::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UVoxelNode_ILessEqual_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Category", "Math|Integer" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// A <= B\n" },
#endif
		{ "DisplayName", "int <= int" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelNodes/VoxelBinaryNodes.h" },
		{ "Keywords", "<= less" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelBinaryNodes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A <= B" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelNode_ILessEqual>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UVoxelNode_ILessEqual_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UVoxelPureNode,
	(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_ILessEqual_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelNode_ILessEqual_Statics::ClassParams = {
	&UVoxelNode_ILessEqual::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_ILessEqual_Statics::Class_MetaDataParams), Z_Construct_UClass_UVoxelNode_ILessEqual_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVoxelNode_ILessEqual()
{
	if (!Z_Registration_Info_UClass_UVoxelNode_ILessEqual.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelNode_ILessEqual.OuterSingleton, Z_Construct_UClass_UVoxelNode_ILessEqual_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVoxelNode_ILessEqual.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelNode_ILessEqual);
UVoxelNode_ILessEqual::~UVoxelNode_ILessEqual() {}
// ********** End Class UVoxelNode_ILessEqual ******************************************************

// ********** Begin Class UVoxelNode_IGreater ******************************************************
void UVoxelNode_IGreater::StaticRegisterNativesUVoxelNode_IGreater()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UVoxelNode_IGreater;
UClass* UVoxelNode_IGreater::GetPrivateStaticClass()
{
	using TClass = UVoxelNode_IGreater;
	if (!Z_Registration_Info_UClass_UVoxelNode_IGreater.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("VoxelNode_IGreater"),
			Z_Registration_Info_UClass_UVoxelNode_IGreater.InnerSingleton,
			StaticRegisterNativesUVoxelNode_IGreater,
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
	return Z_Registration_Info_UClass_UVoxelNode_IGreater.InnerSingleton;
}
UClass* Z_Construct_UClass_UVoxelNode_IGreater_NoRegister()
{
	return UVoxelNode_IGreater::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UVoxelNode_IGreater_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Category", "Math|Integer" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// A > B\n" },
#endif
		{ "DisplayName", "int > int" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelNodes/VoxelBinaryNodes.h" },
		{ "Keywords", "> greater" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelBinaryNodes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A > B" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelNode_IGreater>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UVoxelNode_IGreater_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UVoxelPureNode,
	(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_IGreater_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelNode_IGreater_Statics::ClassParams = {
	&UVoxelNode_IGreater::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_IGreater_Statics::Class_MetaDataParams), Z_Construct_UClass_UVoxelNode_IGreater_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVoxelNode_IGreater()
{
	if (!Z_Registration_Info_UClass_UVoxelNode_IGreater.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelNode_IGreater.OuterSingleton, Z_Construct_UClass_UVoxelNode_IGreater_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVoxelNode_IGreater.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelNode_IGreater);
UVoxelNode_IGreater::~UVoxelNode_IGreater() {}
// ********** End Class UVoxelNode_IGreater ********************************************************

// ********** Begin Class UVoxelNode_IGreaterEqual *************************************************
void UVoxelNode_IGreaterEqual::StaticRegisterNativesUVoxelNode_IGreaterEqual()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UVoxelNode_IGreaterEqual;
UClass* UVoxelNode_IGreaterEqual::GetPrivateStaticClass()
{
	using TClass = UVoxelNode_IGreaterEqual;
	if (!Z_Registration_Info_UClass_UVoxelNode_IGreaterEqual.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("VoxelNode_IGreaterEqual"),
			Z_Registration_Info_UClass_UVoxelNode_IGreaterEqual.InnerSingleton,
			StaticRegisterNativesUVoxelNode_IGreaterEqual,
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
	return Z_Registration_Info_UClass_UVoxelNode_IGreaterEqual.InnerSingleton;
}
UClass* Z_Construct_UClass_UVoxelNode_IGreaterEqual_NoRegister()
{
	return UVoxelNode_IGreaterEqual::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UVoxelNode_IGreaterEqual_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Category", "Math|Integer" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// A >= B\n" },
#endif
		{ "DisplayName", "int >= int" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelNodes/VoxelBinaryNodes.h" },
		{ "Keywords", ">= greater" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelBinaryNodes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A >= B" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelNode_IGreaterEqual>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UVoxelNode_IGreaterEqual_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UVoxelPureNode,
	(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_IGreaterEqual_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelNode_IGreaterEqual_Statics::ClassParams = {
	&UVoxelNode_IGreaterEqual::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_IGreaterEqual_Statics::Class_MetaDataParams), Z_Construct_UClass_UVoxelNode_IGreaterEqual_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVoxelNode_IGreaterEqual()
{
	if (!Z_Registration_Info_UClass_UVoxelNode_IGreaterEqual.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelNode_IGreaterEqual.OuterSingleton, Z_Construct_UClass_UVoxelNode_IGreaterEqual_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVoxelNode_IGreaterEqual.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelNode_IGreaterEqual);
UVoxelNode_IGreaterEqual::~UVoxelNode_IGreaterEqual() {}
// ********** End Class UVoxelNode_IGreaterEqual ***************************************************

// ********** Begin Class UVoxelNode_IEqual ********************************************************
void UVoxelNode_IEqual::StaticRegisterNativesUVoxelNode_IEqual()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UVoxelNode_IEqual;
UClass* UVoxelNode_IEqual::GetPrivateStaticClass()
{
	using TClass = UVoxelNode_IEqual;
	if (!Z_Registration_Info_UClass_UVoxelNode_IEqual.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("VoxelNode_IEqual"),
			Z_Registration_Info_UClass_UVoxelNode_IEqual.InnerSingleton,
			StaticRegisterNativesUVoxelNode_IEqual,
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
	return Z_Registration_Info_UClass_UVoxelNode_IEqual.InnerSingleton;
}
UClass* Z_Construct_UClass_UVoxelNode_IEqual_NoRegister()
{
	return UVoxelNode_IEqual::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UVoxelNode_IEqual_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Category", "Math|Integer" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// A == B\n" },
#endif
		{ "DisplayName", "int == int" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelNodes/VoxelBinaryNodes.h" },
		{ "Keywords", "== equal" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelBinaryNodes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A == B" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelNode_IEqual>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UVoxelNode_IEqual_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UVoxelPureNode,
	(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_IEqual_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelNode_IEqual_Statics::ClassParams = {
	&UVoxelNode_IEqual::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_IEqual_Statics::Class_MetaDataParams), Z_Construct_UClass_UVoxelNode_IEqual_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVoxelNode_IEqual()
{
	if (!Z_Registration_Info_UClass_UVoxelNode_IEqual.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelNode_IEqual.OuterSingleton, Z_Construct_UClass_UVoxelNode_IEqual_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVoxelNode_IEqual.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelNode_IEqual);
UVoxelNode_IEqual::~UVoxelNode_IEqual() {}
// ********** End Class UVoxelNode_IEqual **********************************************************

// ********** Begin Class UVoxelNode_INotEqual *****************************************************
void UVoxelNode_INotEqual::StaticRegisterNativesUVoxelNode_INotEqual()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UVoxelNode_INotEqual;
UClass* UVoxelNode_INotEqual::GetPrivateStaticClass()
{
	using TClass = UVoxelNode_INotEqual;
	if (!Z_Registration_Info_UClass_UVoxelNode_INotEqual.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("VoxelNode_INotEqual"),
			Z_Registration_Info_UClass_UVoxelNode_INotEqual.InnerSingleton,
			StaticRegisterNativesUVoxelNode_INotEqual,
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
	return Z_Registration_Info_UClass_UVoxelNode_INotEqual.InnerSingleton;
}
UClass* Z_Construct_UClass_UVoxelNode_INotEqual_NoRegister()
{
	return UVoxelNode_INotEqual::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UVoxelNode_INotEqual_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Category", "Math|Integer" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// A != B\n" },
#endif
		{ "DisplayName", "int != int" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelNodes/VoxelBinaryNodes.h" },
		{ "Keywords", "!= not equal" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelBinaryNodes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A != B" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelNode_INotEqual>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UVoxelNode_INotEqual_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UVoxelPureNode,
	(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_INotEqual_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelNode_INotEqual_Statics::ClassParams = {
	&UVoxelNode_INotEqual::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_INotEqual_Statics::Class_MetaDataParams), Z_Construct_UClass_UVoxelNode_INotEqual_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVoxelNode_INotEqual()
{
	if (!Z_Registration_Info_UClass_UVoxelNode_INotEqual.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelNode_INotEqual.OuterSingleton, Z_Construct_UClass_UVoxelNode_INotEqual_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVoxelNode_INotEqual.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelNode_INotEqual);
UVoxelNode_INotEqual::~UVoxelNode_INotEqual() {}
// ********** End Class UVoxelNode_INotEqual *******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_VoxelGraph_Public_VoxelNodes_VoxelBinaryNodes_h__Script_VoxelGraph_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UVoxelNode_FLess, UVoxelNode_FLess::StaticClass, TEXT("UVoxelNode_FLess"), &Z_Registration_Info_UClass_UVoxelNode_FLess, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelNode_FLess), 28990295U) },
		{ Z_Construct_UClass_UVoxelNode_FLessEqual, UVoxelNode_FLessEqual::StaticClass, TEXT("UVoxelNode_FLessEqual"), &Z_Registration_Info_UClass_UVoxelNode_FLessEqual, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelNode_FLessEqual), 1588439927U) },
		{ Z_Construct_UClass_UVoxelNode_FGreater, UVoxelNode_FGreater::StaticClass, TEXT("UVoxelNode_FGreater"), &Z_Registration_Info_UClass_UVoxelNode_FGreater, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelNode_FGreater), 256732668U) },
		{ Z_Construct_UClass_UVoxelNode_FGreaterEqual, UVoxelNode_FGreaterEqual::StaticClass, TEXT("UVoxelNode_FGreaterEqual"), &Z_Registration_Info_UClass_UVoxelNode_FGreaterEqual, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelNode_FGreaterEqual), 1778926245U) },
		{ Z_Construct_UClass_UVoxelNode_FEqual, UVoxelNode_FEqual::StaticClass, TEXT("UVoxelNode_FEqual"), &Z_Registration_Info_UClass_UVoxelNode_FEqual, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelNode_FEqual), 2675580936U) },
		{ Z_Construct_UClass_UVoxelNode_FNotEqual, UVoxelNode_FNotEqual::StaticClass, TEXT("UVoxelNode_FNotEqual"), &Z_Registration_Info_UClass_UVoxelNode_FNotEqual, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelNode_FNotEqual), 1163185152U) },
		{ Z_Construct_UClass_UVoxelNode_ILess, UVoxelNode_ILess::StaticClass, TEXT("UVoxelNode_ILess"), &Z_Registration_Info_UClass_UVoxelNode_ILess, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelNode_ILess), 784162031U) },
		{ Z_Construct_UClass_UVoxelNode_ILessEqual, UVoxelNode_ILessEqual::StaticClass, TEXT("UVoxelNode_ILessEqual"), &Z_Registration_Info_UClass_UVoxelNode_ILessEqual, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelNode_ILessEqual), 2811049261U) },
		{ Z_Construct_UClass_UVoxelNode_IGreater, UVoxelNode_IGreater::StaticClass, TEXT("UVoxelNode_IGreater"), &Z_Registration_Info_UClass_UVoxelNode_IGreater, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelNode_IGreater), 3956412756U) },
		{ Z_Construct_UClass_UVoxelNode_IGreaterEqual, UVoxelNode_IGreaterEqual::StaticClass, TEXT("UVoxelNode_IGreaterEqual"), &Z_Registration_Info_UClass_UVoxelNode_IGreaterEqual, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelNode_IGreaterEqual), 1384842659U) },
		{ Z_Construct_UClass_UVoxelNode_IEqual, UVoxelNode_IEqual::StaticClass, TEXT("UVoxelNode_IEqual"), &Z_Registration_Info_UClass_UVoxelNode_IEqual, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelNode_IEqual), 1745175224U) },
		{ Z_Construct_UClass_UVoxelNode_INotEqual, UVoxelNode_INotEqual::StaticClass, TEXT("UVoxelNode_INotEqual"), &Z_Registration_Info_UClass_UVoxelNode_INotEqual, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelNode_INotEqual), 1058310782U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_VoxelGraph_Public_VoxelNodes_VoxelBinaryNodes_h__Script_VoxelGraph_2884847159(TEXT("/Script/VoxelGraph"),
	Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_VoxelGraph_Public_VoxelNodes_VoxelBinaryNodes_h__Script_VoxelGraph_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_VoxelGraph_Public_VoxelNodes_VoxelBinaryNodes_h__Script_VoxelGraph_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
