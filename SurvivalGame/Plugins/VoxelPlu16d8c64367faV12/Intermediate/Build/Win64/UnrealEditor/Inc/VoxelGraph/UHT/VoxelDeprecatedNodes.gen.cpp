// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VoxelNodes/VoxelDeprecatedNodes.h"
#include "VoxelGenerators/VoxelGeneratorPicker.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeVoxelDeprecatedNodes() {}

// ********** Begin Cross Module References ********************************************************
UPackage* Z_Construct_UPackage__Script_VoxelGraph();
VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelGeneratorPicker();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelExposedNode();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelMaterialNode();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_CreateDoubleIndexMaterial();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_CreateDoubleIndexMaterial_NoRegister();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_GetDoubleIndex();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_GetDoubleIndex_NoRegister();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_MakeMaterialFromColor();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_MakeMaterialFromColor_NoRegister();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_MakeMaterialFromDoubleIndex();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_MakeMaterialFromDoubleIndex_NoRegister();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_MakeMaterialFromSingleIndex();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_MakeMaterialFromSingleIndex_NoRegister();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_MaterialSetter();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_PerlinWormDistance();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_PerlinWormDistance_NoRegister();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_SetDoubleIndex();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_SetDoubleIndex_NoRegister();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_WorldGeneratorSampler();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_WorldGeneratorSampler_NoRegister();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_XI();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_XI_NoRegister();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_YI();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_YI_NoRegister();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_ZI();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_ZI_NoRegister();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNodeHelper();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UVoxelNode_MakeMaterialFromSingleIndex ***********************************
void UVoxelNode_MakeMaterialFromSingleIndex::StaticRegisterNativesUVoxelNode_MakeMaterialFromSingleIndex()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UVoxelNode_MakeMaterialFromSingleIndex;
UClass* UVoxelNode_MakeMaterialFromSingleIndex::GetPrivateStaticClass()
{
	using TClass = UVoxelNode_MakeMaterialFromSingleIndex;
	if (!Z_Registration_Info_UClass_UVoxelNode_MakeMaterialFromSingleIndex.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("VoxelNode_MakeMaterialFromSingleIndex"),
			Z_Registration_Info_UClass_UVoxelNode_MakeMaterialFromSingleIndex.InnerSingleton,
			StaticRegisterNativesUVoxelNode_MakeMaterialFromSingleIndex,
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
	return Z_Registration_Info_UClass_UVoxelNode_MakeMaterialFromSingleIndex.InnerSingleton;
}
UClass* Z_Construct_UClass_UVoxelNode_MakeMaterialFromSingleIndex_NoRegister()
{
	return UVoxelNode_MakeMaterialFromSingleIndex::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UVoxelNode_MakeMaterialFromSingleIndex_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "DisplayName", "Make Material From Single Index" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelNodes/VoxelDeprecatedNodes.h" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelDeprecatedNodes.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelNode_MakeMaterialFromSingleIndex>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UVoxelNode_MakeMaterialFromSingleIndex_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UVoxelMaterialNode,
	(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_MakeMaterialFromSingleIndex_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelNode_MakeMaterialFromSingleIndex_Statics::ClassParams = {
	&UVoxelNode_MakeMaterialFromSingleIndex::StaticClass,
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
	0x001012A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_MakeMaterialFromSingleIndex_Statics::Class_MetaDataParams), Z_Construct_UClass_UVoxelNode_MakeMaterialFromSingleIndex_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVoxelNode_MakeMaterialFromSingleIndex()
{
	if (!Z_Registration_Info_UClass_UVoxelNode_MakeMaterialFromSingleIndex.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelNode_MakeMaterialFromSingleIndex.OuterSingleton, Z_Construct_UClass_UVoxelNode_MakeMaterialFromSingleIndex_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVoxelNode_MakeMaterialFromSingleIndex.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelNode_MakeMaterialFromSingleIndex);
UVoxelNode_MakeMaterialFromSingleIndex::~UVoxelNode_MakeMaterialFromSingleIndex() {}
// ********** End Class UVoxelNode_MakeMaterialFromSingleIndex *************************************

// ********** Begin Class UVoxelNode_GetDoubleIndex ************************************************
void UVoxelNode_GetDoubleIndex::StaticRegisterNativesUVoxelNode_GetDoubleIndex()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UVoxelNode_GetDoubleIndex;
UClass* UVoxelNode_GetDoubleIndex::GetPrivateStaticClass()
{
	using TClass = UVoxelNode_GetDoubleIndex;
	if (!Z_Registration_Info_UClass_UVoxelNode_GetDoubleIndex.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("VoxelNode_GetDoubleIndex"),
			Z_Registration_Info_UClass_UVoxelNode_GetDoubleIndex.InnerSingleton,
			StaticRegisterNativesUVoxelNode_GetDoubleIndex,
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
	return Z_Registration_Info_UClass_UVoxelNode_GetDoubleIndex.InnerSingleton;
}
UClass* Z_Construct_UClass_UVoxelNode_GetDoubleIndex_NoRegister()
{
	return UVoxelNode_GetDoubleIndex::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UVoxelNode_GetDoubleIndex_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "DisplayName", "Get Double Index" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelNodes/VoxelDeprecatedNodes.h" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelDeprecatedNodes.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelNode_GetDoubleIndex>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UVoxelNode_GetDoubleIndex_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UVoxelMaterialNode,
	(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_GetDoubleIndex_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelNode_GetDoubleIndex_Statics::ClassParams = {
	&UVoxelNode_GetDoubleIndex::StaticClass,
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
	0x001012A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_GetDoubleIndex_Statics::Class_MetaDataParams), Z_Construct_UClass_UVoxelNode_GetDoubleIndex_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVoxelNode_GetDoubleIndex()
{
	if (!Z_Registration_Info_UClass_UVoxelNode_GetDoubleIndex.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelNode_GetDoubleIndex.OuterSingleton, Z_Construct_UClass_UVoxelNode_GetDoubleIndex_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVoxelNode_GetDoubleIndex.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelNode_GetDoubleIndex);
UVoxelNode_GetDoubleIndex::~UVoxelNode_GetDoubleIndex() {}
// ********** End Class UVoxelNode_GetDoubleIndex **************************************************

// ********** Begin Class UVoxelNode_MakeMaterialFromColor *****************************************
void UVoxelNode_MakeMaterialFromColor::StaticRegisterNativesUVoxelNode_MakeMaterialFromColor()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UVoxelNode_MakeMaterialFromColor;
UClass* UVoxelNode_MakeMaterialFromColor::GetPrivateStaticClass()
{
	using TClass = UVoxelNode_MakeMaterialFromColor;
	if (!Z_Registration_Info_UClass_UVoxelNode_MakeMaterialFromColor.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("VoxelNode_MakeMaterialFromColor"),
			Z_Registration_Info_UClass_UVoxelNode_MakeMaterialFromColor.InnerSingleton,
			StaticRegisterNativesUVoxelNode_MakeMaterialFromColor,
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
	return Z_Registration_Info_UClass_UVoxelNode_MakeMaterialFromColor.InnerSingleton;
}
UClass* Z_Construct_UClass_UVoxelNode_MakeMaterialFromColor_NoRegister()
{
	return UVoxelNode_MakeMaterialFromColor::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UVoxelNode_MakeMaterialFromColor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "DisplayName", "Make Material From Color" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelNodes/VoxelDeprecatedNodes.h" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelDeprecatedNodes.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelNode_MakeMaterialFromColor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UVoxelNode_MakeMaterialFromColor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UVoxelMaterialNode,
	(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_MakeMaterialFromColor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelNode_MakeMaterialFromColor_Statics::ClassParams = {
	&UVoxelNode_MakeMaterialFromColor::StaticClass,
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
	0x001012A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_MakeMaterialFromColor_Statics::Class_MetaDataParams), Z_Construct_UClass_UVoxelNode_MakeMaterialFromColor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVoxelNode_MakeMaterialFromColor()
{
	if (!Z_Registration_Info_UClass_UVoxelNode_MakeMaterialFromColor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelNode_MakeMaterialFromColor.OuterSingleton, Z_Construct_UClass_UVoxelNode_MakeMaterialFromColor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVoxelNode_MakeMaterialFromColor.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelNode_MakeMaterialFromColor);
UVoxelNode_MakeMaterialFromColor::~UVoxelNode_MakeMaterialFromColor() {}
// ********** End Class UVoxelNode_MakeMaterialFromColor *******************************************

// ********** Begin Class UVoxelNode_MakeMaterialFromDoubleIndex ***********************************
void UVoxelNode_MakeMaterialFromDoubleIndex::StaticRegisterNativesUVoxelNode_MakeMaterialFromDoubleIndex()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UVoxelNode_MakeMaterialFromDoubleIndex;
UClass* UVoxelNode_MakeMaterialFromDoubleIndex::GetPrivateStaticClass()
{
	using TClass = UVoxelNode_MakeMaterialFromDoubleIndex;
	if (!Z_Registration_Info_UClass_UVoxelNode_MakeMaterialFromDoubleIndex.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("VoxelNode_MakeMaterialFromDoubleIndex"),
			Z_Registration_Info_UClass_UVoxelNode_MakeMaterialFromDoubleIndex.InnerSingleton,
			StaticRegisterNativesUVoxelNode_MakeMaterialFromDoubleIndex,
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
	return Z_Registration_Info_UClass_UVoxelNode_MakeMaterialFromDoubleIndex.InnerSingleton;
}
UClass* Z_Construct_UClass_UVoxelNode_MakeMaterialFromDoubleIndex_NoRegister()
{
	return UVoxelNode_MakeMaterialFromDoubleIndex::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UVoxelNode_MakeMaterialFromDoubleIndex_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "DisplayName", "Make Material From Double Index" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelNodes/VoxelDeprecatedNodes.h" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelDeprecatedNodes.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelNode_MakeMaterialFromDoubleIndex>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UVoxelNode_MakeMaterialFromDoubleIndex_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UVoxelMaterialNode,
	(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_MakeMaterialFromDoubleIndex_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelNode_MakeMaterialFromDoubleIndex_Statics::ClassParams = {
	&UVoxelNode_MakeMaterialFromDoubleIndex::StaticClass,
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
	0x001012A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_MakeMaterialFromDoubleIndex_Statics::Class_MetaDataParams), Z_Construct_UClass_UVoxelNode_MakeMaterialFromDoubleIndex_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVoxelNode_MakeMaterialFromDoubleIndex()
{
	if (!Z_Registration_Info_UClass_UVoxelNode_MakeMaterialFromDoubleIndex.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelNode_MakeMaterialFromDoubleIndex.OuterSingleton, Z_Construct_UClass_UVoxelNode_MakeMaterialFromDoubleIndex_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVoxelNode_MakeMaterialFromDoubleIndex.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelNode_MakeMaterialFromDoubleIndex);
UVoxelNode_MakeMaterialFromDoubleIndex::~UVoxelNode_MakeMaterialFromDoubleIndex() {}
// ********** End Class UVoxelNode_MakeMaterialFromDoubleIndex *************************************

// ********** Begin Class UVoxelNode_CreateDoubleIndexMaterial *************************************
void UVoxelNode_CreateDoubleIndexMaterial::StaticRegisterNativesUVoxelNode_CreateDoubleIndexMaterial()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UVoxelNode_CreateDoubleIndexMaterial;
UClass* UVoxelNode_CreateDoubleIndexMaterial::GetPrivateStaticClass()
{
	using TClass = UVoxelNode_CreateDoubleIndexMaterial;
	if (!Z_Registration_Info_UClass_UVoxelNode_CreateDoubleIndexMaterial.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("VoxelNode_CreateDoubleIndexMaterial"),
			Z_Registration_Info_UClass_UVoxelNode_CreateDoubleIndexMaterial.InnerSingleton,
			StaticRegisterNativesUVoxelNode_CreateDoubleIndexMaterial,
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
	return Z_Registration_Info_UClass_UVoxelNode_CreateDoubleIndexMaterial.InnerSingleton;
}
UClass* Z_Construct_UClass_UVoxelNode_CreateDoubleIndexMaterial_NoRegister()
{
	return UVoxelNode_CreateDoubleIndexMaterial::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UVoxelNode_CreateDoubleIndexMaterial_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "DisplayName", "Create Double Index Material" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelNodes/VoxelDeprecatedNodes.h" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelDeprecatedNodes.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelNode_CreateDoubleIndexMaterial>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UVoxelNode_CreateDoubleIndexMaterial_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UVoxelMaterialNode,
	(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_CreateDoubleIndexMaterial_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelNode_CreateDoubleIndexMaterial_Statics::ClassParams = {
	&UVoxelNode_CreateDoubleIndexMaterial::StaticClass,
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
	0x001012A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_CreateDoubleIndexMaterial_Statics::Class_MetaDataParams), Z_Construct_UClass_UVoxelNode_CreateDoubleIndexMaterial_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVoxelNode_CreateDoubleIndexMaterial()
{
	if (!Z_Registration_Info_UClass_UVoxelNode_CreateDoubleIndexMaterial.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelNode_CreateDoubleIndexMaterial.OuterSingleton, Z_Construct_UClass_UVoxelNode_CreateDoubleIndexMaterial_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVoxelNode_CreateDoubleIndexMaterial.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelNode_CreateDoubleIndexMaterial);
UVoxelNode_CreateDoubleIndexMaterial::~UVoxelNode_CreateDoubleIndexMaterial() {}
// ********** End Class UVoxelNode_CreateDoubleIndexMaterial ***************************************

// ********** Begin Class UVoxelNode_SetDoubleIndex ************************************************
void UVoxelNode_SetDoubleIndex::StaticRegisterNativesUVoxelNode_SetDoubleIndex()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UVoxelNode_SetDoubleIndex;
UClass* UVoxelNode_SetDoubleIndex::GetPrivateStaticClass()
{
	using TClass = UVoxelNode_SetDoubleIndex;
	if (!Z_Registration_Info_UClass_UVoxelNode_SetDoubleIndex.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("VoxelNode_SetDoubleIndex"),
			Z_Registration_Info_UClass_UVoxelNode_SetDoubleIndex.InnerSingleton,
			StaticRegisterNativesUVoxelNode_SetDoubleIndex,
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
	return Z_Registration_Info_UClass_UVoxelNode_SetDoubleIndex.InnerSingleton;
}
UClass* Z_Construct_UClass_UVoxelNode_SetDoubleIndex_NoRegister()
{
	return UVoxelNode_SetDoubleIndex::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UVoxelNode_SetDoubleIndex_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//////////////////////////////////////////////////////////////////////////////////////\n" },
#endif
		{ "DisplayName", "Set Double Index" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelNodes/VoxelDeprecatedNodes.h" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelDeprecatedNodes.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelNode_SetDoubleIndex>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UVoxelNode_SetDoubleIndex_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UVoxelNode_MaterialSetter,
	(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_SetDoubleIndex_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelNode_SetDoubleIndex_Statics::ClassParams = {
	&UVoxelNode_SetDoubleIndex::StaticClass,
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
	0x001012A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_SetDoubleIndex_Statics::Class_MetaDataParams), Z_Construct_UClass_UVoxelNode_SetDoubleIndex_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVoxelNode_SetDoubleIndex()
{
	if (!Z_Registration_Info_UClass_UVoxelNode_SetDoubleIndex.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelNode_SetDoubleIndex.OuterSingleton, Z_Construct_UClass_UVoxelNode_SetDoubleIndex_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVoxelNode_SetDoubleIndex.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelNode_SetDoubleIndex);
UVoxelNode_SetDoubleIndex::~UVoxelNode_SetDoubleIndex() {}
// ********** End Class UVoxelNode_SetDoubleIndex **************************************************

// ********** Begin Class UVoxelNode_WorldGeneratorSampler *****************************************
void UVoxelNode_WorldGeneratorSampler::StaticRegisterNativesUVoxelNode_WorldGeneratorSampler()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UVoxelNode_WorldGeneratorSampler;
UClass* UVoxelNode_WorldGeneratorSampler::GetPrivateStaticClass()
{
	using TClass = UVoxelNode_WorldGeneratorSampler;
	if (!Z_Registration_Info_UClass_UVoxelNode_WorldGeneratorSampler.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("VoxelNode_WorldGeneratorSampler"),
			Z_Registration_Info_UClass_UVoxelNode_WorldGeneratorSampler.InnerSingleton,
			StaticRegisterNativesUVoxelNode_WorldGeneratorSampler,
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
	return Z_Registration_Info_UClass_UVoxelNode_WorldGeneratorSampler.InnerSingleton;
}
UClass* Z_Construct_UClass_UVoxelNode_WorldGeneratorSampler_NoRegister()
{
	return UVoxelNode_WorldGeneratorSampler::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UVoxelNode_WorldGeneratorSampler_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//////////////////////////////////////////////////////////////////////////////////////\n" },
#endif
		{ "DisplayName", "Generator Sampler" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelNodes/VoxelDeprecatedNodes.h" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelDeprecatedNodes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldGenerator_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelDeprecatedNodes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Seeds_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelDeprecatedNodes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_WorldGenerator;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Seeds_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Seeds;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelNode_WorldGeneratorSampler>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVoxelNode_WorldGeneratorSampler_Statics::NewProp_WorldGenerator = { "WorldGenerator", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelNode_WorldGeneratorSampler, WorldGenerator), Z_Construct_UScriptStruct_FVoxelGeneratorPicker, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldGenerator_MetaData), NewProp_WorldGenerator_MetaData) }; // 3276742823
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UVoxelNode_WorldGeneratorSampler_Statics::NewProp_Seeds_Inner = { "Seeds", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UVoxelNode_WorldGeneratorSampler_Statics::NewProp_Seeds = { "Seeds", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelNode_WorldGeneratorSampler, Seeds), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Seeds_MetaData), NewProp_Seeds_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelNode_WorldGeneratorSampler_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelNode_WorldGeneratorSampler_Statics::NewProp_WorldGenerator,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelNode_WorldGeneratorSampler_Statics::NewProp_Seeds_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelNode_WorldGeneratorSampler_Statics::NewProp_Seeds,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_WorldGeneratorSampler_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UVoxelNode_WorldGeneratorSampler_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UVoxelExposedNode,
	(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_WorldGeneratorSampler_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelNode_WorldGeneratorSampler_Statics::ClassParams = {
	&UVoxelNode_WorldGeneratorSampler::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UVoxelNode_WorldGeneratorSampler_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_WorldGeneratorSampler_Statics::PropPointers),
	0,
	0x001012A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_WorldGeneratorSampler_Statics::Class_MetaDataParams), Z_Construct_UClass_UVoxelNode_WorldGeneratorSampler_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVoxelNode_WorldGeneratorSampler()
{
	if (!Z_Registration_Info_UClass_UVoxelNode_WorldGeneratorSampler.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelNode_WorldGeneratorSampler.OuterSingleton, Z_Construct_UClass_UVoxelNode_WorldGeneratorSampler_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVoxelNode_WorldGeneratorSampler.OuterSingleton;
}
UVoxelNode_WorldGeneratorSampler::UVoxelNode_WorldGeneratorSampler(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelNode_WorldGeneratorSampler);
UVoxelNode_WorldGeneratorSampler::~UVoxelNode_WorldGeneratorSampler() {}
// ********** End Class UVoxelNode_WorldGeneratorSampler *******************************************

// ********** Begin Class UVoxelNode_XI ************************************************************
void UVoxelNode_XI::StaticRegisterNativesUVoxelNode_XI()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UVoxelNode_XI;
UClass* UVoxelNode_XI::GetPrivateStaticClass()
{
	using TClass = UVoxelNode_XI;
	if (!Z_Registration_Info_UClass_UVoxelNode_XI.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("VoxelNode_XI"),
			Z_Registration_Info_UClass_UVoxelNode_XI.InnerSingleton,
			StaticRegisterNativesUVoxelNode_XI,
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
	return Z_Registration_Info_UClass_UVoxelNode_XI.InnerSingleton;
}
UClass* Z_Construct_UClass_UVoxelNode_XI_NoRegister()
{
	return UVoxelNode_XI::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UVoxelNode_XI_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//////////////////////////////////////////////////////////////////////////////////////\n" },
#endif
		{ "DisplayName", "X (int)" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelNodes/VoxelDeprecatedNodes.h" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelDeprecatedNodes.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelNode_XI>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UVoxelNode_XI_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UVoxelNodeHelper,
	(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_XI_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelNode_XI_Statics::ClassParams = {
	&UVoxelNode_XI::StaticClass,
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
	0x001012A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_XI_Statics::Class_MetaDataParams), Z_Construct_UClass_UVoxelNode_XI_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVoxelNode_XI()
{
	if (!Z_Registration_Info_UClass_UVoxelNode_XI.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelNode_XI.OuterSingleton, Z_Construct_UClass_UVoxelNode_XI_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVoxelNode_XI.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelNode_XI);
UVoxelNode_XI::~UVoxelNode_XI() {}
// ********** End Class UVoxelNode_XI **************************************************************

// ********** Begin Class UVoxelNode_YI ************************************************************
void UVoxelNode_YI::StaticRegisterNativesUVoxelNode_YI()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UVoxelNode_YI;
UClass* UVoxelNode_YI::GetPrivateStaticClass()
{
	using TClass = UVoxelNode_YI;
	if (!Z_Registration_Info_UClass_UVoxelNode_YI.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("VoxelNode_YI"),
			Z_Registration_Info_UClass_UVoxelNode_YI.InnerSingleton,
			StaticRegisterNativesUVoxelNode_YI,
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
	return Z_Registration_Info_UClass_UVoxelNode_YI.InnerSingleton;
}
UClass* Z_Construct_UClass_UVoxelNode_YI_NoRegister()
{
	return UVoxelNode_YI::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UVoxelNode_YI_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "DisplayName", "Y (int)" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelNodes/VoxelDeprecatedNodes.h" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelDeprecatedNodes.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelNode_YI>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UVoxelNode_YI_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UVoxelNodeHelper,
	(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_YI_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelNode_YI_Statics::ClassParams = {
	&UVoxelNode_YI::StaticClass,
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
	0x001012A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_YI_Statics::Class_MetaDataParams), Z_Construct_UClass_UVoxelNode_YI_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVoxelNode_YI()
{
	if (!Z_Registration_Info_UClass_UVoxelNode_YI.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelNode_YI.OuterSingleton, Z_Construct_UClass_UVoxelNode_YI_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVoxelNode_YI.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelNode_YI);
UVoxelNode_YI::~UVoxelNode_YI() {}
// ********** End Class UVoxelNode_YI **************************************************************

// ********** Begin Class UVoxelNode_ZI ************************************************************
void UVoxelNode_ZI::StaticRegisterNativesUVoxelNode_ZI()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UVoxelNode_ZI;
UClass* UVoxelNode_ZI::GetPrivateStaticClass()
{
	using TClass = UVoxelNode_ZI;
	if (!Z_Registration_Info_UClass_UVoxelNode_ZI.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("VoxelNode_ZI"),
			Z_Registration_Info_UClass_UVoxelNode_ZI.InnerSingleton,
			StaticRegisterNativesUVoxelNode_ZI,
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
	return Z_Registration_Info_UClass_UVoxelNode_ZI.InnerSingleton;
}
UClass* Z_Construct_UClass_UVoxelNode_ZI_NoRegister()
{
	return UVoxelNode_ZI::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UVoxelNode_ZI_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "DisplayName", "Z (int)" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelNodes/VoxelDeprecatedNodes.h" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelDeprecatedNodes.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelNode_ZI>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UVoxelNode_ZI_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UVoxelNodeHelper,
	(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_ZI_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelNode_ZI_Statics::ClassParams = {
	&UVoxelNode_ZI::StaticClass,
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
	0x001012A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_ZI_Statics::Class_MetaDataParams), Z_Construct_UClass_UVoxelNode_ZI_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVoxelNode_ZI()
{
	if (!Z_Registration_Info_UClass_UVoxelNode_ZI.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelNode_ZI.OuterSingleton, Z_Construct_UClass_UVoxelNode_ZI_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVoxelNode_ZI.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelNode_ZI);
UVoxelNode_ZI::~UVoxelNode_ZI() {}
// ********** End Class UVoxelNode_ZI **************************************************************

// ********** Begin Class UVoxelNode_PerlinWormDistance ********************************************
void UVoxelNode_PerlinWormDistance::StaticRegisterNativesUVoxelNode_PerlinWormDistance()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UVoxelNode_PerlinWormDistance;
UClass* UVoxelNode_PerlinWormDistance::GetPrivateStaticClass()
{
	using TClass = UVoxelNode_PerlinWormDistance;
	if (!Z_Registration_Info_UClass_UVoxelNode_PerlinWormDistance.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("VoxelNode_PerlinWormDistance"),
			Z_Registration_Info_UClass_UVoxelNode_PerlinWormDistance.InnerSingleton,
			StaticRegisterNativesUVoxelNode_PerlinWormDistance,
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
	return Z_Registration_Info_UClass_UVoxelNode_PerlinWormDistance.InnerSingleton;
}
UClass* Z_Construct_UClass_UVoxelNode_PerlinWormDistance_NoRegister()
{
	return UVoxelNode_PerlinWormDistance::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UVoxelNode_PerlinWormDistance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//////////////////////////////////////////////////////////////////////////////////////\n" },
#endif
		{ "DisplayName", "Perlin Worm Distance" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelNodes/VoxelDeprecatedNodes.h" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelDeprecatedNodes.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelNode_PerlinWormDistance>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UVoxelNode_PerlinWormDistance_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UVoxelNodeHelper,
	(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_PerlinWormDistance_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelNode_PerlinWormDistance_Statics::ClassParams = {
	&UVoxelNode_PerlinWormDistance::StaticClass,
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
	0x001012A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_PerlinWormDistance_Statics::Class_MetaDataParams), Z_Construct_UClass_UVoxelNode_PerlinWormDistance_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVoxelNode_PerlinWormDistance()
{
	if (!Z_Registration_Info_UClass_UVoxelNode_PerlinWormDistance.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelNode_PerlinWormDistance.OuterSingleton, Z_Construct_UClass_UVoxelNode_PerlinWormDistance_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVoxelNode_PerlinWormDistance.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelNode_PerlinWormDistance);
UVoxelNode_PerlinWormDistance::~UVoxelNode_PerlinWormDistance() {}
// ********** End Class UVoxelNode_PerlinWormDistance **********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_VoxelGraph_Public_VoxelNodes_VoxelDeprecatedNodes_h__Script_VoxelGraph_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UVoxelNode_MakeMaterialFromSingleIndex, UVoxelNode_MakeMaterialFromSingleIndex::StaticClass, TEXT("UVoxelNode_MakeMaterialFromSingleIndex"), &Z_Registration_Info_UClass_UVoxelNode_MakeMaterialFromSingleIndex, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelNode_MakeMaterialFromSingleIndex), 650005674U) },
		{ Z_Construct_UClass_UVoxelNode_GetDoubleIndex, UVoxelNode_GetDoubleIndex::StaticClass, TEXT("UVoxelNode_GetDoubleIndex"), &Z_Registration_Info_UClass_UVoxelNode_GetDoubleIndex, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelNode_GetDoubleIndex), 1384104200U) },
		{ Z_Construct_UClass_UVoxelNode_MakeMaterialFromColor, UVoxelNode_MakeMaterialFromColor::StaticClass, TEXT("UVoxelNode_MakeMaterialFromColor"), &Z_Registration_Info_UClass_UVoxelNode_MakeMaterialFromColor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelNode_MakeMaterialFromColor), 243779388U) },
		{ Z_Construct_UClass_UVoxelNode_MakeMaterialFromDoubleIndex, UVoxelNode_MakeMaterialFromDoubleIndex::StaticClass, TEXT("UVoxelNode_MakeMaterialFromDoubleIndex"), &Z_Registration_Info_UClass_UVoxelNode_MakeMaterialFromDoubleIndex, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelNode_MakeMaterialFromDoubleIndex), 2278666149U) },
		{ Z_Construct_UClass_UVoxelNode_CreateDoubleIndexMaterial, UVoxelNode_CreateDoubleIndexMaterial::StaticClass, TEXT("UVoxelNode_CreateDoubleIndexMaterial"), &Z_Registration_Info_UClass_UVoxelNode_CreateDoubleIndexMaterial, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelNode_CreateDoubleIndexMaterial), 3670812831U) },
		{ Z_Construct_UClass_UVoxelNode_SetDoubleIndex, UVoxelNode_SetDoubleIndex::StaticClass, TEXT("UVoxelNode_SetDoubleIndex"), &Z_Registration_Info_UClass_UVoxelNode_SetDoubleIndex, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelNode_SetDoubleIndex), 1945673605U) },
		{ Z_Construct_UClass_UVoxelNode_WorldGeneratorSampler, UVoxelNode_WorldGeneratorSampler::StaticClass, TEXT("UVoxelNode_WorldGeneratorSampler"), &Z_Registration_Info_UClass_UVoxelNode_WorldGeneratorSampler, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelNode_WorldGeneratorSampler), 1588717668U) },
		{ Z_Construct_UClass_UVoxelNode_XI, UVoxelNode_XI::StaticClass, TEXT("UVoxelNode_XI"), &Z_Registration_Info_UClass_UVoxelNode_XI, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelNode_XI), 968971283U) },
		{ Z_Construct_UClass_UVoxelNode_YI, UVoxelNode_YI::StaticClass, TEXT("UVoxelNode_YI"), &Z_Registration_Info_UClass_UVoxelNode_YI, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelNode_YI), 394206330U) },
		{ Z_Construct_UClass_UVoxelNode_ZI, UVoxelNode_ZI::StaticClass, TEXT("UVoxelNode_ZI"), &Z_Registration_Info_UClass_UVoxelNode_ZI, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelNode_ZI), 3657049031U) },
		{ Z_Construct_UClass_UVoxelNode_PerlinWormDistance, UVoxelNode_PerlinWormDistance::StaticClass, TEXT("UVoxelNode_PerlinWormDistance"), &Z_Registration_Info_UClass_UVoxelNode_PerlinWormDistance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelNode_PerlinWormDistance), 967123333U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_VoxelGraph_Public_VoxelNodes_VoxelDeprecatedNodes_h__Script_VoxelGraph_4263576692(TEXT("/Script/VoxelGraph"),
	Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_VoxelGraph_Public_VoxelNodes_VoxelDeprecatedNodes_h__Script_VoxelGraph_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_VoxelGraph_Public_VoxelNodes_VoxelDeprecatedNodes_h__Script_VoxelGraph_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
