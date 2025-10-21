// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Factories/VoxelMaterialCollectionFactory.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeVoxelMaterialCollectionFactory() {}

// ********** Begin Cross Module References ********************************************************
UNREALED_API UClass* Z_Construct_UClass_UFactory();
UPackage* Z_Construct_UPackage__Script_VoxelEditor();
VOXELEDITOR_API UClass* Z_Construct_UClass_UVoxelBasicMaterialCollectionFactory();
VOXELEDITOR_API UClass* Z_Construct_UClass_UVoxelBasicMaterialCollectionFactory_NoRegister();
VOXELEDITOR_API UClass* Z_Construct_UClass_UVoxelInstancedMaterialCollectionFactory();
VOXELEDITOR_API UClass* Z_Construct_UClass_UVoxelInstancedMaterialCollectionFactory_NoRegister();
VOXELEDITOR_API UClass* Z_Construct_UClass_UVoxelInstancedMaterialCollectionInstanceFactory();
VOXELEDITOR_API UClass* Z_Construct_UClass_UVoxelInstancedMaterialCollectionInstanceFactory_NoRegister();
VOXELEDITOR_API UClass* Z_Construct_UClass_UVoxelInstancedMaterialCollectionTemplatesFactory();
VOXELEDITOR_API UClass* Z_Construct_UClass_UVoxelInstancedMaterialCollectionTemplatesFactory_NoRegister();
VOXELEDITOR_API UClass* Z_Construct_UClass_UVoxelLandscapeMaterialCollectionFactory();
VOXELEDITOR_API UClass* Z_Construct_UClass_UVoxelLandscapeMaterialCollectionFactory_NoRegister();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UVoxelBasicMaterialCollectionFactory *************************************
void UVoxelBasicMaterialCollectionFactory::StaticRegisterNativesUVoxelBasicMaterialCollectionFactory()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UVoxelBasicMaterialCollectionFactory;
UClass* UVoxelBasicMaterialCollectionFactory::GetPrivateStaticClass()
{
	using TClass = UVoxelBasicMaterialCollectionFactory;
	if (!Z_Registration_Info_UClass_UVoxelBasicMaterialCollectionFactory.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("VoxelBasicMaterialCollectionFactory"),
			Z_Registration_Info_UClass_UVoxelBasicMaterialCollectionFactory.InnerSingleton,
			StaticRegisterNativesUVoxelBasicMaterialCollectionFactory,
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
	return Z_Registration_Info_UClass_UVoxelBasicMaterialCollectionFactory.InnerSingleton;
}
UClass* Z_Construct_UClass_UVoxelBasicMaterialCollectionFactory_NoRegister()
{
	return UVoxelBasicMaterialCollectionFactory::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UVoxelBasicMaterialCollectionFactory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Factories/VoxelMaterialCollectionFactory.h" },
		{ "ModuleRelativePath", "Private/Factories/VoxelMaterialCollectionFactory.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelBasicMaterialCollectionFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UVoxelBasicMaterialCollectionFactory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UFactory,
	(UObject* (*)())Z_Construct_UPackage__Script_VoxelEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelBasicMaterialCollectionFactory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelBasicMaterialCollectionFactory_Statics::ClassParams = {
	&UVoxelBasicMaterialCollectionFactory::StaticClass,
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
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelBasicMaterialCollectionFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UVoxelBasicMaterialCollectionFactory_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVoxelBasicMaterialCollectionFactory()
{
	if (!Z_Registration_Info_UClass_UVoxelBasicMaterialCollectionFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelBasicMaterialCollectionFactory.OuterSingleton, Z_Construct_UClass_UVoxelBasicMaterialCollectionFactory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVoxelBasicMaterialCollectionFactory.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelBasicMaterialCollectionFactory);
UVoxelBasicMaterialCollectionFactory::~UVoxelBasicMaterialCollectionFactory() {}
// ********** End Class UVoxelBasicMaterialCollectionFactory ***************************************

// ********** Begin Class UVoxelInstancedMaterialCollectionTemplatesFactory ************************
void UVoxelInstancedMaterialCollectionTemplatesFactory::StaticRegisterNativesUVoxelInstancedMaterialCollectionTemplatesFactory()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UVoxelInstancedMaterialCollectionTemplatesFactory;
UClass* UVoxelInstancedMaterialCollectionTemplatesFactory::GetPrivateStaticClass()
{
	using TClass = UVoxelInstancedMaterialCollectionTemplatesFactory;
	if (!Z_Registration_Info_UClass_UVoxelInstancedMaterialCollectionTemplatesFactory.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("VoxelInstancedMaterialCollectionTemplatesFactory"),
			Z_Registration_Info_UClass_UVoxelInstancedMaterialCollectionTemplatesFactory.InnerSingleton,
			StaticRegisterNativesUVoxelInstancedMaterialCollectionTemplatesFactory,
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
	return Z_Registration_Info_UClass_UVoxelInstancedMaterialCollectionTemplatesFactory.InnerSingleton;
}
UClass* Z_Construct_UClass_UVoxelInstancedMaterialCollectionTemplatesFactory_NoRegister()
{
	return UVoxelInstancedMaterialCollectionTemplatesFactory::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UVoxelInstancedMaterialCollectionTemplatesFactory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Factories/VoxelMaterialCollectionFactory.h" },
		{ "ModuleRelativePath", "Private/Factories/VoxelMaterialCollectionFactory.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelInstancedMaterialCollectionTemplatesFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UVoxelInstancedMaterialCollectionTemplatesFactory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UFactory,
	(UObject* (*)())Z_Construct_UPackage__Script_VoxelEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelInstancedMaterialCollectionTemplatesFactory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelInstancedMaterialCollectionTemplatesFactory_Statics::ClassParams = {
	&UVoxelInstancedMaterialCollectionTemplatesFactory::StaticClass,
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
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelInstancedMaterialCollectionTemplatesFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UVoxelInstancedMaterialCollectionTemplatesFactory_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVoxelInstancedMaterialCollectionTemplatesFactory()
{
	if (!Z_Registration_Info_UClass_UVoxelInstancedMaterialCollectionTemplatesFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelInstancedMaterialCollectionTemplatesFactory.OuterSingleton, Z_Construct_UClass_UVoxelInstancedMaterialCollectionTemplatesFactory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVoxelInstancedMaterialCollectionTemplatesFactory.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelInstancedMaterialCollectionTemplatesFactory);
UVoxelInstancedMaterialCollectionTemplatesFactory::~UVoxelInstancedMaterialCollectionTemplatesFactory() {}
// ********** End Class UVoxelInstancedMaterialCollectionTemplatesFactory **************************

// ********** Begin Class UVoxelInstancedMaterialCollectionFactory *********************************
void UVoxelInstancedMaterialCollectionFactory::StaticRegisterNativesUVoxelInstancedMaterialCollectionFactory()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UVoxelInstancedMaterialCollectionFactory;
UClass* UVoxelInstancedMaterialCollectionFactory::GetPrivateStaticClass()
{
	using TClass = UVoxelInstancedMaterialCollectionFactory;
	if (!Z_Registration_Info_UClass_UVoxelInstancedMaterialCollectionFactory.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("VoxelInstancedMaterialCollectionFactory"),
			Z_Registration_Info_UClass_UVoxelInstancedMaterialCollectionFactory.InnerSingleton,
			StaticRegisterNativesUVoxelInstancedMaterialCollectionFactory,
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
	return Z_Registration_Info_UClass_UVoxelInstancedMaterialCollectionFactory.InnerSingleton;
}
UClass* Z_Construct_UClass_UVoxelInstancedMaterialCollectionFactory_NoRegister()
{
	return UVoxelInstancedMaterialCollectionFactory::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UVoxelInstancedMaterialCollectionFactory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Factories/VoxelMaterialCollectionFactory.h" },
		{ "ModuleRelativePath", "Private/Factories/VoxelMaterialCollectionFactory.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelInstancedMaterialCollectionFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UVoxelInstancedMaterialCollectionFactory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UFactory,
	(UObject* (*)())Z_Construct_UPackage__Script_VoxelEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelInstancedMaterialCollectionFactory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelInstancedMaterialCollectionFactory_Statics::ClassParams = {
	&UVoxelInstancedMaterialCollectionFactory::StaticClass,
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
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelInstancedMaterialCollectionFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UVoxelInstancedMaterialCollectionFactory_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVoxelInstancedMaterialCollectionFactory()
{
	if (!Z_Registration_Info_UClass_UVoxelInstancedMaterialCollectionFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelInstancedMaterialCollectionFactory.OuterSingleton, Z_Construct_UClass_UVoxelInstancedMaterialCollectionFactory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVoxelInstancedMaterialCollectionFactory.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelInstancedMaterialCollectionFactory);
UVoxelInstancedMaterialCollectionFactory::~UVoxelInstancedMaterialCollectionFactory() {}
// ********** End Class UVoxelInstancedMaterialCollectionFactory ***********************************

// ********** Begin Class UVoxelInstancedMaterialCollectionInstanceFactory *************************
void UVoxelInstancedMaterialCollectionInstanceFactory::StaticRegisterNativesUVoxelInstancedMaterialCollectionInstanceFactory()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UVoxelInstancedMaterialCollectionInstanceFactory;
UClass* UVoxelInstancedMaterialCollectionInstanceFactory::GetPrivateStaticClass()
{
	using TClass = UVoxelInstancedMaterialCollectionInstanceFactory;
	if (!Z_Registration_Info_UClass_UVoxelInstancedMaterialCollectionInstanceFactory.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("VoxelInstancedMaterialCollectionInstanceFactory"),
			Z_Registration_Info_UClass_UVoxelInstancedMaterialCollectionInstanceFactory.InnerSingleton,
			StaticRegisterNativesUVoxelInstancedMaterialCollectionInstanceFactory,
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
	return Z_Registration_Info_UClass_UVoxelInstancedMaterialCollectionInstanceFactory.InnerSingleton;
}
UClass* Z_Construct_UClass_UVoxelInstancedMaterialCollectionInstanceFactory_NoRegister()
{
	return UVoxelInstancedMaterialCollectionInstanceFactory::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UVoxelInstancedMaterialCollectionInstanceFactory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Factories/VoxelMaterialCollectionFactory.h" },
		{ "ModuleRelativePath", "Private/Factories/VoxelMaterialCollectionFactory.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelInstancedMaterialCollectionInstanceFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UVoxelInstancedMaterialCollectionInstanceFactory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UFactory,
	(UObject* (*)())Z_Construct_UPackage__Script_VoxelEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelInstancedMaterialCollectionInstanceFactory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelInstancedMaterialCollectionInstanceFactory_Statics::ClassParams = {
	&UVoxelInstancedMaterialCollectionInstanceFactory::StaticClass,
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
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelInstancedMaterialCollectionInstanceFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UVoxelInstancedMaterialCollectionInstanceFactory_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVoxelInstancedMaterialCollectionInstanceFactory()
{
	if (!Z_Registration_Info_UClass_UVoxelInstancedMaterialCollectionInstanceFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelInstancedMaterialCollectionInstanceFactory.OuterSingleton, Z_Construct_UClass_UVoxelInstancedMaterialCollectionInstanceFactory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVoxelInstancedMaterialCollectionInstanceFactory.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelInstancedMaterialCollectionInstanceFactory);
UVoxelInstancedMaterialCollectionInstanceFactory::~UVoxelInstancedMaterialCollectionInstanceFactory() {}
// ********** End Class UVoxelInstancedMaterialCollectionInstanceFactory ***************************

// ********** Begin Class UVoxelLandscapeMaterialCollectionFactory *********************************
void UVoxelLandscapeMaterialCollectionFactory::StaticRegisterNativesUVoxelLandscapeMaterialCollectionFactory()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UVoxelLandscapeMaterialCollectionFactory;
UClass* UVoxelLandscapeMaterialCollectionFactory::GetPrivateStaticClass()
{
	using TClass = UVoxelLandscapeMaterialCollectionFactory;
	if (!Z_Registration_Info_UClass_UVoxelLandscapeMaterialCollectionFactory.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("VoxelLandscapeMaterialCollectionFactory"),
			Z_Registration_Info_UClass_UVoxelLandscapeMaterialCollectionFactory.InnerSingleton,
			StaticRegisterNativesUVoxelLandscapeMaterialCollectionFactory,
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
	return Z_Registration_Info_UClass_UVoxelLandscapeMaterialCollectionFactory.InnerSingleton;
}
UClass* Z_Construct_UClass_UVoxelLandscapeMaterialCollectionFactory_NoRegister()
{
	return UVoxelLandscapeMaterialCollectionFactory::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UVoxelLandscapeMaterialCollectionFactory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Factories/VoxelMaterialCollectionFactory.h" },
		{ "ModuleRelativePath", "Private/Factories/VoxelMaterialCollectionFactory.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelLandscapeMaterialCollectionFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UVoxelLandscapeMaterialCollectionFactory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UFactory,
	(UObject* (*)())Z_Construct_UPackage__Script_VoxelEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelLandscapeMaterialCollectionFactory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelLandscapeMaterialCollectionFactory_Statics::ClassParams = {
	&UVoxelLandscapeMaterialCollectionFactory::StaticClass,
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
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelLandscapeMaterialCollectionFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UVoxelLandscapeMaterialCollectionFactory_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVoxelLandscapeMaterialCollectionFactory()
{
	if (!Z_Registration_Info_UClass_UVoxelLandscapeMaterialCollectionFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelLandscapeMaterialCollectionFactory.OuterSingleton, Z_Construct_UClass_UVoxelLandscapeMaterialCollectionFactory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVoxelLandscapeMaterialCollectionFactory.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelLandscapeMaterialCollectionFactory);
UVoxelLandscapeMaterialCollectionFactory::~UVoxelLandscapeMaterialCollectionFactory() {}
// ********** End Class UVoxelLandscapeMaterialCollectionFactory ***********************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_VoxelEditor_Private_Factories_VoxelMaterialCollectionFactory_h__Script_VoxelEditor_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UVoxelBasicMaterialCollectionFactory, UVoxelBasicMaterialCollectionFactory::StaticClass, TEXT("UVoxelBasicMaterialCollectionFactory"), &Z_Registration_Info_UClass_UVoxelBasicMaterialCollectionFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelBasicMaterialCollectionFactory), 3083116169U) },
		{ Z_Construct_UClass_UVoxelInstancedMaterialCollectionTemplatesFactory, UVoxelInstancedMaterialCollectionTemplatesFactory::StaticClass, TEXT("UVoxelInstancedMaterialCollectionTemplatesFactory"), &Z_Registration_Info_UClass_UVoxelInstancedMaterialCollectionTemplatesFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelInstancedMaterialCollectionTemplatesFactory), 1302641664U) },
		{ Z_Construct_UClass_UVoxelInstancedMaterialCollectionFactory, UVoxelInstancedMaterialCollectionFactory::StaticClass, TEXT("UVoxelInstancedMaterialCollectionFactory"), &Z_Registration_Info_UClass_UVoxelInstancedMaterialCollectionFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelInstancedMaterialCollectionFactory), 970946025U) },
		{ Z_Construct_UClass_UVoxelInstancedMaterialCollectionInstanceFactory, UVoxelInstancedMaterialCollectionInstanceFactory::StaticClass, TEXT("UVoxelInstancedMaterialCollectionInstanceFactory"), &Z_Registration_Info_UClass_UVoxelInstancedMaterialCollectionInstanceFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelInstancedMaterialCollectionInstanceFactory), 4178846632U) },
		{ Z_Construct_UClass_UVoxelLandscapeMaterialCollectionFactory, UVoxelLandscapeMaterialCollectionFactory::StaticClass, TEXT("UVoxelLandscapeMaterialCollectionFactory"), &Z_Registration_Info_UClass_UVoxelLandscapeMaterialCollectionFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelLandscapeMaterialCollectionFactory), 3249403737U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_VoxelEditor_Private_Factories_VoxelMaterialCollectionFactory_h__Script_VoxelEditor_2183030822(TEXT("/Script/VoxelEditor"),
	Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_VoxelEditor_Private_Factories_VoxelMaterialCollectionFactory_h__Script_VoxelEditor_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_VoxelEditor_Private_Factories_VoxelMaterialCollectionFactory_h__Script_VoxelEditor_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
