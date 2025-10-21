// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VoxelRender/VoxelMaterialExpressions.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeVoxelMaterialExpressions() {}

// ********** Begin Cross Module References ********************************************************
LANDSCAPE_API UClass* Z_Construct_UClass_UMaterialExpressionLandscapeLayerBlend();
LANDSCAPE_API UClass* Z_Construct_UClass_UMaterialExpressionLandscapeLayerSample();
LANDSCAPE_API UClass* Z_Construct_UClass_UMaterialExpressionLandscapeLayerSwitch();
LANDSCAPE_API UClass* Z_Construct_UClass_UMaterialExpressionLandscapeLayerWeight();
LANDSCAPE_API UClass* Z_Construct_UClass_UMaterialExpressionLandscapeVisibilityMask();
UPackage* Z_Construct_UPackage__Script_Voxel();
VOXEL_API UClass* Z_Construct_UClass_UMaterialExpressionVoxelLandscapeLayerBlend();
VOXEL_API UClass* Z_Construct_UClass_UMaterialExpressionVoxelLandscapeLayerBlend_NoRegister();
VOXEL_API UClass* Z_Construct_UClass_UMaterialExpressionVoxelLandscapeLayerSample();
VOXEL_API UClass* Z_Construct_UClass_UMaterialExpressionVoxelLandscapeLayerSample_NoRegister();
VOXEL_API UClass* Z_Construct_UClass_UMaterialExpressionVoxelLandscapeLayerSwitch();
VOXEL_API UClass* Z_Construct_UClass_UMaterialExpressionVoxelLandscapeLayerSwitch_NoRegister();
VOXEL_API UClass* Z_Construct_UClass_UMaterialExpressionVoxelLandscapeLayerWeight();
VOXEL_API UClass* Z_Construct_UClass_UMaterialExpressionVoxelLandscapeLayerWeight_NoRegister();
VOXEL_API UClass* Z_Construct_UClass_UMaterialExpressionVoxelLandscapeVisibilityMask();
VOXEL_API UClass* Z_Construct_UClass_UMaterialExpressionVoxelLandscapeVisibilityMask_NoRegister();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UMaterialExpressionVoxelLandscapeLayerBlend ******************************
void UMaterialExpressionVoxelLandscapeLayerBlend::StaticRegisterNativesUMaterialExpressionVoxelLandscapeLayerBlend()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UMaterialExpressionVoxelLandscapeLayerBlend;
UClass* UMaterialExpressionVoxelLandscapeLayerBlend::GetPrivateStaticClass()
{
	using TClass = UMaterialExpressionVoxelLandscapeLayerBlend;
	if (!Z_Registration_Info_UClass_UMaterialExpressionVoxelLandscapeLayerBlend.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("MaterialExpressionVoxelLandscapeLayerBlend"),
			Z_Registration_Info_UClass_UMaterialExpressionVoxelLandscapeLayerBlend.InnerSingleton,
			StaticRegisterNativesUMaterialExpressionVoxelLandscapeLayerBlend,
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
	return Z_Registration_Info_UClass_UMaterialExpressionVoxelLandscapeLayerBlend.InnerSingleton;
}
UClass* Z_Construct_UClass_UMaterialExpressionVoxelLandscapeLayerBlend_NoRegister()
{
	return UMaterialExpressionVoxelLandscapeLayerBlend::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UMaterialExpressionVoxelLandscapeLayerBlend_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "VoxelRender/VoxelMaterialExpressions.h" },
		{ "ModuleRelativePath", "Public/VoxelRender/VoxelMaterialExpressions.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionVoxelLandscapeLayerBlend>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMaterialExpressionVoxelLandscapeLayerBlend_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMaterialExpressionLandscapeLayerBlend,
	(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionVoxelLandscapeLayerBlend_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionVoxelLandscapeLayerBlend_Statics::ClassParams = {
	&UMaterialExpressionVoxelLandscapeLayerBlend::StaticClass,
	"MaterialExpressions",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001020B4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionVoxelLandscapeLayerBlend_Statics::Class_MetaDataParams), Z_Construct_UClass_UMaterialExpressionVoxelLandscapeLayerBlend_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMaterialExpressionVoxelLandscapeLayerBlend()
{
	if (!Z_Registration_Info_UClass_UMaterialExpressionVoxelLandscapeLayerBlend.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionVoxelLandscapeLayerBlend.OuterSingleton, Z_Construct_UClass_UMaterialExpressionVoxelLandscapeLayerBlend_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMaterialExpressionVoxelLandscapeLayerBlend.OuterSingleton;
}
UMaterialExpressionVoxelLandscapeLayerBlend::UMaterialExpressionVoxelLandscapeLayerBlend(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionVoxelLandscapeLayerBlend);
UMaterialExpressionVoxelLandscapeLayerBlend::~UMaterialExpressionVoxelLandscapeLayerBlend() {}
// ********** End Class UMaterialExpressionVoxelLandscapeLayerBlend ********************************

// ********** Begin Class UMaterialExpressionVoxelLandscapeLayerSwitch *****************************
void UMaterialExpressionVoxelLandscapeLayerSwitch::StaticRegisterNativesUMaterialExpressionVoxelLandscapeLayerSwitch()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UMaterialExpressionVoxelLandscapeLayerSwitch;
UClass* UMaterialExpressionVoxelLandscapeLayerSwitch::GetPrivateStaticClass()
{
	using TClass = UMaterialExpressionVoxelLandscapeLayerSwitch;
	if (!Z_Registration_Info_UClass_UMaterialExpressionVoxelLandscapeLayerSwitch.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("MaterialExpressionVoxelLandscapeLayerSwitch"),
			Z_Registration_Info_UClass_UMaterialExpressionVoxelLandscapeLayerSwitch.InnerSingleton,
			StaticRegisterNativesUMaterialExpressionVoxelLandscapeLayerSwitch,
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
	return Z_Registration_Info_UClass_UMaterialExpressionVoxelLandscapeLayerSwitch.InnerSingleton;
}
UClass* Z_Construct_UClass_UMaterialExpressionVoxelLandscapeLayerSwitch_NoRegister()
{
	return UMaterialExpressionVoxelLandscapeLayerSwitch::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UMaterialExpressionVoxelLandscapeLayerSwitch_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "VoxelRender/VoxelMaterialExpressions.h" },
		{ "ModuleRelativePath", "Public/VoxelRender/VoxelMaterialExpressions.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionVoxelLandscapeLayerSwitch>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMaterialExpressionVoxelLandscapeLayerSwitch_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMaterialExpressionLandscapeLayerSwitch,
	(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionVoxelLandscapeLayerSwitch_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionVoxelLandscapeLayerSwitch_Statics::ClassParams = {
	&UMaterialExpressionVoxelLandscapeLayerSwitch::StaticClass,
	"MaterialExpressions",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001020B4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionVoxelLandscapeLayerSwitch_Statics::Class_MetaDataParams), Z_Construct_UClass_UMaterialExpressionVoxelLandscapeLayerSwitch_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMaterialExpressionVoxelLandscapeLayerSwitch()
{
	if (!Z_Registration_Info_UClass_UMaterialExpressionVoxelLandscapeLayerSwitch.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionVoxelLandscapeLayerSwitch.OuterSingleton, Z_Construct_UClass_UMaterialExpressionVoxelLandscapeLayerSwitch_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMaterialExpressionVoxelLandscapeLayerSwitch.OuterSingleton;
}
UMaterialExpressionVoxelLandscapeLayerSwitch::UMaterialExpressionVoxelLandscapeLayerSwitch(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionVoxelLandscapeLayerSwitch);
UMaterialExpressionVoxelLandscapeLayerSwitch::~UMaterialExpressionVoxelLandscapeLayerSwitch() {}
// ********** End Class UMaterialExpressionVoxelLandscapeLayerSwitch *******************************

// ********** Begin Class UMaterialExpressionVoxelLandscapeLayerWeight *****************************
void UMaterialExpressionVoxelLandscapeLayerWeight::StaticRegisterNativesUMaterialExpressionVoxelLandscapeLayerWeight()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UMaterialExpressionVoxelLandscapeLayerWeight;
UClass* UMaterialExpressionVoxelLandscapeLayerWeight::GetPrivateStaticClass()
{
	using TClass = UMaterialExpressionVoxelLandscapeLayerWeight;
	if (!Z_Registration_Info_UClass_UMaterialExpressionVoxelLandscapeLayerWeight.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("MaterialExpressionVoxelLandscapeLayerWeight"),
			Z_Registration_Info_UClass_UMaterialExpressionVoxelLandscapeLayerWeight.InnerSingleton,
			StaticRegisterNativesUMaterialExpressionVoxelLandscapeLayerWeight,
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
	return Z_Registration_Info_UClass_UMaterialExpressionVoxelLandscapeLayerWeight.InnerSingleton;
}
UClass* Z_Construct_UClass_UMaterialExpressionVoxelLandscapeLayerWeight_NoRegister()
{
	return UMaterialExpressionVoxelLandscapeLayerWeight::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UMaterialExpressionVoxelLandscapeLayerWeight_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "VoxelRender/VoxelMaterialExpressions.h" },
		{ "ModuleRelativePath", "Public/VoxelRender/VoxelMaterialExpressions.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionVoxelLandscapeLayerWeight>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMaterialExpressionVoxelLandscapeLayerWeight_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMaterialExpressionLandscapeLayerWeight,
	(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionVoxelLandscapeLayerWeight_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionVoxelLandscapeLayerWeight_Statics::ClassParams = {
	&UMaterialExpressionVoxelLandscapeLayerWeight::StaticClass,
	"MaterialExpressions",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001020B4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionVoxelLandscapeLayerWeight_Statics::Class_MetaDataParams), Z_Construct_UClass_UMaterialExpressionVoxelLandscapeLayerWeight_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMaterialExpressionVoxelLandscapeLayerWeight()
{
	if (!Z_Registration_Info_UClass_UMaterialExpressionVoxelLandscapeLayerWeight.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionVoxelLandscapeLayerWeight.OuterSingleton, Z_Construct_UClass_UMaterialExpressionVoxelLandscapeLayerWeight_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMaterialExpressionVoxelLandscapeLayerWeight.OuterSingleton;
}
UMaterialExpressionVoxelLandscapeLayerWeight::UMaterialExpressionVoxelLandscapeLayerWeight(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionVoxelLandscapeLayerWeight);
UMaterialExpressionVoxelLandscapeLayerWeight::~UMaterialExpressionVoxelLandscapeLayerWeight() {}
// ********** End Class UMaterialExpressionVoxelLandscapeLayerWeight *******************************

// ********** Begin Class UMaterialExpressionVoxelLandscapeLayerSample *****************************
void UMaterialExpressionVoxelLandscapeLayerSample::StaticRegisterNativesUMaterialExpressionVoxelLandscapeLayerSample()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UMaterialExpressionVoxelLandscapeLayerSample;
UClass* UMaterialExpressionVoxelLandscapeLayerSample::GetPrivateStaticClass()
{
	using TClass = UMaterialExpressionVoxelLandscapeLayerSample;
	if (!Z_Registration_Info_UClass_UMaterialExpressionVoxelLandscapeLayerSample.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("MaterialExpressionVoxelLandscapeLayerSample"),
			Z_Registration_Info_UClass_UMaterialExpressionVoxelLandscapeLayerSample.InnerSingleton,
			StaticRegisterNativesUMaterialExpressionVoxelLandscapeLayerSample,
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
	return Z_Registration_Info_UClass_UMaterialExpressionVoxelLandscapeLayerSample.InnerSingleton;
}
UClass* Z_Construct_UClass_UMaterialExpressionVoxelLandscapeLayerSample_NoRegister()
{
	return UMaterialExpressionVoxelLandscapeLayerSample::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UMaterialExpressionVoxelLandscapeLayerSample_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "VoxelRender/VoxelMaterialExpressions.h" },
		{ "ModuleRelativePath", "Public/VoxelRender/VoxelMaterialExpressions.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionVoxelLandscapeLayerSample>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMaterialExpressionVoxelLandscapeLayerSample_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMaterialExpressionLandscapeLayerSample,
	(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionVoxelLandscapeLayerSample_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionVoxelLandscapeLayerSample_Statics::ClassParams = {
	&UMaterialExpressionVoxelLandscapeLayerSample::StaticClass,
	"MaterialExpressions",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001020B4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionVoxelLandscapeLayerSample_Statics::Class_MetaDataParams), Z_Construct_UClass_UMaterialExpressionVoxelLandscapeLayerSample_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMaterialExpressionVoxelLandscapeLayerSample()
{
	if (!Z_Registration_Info_UClass_UMaterialExpressionVoxelLandscapeLayerSample.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionVoxelLandscapeLayerSample.OuterSingleton, Z_Construct_UClass_UMaterialExpressionVoxelLandscapeLayerSample_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMaterialExpressionVoxelLandscapeLayerSample.OuterSingleton;
}
UMaterialExpressionVoxelLandscapeLayerSample::UMaterialExpressionVoxelLandscapeLayerSample(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionVoxelLandscapeLayerSample);
UMaterialExpressionVoxelLandscapeLayerSample::~UMaterialExpressionVoxelLandscapeLayerSample() {}
// ********** End Class UMaterialExpressionVoxelLandscapeLayerSample *******************************

// ********** Begin Class UMaterialExpressionVoxelLandscapeVisibilityMask **************************
void UMaterialExpressionVoxelLandscapeVisibilityMask::StaticRegisterNativesUMaterialExpressionVoxelLandscapeVisibilityMask()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UMaterialExpressionVoxelLandscapeVisibilityMask;
UClass* UMaterialExpressionVoxelLandscapeVisibilityMask::GetPrivateStaticClass()
{
	using TClass = UMaterialExpressionVoxelLandscapeVisibilityMask;
	if (!Z_Registration_Info_UClass_UMaterialExpressionVoxelLandscapeVisibilityMask.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("MaterialExpressionVoxelLandscapeVisibilityMask"),
			Z_Registration_Info_UClass_UMaterialExpressionVoxelLandscapeVisibilityMask.InnerSingleton,
			StaticRegisterNativesUMaterialExpressionVoxelLandscapeVisibilityMask,
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
	return Z_Registration_Info_UClass_UMaterialExpressionVoxelLandscapeVisibilityMask.InnerSingleton;
}
UClass* Z_Construct_UClass_UMaterialExpressionVoxelLandscapeVisibilityMask_NoRegister()
{
	return UMaterialExpressionVoxelLandscapeVisibilityMask::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UMaterialExpressionVoxelLandscapeVisibilityMask_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "VoxelRender/VoxelMaterialExpressions.h" },
		{ "ModuleRelativePath", "Public/VoxelRender/VoxelMaterialExpressions.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionVoxelLandscapeVisibilityMask>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMaterialExpressionVoxelLandscapeVisibilityMask_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMaterialExpressionLandscapeVisibilityMask,
	(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionVoxelLandscapeVisibilityMask_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionVoxelLandscapeVisibilityMask_Statics::ClassParams = {
	&UMaterialExpressionVoxelLandscapeVisibilityMask::StaticClass,
	"MaterialExpressions",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001020B4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionVoxelLandscapeVisibilityMask_Statics::Class_MetaDataParams), Z_Construct_UClass_UMaterialExpressionVoxelLandscapeVisibilityMask_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMaterialExpressionVoxelLandscapeVisibilityMask()
{
	if (!Z_Registration_Info_UClass_UMaterialExpressionVoxelLandscapeVisibilityMask.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionVoxelLandscapeVisibilityMask.OuterSingleton, Z_Construct_UClass_UMaterialExpressionVoxelLandscapeVisibilityMask_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMaterialExpressionVoxelLandscapeVisibilityMask.OuterSingleton;
}
UMaterialExpressionVoxelLandscapeVisibilityMask::UMaterialExpressionVoxelLandscapeVisibilityMask(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionVoxelLandscapeVisibilityMask);
UMaterialExpressionVoxelLandscapeVisibilityMask::~UMaterialExpressionVoxelLandscapeVisibilityMask() {}
// ********** End Class UMaterialExpressionVoxelLandscapeVisibilityMask ****************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelRender_VoxelMaterialExpressions_h__Script_Voxel_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialExpressionVoxelLandscapeLayerBlend, UMaterialExpressionVoxelLandscapeLayerBlend::StaticClass, TEXT("UMaterialExpressionVoxelLandscapeLayerBlend"), &Z_Registration_Info_UClass_UMaterialExpressionVoxelLandscapeLayerBlend, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionVoxelLandscapeLayerBlend), 1129774786U) },
		{ Z_Construct_UClass_UMaterialExpressionVoxelLandscapeLayerSwitch, UMaterialExpressionVoxelLandscapeLayerSwitch::StaticClass, TEXT("UMaterialExpressionVoxelLandscapeLayerSwitch"), &Z_Registration_Info_UClass_UMaterialExpressionVoxelLandscapeLayerSwitch, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionVoxelLandscapeLayerSwitch), 3260127764U) },
		{ Z_Construct_UClass_UMaterialExpressionVoxelLandscapeLayerWeight, UMaterialExpressionVoxelLandscapeLayerWeight::StaticClass, TEXT("UMaterialExpressionVoxelLandscapeLayerWeight"), &Z_Registration_Info_UClass_UMaterialExpressionVoxelLandscapeLayerWeight, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionVoxelLandscapeLayerWeight), 3587347394U) },
		{ Z_Construct_UClass_UMaterialExpressionVoxelLandscapeLayerSample, UMaterialExpressionVoxelLandscapeLayerSample::StaticClass, TEXT("UMaterialExpressionVoxelLandscapeLayerSample"), &Z_Registration_Info_UClass_UMaterialExpressionVoxelLandscapeLayerSample, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionVoxelLandscapeLayerSample), 2063677547U) },
		{ Z_Construct_UClass_UMaterialExpressionVoxelLandscapeVisibilityMask, UMaterialExpressionVoxelLandscapeVisibilityMask::StaticClass, TEXT("UMaterialExpressionVoxelLandscapeVisibilityMask"), &Z_Registration_Info_UClass_UMaterialExpressionVoxelLandscapeVisibilityMask, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionVoxelLandscapeVisibilityMask), 3781511049U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelRender_VoxelMaterialExpressions_h__Script_Voxel_3920681566(TEXT("/Script/Voxel"),
	Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelRender_VoxelMaterialExpressions_h__Script_Voxel_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelRender_VoxelMaterialExpressions_h__Script_Voxel_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
