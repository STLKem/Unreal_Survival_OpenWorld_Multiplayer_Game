// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Voxel/Public/VoxelGenerators/VoxelGeneratorParameters.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeVoxelGeneratorParameters() {}

// ********** Begin Cross Module References ********************************************************
UPackage* Z_Construct_UPackage__Script_Voxel();
VOXEL_API UEnum* Z_Construct_UEnum_Voxel_EVoxelGeneratorParameterContainerType();
VOXEL_API UEnum* Z_Construct_UEnum_Voxel_EVoxelGeneratorParameterPropertyType();
VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelGeneratorParameter();
VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelGeneratorParameterTerminalType();
VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelGeneratorParameterType();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EVoxelGeneratorParameterContainerType *************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EVoxelGeneratorParameterContainerType;
static UEnum* EVoxelGeneratorParameterContainerType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EVoxelGeneratorParameterContainerType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EVoxelGeneratorParameterContainerType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Voxel_EVoxelGeneratorParameterContainerType, (UObject*)Z_Construct_UPackage__Script_Voxel(), TEXT("EVoxelGeneratorParameterContainerType"));
	}
	return Z_Registration_Info_UEnum_EVoxelGeneratorParameterContainerType.OuterSingleton;
}
template<> VOXEL_API UEnum* StaticEnum<EVoxelGeneratorParameterContainerType>()
{
	return EVoxelGeneratorParameterContainerType_StaticEnum();
}
struct Z_Construct_UEnum_Voxel_EVoxelGeneratorParameterContainerType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Array.Name", "EVoxelGeneratorParameterContainerType::Array" },
		{ "Map.Name", "EVoxelGeneratorParameterContainerType::Map" },
		{ "ModuleRelativePath", "Public/VoxelGenerators/VoxelGeneratorParameters.h" },
		{ "None.Name", "EVoxelGeneratorParameterContainerType::None" },
		{ "Set.Name", "EVoxelGeneratorParameterContainerType::Set" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EVoxelGeneratorParameterContainerType::None", (int64)EVoxelGeneratorParameterContainerType::None },
		{ "EVoxelGeneratorParameterContainerType::Array", (int64)EVoxelGeneratorParameterContainerType::Array },
		{ "EVoxelGeneratorParameterContainerType::Set", (int64)EVoxelGeneratorParameterContainerType::Set },
		{ "EVoxelGeneratorParameterContainerType::Map", (int64)EVoxelGeneratorParameterContainerType::Map },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Voxel_EVoxelGeneratorParameterContainerType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Voxel,
	nullptr,
	"EVoxelGeneratorParameterContainerType",
	"EVoxelGeneratorParameterContainerType",
	Z_Construct_UEnum_Voxel_EVoxelGeneratorParameterContainerType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Voxel_EVoxelGeneratorParameterContainerType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Voxel_EVoxelGeneratorParameterContainerType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Voxel_EVoxelGeneratorParameterContainerType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Voxel_EVoxelGeneratorParameterContainerType()
{
	if (!Z_Registration_Info_UEnum_EVoxelGeneratorParameterContainerType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EVoxelGeneratorParameterContainerType.InnerSingleton, Z_Construct_UEnum_Voxel_EVoxelGeneratorParameterContainerType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EVoxelGeneratorParameterContainerType.InnerSingleton;
}
// ********** End Enum EVoxelGeneratorParameterContainerType ***************************************

// ********** Begin Enum EVoxelGeneratorParameterPropertyType **************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EVoxelGeneratorParameterPropertyType;
static UEnum* EVoxelGeneratorParameterPropertyType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EVoxelGeneratorParameterPropertyType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EVoxelGeneratorParameterPropertyType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Voxel_EVoxelGeneratorParameterPropertyType, (UObject*)Z_Construct_UPackage__Script_Voxel(), TEXT("EVoxelGeneratorParameterPropertyType"));
	}
	return Z_Registration_Info_UEnum_EVoxelGeneratorParameterPropertyType.OuterSingleton;
}
template<> VOXEL_API UEnum* StaticEnum<EVoxelGeneratorParameterPropertyType>()
{
	return EVoxelGeneratorParameterPropertyType_StaticEnum();
}
struct Z_Construct_UEnum_Voxel_EVoxelGeneratorParameterPropertyType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Bool.Name", "EVoxelGeneratorParameterPropertyType::Bool" },
		{ "Float.Name", "EVoxelGeneratorParameterPropertyType::Float" },
		{ "Int.Name", "EVoxelGeneratorParameterPropertyType::Int" },
		{ "ModuleRelativePath", "Public/VoxelGenerators/VoxelGeneratorParameters.h" },
		{ "Object.Name", "EVoxelGeneratorParameterPropertyType::Object" },
		{ "Struct.Name", "EVoxelGeneratorParameterPropertyType::Struct" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EVoxelGeneratorParameterPropertyType::Float", (int64)EVoxelGeneratorParameterPropertyType::Float },
		{ "EVoxelGeneratorParameterPropertyType::Int", (int64)EVoxelGeneratorParameterPropertyType::Int },
		{ "EVoxelGeneratorParameterPropertyType::Bool", (int64)EVoxelGeneratorParameterPropertyType::Bool },
		{ "EVoxelGeneratorParameterPropertyType::Object", (int64)EVoxelGeneratorParameterPropertyType::Object },
		{ "EVoxelGeneratorParameterPropertyType::Struct", (int64)EVoxelGeneratorParameterPropertyType::Struct },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Voxel_EVoxelGeneratorParameterPropertyType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Voxel,
	nullptr,
	"EVoxelGeneratorParameterPropertyType",
	"EVoxelGeneratorParameterPropertyType",
	Z_Construct_UEnum_Voxel_EVoxelGeneratorParameterPropertyType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Voxel_EVoxelGeneratorParameterPropertyType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Voxel_EVoxelGeneratorParameterPropertyType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Voxel_EVoxelGeneratorParameterPropertyType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Voxel_EVoxelGeneratorParameterPropertyType()
{
	if (!Z_Registration_Info_UEnum_EVoxelGeneratorParameterPropertyType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EVoxelGeneratorParameterPropertyType.InnerSingleton, Z_Construct_UEnum_Voxel_EVoxelGeneratorParameterPropertyType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EVoxelGeneratorParameterPropertyType.InnerSingleton;
}
// ********** End Enum EVoxelGeneratorParameterPropertyType ****************************************

// ********** Begin ScriptStruct FVoxelGeneratorParameterTerminalType ******************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FVoxelGeneratorParameterTerminalType;
class UScriptStruct* FVoxelGeneratorParameterTerminalType::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FVoxelGeneratorParameterTerminalType.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FVoxelGeneratorParameterTerminalType.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVoxelGeneratorParameterTerminalType, (UObject*)Z_Construct_UPackage__Script_Voxel(), TEXT("VoxelGeneratorParameterTerminalType"));
	}
	return Z_Registration_Info_UScriptStruct_FVoxelGeneratorParameterTerminalType.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FVoxelGeneratorParameterTerminalType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/VoxelGenerators/VoxelGeneratorParameters.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PropertyType_MetaData[] = {
		{ "Category", "Parameter" },
		{ "ModuleRelativePath", "Public/VoxelGenerators/VoxelGeneratorParameters.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PropertyClass_MetaData[] = {
		{ "Category", "Parameter" },
		{ "ModuleRelativePath", "Public/VoxelGenerators/VoxelGeneratorParameters.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_PropertyType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_PropertyType;
	static const UECodeGen_Private::FNamePropertyParams NewProp_PropertyClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVoxelGeneratorParameterTerminalType>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FVoxelGeneratorParameterTerminalType_Statics::NewProp_PropertyType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FVoxelGeneratorParameterTerminalType_Statics::NewProp_PropertyType = { "PropertyType", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVoxelGeneratorParameterTerminalType, PropertyType), Z_Construct_UEnum_Voxel_EVoxelGeneratorParameterPropertyType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PropertyType_MetaData), NewProp_PropertyType_MetaData) }; // 1117445954
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FVoxelGeneratorParameterTerminalType_Statics::NewProp_PropertyClass = { "PropertyClass", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVoxelGeneratorParameterTerminalType, PropertyClass), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PropertyClass_MetaData), NewProp_PropertyClass_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVoxelGeneratorParameterTerminalType_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelGeneratorParameterTerminalType_Statics::NewProp_PropertyType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelGeneratorParameterTerminalType_Statics::NewProp_PropertyType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelGeneratorParameterTerminalType_Statics::NewProp_PropertyClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelGeneratorParameterTerminalType_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVoxelGeneratorParameterTerminalType_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
	nullptr,
	&NewStructOps,
	"VoxelGeneratorParameterTerminalType",
	Z_Construct_UScriptStruct_FVoxelGeneratorParameterTerminalType_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelGeneratorParameterTerminalType_Statics::PropPointers),
	sizeof(FVoxelGeneratorParameterTerminalType),
	alignof(FVoxelGeneratorParameterTerminalType),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelGeneratorParameterTerminalType_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVoxelGeneratorParameterTerminalType_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FVoxelGeneratorParameterTerminalType()
{
	if (!Z_Registration_Info_UScriptStruct_FVoxelGeneratorParameterTerminalType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FVoxelGeneratorParameterTerminalType.InnerSingleton, Z_Construct_UScriptStruct_FVoxelGeneratorParameterTerminalType_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FVoxelGeneratorParameterTerminalType.InnerSingleton;
}
// ********** End ScriptStruct FVoxelGeneratorParameterTerminalType ********************************

// ********** Begin ScriptStruct FVoxelGeneratorParameterType **************************************
static_assert(std::is_polymorphic<FVoxelGeneratorParameterType>() == std::is_polymorphic<FVoxelGeneratorParameterTerminalType>(), "USTRUCT FVoxelGeneratorParameterType cannot be polymorphic unless super FVoxelGeneratorParameterTerminalType is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FVoxelGeneratorParameterType;
class UScriptStruct* FVoxelGeneratorParameterType::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FVoxelGeneratorParameterType.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FVoxelGeneratorParameterType.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVoxelGeneratorParameterType, (UObject*)Z_Construct_UPackage__Script_Voxel(), TEXT("VoxelGeneratorParameterType"));
	}
	return Z_Registration_Info_UScriptStruct_FVoxelGeneratorParameterType.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FVoxelGeneratorParameterType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/VoxelGenerators/VoxelGeneratorParameters.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ContainerType_MetaData[] = {
		{ "Category", "Parameter" },
		{ "ModuleRelativePath", "Public/VoxelGenerators/VoxelGeneratorParameters.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ValueType_MetaData[] = {
		{ "Category", "Parameter" },
		{ "Comment", "// For maps\n" },
		{ "ModuleRelativePath", "Public/VoxelGenerators/VoxelGeneratorParameters.h" },
		{ "ToolTip", "For maps" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ContainerType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ContainerType;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ValueType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVoxelGeneratorParameterType>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FVoxelGeneratorParameterType_Statics::NewProp_ContainerType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FVoxelGeneratorParameterType_Statics::NewProp_ContainerType = { "ContainerType", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVoxelGeneratorParameterType, ContainerType), Z_Construct_UEnum_Voxel_EVoxelGeneratorParameterContainerType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ContainerType_MetaData), NewProp_ContainerType_MetaData) }; // 1298731236
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVoxelGeneratorParameterType_Statics::NewProp_ValueType = { "ValueType", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVoxelGeneratorParameterType, ValueType), Z_Construct_UScriptStruct_FVoxelGeneratorParameterTerminalType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ValueType_MetaData), NewProp_ValueType_MetaData) }; // 3130393856
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVoxelGeneratorParameterType_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelGeneratorParameterType_Statics::NewProp_ContainerType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelGeneratorParameterType_Statics::NewProp_ContainerType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelGeneratorParameterType_Statics::NewProp_ValueType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelGeneratorParameterType_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVoxelGeneratorParameterType_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
	Z_Construct_UScriptStruct_FVoxelGeneratorParameterTerminalType,
	&NewStructOps,
	"VoxelGeneratorParameterType",
	Z_Construct_UScriptStruct_FVoxelGeneratorParameterType_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelGeneratorParameterType_Statics::PropPointers),
	sizeof(FVoxelGeneratorParameterType),
	alignof(FVoxelGeneratorParameterType),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelGeneratorParameterType_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVoxelGeneratorParameterType_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FVoxelGeneratorParameterType()
{
	if (!Z_Registration_Info_UScriptStruct_FVoxelGeneratorParameterType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FVoxelGeneratorParameterType.InnerSingleton, Z_Construct_UScriptStruct_FVoxelGeneratorParameterType_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FVoxelGeneratorParameterType.InnerSingleton;
}
// ********** End ScriptStruct FVoxelGeneratorParameterType ****************************************

// ********** Begin ScriptStruct FVoxelGeneratorParameter ******************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FVoxelGeneratorParameter;
class UScriptStruct* FVoxelGeneratorParameter::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FVoxelGeneratorParameter.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FVoxelGeneratorParameter.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVoxelGeneratorParameter, (UObject*)Z_Construct_UPackage__Script_Voxel(), TEXT("VoxelGeneratorParameter"));
	}
	return Z_Registration_Info_UScriptStruct_FVoxelGeneratorParameter.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FVoxelGeneratorParameter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/VoxelGenerators/VoxelGeneratorParameters.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Id_MetaData[] = {
		{ "Category", "Parameter" },
		{ "ModuleRelativePath", "Public/VoxelGenerators/VoxelGeneratorParameters.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[] = {
		{ "Category", "Parameter" },
		{ "ModuleRelativePath", "Public/VoxelGenerators/VoxelGeneratorParameters.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "Category", "Parameter" },
		{ "Comment", "// Not consistent with vs without editor\n" },
		{ "ModuleRelativePath", "Public/VoxelGenerators/VoxelGeneratorParameters.h" },
		{ "ToolTip", "Not consistent with vs without editor" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Category_MetaData[] = {
		{ "Category", "Parameter" },
		{ "ModuleRelativePath", "Public/VoxelGenerators/VoxelGeneratorParameters.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ToolTip_MetaData[] = {
		{ "Category", "Parameter" },
		{ "ModuleRelativePath", "Public/VoxelGenerators/VoxelGeneratorParameters.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Priority_MetaData[] = {
		{ "Category", "Parameter" },
		{ "ModuleRelativePath", "Public/VoxelGenerators/VoxelGeneratorParameters.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MetaData_MetaData[] = {
		{ "Category", "Parameter" },
		{ "ModuleRelativePath", "Public/VoxelGenerators/VoxelGeneratorParameters.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultValue_MetaData[] = {
		{ "Category", "Parameter" },
		{ "ModuleRelativePath", "Public/VoxelGenerators/VoxelGeneratorParameters.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Id;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Type;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Category;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ToolTip;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Priority;
	static const UECodeGen_Private::FStrPropertyParams NewProp_MetaData_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_MetaData_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_MetaData;
	static const UECodeGen_Private::FStrPropertyParams NewProp_DefaultValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVoxelGeneratorParameter>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FVoxelGeneratorParameter_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVoxelGeneratorParameter, Id), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Id_MetaData), NewProp_Id_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVoxelGeneratorParameter_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVoxelGeneratorParameter, Type), Z_Construct_UScriptStruct_FVoxelGeneratorParameterType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Type_MetaData), NewProp_Type_MetaData) }; // 2507212961
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FVoxelGeneratorParameter_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVoxelGeneratorParameter, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FVoxelGeneratorParameter_Statics::NewProp_Category = { "Category", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVoxelGeneratorParameter, Category), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Category_MetaData), NewProp_Category_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FVoxelGeneratorParameter_Statics::NewProp_ToolTip = { "ToolTip", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVoxelGeneratorParameter, ToolTip), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ToolTip_MetaData), NewProp_ToolTip_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FVoxelGeneratorParameter_Statics::NewProp_Priority = { "Priority", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVoxelGeneratorParameter, Priority), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Priority_MetaData), NewProp_Priority_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FVoxelGeneratorParameter_Statics::NewProp_MetaData_ValueProp = { "MetaData", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FVoxelGeneratorParameter_Statics::NewProp_MetaData_Key_KeyProp = { "MetaData_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FVoxelGeneratorParameter_Statics::NewProp_MetaData = { "MetaData", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVoxelGeneratorParameter, MetaData), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MetaData_MetaData), NewProp_MetaData_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FVoxelGeneratorParameter_Statics::NewProp_DefaultValue = { "DefaultValue", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVoxelGeneratorParameter, DefaultValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultValue_MetaData), NewProp_DefaultValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVoxelGeneratorParameter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelGeneratorParameter_Statics::NewProp_Id,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelGeneratorParameter_Statics::NewProp_Type,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelGeneratorParameter_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelGeneratorParameter_Statics::NewProp_Category,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelGeneratorParameter_Statics::NewProp_ToolTip,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelGeneratorParameter_Statics::NewProp_Priority,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelGeneratorParameter_Statics::NewProp_MetaData_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelGeneratorParameter_Statics::NewProp_MetaData_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelGeneratorParameter_Statics::NewProp_MetaData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelGeneratorParameter_Statics::NewProp_DefaultValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelGeneratorParameter_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVoxelGeneratorParameter_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
	nullptr,
	&NewStructOps,
	"VoxelGeneratorParameter",
	Z_Construct_UScriptStruct_FVoxelGeneratorParameter_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelGeneratorParameter_Statics::PropPointers),
	sizeof(FVoxelGeneratorParameter),
	alignof(FVoxelGeneratorParameter),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelGeneratorParameter_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVoxelGeneratorParameter_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FVoxelGeneratorParameter()
{
	if (!Z_Registration_Info_UScriptStruct_FVoxelGeneratorParameter.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FVoxelGeneratorParameter.InnerSingleton, Z_Construct_UScriptStruct_FVoxelGeneratorParameter_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FVoxelGeneratorParameter.InnerSingleton;
}
// ********** End ScriptStruct FVoxelGeneratorParameter ********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelGenerators_VoxelGeneratorParameters_h__Script_Voxel_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EVoxelGeneratorParameterContainerType_StaticEnum, TEXT("EVoxelGeneratorParameterContainerType"), &Z_Registration_Info_UEnum_EVoxelGeneratorParameterContainerType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1298731236U) },
		{ EVoxelGeneratorParameterPropertyType_StaticEnum, TEXT("EVoxelGeneratorParameterPropertyType"), &Z_Registration_Info_UEnum_EVoxelGeneratorParameterPropertyType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1117445954U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FVoxelGeneratorParameterTerminalType::StaticStruct, Z_Construct_UScriptStruct_FVoxelGeneratorParameterTerminalType_Statics::NewStructOps, TEXT("VoxelGeneratorParameterTerminalType"), &Z_Registration_Info_UScriptStruct_FVoxelGeneratorParameterTerminalType, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVoxelGeneratorParameterTerminalType), 3130393856U) },
		{ FVoxelGeneratorParameterType::StaticStruct, Z_Construct_UScriptStruct_FVoxelGeneratorParameterType_Statics::NewStructOps, TEXT("VoxelGeneratorParameterType"), &Z_Registration_Info_UScriptStruct_FVoxelGeneratorParameterType, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVoxelGeneratorParameterType), 2507212961U) },
		{ FVoxelGeneratorParameter::StaticStruct, Z_Construct_UScriptStruct_FVoxelGeneratorParameter_Statics::NewStructOps, TEXT("VoxelGeneratorParameter"), &Z_Registration_Info_UScriptStruct_FVoxelGeneratorParameter, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVoxelGeneratorParameter), 2519468682U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelGenerators_VoxelGeneratorParameters_h__Script_Voxel_706515941(TEXT("/Script/Voxel"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelGenerators_VoxelGeneratorParameters_h__Script_Voxel_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelGenerators_VoxelGeneratorParameters_h__Script_Voxel_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelGenerators_VoxelGeneratorParameters_h__Script_Voxel_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelGenerators_VoxelGeneratorParameters_h__Script_Voxel_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
