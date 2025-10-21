// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VoxelAssets/VoxelHeightmapAsset.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeVoxelHeightmapAsset() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFilePath();
ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
UPackage* Z_Construct_UPackage__Script_Voxel();
VOXEL_API UClass* Z_Construct_UClass_UVoxelHeightmapAsset();
VOXEL_API UClass* Z_Construct_UClass_UVoxelHeightmapAsset_NoRegister();
VOXEL_API UClass* Z_Construct_UClass_UVoxelHeightmapAssetFloat();
VOXEL_API UClass* Z_Construct_UClass_UVoxelHeightmapAssetFloat_NoRegister();
VOXEL_API UClass* Z_Construct_UClass_UVoxelHeightmapAssetUINT16();
VOXEL_API UClass* Z_Construct_UClass_UVoxelHeightmapAssetUINT16_NoRegister();
VOXEL_API UClass* Z_Construct_UClass_UVoxelTransformableGeneratorWithBounds();
VOXEL_API UEnum* Z_Construct_UEnum_Voxel_EVoxelHeightmapImporterMaterialConfig();
VOXEL_API UEnum* Z_Construct_UEnum_Voxel_EVoxelRGBA();
VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelHeightmapImporterWeightmapInfos();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EVoxelHeightmapImporterMaterialConfig *************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EVoxelHeightmapImporterMaterialConfig;
static UEnum* EVoxelHeightmapImporterMaterialConfig_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EVoxelHeightmapImporterMaterialConfig.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EVoxelHeightmapImporterMaterialConfig.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Voxel_EVoxelHeightmapImporterMaterialConfig, (UObject*)Z_Construct_UPackage__Script_Voxel(), TEXT("EVoxelHeightmapImporterMaterialConfig"));
	}
	return Z_Registration_Info_UEnum_EVoxelHeightmapImporterMaterialConfig.OuterSingleton;
}
template<> VOXEL_API UEnum* StaticEnum<EVoxelHeightmapImporterMaterialConfig>()
{
	return EVoxelHeightmapImporterMaterialConfig_StaticEnum();
}
struct Z_Construct_UEnum_Voxel_EVoxelHeightmapImporterMaterialConfig_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "FiveWayBlend.Name", "EVoxelHeightmapImporterMaterialConfig::FiveWayBlend" },
		{ "FourWayBlend.Name", "EVoxelHeightmapImporterMaterialConfig::FourWayBlend" },
		{ "ModuleRelativePath", "Public/VoxelAssets/VoxelHeightmapAsset.h" },
		{ "MultiIndex.Name", "EVoxelHeightmapImporterMaterialConfig::MultiIndex" },
		{ "RGB.Name", "EVoxelHeightmapImporterMaterialConfig::RGB" },
		{ "SingleIndex.Name", "EVoxelHeightmapImporterMaterialConfig::SingleIndex" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EVoxelHeightmapImporterMaterialConfig::RGB", (int64)EVoxelHeightmapImporterMaterialConfig::RGB },
		{ "EVoxelHeightmapImporterMaterialConfig::FourWayBlend", (int64)EVoxelHeightmapImporterMaterialConfig::FourWayBlend },
		{ "EVoxelHeightmapImporterMaterialConfig::FiveWayBlend", (int64)EVoxelHeightmapImporterMaterialConfig::FiveWayBlend },
		{ "EVoxelHeightmapImporterMaterialConfig::SingleIndex", (int64)EVoxelHeightmapImporterMaterialConfig::SingleIndex },
		{ "EVoxelHeightmapImporterMaterialConfig::MultiIndex", (int64)EVoxelHeightmapImporterMaterialConfig::MultiIndex },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Voxel_EVoxelHeightmapImporterMaterialConfig_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Voxel,
	nullptr,
	"EVoxelHeightmapImporterMaterialConfig",
	"EVoxelHeightmapImporterMaterialConfig",
	Z_Construct_UEnum_Voxel_EVoxelHeightmapImporterMaterialConfig_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Voxel_EVoxelHeightmapImporterMaterialConfig_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Voxel_EVoxelHeightmapImporterMaterialConfig_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Voxel_EVoxelHeightmapImporterMaterialConfig_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Voxel_EVoxelHeightmapImporterMaterialConfig()
{
	if (!Z_Registration_Info_UEnum_EVoxelHeightmapImporterMaterialConfig.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EVoxelHeightmapImporterMaterialConfig.InnerSingleton, Z_Construct_UEnum_Voxel_EVoxelHeightmapImporterMaterialConfig_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EVoxelHeightmapImporterMaterialConfig.InnerSingleton;
}
// ********** End Enum EVoxelHeightmapImporterMaterialConfig ***************************************

// ********** Begin Class UVoxelHeightmapAsset Function GetHeight **********************************
struct Z_Construct_UFunction_UVoxelHeightmapAsset_GetHeight_Statics
{
	struct VoxelHeightmapAsset_eventGetHeight_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Voxel|Heightmap Asset" },
		{ "ModuleRelativePath", "Public/VoxelAssets/VoxelHeightmapAsset.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVoxelHeightmapAsset_GetHeight_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelHeightmapAsset_eventGetHeight_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelHeightmapAsset_GetHeight_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelHeightmapAsset_GetHeight_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelHeightmapAsset_GetHeight_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelHeightmapAsset_GetHeight_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelHeightmapAsset, nullptr, "GetHeight", Z_Construct_UFunction_UVoxelHeightmapAsset_GetHeight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelHeightmapAsset_GetHeight_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVoxelHeightmapAsset_GetHeight_Statics::VoxelHeightmapAsset_eventGetHeight_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelHeightmapAsset_GetHeight_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelHeightmapAsset_GetHeight_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVoxelHeightmapAsset_GetHeight_Statics::VoxelHeightmapAsset_eventGetHeight_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVoxelHeightmapAsset_GetHeight()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelHeightmapAsset_GetHeight_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelHeightmapAsset::execGetHeight)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetHeight();
	P_NATIVE_END;
}
// ********** End Class UVoxelHeightmapAsset Function GetHeight ************************************

// ********** Begin Class UVoxelHeightmapAsset Function GetWidth ***********************************
struct Z_Construct_UFunction_UVoxelHeightmapAsset_GetWidth_Statics
{
	struct VoxelHeightmapAsset_eventGetWidth_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Voxel|Heightmap Asset" },
		{ "ModuleRelativePath", "Public/VoxelAssets/VoxelHeightmapAsset.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVoxelHeightmapAsset_GetWidth_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelHeightmapAsset_eventGetWidth_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelHeightmapAsset_GetWidth_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelHeightmapAsset_GetWidth_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelHeightmapAsset_GetWidth_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelHeightmapAsset_GetWidth_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelHeightmapAsset, nullptr, "GetWidth", Z_Construct_UFunction_UVoxelHeightmapAsset_GetWidth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelHeightmapAsset_GetWidth_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVoxelHeightmapAsset_GetWidth_Statics::VoxelHeightmapAsset_eventGetWidth_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelHeightmapAsset_GetWidth_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelHeightmapAsset_GetWidth_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVoxelHeightmapAsset_GetWidth_Statics::VoxelHeightmapAsset_eventGetWidth_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVoxelHeightmapAsset_GetWidth()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelHeightmapAsset_GetWidth_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelHeightmapAsset::execGetWidth)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetWidth();
	P_NATIVE_END;
}
// ********** End Class UVoxelHeightmapAsset Function GetWidth *************************************

// ********** Begin Class UVoxelHeightmapAsset *****************************************************
void UVoxelHeightmapAsset::StaticRegisterNativesUVoxelHeightmapAsset()
{
	UClass* Class = UVoxelHeightmapAsset::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetHeight", &UVoxelHeightmapAsset::execGetHeight },
		{ "GetWidth", &UVoxelHeightmapAsset::execGetWidth },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UVoxelHeightmapAsset;
UClass* UVoxelHeightmapAsset::GetPrivateStaticClass()
{
	using TClass = UVoxelHeightmapAsset;
	if (!Z_Registration_Info_UClass_UVoxelHeightmapAsset.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("VoxelHeightmapAsset"),
			Z_Registration_Info_UClass_UVoxelHeightmapAsset.InnerSingleton,
			StaticRegisterNativesUVoxelHeightmapAsset,
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
	return Z_Registration_Info_UClass_UVoxelHeightmapAsset.InnerSingleton;
}
UClass* Z_Construct_UClass_UVoxelHeightmapAsset_NoRegister()
{
	return UVoxelHeightmapAsset::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UVoxelHeightmapAsset_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Asset that holds 2D information.\n */" },
#endif
		{ "IncludePath", "VoxelAssets/VoxelHeightmapAsset.h" },
		{ "ModuleRelativePath", "Public/VoxelAssets/VoxelHeightmapAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Asset that holds 2D information." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Scale_MetaData[] = {
		{ "Category", "Heightmap Asset Settings" },
		{ "ClampMin", "0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// XY Scale of the heightmap\n" },
#endif
		{ "DisplayName", "XY Scale" },
		{ "ModuleRelativePath", "Public/VoxelAssets/VoxelHeightmapAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "XY Scale of the heightmap" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HeightScale_MetaData[] = {
		{ "Category", "Heightmap Asset Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Height multiplier\n" },
#endif
		{ "DisplayName", "Z Scale" },
		{ "ModuleRelativePath", "Public/VoxelAssets/VoxelHeightmapAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Height multiplier" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HeightOffset_MetaData[] = {
		{ "Category", "Heightmap Asset Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// In voxels, applied after Z Scale\n" },
#endif
		{ "ModuleRelativePath", "Public/VoxelAssets/VoxelHeightmapAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "In voxels, applied after Z Scale" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bInfiniteExtent_MetaData[] = {
		{ "Category", "Heightmap Generator Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// If false, will have meshes on the sides. If true, will extend infinitely.\n" },
#endif
		{ "ModuleRelativePath", "Public/VoxelAssets/VoxelHeightmapAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If false, will have meshes on the sides. If true, will extend infinitely." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AdditionalThickness_MetaData[] = {
		{ "Category", "Heightmap Generator Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Additional thickness in voxels below the heightmap\n" },
#endif
		{ "EditCondition", "!bInfiniteExtent" },
		{ "ModuleRelativePath", "Public/VoxelAssets/VoxelHeightmapAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Additional thickness in voxels below the heightmap" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Precision_MetaData[] = {
		{ "Category", "Heightmap Generator Settings" },
		{ "ClampMin", "1" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Higher precision can improve render quality, but voxel values are lower (hardness not constant)\n// Set this to the max delta height you can have between 2 adjacent pixels, in voxels\n// Need to be increased if the shadows/normals aren't nice, and decreased if the edit speed isn't coherent\n" },
#endif
		{ "ModuleRelativePath", "Public/VoxelAssets/VoxelHeightmapAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Higher precision can improve render quality, but voxel values are lower (hardness not constant)\nSet this to the max delta height you can have between 2 adjacent pixels, in voxels\nNeed to be increased if the shadows/normals aren't nice, and decreased if the edit speed isn't coherent" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Width_MetaData[] = {
		{ "Category", "Heightmap Info" },
		{ "ModuleRelativePath", "Public/VoxelAssets/VoxelHeightmapAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Height_MetaData[] = {
		{ "Category", "Heightmap Info" },
		{ "ModuleRelativePath", "Public/VoxelAssets/VoxelHeightmapAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VoxelCustomVersion_MetaData[] = {
		{ "ModuleRelativePath", "Public/VoxelAssets/VoxelHeightmapAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaterialConfigFlag_MetaData[] = {
		{ "ModuleRelativePath", "Public/VoxelAssets/VoxelHeightmapAsset.h" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ThumbnailSave_MetaData[] = {
		{ "ModuleRelativePath", "Public/VoxelAssets/VoxelHeightmapAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ThumbnailTexture_MetaData[] = {
		{ "ModuleRelativePath", "Public/VoxelAssets/VoxelHeightmapAsset.h" },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Scale;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HeightScale;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HeightOffset;
	static void NewProp_bInfiniteExtent_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInfiniteExtent;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AdditionalThickness;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Precision;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Width;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Height;
	static const UECodeGen_Private::FIntPropertyParams NewProp_VoxelCustomVersion;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_MaterialConfigFlag;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ThumbnailSave_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ThumbnailSave;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ThumbnailTexture;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UVoxelHeightmapAsset_GetHeight, "GetHeight" }, // 3839215270
		{ &Z_Construct_UFunction_UVoxelHeightmapAsset_GetWidth, "GetWidth" }, // 3247360739
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelHeightmapAsset>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVoxelHeightmapAsset_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelHeightmapAsset, Scale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Scale_MetaData), NewProp_Scale_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVoxelHeightmapAsset_Statics::NewProp_HeightScale = { "HeightScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelHeightmapAsset, HeightScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HeightScale_MetaData), NewProp_HeightScale_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVoxelHeightmapAsset_Statics::NewProp_HeightOffset = { "HeightOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelHeightmapAsset, HeightOffset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HeightOffset_MetaData), NewProp_HeightOffset_MetaData) };
void Z_Construct_UClass_UVoxelHeightmapAsset_Statics::NewProp_bInfiniteExtent_SetBit(void* Obj)
{
	((UVoxelHeightmapAsset*)Obj)->bInfiniteExtent = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVoxelHeightmapAsset_Statics::NewProp_bInfiniteExtent = { "bInfiniteExtent", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UVoxelHeightmapAsset), &Z_Construct_UClass_UVoxelHeightmapAsset_Statics::NewProp_bInfiniteExtent_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bInfiniteExtent_MetaData), NewProp_bInfiniteExtent_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVoxelHeightmapAsset_Statics::NewProp_AdditionalThickness = { "AdditionalThickness", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelHeightmapAsset, AdditionalThickness), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AdditionalThickness_MetaData), NewProp_AdditionalThickness_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVoxelHeightmapAsset_Statics::NewProp_Precision = { "Precision", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelHeightmapAsset, Precision), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Precision_MetaData), NewProp_Precision_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UVoxelHeightmapAsset_Statics::NewProp_Width = { "Width", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelHeightmapAsset, Width), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Width_MetaData), NewProp_Width_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UVoxelHeightmapAsset_Statics::NewProp_Height = { "Height", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelHeightmapAsset, Height), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Height_MetaData), NewProp_Height_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UVoxelHeightmapAsset_Statics::NewProp_VoxelCustomVersion = { "VoxelCustomVersion", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelHeightmapAsset, VoxelCustomVersion), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VoxelCustomVersion_MetaData), NewProp_VoxelCustomVersion_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UVoxelHeightmapAsset_Statics::NewProp_MaterialConfigFlag = { "MaterialConfigFlag", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelHeightmapAsset, MaterialConfigFlag), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaterialConfigFlag_MetaData), NewProp_MaterialConfigFlag_MetaData) };
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVoxelHeightmapAsset_Statics::NewProp_ThumbnailSave_Inner = { "ThumbnailSave", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UVoxelHeightmapAsset_Statics::NewProp_ThumbnailSave = { "ThumbnailSave", nullptr, (EPropertyFlags)0x0040000c00000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelHeightmapAsset, ThumbnailSave), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ThumbnailSave_MetaData), NewProp_ThumbnailSave_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVoxelHeightmapAsset_Statics::NewProp_ThumbnailTexture = { "ThumbnailTexture", nullptr, (EPropertyFlags)0x0144000800002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelHeightmapAsset, ThumbnailTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ThumbnailTexture_MetaData), NewProp_ThumbnailTexture_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelHeightmapAsset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelHeightmapAsset_Statics::NewProp_Scale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelHeightmapAsset_Statics::NewProp_HeightScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelHeightmapAsset_Statics::NewProp_HeightOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelHeightmapAsset_Statics::NewProp_bInfiniteExtent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelHeightmapAsset_Statics::NewProp_AdditionalThickness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelHeightmapAsset_Statics::NewProp_Precision,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelHeightmapAsset_Statics::NewProp_Width,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelHeightmapAsset_Statics::NewProp_Height,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelHeightmapAsset_Statics::NewProp_VoxelCustomVersion,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelHeightmapAsset_Statics::NewProp_MaterialConfigFlag,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelHeightmapAsset_Statics::NewProp_ThumbnailSave_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelHeightmapAsset_Statics::NewProp_ThumbnailSave,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelHeightmapAsset_Statics::NewProp_ThumbnailTexture,
#endif // WITH_EDITORONLY_DATA
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelHeightmapAsset_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UVoxelHeightmapAsset_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UVoxelTransformableGeneratorWithBounds,
	(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelHeightmapAsset_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelHeightmapAsset_Statics::ClassParams = {
	&UVoxelHeightmapAsset::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UVoxelHeightmapAsset_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelHeightmapAsset_Statics::PropPointers),
	0,
	0x001000A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelHeightmapAsset_Statics::Class_MetaDataParams), Z_Construct_UClass_UVoxelHeightmapAsset_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVoxelHeightmapAsset()
{
	if (!Z_Registration_Info_UClass_UVoxelHeightmapAsset.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelHeightmapAsset.OuterSingleton, Z_Construct_UClass_UVoxelHeightmapAsset_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVoxelHeightmapAsset.OuterSingleton;
}
UVoxelHeightmapAsset::UVoxelHeightmapAsset(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelHeightmapAsset);
UVoxelHeightmapAsset::~UVoxelHeightmapAsset() {}
IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UVoxelHeightmapAsset)
// ********** End Class UVoxelHeightmapAsset *******************************************************

// ********** Begin Class UVoxelHeightmapAssetFloat ************************************************
void UVoxelHeightmapAssetFloat::StaticRegisterNativesUVoxelHeightmapAssetFloat()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UVoxelHeightmapAssetFloat;
UClass* UVoxelHeightmapAssetFloat::GetPrivateStaticClass()
{
	using TClass = UVoxelHeightmapAssetFloat;
	if (!Z_Registration_Info_UClass_UVoxelHeightmapAssetFloat.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("VoxelHeightmapAssetFloat"),
			Z_Registration_Info_UClass_UVoxelHeightmapAssetFloat.InnerSingleton,
			StaticRegisterNativesUVoxelHeightmapAssetFloat,
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
	return Z_Registration_Info_UClass_UVoxelHeightmapAssetFloat.InnerSingleton;
}
UClass* Z_Construct_UClass_UVoxelHeightmapAssetFloat_NoRegister()
{
	return UVoxelHeightmapAssetFloat::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UVoxelHeightmapAssetFloat_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "VoxelAssets/VoxelHeightmapAsset.h" },
		{ "ModuleRelativePath", "Public/VoxelAssets/VoxelHeightmapAsset.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelHeightmapAssetFloat>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UVoxelHeightmapAssetFloat_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UVoxelHeightmapAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelHeightmapAssetFloat_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelHeightmapAssetFloat_Statics::ClassParams = {
	&UVoxelHeightmapAssetFloat::StaticClass,
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
	0x041000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelHeightmapAssetFloat_Statics::Class_MetaDataParams), Z_Construct_UClass_UVoxelHeightmapAssetFloat_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVoxelHeightmapAssetFloat()
{
	if (!Z_Registration_Info_UClass_UVoxelHeightmapAssetFloat.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelHeightmapAssetFloat.OuterSingleton, Z_Construct_UClass_UVoxelHeightmapAssetFloat_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVoxelHeightmapAssetFloat.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelHeightmapAssetFloat);
UVoxelHeightmapAssetFloat::~UVoxelHeightmapAssetFloat() {}
// ********** End Class UVoxelHeightmapAssetFloat **************************************************

// ********** Begin ScriptStruct FVoxelHeightmapImporterWeightmapInfos *****************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FVoxelHeightmapImporterWeightmapInfos;
class UScriptStruct* FVoxelHeightmapImporterWeightmapInfos::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FVoxelHeightmapImporterWeightmapInfos.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FVoxelHeightmapImporterWeightmapInfos.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVoxelHeightmapImporterWeightmapInfos, (UObject*)Z_Construct_UPackage__Script_Voxel(), TEXT("VoxelHeightmapImporterWeightmapInfos"));
	}
	return Z_Registration_Info_UScriptStruct_FVoxelHeightmapImporterWeightmapInfos.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FVoxelHeightmapImporterWeightmapInfos_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/VoxelAssets/VoxelHeightmapAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_File_MetaData[] = {
		{ "Category", "Voxel" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The weightmap\n" },
#endif
		{ "ModuleRelativePath", "Public/VoxelAssets/VoxelHeightmapAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The weightmap" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Layer_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelAssets/VoxelHeightmapAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Index_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelAssets/VoxelHeightmapAsset.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_File;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Layer_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Layer;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Index;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVoxelHeightmapImporterWeightmapInfos>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVoxelHeightmapImporterWeightmapInfos_Statics::NewProp_File = { "File", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVoxelHeightmapImporterWeightmapInfos, File), Z_Construct_UScriptStruct_FFilePath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_File_MetaData), NewProp_File_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FVoxelHeightmapImporterWeightmapInfos_Statics::NewProp_Layer_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FVoxelHeightmapImporterWeightmapInfos_Statics::NewProp_Layer = { "Layer", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVoxelHeightmapImporterWeightmapInfos, Layer), Z_Construct_UEnum_Voxel_EVoxelRGBA, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Layer_MetaData), NewProp_Layer_MetaData) }; // 2902135298
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FVoxelHeightmapImporterWeightmapInfos_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVoxelHeightmapImporterWeightmapInfos, Index), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Index_MetaData), NewProp_Index_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVoxelHeightmapImporterWeightmapInfos_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelHeightmapImporterWeightmapInfos_Statics::NewProp_File,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelHeightmapImporterWeightmapInfos_Statics::NewProp_Layer_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelHeightmapImporterWeightmapInfos_Statics::NewProp_Layer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelHeightmapImporterWeightmapInfos_Statics::NewProp_Index,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelHeightmapImporterWeightmapInfos_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVoxelHeightmapImporterWeightmapInfos_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
	nullptr,
	&NewStructOps,
	"VoxelHeightmapImporterWeightmapInfos",
	Z_Construct_UScriptStruct_FVoxelHeightmapImporterWeightmapInfos_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelHeightmapImporterWeightmapInfos_Statics::PropPointers),
	sizeof(FVoxelHeightmapImporterWeightmapInfos),
	alignof(FVoxelHeightmapImporterWeightmapInfos),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelHeightmapImporterWeightmapInfos_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVoxelHeightmapImporterWeightmapInfos_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FVoxelHeightmapImporterWeightmapInfos()
{
	if (!Z_Registration_Info_UScriptStruct_FVoxelHeightmapImporterWeightmapInfos.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FVoxelHeightmapImporterWeightmapInfos.InnerSingleton, Z_Construct_UScriptStruct_FVoxelHeightmapImporterWeightmapInfos_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FVoxelHeightmapImporterWeightmapInfos.InnerSingleton;
}
// ********** End ScriptStruct FVoxelHeightmapImporterWeightmapInfos *******************************

// ********** Begin Class UVoxelHeightmapAssetUINT16 ***********************************************
void UVoxelHeightmapAssetUINT16::StaticRegisterNativesUVoxelHeightmapAssetUINT16()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UVoxelHeightmapAssetUINT16;
UClass* UVoxelHeightmapAssetUINT16::GetPrivateStaticClass()
{
	using TClass = UVoxelHeightmapAssetUINT16;
	if (!Z_Registration_Info_UClass_UVoxelHeightmapAssetUINT16.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("VoxelHeightmapAssetUINT16"),
			Z_Registration_Info_UClass_UVoxelHeightmapAssetUINT16.InnerSingleton,
			StaticRegisterNativesUVoxelHeightmapAssetUINT16,
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
	return Z_Registration_Info_UClass_UVoxelHeightmapAssetUINT16.InnerSingleton;
}
UClass* Z_Construct_UClass_UVoxelHeightmapAssetUINT16_NoRegister()
{
	return UVoxelHeightmapAssetUINT16::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UVoxelHeightmapAssetUINT16_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "VoxelAssets/VoxelHeightmapAsset.h" },
		{ "ModuleRelativePath", "Public/VoxelAssets/VoxelHeightmapAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Heightmap_MetaData[] = {
		{ "Category", "Import configuration" },
		{ "ModuleRelativePath", "Public/VoxelAssets/VoxelHeightmapAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaterialConfig_MetaData[] = {
		{ "Category", "Import configuration" },
		{ "ModuleRelativePath", "Public/VoxelAssets/VoxelHeightmapAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Weightmaps_MetaData[] = {
		{ "Category", "Import configuration" },
		{ "ModuleRelativePath", "Public/VoxelAssets/VoxelHeightmapAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeightmapsInfos_MetaData[] = {
		{ "ModuleRelativePath", "Public/VoxelAssets/VoxelHeightmapAsset.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Heightmap;
	static const UECodeGen_Private::FBytePropertyParams NewProp_MaterialConfig_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_MaterialConfig;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Weightmaps_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Weightmaps;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WeightmapsInfos_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_WeightmapsInfos;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelHeightmapAssetUINT16>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UVoxelHeightmapAssetUINT16_Statics::NewProp_Heightmap = { "Heightmap", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelHeightmapAssetUINT16, Heightmap), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Heightmap_MetaData), NewProp_Heightmap_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UVoxelHeightmapAssetUINT16_Statics::NewProp_MaterialConfig_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UVoxelHeightmapAssetUINT16_Statics::NewProp_MaterialConfig = { "MaterialConfig", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelHeightmapAssetUINT16, MaterialConfig), Z_Construct_UEnum_Voxel_EVoxelHeightmapImporterMaterialConfig, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaterialConfig_MetaData), NewProp_MaterialConfig_MetaData) }; // 2828320909
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UVoxelHeightmapAssetUINT16_Statics::NewProp_Weightmaps_Inner = { "Weightmaps", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UVoxelHeightmapAssetUINT16_Statics::NewProp_Weightmaps = { "Weightmaps", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelHeightmapAssetUINT16, Weightmaps), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Weightmaps_MetaData), NewProp_Weightmaps_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVoxelHeightmapAssetUINT16_Statics::NewProp_WeightmapsInfos_Inner = { "WeightmapsInfos", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVoxelHeightmapImporterWeightmapInfos, METADATA_PARAMS(0, nullptr) }; // 2439625825
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UVoxelHeightmapAssetUINT16_Statics::NewProp_WeightmapsInfos = { "WeightmapsInfos", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelHeightmapAssetUINT16, WeightmapsInfos), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeightmapsInfos_MetaData), NewProp_WeightmapsInfos_MetaData) }; // 2439625825
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelHeightmapAssetUINT16_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelHeightmapAssetUINT16_Statics::NewProp_Heightmap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelHeightmapAssetUINT16_Statics::NewProp_MaterialConfig_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelHeightmapAssetUINT16_Statics::NewProp_MaterialConfig,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelHeightmapAssetUINT16_Statics::NewProp_Weightmaps_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelHeightmapAssetUINT16_Statics::NewProp_Weightmaps,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelHeightmapAssetUINT16_Statics::NewProp_WeightmapsInfos_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelHeightmapAssetUINT16_Statics::NewProp_WeightmapsInfos,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelHeightmapAssetUINT16_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UVoxelHeightmapAssetUINT16_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UVoxelHeightmapAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelHeightmapAssetUINT16_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelHeightmapAssetUINT16_Statics::ClassParams = {
	&UVoxelHeightmapAssetUINT16::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UVoxelHeightmapAssetUINT16_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelHeightmapAssetUINT16_Statics::PropPointers),
	0,
	0x041000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelHeightmapAssetUINT16_Statics::Class_MetaDataParams), Z_Construct_UClass_UVoxelHeightmapAssetUINT16_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVoxelHeightmapAssetUINT16()
{
	if (!Z_Registration_Info_UClass_UVoxelHeightmapAssetUINT16.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelHeightmapAssetUINT16.OuterSingleton, Z_Construct_UClass_UVoxelHeightmapAssetUINT16_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVoxelHeightmapAssetUINT16.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelHeightmapAssetUINT16);
UVoxelHeightmapAssetUINT16::~UVoxelHeightmapAssetUINT16() {}
// ********** End Class UVoxelHeightmapAssetUINT16 *************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelAssets_VoxelHeightmapAsset_h__Script_Voxel_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EVoxelHeightmapImporterMaterialConfig_StaticEnum, TEXT("EVoxelHeightmapImporterMaterialConfig"), &Z_Registration_Info_UEnum_EVoxelHeightmapImporterMaterialConfig, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2828320909U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FVoxelHeightmapImporterWeightmapInfos::StaticStruct, Z_Construct_UScriptStruct_FVoxelHeightmapImporterWeightmapInfos_Statics::NewStructOps, TEXT("VoxelHeightmapImporterWeightmapInfos"), &Z_Registration_Info_UScriptStruct_FVoxelHeightmapImporterWeightmapInfos, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVoxelHeightmapImporterWeightmapInfos), 2439625825U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UVoxelHeightmapAsset, UVoxelHeightmapAsset::StaticClass, TEXT("UVoxelHeightmapAsset"), &Z_Registration_Info_UClass_UVoxelHeightmapAsset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelHeightmapAsset), 1070027499U) },
		{ Z_Construct_UClass_UVoxelHeightmapAssetFloat, UVoxelHeightmapAssetFloat::StaticClass, TEXT("UVoxelHeightmapAssetFloat"), &Z_Registration_Info_UClass_UVoxelHeightmapAssetFloat, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelHeightmapAssetFloat), 1600518185U) },
		{ Z_Construct_UClass_UVoxelHeightmapAssetUINT16, UVoxelHeightmapAssetUINT16::StaticClass, TEXT("UVoxelHeightmapAssetUINT16"), &Z_Registration_Info_UClass_UVoxelHeightmapAssetUINT16, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelHeightmapAssetUINT16), 4267831590U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelAssets_VoxelHeightmapAsset_h__Script_Voxel_1730525822(TEXT("/Script/Voxel"),
	Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelAssets_VoxelHeightmapAsset_h__Script_Voxel_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelAssets_VoxelHeightmapAsset_h__Script_Voxel_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelAssets_VoxelHeightmapAsset_h__Script_Voxel_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelAssets_VoxelHeightmapAsset_h__Script_Voxel_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelAssets_VoxelHeightmapAsset_h__Script_Voxel_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelAssets_VoxelHeightmapAsset_h__Script_Voxel_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
