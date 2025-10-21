// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VoxelPlaceableItems/Actors/VoxelDisableEditsBox.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeVoxelDisableEditsBox() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_Voxel();
VOXEL_API UClass* Z_Construct_UClass_AVoxelDisableEditsBox();
VOXEL_API UClass* Z_Construct_UClass_AVoxelDisableEditsBox_NoRegister();
VOXEL_API UClass* Z_Construct_UClass_AVoxelPlaceableItemActor();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AVoxelDisableEditsBox ****************************************************
void AVoxelDisableEditsBox::StaticRegisterNativesAVoxelDisableEditsBox()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AVoxelDisableEditsBox;
UClass* AVoxelDisableEditsBox::GetPrivateStaticClass()
{
	using TClass = AVoxelDisableEditsBox;
	if (!Z_Registration_Info_UClass_AVoxelDisableEditsBox.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("VoxelDisableEditsBox"),
			Z_Registration_Info_UClass_AVoxelDisableEditsBox.InnerSingleton,
			StaticRegisterNativesAVoxelDisableEditsBox,
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
	return Z_Registration_Info_UClass_AVoxelDisableEditsBox.InnerSingleton;
}
UClass* Z_Construct_UClass_AVoxelDisableEditsBox_NoRegister()
{
	return AVoxelDisableEditsBox::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AVoxelDisableEditsBox_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "VoxelPlaceableItems/Actors/VoxelDisableEditsBox.h" },
		{ "ModuleRelativePath", "Public/VoxelPlaceableItems/Actors/VoxelDisableEditsBox.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Box_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/VoxelPlaceableItems/Actors/VoxelDisableEditsBox.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Box;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AVoxelDisableEditsBox>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVoxelDisableEditsBox_Statics::NewProp_Box = { "Box", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVoxelDisableEditsBox, Box), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Box_MetaData), NewProp_Box_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AVoxelDisableEditsBox_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelDisableEditsBox_Statics::NewProp_Box,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AVoxelDisableEditsBox_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AVoxelDisableEditsBox_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AVoxelPlaceableItemActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AVoxelDisableEditsBox_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AVoxelDisableEditsBox_Statics::ClassParams = {
	&AVoxelDisableEditsBox::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AVoxelDisableEditsBox_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AVoxelDisableEditsBox_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AVoxelDisableEditsBox_Statics::Class_MetaDataParams), Z_Construct_UClass_AVoxelDisableEditsBox_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AVoxelDisableEditsBox()
{
	if (!Z_Registration_Info_UClass_AVoxelDisableEditsBox.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AVoxelDisableEditsBox.OuterSingleton, Z_Construct_UClass_AVoxelDisableEditsBox_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AVoxelDisableEditsBox.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AVoxelDisableEditsBox);
AVoxelDisableEditsBox::~AVoxelDisableEditsBox() {}
// ********** End Class AVoxelDisableEditsBox ******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelPlaceableItems_Actors_VoxelDisableEditsBox_h__Script_Voxel_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AVoxelDisableEditsBox, AVoxelDisableEditsBox::StaticClass, TEXT("AVoxelDisableEditsBox"), &Z_Registration_Info_UClass_AVoxelDisableEditsBox, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AVoxelDisableEditsBox), 3409737212U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelPlaceableItems_Actors_VoxelDisableEditsBox_h__Script_Voxel_3316371981(TEXT("/Script/Voxel"),
	Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelPlaceableItems_Actors_VoxelDisableEditsBox_h__Script_Voxel_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelPlaceableItems_Actors_VoxelDisableEditsBox_h__Script_Voxel_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
