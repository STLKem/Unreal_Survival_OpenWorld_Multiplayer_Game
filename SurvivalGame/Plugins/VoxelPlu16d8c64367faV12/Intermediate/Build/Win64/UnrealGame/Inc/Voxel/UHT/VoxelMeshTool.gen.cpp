// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Voxel/Public/VoxelTools/Tools/VoxelMeshTool.h"
#include "Voxel/Public/VoxelImporters/VoxelMeshImporter.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeVoxelMeshTool() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTextureRenderTarget2D_NoRegister();
UPackage* Z_Construct_UPackage__Script_Voxel();
VOXEL_API UClass* Z_Construct_UClass_UVoxelMeshTool();
VOXEL_API UClass* Z_Construct_UClass_UVoxelMeshTool_NoRegister();
VOXEL_API UClass* Z_Construct_UClass_UVoxelToolWithAlignment();
VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelMeshImporterRenderTargetCache();
VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelMeshImporterSettings();
VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelMeshImporterSettingsBase();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UVoxelMeshTool ***********************************************************
void UVoxelMeshTool::StaticRegisterNativesUVoxelMeshTool()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UVoxelMeshTool;
UClass* UVoxelMeshTool::GetPrivateStaticClass()
{
	using TClass = UVoxelMeshTool;
	if (!Z_Registration_Info_UClass_UVoxelMeshTool.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("VoxelMeshTool"),
			Z_Registration_Info_UClass_UVoxelMeshTool.InnerSingleton,
			StaticRegisterNativesUVoxelMeshTool,
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
	return Z_Registration_Info_UClass_UVoxelMeshTool.InnerSingleton;
}
UClass* Z_Construct_UClass_UVoxelMeshTool_NoRegister()
{
	return UVoxelMeshTool::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UVoxelMeshTool_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "VoxelTools/Tools/VoxelMeshTool.h" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelMeshTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ToolMaterial_MetaData[] = {
		{ "Category", "Tool Preview Settings" },
		{ "HideInPanel", "" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelMeshTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[] = {
		{ "Category", "Tool Settings" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelMeshTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Stride_MetaData[] = {
		{ "Category", "Tool Settings" },
		{ "Comment", "// Relative to the radius\n" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelMeshTool.h" },
		{ "ToolTip", "Relative to the radius" },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSmoothImport_MetaData[] = {
		{ "Category", "Tool Settings" },
		{ "Comment", "// Do a smooth import by converting the voxel densities & the mesh to true distance fields, and doing a smooth union/subtraction on these\n// NOTE: Disabled if bProgressiveStamp = true\n// NOTE: Will disable bImportColorsFromMesh/bImportUVsFromMesh\n" },
		{ "EditCondition", "!bProgressiveStamp" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelMeshTool.h" },
		{ "ToolTip", "Do a smooth import by converting the voxel densities & the mesh to true distance fields, and doing a smooth union/subtraction on these\nNOTE: Disabled if bProgressiveStamp = true\nNOTE: Will disable bImportColorsFromMesh/bImportUVsFromMesh" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Smoothness_MetaData[] = {
		{ "Category", "Tool Settings" },
		{ "Comment", "// Relative to radius\n" },
		{ "EditCondition", "bSmoothImport && !bProgressiveStamp" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelMeshTool.h" },
		{ "ToolTip", "Relative to radius" },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bProgressiveStamp_MetaData[] = {
		{ "Category", "Tool Settings" },
		{ "Comment", "// Will slowly grow/shrink the surface towards the mesh\n// NOTE: Will disable SmoothImport\n// NOTE: Will disable bImportColorsFromMesh/bImportUVsFromMesh\n" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelMeshTool.h" },
		{ "ToolTip", "Will slowly grow/shrink the surface towards the mesh\nNOTE: Will disable SmoothImport\nNOTE: Will disable bImportColorsFromMesh/bImportUVsFromMesh" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Speed_MetaData[] = {
		{ "Category", "Tool Settings" },
		{ "Comment", "// Speed of the progressive stamp\n// Make sure your mesh is intersecting the voxel world!\n" },
		{ "EditCondition", "bProgressiveStamp" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelMeshTool.h" },
		{ "ToolTip", "Speed of the progressive stamp\nMake sure your mesh is intersecting the voxel world!" },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeshImporterSettings_MetaData[] = {
		{ "Category", "Tool Settings" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelMeshTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSculpt_MetaData[] = {
		{ "Category", "Sculpt Settings" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelMeshTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPaint_MetaData[] = {
		{ "Category", "Paint Settings" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelMeshTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PaintMask_MetaData[] = {
		{ "Bitmask", "" },
		{ "BitmaskEnum", "/Script/Voxel.EVoxelMaterialMask_BP" },
		{ "Category", "Paint Settings" },
		{ "Comment", "// Use to restrict editing on some channels\n" },
		{ "EditCondition", "bPaint" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelMeshTool.h" },
		{ "ToolTip", "Use to restrict editing on some channels" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPaintColors_MetaData[] = {
		{ "Category", "Paint Settings" },
		{ "EditCondition", "bPaint" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelMeshTool.h" },
		{ "ShowForMaterialConfigs", "RGB, SingleIndex" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bImportColorsFromMesh_MetaData[] = {
		{ "Category", "Paint Settings" },
		{ "Comment", "// Import the colors directly from the mesh by sampling ColorsMaterial at the mesh UVs\n// NOTE: Will be disabled if bSmoothImport = true or bProgressiveStamp = true\n" },
		{ "EditCondition", "bPaint && !bSmoothImport && !bProgressiveStamp && bPaintColors" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelMeshTool.h" },
		{ "ShowForMaterialConfigs", "RGB, SingleIndex" },
		{ "ToolTip", "Import the colors directly from the mesh by sampling ColorsMaterial at the mesh UVs\nNOTE: Will be disabled if bSmoothImport = true or bProgressiveStamp = true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ColorsMaterial_MetaData[] = {
		{ "Category", "Paint Settings" },
		{ "EditCondition", "bPaint && !bSmoothImport && !bProgressiveStamp && bPaintColors && bImportColorsFromMesh" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelMeshTool.h" },
		{ "ShowForMaterialConfigs", "RGB, SingleIndex" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ColorToPaint_MetaData[] = {
		{ "Category", "Paint Settings" },
		{ "Comment", "// Used if bImportColorsFromMesh = false\n" },
		{ "EditCondition", "bPaint && bPaintColors" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelMeshTool.h" },
		{ "ShowForMaterialConfigs", "RGB, SingleIndex" },
		{ "ToolTip", "Used if bImportColorsFromMesh = false" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPaintUVs_MetaData[] = {
		{ "Category", "Paint Settings" },
		{ "EditCondition", "bPaint" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelMeshTool.h" },
		{ "ShowForMaterialConfigs", "RGB, SingleIndex" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bImportUVsFromMesh_MetaData[] = {
		{ "Category", "Paint Settings" },
		{ "Comment", "// Import the uvs directly from the mesh by sampling UVsMaterial at the mesh UVs\n// NOTE: Will be disabled if bSmoothImport = true or bProgressiveStamp = true\n" },
		{ "EditCondition", "bPaint && !bSmoothImport && !bProgressiveStamp && bPaintUVs" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelMeshTool.h" },
		{ "ShowForMaterialConfigs", "RGB, SingleIndex" },
		{ "ToolTip", "Import the uvs directly from the mesh by sampling UVsMaterial at the mesh UVs\nNOTE: Will be disabled if bSmoothImport = true or bProgressiveStamp = true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UVsMaterial_MetaData[] = {
		{ "Category", "Paint Settings" },
		{ "EditCondition", "bPaint && !bSmoothImport && !bProgressiveStamp && bPaintUVs" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelMeshTool.h" },
		{ "ShowForMaterialConfigs", "RGB, SingleIndex" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UV0ToPaint_MetaData[] = {
		{ "Category", "Paint Settings" },
		{ "Comment", "// Used if bImportUVsFromMesh = false\n" },
		{ "EditCondition", "bPaint && bPaintUVs" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelMeshTool.h" },
		{ "ShowForMaterialConfigs", "RGB, SingleIndex" },
		{ "ToolTip", "Used if bImportUVsFromMesh = false" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UV1ToPaint_MetaData[] = {
		{ "Category", "Paint Settings" },
		{ "Comment", "// Used if bImportUVsFromMesh = false\n" },
		{ "EditCondition", "bPaint && bPaintUVs" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelMeshTool.h" },
		{ "ShowForMaterialConfigs", "RGB, SingleIndex" },
		{ "ToolTip", "Used if bImportUVsFromMesh = false" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPaintIndex_MetaData[] = {
		{ "Category", "Paint Settings" },
		{ "EditCondition", "bPaint" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelMeshTool.h" },
		{ "ShowForMaterialConfigs", "SingleIndex, MultiIndex" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IndexToPaint_MetaData[] = {
		{ "Category", "Paint Settings" },
		{ "EditCondition", "bPaint && bPaintIndex" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelMeshTool.h" },
		{ "ShowForMaterialConfigs", "SingleIndex, MultiIndex" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UVsRenderTarget_MetaData[] = {
		{ "Category", "Paint Settings" },
		{ "Comment", "// For debug\n" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelMeshTool.h" },
		{ "ShowForMaterialConfigs", "RGB, SingleIndex" },
		{ "ToolTip", "For debug" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ColorsRenderTarget_MetaData[] = {
		{ "Category", "Paint Settings" },
		{ "Comment", "// For debug\n" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelMeshTool.h" },
		{ "ShowForMaterialConfigs", "RGB, SingleIndex" },
		{ "ToolTip", "For debug" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RenderTargetSize_MetaData[] = {
		{ "Category", "Paint Settings" },
		{ "EditCondition", "bPaint && !bSmoothImport && !bProgressiveStamp" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelMeshTool.h" },
		{ "ShowForMaterialConfigs", "RGB, SingleIndex" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PositionOffset_MetaData[] = {
		{ "Category", "Transform" },
		{ "Comment", "// Relative to the size of the mesh\n" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelMeshTool.h" },
		{ "ToolTip", "Relative to the size of the mesh" },
		{ "UIMax", "1" },
		{ "UIMin", "-1" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAbsoluteScale_MetaData[] = {
		{ "Category", "Transform" },
		{ "Comment", "// If false the mesh scale will be set to match the radius\n// If true the mesh scale will ignore the radius, and only use the scale below\n" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelMeshTool.h" },
		{ "ToolTip", "If false the mesh scale will be set to match the radius\nIf true the mesh scale will ignore the radius, and only use the scale below" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Scale_MetaData[] = {
		{ "Category", "Transform" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelMeshTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAlignToNormal_MetaData[] = {
		{ "Category", "Transform" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelMeshTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAlignToMovement_MetaData[] = {
		{ "Category", "Transform" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelMeshTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotationOffset_MetaData[] = {
		{ "Category", "Transform" },
		{ "Comment", "// Applied after position and scale offset\n" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelMeshTool.h" },
		{ "ToolTip", "Applied after position and scale offset" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RenderTargetCache_MetaData[] = {
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelMeshTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AssetData_ImporterSettings_MetaData[] = {
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelMeshTool.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ToolMaterial;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Mesh;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Stride;
	static void NewProp_bSmoothImport_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSmoothImport;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Smoothness;
	static void NewProp_bProgressiveStamp_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bProgressiveStamp;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Speed;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MeshImporterSettings;
	static void NewProp_bSculpt_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSculpt;
	static void NewProp_bPaint_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPaint;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PaintMask;
	static void NewProp_bPaintColors_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPaintColors;
	static void NewProp_bImportColorsFromMesh_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bImportColorsFromMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ColorsMaterial;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ColorToPaint;
	static void NewProp_bPaintUVs_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPaintUVs;
	static void NewProp_bImportUVsFromMesh_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bImportUVsFromMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_UVsMaterial;
	static const UECodeGen_Private::FStructPropertyParams NewProp_UV0ToPaint;
	static const UECodeGen_Private::FStructPropertyParams NewProp_UV1ToPaint;
	static void NewProp_bPaintIndex_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPaintIndex;
	static const UECodeGen_Private::FBytePropertyParams NewProp_IndexToPaint;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_UVsRenderTarget;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ColorsRenderTarget;
	static const UECodeGen_Private::FIntPropertyParams NewProp_RenderTargetSize;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PositionOffset;
	static void NewProp_bAbsoluteScale_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAbsoluteScale;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Scale;
	static void NewProp_bAlignToNormal_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAlignToNormal;
	static void NewProp_bAlignToMovement_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAlignToMovement;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RotationOffset;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RenderTargetCache;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AssetData_ImporterSettings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelMeshTool>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVoxelMeshTool_Statics::NewProp_ToolMaterial = { "ToolMaterial", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelMeshTool, ToolMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ToolMaterial_MetaData), NewProp_ToolMaterial_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVoxelMeshTool_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelMeshTool, Mesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mesh_MetaData), NewProp_Mesh_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVoxelMeshTool_Statics::NewProp_Stride = { "Stride", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelMeshTool, Stride), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Stride_MetaData), NewProp_Stride_MetaData) };
void Z_Construct_UClass_UVoxelMeshTool_Statics::NewProp_bSmoothImport_SetBit(void* Obj)
{
	((UVoxelMeshTool*)Obj)->bSmoothImport = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVoxelMeshTool_Statics::NewProp_bSmoothImport = { "bSmoothImport", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UVoxelMeshTool), &Z_Construct_UClass_UVoxelMeshTool_Statics::NewProp_bSmoothImport_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSmoothImport_MetaData), NewProp_bSmoothImport_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVoxelMeshTool_Statics::NewProp_Smoothness = { "Smoothness", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelMeshTool, Smoothness), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Smoothness_MetaData), NewProp_Smoothness_MetaData) };
void Z_Construct_UClass_UVoxelMeshTool_Statics::NewProp_bProgressiveStamp_SetBit(void* Obj)
{
	((UVoxelMeshTool*)Obj)->bProgressiveStamp = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVoxelMeshTool_Statics::NewProp_bProgressiveStamp = { "bProgressiveStamp", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UVoxelMeshTool), &Z_Construct_UClass_UVoxelMeshTool_Statics::NewProp_bProgressiveStamp_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bProgressiveStamp_MetaData), NewProp_bProgressiveStamp_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVoxelMeshTool_Statics::NewProp_Speed = { "Speed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelMeshTool, Speed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Speed_MetaData), NewProp_Speed_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVoxelMeshTool_Statics::NewProp_MeshImporterSettings = { "MeshImporterSettings", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelMeshTool, MeshImporterSettings), Z_Construct_UScriptStruct_FVoxelMeshImporterSettingsBase, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshImporterSettings_MetaData), NewProp_MeshImporterSettings_MetaData) }; // 1019389412
void Z_Construct_UClass_UVoxelMeshTool_Statics::NewProp_bSculpt_SetBit(void* Obj)
{
	((UVoxelMeshTool*)Obj)->bSculpt = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVoxelMeshTool_Statics::NewProp_bSculpt = { "bSculpt", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UVoxelMeshTool), &Z_Construct_UClass_UVoxelMeshTool_Statics::NewProp_bSculpt_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSculpt_MetaData), NewProp_bSculpt_MetaData) };
void Z_Construct_UClass_UVoxelMeshTool_Statics::NewProp_bPaint_SetBit(void* Obj)
{
	((UVoxelMeshTool*)Obj)->bPaint = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVoxelMeshTool_Statics::NewProp_bPaint = { "bPaint", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UVoxelMeshTool), &Z_Construct_UClass_UVoxelMeshTool_Statics::NewProp_bPaint_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPaint_MetaData), NewProp_bPaint_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UVoxelMeshTool_Statics::NewProp_PaintMask = { "PaintMask", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelMeshTool, PaintMask), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PaintMask_MetaData), NewProp_PaintMask_MetaData) };
void Z_Construct_UClass_UVoxelMeshTool_Statics::NewProp_bPaintColors_SetBit(void* Obj)
{
	((UVoxelMeshTool*)Obj)->bPaintColors = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVoxelMeshTool_Statics::NewProp_bPaintColors = { "bPaintColors", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UVoxelMeshTool), &Z_Construct_UClass_UVoxelMeshTool_Statics::NewProp_bPaintColors_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPaintColors_MetaData), NewProp_bPaintColors_MetaData) };
void Z_Construct_UClass_UVoxelMeshTool_Statics::NewProp_bImportColorsFromMesh_SetBit(void* Obj)
{
	((UVoxelMeshTool*)Obj)->bImportColorsFromMesh = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVoxelMeshTool_Statics::NewProp_bImportColorsFromMesh = { "bImportColorsFromMesh", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UVoxelMeshTool), &Z_Construct_UClass_UVoxelMeshTool_Statics::NewProp_bImportColorsFromMesh_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bImportColorsFromMesh_MetaData), NewProp_bImportColorsFromMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVoxelMeshTool_Statics::NewProp_ColorsMaterial = { "ColorsMaterial", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelMeshTool, ColorsMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ColorsMaterial_MetaData), NewProp_ColorsMaterial_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVoxelMeshTool_Statics::NewProp_ColorToPaint = { "ColorToPaint", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelMeshTool, ColorToPaint), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ColorToPaint_MetaData), NewProp_ColorToPaint_MetaData) };
void Z_Construct_UClass_UVoxelMeshTool_Statics::NewProp_bPaintUVs_SetBit(void* Obj)
{
	((UVoxelMeshTool*)Obj)->bPaintUVs = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVoxelMeshTool_Statics::NewProp_bPaintUVs = { "bPaintUVs", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UVoxelMeshTool), &Z_Construct_UClass_UVoxelMeshTool_Statics::NewProp_bPaintUVs_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPaintUVs_MetaData), NewProp_bPaintUVs_MetaData) };
void Z_Construct_UClass_UVoxelMeshTool_Statics::NewProp_bImportUVsFromMesh_SetBit(void* Obj)
{
	((UVoxelMeshTool*)Obj)->bImportUVsFromMesh = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVoxelMeshTool_Statics::NewProp_bImportUVsFromMesh = { "bImportUVsFromMesh", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UVoxelMeshTool), &Z_Construct_UClass_UVoxelMeshTool_Statics::NewProp_bImportUVsFromMesh_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bImportUVsFromMesh_MetaData), NewProp_bImportUVsFromMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVoxelMeshTool_Statics::NewProp_UVsMaterial = { "UVsMaterial", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelMeshTool, UVsMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UVsMaterial_MetaData), NewProp_UVsMaterial_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVoxelMeshTool_Statics::NewProp_UV0ToPaint = { "UV0ToPaint", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelMeshTool, UV0ToPaint), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UV0ToPaint_MetaData), NewProp_UV0ToPaint_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVoxelMeshTool_Statics::NewProp_UV1ToPaint = { "UV1ToPaint", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelMeshTool, UV1ToPaint), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UV1ToPaint_MetaData), NewProp_UV1ToPaint_MetaData) };
void Z_Construct_UClass_UVoxelMeshTool_Statics::NewProp_bPaintIndex_SetBit(void* Obj)
{
	((UVoxelMeshTool*)Obj)->bPaintIndex = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVoxelMeshTool_Statics::NewProp_bPaintIndex = { "bPaintIndex", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UVoxelMeshTool), &Z_Construct_UClass_UVoxelMeshTool_Statics::NewProp_bPaintIndex_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPaintIndex_MetaData), NewProp_bPaintIndex_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UVoxelMeshTool_Statics::NewProp_IndexToPaint = { "IndexToPaint", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelMeshTool, IndexToPaint), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IndexToPaint_MetaData), NewProp_IndexToPaint_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVoxelMeshTool_Statics::NewProp_UVsRenderTarget = { "UVsRenderTarget", nullptr, (EPropertyFlags)0x0114040000022015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelMeshTool, UVsRenderTarget), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UVsRenderTarget_MetaData), NewProp_UVsRenderTarget_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVoxelMeshTool_Statics::NewProp_ColorsRenderTarget = { "ColorsRenderTarget", nullptr, (EPropertyFlags)0x0114040000022015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelMeshTool, ColorsRenderTarget), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ColorsRenderTarget_MetaData), NewProp_ColorsRenderTarget_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UVoxelMeshTool_Statics::NewProp_RenderTargetSize = { "RenderTargetSize", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelMeshTool, RenderTargetSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RenderTargetSize_MetaData), NewProp_RenderTargetSize_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVoxelMeshTool_Statics::NewProp_PositionOffset = { "PositionOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelMeshTool, PositionOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PositionOffset_MetaData), NewProp_PositionOffset_MetaData) };
void Z_Construct_UClass_UVoxelMeshTool_Statics::NewProp_bAbsoluteScale_SetBit(void* Obj)
{
	((UVoxelMeshTool*)Obj)->bAbsoluteScale = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVoxelMeshTool_Statics::NewProp_bAbsoluteScale = { "bAbsoluteScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UVoxelMeshTool), &Z_Construct_UClass_UVoxelMeshTool_Statics::NewProp_bAbsoluteScale_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAbsoluteScale_MetaData), NewProp_bAbsoluteScale_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVoxelMeshTool_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelMeshTool, Scale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Scale_MetaData), NewProp_Scale_MetaData) };
void Z_Construct_UClass_UVoxelMeshTool_Statics::NewProp_bAlignToNormal_SetBit(void* Obj)
{
	((UVoxelMeshTool*)Obj)->bAlignToNormal = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVoxelMeshTool_Statics::NewProp_bAlignToNormal = { "bAlignToNormal", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UVoxelMeshTool), &Z_Construct_UClass_UVoxelMeshTool_Statics::NewProp_bAlignToNormal_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAlignToNormal_MetaData), NewProp_bAlignToNormal_MetaData) };
void Z_Construct_UClass_UVoxelMeshTool_Statics::NewProp_bAlignToMovement_SetBit(void* Obj)
{
	((UVoxelMeshTool*)Obj)->bAlignToMovement = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVoxelMeshTool_Statics::NewProp_bAlignToMovement = { "bAlignToMovement", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UVoxelMeshTool), &Z_Construct_UClass_UVoxelMeshTool_Statics::NewProp_bAlignToMovement_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAlignToMovement_MetaData), NewProp_bAlignToMovement_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVoxelMeshTool_Statics::NewProp_RotationOffset = { "RotationOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelMeshTool, RotationOffset), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotationOffset_MetaData), NewProp_RotationOffset_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVoxelMeshTool_Statics::NewProp_RenderTargetCache = { "RenderTargetCache", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelMeshTool, RenderTargetCache), Z_Construct_UScriptStruct_FVoxelMeshImporterRenderTargetCache, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RenderTargetCache_MetaData), NewProp_RenderTargetCache_MetaData) }; // 3846496811
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVoxelMeshTool_Statics::NewProp_AssetData_ImporterSettings = { "AssetData_ImporterSettings", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelMeshTool, AssetData_ImporterSettings), Z_Construct_UScriptStruct_FVoxelMeshImporterSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AssetData_ImporterSettings_MetaData), NewProp_AssetData_ImporterSettings_MetaData) }; // 14380683
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelMeshTool_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelMeshTool_Statics::NewProp_ToolMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelMeshTool_Statics::NewProp_Mesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelMeshTool_Statics::NewProp_Stride,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelMeshTool_Statics::NewProp_bSmoothImport,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelMeshTool_Statics::NewProp_Smoothness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelMeshTool_Statics::NewProp_bProgressiveStamp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelMeshTool_Statics::NewProp_Speed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelMeshTool_Statics::NewProp_MeshImporterSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelMeshTool_Statics::NewProp_bSculpt,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelMeshTool_Statics::NewProp_bPaint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelMeshTool_Statics::NewProp_PaintMask,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelMeshTool_Statics::NewProp_bPaintColors,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelMeshTool_Statics::NewProp_bImportColorsFromMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelMeshTool_Statics::NewProp_ColorsMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelMeshTool_Statics::NewProp_ColorToPaint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelMeshTool_Statics::NewProp_bPaintUVs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelMeshTool_Statics::NewProp_bImportUVsFromMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelMeshTool_Statics::NewProp_UVsMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelMeshTool_Statics::NewProp_UV0ToPaint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelMeshTool_Statics::NewProp_UV1ToPaint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelMeshTool_Statics::NewProp_bPaintIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelMeshTool_Statics::NewProp_IndexToPaint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelMeshTool_Statics::NewProp_UVsRenderTarget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelMeshTool_Statics::NewProp_ColorsRenderTarget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelMeshTool_Statics::NewProp_RenderTargetSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelMeshTool_Statics::NewProp_PositionOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelMeshTool_Statics::NewProp_bAbsoluteScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelMeshTool_Statics::NewProp_Scale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelMeshTool_Statics::NewProp_bAlignToNormal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelMeshTool_Statics::NewProp_bAlignToMovement,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelMeshTool_Statics::NewProp_RotationOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelMeshTool_Statics::NewProp_RenderTargetCache,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelMeshTool_Statics::NewProp_AssetData_ImporterSettings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelMeshTool_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UVoxelMeshTool_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UVoxelToolWithAlignment,
	(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelMeshTool_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelMeshTool_Statics::ClassParams = {
	&UVoxelMeshTool::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UVoxelMeshTool_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelMeshTool_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelMeshTool_Statics::Class_MetaDataParams), Z_Construct_UClass_UVoxelMeshTool_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVoxelMeshTool()
{
	if (!Z_Registration_Info_UClass_UVoxelMeshTool.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelMeshTool.OuterSingleton, Z_Construct_UClass_UVoxelMeshTool_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVoxelMeshTool.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelMeshTool);
UVoxelMeshTool::~UVoxelMeshTool() {}
// ********** End Class UVoxelMeshTool *************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelTools_Tools_VoxelMeshTool_h__Script_Voxel_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UVoxelMeshTool, UVoxelMeshTool::StaticClass, TEXT("UVoxelMeshTool"), &Z_Registration_Info_UClass_UVoxelMeshTool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelMeshTool), 3633702161U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelTools_Tools_VoxelMeshTool_h__Script_Voxel_1577208189(TEXT("/Script/Voxel"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelTools_Tools_VoxelMeshTool_h__Script_Voxel_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelTools_Tools_VoxelMeshTool_h__Script_Voxel_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
