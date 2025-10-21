// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VoxelWorldInterface.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeVoxelWorldInterface() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor();
UPackage* Z_Construct_UPackage__Script_Voxel();
VOXEL_API UClass* Z_Construct_UClass_AVoxelWorldInterface();
VOXEL_API UClass* Z_Construct_UClass_AVoxelWorldInterface_NoRegister();
VOXEL_API UEnum* Z_Construct_UEnum_Voxel_EVoxelWorldCoordinatesRounding();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EVoxelWorldCoordinatesRounding ********************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EVoxelWorldCoordinatesRounding;
static UEnum* EVoxelWorldCoordinatesRounding_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EVoxelWorldCoordinatesRounding.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EVoxelWorldCoordinatesRounding.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Voxel_EVoxelWorldCoordinatesRounding, (UObject*)Z_Construct_UPackage__Script_Voxel(), TEXT("EVoxelWorldCoordinatesRounding"));
	}
	return Z_Registration_Info_UEnum_EVoxelWorldCoordinatesRounding.OuterSingleton;
}
template<> VOXEL_API UEnum* StaticEnum<EVoxelWorldCoordinatesRounding>()
{
	return EVoxelWorldCoordinatesRounding_StaticEnum();
}
struct Z_Construct_UEnum_Voxel_EVoxelWorldCoordinatesRounding_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/VoxelWorldInterface.h" },
		{ "RoundDown.Name", "EVoxelWorldCoordinatesRounding::RoundDown" },
		{ "RoundToNearest.Name", "EVoxelWorldCoordinatesRounding::RoundToNearest" },
		{ "RoundUp.Name", "EVoxelWorldCoordinatesRounding::RoundUp" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EVoxelWorldCoordinatesRounding::RoundToNearest", (int64)EVoxelWorldCoordinatesRounding::RoundToNearest },
		{ "EVoxelWorldCoordinatesRounding::RoundUp", (int64)EVoxelWorldCoordinatesRounding::RoundUp },
		{ "EVoxelWorldCoordinatesRounding::RoundDown", (int64)EVoxelWorldCoordinatesRounding::RoundDown },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Voxel_EVoxelWorldCoordinatesRounding_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Voxel,
	nullptr,
	"EVoxelWorldCoordinatesRounding",
	"EVoxelWorldCoordinatesRounding",
	Z_Construct_UEnum_Voxel_EVoxelWorldCoordinatesRounding_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Voxel_EVoxelWorldCoordinatesRounding_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Voxel_EVoxelWorldCoordinatesRounding_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Voxel_EVoxelWorldCoordinatesRounding_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Voxel_EVoxelWorldCoordinatesRounding()
{
	if (!Z_Registration_Info_UEnum_EVoxelWorldCoordinatesRounding.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EVoxelWorldCoordinatesRounding.InnerSingleton, Z_Construct_UEnum_Voxel_EVoxelWorldCoordinatesRounding_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EVoxelWorldCoordinatesRounding.InnerSingleton;
}
// ********** End Enum EVoxelWorldCoordinatesRounding **********************************************

// ********** Begin Class AVoxelWorldInterface *****************************************************
void AVoxelWorldInterface::StaticRegisterNativesAVoxelWorldInterface()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AVoxelWorldInterface;
UClass* AVoxelWorldInterface::GetPrivateStaticClass()
{
	using TClass = AVoxelWorldInterface;
	if (!Z_Registration_Info_UClass_AVoxelWorldInterface.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("VoxelWorldInterface"),
			Z_Registration_Info_UClass_AVoxelWorldInterface.InnerSingleton,
			StaticRegisterNativesAVoxelWorldInterface,
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
	return Z_Registration_Info_UClass_AVoxelWorldInterface.InnerSingleton;
}
UClass* Z_Construct_UClass_AVoxelWorldInterface_NoRegister()
{
	return AVoxelWorldInterface::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AVoxelWorldInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// AActor so we can keep a weak ptr to it\n" },
#endif
		{ "IncludePath", "VoxelWorldInterface.h" },
		{ "ModuleRelativePath", "Public/VoxelWorldInterface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "AActor so we can keep a weak ptr to it" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AVoxelWorldInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AVoxelWorldInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AVoxelWorldInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AVoxelWorldInterface_Statics::ClassParams = {
	&AVoxelWorldInterface::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009001A5u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AVoxelWorldInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_AVoxelWorldInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AVoxelWorldInterface()
{
	if (!Z_Registration_Info_UClass_AVoxelWorldInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AVoxelWorldInterface.OuterSingleton, Z_Construct_UClass_AVoxelWorldInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AVoxelWorldInterface.OuterSingleton;
}
AVoxelWorldInterface::AVoxelWorldInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AVoxelWorldInterface);
AVoxelWorldInterface::~AVoxelWorldInterface() {}
// ********** End Class AVoxelWorldInterface *******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelWorldInterface_h__Script_Voxel_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EVoxelWorldCoordinatesRounding_StaticEnum, TEXT("EVoxelWorldCoordinatesRounding"), &Z_Registration_Info_UEnum_EVoxelWorldCoordinatesRounding, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 322150197U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AVoxelWorldInterface, AVoxelWorldInterface::StaticClass, TEXT("AVoxelWorldInterface"), &Z_Registration_Info_UClass_AVoxelWorldInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AVoxelWorldInterface), 1987413924U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelWorldInterface_h__Script_Voxel_2443279101(TEXT("/Script/Voxel"),
	Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelWorldInterface_h__Script_Voxel_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelWorldInterface_h__Script_Voxel_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelWorldInterface_h__Script_Voxel_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelWorldInterface_h__Script_Voxel_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
