// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Voxel/Public/VoxelTools/Tools/VoxelSurfaceTool.h"
#include "Voxel/Public/VoxelGenerators/VoxelGeneratorPicker.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeVoxelSurfaceTool() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
UPackage* Z_Construct_UPackage__Script_Voxel();
VOXEL_API UClass* Z_Construct_UClass_UVoxelSurfaceTool();
VOXEL_API UClass* Z_Construct_UClass_UVoxelSurfaceTool_NoRegister();
VOXEL_API UClass* Z_Construct_UClass_UVoxelToolBase();
VOXEL_API UEnum* Z_Construct_UEnum_Voxel_EVoxelFalloff();
VOXEL_API UEnum* Z_Construct_UEnum_Voxel_EVoxelRGBA();
VOXEL_API UEnum* Z_Construct_UEnum_Voxel_EVoxelSurfaceToolMaskType();
VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelGeneratorPicker();
VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelSurfaceToolMask();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EVoxelSurfaceToolMaskType *************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EVoxelSurfaceToolMaskType;
static UEnum* EVoxelSurfaceToolMaskType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EVoxelSurfaceToolMaskType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EVoxelSurfaceToolMaskType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Voxel_EVoxelSurfaceToolMaskType, (UObject*)Z_Construct_UPackage__Script_Voxel(), TEXT("EVoxelSurfaceToolMaskType"));
	}
	return Z_Registration_Info_UEnum_EVoxelSurfaceToolMaskType.OuterSingleton;
}
template<> VOXEL_API UEnum* StaticEnum<EVoxelSurfaceToolMaskType>()
{
	return EVoxelSurfaceToolMaskType_StaticEnum();
}
struct Z_Construct_UEnum_Voxel_EVoxelSurfaceToolMaskType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Generator.Name", "EVoxelSurfaceToolMaskType::Generator" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelSurfaceTool.h" },
		{ "Texture.Name", "EVoxelSurfaceToolMaskType::Texture" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EVoxelSurfaceToolMaskType::Texture", (int64)EVoxelSurfaceToolMaskType::Texture },
		{ "EVoxelSurfaceToolMaskType::Generator", (int64)EVoxelSurfaceToolMaskType::Generator },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Voxel_EVoxelSurfaceToolMaskType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Voxel,
	nullptr,
	"EVoxelSurfaceToolMaskType",
	"EVoxelSurfaceToolMaskType",
	Z_Construct_UEnum_Voxel_EVoxelSurfaceToolMaskType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Voxel_EVoxelSurfaceToolMaskType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Voxel_EVoxelSurfaceToolMaskType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Voxel_EVoxelSurfaceToolMaskType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Voxel_EVoxelSurfaceToolMaskType()
{
	if (!Z_Registration_Info_UEnum_EVoxelSurfaceToolMaskType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EVoxelSurfaceToolMaskType.InnerSingleton, Z_Construct_UEnum_Voxel_EVoxelSurfaceToolMaskType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EVoxelSurfaceToolMaskType.InnerSingleton;
}
// ********** End Enum EVoxelSurfaceToolMaskType ***************************************************

// ********** Begin ScriptStruct FVoxelSurfaceToolMask *********************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FVoxelSurfaceToolMask;
class UScriptStruct* FVoxelSurfaceToolMask::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FVoxelSurfaceToolMask.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FVoxelSurfaceToolMask.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVoxelSurfaceToolMask, (UObject*)Z_Construct_UPackage__Script_Voxel(), TEXT("VoxelSurfaceToolMask"));
	}
	return Z_Registration_Info_UScriptStruct_FVoxelSurfaceToolMask.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FVoxelSurfaceToolMask_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelSurfaceTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[] = {
		{ "Category", "Mask" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelSurfaceTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Texture_MetaData[] = {
		{ "Category", "Mask|Texture" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelSurfaceTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Channel_MetaData[] = {
		{ "Category", "Mask|Texture" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelSurfaceTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Generator_MetaData[] = {
		{ "Category", "Mask|Generator" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelSurfaceTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SeedsToRandomize_MetaData[] = {
		{ "Category", "Mask|Generator" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelSurfaceTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bScaleWithBrushSize_MetaData[] = {
		{ "Category", "Mask|Generator" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelSurfaceTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GeneratorDebugTexture_MetaData[] = {
		{ "Category", "Mask|Generator" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelSurfaceTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Scale_MetaData[] = {
		{ "Category", "Mask" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelSurfaceTool.h" },
		{ "UIMax", "10" },
		{ "UIMin", "0.010000" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Ratio_MetaData[] = {
		{ "Category", "Mask" },
		{ "Comment", "// ScaleY/ScaleX. MaskScale = ScaleX\n" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelSurfaceTool.h" },
		{ "ToolTip", "ScaleY/ScaleX. MaskScale = ScaleX" },
		{ "UIMax", "10" },
		{ "UIMin", "0" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Texture;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Channel_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Channel;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Generator;
	static const UECodeGen_Private::FNamePropertyParams NewProp_SeedsToRandomize_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SeedsToRandomize;
	static void NewProp_bScaleWithBrushSize_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bScaleWithBrushSize;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GeneratorDebugTexture;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Scale;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Ratio;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVoxelSurfaceToolMask>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FVoxelSurfaceToolMask_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FVoxelSurfaceToolMask_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVoxelSurfaceToolMask, Type), Z_Construct_UEnum_Voxel_EVoxelSurfaceToolMaskType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Type_MetaData), NewProp_Type_MetaData) }; // 1843276572
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FVoxelSurfaceToolMask_Statics::NewProp_Texture = { "Texture", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVoxelSurfaceToolMask, Texture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Texture_MetaData), NewProp_Texture_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FVoxelSurfaceToolMask_Statics::NewProp_Channel_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FVoxelSurfaceToolMask_Statics::NewProp_Channel = { "Channel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVoxelSurfaceToolMask, Channel), Z_Construct_UEnum_Voxel_EVoxelRGBA, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Channel_MetaData), NewProp_Channel_MetaData) }; // 2902135298
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVoxelSurfaceToolMask_Statics::NewProp_Generator = { "Generator", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVoxelSurfaceToolMask, Generator), Z_Construct_UScriptStruct_FVoxelGeneratorPicker, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Generator_MetaData), NewProp_Generator_MetaData) }; // 3276742823
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FVoxelSurfaceToolMask_Statics::NewProp_SeedsToRandomize_Inner = { "SeedsToRandomize", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FVoxelSurfaceToolMask_Statics::NewProp_SeedsToRandomize = { "SeedsToRandomize", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVoxelSurfaceToolMask, SeedsToRandomize), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SeedsToRandomize_MetaData), NewProp_SeedsToRandomize_MetaData) };
void Z_Construct_UScriptStruct_FVoxelSurfaceToolMask_Statics::NewProp_bScaleWithBrushSize_SetBit(void* Obj)
{
	((FVoxelSurfaceToolMask*)Obj)->bScaleWithBrushSize = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVoxelSurfaceToolMask_Statics::NewProp_bScaleWithBrushSize = { "bScaleWithBrushSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FVoxelSurfaceToolMask), &Z_Construct_UScriptStruct_FVoxelSurfaceToolMask_Statics::NewProp_bScaleWithBrushSize_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bScaleWithBrushSize_MetaData), NewProp_bScaleWithBrushSize_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FVoxelSurfaceToolMask_Statics::NewProp_GeneratorDebugTexture = { "GeneratorDebugTexture", nullptr, (EPropertyFlags)0x0114040000022015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVoxelSurfaceToolMask, GeneratorDebugTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GeneratorDebugTexture_MetaData), NewProp_GeneratorDebugTexture_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVoxelSurfaceToolMask_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVoxelSurfaceToolMask, Scale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Scale_MetaData), NewProp_Scale_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVoxelSurfaceToolMask_Statics::NewProp_Ratio = { "Ratio", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVoxelSurfaceToolMask, Ratio), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Ratio_MetaData), NewProp_Ratio_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVoxelSurfaceToolMask_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelSurfaceToolMask_Statics::NewProp_Type_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelSurfaceToolMask_Statics::NewProp_Type,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelSurfaceToolMask_Statics::NewProp_Texture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelSurfaceToolMask_Statics::NewProp_Channel_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelSurfaceToolMask_Statics::NewProp_Channel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelSurfaceToolMask_Statics::NewProp_Generator,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelSurfaceToolMask_Statics::NewProp_SeedsToRandomize_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelSurfaceToolMask_Statics::NewProp_SeedsToRandomize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelSurfaceToolMask_Statics::NewProp_bScaleWithBrushSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelSurfaceToolMask_Statics::NewProp_GeneratorDebugTexture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelSurfaceToolMask_Statics::NewProp_Scale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelSurfaceToolMask_Statics::NewProp_Ratio,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelSurfaceToolMask_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVoxelSurfaceToolMask_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
	nullptr,
	&NewStructOps,
	"VoxelSurfaceToolMask",
	Z_Construct_UScriptStruct_FVoxelSurfaceToolMask_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelSurfaceToolMask_Statics::PropPointers),
	sizeof(FVoxelSurfaceToolMask),
	alignof(FVoxelSurfaceToolMask),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelSurfaceToolMask_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVoxelSurfaceToolMask_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FVoxelSurfaceToolMask()
{
	if (!Z_Registration_Info_UScriptStruct_FVoxelSurfaceToolMask.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FVoxelSurfaceToolMask.InnerSingleton, Z_Construct_UScriptStruct_FVoxelSurfaceToolMask_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FVoxelSurfaceToolMask.InnerSingleton;
}
// ********** End ScriptStruct FVoxelSurfaceToolMask ***********************************************

// ********** Begin Class UVoxelSurfaceTool ********************************************************
void UVoxelSurfaceTool::StaticRegisterNativesUVoxelSurfaceTool()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UVoxelSurfaceTool;
UClass* UVoxelSurfaceTool::GetPrivateStaticClass()
{
	using TClass = UVoxelSurfaceTool;
	if (!Z_Registration_Info_UClass_UVoxelSurfaceTool.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("VoxelSurfaceTool"),
			Z_Registration_Info_UClass_UVoxelSurfaceTool.InnerSingleton,
			StaticRegisterNativesUVoxelSurfaceTool,
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
	return Z_Registration_Info_UClass_UVoxelSurfaceTool.InnerSingleton;
}
UClass* Z_Construct_UClass_UVoxelSurfaceTool_NoRegister()
{
	return UVoxelSurfaceTool::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UVoxelSurfaceTool_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "VoxelTools/Tools/VoxelSurfaceTool.h" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelSurfaceTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ToolMaterial_MetaData[] = {
		{ "Category", "Tool Preview Settings" },
		{ "HideInPanel", "" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelSurfaceTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSculpt_MetaData[] = {
		{ "Category", "Sculpt Settings" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelSurfaceTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SculptStrength_MetaData[] = {
		{ "Category", "Sculpt Settings" },
		{ "Comment", "// Relative to brush size\n" },
		{ "EditCondition", "bSculpt" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelSurfaceTool.h" },
		{ "ToolTip", "Relative to brush size" },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPropagateMaterials_MetaData[] = {
		{ "Category", "Sculpt Settings" },
		{ "Comment", "// If true, will propagate materials so that the surface stays correctly painted.\n// Disabled in 2D mode or if Paint is enabled\n" },
		{ "EditCondition", "!bPaint && !b2DBrush" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelSurfaceTool.h" },
		{ "ToolTip", "If true, will propagate materials so that the surface stays correctly painted.\nDisabled in 2D mode or if Paint is enabled" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPaint_MetaData[] = {
		{ "Category", "Paint Settings" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelSurfaceTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PaintStrength_MetaData[] = {
		{ "Category", "Paint Settings" },
		{ "EditCondition", "bPaint" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelSurfaceTool.h" },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_b2DBrush_MetaData[] = {
		{ "Category", "Tool Settings" },
		{ "Comment", "// Will only affect the topmost voxels\n" },
		{ "DisplayName", "2D Brush" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelSurfaceTool.h" },
		{ "ToolTip", "Will only affect the topmost voxels" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bMovementAffectsStrength_MetaData[] = {
		{ "Category", "Tool Settings" },
		{ "Comment", "// If true, sculpt/paint strength will be modulated by the distance the mouse travels\n" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelSurfaceTool.h" },
		{ "ToolTip", "If true, sculpt/paint strength will be modulated by the distance the mouse travels" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Stride_MetaData[] = {
		{ "Category", "Tool Settings" },
		{ "Comment", "// Relative to the radius\n" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelSurfaceTool.h" },
		{ "ToolTip", "Relative to the radius" },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAlignToMovement_MetaData[] = {
		{ "Category", "Tool Settings" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelSurfaceTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FixedDirection_MetaData[] = {
		{ "Category", "Tool Settings" },
		{ "Comment", "// If false, align the tool to the mouse movement\n" },
		{ "EditCondition", "!bAlignToMovement" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelSurfaceTool.h" },
		{ "ToolTip", "If false, align the tool to the mouse movement" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bModulateStrengthByDeltaTime_MetaData[] = {
		{ "Category", "Tool Settings" },
		{ "Comment", "// If true, strength will be modulated by the time since the last edit so that the results don't depend on the framerate\n// Automatically turned off if Stride > 0, or if paint strength = 1\n" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelSurfaceTool.h" },
		{ "ToolTip", "If true, strength will be modulated by the time since the last edit so that the results don't depend on the framerate\nAutomatically turned off if Stride > 0, or if paint strength = 1" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableFalloff_MetaData[] = {
		{ "Category", "Falloff" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelSurfaceTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FalloffType_MetaData[] = {
		{ "Category", "Falloff" },
		{ "EditCondition", "bEnableFalloff" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelSurfaceTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Falloff_MetaData[] = {
		{ "Category", "Falloff" },
		{ "EditCondition", "bEnableFalloff" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelSurfaceTool.h" },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseMask_MetaData[] = {
		{ "Category", "Mask" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelSurfaceTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mask_MetaData[] = {
		{ "Category", "Mask" },
		{ "EditCondition", "bUseMask" },
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelSurfaceTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaskGeneratorCache_RenderTexture_MetaData[] = {
		{ "ModuleRelativePath", "Public/VoxelTools/Tools/VoxelSurfaceTool.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ToolMaterial;
	static void NewProp_bSculpt_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSculpt;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SculptStrength;
	static void NewProp_bPropagateMaterials_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPropagateMaterials;
	static void NewProp_bPaint_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPaint;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PaintStrength;
	static void NewProp_b2DBrush_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_b2DBrush;
	static void NewProp_bMovementAffectsStrength_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bMovementAffectsStrength;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Stride;
	static void NewProp_bAlignToMovement_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAlignToMovement;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FixedDirection;
	static void NewProp_bModulateStrengthByDeltaTime_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bModulateStrengthByDeltaTime;
	static void NewProp_bEnableFalloff_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableFalloff;
	static const UECodeGen_Private::FBytePropertyParams NewProp_FalloffType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_FalloffType;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Falloff;
	static void NewProp_bUseMask_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseMask;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Mask;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MaskGeneratorCache_RenderTexture;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelSurfaceTool>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVoxelSurfaceTool_Statics::NewProp_ToolMaterial = { "ToolMaterial", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelSurfaceTool, ToolMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ToolMaterial_MetaData), NewProp_ToolMaterial_MetaData) };
void Z_Construct_UClass_UVoxelSurfaceTool_Statics::NewProp_bSculpt_SetBit(void* Obj)
{
	((UVoxelSurfaceTool*)Obj)->bSculpt = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVoxelSurfaceTool_Statics::NewProp_bSculpt = { "bSculpt", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UVoxelSurfaceTool), &Z_Construct_UClass_UVoxelSurfaceTool_Statics::NewProp_bSculpt_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSculpt_MetaData), NewProp_bSculpt_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVoxelSurfaceTool_Statics::NewProp_SculptStrength = { "SculptStrength", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelSurfaceTool, SculptStrength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SculptStrength_MetaData), NewProp_SculptStrength_MetaData) };
void Z_Construct_UClass_UVoxelSurfaceTool_Statics::NewProp_bPropagateMaterials_SetBit(void* Obj)
{
	((UVoxelSurfaceTool*)Obj)->bPropagateMaterials = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVoxelSurfaceTool_Statics::NewProp_bPropagateMaterials = { "bPropagateMaterials", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UVoxelSurfaceTool), &Z_Construct_UClass_UVoxelSurfaceTool_Statics::NewProp_bPropagateMaterials_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPropagateMaterials_MetaData), NewProp_bPropagateMaterials_MetaData) };
void Z_Construct_UClass_UVoxelSurfaceTool_Statics::NewProp_bPaint_SetBit(void* Obj)
{
	((UVoxelSurfaceTool*)Obj)->bPaint = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVoxelSurfaceTool_Statics::NewProp_bPaint = { "bPaint", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UVoxelSurfaceTool), &Z_Construct_UClass_UVoxelSurfaceTool_Statics::NewProp_bPaint_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPaint_MetaData), NewProp_bPaint_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVoxelSurfaceTool_Statics::NewProp_PaintStrength = { "PaintStrength", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelSurfaceTool, PaintStrength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PaintStrength_MetaData), NewProp_PaintStrength_MetaData) };
void Z_Construct_UClass_UVoxelSurfaceTool_Statics::NewProp_b2DBrush_SetBit(void* Obj)
{
	((UVoxelSurfaceTool*)Obj)->b2DBrush = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVoxelSurfaceTool_Statics::NewProp_b2DBrush = { "b2DBrush", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UVoxelSurfaceTool), &Z_Construct_UClass_UVoxelSurfaceTool_Statics::NewProp_b2DBrush_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_b2DBrush_MetaData), NewProp_b2DBrush_MetaData) };
void Z_Construct_UClass_UVoxelSurfaceTool_Statics::NewProp_bMovementAffectsStrength_SetBit(void* Obj)
{
	((UVoxelSurfaceTool*)Obj)->bMovementAffectsStrength = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVoxelSurfaceTool_Statics::NewProp_bMovementAffectsStrength = { "bMovementAffectsStrength", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UVoxelSurfaceTool), &Z_Construct_UClass_UVoxelSurfaceTool_Statics::NewProp_bMovementAffectsStrength_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bMovementAffectsStrength_MetaData), NewProp_bMovementAffectsStrength_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVoxelSurfaceTool_Statics::NewProp_Stride = { "Stride", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelSurfaceTool, Stride), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Stride_MetaData), NewProp_Stride_MetaData) };
void Z_Construct_UClass_UVoxelSurfaceTool_Statics::NewProp_bAlignToMovement_SetBit(void* Obj)
{
	((UVoxelSurfaceTool*)Obj)->bAlignToMovement = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVoxelSurfaceTool_Statics::NewProp_bAlignToMovement = { "bAlignToMovement", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UVoxelSurfaceTool), &Z_Construct_UClass_UVoxelSurfaceTool_Statics::NewProp_bAlignToMovement_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAlignToMovement_MetaData), NewProp_bAlignToMovement_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVoxelSurfaceTool_Statics::NewProp_FixedDirection = { "FixedDirection", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelSurfaceTool, FixedDirection), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FixedDirection_MetaData), NewProp_FixedDirection_MetaData) };
void Z_Construct_UClass_UVoxelSurfaceTool_Statics::NewProp_bModulateStrengthByDeltaTime_SetBit(void* Obj)
{
	((UVoxelSurfaceTool*)Obj)->bModulateStrengthByDeltaTime = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVoxelSurfaceTool_Statics::NewProp_bModulateStrengthByDeltaTime = { "bModulateStrengthByDeltaTime", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UVoxelSurfaceTool), &Z_Construct_UClass_UVoxelSurfaceTool_Statics::NewProp_bModulateStrengthByDeltaTime_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bModulateStrengthByDeltaTime_MetaData), NewProp_bModulateStrengthByDeltaTime_MetaData) };
void Z_Construct_UClass_UVoxelSurfaceTool_Statics::NewProp_bEnableFalloff_SetBit(void* Obj)
{
	((UVoxelSurfaceTool*)Obj)->bEnableFalloff = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVoxelSurfaceTool_Statics::NewProp_bEnableFalloff = { "bEnableFalloff", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UVoxelSurfaceTool), &Z_Construct_UClass_UVoxelSurfaceTool_Statics::NewProp_bEnableFalloff_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableFalloff_MetaData), NewProp_bEnableFalloff_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UVoxelSurfaceTool_Statics::NewProp_FalloffType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UVoxelSurfaceTool_Statics::NewProp_FalloffType = { "FalloffType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelSurfaceTool, FalloffType), Z_Construct_UEnum_Voxel_EVoxelFalloff, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FalloffType_MetaData), NewProp_FalloffType_MetaData) }; // 103099151
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVoxelSurfaceTool_Statics::NewProp_Falloff = { "Falloff", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelSurfaceTool, Falloff), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Falloff_MetaData), NewProp_Falloff_MetaData) };
void Z_Construct_UClass_UVoxelSurfaceTool_Statics::NewProp_bUseMask_SetBit(void* Obj)
{
	((UVoxelSurfaceTool*)Obj)->bUseMask = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVoxelSurfaceTool_Statics::NewProp_bUseMask = { "bUseMask", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UVoxelSurfaceTool), &Z_Construct_UClass_UVoxelSurfaceTool_Statics::NewProp_bUseMask_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseMask_MetaData), NewProp_bUseMask_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVoxelSurfaceTool_Statics::NewProp_Mask = { "Mask", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelSurfaceTool, Mask), Z_Construct_UScriptStruct_FVoxelSurfaceToolMask, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mask_MetaData), NewProp_Mask_MetaData) }; // 439026265
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVoxelSurfaceTool_Statics::NewProp_MaskGeneratorCache_RenderTexture = { "MaskGeneratorCache_RenderTexture", nullptr, (EPropertyFlags)0x0144000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelSurfaceTool, MaskGeneratorCache_RenderTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaskGeneratorCache_RenderTexture_MetaData), NewProp_MaskGeneratorCache_RenderTexture_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelSurfaceTool_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelSurfaceTool_Statics::NewProp_ToolMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelSurfaceTool_Statics::NewProp_bSculpt,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelSurfaceTool_Statics::NewProp_SculptStrength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelSurfaceTool_Statics::NewProp_bPropagateMaterials,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelSurfaceTool_Statics::NewProp_bPaint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelSurfaceTool_Statics::NewProp_PaintStrength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelSurfaceTool_Statics::NewProp_b2DBrush,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelSurfaceTool_Statics::NewProp_bMovementAffectsStrength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelSurfaceTool_Statics::NewProp_Stride,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelSurfaceTool_Statics::NewProp_bAlignToMovement,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelSurfaceTool_Statics::NewProp_FixedDirection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelSurfaceTool_Statics::NewProp_bModulateStrengthByDeltaTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelSurfaceTool_Statics::NewProp_bEnableFalloff,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelSurfaceTool_Statics::NewProp_FalloffType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelSurfaceTool_Statics::NewProp_FalloffType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelSurfaceTool_Statics::NewProp_Falloff,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelSurfaceTool_Statics::NewProp_bUseMask,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelSurfaceTool_Statics::NewProp_Mask,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelSurfaceTool_Statics::NewProp_MaskGeneratorCache_RenderTexture,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelSurfaceTool_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UVoxelSurfaceTool_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UVoxelToolBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelSurfaceTool_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelSurfaceTool_Statics::ClassParams = {
	&UVoxelSurfaceTool::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UVoxelSurfaceTool_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelSurfaceTool_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelSurfaceTool_Statics::Class_MetaDataParams), Z_Construct_UClass_UVoxelSurfaceTool_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVoxelSurfaceTool()
{
	if (!Z_Registration_Info_UClass_UVoxelSurfaceTool.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelSurfaceTool.OuterSingleton, Z_Construct_UClass_UVoxelSurfaceTool_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVoxelSurfaceTool.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelSurfaceTool);
UVoxelSurfaceTool::~UVoxelSurfaceTool() {}
// ********** End Class UVoxelSurfaceTool **********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelTools_Tools_VoxelSurfaceTool_h__Script_Voxel_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EVoxelSurfaceToolMaskType_StaticEnum, TEXT("EVoxelSurfaceToolMaskType"), &Z_Registration_Info_UEnum_EVoxelSurfaceToolMaskType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1843276572U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FVoxelSurfaceToolMask::StaticStruct, Z_Construct_UScriptStruct_FVoxelSurfaceToolMask_Statics::NewStructOps, TEXT("VoxelSurfaceToolMask"), &Z_Registration_Info_UScriptStruct_FVoxelSurfaceToolMask, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVoxelSurfaceToolMask), 439026265U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UVoxelSurfaceTool, UVoxelSurfaceTool::StaticClass, TEXT("UVoxelSurfaceTool"), &Z_Registration_Info_UClass_UVoxelSurfaceTool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelSurfaceTool), 3454425843U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelTools_Tools_VoxelSurfaceTool_h__Script_Voxel_2947979061(TEXT("/Script/Voxel"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelTools_Tools_VoxelSurfaceTool_h__Script_Voxel_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelTools_Tools_VoxelSurfaceTool_h__Script_Voxel_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelTools_Tools_VoxelSurfaceTool_h__Script_Voxel_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelTools_Tools_VoxelSurfaceTool_h__Script_Voxel_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelTools_Tools_VoxelSurfaceTool_h__Script_Voxel_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelTools_Tools_VoxelSurfaceTool_h__Script_Voxel_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
