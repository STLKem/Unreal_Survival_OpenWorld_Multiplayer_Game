// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "VoxelGraphPreviewSettings.h"

#ifdef VOXELGRAPH_VoxelGraphPreviewSettings_generated_h
#error "VoxelGraphPreviewSettings.generated.h already included, missing '#pragma once' in VoxelGraphPreviewSettings.h"
#endif
#define VOXELGRAPH_VoxelGraphPreviewSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UVoxelGraphPreviewSettings ***********************************************
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelGraphPreviewSettings_NoRegister();

#define FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_VoxelGraph_Public_VoxelGraphPreviewSettings_h_70_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVoxelGraphPreviewSettings(); \
	friend struct Z_Construct_UClass_UVoxelGraphPreviewSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelGraphPreviewSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UVoxelGraphPreviewSettings, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VoxelGraph"), Z_Construct_UClass_UVoxelGraphPreviewSettings_NoRegister) \
	DECLARE_SERIALIZER(UVoxelGraphPreviewSettings)


#define FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_VoxelGraph_Public_VoxelGraphPreviewSettings_h_70_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UVoxelGraphPreviewSettings(UVoxelGraphPreviewSettings&&) = delete; \
	UVoxelGraphPreviewSettings(const UVoxelGraphPreviewSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVoxelGraphPreviewSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVoxelGraphPreviewSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UVoxelGraphPreviewSettings) \
	NO_API virtual ~UVoxelGraphPreviewSettings();


#define FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_VoxelGraph_Public_VoxelGraphPreviewSettings_h_67_PROLOG
#define FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_VoxelGraph_Public_VoxelGraphPreviewSettings_h_70_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_VoxelGraph_Public_VoxelGraphPreviewSettings_h_70_INCLASS_NO_PURE_DECLS \
	FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_VoxelGraph_Public_VoxelGraphPreviewSettings_h_70_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UVoxelGraphPreviewSettings;

// ********** End Class UVoxelGraphPreviewSettings *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_VoxelGraph_Public_VoxelGraphPreviewSettings_h

// ********** Begin Enum EVoxelGraphPreviewAxes ****************************************************
#define FOREACH_ENUM_EVOXELGRAPHPREVIEWAXES(op) \
	op(EVoxelGraphPreviewAxes::X) \
	op(EVoxelGraphPreviewAxes::Y) \
	op(EVoxelGraphPreviewAxes::Z) 

enum class EVoxelGraphPreviewAxes : uint8;
template<> struct TIsUEnumClass<EVoxelGraphPreviewAxes> { enum { Value = true }; };
template<> VOXELGRAPH_API UEnum* StaticEnum<EVoxelGraphPreviewAxes>();
// ********** End Enum EVoxelGraphPreviewAxes ******************************************************

// ********** Begin Enum EVoxelGraphPreviewType ****************************************************
#define FOREACH_ENUM_EVOXELGRAPHPREVIEWTYPE(op) \
	op(EVoxelGraphPreviewType::Density) \
	op(EVoxelGraphPreviewType::Material) \
	op(EVoxelGraphPreviewType::Cost) \
	op(EVoxelGraphPreviewType::RangeAnalysis) 

enum class EVoxelGraphPreviewType : uint8;
template<> struct TIsUEnumClass<EVoxelGraphPreviewType> { enum { Value = true }; };
template<> VOXELGRAPH_API UEnum* StaticEnum<EVoxelGraphPreviewType>();
// ********** End Enum EVoxelGraphPreviewType ******************************************************

// ********** Begin Enum EVoxelGraphPreviewShowValue ***********************************************
#define FOREACH_ENUM_EVOXELGRAPHPREVIEWSHOWVALUE(op) \
	op(EVoxelGraphPreviewShowValue::ShowValue) \
	op(EVoxelGraphPreviewShowValue::ShowRange) \
	op(EVoxelGraphPreviewShowValue::ShowValueAndRange) 

enum class EVoxelGraphPreviewShowValue : uint8;
template<> struct TIsUEnumClass<EVoxelGraphPreviewShowValue> { enum { Value = true }; };
template<> VOXELGRAPH_API UEnum* StaticEnum<EVoxelGraphPreviewShowValue>();
// ********** End Enum EVoxelGraphPreviewShowValue *************************************************

// ********** Begin Enum EVoxelGraphMaterialPreviewType ********************************************
#define FOREACH_ENUM_EVOXELGRAPHMATERIALPREVIEWTYPE(op) \
	op(EVoxelGraphMaterialPreviewType::RGB) \
	op(EVoxelGraphMaterialPreviewType::Alpha) \
	op(EVoxelGraphMaterialPreviewType::SingleIndex) \
	op(EVoxelGraphMaterialPreviewType::MultiIndex_Overview) \
	op(EVoxelGraphMaterialPreviewType::MultiIndex_SingleIndexPreview) \
	op(EVoxelGraphMaterialPreviewType::MultiIndex_Wetness) \
	op(EVoxelGraphMaterialPreviewType::UV0) \
	op(EVoxelGraphMaterialPreviewType::UV1) \
	op(EVoxelGraphMaterialPreviewType::UV2) \
	op(EVoxelGraphMaterialPreviewType::UV3) 

enum class EVoxelGraphMaterialPreviewType : uint8;
template<> struct TIsUEnumClass<EVoxelGraphMaterialPreviewType> { enum { Value = true }; };
template<> VOXELGRAPH_API UEnum* StaticEnum<EVoxelGraphMaterialPreviewType>();
// ********** End Enum EVoxelGraphMaterialPreviewType **********************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
