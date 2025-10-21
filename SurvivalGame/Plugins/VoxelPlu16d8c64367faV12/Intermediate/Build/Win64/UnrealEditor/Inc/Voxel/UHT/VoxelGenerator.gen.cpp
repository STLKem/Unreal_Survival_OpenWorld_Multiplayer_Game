// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VoxelGenerators/VoxelGenerator.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeVoxelGenerator() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
UPackage* Z_Construct_UPackage__Script_Voxel();
VOXEL_API UClass* Z_Construct_UClass_UVoxelGenerator();
VOXEL_API UClass* Z_Construct_UClass_UVoxelGenerator_NoRegister();
VOXEL_API UClass* Z_Construct_UClass_UVoxelTransformableGenerator();
VOXEL_API UClass* Z_Construct_UClass_UVoxelTransformableGenerator_NoRegister();
VOXEL_API UClass* Z_Construct_UClass_UVoxelTransformableGeneratorWithBounds();
VOXEL_API UClass* Z_Construct_UClass_UVoxelTransformableGeneratorWithBounds_NoRegister();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UVoxelGenerator **********************************************************
void UVoxelGenerator::StaticRegisterNativesUVoxelGenerator()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UVoxelGenerator;
UClass* UVoxelGenerator::GetPrivateStaticClass()
{
	using TClass = UVoxelGenerator;
	if (!Z_Registration_Info_UClass_UVoxelGenerator.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("VoxelGenerator"),
			Z_Registration_Info_UClass_UVoxelGenerator.InnerSingleton,
			StaticRegisterNativesUVoxelGenerator,
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
	return Z_Registration_Info_UClass_UVoxelGenerator.InnerSingleton;
}
UClass* Z_Construct_UClass_UVoxelGenerator_NoRegister()
{
	return UVoxelGenerator::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UVoxelGenerator_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * A UVoxelGenerator is used to create a FVoxelGeneratorInstance\n */" },
#endif
		{ "IncludePath", "VoxelGenerators/VoxelGenerator.h" },
		{ "ModuleRelativePath", "Public/VoxelGenerators/VoxelGenerator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A UVoxelGenerator is used to create a FVoxelGeneratorInstance" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelGenerator>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UVoxelGenerator_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelGenerator_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelGenerator_Statics::ClassParams = {
	&UVoxelGenerator::StaticClass,
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
	0x001000A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelGenerator_Statics::Class_MetaDataParams), Z_Construct_UClass_UVoxelGenerator_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVoxelGenerator()
{
	if (!Z_Registration_Info_UClass_UVoxelGenerator.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelGenerator.OuterSingleton, Z_Construct_UClass_UVoxelGenerator_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVoxelGenerator.OuterSingleton;
}
UVoxelGenerator::UVoxelGenerator(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelGenerator);
UVoxelGenerator::~UVoxelGenerator() {}
// ********** End Class UVoxelGenerator ************************************************************

// ********** Begin Class UVoxelTransformableGenerator *********************************************
void UVoxelTransformableGenerator::StaticRegisterNativesUVoxelTransformableGenerator()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UVoxelTransformableGenerator;
UClass* UVoxelTransformableGenerator::GetPrivateStaticClass()
{
	using TClass = UVoxelTransformableGenerator;
	if (!Z_Registration_Info_UClass_UVoxelTransformableGenerator.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("VoxelTransformableGenerator"),
			Z_Registration_Info_UClass_UVoxelTransformableGenerator.InnerSingleton,
			StaticRegisterNativesUVoxelTransformableGenerator,
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
	return Z_Registration_Info_UClass_UVoxelTransformableGenerator.InnerSingleton;
}
UClass* Z_Construct_UClass_UVoxelTransformableGenerator_NoRegister()
{
	return UVoxelTransformableGenerator::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UVoxelTransformableGenerator_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Generator that can be moved around\n" },
#endif
		{ "IncludePath", "VoxelGenerators/VoxelGenerator.h" },
		{ "ModuleRelativePath", "Public/VoxelGenerators/VoxelGenerator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Generator that can be moved around" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelTransformableGenerator>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UVoxelTransformableGenerator_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UVoxelGenerator,
	(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelTransformableGenerator_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelTransformableGenerator_Statics::ClassParams = {
	&UVoxelTransformableGenerator::StaticClass,
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
	0x001000A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelTransformableGenerator_Statics::Class_MetaDataParams), Z_Construct_UClass_UVoxelTransformableGenerator_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVoxelTransformableGenerator()
{
	if (!Z_Registration_Info_UClass_UVoxelTransformableGenerator.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelTransformableGenerator.OuterSingleton, Z_Construct_UClass_UVoxelTransformableGenerator_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVoxelTransformableGenerator.OuterSingleton;
}
UVoxelTransformableGenerator::UVoxelTransformableGenerator(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelTransformableGenerator);
UVoxelTransformableGenerator::~UVoxelTransformableGenerator() {}
// ********** End Class UVoxelTransformableGenerator ***********************************************

// ********** Begin Class UVoxelTransformableGeneratorWithBounds ***********************************
void UVoxelTransformableGeneratorWithBounds::StaticRegisterNativesUVoxelTransformableGeneratorWithBounds()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UVoxelTransformableGeneratorWithBounds;
UClass* UVoxelTransformableGeneratorWithBounds::GetPrivateStaticClass()
{
	using TClass = UVoxelTransformableGeneratorWithBounds;
	if (!Z_Registration_Info_UClass_UVoxelTransformableGeneratorWithBounds.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("VoxelTransformableGeneratorWithBounds"),
			Z_Registration_Info_UClass_UVoxelTransformableGeneratorWithBounds.InnerSingleton,
			StaticRegisterNativesUVoxelTransformableGeneratorWithBounds,
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
	return Z_Registration_Info_UClass_UVoxelTransformableGeneratorWithBounds.InnerSingleton;
}
UClass* Z_Construct_UClass_UVoxelTransformableGeneratorWithBounds_NoRegister()
{
	return UVoxelTransformableGeneratorWithBounds::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UVoxelTransformableGeneratorWithBounds_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "VoxelGenerators/VoxelGenerator.h" },
		{ "ModuleRelativePath", "Public/VoxelGenerators/VoxelGenerator.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelTransformableGeneratorWithBounds>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UVoxelTransformableGeneratorWithBounds_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UVoxelTransformableGenerator,
	(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelTransformableGeneratorWithBounds_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelTransformableGeneratorWithBounds_Statics::ClassParams = {
	&UVoxelTransformableGeneratorWithBounds::StaticClass,
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
	0x001000A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelTransformableGeneratorWithBounds_Statics::Class_MetaDataParams), Z_Construct_UClass_UVoxelTransformableGeneratorWithBounds_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVoxelTransformableGeneratorWithBounds()
{
	if (!Z_Registration_Info_UClass_UVoxelTransformableGeneratorWithBounds.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelTransformableGeneratorWithBounds.OuterSingleton, Z_Construct_UClass_UVoxelTransformableGeneratorWithBounds_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVoxelTransformableGeneratorWithBounds.OuterSingleton;
}
UVoxelTransformableGeneratorWithBounds::UVoxelTransformableGeneratorWithBounds(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelTransformableGeneratorWithBounds);
UVoxelTransformableGeneratorWithBounds::~UVoxelTransformableGeneratorWithBounds() {}
// ********** End Class UVoxelTransformableGeneratorWithBounds *************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelGenerators_VoxelGenerator_h__Script_Voxel_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UVoxelGenerator, UVoxelGenerator::StaticClass, TEXT("UVoxelGenerator"), &Z_Registration_Info_UClass_UVoxelGenerator, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelGenerator), 3665502179U) },
		{ Z_Construct_UClass_UVoxelTransformableGenerator, UVoxelTransformableGenerator::StaticClass, TEXT("UVoxelTransformableGenerator"), &Z_Registration_Info_UClass_UVoxelTransformableGenerator, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelTransformableGenerator), 768245253U) },
		{ Z_Construct_UClass_UVoxelTransformableGeneratorWithBounds, UVoxelTransformableGeneratorWithBounds::StaticClass, TEXT("UVoxelTransformableGeneratorWithBounds"), &Z_Registration_Info_UClass_UVoxelTransformableGeneratorWithBounds, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelTransformableGeneratorWithBounds), 2560930923U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelGenerators_VoxelGenerator_h__Script_Voxel_3000450359(TEXT("/Script/Voxel"),
	Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelGenerators_VoxelGenerator_h__Script_Voxel_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelGenerators_VoxelGenerator_h__Script_Voxel_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
