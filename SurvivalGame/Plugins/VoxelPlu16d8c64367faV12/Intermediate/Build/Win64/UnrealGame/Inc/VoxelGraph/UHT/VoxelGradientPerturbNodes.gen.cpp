// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VoxelGraph/Public/VoxelNodes/VoxelGradientPerturbNodes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeVoxelGradientPerturbNodes() {}

// ********** Begin Cross Module References ********************************************************
UPackage* Z_Construct_UPackage__Script_VoxelGraph();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_2DGradientPerturb();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_2DGradientPerturb_NoRegister();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_2DGradientPerturbFractal();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_2DGradientPerturbFractal_NoRegister();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_3DGradientPerturb();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_3DGradientPerturb_NoRegister();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_3DGradientPerturbFractal();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_3DGradientPerturbFractal_NoRegister();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_GradientPerturb();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_GradientPerturb_NoRegister();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_GradientPerturbFractal();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_GradientPerturbFractal_NoRegister();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_NoiseNode();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_NoiseNodeFractal();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UVoxelNode_GradientPerturb ***********************************************
void UVoxelNode_GradientPerturb::StaticRegisterNativesUVoxelNode_GradientPerturb()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UVoxelNode_GradientPerturb;
UClass* UVoxelNode_GradientPerturb::GetPrivateStaticClass()
{
	using TClass = UVoxelNode_GradientPerturb;
	if (!Z_Registration_Info_UClass_UVoxelNode_GradientPerturb.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("VoxelNode_GradientPerturb"),
			Z_Registration_Info_UClass_UVoxelNode_GradientPerturb.InnerSingleton,
			StaticRegisterNativesUVoxelNode_GradientPerturb,
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
	return Z_Registration_Info_UClass_UVoxelNode_GradientPerturb.InnerSingleton;
}
UClass* Z_Construct_UClass_UVoxelNode_GradientPerturb_NoRegister()
{
	return UVoxelNode_GradientPerturb::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UVoxelNode_GradientPerturb_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Category", "Noise|Gradient Perturb" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelNodes/VoxelGradientPerturbNodes.h" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelGradientPerturbNodes.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelNode_GradientPerturb>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UVoxelNode_GradientPerturb_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UVoxelNode_NoiseNode,
	(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_GradientPerturb_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelNode_GradientPerturb_Statics::ClassParams = {
	&UVoxelNode_GradientPerturb::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_GradientPerturb_Statics::Class_MetaDataParams), Z_Construct_UClass_UVoxelNode_GradientPerturb_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVoxelNode_GradientPerturb()
{
	if (!Z_Registration_Info_UClass_UVoxelNode_GradientPerturb.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelNode_GradientPerturb.OuterSingleton, Z_Construct_UClass_UVoxelNode_GradientPerturb_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVoxelNode_GradientPerturb.OuterSingleton;
}
UVoxelNode_GradientPerturb::UVoxelNode_GradientPerturb(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelNode_GradientPerturb);
UVoxelNode_GradientPerturb::~UVoxelNode_GradientPerturb() {}
// ********** End Class UVoxelNode_GradientPerturb *************************************************

// ********** Begin Class UVoxelNode_GradientPerturbFractal ****************************************
void UVoxelNode_GradientPerturbFractal::StaticRegisterNativesUVoxelNode_GradientPerturbFractal()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UVoxelNode_GradientPerturbFractal;
UClass* UVoxelNode_GradientPerturbFractal::GetPrivateStaticClass()
{
	using TClass = UVoxelNode_GradientPerturbFractal;
	if (!Z_Registration_Info_UClass_UVoxelNode_GradientPerturbFractal.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("VoxelNode_GradientPerturbFractal"),
			Z_Registration_Info_UClass_UVoxelNode_GradientPerturbFractal.InnerSingleton,
			StaticRegisterNativesUVoxelNode_GradientPerturbFractal,
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
	return Z_Registration_Info_UClass_UVoxelNode_GradientPerturbFractal.InnerSingleton;
}
UClass* Z_Construct_UClass_UVoxelNode_GradientPerturbFractal_NoRegister()
{
	return UVoxelNode_GradientPerturbFractal::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UVoxelNode_GradientPerturbFractal_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Category", "Noise|Gradient Perturb" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelNodes/VoxelGradientPerturbNodes.h" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelGradientPerturbNodes.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelNode_GradientPerturbFractal>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UVoxelNode_GradientPerturbFractal_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UVoxelNode_NoiseNodeFractal,
	(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_GradientPerturbFractal_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelNode_GradientPerturbFractal_Statics::ClassParams = {
	&UVoxelNode_GradientPerturbFractal::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_GradientPerturbFractal_Statics::Class_MetaDataParams), Z_Construct_UClass_UVoxelNode_GradientPerturbFractal_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVoxelNode_GradientPerturbFractal()
{
	if (!Z_Registration_Info_UClass_UVoxelNode_GradientPerturbFractal.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelNode_GradientPerturbFractal.OuterSingleton, Z_Construct_UClass_UVoxelNode_GradientPerturbFractal_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVoxelNode_GradientPerturbFractal.OuterSingleton;
}
UVoxelNode_GradientPerturbFractal::UVoxelNode_GradientPerturbFractal(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelNode_GradientPerturbFractal);
UVoxelNode_GradientPerturbFractal::~UVoxelNode_GradientPerturbFractal() {}
// ********** End Class UVoxelNode_GradientPerturbFractal ******************************************

// ********** Begin Class UVoxelNode_2DGradientPerturb *********************************************
void UVoxelNode_2DGradientPerturb::StaticRegisterNativesUVoxelNode_2DGradientPerturb()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UVoxelNode_2DGradientPerturb;
UClass* UVoxelNode_2DGradientPerturb::GetPrivateStaticClass()
{
	using TClass = UVoxelNode_2DGradientPerturb;
	if (!Z_Registration_Info_UClass_UVoxelNode_2DGradientPerturb.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("VoxelNode_2DGradientPerturb"),
			Z_Registration_Info_UClass_UVoxelNode_2DGradientPerturb.InnerSingleton,
			StaticRegisterNativesUVoxelNode_2DGradientPerturb,
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
	return Z_Registration_Info_UClass_UVoxelNode_2DGradientPerturb.InnerSingleton;
}
UClass* Z_Construct_UClass_UVoxelNode_2DGradientPerturb_NoRegister()
{
	return UVoxelNode_2DGradientPerturb::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UVoxelNode_2DGradientPerturb_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "// 2D Gradient Perturb\n" },
		{ "DisplayName", "2D Gradient Perturb" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelNodes/VoxelGradientPerturbNodes.h" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelGradientPerturbNodes.h" },
		{ "ToolTip", "2D Gradient Perturb" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelNode_2DGradientPerturb>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UVoxelNode_2DGradientPerturb_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UVoxelNode_GradientPerturb,
	(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_2DGradientPerturb_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelNode_2DGradientPerturb_Statics::ClassParams = {
	&UVoxelNode_2DGradientPerturb::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_2DGradientPerturb_Statics::Class_MetaDataParams), Z_Construct_UClass_UVoxelNode_2DGradientPerturb_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVoxelNode_2DGradientPerturb()
{
	if (!Z_Registration_Info_UClass_UVoxelNode_2DGradientPerturb.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelNode_2DGradientPerturb.OuterSingleton, Z_Construct_UClass_UVoxelNode_2DGradientPerturb_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVoxelNode_2DGradientPerturb.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelNode_2DGradientPerturb);
UVoxelNode_2DGradientPerturb::~UVoxelNode_2DGradientPerturb() {}
// ********** End Class UVoxelNode_2DGradientPerturb ***********************************************

// ********** Begin Class UVoxelNode_2DGradientPerturbFractal **************************************
void UVoxelNode_2DGradientPerturbFractal::StaticRegisterNativesUVoxelNode_2DGradientPerturbFractal()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UVoxelNode_2DGradientPerturbFractal;
UClass* UVoxelNode_2DGradientPerturbFractal::GetPrivateStaticClass()
{
	using TClass = UVoxelNode_2DGradientPerturbFractal;
	if (!Z_Registration_Info_UClass_UVoxelNode_2DGradientPerturbFractal.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("VoxelNode_2DGradientPerturbFractal"),
			Z_Registration_Info_UClass_UVoxelNode_2DGradientPerturbFractal.InnerSingleton,
			StaticRegisterNativesUVoxelNode_2DGradientPerturbFractal,
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
	return Z_Registration_Info_UClass_UVoxelNode_2DGradientPerturbFractal.InnerSingleton;
}
UClass* Z_Construct_UClass_UVoxelNode_2DGradientPerturbFractal_NoRegister()
{
	return UVoxelNode_2DGradientPerturbFractal::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UVoxelNode_2DGradientPerturbFractal_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "// 2D Gradient Perturb Fractal\n" },
		{ "DisplayName", "2D Gradient Perturb Fractal" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelNodes/VoxelGradientPerturbNodes.h" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelGradientPerturbNodes.h" },
		{ "ToolTip", "2D Gradient Perturb Fractal" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelNode_2DGradientPerturbFractal>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UVoxelNode_2DGradientPerturbFractal_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UVoxelNode_GradientPerturbFractal,
	(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_2DGradientPerturbFractal_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelNode_2DGradientPerturbFractal_Statics::ClassParams = {
	&UVoxelNode_2DGradientPerturbFractal::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_2DGradientPerturbFractal_Statics::Class_MetaDataParams), Z_Construct_UClass_UVoxelNode_2DGradientPerturbFractal_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVoxelNode_2DGradientPerturbFractal()
{
	if (!Z_Registration_Info_UClass_UVoxelNode_2DGradientPerturbFractal.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelNode_2DGradientPerturbFractal.OuterSingleton, Z_Construct_UClass_UVoxelNode_2DGradientPerturbFractal_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVoxelNode_2DGradientPerturbFractal.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelNode_2DGradientPerturbFractal);
UVoxelNode_2DGradientPerturbFractal::~UVoxelNode_2DGradientPerturbFractal() {}
// ********** End Class UVoxelNode_2DGradientPerturbFractal ****************************************

// ********** Begin Class UVoxelNode_3DGradientPerturb *********************************************
void UVoxelNode_3DGradientPerturb::StaticRegisterNativesUVoxelNode_3DGradientPerturb()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UVoxelNode_3DGradientPerturb;
UClass* UVoxelNode_3DGradientPerturb::GetPrivateStaticClass()
{
	using TClass = UVoxelNode_3DGradientPerturb;
	if (!Z_Registration_Info_UClass_UVoxelNode_3DGradientPerturb.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("VoxelNode_3DGradientPerturb"),
			Z_Registration_Info_UClass_UVoxelNode_3DGradientPerturb.InnerSingleton,
			StaticRegisterNativesUVoxelNode_3DGradientPerturb,
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
	return Z_Registration_Info_UClass_UVoxelNode_3DGradientPerturb.InnerSingleton;
}
UClass* Z_Construct_UClass_UVoxelNode_3DGradientPerturb_NoRegister()
{
	return UVoxelNode_3DGradientPerturb::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UVoxelNode_3DGradientPerturb_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "// 3D Gradient Perturb\n" },
		{ "DisplayName", "3D Gradient Perturb" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelNodes/VoxelGradientPerturbNodes.h" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelGradientPerturbNodes.h" },
		{ "ToolTip", "3D Gradient Perturb" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelNode_3DGradientPerturb>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UVoxelNode_3DGradientPerturb_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UVoxelNode_GradientPerturb,
	(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_3DGradientPerturb_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelNode_3DGradientPerturb_Statics::ClassParams = {
	&UVoxelNode_3DGradientPerturb::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_3DGradientPerturb_Statics::Class_MetaDataParams), Z_Construct_UClass_UVoxelNode_3DGradientPerturb_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVoxelNode_3DGradientPerturb()
{
	if (!Z_Registration_Info_UClass_UVoxelNode_3DGradientPerturb.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelNode_3DGradientPerturb.OuterSingleton, Z_Construct_UClass_UVoxelNode_3DGradientPerturb_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVoxelNode_3DGradientPerturb.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelNode_3DGradientPerturb);
UVoxelNode_3DGradientPerturb::~UVoxelNode_3DGradientPerturb() {}
// ********** End Class UVoxelNode_3DGradientPerturb ***********************************************

// ********** Begin Class UVoxelNode_3DGradientPerturbFractal **************************************
void UVoxelNode_3DGradientPerturbFractal::StaticRegisterNativesUVoxelNode_3DGradientPerturbFractal()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UVoxelNode_3DGradientPerturbFractal;
UClass* UVoxelNode_3DGradientPerturbFractal::GetPrivateStaticClass()
{
	using TClass = UVoxelNode_3DGradientPerturbFractal;
	if (!Z_Registration_Info_UClass_UVoxelNode_3DGradientPerturbFractal.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("VoxelNode_3DGradientPerturbFractal"),
			Z_Registration_Info_UClass_UVoxelNode_3DGradientPerturbFractal.InnerSingleton,
			StaticRegisterNativesUVoxelNode_3DGradientPerturbFractal,
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
	return Z_Registration_Info_UClass_UVoxelNode_3DGradientPerturbFractal.InnerSingleton;
}
UClass* Z_Construct_UClass_UVoxelNode_3DGradientPerturbFractal_NoRegister()
{
	return UVoxelNode_3DGradientPerturbFractal::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UVoxelNode_3DGradientPerturbFractal_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "// 3D Gradient Perturb Fractal\n" },
		{ "DisplayName", "3D Gradient Perturb Fractal" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelNodes/VoxelGradientPerturbNodes.h" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelGradientPerturbNodes.h" },
		{ "ToolTip", "3D Gradient Perturb Fractal" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelNode_3DGradientPerturbFractal>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UVoxelNode_3DGradientPerturbFractal_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UVoxelNode_GradientPerturbFractal,
	(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_3DGradientPerturbFractal_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelNode_3DGradientPerturbFractal_Statics::ClassParams = {
	&UVoxelNode_3DGradientPerturbFractal::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_3DGradientPerturbFractal_Statics::Class_MetaDataParams), Z_Construct_UClass_UVoxelNode_3DGradientPerturbFractal_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVoxelNode_3DGradientPerturbFractal()
{
	if (!Z_Registration_Info_UClass_UVoxelNode_3DGradientPerturbFractal.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelNode_3DGradientPerturbFractal.OuterSingleton, Z_Construct_UClass_UVoxelNode_3DGradientPerturbFractal_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVoxelNode_3DGradientPerturbFractal.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelNode_3DGradientPerturbFractal);
UVoxelNode_3DGradientPerturbFractal::~UVoxelNode_3DGradientPerturbFractal() {}
// ********** End Class UVoxelNode_3DGradientPerturbFractal ****************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_VoxelGraph_Public_VoxelNodes_VoxelGradientPerturbNodes_h__Script_VoxelGraph_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UVoxelNode_GradientPerturb, UVoxelNode_GradientPerturb::StaticClass, TEXT("UVoxelNode_GradientPerturb"), &Z_Registration_Info_UClass_UVoxelNode_GradientPerturb, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelNode_GradientPerturb), 2882614849U) },
		{ Z_Construct_UClass_UVoxelNode_GradientPerturbFractal, UVoxelNode_GradientPerturbFractal::StaticClass, TEXT("UVoxelNode_GradientPerturbFractal"), &Z_Registration_Info_UClass_UVoxelNode_GradientPerturbFractal, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelNode_GradientPerturbFractal), 3804057049U) },
		{ Z_Construct_UClass_UVoxelNode_2DGradientPerturb, UVoxelNode_2DGradientPerturb::StaticClass, TEXT("UVoxelNode_2DGradientPerturb"), &Z_Registration_Info_UClass_UVoxelNode_2DGradientPerturb, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelNode_2DGradientPerturb), 1764918746U) },
		{ Z_Construct_UClass_UVoxelNode_2DGradientPerturbFractal, UVoxelNode_2DGradientPerturbFractal::StaticClass, TEXT("UVoxelNode_2DGradientPerturbFractal"), &Z_Registration_Info_UClass_UVoxelNode_2DGradientPerturbFractal, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelNode_2DGradientPerturbFractal), 299187508U) },
		{ Z_Construct_UClass_UVoxelNode_3DGradientPerturb, UVoxelNode_3DGradientPerturb::StaticClass, TEXT("UVoxelNode_3DGradientPerturb"), &Z_Registration_Info_UClass_UVoxelNode_3DGradientPerturb, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelNode_3DGradientPerturb), 1708196972U) },
		{ Z_Construct_UClass_UVoxelNode_3DGradientPerturbFractal, UVoxelNode_3DGradientPerturbFractal::StaticClass, TEXT("UVoxelNode_3DGradientPerturbFractal"), &Z_Registration_Info_UClass_UVoxelNode_3DGradientPerturbFractal, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelNode_3DGradientPerturbFractal), 3570869800U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_VoxelGraph_Public_VoxelNodes_VoxelGradientPerturbNodes_h__Script_VoxelGraph_4282680541(TEXT("/Script/VoxelGraph"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_VoxelGraph_Public_VoxelNodes_VoxelGradientPerturbNodes_h__Script_VoxelGraph_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_VoxelGraph_Public_VoxelNodes_VoxelGradientPerturbNodes_h__Script_VoxelGraph_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
