// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VoxelTools/Tools/VoxelRevertTool.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeVoxelRevertTool() {}

// ********** Begin Cross Module References ********************************************************
UPackage* Z_Construct_UPackage__Script_Voxel();
VOXEL_API UClass* Z_Construct_UClass_UVoxelRevertTool();
VOXEL_API UClass* Z_Construct_UClass_UVoxelRevertTool_NoRegister();
VOXEL_API UClass* Z_Construct_UClass_UVoxelSphereToolBase();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UVoxelRevertTool *********************************************************
void UVoxelRevertTool::StaticRegisterNativesUVoxelRevertTool()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UVoxelRevertTool;
UClass* UVoxelRevertTool::GetPrivateStaticClass()
{
	using TClass = UVoxelRevertTool;
	if (!Z_Registration_Info_UClass_UVoxelRevertTool.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("VoxelRevertTool"),
			Z_Registration_Info_UClass_UVoxelRevertTool.InnerSingleton,
			StaticRegisterNativesUVoxelRevertTool,
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
	return Z_Registration_Info_UClass_UVoxelRevertTool.InnerSingleton;
}
UClass* Z_Construct_UClass_UVoxelRevertTool_NoRegister()
{
	return UVoxelRevertTool::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UVoxelRevertTool_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "VoxelTools/Tools/VoxelRevertTool.h" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelRevertTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRevertValues_MetaData[] = {
		{ "Category", "Tool Settings" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelRevertTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRevertMaterials_MetaData[] = {
		{ "Category", "Tool Settings" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelRevertTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HistoryPosition_MetaData[] = {
		{ "Category", "Tool Settings" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelRevertTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentHistoryPosition_MetaData[] = {
		{ "Category", "Tool Settings" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelRevertTool.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bRevertValues_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRevertValues;
	static void NewProp_bRevertMaterials_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRevertMaterials;
	static const UECodeGen_Private::FIntPropertyParams NewProp_HistoryPosition;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentHistoryPosition;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelRevertTool>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UVoxelRevertTool_Statics::NewProp_bRevertValues_SetBit(void* Obj)
{
	((UVoxelRevertTool*)Obj)->bRevertValues = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVoxelRevertTool_Statics::NewProp_bRevertValues = { "bRevertValues", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UVoxelRevertTool), &Z_Construct_UClass_UVoxelRevertTool_Statics::NewProp_bRevertValues_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRevertValues_MetaData), NewProp_bRevertValues_MetaData) };
void Z_Construct_UClass_UVoxelRevertTool_Statics::NewProp_bRevertMaterials_SetBit(void* Obj)
{
	((UVoxelRevertTool*)Obj)->bRevertMaterials = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVoxelRevertTool_Statics::NewProp_bRevertMaterials = { "bRevertMaterials", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UVoxelRevertTool), &Z_Construct_UClass_UVoxelRevertTool_Statics::NewProp_bRevertMaterials_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRevertMaterials_MetaData), NewProp_bRevertMaterials_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UVoxelRevertTool_Statics::NewProp_HistoryPosition = { "HistoryPosition", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelRevertTool, HistoryPosition), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HistoryPosition_MetaData), NewProp_HistoryPosition_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UVoxelRevertTool_Statics::NewProp_CurrentHistoryPosition = { "CurrentHistoryPosition", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelRevertTool, CurrentHistoryPosition), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentHistoryPosition_MetaData), NewProp_CurrentHistoryPosition_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelRevertTool_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelRevertTool_Statics::NewProp_bRevertValues,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelRevertTool_Statics::NewProp_bRevertMaterials,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelRevertTool_Statics::NewProp_HistoryPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelRevertTool_Statics::NewProp_CurrentHistoryPosition,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelRevertTool_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UVoxelRevertTool_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UVoxelSphereToolBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelRevertTool_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelRevertTool_Statics::ClassParams = {
	&UVoxelRevertTool::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UVoxelRevertTool_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelRevertTool_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelRevertTool_Statics::Class_MetaDataParams), Z_Construct_UClass_UVoxelRevertTool_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVoxelRevertTool()
{
	if (!Z_Registration_Info_UClass_UVoxelRevertTool.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelRevertTool.OuterSingleton, Z_Construct_UClass_UVoxelRevertTool_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVoxelRevertTool.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelRevertTool);
UVoxelRevertTool::~UVoxelRevertTool() {}
// ********** End Class UVoxelRevertTool ***********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelTools_Tools_VoxelRevertTool_h__Script_Voxel_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UVoxelRevertTool, UVoxelRevertTool::StaticClass, TEXT("UVoxelRevertTool"), &Z_Registration_Info_UClass_UVoxelRevertTool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelRevertTool), 2274395515U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelTools_Tools_VoxelRevertTool_h__Script_Voxel_275260085(TEXT("/Script/Voxel"),
	Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelTools_Tools_VoxelRevertTool_h__Script_Voxel_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelTools_Tools_VoxelRevertTool_h__Script_Voxel_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
