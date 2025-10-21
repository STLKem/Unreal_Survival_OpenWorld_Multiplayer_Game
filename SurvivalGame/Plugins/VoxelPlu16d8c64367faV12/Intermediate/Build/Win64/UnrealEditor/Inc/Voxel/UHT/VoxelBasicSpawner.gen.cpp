// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VoxelSpawners/VoxelBasicSpawner.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeVoxelBasicSpawner() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFloatInterval();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
UPackage* Z_Construct_UPackage__Script_Voxel();
VOXEL_API UClass* Z_Construct_UClass_UVoxelBasicSpawner();
VOXEL_API UClass* Z_Construct_UClass_UVoxelBasicSpawner_NoRegister();
VOXEL_API UClass* Z_Construct_UClass_UVoxelSpawner();
VOXEL_API UEnum* Z_Construct_UEnum_Voxel_EVoxelBasicSpawnerRotation();
VOXEL_API UEnum* Z_Construct_UEnum_Voxel_EVoxelBasicSpawnerScaling();
VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelBasicSpawnerScaleSettings();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EVoxelBasicSpawnerScaling *************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EVoxelBasicSpawnerScaling;
static UEnum* EVoxelBasicSpawnerScaling_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EVoxelBasicSpawnerScaling.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EVoxelBasicSpawnerScaling.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Voxel_EVoxelBasicSpawnerScaling, (UObject*)Z_Construct_UPackage__Script_Voxel(), TEXT("EVoxelBasicSpawnerScaling"));
	}
	return Z_Registration_Info_UEnum_EVoxelBasicSpawnerScaling.OuterSingleton;
}
template<> VOXEL_API UEnum* StaticEnum<EVoxelBasicSpawnerScaling>()
{
	return EVoxelBasicSpawnerScaling_StaticEnum();
}
struct Z_Construct_UEnum_Voxel_EVoxelBasicSpawnerScaling_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Free.Comment", "/** Instances will have random X, Y and Z scales */" },
		{ "Free.Name", "EVoxelBasicSpawnerScaling::Free" },
		{ "Free.ToolTip", "Instances will have random X, Y and Z scales" },
		{ "LockXY.Comment", "/** X and Y will be the same random scale, Z will be another */" },
		{ "LockXY.Name", "EVoxelBasicSpawnerScaling::LockXY" },
		{ "LockXY.ToolTip", "X and Y will be the same random scale, Z will be another" },
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelBasicSpawner.h" },
		{ "Uniform.Comment", "/** Instances will have uniform X, Y and Z scales */" },
		{ "Uniform.Name", "EVoxelBasicSpawnerScaling::Uniform" },
		{ "Uniform.ToolTip", "Instances will have uniform X, Y and Z scales" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EVoxelBasicSpawnerScaling::Uniform", (int64)EVoxelBasicSpawnerScaling::Uniform },
		{ "EVoxelBasicSpawnerScaling::Free", (int64)EVoxelBasicSpawnerScaling::Free },
		{ "EVoxelBasicSpawnerScaling::LockXY", (int64)EVoxelBasicSpawnerScaling::LockXY },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Voxel_EVoxelBasicSpawnerScaling_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Voxel,
	nullptr,
	"EVoxelBasicSpawnerScaling",
	"EVoxelBasicSpawnerScaling",
	Z_Construct_UEnum_Voxel_EVoxelBasicSpawnerScaling_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Voxel_EVoxelBasicSpawnerScaling_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Voxel_EVoxelBasicSpawnerScaling_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Voxel_EVoxelBasicSpawnerScaling_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Voxel_EVoxelBasicSpawnerScaling()
{
	if (!Z_Registration_Info_UEnum_EVoxelBasicSpawnerScaling.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EVoxelBasicSpawnerScaling.InnerSingleton, Z_Construct_UEnum_Voxel_EVoxelBasicSpawnerScaling_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EVoxelBasicSpawnerScaling.InnerSingleton;
}
// ********** End Enum EVoxelBasicSpawnerScaling ***************************************************

// ********** Begin ScriptStruct FVoxelBasicSpawnerScaleSettings ***********************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FVoxelBasicSpawnerScaleSettings;
class UScriptStruct* FVoxelBasicSpawnerScaleSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FVoxelBasicSpawnerScaleSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FVoxelBasicSpawnerScaleSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVoxelBasicSpawnerScaleSettings, (UObject*)Z_Construct_UPackage__Script_Voxel(), TEXT("VoxelBasicSpawnerScaleSettings"));
	}
	return Z_Registration_Info_UScriptStruct_FVoxelBasicSpawnerScaleSettings.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FVoxelBasicSpawnerScaleSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelBasicSpawner.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Scaling_MetaData[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelBasicSpawner.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScaleX_MetaData[] = {
		{ "Category", "Config" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Specifies the range of scale, from minimum to maximum, to apply to an actor instance's X Scale property */" },
#endif
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelBasicSpawner.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Specifies the range of scale, from minimum to maximum, to apply to an actor instance's X Scale property" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScaleY_MetaData[] = {
		{ "Category", "Config" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Specifies the range of scale, from minimum to maximum, to apply to an actor instance's Y Scale property */" },
#endif
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelBasicSpawner.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Specifies the range of scale, from minimum to maximum, to apply to an actor instance's Y Scale property" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScaleZ_MetaData[] = {
		{ "Category", "Config" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Specifies the range of scale, from minimum to maximum, to apply to an actor instance's Z Scale property */" },
#endif
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelBasicSpawner.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Specifies the range of scale, from minimum to maximum, to apply to an actor instance's Z Scale property" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Scaling_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Scaling;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ScaleX;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ScaleY;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ScaleZ;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVoxelBasicSpawnerScaleSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FVoxelBasicSpawnerScaleSettings_Statics::NewProp_Scaling_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FVoxelBasicSpawnerScaleSettings_Statics::NewProp_Scaling = { "Scaling", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVoxelBasicSpawnerScaleSettings, Scaling), Z_Construct_UEnum_Voxel_EVoxelBasicSpawnerScaling, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Scaling_MetaData), NewProp_Scaling_MetaData) }; // 1321767054
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVoxelBasicSpawnerScaleSettings_Statics::NewProp_ScaleX = { "ScaleX", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVoxelBasicSpawnerScaleSettings, ScaleX), Z_Construct_UScriptStruct_FFloatInterval, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScaleX_MetaData), NewProp_ScaleX_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVoxelBasicSpawnerScaleSettings_Statics::NewProp_ScaleY = { "ScaleY", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVoxelBasicSpawnerScaleSettings, ScaleY), Z_Construct_UScriptStruct_FFloatInterval, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScaleY_MetaData), NewProp_ScaleY_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVoxelBasicSpawnerScaleSettings_Statics::NewProp_ScaleZ = { "ScaleZ", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVoxelBasicSpawnerScaleSettings, ScaleZ), Z_Construct_UScriptStruct_FFloatInterval, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScaleZ_MetaData), NewProp_ScaleZ_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVoxelBasicSpawnerScaleSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelBasicSpawnerScaleSettings_Statics::NewProp_Scaling_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelBasicSpawnerScaleSettings_Statics::NewProp_Scaling,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelBasicSpawnerScaleSettings_Statics::NewProp_ScaleX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelBasicSpawnerScaleSettings_Statics::NewProp_ScaleY,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelBasicSpawnerScaleSettings_Statics::NewProp_ScaleZ,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelBasicSpawnerScaleSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVoxelBasicSpawnerScaleSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
	nullptr,
	&NewStructOps,
	"VoxelBasicSpawnerScaleSettings",
	Z_Construct_UScriptStruct_FVoxelBasicSpawnerScaleSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelBasicSpawnerScaleSettings_Statics::PropPointers),
	sizeof(FVoxelBasicSpawnerScaleSettings),
	alignof(FVoxelBasicSpawnerScaleSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelBasicSpawnerScaleSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVoxelBasicSpawnerScaleSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FVoxelBasicSpawnerScaleSettings()
{
	if (!Z_Registration_Info_UScriptStruct_FVoxelBasicSpawnerScaleSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FVoxelBasicSpawnerScaleSettings.InnerSingleton, Z_Construct_UScriptStruct_FVoxelBasicSpawnerScaleSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FVoxelBasicSpawnerScaleSettings.InnerSingleton;
}
// ********** End ScriptStruct FVoxelBasicSpawnerScaleSettings *************************************

// ********** Begin Enum EVoxelBasicSpawnerRotation ************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EVoxelBasicSpawnerRotation;
static UEnum* EVoxelBasicSpawnerRotation_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EVoxelBasicSpawnerRotation.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EVoxelBasicSpawnerRotation.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Voxel_EVoxelBasicSpawnerRotation, (UObject*)Z_Construct_UPackage__Script_Voxel(), TEXT("EVoxelBasicSpawnerRotation"));
	}
	return Z_Registration_Info_UEnum_EVoxelBasicSpawnerRotation.OuterSingleton;
}
template<> VOXEL_API UEnum* StaticEnum<EVoxelBasicSpawnerRotation>()
{
	return EVoxelBasicSpawnerRotation_StaticEnum();
}
struct Z_Construct_UEnum_Voxel_EVoxelBasicSpawnerRotation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "AlignToSurface.Name", "EVoxelBasicSpawnerRotation::AlignToSurface" },
		{ "AlignToWorldUp.Name", "EVoxelBasicSpawnerRotation::AlignToWorldUp" },
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelBasicSpawner.h" },
		{ "RandomAlign.Name", "EVoxelBasicSpawnerRotation::RandomAlign" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EVoxelBasicSpawnerRotation::AlignToSurface", (int64)EVoxelBasicSpawnerRotation::AlignToSurface },
		{ "EVoxelBasicSpawnerRotation::AlignToWorldUp", (int64)EVoxelBasicSpawnerRotation::AlignToWorldUp },
		{ "EVoxelBasicSpawnerRotation::RandomAlign", (int64)EVoxelBasicSpawnerRotation::RandomAlign },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Voxel_EVoxelBasicSpawnerRotation_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Voxel,
	nullptr,
	"EVoxelBasicSpawnerRotation",
	"EVoxelBasicSpawnerRotation",
	Z_Construct_UEnum_Voxel_EVoxelBasicSpawnerRotation_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Voxel_EVoxelBasicSpawnerRotation_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Voxel_EVoxelBasicSpawnerRotation_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Voxel_EVoxelBasicSpawnerRotation_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Voxel_EVoxelBasicSpawnerRotation()
{
	if (!Z_Registration_Info_UEnum_EVoxelBasicSpawnerRotation.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EVoxelBasicSpawnerRotation.InnerSingleton, Z_Construct_UEnum_Voxel_EVoxelBasicSpawnerRotation_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EVoxelBasicSpawnerRotation.InnerSingleton;
}
// ********** End Enum EVoxelBasicSpawnerRotation **************************************************

// ********** Begin Class UVoxelBasicSpawner *******************************************************
void UVoxelBasicSpawner::StaticRegisterNativesUVoxelBasicSpawner()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UVoxelBasicSpawner;
UClass* UVoxelBasicSpawner::GetPrivateStaticClass()
{
	using TClass = UVoxelBasicSpawner;
	if (!Z_Registration_Info_UClass_UVoxelBasicSpawner.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("VoxelBasicSpawner"),
			Z_Registration_Info_UClass_UVoxelBasicSpawner.InnerSingleton,
			StaticRegisterNativesUVoxelBasicSpawner,
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
	return Z_Registration_Info_UClass_UVoxelBasicSpawner.InnerSingleton;
}
UClass* Z_Construct_UClass_UVoxelBasicSpawner_NoRegister()
{
	return UVoxelBasicSpawner::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UVoxelBasicSpawner_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "VoxelSpawners/VoxelBasicSpawner.h" },
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelBasicSpawner.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GroundSlopeAngle_MetaData[] = {
		{ "Category", "Placement" },
		{ "ClampMax", "180" },
		{ "ClampMin", "0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Min/max angle between object up vector and generator up vector in degrees\n" },
#endif
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelBasicSpawner.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Min/max angle between object up vector and generator up vector in degrees" },
#endif
		{ "UIMax", "180" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableHeightRestriction_MetaData[] = {
		{ "Category", "Placement" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelBasicSpawner.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HeightRestriction_MetaData[] = {
		{ "Category", "Placement" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// In voxels. Only spawn instances if the instance voxel Z position is in this interval.\n// TODO: optimize to not generate chunks that do not match this restriction\n" },
#endif
		{ "EditCondition", "bEnableHeightRestriction" },
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelBasicSpawner.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "In voxels. Only spawn instances if the instance voxel Z position is in this interval.\nTODO: optimize to not generate chunks that do not match this restriction" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HeightRestrictionFalloff_MetaData[] = {
		{ "Category", "Placement" },
		{ "ClampMin", "0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// In voxels, the size of the fade on the edges of HeightRestriction\n" },
#endif
		{ "EditCondition", "bEnableHeightRestriction" },
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelBasicSpawner.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "In voxels, the size of the fade on the edges of HeightRestriction" },
#endif
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Scaling_MetaData[] = {
		{ "Category", "Placement - Scale" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Specifies instance scaling type\n" },
#endif
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelBasicSpawner.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Specifies instance scaling type" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotationAlignment_MetaData[] = {
		{ "Category", "Placement - Rotation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Vertical to use for the instances\n" },
#endif
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelBasicSpawner.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Vertical to use for the instances" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRandomYaw_MetaData[] = {
		{ "Category", "Placement - Rotation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// If selected, foliage instances will have a random yaw rotation around their vertical axis applied\n" },
#endif
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelBasicSpawner.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If selected, foliage instances will have a random yaw rotation around their vertical axis applied" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RandomPitchAngle_MetaData[] = {
		{ "Category", "Placement - Rotation" },
		{ "ClampMax", "180" },
		{ "ClampMin", "0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// A random pitch adjustment can be applied to each instance, up to the specified angle in degrees, from the original vertical\n" },
#endif
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelBasicSpawner.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A random pitch adjustment can be applied to each instance, up to the specified angle in degrees, from the original vertical" },
#endif
		{ "UIMax", "180" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocalPositionOffset_MetaData[] = {
		{ "Category", "Placement - Offset" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Apply an offset to the instance position. Applied before the rotation. In cm\n" },
#endif
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelBasicSpawner.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Apply an offset to the instance position. Applied before the rotation. In cm" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocalRotationOffset_MetaData[] = {
		{ "Category", "Placement - Offset" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Apply an offset to the instance rotation. Applied after the local position offset, and before the rotation\n" },
#endif
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelBasicSpawner.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Apply an offset to the instance rotation. Applied after the local position offset, and before the rotation" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GlobalPositionOffset_MetaData[] = {
		{ "Category", "Placement - Offset" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Apply an offset to the instance position. Applied after the rotation. In cm\n" },
#endif
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelBasicSpawner.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Apply an offset to the instance position. Applied after the rotation. In cm" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_GroundSlopeAngle;
	static void NewProp_bEnableHeightRestriction_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableHeightRestriction;
	static const UECodeGen_Private::FStructPropertyParams NewProp_HeightRestriction;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HeightRestrictionFalloff;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Scaling;
	static const UECodeGen_Private::FBytePropertyParams NewProp_RotationAlignment_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_RotationAlignment;
	static void NewProp_bRandomYaw_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRandomYaw;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RandomPitchAngle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LocalPositionOffset;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LocalRotationOffset;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GlobalPositionOffset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelBasicSpawner>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVoxelBasicSpawner_Statics::NewProp_GroundSlopeAngle = { "GroundSlopeAngle", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelBasicSpawner, GroundSlopeAngle), Z_Construct_UScriptStruct_FFloatInterval, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GroundSlopeAngle_MetaData), NewProp_GroundSlopeAngle_MetaData) };
void Z_Construct_UClass_UVoxelBasicSpawner_Statics::NewProp_bEnableHeightRestriction_SetBit(void* Obj)
{
	((UVoxelBasicSpawner*)Obj)->bEnableHeightRestriction = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVoxelBasicSpawner_Statics::NewProp_bEnableHeightRestriction = { "bEnableHeightRestriction", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UVoxelBasicSpawner), &Z_Construct_UClass_UVoxelBasicSpawner_Statics::NewProp_bEnableHeightRestriction_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableHeightRestriction_MetaData), NewProp_bEnableHeightRestriction_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVoxelBasicSpawner_Statics::NewProp_HeightRestriction = { "HeightRestriction", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelBasicSpawner, HeightRestriction), Z_Construct_UScriptStruct_FFloatInterval, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HeightRestriction_MetaData), NewProp_HeightRestriction_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVoxelBasicSpawner_Statics::NewProp_HeightRestrictionFalloff = { "HeightRestrictionFalloff", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelBasicSpawner, HeightRestrictionFalloff), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HeightRestrictionFalloff_MetaData), NewProp_HeightRestrictionFalloff_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVoxelBasicSpawner_Statics::NewProp_Scaling = { "Scaling", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelBasicSpawner, Scaling), Z_Construct_UScriptStruct_FVoxelBasicSpawnerScaleSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Scaling_MetaData), NewProp_Scaling_MetaData) }; // 2185906030
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UVoxelBasicSpawner_Statics::NewProp_RotationAlignment_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UVoxelBasicSpawner_Statics::NewProp_RotationAlignment = { "RotationAlignment", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelBasicSpawner, RotationAlignment), Z_Construct_UEnum_Voxel_EVoxelBasicSpawnerRotation, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotationAlignment_MetaData), NewProp_RotationAlignment_MetaData) }; // 4124335359
void Z_Construct_UClass_UVoxelBasicSpawner_Statics::NewProp_bRandomYaw_SetBit(void* Obj)
{
	((UVoxelBasicSpawner*)Obj)->bRandomYaw = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVoxelBasicSpawner_Statics::NewProp_bRandomYaw = { "bRandomYaw", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UVoxelBasicSpawner), &Z_Construct_UClass_UVoxelBasicSpawner_Statics::NewProp_bRandomYaw_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRandomYaw_MetaData), NewProp_bRandomYaw_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVoxelBasicSpawner_Statics::NewProp_RandomPitchAngle = { "RandomPitchAngle", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelBasicSpawner, RandomPitchAngle), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RandomPitchAngle_MetaData), NewProp_RandomPitchAngle_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVoxelBasicSpawner_Statics::NewProp_LocalPositionOffset = { "LocalPositionOffset", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelBasicSpawner, LocalPositionOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocalPositionOffset_MetaData), NewProp_LocalPositionOffset_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVoxelBasicSpawner_Statics::NewProp_LocalRotationOffset = { "LocalRotationOffset", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelBasicSpawner, LocalRotationOffset), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocalRotationOffset_MetaData), NewProp_LocalRotationOffset_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVoxelBasicSpawner_Statics::NewProp_GlobalPositionOffset = { "GlobalPositionOffset", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelBasicSpawner, GlobalPositionOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GlobalPositionOffset_MetaData), NewProp_GlobalPositionOffset_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelBasicSpawner_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelBasicSpawner_Statics::NewProp_GroundSlopeAngle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelBasicSpawner_Statics::NewProp_bEnableHeightRestriction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelBasicSpawner_Statics::NewProp_HeightRestriction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelBasicSpawner_Statics::NewProp_HeightRestrictionFalloff,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelBasicSpawner_Statics::NewProp_Scaling,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelBasicSpawner_Statics::NewProp_RotationAlignment_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelBasicSpawner_Statics::NewProp_RotationAlignment,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelBasicSpawner_Statics::NewProp_bRandomYaw,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelBasicSpawner_Statics::NewProp_RandomPitchAngle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelBasicSpawner_Statics::NewProp_LocalPositionOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelBasicSpawner_Statics::NewProp_LocalRotationOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelBasicSpawner_Statics::NewProp_GlobalPositionOffset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelBasicSpawner_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UVoxelBasicSpawner_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UVoxelSpawner,
	(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelBasicSpawner_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelBasicSpawner_Statics::ClassParams = {
	&UVoxelBasicSpawner::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UVoxelBasicSpawner_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelBasicSpawner_Statics::PropPointers),
	0,
	0x001000A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelBasicSpawner_Statics::Class_MetaDataParams), Z_Construct_UClass_UVoxelBasicSpawner_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVoxelBasicSpawner()
{
	if (!Z_Registration_Info_UClass_UVoxelBasicSpawner.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelBasicSpawner.OuterSingleton, Z_Construct_UClass_UVoxelBasicSpawner_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVoxelBasicSpawner.OuterSingleton;
}
UVoxelBasicSpawner::UVoxelBasicSpawner(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelBasicSpawner);
UVoxelBasicSpawner::~UVoxelBasicSpawner() {}
// ********** End Class UVoxelBasicSpawner *********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelSpawners_VoxelBasicSpawner_h__Script_Voxel_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EVoxelBasicSpawnerScaling_StaticEnum, TEXT("EVoxelBasicSpawnerScaling"), &Z_Registration_Info_UEnum_EVoxelBasicSpawnerScaling, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1321767054U) },
		{ EVoxelBasicSpawnerRotation_StaticEnum, TEXT("EVoxelBasicSpawnerRotation"), &Z_Registration_Info_UEnum_EVoxelBasicSpawnerRotation, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4124335359U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FVoxelBasicSpawnerScaleSettings::StaticStruct, Z_Construct_UScriptStruct_FVoxelBasicSpawnerScaleSettings_Statics::NewStructOps, TEXT("VoxelBasicSpawnerScaleSettings"), &Z_Registration_Info_UScriptStruct_FVoxelBasicSpawnerScaleSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVoxelBasicSpawnerScaleSettings), 2185906030U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UVoxelBasicSpawner, UVoxelBasicSpawner::StaticClass, TEXT("UVoxelBasicSpawner"), &Z_Registration_Info_UClass_UVoxelBasicSpawner, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelBasicSpawner), 1292261681U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelSpawners_VoxelBasicSpawner_h__Script_Voxel_1896227946(TEXT("/Script/Voxel"),
	Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelSpawners_VoxelBasicSpawner_h__Script_Voxel_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelSpawners_VoxelBasicSpawner_h__Script_Voxel_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelSpawners_VoxelBasicSpawner_h__Script_Voxel_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelSpawners_VoxelBasicSpawner_h__Script_Voxel_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelSpawners_VoxelBasicSpawner_h__Script_Voxel_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelSpawners_VoxelBasicSpawner_h__Script_Voxel_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
