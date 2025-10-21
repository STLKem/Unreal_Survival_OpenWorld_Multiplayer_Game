// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VoxelAssets/VoxelDataAsset.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#include "VoxelIntBox.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeVoxelDataAsset() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntVector();
ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
UPackage* Z_Construct_UPackage__Script_Voxel();
VOXEL_API UClass* Z_Construct_UClass_AVoxelWorld_NoRegister();
VOXEL_API UClass* Z_Construct_UClass_UVoxelDataAsset();
VOXEL_API UClass* Z_Construct_UClass_UVoxelDataAsset_NoRegister();
VOXEL_API UClass* Z_Construct_UClass_UVoxelTransformableGeneratorWithBounds();
VOXEL_API UEnum* Z_Construct_UEnum_Voxel_EVoxelDataAssetImportSource();
VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelDataAssetImportSettings_MagicaVox();
VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelIntBox();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EVoxelDataAssetImportSource ***********************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EVoxelDataAssetImportSource;
static UEnum* EVoxelDataAssetImportSource_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EVoxelDataAssetImportSource.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EVoxelDataAssetImportSource.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Voxel_EVoxelDataAssetImportSource, (UObject*)Z_Construct_UPackage__Script_Voxel(), TEXT("EVoxelDataAssetImportSource"));
	}
	return Z_Registration_Info_UEnum_EVoxelDataAssetImportSource.OuterSingleton;
}
template<> VOXEL_API UEnum* StaticEnum<EVoxelDataAssetImportSource>()
{
	return EVoxelDataAssetImportSource_StaticEnum();
}
struct Z_Construct_UEnum_Voxel_EVoxelDataAssetImportSource_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "MagicaVox.Name", "EVoxelDataAssetImportSource::MagicaVox" },
		{ "Mesh.Name", "EVoxelDataAssetImportSource::Mesh" },
		{ "ModuleRelativePath", "Public/VoxelAssets/VoxelDataAsset.h" },
		{ "None.Name", "EVoxelDataAssetImportSource::None" },
		{ "RawVox.Name", "EVoxelDataAssetImportSource::RawVox" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EVoxelDataAssetImportSource::None", (int64)EVoxelDataAssetImportSource::None },
		{ "EVoxelDataAssetImportSource::MagicaVox", (int64)EVoxelDataAssetImportSource::MagicaVox },
		{ "EVoxelDataAssetImportSource::RawVox", (int64)EVoxelDataAssetImportSource::RawVox },
		{ "EVoxelDataAssetImportSource::Mesh", (int64)EVoxelDataAssetImportSource::Mesh },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Voxel_EVoxelDataAssetImportSource_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Voxel,
	nullptr,
	"EVoxelDataAssetImportSource",
	"EVoxelDataAssetImportSource",
	Z_Construct_UEnum_Voxel_EVoxelDataAssetImportSource_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Voxel_EVoxelDataAssetImportSource_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Voxel_EVoxelDataAssetImportSource_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Voxel_EVoxelDataAssetImportSource_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Voxel_EVoxelDataAssetImportSource()
{
	if (!Z_Registration_Info_UEnum_EVoxelDataAssetImportSource.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EVoxelDataAssetImportSource.InnerSingleton, Z_Construct_UEnum_Voxel_EVoxelDataAssetImportSource_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EVoxelDataAssetImportSource.InnerSingleton;
}
// ********** End Enum EVoxelDataAssetImportSource *************************************************

// ********** Begin ScriptStruct FVoxelDataAssetImportSettings_MagicaVox ***************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FVoxelDataAssetImportSettings_MagicaVox;
class UScriptStruct* FVoxelDataAssetImportSettings_MagicaVox::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FVoxelDataAssetImportSettings_MagicaVox.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FVoxelDataAssetImportSettings_MagicaVox.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVoxelDataAssetImportSettings_MagicaVox, (UObject*)Z_Construct_UPackage__Script_Voxel(), TEXT("VoxelDataAssetImportSettings_MagicaVox"));
	}
	return Z_Registration_Info_UScriptStruct_FVoxelDataAssetImportSettings_MagicaVox.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FVoxelDataAssetImportSettings_MagicaVox_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/VoxelAssets/VoxelDataAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUsePalette_MetaData[] = {
		{ "Category", "Import" },
		{ "ModuleRelativePath", "Public/VoxelAssets/VoxelDataAsset.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bUsePalette_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUsePalette;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVoxelDataAssetImportSettings_MagicaVox>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FVoxelDataAssetImportSettings_MagicaVox_Statics::NewProp_bUsePalette_SetBit(void* Obj)
{
	((FVoxelDataAssetImportSettings_MagicaVox*)Obj)->bUsePalette = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVoxelDataAssetImportSettings_MagicaVox_Statics::NewProp_bUsePalette = { "bUsePalette", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FVoxelDataAssetImportSettings_MagicaVox), &Z_Construct_UScriptStruct_FVoxelDataAssetImportSettings_MagicaVox_Statics::NewProp_bUsePalette_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUsePalette_MetaData), NewProp_bUsePalette_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVoxelDataAssetImportSettings_MagicaVox_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelDataAssetImportSettings_MagicaVox_Statics::NewProp_bUsePalette,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelDataAssetImportSettings_MagicaVox_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVoxelDataAssetImportSettings_MagicaVox_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
	nullptr,
	&NewStructOps,
	"VoxelDataAssetImportSettings_MagicaVox",
	Z_Construct_UScriptStruct_FVoxelDataAssetImportSettings_MagicaVox_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelDataAssetImportSettings_MagicaVox_Statics::PropPointers),
	sizeof(FVoxelDataAssetImportSettings_MagicaVox),
	alignof(FVoxelDataAssetImportSettings_MagicaVox),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelDataAssetImportSettings_MagicaVox_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVoxelDataAssetImportSettings_MagicaVox_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FVoxelDataAssetImportSettings_MagicaVox()
{
	if (!Z_Registration_Info_UScriptStruct_FVoxelDataAssetImportSettings_MagicaVox.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FVoxelDataAssetImportSettings_MagicaVox.InnerSingleton, Z_Construct_UScriptStruct_FVoxelDataAssetImportSettings_MagicaVox_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FVoxelDataAssetImportSettings_MagicaVox.InnerSingleton;
}
// ********** End ScriptStruct FVoxelDataAssetImportSettings_MagicaVox *****************************

// ********** Begin Class UVoxelDataAsset Function GetBounds ***************************************
struct Z_Construct_UFunction_UVoxelDataAsset_GetBounds_Statics
{
	struct VoxelDataAsset_eventGetBounds_Parms
	{
		FVoxelIntBox ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Voxel|Data Asset" },
		{ "ModuleRelativePath", "Public/VoxelAssets/VoxelDataAsset.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelDataAsset_GetBounds_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelDataAsset_eventGetBounds_Parms, ReturnValue), Z_Construct_UScriptStruct_FVoxelIntBox, METADATA_PARAMS(0, nullptr) }; // 3520536583
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelDataAsset_GetBounds_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataAsset_GetBounds_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelDataAsset_GetBounds_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelDataAsset_GetBounds_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelDataAsset, nullptr, "GetBounds", Z_Construct_UFunction_UVoxelDataAsset_GetBounds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelDataAsset_GetBounds_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVoxelDataAsset_GetBounds_Statics::VoxelDataAsset_eventGetBounds_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelDataAsset_GetBounds_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelDataAsset_GetBounds_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVoxelDataAsset_GetBounds_Statics::VoxelDataAsset_eventGetBounds_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVoxelDataAsset_GetBounds()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelDataAsset_GetBounds_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelDataAsset::execGetBounds)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVoxelIntBox*)Z_Param__Result=P_THIS->GetBounds();
	P_NATIVE_END;
}
// ********** End Class UVoxelDataAsset Function GetBounds *****************************************

// ********** Begin Class UVoxelDataAsset Function GetSize *****************************************
struct Z_Construct_UFunction_UVoxelDataAsset_GetSize_Statics
{
	struct VoxelDataAsset_eventGetSize_Parms
	{
		FIntVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Voxel|Data Asset" },
		{ "ModuleRelativePath", "Public/VoxelAssets/VoxelDataAsset.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelDataAsset_GetSize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelDataAsset_eventGetSize_Parms, ReturnValue), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelDataAsset_GetSize_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDataAsset_GetSize_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelDataAsset_GetSize_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelDataAsset_GetSize_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UVoxelDataAsset, nullptr, "GetSize", Z_Construct_UFunction_UVoxelDataAsset_GetSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelDataAsset_GetSize_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVoxelDataAsset_GetSize_Statics::VoxelDataAsset_eventGetSize_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelDataAsset_GetSize_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelDataAsset_GetSize_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UVoxelDataAsset_GetSize_Statics::VoxelDataAsset_eventGetSize_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVoxelDataAsset_GetSize()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelDataAsset_GetSize_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVoxelDataAsset::execGetSize)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FIntVector*)Z_Param__Result=P_THIS->GetSize();
	P_NATIVE_END;
}
// ********** End Class UVoxelDataAsset Function GetSize *******************************************

// ********** Begin Class UVoxelDataAsset **********************************************************
void UVoxelDataAsset::StaticRegisterNativesUVoxelDataAsset()
{
	UClass* Class = UVoxelDataAsset::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetBounds", &UVoxelDataAsset::execGetBounds },
		{ "GetSize", &UVoxelDataAsset::execGetSize },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UVoxelDataAsset;
UClass* UVoxelDataAsset::GetPrivateStaticClass()
{
	using TClass = UVoxelDataAsset;
	if (!Z_Registration_Info_UClass_UVoxelDataAsset.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("VoxelDataAsset"),
			Z_Registration_Info_UClass_UVoxelDataAsset.InnerSingleton,
			StaticRegisterNativesUVoxelDataAsset,
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
	return Z_Registration_Info_UClass_UVoxelDataAsset.InnerSingleton;
}
UClass* Z_Construct_UClass_UVoxelDataAsset_NoRegister()
{
	return UVoxelDataAsset::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UVoxelDataAsset_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * A Data Asset stores the values of every voxel inside it\n */" },
#endif
		{ "IncludePath", "VoxelAssets/VoxelDataAsset.h" },
		{ "ModuleRelativePath", "Public/VoxelAssets/VoxelDataAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A Data Asset stores the values of every voxel inside it" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSubtractiveAsset_MetaData[] = {
		{ "Category", "Config" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// If true, asset can be used to make holes in the world\n" },
#endif
		{ "ModuleRelativePath", "Public/VoxelAssets/VoxelDataAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If true, asset can be used to make holes in the world" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PositionOffset_MetaData[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Public/VoxelAssets/VoxelDataAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Tolerance_MetaData[] = {
		{ "Category", "Config" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// When sampled, positions that are close to a whole number will be rounded\n// Tolerance defines the threshold\n// Automatically set to 0.1 in Cubic\n" },
#endif
		{ "ModuleRelativePath", "Public/VoxelAssets/VoxelDataAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "When sampled, positions that are close to a whole number will be rounded\nTolerance defines the threshold\nAutomatically set to 0.1 in Cubic" },
#endif
		{ "UIMax", "1.000000" },
		{ "UIMin", "0.000000" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Size_MetaData[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Public/VoxelAssets/VoxelDataAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UncompressedSizeInMB_MetaData[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Public/VoxelAssets/VoxelDataAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CompressedSizeInMB_MetaData[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Public/VoxelAssets/VoxelDataAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Source_MetaData[] = {
		{ "Category", "Import" },
		{ "ModuleRelativePath", "Public/VoxelAssets/VoxelDataAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Paths_MetaData[] = {
		{ "Category", "Import" },
		{ "ModuleRelativePath", "Public/VoxelAssets/VoxelDataAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ImportSettings_MagicaVox_MetaData[] = {
		{ "Category", "Import" },
		{ "ModuleRelativePath", "Public/VoxelAssets/VoxelDataAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VoxelCustomVersion_MetaData[] = {
		{ "ModuleRelativePath", "Public/VoxelAssets/VoxelDataAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ValueConfigFlag_MetaData[] = {
		{ "ModuleRelativePath", "Public/VoxelAssets/VoxelDataAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaterialConfigFlag_MetaData[] = {
		{ "ModuleRelativePath", "Public/VoxelAssets/VoxelDataAsset.h" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ThumbnailSave_MetaData[] = {
		{ "ModuleRelativePath", "Public/VoxelAssets/VoxelDataAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ThumbnailTexture_MetaData[] = {
		{ "ModuleRelativePath", "Public/VoxelAssets/VoxelDataAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseSettingsAsDefault_MetaData[] = {
		{ "Category", "Preview Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// If true, new data assets will be created with these preview settings\n" },
#endif
		{ "ModuleRelativePath", "Public/VoxelAssets/VoxelDataAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If true, new data assets will be created with these preview settings" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VoxelWorldTemplate_MetaData[] = {
		{ "ModuleRelativePath", "Public/VoxelAssets/VoxelDataAsset.h" },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
	static void NewProp_bSubtractiveAsset_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSubtractiveAsset;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PositionOffset;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Tolerance;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Size;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_UncompressedSizeInMB;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CompressedSizeInMB;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Source_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Source;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Paths_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Paths;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ImportSettings_MagicaVox;
	static const UECodeGen_Private::FIntPropertyParams NewProp_VoxelCustomVersion;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_ValueConfigFlag;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_MaterialConfigFlag;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ThumbnailSave_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ThumbnailSave;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ThumbnailTexture;
	static void NewProp_bUseSettingsAsDefault_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseSettingsAsDefault;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_VoxelWorldTemplate;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UVoxelDataAsset_GetBounds, "GetBounds" }, // 3995744661
		{ &Z_Construct_UFunction_UVoxelDataAsset_GetSize, "GetSize" }, // 3074966446
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelDataAsset>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UVoxelDataAsset_Statics::NewProp_bSubtractiveAsset_SetBit(void* Obj)
{
	((UVoxelDataAsset*)Obj)->bSubtractiveAsset = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVoxelDataAsset_Statics::NewProp_bSubtractiveAsset = { "bSubtractiveAsset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UVoxelDataAsset), &Z_Construct_UClass_UVoxelDataAsset_Statics::NewProp_bSubtractiveAsset_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSubtractiveAsset_MetaData), NewProp_bSubtractiveAsset_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVoxelDataAsset_Statics::NewProp_PositionOffset = { "PositionOffset", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelDataAsset, PositionOffset), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PositionOffset_MetaData), NewProp_PositionOffset_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVoxelDataAsset_Statics::NewProp_Tolerance = { "Tolerance", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelDataAsset, Tolerance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tolerance_MetaData), NewProp_Tolerance_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVoxelDataAsset_Statics::NewProp_Size = { "Size", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelDataAsset, Size), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Size_MetaData), NewProp_Size_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVoxelDataAsset_Statics::NewProp_UncompressedSizeInMB = { "UncompressedSizeInMB", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelDataAsset, UncompressedSizeInMB), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UncompressedSizeInMB_MetaData), NewProp_UncompressedSizeInMB_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVoxelDataAsset_Statics::NewProp_CompressedSizeInMB = { "CompressedSizeInMB", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelDataAsset, CompressedSizeInMB), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CompressedSizeInMB_MetaData), NewProp_CompressedSizeInMB_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UVoxelDataAsset_Statics::NewProp_Source_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UVoxelDataAsset_Statics::NewProp_Source = { "Source", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelDataAsset, Source), Z_Construct_UEnum_Voxel_EVoxelDataAssetImportSource, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Source_MetaData), NewProp_Source_MetaData) }; // 2718518587
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UVoxelDataAsset_Statics::NewProp_Paths_Inner = { "Paths", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UVoxelDataAsset_Statics::NewProp_Paths = { "Paths", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelDataAsset, Paths), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Paths_MetaData), NewProp_Paths_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVoxelDataAsset_Statics::NewProp_ImportSettings_MagicaVox = { "ImportSettings_MagicaVox", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelDataAsset, ImportSettings_MagicaVox), Z_Construct_UScriptStruct_FVoxelDataAssetImportSettings_MagicaVox, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ImportSettings_MagicaVox_MetaData), NewProp_ImportSettings_MagicaVox_MetaData) }; // 1422844095
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UVoxelDataAsset_Statics::NewProp_VoxelCustomVersion = { "VoxelCustomVersion", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelDataAsset, VoxelCustomVersion), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VoxelCustomVersion_MetaData), NewProp_VoxelCustomVersion_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UVoxelDataAsset_Statics::NewProp_ValueConfigFlag = { "ValueConfigFlag", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelDataAsset, ValueConfigFlag), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ValueConfigFlag_MetaData), NewProp_ValueConfigFlag_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UVoxelDataAsset_Statics::NewProp_MaterialConfigFlag = { "MaterialConfigFlag", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelDataAsset, MaterialConfigFlag), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaterialConfigFlag_MetaData), NewProp_MaterialConfigFlag_MetaData) };
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVoxelDataAsset_Statics::NewProp_ThumbnailSave_Inner = { "ThumbnailSave", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UVoxelDataAsset_Statics::NewProp_ThumbnailSave = { "ThumbnailSave", nullptr, (EPropertyFlags)0x0040000c00000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelDataAsset, ThumbnailSave), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ThumbnailSave_MetaData), NewProp_ThumbnailSave_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVoxelDataAsset_Statics::NewProp_ThumbnailTexture = { "ThumbnailTexture", nullptr, (EPropertyFlags)0x0144000800002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelDataAsset, ThumbnailTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ThumbnailTexture_MetaData), NewProp_ThumbnailTexture_MetaData) };
void Z_Construct_UClass_UVoxelDataAsset_Statics::NewProp_bUseSettingsAsDefault_SetBit(void* Obj)
{
	((UVoxelDataAsset*)Obj)->bUseSettingsAsDefault = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVoxelDataAsset_Statics::NewProp_bUseSettingsAsDefault = { "bUseSettingsAsDefault", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UVoxelDataAsset), &Z_Construct_UClass_UVoxelDataAsset_Statics::NewProp_bUseSettingsAsDefault_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseSettingsAsDefault_MetaData), NewProp_bUseSettingsAsDefault_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVoxelDataAsset_Statics::NewProp_VoxelWorldTemplate = { "VoxelWorldTemplate", nullptr, (EPropertyFlags)0x0114000800000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelDataAsset, VoxelWorldTemplate), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VoxelWorldTemplate_MetaData), NewProp_VoxelWorldTemplate_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelDataAsset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelDataAsset_Statics::NewProp_bSubtractiveAsset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelDataAsset_Statics::NewProp_PositionOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelDataAsset_Statics::NewProp_Tolerance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelDataAsset_Statics::NewProp_Size,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelDataAsset_Statics::NewProp_UncompressedSizeInMB,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelDataAsset_Statics::NewProp_CompressedSizeInMB,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelDataAsset_Statics::NewProp_Source_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelDataAsset_Statics::NewProp_Source,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelDataAsset_Statics::NewProp_Paths_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelDataAsset_Statics::NewProp_Paths,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelDataAsset_Statics::NewProp_ImportSettings_MagicaVox,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelDataAsset_Statics::NewProp_VoxelCustomVersion,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelDataAsset_Statics::NewProp_ValueConfigFlag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelDataAsset_Statics::NewProp_MaterialConfigFlag,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelDataAsset_Statics::NewProp_ThumbnailSave_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelDataAsset_Statics::NewProp_ThumbnailSave,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelDataAsset_Statics::NewProp_ThumbnailTexture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelDataAsset_Statics::NewProp_bUseSettingsAsDefault,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelDataAsset_Statics::NewProp_VoxelWorldTemplate,
#endif // WITH_EDITORONLY_DATA
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelDataAsset_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UVoxelDataAsset_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UVoxelTransformableGeneratorWithBounds,
	(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelDataAsset_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelDataAsset_Statics::ClassParams = {
	&UVoxelDataAsset::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UVoxelDataAsset_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelDataAsset_Statics::PropPointers),
	0,
	0x041000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelDataAsset_Statics::Class_MetaDataParams), Z_Construct_UClass_UVoxelDataAsset_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVoxelDataAsset()
{
	if (!Z_Registration_Info_UClass_UVoxelDataAsset.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelDataAsset.OuterSingleton, Z_Construct_UClass_UVoxelDataAsset_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVoxelDataAsset.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelDataAsset);
UVoxelDataAsset::~UVoxelDataAsset() {}
IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UVoxelDataAsset)
// ********** End Class UVoxelDataAsset ************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelAssets_VoxelDataAsset_h__Script_Voxel_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EVoxelDataAssetImportSource_StaticEnum, TEXT("EVoxelDataAssetImportSource"), &Z_Registration_Info_UEnum_EVoxelDataAssetImportSource, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2718518587U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FVoxelDataAssetImportSettings_MagicaVox::StaticStruct, Z_Construct_UScriptStruct_FVoxelDataAssetImportSettings_MagicaVox_Statics::NewStructOps, TEXT("VoxelDataAssetImportSettings_MagicaVox"), &Z_Registration_Info_UScriptStruct_FVoxelDataAssetImportSettings_MagicaVox, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVoxelDataAssetImportSettings_MagicaVox), 1422844095U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UVoxelDataAsset, UVoxelDataAsset::StaticClass, TEXT("UVoxelDataAsset"), &Z_Registration_Info_UClass_UVoxelDataAsset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelDataAsset), 1423846685U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelAssets_VoxelDataAsset_h__Script_Voxel_4280701440(TEXT("/Script/Voxel"),
	Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelAssets_VoxelDataAsset_h__Script_Voxel_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelAssets_VoxelDataAsset_h__Script_Voxel_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelAssets_VoxelDataAsset_h__Script_Voxel_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelAssets_VoxelDataAsset_h__Script_Voxel_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelAssets_VoxelDataAsset_h__Script_Voxel_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelAssets_VoxelDataAsset_h__Script_Voxel_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
