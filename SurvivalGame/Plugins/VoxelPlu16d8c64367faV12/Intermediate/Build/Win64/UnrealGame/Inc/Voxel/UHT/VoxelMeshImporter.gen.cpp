// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Voxel/Public/VoxelImporters/VoxelMeshImporter.h"
#include "Voxel/Public/VoxelAssets/VoxelDataAsset.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeVoxelMeshImporter() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBox();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTextureRenderTarget2D_NoRegister();
UPackage* Z_Construct_UPackage__Script_Voxel();
VOXEL_API UClass* Z_Construct_UClass_AVoxelMeshImporter();
VOXEL_API UClass* Z_Construct_UClass_AVoxelMeshImporter_NoRegister();
VOXEL_API UClass* Z_Construct_UClass_UVoxelDataAsset_NoRegister();
VOXEL_API UClass* Z_Construct_UClass_UVoxelMeshImporterInputData();
VOXEL_API UClass* Z_Construct_UClass_UVoxelMeshImporterInputData_NoRegister();
VOXEL_API UClass* Z_Construct_UClass_UVoxelMeshImporterLibrary();
VOXEL_API UClass* Z_Construct_UClass_UVoxelMeshImporterLibrary_NoRegister();
VOXEL_API UEnum* Z_Construct_UEnum_Voxel_EVoxelAxis();
VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelMeshImporterRenderTargetCache();
VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelMeshImporterSettings();
VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelMeshImporterSettingsBase();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UVoxelMeshImporterInputData **********************************************
void UVoxelMeshImporterInputData::StaticRegisterNativesUVoxelMeshImporterInputData()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UVoxelMeshImporterInputData;
UClass* UVoxelMeshImporterInputData::GetPrivateStaticClass()
{
	using TClass = UVoxelMeshImporterInputData;
	if (!Z_Registration_Info_UClass_UVoxelMeshImporterInputData.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("VoxelMeshImporterInputData"),
			Z_Registration_Info_UClass_UVoxelMeshImporterInputData.InnerSingleton,
			StaticRegisterNativesUVoxelMeshImporterInputData,
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
	return Z_Registration_Info_UClass_UVoxelMeshImporterInputData.InnerSingleton;
}
UClass* Z_Construct_UClass_UVoxelMeshImporterInputData_NoRegister()
{
	return UVoxelMeshImporterInputData::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UVoxelMeshImporterInputData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// We don't want to copy the arrays in the BP, so use an object for that\n" },
		{ "IncludePath", "VoxelImporters/VoxelMeshImporter.h" },
		{ "ModuleRelativePath", "Public/VoxelImporters/VoxelMeshImporter.h" },
		{ "ToolTip", "We don't want to copy the arrays in the BP, so use an object for that" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelMeshImporterInputData>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UVoxelMeshImporterInputData_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelMeshImporterInputData_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelMeshImporterInputData_Statics::ClassParams = {
	&UVoxelMeshImporterInputData::StaticClass,
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
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelMeshImporterInputData_Statics::Class_MetaDataParams), Z_Construct_UClass_UVoxelMeshImporterInputData_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVoxelMeshImporterInputData()
{
	if (!Z_Registration_Info_UClass_UVoxelMeshImporterInputData.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelMeshImporterInputData.OuterSingleton, Z_Construct_UClass_UVoxelMeshImporterInputData_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVoxelMeshImporterInputData.OuterSingleton;
}
UVoxelMeshImporterInputData::UVoxelMeshImporterInputData(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelMeshImporterInputData);
UVoxelMeshImporterInputData::~UVoxelMeshImporterInputData() {}
// ********** End Class UVoxelMeshImporterInputData ************************************************

// ********** Begin ScriptStruct FVoxelMeshImporterRenderTargetCache *******************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FVoxelMeshImporterRenderTargetCache;
class UScriptStruct* FVoxelMeshImporterRenderTargetCache::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FVoxelMeshImporterRenderTargetCache.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FVoxelMeshImporterRenderTargetCache.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVoxelMeshImporterRenderTargetCache, (UObject*)Z_Construct_UPackage__Script_Voxel(), TEXT("VoxelMeshImporterRenderTargetCache"));
	}
	return Z_Registration_Info_UScriptStruct_FVoxelMeshImporterRenderTargetCache.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FVoxelMeshImporterRenderTargetCache_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/VoxelImporters/VoxelMeshImporter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ColorsRenderTarget_MetaData[] = {
		{ "Category", "Cache" },
		{ "ModuleRelativePath", "Public/VoxelImporters/VoxelMeshImporter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UVsRenderTarget_MetaData[] = {
		{ "Category", "Cache" },
		{ "ModuleRelativePath", "Public/VoxelImporters/VoxelMeshImporter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LastRenderedColorsMaterial_MetaData[] = {
		{ "Category", "Cache" },
		{ "ModuleRelativePath", "Public/VoxelImporters/VoxelMeshImporter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LastRenderedUVsMaterial_MetaData[] = {
		{ "Category", "Cache" },
		{ "ModuleRelativePath", "Public/VoxelImporters/VoxelMeshImporter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LastRenderedRenderTargetSize_MetaData[] = {
		{ "Category", "Cache" },
		{ "ModuleRelativePath", "Public/VoxelImporters/VoxelMeshImporter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ColorsRenderTarget;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_UVsRenderTarget;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LastRenderedColorsMaterial;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LastRenderedUVsMaterial;
	static const UECodeGen_Private::FIntPropertyParams NewProp_LastRenderedRenderTargetSize;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVoxelMeshImporterRenderTargetCache>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FVoxelMeshImporterRenderTargetCache_Statics::NewProp_ColorsRenderTarget = { "ColorsRenderTarget", nullptr, (EPropertyFlags)0x0114000000022015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVoxelMeshImporterRenderTargetCache, ColorsRenderTarget), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ColorsRenderTarget_MetaData), NewProp_ColorsRenderTarget_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FVoxelMeshImporterRenderTargetCache_Statics::NewProp_UVsRenderTarget = { "UVsRenderTarget", nullptr, (EPropertyFlags)0x0114000000022015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVoxelMeshImporterRenderTargetCache, UVsRenderTarget), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UVsRenderTarget_MetaData), NewProp_UVsRenderTarget_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FVoxelMeshImporterRenderTargetCache_Statics::NewProp_LastRenderedColorsMaterial = { "LastRenderedColorsMaterial", nullptr, (EPropertyFlags)0x0114000000022015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVoxelMeshImporterRenderTargetCache, LastRenderedColorsMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LastRenderedColorsMaterial_MetaData), NewProp_LastRenderedColorsMaterial_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FVoxelMeshImporterRenderTargetCache_Statics::NewProp_LastRenderedUVsMaterial = { "LastRenderedUVsMaterial", nullptr, (EPropertyFlags)0x0114000000022015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVoxelMeshImporterRenderTargetCache, LastRenderedUVsMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LastRenderedUVsMaterial_MetaData), NewProp_LastRenderedUVsMaterial_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FVoxelMeshImporterRenderTargetCache_Statics::NewProp_LastRenderedRenderTargetSize = { "LastRenderedRenderTargetSize", nullptr, (EPropertyFlags)0x0010000000022015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVoxelMeshImporterRenderTargetCache, LastRenderedRenderTargetSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LastRenderedRenderTargetSize_MetaData), NewProp_LastRenderedRenderTargetSize_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVoxelMeshImporterRenderTargetCache_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelMeshImporterRenderTargetCache_Statics::NewProp_ColorsRenderTarget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelMeshImporterRenderTargetCache_Statics::NewProp_UVsRenderTarget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelMeshImporterRenderTargetCache_Statics::NewProp_LastRenderedColorsMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelMeshImporterRenderTargetCache_Statics::NewProp_LastRenderedUVsMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelMeshImporterRenderTargetCache_Statics::NewProp_LastRenderedRenderTargetSize,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelMeshImporterRenderTargetCache_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVoxelMeshImporterRenderTargetCache_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
	nullptr,
	&NewStructOps,
	"VoxelMeshImporterRenderTargetCache",
	Z_Construct_UScriptStruct_FVoxelMeshImporterRenderTargetCache_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelMeshImporterRenderTargetCache_Statics::PropPointers),
	sizeof(FVoxelMeshImporterRenderTargetCache),
	alignof(FVoxelMeshImporterRenderTargetCache),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelMeshImporterRenderTargetCache_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVoxelMeshImporterRenderTargetCache_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FVoxelMeshImporterRenderTargetCache()
{
	if (!Z_Registration_Info_UScriptStruct_FVoxelMeshImporterRenderTargetCache.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FVoxelMeshImporterRenderTargetCache.InnerSingleton, Z_Construct_UScriptStruct_FVoxelMeshImporterRenderTargetCache_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FVoxelMeshImporterRenderTargetCache.InnerSingleton;
}
// ********** End ScriptStruct FVoxelMeshImporterRenderTargetCache *********************************

// ********** Begin ScriptStruct FVoxelMeshImporterSettingsBase ************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FVoxelMeshImporterSettingsBase;
class UScriptStruct* FVoxelMeshImporterSettingsBase::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FVoxelMeshImporterSettingsBase.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FVoxelMeshImporterSettingsBase.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVoxelMeshImporterSettingsBase, (UObject*)Z_Construct_UPackage__Script_Voxel(), TEXT("VoxelMeshImporterSettingsBase"));
	}
	return Z_Registration_Info_UScriptStruct_FVoxelMeshImporterSettingsBase.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FVoxelMeshImporterSettingsBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/VoxelImporters/VoxelMeshImporter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VoxelSize_MetaData[] = {
		{ "Category", "Import Configuration" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/VoxelImporters/VoxelMeshImporter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SweepDirection_MetaData[] = {
		{ "Category", "Import Configuration" },
		{ "Comment", "// Sweep direction to determine the voxel signs. If you have a plane, use Z\n" },
		{ "ModuleRelativePath", "Public/VoxelImporters/VoxelMeshImporter.h" },
		{ "ToolTip", "Sweep direction to determine the voxel signs. If you have a plane, use Z" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bReverseSweep_MetaData[] = {
		{ "Category", "Import Configuration" },
		{ "Comment", "// Will do the sweep the other way around: eg, if SweepDirection = Z, the sweep will be done top to bottom if true\n" },
		{ "ModuleRelativePath", "Public/VoxelImporters/VoxelMeshImporter.h" },
		{ "ToolTip", "Will do the sweep the other way around: eg, if SweepDirection = Z, the sweep will be done top to bottom if true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWatertight_MetaData[] = {
		{ "Category", "Import Configuration" },
		{ "Comment", "// If true, will assume every line of voxels starts outside the mesh, then goes inside, then goes outside it\n// Set to false if you have a shell and not a true volume\n// For example:\n// - sphere: set to true\n// - half sphere with no bottom geometry: set to false\n" },
		{ "ModuleRelativePath", "Public/VoxelImporters/VoxelMeshImporter.h" },
		{ "ToolTip", "If true, will assume every line of voxels starts outside the mesh, then goes inside, then goes outside it\nSet to false if you have a shell and not a true volume\nFor example:\n- sphere: set to true\n- half sphere with no bottom geometry: set to false" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHideLeaks_MetaData[] = {
		{ "Category", "Import Configuration" },
		{ "Comment", "// If true, will hide leaks by having holes instead\n// If false, leaks will be long tubes going through the entire asset\n" },
		{ "ModuleRelativePath", "Public/VoxelImporters/VoxelMeshImporter.h" },
		{ "ToolTip", "If true, will hide leaks by having holes instead\nIf false, leaks will be long tubes going through the entire asset" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExactBand_MetaData[] = {
		{ "Category", "Import Configuration" },
		{ "ClampMin", "1" },
		{ "Comment", "// Distance will be exact for voxels under this distance from a triangle\n" },
		{ "ModuleRelativePath", "Public/VoxelImporters/VoxelMeshImporter.h" },
		{ "ToolTip", "Distance will be exact for voxels under this distance from a triangle" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DistanceDivisor_MetaData[] = {
		{ "Category", "Import Configuration" },
		{ "Comment", "// Increase this if the shadows/normals quality is bad. Might require to increase MaxVoxelDistanceFromTriangle\n" },
		{ "ModuleRelativePath", "Public/VoxelImporters/VoxelMeshImporter.h" },
		{ "ToolTip", "Increase this if the shadows/normals quality is bad. Might require to increase MaxVoxelDistanceFromTriangle" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_VoxelSize;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SweepDirection_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SweepDirection;
	static void NewProp_bReverseSweep_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bReverseSweep;
	static void NewProp_bWatertight_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWatertight;
	static void NewProp_bHideLeaks_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHideLeaks;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ExactBand;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DistanceDivisor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVoxelMeshImporterSettingsBase>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVoxelMeshImporterSettingsBase_Statics::NewProp_VoxelSize = { "VoxelSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVoxelMeshImporterSettingsBase, VoxelSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VoxelSize_MetaData), NewProp_VoxelSize_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FVoxelMeshImporterSettingsBase_Statics::NewProp_SweepDirection_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FVoxelMeshImporterSettingsBase_Statics::NewProp_SweepDirection = { "SweepDirection", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVoxelMeshImporterSettingsBase, SweepDirection), Z_Construct_UEnum_Voxel_EVoxelAxis, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SweepDirection_MetaData), NewProp_SweepDirection_MetaData) }; // 203646402
void Z_Construct_UScriptStruct_FVoxelMeshImporterSettingsBase_Statics::NewProp_bReverseSweep_SetBit(void* Obj)
{
	((FVoxelMeshImporterSettingsBase*)Obj)->bReverseSweep = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVoxelMeshImporterSettingsBase_Statics::NewProp_bReverseSweep = { "bReverseSweep", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FVoxelMeshImporterSettingsBase), &Z_Construct_UScriptStruct_FVoxelMeshImporterSettingsBase_Statics::NewProp_bReverseSweep_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bReverseSweep_MetaData), NewProp_bReverseSweep_MetaData) };
void Z_Construct_UScriptStruct_FVoxelMeshImporterSettingsBase_Statics::NewProp_bWatertight_SetBit(void* Obj)
{
	((FVoxelMeshImporterSettingsBase*)Obj)->bWatertight = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVoxelMeshImporterSettingsBase_Statics::NewProp_bWatertight = { "bWatertight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FVoxelMeshImporterSettingsBase), &Z_Construct_UScriptStruct_FVoxelMeshImporterSettingsBase_Statics::NewProp_bWatertight_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWatertight_MetaData), NewProp_bWatertight_MetaData) };
void Z_Construct_UScriptStruct_FVoxelMeshImporterSettingsBase_Statics::NewProp_bHideLeaks_SetBit(void* Obj)
{
	((FVoxelMeshImporterSettingsBase*)Obj)->bHideLeaks = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVoxelMeshImporterSettingsBase_Statics::NewProp_bHideLeaks = { "bHideLeaks", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FVoxelMeshImporterSettingsBase), &Z_Construct_UScriptStruct_FVoxelMeshImporterSettingsBase_Statics::NewProp_bHideLeaks_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHideLeaks_MetaData), NewProp_bHideLeaks_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FVoxelMeshImporterSettingsBase_Statics::NewProp_ExactBand = { "ExactBand", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVoxelMeshImporterSettingsBase, ExactBand), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExactBand_MetaData), NewProp_ExactBand_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVoxelMeshImporterSettingsBase_Statics::NewProp_DistanceDivisor = { "DistanceDivisor", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVoxelMeshImporterSettingsBase, DistanceDivisor), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DistanceDivisor_MetaData), NewProp_DistanceDivisor_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVoxelMeshImporterSettingsBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelMeshImporterSettingsBase_Statics::NewProp_VoxelSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelMeshImporterSettingsBase_Statics::NewProp_SweepDirection_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelMeshImporterSettingsBase_Statics::NewProp_SweepDirection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelMeshImporterSettingsBase_Statics::NewProp_bReverseSweep,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelMeshImporterSettingsBase_Statics::NewProp_bWatertight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelMeshImporterSettingsBase_Statics::NewProp_bHideLeaks,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelMeshImporterSettingsBase_Statics::NewProp_ExactBand,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelMeshImporterSettingsBase_Statics::NewProp_DistanceDivisor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelMeshImporterSettingsBase_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVoxelMeshImporterSettingsBase_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
	nullptr,
	&NewStructOps,
	"VoxelMeshImporterSettingsBase",
	Z_Construct_UScriptStruct_FVoxelMeshImporterSettingsBase_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelMeshImporterSettingsBase_Statics::PropPointers),
	sizeof(FVoxelMeshImporterSettingsBase),
	alignof(FVoxelMeshImporterSettingsBase),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelMeshImporterSettingsBase_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVoxelMeshImporterSettingsBase_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FVoxelMeshImporterSettingsBase()
{
	if (!Z_Registration_Info_UScriptStruct_FVoxelMeshImporterSettingsBase.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FVoxelMeshImporterSettingsBase.InnerSingleton, Z_Construct_UScriptStruct_FVoxelMeshImporterSettingsBase_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FVoxelMeshImporterSettingsBase.InnerSingleton;
}
// ********** End ScriptStruct FVoxelMeshImporterSettingsBase **************************************

// ********** Begin ScriptStruct FVoxelMeshImporterSettings ****************************************
static_assert(std::is_polymorphic<FVoxelMeshImporterSettings>() == std::is_polymorphic<FVoxelMeshImporterSettingsBase>(), "USTRUCT FVoxelMeshImporterSettings cannot be polymorphic unless super FVoxelMeshImporterSettingsBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FVoxelMeshImporterSettings;
class UScriptStruct* FVoxelMeshImporterSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FVoxelMeshImporterSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FVoxelMeshImporterSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVoxelMeshImporterSettings, (UObject*)Z_Construct_UPackage__Script_Voxel(), TEXT("VoxelMeshImporterSettings"));
	}
	return Z_Registration_Info_UScriptStruct_FVoxelMeshImporterSettings.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FVoxelMeshImporterSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/VoxelImporters/VoxelMeshImporter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bImportColors_MetaData[] = {
		{ "Category", "Import Configuration" },
		{ "Comment", "// Will sample ColorsMaterial at the mesh UVs to get the voxel colors\n" },
		{ "ModuleRelativePath", "Public/VoxelImporters/VoxelMeshImporter.h" },
		{ "ToolTip", "Will sample ColorsMaterial at the mesh UVs to get the voxel colors" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ColorsMaterial_MetaData[] = {
		{ "Category", "Import Configuration" },
		{ "EditCondition", "bPaintColors" },
		{ "ModuleRelativePath", "Public/VoxelImporters/VoxelMeshImporter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bImportUVs_MetaData[] = {
		{ "Category", "Import Configuration" },
		{ "Comment", "// Will sample UVChannelsMaterial at the mesh UVs to get the voxel UVs\n// RG will go in first UV channel, BA in second\n" },
		{ "ModuleRelativePath", "Public/VoxelImporters/VoxelMeshImporter.h" },
		{ "ToolTip", "Will sample UVChannelsMaterial at the mesh UVs to get the voxel UVs\nRG will go in first UV channel, BA in second" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UVsMaterial_MetaData[] = {
		{ "Category", "Import Configuration" },
		{ "EditCondition", "bPaintUVs" },
		{ "ModuleRelativePath", "Public/VoxelImporters/VoxelMeshImporter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RenderTargetSize_MetaData[] = {
		{ "Category", "Import Configuration" },
		{ "ModuleRelativePath", "Public/VoxelImporters/VoxelMeshImporter.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bImportColors_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bImportColors;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ColorsMaterial;
	static void NewProp_bImportUVs_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bImportUVs;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_UVsMaterial;
	static const UECodeGen_Private::FIntPropertyParams NewProp_RenderTargetSize;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVoxelMeshImporterSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FVoxelMeshImporterSettings_Statics::NewProp_bImportColors_SetBit(void* Obj)
{
	((FVoxelMeshImporterSettings*)Obj)->bImportColors = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVoxelMeshImporterSettings_Statics::NewProp_bImportColors = { "bImportColors", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FVoxelMeshImporterSettings), &Z_Construct_UScriptStruct_FVoxelMeshImporterSettings_Statics::NewProp_bImportColors_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bImportColors_MetaData), NewProp_bImportColors_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FVoxelMeshImporterSettings_Statics::NewProp_ColorsMaterial = { "ColorsMaterial", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVoxelMeshImporterSettings, ColorsMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ColorsMaterial_MetaData), NewProp_ColorsMaterial_MetaData) };
void Z_Construct_UScriptStruct_FVoxelMeshImporterSettings_Statics::NewProp_bImportUVs_SetBit(void* Obj)
{
	((FVoxelMeshImporterSettings*)Obj)->bImportUVs = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVoxelMeshImporterSettings_Statics::NewProp_bImportUVs = { "bImportUVs", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FVoxelMeshImporterSettings), &Z_Construct_UScriptStruct_FVoxelMeshImporterSettings_Statics::NewProp_bImportUVs_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bImportUVs_MetaData), NewProp_bImportUVs_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FVoxelMeshImporterSettings_Statics::NewProp_UVsMaterial = { "UVsMaterial", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVoxelMeshImporterSettings, UVsMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UVsMaterial_MetaData), NewProp_UVsMaterial_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FVoxelMeshImporterSettings_Statics::NewProp_RenderTargetSize = { "RenderTargetSize", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVoxelMeshImporterSettings, RenderTargetSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RenderTargetSize_MetaData), NewProp_RenderTargetSize_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVoxelMeshImporterSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelMeshImporterSettings_Statics::NewProp_bImportColors,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelMeshImporterSettings_Statics::NewProp_ColorsMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelMeshImporterSettings_Statics::NewProp_bImportUVs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelMeshImporterSettings_Statics::NewProp_UVsMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelMeshImporterSettings_Statics::NewProp_RenderTargetSize,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelMeshImporterSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVoxelMeshImporterSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
	Z_Construct_UScriptStruct_FVoxelMeshImporterSettingsBase,
	&NewStructOps,
	"VoxelMeshImporterSettings",
	Z_Construct_UScriptStruct_FVoxelMeshImporterSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelMeshImporterSettings_Statics::PropPointers),
	sizeof(FVoxelMeshImporterSettings),
	alignof(FVoxelMeshImporterSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelMeshImporterSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVoxelMeshImporterSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FVoxelMeshImporterSettings()
{
	if (!Z_Registration_Info_UScriptStruct_FVoxelMeshImporterSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FVoxelMeshImporterSettings.InnerSingleton, Z_Construct_UScriptStruct_FVoxelMeshImporterSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FVoxelMeshImporterSettings.InnerSingleton;
}
// ********** End ScriptStruct FVoxelMeshImporterSettings ******************************************

// ********** Begin Class UVoxelMeshImporterLibrary Function ConvertMeshToVoxels *******************
struct Z_Construct_UFunction_UVoxelMeshImporterLibrary_ConvertMeshToVoxels_Statics
{
	struct VoxelMeshImporterLibrary_eventConvertMeshToVoxels_Parms
	{
		UObject* WorldContextObject;
		UVoxelMeshImporterInputData* Mesh;
		FTransform Transform;
		bool bSubtractive;
		FVoxelMeshImporterSettings Settings;
		FVoxelMeshImporterRenderTargetCache RenderTargetCache;
		UVoxelDataAsset* Asset;
		int32 NumLeaks;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Voxel|Tools|Mesh Importer" },
		{ "ModuleRelativePath", "Public/VoxelImporters/VoxelMeshImporter.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Mesh;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
	static void NewProp_bSubtractive_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSubtractive;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Settings;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RenderTargetCache;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Asset;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumLeaks;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelMeshImporterLibrary_ConvertMeshToVoxels_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelMeshImporterLibrary_eventConvertMeshToVoxels_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelMeshImporterLibrary_ConvertMeshToVoxels_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelMeshImporterLibrary_eventConvertMeshToVoxels_Parms, Mesh), Z_Construct_UClass_UVoxelMeshImporterInputData_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelMeshImporterLibrary_ConvertMeshToVoxels_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelMeshImporterLibrary_eventConvertMeshToVoxels_Parms, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UVoxelMeshImporterLibrary_ConvertMeshToVoxels_Statics::NewProp_bSubtractive_SetBit(void* Obj)
{
	((VoxelMeshImporterLibrary_eventConvertMeshToVoxels_Parms*)Obj)->bSubtractive = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelMeshImporterLibrary_ConvertMeshToVoxels_Statics::NewProp_bSubtractive = { "bSubtractive", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VoxelMeshImporterLibrary_eventConvertMeshToVoxels_Parms), &Z_Construct_UFunction_UVoxelMeshImporterLibrary_ConvertMeshToVoxels_Statics::NewProp_bSubtractive_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelMeshImporterLibrary_ConvertMeshToVoxels_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelMeshImporterLibrary_eventConvertMeshToVoxels_Parms, Settings), Z_Construct_UScriptStruct_FVoxelMeshImporterSettings, METADATA_PARAMS(0, nullptr) }; // 14380683
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelMeshImporterLibrary_ConvertMeshToVoxels_Statics::NewProp_RenderTargetCache = { "RenderTargetCache", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelMeshImporterLibrary_eventConvertMeshToVoxels_Parms, RenderTargetCache), Z_Construct_UScriptStruct_FVoxelMeshImporterRenderTargetCache, METADATA_PARAMS(0, nullptr) }; // 3846496811
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelMeshImporterLibrary_ConvertMeshToVoxels_Statics::NewProp_Asset = { "Asset", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelMeshImporterLibrary_eventConvertMeshToVoxels_Parms, Asset), Z_Construct_UClass_UVoxelDataAsset_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVoxelMeshImporterLibrary_ConvertMeshToVoxels_Statics::NewProp_NumLeaks = { "NumLeaks", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelMeshImporterLibrary_eventConvertMeshToVoxels_Parms, NumLeaks), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelMeshImporterLibrary_ConvertMeshToVoxels_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelMeshImporterLibrary_ConvertMeshToVoxels_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelMeshImporterLibrary_ConvertMeshToVoxels_Statics::NewProp_Mesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelMeshImporterLibrary_ConvertMeshToVoxels_Statics::NewProp_Transform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelMeshImporterLibrary_ConvertMeshToVoxels_Statics::NewProp_bSubtractive,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelMeshImporterLibrary_ConvertMeshToVoxels_Statics::NewProp_Settings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelMeshImporterLibrary_ConvertMeshToVoxels_Statics::NewProp_RenderTargetCache,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelMeshImporterLibrary_ConvertMeshToVoxels_Statics::NewProp_Asset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelMeshImporterLibrary_ConvertMeshToVoxels_Statics::NewProp_NumLeaks,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelMeshImporterLibrary_ConvertMeshToVoxels_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelMeshImporterLibrary_ConvertMeshToVoxels_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelMeshImporterLibrary, nullptr, "ConvertMeshToVoxels", Z_Construct_UFunction_UVoxelMeshImporterLibrary_ConvertMeshToVoxels_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelMeshImporterLibrary_ConvertMeshToVoxels_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVoxelMeshImporterLibrary_ConvertMeshToVoxels_Statics::VoxelMeshImporterLibrary_eventConvertMeshToVoxels_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelMeshImporterLibrary_ConvertMeshToVoxels_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelMeshImporterLibrary_ConvertMeshToVoxels_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVoxelMeshImporterLibrary_ConvertMeshToVoxels_Statics::VoxelMeshImporterLibrary_eventConvertMeshToVoxels_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVoxelMeshImporterLibrary_ConvertMeshToVoxels()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelMeshImporterLibrary_ConvertMeshToVoxels_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelMeshImporterLibrary::execConvertMeshToVoxels)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_OBJECT(UVoxelMeshImporterInputData,Z_Param_Mesh);
	P_GET_STRUCT(FTransform,Z_Param_Transform);
	P_GET_UBOOL(Z_Param_bSubtractive);
	P_GET_STRUCT(FVoxelMeshImporterSettings,Z_Param_Settings);
	P_GET_STRUCT_REF(FVoxelMeshImporterRenderTargetCache,Z_Param_Out_RenderTargetCache);
	P_GET_OBJECT_REF(UVoxelDataAsset,Z_Param_Out_Asset);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_NumLeaks);
	P_FINISH;
	P_NATIVE_BEGIN;
	UVoxelMeshImporterLibrary::ConvertMeshToVoxels(Z_Param_WorldContextObject,Z_Param_Mesh,Z_Param_Transform,Z_Param_bSubtractive,Z_Param_Settings,Z_Param_Out_RenderTargetCache,P_ARG_GC_BARRIER(Z_Param_Out_Asset),Z_Param_Out_NumLeaks);
	P_NATIVE_END;
}
// ********** End Class UVoxelMeshImporterLibrary Function ConvertMeshToVoxels *********************

// ********** Begin Class UVoxelMeshImporterLibrary Function ConvertMeshToVoxels_NoMaterials *******
struct Z_Construct_UFunction_UVoxelMeshImporterLibrary_ConvertMeshToVoxels_NoMaterials_Statics
{
	struct VoxelMeshImporterLibrary_eventConvertMeshToVoxels_NoMaterials_Parms
	{
		UObject* WorldContextObject;
		UVoxelMeshImporterInputData* Mesh;
		FTransform Transform;
		bool bSubtractive;
		FVoxelMeshImporterSettingsBase Settings;
		UVoxelDataAsset* Asset;
		int32 NumLeaks;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Voxel|Tools|Mesh Importer" },
		{ "ModuleRelativePath", "Public/VoxelImporters/VoxelMeshImporter.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Mesh;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
	static void NewProp_bSubtractive_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSubtractive;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Settings;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Asset;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumLeaks;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelMeshImporterLibrary_ConvertMeshToVoxels_NoMaterials_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelMeshImporterLibrary_eventConvertMeshToVoxels_NoMaterials_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelMeshImporterLibrary_ConvertMeshToVoxels_NoMaterials_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelMeshImporterLibrary_eventConvertMeshToVoxels_NoMaterials_Parms, Mesh), Z_Construct_UClass_UVoxelMeshImporterInputData_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelMeshImporterLibrary_ConvertMeshToVoxels_NoMaterials_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelMeshImporterLibrary_eventConvertMeshToVoxels_NoMaterials_Parms, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UVoxelMeshImporterLibrary_ConvertMeshToVoxels_NoMaterials_Statics::NewProp_bSubtractive_SetBit(void* Obj)
{
	((VoxelMeshImporterLibrary_eventConvertMeshToVoxels_NoMaterials_Parms*)Obj)->bSubtractive = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelMeshImporterLibrary_ConvertMeshToVoxels_NoMaterials_Statics::NewProp_bSubtractive = { "bSubtractive", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VoxelMeshImporterLibrary_eventConvertMeshToVoxels_NoMaterials_Parms), &Z_Construct_UFunction_UVoxelMeshImporterLibrary_ConvertMeshToVoxels_NoMaterials_Statics::NewProp_bSubtractive_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelMeshImporterLibrary_ConvertMeshToVoxels_NoMaterials_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelMeshImporterLibrary_eventConvertMeshToVoxels_NoMaterials_Parms, Settings), Z_Construct_UScriptStruct_FVoxelMeshImporterSettingsBase, METADATA_PARAMS(0, nullptr) }; // 1019389412
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelMeshImporterLibrary_ConvertMeshToVoxels_NoMaterials_Statics::NewProp_Asset = { "Asset", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelMeshImporterLibrary_eventConvertMeshToVoxels_NoMaterials_Parms, Asset), Z_Construct_UClass_UVoxelDataAsset_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVoxelMeshImporterLibrary_ConvertMeshToVoxels_NoMaterials_Statics::NewProp_NumLeaks = { "NumLeaks", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelMeshImporterLibrary_eventConvertMeshToVoxels_NoMaterials_Parms, NumLeaks), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelMeshImporterLibrary_ConvertMeshToVoxels_NoMaterials_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelMeshImporterLibrary_ConvertMeshToVoxels_NoMaterials_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelMeshImporterLibrary_ConvertMeshToVoxels_NoMaterials_Statics::NewProp_Mesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelMeshImporterLibrary_ConvertMeshToVoxels_NoMaterials_Statics::NewProp_Transform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelMeshImporterLibrary_ConvertMeshToVoxels_NoMaterials_Statics::NewProp_bSubtractive,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelMeshImporterLibrary_ConvertMeshToVoxels_NoMaterials_Statics::NewProp_Settings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelMeshImporterLibrary_ConvertMeshToVoxels_NoMaterials_Statics::NewProp_Asset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelMeshImporterLibrary_ConvertMeshToVoxels_NoMaterials_Statics::NewProp_NumLeaks,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelMeshImporterLibrary_ConvertMeshToVoxels_NoMaterials_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelMeshImporterLibrary_ConvertMeshToVoxels_NoMaterials_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelMeshImporterLibrary, nullptr, "ConvertMeshToVoxels_NoMaterials", Z_Construct_UFunction_UVoxelMeshImporterLibrary_ConvertMeshToVoxels_NoMaterials_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelMeshImporterLibrary_ConvertMeshToVoxels_NoMaterials_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVoxelMeshImporterLibrary_ConvertMeshToVoxels_NoMaterials_Statics::VoxelMeshImporterLibrary_eventConvertMeshToVoxels_NoMaterials_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelMeshImporterLibrary_ConvertMeshToVoxels_NoMaterials_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelMeshImporterLibrary_ConvertMeshToVoxels_NoMaterials_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVoxelMeshImporterLibrary_ConvertMeshToVoxels_NoMaterials_Statics::VoxelMeshImporterLibrary_eventConvertMeshToVoxels_NoMaterials_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVoxelMeshImporterLibrary_ConvertMeshToVoxels_NoMaterials()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelMeshImporterLibrary_ConvertMeshToVoxels_NoMaterials_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelMeshImporterLibrary::execConvertMeshToVoxels_NoMaterials)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_OBJECT(UVoxelMeshImporterInputData,Z_Param_Mesh);
	P_GET_STRUCT(FTransform,Z_Param_Transform);
	P_GET_UBOOL(Z_Param_bSubtractive);
	P_GET_STRUCT(FVoxelMeshImporterSettingsBase,Z_Param_Settings);
	P_GET_OBJECT_REF(UVoxelDataAsset,Z_Param_Out_Asset);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_NumLeaks);
	P_FINISH;
	P_NATIVE_BEGIN;
	UVoxelMeshImporterLibrary::ConvertMeshToVoxels_NoMaterials(Z_Param_WorldContextObject,Z_Param_Mesh,Z_Param_Transform,Z_Param_bSubtractive,Z_Param_Settings,P_ARG_GC_BARRIER(Z_Param_Out_Asset),Z_Param_Out_NumLeaks);
	P_NATIVE_END;
}
// ********** End Class UVoxelMeshImporterLibrary Function ConvertMeshToVoxels_NoMaterials *********

// ********** Begin Class UVoxelMeshImporterLibrary Function CreateMeshDataFromStaticMesh **********
struct Z_Construct_UFunction_UVoxelMeshImporterLibrary_CreateMeshDataFromStaticMesh_Statics
{
	struct VoxelMeshImporterLibrary_eventCreateMeshDataFromStaticMesh_Parms
	{
		UStaticMesh* StaticMesh;
		UVoxelMeshImporterInputData* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Voxel|Tools|Mesh Importer" },
		{ "ModuleRelativePath", "Public/VoxelImporters/VoxelMeshImporter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelMeshImporterLibrary_CreateMeshDataFromStaticMesh_Statics::NewProp_StaticMesh = { "StaticMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelMeshImporterLibrary_eventCreateMeshDataFromStaticMesh_Parms, StaticMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelMeshImporterLibrary_CreateMeshDataFromStaticMesh_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelMeshImporterLibrary_eventCreateMeshDataFromStaticMesh_Parms, ReturnValue), Z_Construct_UClass_UVoxelMeshImporterInputData_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelMeshImporterLibrary_CreateMeshDataFromStaticMesh_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelMeshImporterLibrary_CreateMeshDataFromStaticMesh_Statics::NewProp_StaticMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelMeshImporterLibrary_CreateMeshDataFromStaticMesh_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelMeshImporterLibrary_CreateMeshDataFromStaticMesh_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelMeshImporterLibrary_CreateMeshDataFromStaticMesh_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelMeshImporterLibrary, nullptr, "CreateMeshDataFromStaticMesh", Z_Construct_UFunction_UVoxelMeshImporterLibrary_CreateMeshDataFromStaticMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelMeshImporterLibrary_CreateMeshDataFromStaticMesh_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVoxelMeshImporterLibrary_CreateMeshDataFromStaticMesh_Statics::VoxelMeshImporterLibrary_eventCreateMeshDataFromStaticMesh_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelMeshImporterLibrary_CreateMeshDataFromStaticMesh_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelMeshImporterLibrary_CreateMeshDataFromStaticMesh_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVoxelMeshImporterLibrary_CreateMeshDataFromStaticMesh_Statics::VoxelMeshImporterLibrary_eventCreateMeshDataFromStaticMesh_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVoxelMeshImporterLibrary_CreateMeshDataFromStaticMesh()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelMeshImporterLibrary_CreateMeshDataFromStaticMesh_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelMeshImporterLibrary::execCreateMeshDataFromStaticMesh)
{
	P_GET_OBJECT(UStaticMesh,Z_Param_StaticMesh);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UVoxelMeshImporterInputData**)Z_Param__Result=UVoxelMeshImporterLibrary::CreateMeshDataFromStaticMesh(Z_Param_StaticMesh);
	P_NATIVE_END;
}
// ********** End Class UVoxelMeshImporterLibrary Function CreateMeshDataFromStaticMesh ************

// ********** Begin Class UVoxelMeshImporterLibrary Function CreateTextureFromMaterial *************
struct Z_Construct_UFunction_UVoxelMeshImporterLibrary_CreateTextureFromMaterial_Statics
{
	struct VoxelMeshImporterLibrary_eventCreateTextureFromMaterial_Parms
	{
		UObject* WorldContextObject;
		UMaterialInterface* Material;
		int32 Width;
		int32 Height;
		UTextureRenderTarget2D* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Voxel|Tools|Mesh Importer" },
		{ "CPP_Default_Height", "1024" },
		{ "CPP_Default_Width", "1024" },
		{ "ModuleRelativePath", "Public/VoxelImporters/VoxelMeshImporter.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Material;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Width;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Height;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelMeshImporterLibrary_CreateTextureFromMaterial_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelMeshImporterLibrary_eventCreateTextureFromMaterial_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelMeshImporterLibrary_CreateTextureFromMaterial_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelMeshImporterLibrary_eventCreateTextureFromMaterial_Parms, Material), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVoxelMeshImporterLibrary_CreateTextureFromMaterial_Statics::NewProp_Width = { "Width", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelMeshImporterLibrary_eventCreateTextureFromMaterial_Parms, Width), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVoxelMeshImporterLibrary_CreateTextureFromMaterial_Statics::NewProp_Height = { "Height", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelMeshImporterLibrary_eventCreateTextureFromMaterial_Parms, Height), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelMeshImporterLibrary_CreateTextureFromMaterial_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelMeshImporterLibrary_eventCreateTextureFromMaterial_Parms, ReturnValue), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelMeshImporterLibrary_CreateTextureFromMaterial_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelMeshImporterLibrary_CreateTextureFromMaterial_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelMeshImporterLibrary_CreateTextureFromMaterial_Statics::NewProp_Material,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelMeshImporterLibrary_CreateTextureFromMaterial_Statics::NewProp_Width,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelMeshImporterLibrary_CreateTextureFromMaterial_Statics::NewProp_Height,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelMeshImporterLibrary_CreateTextureFromMaterial_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelMeshImporterLibrary_CreateTextureFromMaterial_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelMeshImporterLibrary_CreateTextureFromMaterial_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelMeshImporterLibrary, nullptr, "CreateTextureFromMaterial", Z_Construct_UFunction_UVoxelMeshImporterLibrary_CreateTextureFromMaterial_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelMeshImporterLibrary_CreateTextureFromMaterial_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVoxelMeshImporterLibrary_CreateTextureFromMaterial_Statics::VoxelMeshImporterLibrary_eventCreateTextureFromMaterial_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelMeshImporterLibrary_CreateTextureFromMaterial_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelMeshImporterLibrary_CreateTextureFromMaterial_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVoxelMeshImporterLibrary_CreateTextureFromMaterial_Statics::VoxelMeshImporterLibrary_eventCreateTextureFromMaterial_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVoxelMeshImporterLibrary_CreateTextureFromMaterial()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelMeshImporterLibrary_CreateTextureFromMaterial_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelMeshImporterLibrary::execCreateTextureFromMaterial)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_OBJECT(UMaterialInterface,Z_Param_Material);
	P_GET_PROPERTY(FIntProperty,Z_Param_Width);
	P_GET_PROPERTY(FIntProperty,Z_Param_Height);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UTextureRenderTarget2D**)Z_Param__Result=UVoxelMeshImporterLibrary::CreateTextureFromMaterial(Z_Param_WorldContextObject,Z_Param_Material,Z_Param_Width,Z_Param_Height);
	P_NATIVE_END;
}
// ********** End Class UVoxelMeshImporterLibrary Function CreateTextureFromMaterial ***************

// ********** Begin Class UVoxelMeshImporterLibrary ************************************************
void UVoxelMeshImporterLibrary::StaticRegisterNativesUVoxelMeshImporterLibrary()
{
	UClass* Class = UVoxelMeshImporterLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ConvertMeshToVoxels", &UVoxelMeshImporterLibrary::execConvertMeshToVoxels },
		{ "ConvertMeshToVoxels_NoMaterials", &UVoxelMeshImporterLibrary::execConvertMeshToVoxels_NoMaterials },
		{ "CreateMeshDataFromStaticMesh", &UVoxelMeshImporterLibrary::execCreateMeshDataFromStaticMesh },
		{ "CreateTextureFromMaterial", &UVoxelMeshImporterLibrary::execCreateTextureFromMaterial },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UVoxelMeshImporterLibrary;
UClass* UVoxelMeshImporterLibrary::GetPrivateStaticClass()
{
	using TClass = UVoxelMeshImporterLibrary;
	if (!Z_Registration_Info_UClass_UVoxelMeshImporterLibrary.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("VoxelMeshImporterLibrary"),
			Z_Registration_Info_UClass_UVoxelMeshImporterLibrary.InnerSingleton,
			StaticRegisterNativesUVoxelMeshImporterLibrary,
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
	return Z_Registration_Info_UClass_UVoxelMeshImporterLibrary.InnerSingleton;
}
UClass* Z_Construct_UClass_UVoxelMeshImporterLibrary_NoRegister()
{
	return UVoxelMeshImporterLibrary::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UVoxelMeshImporterLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "VoxelImporters/VoxelMeshImporter.h" },
		{ "ModuleRelativePath", "Public/VoxelImporters/VoxelMeshImporter.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UVoxelMeshImporterLibrary_ConvertMeshToVoxels, "ConvertMeshToVoxels" }, // 3425222102
		{ &Z_Construct_UFunction_UVoxelMeshImporterLibrary_ConvertMeshToVoxels_NoMaterials, "ConvertMeshToVoxels_NoMaterials" }, // 605284472
		{ &Z_Construct_UFunction_UVoxelMeshImporterLibrary_CreateMeshDataFromStaticMesh, "CreateMeshDataFromStaticMesh" }, // 3851393572
		{ &Z_Construct_UFunction_UVoxelMeshImporterLibrary_CreateTextureFromMaterial, "CreateTextureFromMaterial" }, // 3686838899
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelMeshImporterLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UVoxelMeshImporterLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelMeshImporterLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelMeshImporterLibrary_Statics::ClassParams = {
	&UVoxelMeshImporterLibrary::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelMeshImporterLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UVoxelMeshImporterLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVoxelMeshImporterLibrary()
{
	if (!Z_Registration_Info_UClass_UVoxelMeshImporterLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelMeshImporterLibrary.OuterSingleton, Z_Construct_UClass_UVoxelMeshImporterLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVoxelMeshImporterLibrary.OuterSingleton;
}
UVoxelMeshImporterLibrary::UVoxelMeshImporterLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelMeshImporterLibrary);
UVoxelMeshImporterLibrary::~UVoxelMeshImporterLibrary() {}
// ********** End Class UVoxelMeshImporterLibrary **************************************************

// ********** Begin Class AVoxelMeshImporter *******************************************************
void AVoxelMeshImporter::StaticRegisterNativesAVoxelMeshImporter()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AVoxelMeshImporter;
UClass* AVoxelMeshImporter::GetPrivateStaticClass()
{
	using TClass = AVoxelMeshImporter;
	if (!Z_Registration_Info_UClass_AVoxelMeshImporter.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("VoxelMeshImporter"),
			Z_Registration_Info_UClass_AVoxelMeshImporter.InnerSingleton,
			StaticRegisterNativesAVoxelMeshImporter,
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
	return Z_Registration_Info_UClass_AVoxelMeshImporter.InnerSingleton;
}
UClass* Z_Construct_UClass_AVoxelMeshImporter_NoRegister()
{
	return AVoxelMeshImporter::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AVoxelMeshImporter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Actor that creates a VoxelDataAsset from a static mesh\n */" },
		{ "HideCategories", "Tick Replication Input Actor Rendering HOLD LOD Cooking" },
		{ "IncludePath", "VoxelImporters/VoxelMeshImporter.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/VoxelImporters/VoxelMeshImporter.h" },
		{ "NotBlueprintType", "true" },
		{ "ToolTip", "Actor that creates a VoxelDataAsset from a static mesh" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StaticMesh_MetaData[] = {
		{ "Category", "Import Configuration" },
		{ "Comment", "// The static mesh to import from\n" },
		{ "ModuleRelativePath", "Public/VoxelImporters/VoxelMeshImporter.h" },
		{ "ToolTip", "The static mesh to import from" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Settings_MetaData[] = {
		{ "Category", "Import Configuration" },
		{ "ModuleRelativePath", "Public/VoxelImporters/VoxelMeshImporter.h" },
		{ "ShowOnlyInnerProperties", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SizeX_MetaData[] = {
		{ "Category", "Expected Size" },
		{ "ModuleRelativePath", "Public/VoxelImporters/VoxelMeshImporter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SizeY_MetaData[] = {
		{ "Category", "Expected Size" },
		{ "ModuleRelativePath", "Public/VoxelImporters/VoxelMeshImporter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SizeZ_MetaData[] = {
		{ "Category", "Expected Size" },
		{ "ModuleRelativePath", "Public/VoxelImporters/VoxelMeshImporter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumberOfVoxels_MetaData[] = {
		{ "Category", "Expected Size" },
		{ "ModuleRelativePath", "Public/VoxelImporters/VoxelMeshImporter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SizeInMB_MetaData[] = {
		{ "Category", "Expected Size" },
		{ "ModuleRelativePath", "Public/VoxelImporters/VoxelMeshImporter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeshComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/VoxelImporters/VoxelMeshImporter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaterialInstance_MetaData[] = {
		{ "ModuleRelativePath", "Public/VoxelImporters/VoxelMeshImporter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedBox_MetaData[] = {
		{ "ModuleRelativePath", "Public/VoxelImporters/VoxelMeshImporter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedStaticMesh_MetaData[] = {
		{ "ModuleRelativePath", "Public/VoxelImporters/VoxelMeshImporter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedVertices_MetaData[] = {
		{ "ModuleRelativePath", "Public/VoxelImporters/VoxelMeshImporter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedTransform_MetaData[] = {
		{ "ModuleRelativePath", "Public/VoxelImporters/VoxelMeshImporter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMesh;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Settings;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_SizeX;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_SizeY;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_SizeZ;
	static const UECodeGen_Private::FUInt64PropertyParams NewProp_NumberOfVoxels;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SizeInMB;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MeshComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MaterialInstance;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CachedBox;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CachedStaticMesh;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CachedVertices_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CachedVertices;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CachedTransform;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AVoxelMeshImporter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVoxelMeshImporter_Statics::NewProp_StaticMesh = { "StaticMesh", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVoxelMeshImporter, StaticMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StaticMesh_MetaData), NewProp_StaticMesh_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AVoxelMeshImporter_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVoxelMeshImporter, Settings), Z_Construct_UScriptStruct_FVoxelMeshImporterSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Settings_MetaData), NewProp_Settings_MetaData) }; // 14380683
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_AVoxelMeshImporter_Statics::NewProp_SizeX = { "SizeX", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVoxelMeshImporter, SizeX), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SizeX_MetaData), NewProp_SizeX_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_AVoxelMeshImporter_Statics::NewProp_SizeY = { "SizeY", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVoxelMeshImporter, SizeY), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SizeY_MetaData), NewProp_SizeY_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_AVoxelMeshImporter_Statics::NewProp_SizeZ = { "SizeZ", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVoxelMeshImporter, SizeZ), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SizeZ_MetaData), NewProp_SizeZ_MetaData) };
const UECodeGen_Private::FUInt64PropertyParams Z_Construct_UClass_AVoxelMeshImporter_Statics::NewProp_NumberOfVoxels = { "NumberOfVoxels", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::UInt64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVoxelMeshImporter, NumberOfVoxels), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumberOfVoxels_MetaData), NewProp_NumberOfVoxels_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AVoxelMeshImporter_Statics::NewProp_SizeInMB = { "SizeInMB", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVoxelMeshImporter, SizeInMB), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SizeInMB_MetaData), NewProp_SizeInMB_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVoxelMeshImporter_Statics::NewProp_MeshComponent = { "MeshComponent", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVoxelMeshImporter, MeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshComponent_MetaData), NewProp_MeshComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVoxelMeshImporter_Statics::NewProp_MaterialInstance = { "MaterialInstance", nullptr, (EPropertyFlags)0x0144000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVoxelMeshImporter, MaterialInstance), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaterialInstance_MetaData), NewProp_MaterialInstance_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AVoxelMeshImporter_Statics::NewProp_CachedBox = { "CachedBox", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVoxelMeshImporter, CachedBox), Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedBox_MetaData), NewProp_CachedBox_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVoxelMeshImporter_Statics::NewProp_CachedStaticMesh = { "CachedStaticMesh", nullptr, (EPropertyFlags)0x0144000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVoxelMeshImporter, CachedStaticMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedStaticMesh_MetaData), NewProp_CachedStaticMesh_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AVoxelMeshImporter_Statics::NewProp_CachedVertices_Inner = { "CachedVertices", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AVoxelMeshImporter_Statics::NewProp_CachedVertices = { "CachedVertices", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVoxelMeshImporter, CachedVertices), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedVertices_MetaData), NewProp_CachedVertices_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AVoxelMeshImporter_Statics::NewProp_CachedTransform = { "CachedTransform", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVoxelMeshImporter, CachedTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedTransform_MetaData), NewProp_CachedTransform_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AVoxelMeshImporter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelMeshImporter_Statics::NewProp_StaticMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelMeshImporter_Statics::NewProp_Settings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelMeshImporter_Statics::NewProp_SizeX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelMeshImporter_Statics::NewProp_SizeY,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelMeshImporter_Statics::NewProp_SizeZ,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelMeshImporter_Statics::NewProp_NumberOfVoxels,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelMeshImporter_Statics::NewProp_SizeInMB,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelMeshImporter_Statics::NewProp_MeshComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelMeshImporter_Statics::NewProp_MaterialInstance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelMeshImporter_Statics::NewProp_CachedBox,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelMeshImporter_Statics::NewProp_CachedStaticMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelMeshImporter_Statics::NewProp_CachedVertices_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelMeshImporter_Statics::NewProp_CachedVertices,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelMeshImporter_Statics::NewProp_CachedTransform,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AVoxelMeshImporter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AVoxelMeshImporter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AVoxelMeshImporter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AVoxelMeshImporter_Statics::ClassParams = {
	&AVoxelMeshImporter::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AVoxelMeshImporter_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AVoxelMeshImporter_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AVoxelMeshImporter_Statics::Class_MetaDataParams), Z_Construct_UClass_AVoxelMeshImporter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AVoxelMeshImporter()
{
	if (!Z_Registration_Info_UClass_AVoxelMeshImporter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AVoxelMeshImporter.OuterSingleton, Z_Construct_UClass_AVoxelMeshImporter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AVoxelMeshImporter.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AVoxelMeshImporter);
AVoxelMeshImporter::~AVoxelMeshImporter() {}
// ********** End Class AVoxelMeshImporter *********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelImporters_VoxelMeshImporter_h__Script_Voxel_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FVoxelMeshImporterRenderTargetCache::StaticStruct, Z_Construct_UScriptStruct_FVoxelMeshImporterRenderTargetCache_Statics::NewStructOps, TEXT("VoxelMeshImporterRenderTargetCache"), &Z_Registration_Info_UScriptStruct_FVoxelMeshImporterRenderTargetCache, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVoxelMeshImporterRenderTargetCache), 3846496811U) },
		{ FVoxelMeshImporterSettingsBase::StaticStruct, Z_Construct_UScriptStruct_FVoxelMeshImporterSettingsBase_Statics::NewStructOps, TEXT("VoxelMeshImporterSettingsBase"), &Z_Registration_Info_UScriptStruct_FVoxelMeshImporterSettingsBase, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVoxelMeshImporterSettingsBase), 1019389412U) },
		{ FVoxelMeshImporterSettings::StaticStruct, Z_Construct_UScriptStruct_FVoxelMeshImporterSettings_Statics::NewStructOps, TEXT("VoxelMeshImporterSettings"), &Z_Registration_Info_UScriptStruct_FVoxelMeshImporterSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVoxelMeshImporterSettings), 14380683U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UVoxelMeshImporterInputData, UVoxelMeshImporterInputData::StaticClass, TEXT("UVoxelMeshImporterInputData"), &Z_Registration_Info_UClass_UVoxelMeshImporterInputData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelMeshImporterInputData), 2294478757U) },
		{ Z_Construct_UClass_UVoxelMeshImporterLibrary, UVoxelMeshImporterLibrary::StaticClass, TEXT("UVoxelMeshImporterLibrary"), &Z_Registration_Info_UClass_UVoxelMeshImporterLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelMeshImporterLibrary), 3500981324U) },
		{ Z_Construct_UClass_AVoxelMeshImporter, AVoxelMeshImporter::StaticClass, TEXT("AVoxelMeshImporter"), &Z_Registration_Info_UClass_AVoxelMeshImporter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AVoxelMeshImporter), 1071936817U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelImporters_VoxelMeshImporter_h__Script_Voxel_497543353(TEXT("/Script/Voxel"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelImporters_VoxelMeshImporter_h__Script_Voxel_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelImporters_VoxelMeshImporter_h__Script_Voxel_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelImporters_VoxelMeshImporter_h__Script_Voxel_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelImporters_VoxelMeshImporter_h__Script_Voxel_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
