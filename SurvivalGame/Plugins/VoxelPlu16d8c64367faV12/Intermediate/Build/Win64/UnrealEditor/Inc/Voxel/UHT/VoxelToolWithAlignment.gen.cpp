// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VoxelTools/Tools/VoxelToolWithAlignment.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeVoxelToolWithAlignment() {}

// ********** Begin Cross Module References ********************************************************
UPackage* Z_Construct_UPackage__Script_Voxel();
VOXEL_API UClass* Z_Construct_UClass_UVoxelToolBase();
VOXEL_API UClass* Z_Construct_UClass_UVoxelToolWithAlignment();
VOXEL_API UClass* Z_Construct_UClass_UVoxelToolWithAlignment_NoRegister();
VOXEL_API UEnum* Z_Construct_UEnum_Voxel_EVoxelToolAlignment();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UVoxelToolWithAlignment **************************************************
void UVoxelToolWithAlignment::StaticRegisterNativesUVoxelToolWithAlignment()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UVoxelToolWithAlignment;
UClass* UVoxelToolWithAlignment::GetPrivateStaticClass()
{
	using TClass = UVoxelToolWithAlignment;
	if (!Z_Registration_Info_UClass_UVoxelToolWithAlignment.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("VoxelToolWithAlignment"),
			Z_Registration_Info_UClass_UVoxelToolWithAlignment.InnerSingleton,
			StaticRegisterNativesUVoxelToolWithAlignment,
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
	return Z_Registration_Info_UClass_UVoxelToolWithAlignment.InnerSingleton;
}
UClass* Z_Construct_UClass_UVoxelToolWithAlignment_NoRegister()
{
	return UVoxelToolWithAlignment::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UVoxelToolWithAlignment_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Voxel tool with basic alignment settings\n" },
#endif
		{ "IncludePath", "VoxelTools/Tools/VoxelToolWithAlignment.h" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelToolWithAlignment.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Voxel tool with basic alignment settings" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Alignment_MetaData[] = {
		{ "Category", "Tool Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The plane your sculpting is restricted to when holding mouse button down\n" },
#endif
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelToolWithAlignment.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The plane your sculpting is restricted to when holding mouse button down" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAirMode_MetaData[] = {
		{ "Category", "Tool Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Position is based on the distance from the camera instead of the hit point\n" },
#endif
		{ "EditCondition", "Alignment != EVoxelToolAlignment::Surface" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelToolWithAlignment.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Position is based on the distance from the camera instead of the hit point" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DistanceToCamera_MetaData[] = {
		{ "Category", "Tool Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Distance to the camera when no voxel world under the cursor, or Air Mode = true\n" },
#endif
		{ "EditCondition", "Alignment != EVoxelToolAlignment::Surface" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelToolWithAlignment.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Distance to the camera when no voxel world under the cursor, or Air Mode = true" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShowPlanePreview_MetaData[] = {
		{ "Category", "Tool Settings" },
		{ "EditCondition", "Alignment != EVoxelToolAlignment::Surface" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelToolWithAlignment.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Alignment_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Alignment;
	static void NewProp_bAirMode_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAirMode;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DistanceToCamera;
	static void NewProp_bShowPlanePreview_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowPlanePreview;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelToolWithAlignment>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UVoxelToolWithAlignment_Statics::NewProp_Alignment_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UVoxelToolWithAlignment_Statics::NewProp_Alignment = { "Alignment", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelToolWithAlignment, Alignment), Z_Construct_UEnum_Voxel_EVoxelToolAlignment, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Alignment_MetaData), NewProp_Alignment_MetaData) }; // 239877237
void Z_Construct_UClass_UVoxelToolWithAlignment_Statics::NewProp_bAirMode_SetBit(void* Obj)
{
	((UVoxelToolWithAlignment*)Obj)->bAirMode = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVoxelToolWithAlignment_Statics::NewProp_bAirMode = { "bAirMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UVoxelToolWithAlignment), &Z_Construct_UClass_UVoxelToolWithAlignment_Statics::NewProp_bAirMode_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAirMode_MetaData), NewProp_bAirMode_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVoxelToolWithAlignment_Statics::NewProp_DistanceToCamera = { "DistanceToCamera", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelToolWithAlignment, DistanceToCamera), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DistanceToCamera_MetaData), NewProp_DistanceToCamera_MetaData) };
void Z_Construct_UClass_UVoxelToolWithAlignment_Statics::NewProp_bShowPlanePreview_SetBit(void* Obj)
{
	((UVoxelToolWithAlignment*)Obj)->bShowPlanePreview = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVoxelToolWithAlignment_Statics::NewProp_bShowPlanePreview = { "bShowPlanePreview", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UVoxelToolWithAlignment), &Z_Construct_UClass_UVoxelToolWithAlignment_Statics::NewProp_bShowPlanePreview_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShowPlanePreview_MetaData), NewProp_bShowPlanePreview_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelToolWithAlignment_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelToolWithAlignment_Statics::NewProp_Alignment_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelToolWithAlignment_Statics::NewProp_Alignment,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelToolWithAlignment_Statics::NewProp_bAirMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelToolWithAlignment_Statics::NewProp_DistanceToCamera,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelToolWithAlignment_Statics::NewProp_bShowPlanePreview,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelToolWithAlignment_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UVoxelToolWithAlignment_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UVoxelToolBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelToolWithAlignment_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelToolWithAlignment_Statics::ClassParams = {
	&UVoxelToolWithAlignment::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UVoxelToolWithAlignment_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelToolWithAlignment_Statics::PropPointers),
	0,
	0x001000A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelToolWithAlignment_Statics::Class_MetaDataParams), Z_Construct_UClass_UVoxelToolWithAlignment_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVoxelToolWithAlignment()
{
	if (!Z_Registration_Info_UClass_UVoxelToolWithAlignment.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelToolWithAlignment.OuterSingleton, Z_Construct_UClass_UVoxelToolWithAlignment_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVoxelToolWithAlignment.OuterSingleton;
}
UVoxelToolWithAlignment::UVoxelToolWithAlignment(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelToolWithAlignment);
UVoxelToolWithAlignment::~UVoxelToolWithAlignment() {}
// ********** End Class UVoxelToolWithAlignment ****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelTools_Tools_VoxelToolWithAlignment_h__Script_Voxel_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UVoxelToolWithAlignment, UVoxelToolWithAlignment::StaticClass, TEXT("UVoxelToolWithAlignment"), &Z_Registration_Info_UClass_UVoxelToolWithAlignment, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelToolWithAlignment), 316646926U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelTools_Tools_VoxelToolWithAlignment_h__Script_Voxel_2757444386(TEXT("/Script/Voxel"),
	Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelTools_Tools_VoxelToolWithAlignment_h__Script_Voxel_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelTools_Tools_VoxelToolWithAlignment_h__Script_Voxel_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
