// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VoxelGraphPreviewSettings.h"
#include "VoxelIntBox.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeVoxelGraphPreviewSettings() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntVector();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
UPackage* Z_Construct_UPackage__Script_VoxelGraph();
VOXEL_API UClass* Z_Construct_UClass_UVoxelMaterialCollectionBase_NoRegister();
VOXEL_API UClass* Z_Construct_UClass_UVoxelPlaceableItemManager_NoRegister();
VOXEL_API UEnum* Z_Construct_UEnum_Voxel_EVoxelMaterialConfig();
VOXEL_API UEnum* Z_Construct_UEnum_Voxel_EVoxelRenderType();
VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelIntBox();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelGraphGenerator_NoRegister();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelGraphPreviewSettings();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelGraphPreviewSettings_NoRegister();
VOXELGRAPH_API UEnum* Z_Construct_UEnum_VoxelGraph_EVoxelGraphMaterialPreviewType();
VOXELGRAPH_API UEnum* Z_Construct_UEnum_VoxelGraph_EVoxelGraphPreviewAxes();
VOXELGRAPH_API UEnum* Z_Construct_UEnum_VoxelGraph_EVoxelGraphPreviewShowValue();
VOXELGRAPH_API UEnum* Z_Construct_UEnum_VoxelGraph_EVoxelGraphPreviewType();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EVoxelGraphPreviewAxes ****************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EVoxelGraphPreviewAxes;
static UEnum* EVoxelGraphPreviewAxes_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EVoxelGraphPreviewAxes.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EVoxelGraphPreviewAxes.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_VoxelGraph_EVoxelGraphPreviewAxes, (UObject*)Z_Construct_UPackage__Script_VoxelGraph(), TEXT("EVoxelGraphPreviewAxes"));
	}
	return Z_Registration_Info_UEnum_EVoxelGraphPreviewAxes.OuterSingleton;
}
template<> VOXELGRAPH_API UEnum* StaticEnum<EVoxelGraphPreviewAxes>()
{
	return EVoxelGraphPreviewAxes_StaticEnum();
}
struct Z_Construct_UEnum_VoxelGraph_EVoxelGraphPreviewAxes_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/VoxelGraphPreviewSettings.h" },
		{ "X.Name", "EVoxelGraphPreviewAxes::X" },
		{ "Y.Name", "EVoxelGraphPreviewAxes::Y" },
		{ "Z.Name", "EVoxelGraphPreviewAxes::Z" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EVoxelGraphPreviewAxes::X", (int64)EVoxelGraphPreviewAxes::X },
		{ "EVoxelGraphPreviewAxes::Y", (int64)EVoxelGraphPreviewAxes::Y },
		{ "EVoxelGraphPreviewAxes::Z", (int64)EVoxelGraphPreviewAxes::Z },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_VoxelGraph_EVoxelGraphPreviewAxes_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_VoxelGraph,
	nullptr,
	"EVoxelGraphPreviewAxes",
	"EVoxelGraphPreviewAxes",
	Z_Construct_UEnum_VoxelGraph_EVoxelGraphPreviewAxes_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_VoxelGraph_EVoxelGraphPreviewAxes_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_VoxelGraph_EVoxelGraphPreviewAxes_Statics::Enum_MetaDataParams), Z_Construct_UEnum_VoxelGraph_EVoxelGraphPreviewAxes_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_VoxelGraph_EVoxelGraphPreviewAxes()
{
	if (!Z_Registration_Info_UEnum_EVoxelGraphPreviewAxes.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EVoxelGraphPreviewAxes.InnerSingleton, Z_Construct_UEnum_VoxelGraph_EVoxelGraphPreviewAxes_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EVoxelGraphPreviewAxes.InnerSingleton;
}
// ********** End Enum EVoxelGraphPreviewAxes ******************************************************

// ********** Begin Enum EVoxelGraphPreviewType ****************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EVoxelGraphPreviewType;
static UEnum* EVoxelGraphPreviewType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EVoxelGraphPreviewType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EVoxelGraphPreviewType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_VoxelGraph_EVoxelGraphPreviewType, (UObject*)Z_Construct_UPackage__Script_VoxelGraph(), TEXT("EVoxelGraphPreviewType"));
	}
	return Z_Registration_Info_UEnum_EVoxelGraphPreviewType.OuterSingleton;
}
template<> VOXELGRAPH_API UEnum* StaticEnum<EVoxelGraphPreviewType>()
{
	return EVoxelGraphPreviewType_StaticEnum();
}
struct Z_Construct_UEnum_VoxelGraph_EVoxelGraphPreviewType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Cost.Name", "EVoxelGraphPreviewType::Cost" },
		{ "Density.Name", "EVoxelGraphPreviewType::Density" },
		{ "Material.Name", "EVoxelGraphPreviewType::Material" },
		{ "ModuleRelativePath", "Public/VoxelGraphPreviewSettings.h" },
		{ "RangeAnalysis.Name", "EVoxelGraphPreviewType::RangeAnalysis" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EVoxelGraphPreviewType::Density", (int64)EVoxelGraphPreviewType::Density },
		{ "EVoxelGraphPreviewType::Material", (int64)EVoxelGraphPreviewType::Material },
		{ "EVoxelGraphPreviewType::Cost", (int64)EVoxelGraphPreviewType::Cost },
		{ "EVoxelGraphPreviewType::RangeAnalysis", (int64)EVoxelGraphPreviewType::RangeAnalysis },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_VoxelGraph_EVoxelGraphPreviewType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_VoxelGraph,
	nullptr,
	"EVoxelGraphPreviewType",
	"EVoxelGraphPreviewType",
	Z_Construct_UEnum_VoxelGraph_EVoxelGraphPreviewType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_VoxelGraph_EVoxelGraphPreviewType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_VoxelGraph_EVoxelGraphPreviewType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_VoxelGraph_EVoxelGraphPreviewType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_VoxelGraph_EVoxelGraphPreviewType()
{
	if (!Z_Registration_Info_UEnum_EVoxelGraphPreviewType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EVoxelGraphPreviewType.InnerSingleton, Z_Construct_UEnum_VoxelGraph_EVoxelGraphPreviewType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EVoxelGraphPreviewType.InnerSingleton;
}
// ********** End Enum EVoxelGraphPreviewType ******************************************************

// ********** Begin Enum EVoxelGraphPreviewShowValue ***********************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EVoxelGraphPreviewShowValue;
static UEnum* EVoxelGraphPreviewShowValue_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EVoxelGraphPreviewShowValue.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EVoxelGraphPreviewShowValue.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_VoxelGraph_EVoxelGraphPreviewShowValue, (UObject*)Z_Construct_UPackage__Script_VoxelGraph(), TEXT("EVoxelGraphPreviewShowValue"));
	}
	return Z_Registration_Info_UEnum_EVoxelGraphPreviewShowValue.OuterSingleton;
}
template<> VOXELGRAPH_API UEnum* StaticEnum<EVoxelGraphPreviewShowValue>()
{
	return EVoxelGraphPreviewShowValue_StaticEnum();
}
struct Z_Construct_UEnum_VoxelGraph_EVoxelGraphPreviewShowValue_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/VoxelGraphPreviewSettings.h" },
		{ "ShowRange.Name", "EVoxelGraphPreviewShowValue::ShowRange" },
		{ "ShowValue.Name", "EVoxelGraphPreviewShowValue::ShowValue" },
		{ "ShowValueAndRange.Name", "EVoxelGraphPreviewShowValue::ShowValueAndRange" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EVoxelGraphPreviewShowValue::ShowValue", (int64)EVoxelGraphPreviewShowValue::ShowValue },
		{ "EVoxelGraphPreviewShowValue::ShowRange", (int64)EVoxelGraphPreviewShowValue::ShowRange },
		{ "EVoxelGraphPreviewShowValue::ShowValueAndRange", (int64)EVoxelGraphPreviewShowValue::ShowValueAndRange },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_VoxelGraph_EVoxelGraphPreviewShowValue_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_VoxelGraph,
	nullptr,
	"EVoxelGraphPreviewShowValue",
	"EVoxelGraphPreviewShowValue",
	Z_Construct_UEnum_VoxelGraph_EVoxelGraphPreviewShowValue_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_VoxelGraph_EVoxelGraphPreviewShowValue_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_VoxelGraph_EVoxelGraphPreviewShowValue_Statics::Enum_MetaDataParams), Z_Construct_UEnum_VoxelGraph_EVoxelGraphPreviewShowValue_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_VoxelGraph_EVoxelGraphPreviewShowValue()
{
	if (!Z_Registration_Info_UEnum_EVoxelGraphPreviewShowValue.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EVoxelGraphPreviewShowValue.InnerSingleton, Z_Construct_UEnum_VoxelGraph_EVoxelGraphPreviewShowValue_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EVoxelGraphPreviewShowValue.InnerSingleton;
}
// ********** End Enum EVoxelGraphPreviewShowValue *************************************************

// ********** Begin Enum EVoxelGraphMaterialPreviewType ********************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EVoxelGraphMaterialPreviewType;
static UEnum* EVoxelGraphMaterialPreviewType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EVoxelGraphMaterialPreviewType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EVoxelGraphMaterialPreviewType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_VoxelGraph_EVoxelGraphMaterialPreviewType, (UObject*)Z_Construct_UPackage__Script_VoxelGraph(), TEXT("EVoxelGraphMaterialPreviewType"));
	}
	return Z_Registration_Info_UEnum_EVoxelGraphMaterialPreviewType.OuterSingleton;
}
template<> VOXELGRAPH_API UEnum* StaticEnum<EVoxelGraphMaterialPreviewType>()
{
	return EVoxelGraphMaterialPreviewType_StaticEnum();
}
struct Z_Construct_UEnum_VoxelGraph_EVoxelGraphMaterialPreviewType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Alpha.Comment", "// Show the material Alpha value\n" },
		{ "Alpha.Name", "EVoxelGraphMaterialPreviewType::Alpha" },
		{ "Alpha.ToolTip", "Show the material Alpha value" },
		{ "ModuleRelativePath", "Public/VoxelGraphPreviewSettings.h" },
		{ "MultiIndex_Overview.Comment", "// Blends the indices colors\n" },
		{ "MultiIndex_Overview.Name", "EVoxelGraphMaterialPreviewType::MultiIndex_Overview" },
		{ "MultiIndex_Overview.ToolTip", "Blends the indices colors" },
		{ "MultiIndex_SingleIndexPreview.Comment", "// Only shows the strength of a single index (set by MultiIndexToPreview)\n" },
		{ "MultiIndex_SingleIndexPreview.Name", "EVoxelGraphMaterialPreviewType::MultiIndex_SingleIndexPreview" },
		{ "MultiIndex_SingleIndexPreview.ToolTip", "Only shows the strength of a single index (set by MultiIndexToPreview)" },
		{ "MultiIndex_Wetness.Comment", "// Wetness\n" },
		{ "MultiIndex_Wetness.Name", "EVoxelGraphMaterialPreviewType::MultiIndex_Wetness" },
		{ "MultiIndex_Wetness.ToolTip", "Wetness" },
		{ "RGB.Comment", "// Show the material RGB values\n" },
		{ "RGB.Name", "EVoxelGraphMaterialPreviewType::RGB" },
		{ "RGB.ToolTip", "Show the material RGB values" },
		{ "SingleIndex.Comment", "// Assign one color per index\n" },
		{ "SingleIndex.Name", "EVoxelGraphMaterialPreviewType::SingleIndex" },
		{ "SingleIndex.ToolTip", "Assign one color per index" },
		{ "UV0.Comment", "// Red-Green preview of UV0\n" },
		{ "UV0.Name", "EVoxelGraphMaterialPreviewType::UV0" },
		{ "UV0.ToolTip", "Red-Green preview of UV0" },
		{ "UV1.Comment", "// Red-Green preview of UV1\n" },
		{ "UV1.Name", "EVoxelGraphMaterialPreviewType::UV1" },
		{ "UV1.ToolTip", "Red-Green preview of UV1" },
		{ "UV2.Comment", "// Red-Green preview of UV2\n" },
		{ "UV2.Name", "EVoxelGraphMaterialPreviewType::UV2" },
		{ "UV2.ToolTip", "Red-Green preview of UV2" },
		{ "UV3.Comment", "// Red-Green preview of UV3\n" },
		{ "UV3.Name", "EVoxelGraphMaterialPreviewType::UV3" },
		{ "UV3.ToolTip", "Red-Green preview of UV3" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EVoxelGraphMaterialPreviewType::RGB", (int64)EVoxelGraphMaterialPreviewType::RGB },
		{ "EVoxelGraphMaterialPreviewType::Alpha", (int64)EVoxelGraphMaterialPreviewType::Alpha },
		{ "EVoxelGraphMaterialPreviewType::SingleIndex", (int64)EVoxelGraphMaterialPreviewType::SingleIndex },
		{ "EVoxelGraphMaterialPreviewType::MultiIndex_Overview", (int64)EVoxelGraphMaterialPreviewType::MultiIndex_Overview },
		{ "EVoxelGraphMaterialPreviewType::MultiIndex_SingleIndexPreview", (int64)EVoxelGraphMaterialPreviewType::MultiIndex_SingleIndexPreview },
		{ "EVoxelGraphMaterialPreviewType::MultiIndex_Wetness", (int64)EVoxelGraphMaterialPreviewType::MultiIndex_Wetness },
		{ "EVoxelGraphMaterialPreviewType::UV0", (int64)EVoxelGraphMaterialPreviewType::UV0 },
		{ "EVoxelGraphMaterialPreviewType::UV1", (int64)EVoxelGraphMaterialPreviewType::UV1 },
		{ "EVoxelGraphMaterialPreviewType::UV2", (int64)EVoxelGraphMaterialPreviewType::UV2 },
		{ "EVoxelGraphMaterialPreviewType::UV3", (int64)EVoxelGraphMaterialPreviewType::UV3 },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_VoxelGraph_EVoxelGraphMaterialPreviewType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_VoxelGraph,
	nullptr,
	"EVoxelGraphMaterialPreviewType",
	"EVoxelGraphMaterialPreviewType",
	Z_Construct_UEnum_VoxelGraph_EVoxelGraphMaterialPreviewType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_VoxelGraph_EVoxelGraphMaterialPreviewType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_VoxelGraph_EVoxelGraphMaterialPreviewType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_VoxelGraph_EVoxelGraphMaterialPreviewType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_VoxelGraph_EVoxelGraphMaterialPreviewType()
{
	if (!Z_Registration_Info_UEnum_EVoxelGraphMaterialPreviewType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EVoxelGraphMaterialPreviewType.InnerSingleton, Z_Construct_UEnum_VoxelGraph_EVoxelGraphMaterialPreviewType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EVoxelGraphMaterialPreviewType.InnerSingleton;
}
// ********** End Enum EVoxelGraphMaterialPreviewType **********************************************

// ********** Begin Class UVoxelGraphPreviewSettings ***********************************************
void UVoxelGraphPreviewSettings::StaticRegisterNativesUVoxelGraphPreviewSettings()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UVoxelGraphPreviewSettings;
UClass* UVoxelGraphPreviewSettings::GetPrivateStaticClass()
{
	using TClass = UVoxelGraphPreviewSettings;
	if (!Z_Registration_Info_UClass_UVoxelGraphPreviewSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("VoxelGraphPreviewSettings"),
			Z_Registration_Info_UClass_UVoxelGraphPreviewSettings.InnerSingleton,
			StaticRegisterNativesUVoxelGraphPreviewSettings,
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
	return Z_Registration_Info_UClass_UVoxelGraphPreviewSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UVoxelGraphPreviewSettings_NoRegister()
{
	return UVoxelGraphPreviewSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UVoxelGraphPreviewSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "VoxelGraphPreviewSettings.h" },
		{ "ModuleRelativePath", "Public/VoxelGraphPreviewSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShowStats_MetaData[] = {
		{ "ModuleRelativePath", "Public/VoxelGraphPreviewSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShowValues_MetaData[] = {
		{ "ModuleRelativePath", "Public/VoxelGraphPreviewSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinValue_MetaData[] = {
		{ "Category", "Preview Info" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Min displayed value\n" },
#endif
		{ "ModuleRelativePath", "Public/VoxelGraphPreviewSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Min displayed value" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxValue_MetaData[] = {
		{ "Category", "Preview Info" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Max displayed value\n" },
#endif
		{ "ModuleRelativePath", "Public/VoxelGraphPreviewSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Max displayed value" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PreviewedBounds_MetaData[] = {
		{ "Category", "Preview Info" },
		{ "ModuleRelativePath", "Public/VoxelGraphPreviewSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LeftToRight_MetaData[] = {
		{ "Category", "Preview Zone" },
		{ "ModuleRelativePath", "Public/VoxelGraphPreviewSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BottomToTop_MetaData[] = {
		{ "Category", "Preview Zone" },
		{ "ModuleRelativePath", "Public/VoxelGraphPreviewSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Resolution_MetaData[] = {
		{ "Category", "Preview Zone" },
		{ "ClampMax", "8192" },
		{ "ClampMin", "32" },
		{ "ModuleRelativePath", "Public/VoxelGraphPreviewSettings.h" },
		{ "UIMax", "1000" },
		{ "UIMin", "100" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ResolutionMultiplierLog_MetaData[] = {
		{ "Category", "Preview Zone" },
		{ "ModuleRelativePath", "Public/VoxelGraphPreviewSettings.h" },
		{ "UIMax", "20" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Center_MetaData[] = {
		{ "Category", "Preview Zone" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Right click & pan the preview to change it\n" },
#endif
		{ "ModuleRelativePath", "Public/VoxelGraphPreviewSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Right click & pan the preview to change it" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PreviewedVoxel_MetaData[] = {
		{ "Category", "Preview Zone" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Left click the preview to set it\n" },
#endif
		{ "ModuleRelativePath", "Public/VoxelGraphPreviewSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Left click the preview to set it" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShowValue_MetaData[] = {
		{ "Category", "Preview Zone" },
		{ "ModuleRelativePath", "Public/VoxelGraphPreviewSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaterialConfig_MetaData[] = {
		{ "Category", "Voxel World Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Set this to the material config your voxel world will use\n" },
#endif
		{ "ModuleRelativePath", "Public/VoxelGraphPreviewSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set this to the material config your voxel world will use" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaterialCollection_MetaData[] = {
		{ "Category", "Voxel World Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Use to preview Get Index from Material Collection\n" },
#endif
		{ "ModuleRelativePath", "Public/VoxelGraphPreviewSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Use to preview Get Index from Material Collection" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlaceableItemManager_MetaData[] = {
		{ "Automatic", "" },
		{ "Category", "Voxel World Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Used to preview placeable items\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/VoxelGraphPreviewSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Used to preview placeable items" },
#endif
		{ "UpdateItems", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VoxelSize_MetaData[] = {
		{ "Category", "Voxel World Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Value returned by the Voxel Size node\n" },
#endif
		{ "ModuleRelativePath", "Public/VoxelGraphPreviewSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Value returned by the Voxel Size node" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RenderType_MetaData[] = {
		{ "Category", "Voxel World Settings" },
		{ "ModuleRelativePath", "Public/VoxelGraphPreviewSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PreviewType2D_MetaData[] = {
		{ "Category", "2D Preview Color" },
		{ "ModuleRelativePath", "Public/VoxelGraphPreviewSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDrawColoredDistanceField_MetaData[] = {
		{ "Category", "2D Preview Color" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// If true, will color the distance field orange when positive, blue when negative, and will apply a cosine to make progression easier to see\n// This coloring is directly derived from Inigo Quilez's work\n" },
#endif
		{ "ModuleRelativePath", "Public/VoxelGraphPreviewSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If true, will color the distance field orange when positive, blue when negative, and will apply a cosine to make progression easier to see\nThis coloring is directly derived from Inigo Quilez's work" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaterialPreviewType_MetaData[] = {
		{ "Category", "2D Preview Color" },
		{ "ModuleRelativePath", "Public/VoxelGraphPreviewSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MultiIndexToPreview_MetaData[] = {
		{ "Category", "2D Preview Color" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Used if material preview type is MultiIndex_SingleIndexPreview\n" },
#endif
		{ "ModuleRelativePath", "Public/VoxelGraphPreviewSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Used if material preview type is MultiIndex_SingleIndexPreview" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IndexColors_MetaData[] = {
		{ "Category", "2D Preview Color" },
		{ "ModuleRelativePath", "Public/VoxelGraphPreviewSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHybridMaterialRendering_MetaData[] = {
		{ "Category", "2D Preview Color" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// If true, areas where the density is > 0 will be shown as black\n" },
#endif
		{ "ModuleRelativePath", "Public/VoxelGraphPreviewSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If true, areas where the density is > 0 will be shown as black" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CostPercentile_MetaData[] = {
		{ "Category", "2D Preview Color" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Increase this if there's too much noise in the cost view\n" },
#endif
		{ "ModuleRelativePath", "Public/VoxelGraphPreviewSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Increase this if there's too much noise in the cost view" },
#endif
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumRangeAnalysisChunksPerAxis_MetaData[] = {
		{ "Category", "2D Preview Color" },
		{ "ModuleRelativePath", "Public/VoxelGraphPreviewSettings.h" },
		{ "UIMax", "1024" },
		{ "UIMin", "1" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHeightmapMode_MetaData[] = {
		{ "Category", "3D Preview Settings" },
		{ "ModuleRelativePath", "Public/VoxelGraphPreviewSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHeightBasedColor_MetaData[] = {
		{ "Category", "3D Preview Heightmap Settings" },
		{ "ModuleRelativePath", "Public/VoxelGraphPreviewSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableWater_MetaData[] = {
		{ "Category", "3D Preview Heightmap Settings" },
		{ "EditCondition", "bHeightBasedColor" },
		{ "MeshOnly", "" },
		{ "ModuleRelativePath", "Public/VoxelGraphPreviewSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Height_MetaData[] = {
		{ "Category", "3D Preview Heightmap Settings" },
		{ "MeshOnly", "" },
		{ "ModuleRelativePath", "Public/VoxelGraphPreviewSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LightDirection_MetaData[] = {
		{ "Category", "3D Preview Heightmap Settings" },
		{ "MeshOnly", "" },
		{ "ModuleRelativePath", "Public/VoxelGraphPreviewSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartBias_MetaData[] = {
		{ "Category", "3D Preview Heightmap Settings|Raytraced Shadows" },
		{ "MeshOnly", "" },
		{ "ModuleRelativePath", "Public/VoxelGraphPreviewSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxSteps_MetaData[] = {
		{ "Category", "3D Preview Heightmap Settings|Raytraced Shadows" },
		{ "MeshOnly", "" },
		{ "ModuleRelativePath", "Public/VoxelGraphPreviewSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Brightness_MetaData[] = {
		{ "Category", "3D Preview Heightmap Settings|Raytraced Shadows" },
		{ "MeshOnly", "" },
		{ "ModuleRelativePath", "Public/VoxelGraphPreviewSettings.h" },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShadowDensity_MetaData[] = {
		{ "Category", "3D Preview Heightmap Settings|Raytraced Shadows" },
		{ "MeshOnly", "" },
		{ "ModuleRelativePath", "Public/VoxelGraphPreviewSettings.h" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[] = {
		{ "ModuleRelativePath", "Public/VoxelGraphPreviewSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HeightmapMaterial_MetaData[] = {
		{ "ModuleRelativePath", "Public/VoxelGraphPreviewSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SliceMaterial_MetaData[] = {
		{ "ModuleRelativePath", "Public/VoxelGraphPreviewSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAutoNormalize_MetaData[] = {
		{ "Category", "Misc" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Will set black to the lowest value in the image, and white to the highest\n" },
#endif
		{ "ModuleRelativePath", "Public/VoxelGraphPreviewSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Will set black to the lowest value in the image, and white to the highest" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NormalizeMinValue_MetaData[] = {
		{ "Category", "Misc" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Black\n" },
#endif
		{ "EditCondition", "!bAutoNormalize" },
		{ "ModuleRelativePath", "Public/VoxelGraphPreviewSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Black" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NormalizeMaxValue_MetaData[] = {
		{ "Category", "Misc" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// White\n" },
#endif
		{ "EditCondition", "!bAutoNormalize" },
		{ "ModuleRelativePath", "Public/VoxelGraphPreviewSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "White" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LODToPreview_MetaData[] = {
		{ "Category", "Misc" },
		{ "ClampMax", "26" },
		{ "ClampMin", "0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Simulate querying a chunk at a specific LOD, eg to check fractal noise settings\n" },
#endif
		{ "DisplayName", "LOD to preview" },
		{ "ModuleRelativePath", "Public/VoxelGraphPreviewSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Simulate querying a chunk at a specific LOD, eg to check fractal noise settings" },
#endif
		{ "UIMax", "26" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Graph_MetaData[] = {
		{ "ModuleRelativePath", "Public/VoxelGraphPreviewSettings.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bShowStats_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowStats;
	static void NewProp_bShowValues_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowValues;
	static const UECodeGen_Private::FStrPropertyParams NewProp_MinValue;
	static const UECodeGen_Private::FStrPropertyParams NewProp_MaxValue;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PreviewedBounds;
	static const UECodeGen_Private::FBytePropertyParams NewProp_LeftToRight_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_LeftToRight;
	static const UECodeGen_Private::FBytePropertyParams NewProp_BottomToTop_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_BottomToTop;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Resolution;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ResolutionMultiplierLog;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Center;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PreviewedVoxel;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ShowValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ShowValue;
	static const UECodeGen_Private::FBytePropertyParams NewProp_MaterialConfig_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_MaterialConfig;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MaterialCollection;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlaceableItemManager;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_VoxelSize;
	static const UECodeGen_Private::FBytePropertyParams NewProp_RenderType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_RenderType;
	static const UECodeGen_Private::FBytePropertyParams NewProp_PreviewType2D_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_PreviewType2D;
	static void NewProp_bDrawColoredDistanceField_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDrawColoredDistanceField;
	static const UECodeGen_Private::FBytePropertyParams NewProp_MaterialPreviewType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_MaterialPreviewType;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MultiIndexToPreview;
	static const UECodeGen_Private::FStructPropertyParams NewProp_IndexColors_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_IndexColors;
	static void NewProp_bHybridMaterialRendering_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHybridMaterialRendering;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CostPercentile;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumRangeAnalysisChunksPerAxis;
	static void NewProp_bHeightmapMode_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHeightmapMode;
	static void NewProp_bHeightBasedColor_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHeightBasedColor;
	static void NewProp_bEnableWater_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableWater;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Height;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LightDirection;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StartBias;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxSteps;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Brightness;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ShadowDensity;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Mesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HeightmapMaterial;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SliceMaterial;
	static void NewProp_bAutoNormalize_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoNormalize;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NormalizeMinValue;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NormalizeMaxValue;
	static const UECodeGen_Private::FIntPropertyParams NewProp_LODToPreview;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Graph;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelGraphPreviewSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UVoxelGraphPreviewSettings_Statics::NewProp_bShowStats_SetBit(void* Obj)
{
	((UVoxelGraphPreviewSettings*)Obj)->bShowStats = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVoxelGraphPreviewSettings_Statics::NewProp_bShowStats = { "bShowStats", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UVoxelGraphPreviewSettings), &Z_Construct_UClass_UVoxelGraphPreviewSettings_Statics::NewProp_bShowStats_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShowStats_MetaData), NewProp_bShowStats_MetaData) };
void Z_Construct_UClass_UVoxelGraphPreviewSettings_Statics::NewProp_bShowValues_SetBit(void* Obj)
{
	((UVoxelGraphPreviewSettings*)Obj)->bShowValues = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVoxelGraphPreviewSettings_Statics::NewProp_bShowValues = { "bShowValues", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UVoxelGraphPreviewSettings), &Z_Construct_UClass_UVoxelGraphPreviewSettings_Statics::NewProp_bShowValues_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShowValues_MetaData), NewProp_bShowValues_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UVoxelGraphPreviewSettings_Statics::NewProp_MinValue = { "MinValue", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelGraphPreviewSettings, MinValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinValue_MetaData), NewProp_MinValue_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UVoxelGraphPreviewSettings_Statics::NewProp_MaxValue = { "MaxValue", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelGraphPreviewSettings, MaxValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxValue_MetaData), NewProp_MaxValue_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVoxelGraphPreviewSettings_Statics::NewProp_PreviewedBounds = { "PreviewedBounds", nullptr, (EPropertyFlags)0x0010040000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelGraphPreviewSettings, PreviewedBounds), Z_Construct_UScriptStruct_FVoxelIntBox, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PreviewedBounds_MetaData), NewProp_PreviewedBounds_MetaData) }; // 3520536583
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UVoxelGraphPreviewSettings_Statics::NewProp_LeftToRight_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UVoxelGraphPreviewSettings_Statics::NewProp_LeftToRight = { "LeftToRight", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelGraphPreviewSettings, LeftToRight), Z_Construct_UEnum_VoxelGraph_EVoxelGraphPreviewAxes, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LeftToRight_MetaData), NewProp_LeftToRight_MetaData) }; // 4155492522
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UVoxelGraphPreviewSettings_Statics::NewProp_BottomToTop_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UVoxelGraphPreviewSettings_Statics::NewProp_BottomToTop = { "BottomToTop", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelGraphPreviewSettings, BottomToTop), Z_Construct_UEnum_VoxelGraph_EVoxelGraphPreviewAxes, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BottomToTop_MetaData), NewProp_BottomToTop_MetaData) }; // 4155492522
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UVoxelGraphPreviewSettings_Statics::NewProp_Resolution = { "Resolution", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelGraphPreviewSettings, Resolution), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Resolution_MetaData), NewProp_Resolution_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UVoxelGraphPreviewSettings_Statics::NewProp_ResolutionMultiplierLog = { "ResolutionMultiplierLog", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelGraphPreviewSettings, ResolutionMultiplierLog), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ResolutionMultiplierLog_MetaData), NewProp_ResolutionMultiplierLog_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVoxelGraphPreviewSettings_Statics::NewProp_Center = { "Center", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelGraphPreviewSettings, Center), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Center_MetaData), NewProp_Center_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVoxelGraphPreviewSettings_Statics::NewProp_PreviewedVoxel = { "PreviewedVoxel", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelGraphPreviewSettings, PreviewedVoxel), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PreviewedVoxel_MetaData), NewProp_PreviewedVoxel_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UVoxelGraphPreviewSettings_Statics::NewProp_ShowValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UVoxelGraphPreviewSettings_Statics::NewProp_ShowValue = { "ShowValue", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelGraphPreviewSettings, ShowValue), Z_Construct_UEnum_VoxelGraph_EVoxelGraphPreviewShowValue, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShowValue_MetaData), NewProp_ShowValue_MetaData) }; // 323946903
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UVoxelGraphPreviewSettings_Statics::NewProp_MaterialConfig_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UVoxelGraphPreviewSettings_Statics::NewProp_MaterialConfig = { "MaterialConfig", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelGraphPreviewSettings, MaterialConfig), Z_Construct_UEnum_Voxel_EVoxelMaterialConfig, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaterialConfig_MetaData), NewProp_MaterialConfig_MetaData) }; // 762384558
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVoxelGraphPreviewSettings_Statics::NewProp_MaterialCollection = { "MaterialCollection", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelGraphPreviewSettings, MaterialCollection), Z_Construct_UClass_UVoxelMaterialCollectionBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaterialCollection_MetaData), NewProp_MaterialCollection_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVoxelGraphPreviewSettings_Statics::NewProp_PlaceableItemManager = { "PlaceableItemManager", nullptr, (EPropertyFlags)0x0116000000080009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelGraphPreviewSettings, PlaceableItemManager), Z_Construct_UClass_UVoxelPlaceableItemManager_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlaceableItemManager_MetaData), NewProp_PlaceableItemManager_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVoxelGraphPreviewSettings_Statics::NewProp_VoxelSize = { "VoxelSize", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelGraphPreviewSettings, VoxelSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VoxelSize_MetaData), NewProp_VoxelSize_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UVoxelGraphPreviewSettings_Statics::NewProp_RenderType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UVoxelGraphPreviewSettings_Statics::NewProp_RenderType = { "RenderType", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelGraphPreviewSettings, RenderType), Z_Construct_UEnum_Voxel_EVoxelRenderType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RenderType_MetaData), NewProp_RenderType_MetaData) }; // 1529021437
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UVoxelGraphPreviewSettings_Statics::NewProp_PreviewType2D_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UVoxelGraphPreviewSettings_Statics::NewProp_PreviewType2D = { "PreviewType2D", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelGraphPreviewSettings, PreviewType2D), Z_Construct_UEnum_VoxelGraph_EVoxelGraphPreviewType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PreviewType2D_MetaData), NewProp_PreviewType2D_MetaData) }; // 455332222
void Z_Construct_UClass_UVoxelGraphPreviewSettings_Statics::NewProp_bDrawColoredDistanceField_SetBit(void* Obj)
{
	((UVoxelGraphPreviewSettings*)Obj)->bDrawColoredDistanceField = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVoxelGraphPreviewSettings_Statics::NewProp_bDrawColoredDistanceField = { "bDrawColoredDistanceField", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UVoxelGraphPreviewSettings), &Z_Construct_UClass_UVoxelGraphPreviewSettings_Statics::NewProp_bDrawColoredDistanceField_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDrawColoredDistanceField_MetaData), NewProp_bDrawColoredDistanceField_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UVoxelGraphPreviewSettings_Statics::NewProp_MaterialPreviewType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UVoxelGraphPreviewSettings_Statics::NewProp_MaterialPreviewType = { "MaterialPreviewType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelGraphPreviewSettings, MaterialPreviewType), Z_Construct_UEnum_VoxelGraph_EVoxelGraphMaterialPreviewType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaterialPreviewType_MetaData), NewProp_MaterialPreviewType_MetaData) }; // 2486738390
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UVoxelGraphPreviewSettings_Statics::NewProp_MultiIndexToPreview = { "MultiIndexToPreview", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelGraphPreviewSettings, MultiIndexToPreview), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MultiIndexToPreview_MetaData), NewProp_MultiIndexToPreview_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVoxelGraphPreviewSettings_Statics::NewProp_IndexColors_Inner = { "IndexColors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UVoxelGraphPreviewSettings_Statics::NewProp_IndexColors = { "IndexColors", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelGraphPreviewSettings, IndexColors), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IndexColors_MetaData), NewProp_IndexColors_MetaData) };
void Z_Construct_UClass_UVoxelGraphPreviewSettings_Statics::NewProp_bHybridMaterialRendering_SetBit(void* Obj)
{
	((UVoxelGraphPreviewSettings*)Obj)->bHybridMaterialRendering = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVoxelGraphPreviewSettings_Statics::NewProp_bHybridMaterialRendering = { "bHybridMaterialRendering", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UVoxelGraphPreviewSettings), &Z_Construct_UClass_UVoxelGraphPreviewSettings_Statics::NewProp_bHybridMaterialRendering_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHybridMaterialRendering_MetaData), NewProp_bHybridMaterialRendering_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVoxelGraphPreviewSettings_Statics::NewProp_CostPercentile = { "CostPercentile", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelGraphPreviewSettings, CostPercentile), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CostPercentile_MetaData), NewProp_CostPercentile_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UVoxelGraphPreviewSettings_Statics::NewProp_NumRangeAnalysisChunksPerAxis = { "NumRangeAnalysisChunksPerAxis", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelGraphPreviewSettings, NumRangeAnalysisChunksPerAxis), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumRangeAnalysisChunksPerAxis_MetaData), NewProp_NumRangeAnalysisChunksPerAxis_MetaData) };
void Z_Construct_UClass_UVoxelGraphPreviewSettings_Statics::NewProp_bHeightmapMode_SetBit(void* Obj)
{
	((UVoxelGraphPreviewSettings*)Obj)->bHeightmapMode = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVoxelGraphPreviewSettings_Statics::NewProp_bHeightmapMode = { "bHeightmapMode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UVoxelGraphPreviewSettings), &Z_Construct_UClass_UVoxelGraphPreviewSettings_Statics::NewProp_bHeightmapMode_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHeightmapMode_MetaData), NewProp_bHeightmapMode_MetaData) };
void Z_Construct_UClass_UVoxelGraphPreviewSettings_Statics::NewProp_bHeightBasedColor_SetBit(void* Obj)
{
	((UVoxelGraphPreviewSettings*)Obj)->bHeightBasedColor = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVoxelGraphPreviewSettings_Statics::NewProp_bHeightBasedColor = { "bHeightBasedColor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UVoxelGraphPreviewSettings), &Z_Construct_UClass_UVoxelGraphPreviewSettings_Statics::NewProp_bHeightBasedColor_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHeightBasedColor_MetaData), NewProp_bHeightBasedColor_MetaData) };
void Z_Construct_UClass_UVoxelGraphPreviewSettings_Statics::NewProp_bEnableWater_SetBit(void* Obj)
{
	((UVoxelGraphPreviewSettings*)Obj)->bEnableWater = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVoxelGraphPreviewSettings_Statics::NewProp_bEnableWater = { "bEnableWater", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UVoxelGraphPreviewSettings), &Z_Construct_UClass_UVoxelGraphPreviewSettings_Statics::NewProp_bEnableWater_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableWater_MetaData), NewProp_bEnableWater_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVoxelGraphPreviewSettings_Statics::NewProp_Height = { "Height", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelGraphPreviewSettings, Height), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Height_MetaData), NewProp_Height_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVoxelGraphPreviewSettings_Statics::NewProp_LightDirection = { "LightDirection", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelGraphPreviewSettings, LightDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LightDirection_MetaData), NewProp_LightDirection_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVoxelGraphPreviewSettings_Statics::NewProp_StartBias = { "StartBias", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelGraphPreviewSettings, StartBias), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartBias_MetaData), NewProp_StartBias_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UVoxelGraphPreviewSettings_Statics::NewProp_MaxSteps = { "MaxSteps", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelGraphPreviewSettings, MaxSteps), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxSteps_MetaData), NewProp_MaxSteps_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVoxelGraphPreviewSettings_Statics::NewProp_Brightness = { "Brightness", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelGraphPreviewSettings, Brightness), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Brightness_MetaData), NewProp_Brightness_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVoxelGraphPreviewSettings_Statics::NewProp_ShadowDensity = { "ShadowDensity", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelGraphPreviewSettings, ShadowDensity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShadowDensity_MetaData), NewProp_ShadowDensity_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVoxelGraphPreviewSettings_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelGraphPreviewSettings, Mesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mesh_MetaData), NewProp_Mesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVoxelGraphPreviewSettings_Statics::NewProp_HeightmapMaterial = { "HeightmapMaterial", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelGraphPreviewSettings, HeightmapMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HeightmapMaterial_MetaData), NewProp_HeightmapMaterial_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVoxelGraphPreviewSettings_Statics::NewProp_SliceMaterial = { "SliceMaterial", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelGraphPreviewSettings, SliceMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SliceMaterial_MetaData), NewProp_SliceMaterial_MetaData) };
void Z_Construct_UClass_UVoxelGraphPreviewSettings_Statics::NewProp_bAutoNormalize_SetBit(void* Obj)
{
	((UVoxelGraphPreviewSettings*)Obj)->bAutoNormalize = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVoxelGraphPreviewSettings_Statics::NewProp_bAutoNormalize = { "bAutoNormalize", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UVoxelGraphPreviewSettings), &Z_Construct_UClass_UVoxelGraphPreviewSettings_Statics::NewProp_bAutoNormalize_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAutoNormalize_MetaData), NewProp_bAutoNormalize_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVoxelGraphPreviewSettings_Statics::NewProp_NormalizeMinValue = { "NormalizeMinValue", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelGraphPreviewSettings, NormalizeMinValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NormalizeMinValue_MetaData), NewProp_NormalizeMinValue_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVoxelGraphPreviewSettings_Statics::NewProp_NormalizeMaxValue = { "NormalizeMaxValue", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelGraphPreviewSettings, NormalizeMaxValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NormalizeMaxValue_MetaData), NewProp_NormalizeMaxValue_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UVoxelGraphPreviewSettings_Statics::NewProp_LODToPreview = { "LODToPreview", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelGraphPreviewSettings, LODToPreview), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LODToPreview_MetaData), NewProp_LODToPreview_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVoxelGraphPreviewSettings_Statics::NewProp_Graph = { "Graph", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelGraphPreviewSettings, Graph), Z_Construct_UClass_UVoxelGraphGenerator_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Graph_MetaData), NewProp_Graph_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelGraphPreviewSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelGraphPreviewSettings_Statics::NewProp_bShowStats,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelGraphPreviewSettings_Statics::NewProp_bShowValues,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelGraphPreviewSettings_Statics::NewProp_MinValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelGraphPreviewSettings_Statics::NewProp_MaxValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelGraphPreviewSettings_Statics::NewProp_PreviewedBounds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelGraphPreviewSettings_Statics::NewProp_LeftToRight_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelGraphPreviewSettings_Statics::NewProp_LeftToRight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelGraphPreviewSettings_Statics::NewProp_BottomToTop_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelGraphPreviewSettings_Statics::NewProp_BottomToTop,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelGraphPreviewSettings_Statics::NewProp_Resolution,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelGraphPreviewSettings_Statics::NewProp_ResolutionMultiplierLog,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelGraphPreviewSettings_Statics::NewProp_Center,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelGraphPreviewSettings_Statics::NewProp_PreviewedVoxel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelGraphPreviewSettings_Statics::NewProp_ShowValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelGraphPreviewSettings_Statics::NewProp_ShowValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelGraphPreviewSettings_Statics::NewProp_MaterialConfig_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelGraphPreviewSettings_Statics::NewProp_MaterialConfig,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelGraphPreviewSettings_Statics::NewProp_MaterialCollection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelGraphPreviewSettings_Statics::NewProp_PlaceableItemManager,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelGraphPreviewSettings_Statics::NewProp_VoxelSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelGraphPreviewSettings_Statics::NewProp_RenderType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelGraphPreviewSettings_Statics::NewProp_RenderType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelGraphPreviewSettings_Statics::NewProp_PreviewType2D_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelGraphPreviewSettings_Statics::NewProp_PreviewType2D,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelGraphPreviewSettings_Statics::NewProp_bDrawColoredDistanceField,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelGraphPreviewSettings_Statics::NewProp_MaterialPreviewType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelGraphPreviewSettings_Statics::NewProp_MaterialPreviewType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelGraphPreviewSettings_Statics::NewProp_MultiIndexToPreview,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelGraphPreviewSettings_Statics::NewProp_IndexColors_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelGraphPreviewSettings_Statics::NewProp_IndexColors,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelGraphPreviewSettings_Statics::NewProp_bHybridMaterialRendering,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelGraphPreviewSettings_Statics::NewProp_CostPercentile,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelGraphPreviewSettings_Statics::NewProp_NumRangeAnalysisChunksPerAxis,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelGraphPreviewSettings_Statics::NewProp_bHeightmapMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelGraphPreviewSettings_Statics::NewProp_bHeightBasedColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelGraphPreviewSettings_Statics::NewProp_bEnableWater,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelGraphPreviewSettings_Statics::NewProp_Height,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelGraphPreviewSettings_Statics::NewProp_LightDirection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelGraphPreviewSettings_Statics::NewProp_StartBias,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelGraphPreviewSettings_Statics::NewProp_MaxSteps,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelGraphPreviewSettings_Statics::NewProp_Brightness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelGraphPreviewSettings_Statics::NewProp_ShadowDensity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelGraphPreviewSettings_Statics::NewProp_Mesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelGraphPreviewSettings_Statics::NewProp_HeightmapMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelGraphPreviewSettings_Statics::NewProp_SliceMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelGraphPreviewSettings_Statics::NewProp_bAutoNormalize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelGraphPreviewSettings_Statics::NewProp_NormalizeMinValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelGraphPreviewSettings_Statics::NewProp_NormalizeMaxValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelGraphPreviewSettings_Statics::NewProp_LODToPreview,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelGraphPreviewSettings_Statics::NewProp_Graph,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelGraphPreviewSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UVoxelGraphPreviewSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelGraphPreviewSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelGraphPreviewSettings_Statics::ClassParams = {
	&UVoxelGraphPreviewSettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UVoxelGraphPreviewSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelGraphPreviewSettings_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelGraphPreviewSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UVoxelGraphPreviewSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVoxelGraphPreviewSettings()
{
	if (!Z_Registration_Info_UClass_UVoxelGraphPreviewSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelGraphPreviewSettings.OuterSingleton, Z_Construct_UClass_UVoxelGraphPreviewSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVoxelGraphPreviewSettings.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelGraphPreviewSettings);
UVoxelGraphPreviewSettings::~UVoxelGraphPreviewSettings() {}
// ********** End Class UVoxelGraphPreviewSettings *************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_VoxelGraph_Public_VoxelGraphPreviewSettings_h__Script_VoxelGraph_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EVoxelGraphPreviewAxes_StaticEnum, TEXT("EVoxelGraphPreviewAxes"), &Z_Registration_Info_UEnum_EVoxelGraphPreviewAxes, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4155492522U) },
		{ EVoxelGraphPreviewType_StaticEnum, TEXT("EVoxelGraphPreviewType"), &Z_Registration_Info_UEnum_EVoxelGraphPreviewType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 455332222U) },
		{ EVoxelGraphPreviewShowValue_StaticEnum, TEXT("EVoxelGraphPreviewShowValue"), &Z_Registration_Info_UEnum_EVoxelGraphPreviewShowValue, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 323946903U) },
		{ EVoxelGraphMaterialPreviewType_StaticEnum, TEXT("EVoxelGraphMaterialPreviewType"), &Z_Registration_Info_UEnum_EVoxelGraphMaterialPreviewType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2486738390U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UVoxelGraphPreviewSettings, UVoxelGraphPreviewSettings::StaticClass, TEXT("UVoxelGraphPreviewSettings"), &Z_Registration_Info_UClass_UVoxelGraphPreviewSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelGraphPreviewSettings), 16826233U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_VoxelGraph_Public_VoxelGraphPreviewSettings_h__Script_VoxelGraph_823489691(TEXT("/Script/VoxelGraph"),
	Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_VoxelGraph_Public_VoxelGraphPreviewSettings_h__Script_VoxelGraph_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_VoxelGraph_Public_VoxelGraphPreviewSettings_h__Script_VoxelGraph_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_VoxelGraph_Public_VoxelGraphPreviewSettings_h__Script_VoxelGraph_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_VoxelGraph_Public_VoxelGraphPreviewSettings_h__Script_VoxelGraph_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
