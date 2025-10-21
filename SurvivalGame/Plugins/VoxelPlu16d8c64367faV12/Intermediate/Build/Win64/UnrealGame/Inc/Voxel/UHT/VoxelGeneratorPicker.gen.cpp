// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Voxel/Public/VoxelGenerators/VoxelGeneratorPicker.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeVoxelGeneratorPicker() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
UPackage* Z_Construct_UPackage__Script_Voxel();
VOXEL_API UClass* Z_Construct_UClass_UVoxelGenerator_NoRegister();
VOXEL_API UClass* Z_Construct_UClass_UVoxelTransformableGenerator_NoRegister();
VOXEL_API UEnum* Z_Construct_UEnum_Voxel_EVoxelGeneratorPickerType();
VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelGeneratorPicker();
VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelTransformableGeneratorPicker();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EVoxelGeneratorPickerType *************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EVoxelGeneratorPickerType;
static UEnum* EVoxelGeneratorPickerType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EVoxelGeneratorPickerType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EVoxelGeneratorPickerType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Voxel_EVoxelGeneratorPickerType, (UObject*)Z_Construct_UPackage__Script_Voxel(), TEXT("EVoxelGeneratorPickerType"));
	}
	return Z_Registration_Info_UEnum_EVoxelGeneratorPickerType.OuterSingleton;
}
template<> VOXEL_API UEnum* StaticEnum<EVoxelGeneratorPickerType>()
{
	return EVoxelGeneratorPickerType_StaticEnum();
}
struct Z_Construct_UEnum_Voxel_EVoxelGeneratorPickerType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Class.Name", "EVoxelGeneratorPickerType::Class" },
		{ "ModuleRelativePath", "Public/VoxelGenerators/VoxelGeneratorPicker.h" },
		{ "Object.Name", "EVoxelGeneratorPickerType::Object" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EVoxelGeneratorPickerType::Class", (int64)EVoxelGeneratorPickerType::Class },
		{ "EVoxelGeneratorPickerType::Object", (int64)EVoxelGeneratorPickerType::Object },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Voxel_EVoxelGeneratorPickerType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Voxel,
	nullptr,
	"EVoxelGeneratorPickerType",
	"EVoxelGeneratorPickerType",
	Z_Construct_UEnum_Voxel_EVoxelGeneratorPickerType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Voxel_EVoxelGeneratorPickerType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Voxel_EVoxelGeneratorPickerType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Voxel_EVoxelGeneratorPickerType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Voxel_EVoxelGeneratorPickerType()
{
	if (!Z_Registration_Info_UEnum_EVoxelGeneratorPickerType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EVoxelGeneratorPickerType.InnerSingleton, Z_Construct_UEnum_Voxel_EVoxelGeneratorPickerType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EVoxelGeneratorPickerType.InnerSingleton;
}
// ********** End Enum EVoxelGeneratorPickerType ***************************************************

// ********** Begin ScriptStruct FVoxelGeneratorPicker *********************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FVoxelGeneratorPicker;
class UScriptStruct* FVoxelGeneratorPicker::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FVoxelGeneratorPicker.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FVoxelGeneratorPicker.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVoxelGeneratorPicker, (UObject*)Z_Construct_UPackage__Script_Voxel(), TEXT("VoxelGeneratorPicker"));
	}
	return Z_Registration_Info_UScriptStruct_FVoxelGeneratorPicker.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FVoxelGeneratorPicker_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HasNativeMake", "/Script/Voxel.VoxelGeneratorTools:MakeGeneratorPickerFromObject" },
		{ "ModuleRelativePath", "Public/VoxelGenerators/VoxelGeneratorPicker.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelGenerators/VoxelGeneratorPicker.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Class_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelGenerators/VoxelGeneratorPicker.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Object_MetaData[] = {
		{ "Category", "Voxel" },
		{ "DisallowedClasses", "/Script/VoxelGraph.VoxelGraphMacro" },
		{ "ModuleRelativePath", "Public/VoxelGenerators/VoxelGeneratorPicker.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Parameters_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelGenerators/VoxelGeneratorPicker.h" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EditorData_MetaData[] = {
		{ "ModuleRelativePath", "Public/VoxelGenerators/VoxelGeneratorPicker.h" },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
	static const UECodeGen_Private::FClassPropertyParams NewProp_Class;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Object;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Parameters_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Parameters_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_Parameters;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EditorData;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVoxelGeneratorPicker>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FVoxelGeneratorPicker_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FVoxelGeneratorPicker_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVoxelGeneratorPicker, Type), Z_Construct_UEnum_Voxel_EVoxelGeneratorPickerType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Type_MetaData), NewProp_Type_MetaData) }; // 2985398321
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FVoxelGeneratorPicker_Statics::NewProp_Class = { "Class", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVoxelGeneratorPicker, Class), Z_Construct_UClass_UClass, Z_Construct_UClass_UVoxelGenerator_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Class_MetaData), NewProp_Class_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FVoxelGeneratorPicker_Statics::NewProp_Object = { "Object", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVoxelGeneratorPicker, Object), Z_Construct_UClass_UVoxelGenerator_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Object_MetaData), NewProp_Object_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FVoxelGeneratorPicker_Statics::NewProp_Parameters_ValueProp = { "Parameters", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FVoxelGeneratorPicker_Statics::NewProp_Parameters_Key_KeyProp = { "Parameters_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FVoxelGeneratorPicker_Statics::NewProp_Parameters = { "Parameters", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVoxelGeneratorPicker, Parameters), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Parameters_MetaData), NewProp_Parameters_MetaData) };
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FVoxelGeneratorPicker_Statics::NewProp_EditorData = { "EditorData", nullptr, (EPropertyFlags)0x0114000800002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVoxelGeneratorPicker, EditorData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EditorData_MetaData), NewProp_EditorData_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVoxelGeneratorPicker_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelGeneratorPicker_Statics::NewProp_Type_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelGeneratorPicker_Statics::NewProp_Type,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelGeneratorPicker_Statics::NewProp_Class,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelGeneratorPicker_Statics::NewProp_Object,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelGeneratorPicker_Statics::NewProp_Parameters_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelGeneratorPicker_Statics::NewProp_Parameters_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelGeneratorPicker_Statics::NewProp_Parameters,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelGeneratorPicker_Statics::NewProp_EditorData,
#endif // WITH_EDITORONLY_DATA
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelGeneratorPicker_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVoxelGeneratorPicker_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
	nullptr,
	&NewStructOps,
	"VoxelGeneratorPicker",
	Z_Construct_UScriptStruct_FVoxelGeneratorPicker_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelGeneratorPicker_Statics::PropPointers),
	sizeof(FVoxelGeneratorPicker),
	alignof(FVoxelGeneratorPicker),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelGeneratorPicker_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVoxelGeneratorPicker_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FVoxelGeneratorPicker()
{
	if (!Z_Registration_Info_UScriptStruct_FVoxelGeneratorPicker.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FVoxelGeneratorPicker.InnerSingleton, Z_Construct_UScriptStruct_FVoxelGeneratorPicker_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FVoxelGeneratorPicker.InnerSingleton;
}
// ********** End ScriptStruct FVoxelGeneratorPicker ***********************************************

// ********** Begin ScriptStruct FVoxelTransformableGeneratorPicker ********************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FVoxelTransformableGeneratorPicker;
class UScriptStruct* FVoxelTransformableGeneratorPicker::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FVoxelTransformableGeneratorPicker.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FVoxelTransformableGeneratorPicker.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVoxelTransformableGeneratorPicker, (UObject*)Z_Construct_UPackage__Script_Voxel(), TEXT("VoxelTransformableGeneratorPicker"));
	}
	return Z_Registration_Info_UScriptStruct_FVoxelTransformableGeneratorPicker.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FVoxelTransformableGeneratorPicker_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HasNativeMake", "/Script/Voxel.VoxelGeneratorTools:MakeTransformableGeneratorPickerFromObject" },
		{ "ModuleRelativePath", "Public/VoxelGenerators/VoxelGeneratorPicker.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelGenerators/VoxelGeneratorPicker.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Class_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelGenerators/VoxelGeneratorPicker.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Object_MetaData[] = {
		{ "Category", "Voxel" },
		{ "DisallowedClasses", "/Script/VoxelGraph.VoxelGraphMacro" },
		{ "ModuleRelativePath", "Public/VoxelGenerators/VoxelGeneratorPicker.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Parameters_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelGenerators/VoxelGeneratorPicker.h" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EditorData_MetaData[] = {
		{ "ModuleRelativePath", "Public/VoxelGenerators/VoxelGeneratorPicker.h" },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
	static const UECodeGen_Private::FClassPropertyParams NewProp_Class;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Object;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Parameters_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Parameters_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_Parameters;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EditorData;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVoxelTransformableGeneratorPicker>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FVoxelTransformableGeneratorPicker_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FVoxelTransformableGeneratorPicker_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVoxelTransformableGeneratorPicker, Type), Z_Construct_UEnum_Voxel_EVoxelGeneratorPickerType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Type_MetaData), NewProp_Type_MetaData) }; // 2985398321
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FVoxelTransformableGeneratorPicker_Statics::NewProp_Class = { "Class", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVoxelTransformableGeneratorPicker, Class), Z_Construct_UClass_UClass, Z_Construct_UClass_UVoxelTransformableGenerator_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Class_MetaData), NewProp_Class_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FVoxelTransformableGeneratorPicker_Statics::NewProp_Object = { "Object", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVoxelTransformableGeneratorPicker, Object), Z_Construct_UClass_UVoxelTransformableGenerator_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Object_MetaData), NewProp_Object_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FVoxelTransformableGeneratorPicker_Statics::NewProp_Parameters_ValueProp = { "Parameters", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FVoxelTransformableGeneratorPicker_Statics::NewProp_Parameters_Key_KeyProp = { "Parameters_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FVoxelTransformableGeneratorPicker_Statics::NewProp_Parameters = { "Parameters", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVoxelTransformableGeneratorPicker, Parameters), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Parameters_MetaData), NewProp_Parameters_MetaData) };
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FVoxelTransformableGeneratorPicker_Statics::NewProp_EditorData = { "EditorData", nullptr, (EPropertyFlags)0x0114000800002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVoxelTransformableGeneratorPicker, EditorData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EditorData_MetaData), NewProp_EditorData_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVoxelTransformableGeneratorPicker_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelTransformableGeneratorPicker_Statics::NewProp_Type_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelTransformableGeneratorPicker_Statics::NewProp_Type,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelTransformableGeneratorPicker_Statics::NewProp_Class,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelTransformableGeneratorPicker_Statics::NewProp_Object,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelTransformableGeneratorPicker_Statics::NewProp_Parameters_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelTransformableGeneratorPicker_Statics::NewProp_Parameters_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelTransformableGeneratorPicker_Statics::NewProp_Parameters,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelTransformableGeneratorPicker_Statics::NewProp_EditorData,
#endif // WITH_EDITORONLY_DATA
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelTransformableGeneratorPicker_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVoxelTransformableGeneratorPicker_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
	nullptr,
	&NewStructOps,
	"VoxelTransformableGeneratorPicker",
	Z_Construct_UScriptStruct_FVoxelTransformableGeneratorPicker_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelTransformableGeneratorPicker_Statics::PropPointers),
	sizeof(FVoxelTransformableGeneratorPicker),
	alignof(FVoxelTransformableGeneratorPicker),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelTransformableGeneratorPicker_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVoxelTransformableGeneratorPicker_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FVoxelTransformableGeneratorPicker()
{
	if (!Z_Registration_Info_UScriptStruct_FVoxelTransformableGeneratorPicker.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FVoxelTransformableGeneratorPicker.InnerSingleton, Z_Construct_UScriptStruct_FVoxelTransformableGeneratorPicker_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FVoxelTransformableGeneratorPicker.InnerSingleton;
}
// ********** End ScriptStruct FVoxelTransformableGeneratorPicker **********************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelGenerators_VoxelGeneratorPicker_h__Script_Voxel_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EVoxelGeneratorPickerType_StaticEnum, TEXT("EVoxelGeneratorPickerType"), &Z_Registration_Info_UEnum_EVoxelGeneratorPickerType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2985398321U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FVoxelGeneratorPicker::StaticStruct, Z_Construct_UScriptStruct_FVoxelGeneratorPicker_Statics::NewStructOps, TEXT("VoxelGeneratorPicker"), &Z_Registration_Info_UScriptStruct_FVoxelGeneratorPicker, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVoxelGeneratorPicker), 3276742823U) },
		{ FVoxelTransformableGeneratorPicker::StaticStruct, Z_Construct_UScriptStruct_FVoxelTransformableGeneratorPicker_Statics::NewStructOps, TEXT("VoxelTransformableGeneratorPicker"), &Z_Registration_Info_UScriptStruct_FVoxelTransformableGeneratorPicker, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVoxelTransformableGeneratorPicker), 3102180178U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelGenerators_VoxelGeneratorPicker_h__Script_Voxel_3635983891(TEXT("/Script/Voxel"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelGenerators_VoxelGeneratorPicker_h__Script_Voxel_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelGenerators_VoxelGeneratorPicker_h__Script_Voxel_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelGenerators_VoxelGeneratorPicker_h__Script_Voxel_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_Voxel_Public_VoxelGenerators_VoxelGeneratorPicker_h__Script_Voxel_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
