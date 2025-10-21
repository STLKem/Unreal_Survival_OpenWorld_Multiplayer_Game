// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VoxelGraphShortcuts.h"
#include "InputCoreTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeVoxelGraphShortcuts() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
INPUTCORE_API UScriptStruct* Z_Construct_UScriptStruct_FKey();
UPackage* Z_Construct_UPackage__Script_VoxelGraphEditor();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_NoRegister();
VOXELGRAPHEDITOR_API UClass* Z_Construct_UClass_UVoxelGraphShortcuts();
VOXELGRAPHEDITOR_API UClass* Z_Construct_UClass_UVoxelGraphShortcuts_NoRegister();
VOXELGRAPHEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelGraphEditorKeyBinding();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FVoxelGraphEditorKeyBinding ***************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FVoxelGraphEditorKeyBinding;
class UScriptStruct* FVoxelGraphEditorKeyBinding::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FVoxelGraphEditorKeyBinding.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FVoxelGraphEditorKeyBinding.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVoxelGraphEditorKeyBinding, (UObject*)Z_Construct_UPackage__Script_VoxelGraphEditor(), TEXT("VoxelGraphEditorKeyBinding"));
	}
	return Z_Registration_Info_UScriptStruct_FVoxelGraphEditorKeyBinding.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FVoxelGraphEditorKeyBinding_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/VoxelGraphShortcuts.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCtrlDown_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Private/VoxelGraphShortcuts.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAltDown_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Private/VoxelGraphShortcuts.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShiftDown_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Private/VoxelGraphShortcuts.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Private/VoxelGraphShortcuts.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Class_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Private/VoxelGraphShortcuts.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bCtrlDown_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCtrlDown;
	static void NewProp_bAltDown_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAltDown;
	static void NewProp_bShiftDown_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShiftDown;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Key;
	static const UECodeGen_Private::FClassPropertyParams NewProp_Class;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVoxelGraphEditorKeyBinding>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FVoxelGraphEditorKeyBinding_Statics::NewProp_bCtrlDown_SetBit(void* Obj)
{
	((FVoxelGraphEditorKeyBinding*)Obj)->bCtrlDown = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVoxelGraphEditorKeyBinding_Statics::NewProp_bCtrlDown = { "bCtrlDown", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FVoxelGraphEditorKeyBinding), &Z_Construct_UScriptStruct_FVoxelGraphEditorKeyBinding_Statics::NewProp_bCtrlDown_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCtrlDown_MetaData), NewProp_bCtrlDown_MetaData) };
void Z_Construct_UScriptStruct_FVoxelGraphEditorKeyBinding_Statics::NewProp_bAltDown_SetBit(void* Obj)
{
	((FVoxelGraphEditorKeyBinding*)Obj)->bAltDown = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVoxelGraphEditorKeyBinding_Statics::NewProp_bAltDown = { "bAltDown", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FVoxelGraphEditorKeyBinding), &Z_Construct_UScriptStruct_FVoxelGraphEditorKeyBinding_Statics::NewProp_bAltDown_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAltDown_MetaData), NewProp_bAltDown_MetaData) };
void Z_Construct_UScriptStruct_FVoxelGraphEditorKeyBinding_Statics::NewProp_bShiftDown_SetBit(void* Obj)
{
	((FVoxelGraphEditorKeyBinding*)Obj)->bShiftDown = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVoxelGraphEditorKeyBinding_Statics::NewProp_bShiftDown = { "bShiftDown", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FVoxelGraphEditorKeyBinding), &Z_Construct_UScriptStruct_FVoxelGraphEditorKeyBinding_Statics::NewProp_bShiftDown_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShiftDown_MetaData), NewProp_bShiftDown_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVoxelGraphEditorKeyBinding_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVoxelGraphEditorKeyBinding, Key), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MetaData), NewProp_Key_MetaData) }; // 3982742631
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FVoxelGraphEditorKeyBinding_Statics::NewProp_Class = { "Class", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVoxelGraphEditorKeyBinding, Class), Z_Construct_UClass_UClass, Z_Construct_UClass_UVoxelNode_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Class_MetaData), NewProp_Class_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVoxelGraphEditorKeyBinding_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelGraphEditorKeyBinding_Statics::NewProp_bCtrlDown,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelGraphEditorKeyBinding_Statics::NewProp_bAltDown,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelGraphEditorKeyBinding_Statics::NewProp_bShiftDown,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelGraphEditorKeyBinding_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelGraphEditorKeyBinding_Statics::NewProp_Class,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelGraphEditorKeyBinding_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVoxelGraphEditorKeyBinding_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraphEditor,
	nullptr,
	&NewStructOps,
	"VoxelGraphEditorKeyBinding",
	Z_Construct_UScriptStruct_FVoxelGraphEditorKeyBinding_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelGraphEditorKeyBinding_Statics::PropPointers),
	sizeof(FVoxelGraphEditorKeyBinding),
	alignof(FVoxelGraphEditorKeyBinding),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelGraphEditorKeyBinding_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVoxelGraphEditorKeyBinding_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FVoxelGraphEditorKeyBinding()
{
	if (!Z_Registration_Info_UScriptStruct_FVoxelGraphEditorKeyBinding.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FVoxelGraphEditorKeyBinding.InnerSingleton, Z_Construct_UScriptStruct_FVoxelGraphEditorKeyBinding_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FVoxelGraphEditorKeyBinding.InnerSingleton;
}
// ********** End ScriptStruct FVoxelGraphEditorKeyBinding *****************************************

// ********** Begin Class UVoxelGraphShortcuts *****************************************************
void UVoxelGraphShortcuts::StaticRegisterNativesUVoxelGraphShortcuts()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UVoxelGraphShortcuts;
UClass* UVoxelGraphShortcuts::GetPrivateStaticClass()
{
	using TClass = UVoxelGraphShortcuts;
	if (!Z_Registration_Info_UClass_UVoxelGraphShortcuts.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("VoxelGraphShortcuts"),
			Z_Registration_Info_UClass_UVoxelGraphShortcuts.InnerSingleton,
			StaticRegisterNativesUVoxelGraphShortcuts,
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
	return Z_Registration_Info_UClass_UVoxelGraphShortcuts.InnerSingleton;
}
UClass* Z_Construct_UClass_UVoxelGraphShortcuts_NoRegister()
{
	return UVoxelGraphShortcuts::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UVoxelGraphShortcuts_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "VoxelGraphShortcuts.h" },
		{ "ModuleRelativePath", "Private/VoxelGraphShortcuts.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Shortcuts_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Private/VoxelGraphShortcuts.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Shortcuts_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Shortcuts;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelGraphShortcuts>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVoxelGraphShortcuts_Statics::NewProp_Shortcuts_Inner = { "Shortcuts", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVoxelGraphEditorKeyBinding, METADATA_PARAMS(0, nullptr) }; // 2509519888
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UVoxelGraphShortcuts_Statics::NewProp_Shortcuts = { "Shortcuts", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVoxelGraphShortcuts, Shortcuts), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Shortcuts_MetaData), NewProp_Shortcuts_MetaData) }; // 2509519888
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelGraphShortcuts_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelGraphShortcuts_Statics::NewProp_Shortcuts_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelGraphShortcuts_Statics::NewProp_Shortcuts,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelGraphShortcuts_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UVoxelGraphShortcuts_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraphEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelGraphShortcuts_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelGraphShortcuts_Statics::ClassParams = {
	&UVoxelGraphShortcuts::StaticClass,
	"EditorKeyBindings",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UVoxelGraphShortcuts_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelGraphShortcuts_Statics::PropPointers),
	0,
	0x000000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelGraphShortcuts_Statics::Class_MetaDataParams), Z_Construct_UClass_UVoxelGraphShortcuts_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVoxelGraphShortcuts()
{
	if (!Z_Registration_Info_UClass_UVoxelGraphShortcuts.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelGraphShortcuts.OuterSingleton, Z_Construct_UClass_UVoxelGraphShortcuts_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVoxelGraphShortcuts.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelGraphShortcuts);
UVoxelGraphShortcuts::~UVoxelGraphShortcuts() {}
// ********** End Class UVoxelGraphShortcuts *******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_VoxelGraphEditor_Private_VoxelGraphShortcuts_h__Script_VoxelGraphEditor_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FVoxelGraphEditorKeyBinding::StaticStruct, Z_Construct_UScriptStruct_FVoxelGraphEditorKeyBinding_Statics::NewStructOps, TEXT("VoxelGraphEditorKeyBinding"), &Z_Registration_Info_UScriptStruct_FVoxelGraphEditorKeyBinding, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVoxelGraphEditorKeyBinding), 2509519888U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UVoxelGraphShortcuts, UVoxelGraphShortcuts::StaticClass, TEXT("UVoxelGraphShortcuts"), &Z_Registration_Info_UClass_UVoxelGraphShortcuts, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelGraphShortcuts), 1918211599U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_VoxelGraphEditor_Private_VoxelGraphShortcuts_h__Script_VoxelGraphEditor_3128847876(TEXT("/Script/VoxelGraphEditor"),
	Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_VoxelGraphEditor_Private_VoxelGraphShortcuts_h__Script_VoxelGraphEditor_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_VoxelGraphEditor_Private_VoxelGraphShortcuts_h__Script_VoxelGraphEditor_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_VoxelGraphEditor_Private_VoxelGraphShortcuts_h__Script_VoxelGraphEditor_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_VoxelGraphEditor_Private_VoxelGraphShortcuts_h__Script_VoxelGraphEditor_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
