// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "VoxelGraphGenerator.h"

#ifdef VOXELGRAPH_VoxelGraphGenerator_generated_h
#error "VoxelGraphGenerator.generated.h already included, missing '#pragma once' in VoxelGraphGenerator.h"
#endif
#define VOXELGRAPH_VoxelGraphGenerator_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UVoxelGraphGenerator *****************************************************
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelGraphGenerator_NoRegister();

#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_VoxelGraph_Public_VoxelGraphGenerator_h_44_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVoxelGraphGenerator(); \
	friend struct Z_Construct_UClass_UVoxelGraphGenerator_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelGraphGenerator_NoRegister(); \
public: \
	DECLARE_CLASS2(UVoxelGraphGenerator, UVoxelTransformableGenerator, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VoxelGraph"), Z_Construct_UClass_UVoxelGraphGenerator_NoRegister) \
	DECLARE_SERIALIZER(UVoxelGraphGenerator)


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_VoxelGraph_Public_VoxelGraphGenerator_h_44_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVoxelGraphGenerator(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UVoxelGraphGenerator(UVoxelGraphGenerator&&) = delete; \
	UVoxelGraphGenerator(const UVoxelGraphGenerator&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVoxelGraphGenerator); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVoxelGraphGenerator); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVoxelGraphGenerator) \
	NO_API virtual ~UVoxelGraphGenerator();


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_VoxelGraph_Public_VoxelGraphGenerator_h_41_PROLOG
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_VoxelGraph_Public_VoxelGraphGenerator_h_44_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_VoxelGraph_Public_VoxelGraphGenerator_h_44_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_VoxelGraph_Public_VoxelGraphGenerator_h_44_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UVoxelGraphGenerator;

// ********** End Class UVoxelGraphGenerator *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_VoxelGraph_Public_VoxelGraphGenerator_h

// ********** Begin Enum EVoxelGraphGeneratorDebugLevel ********************************************
#define FOREACH_ENUM_EVOXELGRAPHGENERATORDEBUGLEVEL(op) \
	op(EVoxelGraphGeneratorDebugLevel::BeforeMacroInlining) \
	op(EVoxelGraphGeneratorDebugLevel::AfterMacroInlining) \
	op(EVoxelGraphGeneratorDebugLevel::AfterBiomeMergeReplace) \
	op(EVoxelGraphGeneratorDebugLevel::AfterSmartMinMaxReplace) \
	op(EVoxelGraphGeneratorDebugLevel::BeforeFillFunctionSeparators) \
	op(EVoxelGraphGeneratorDebugLevel::Output) \
	op(EVoxelGraphGeneratorDebugLevel::Function) \
	op(EVoxelGraphGeneratorDebugLevel::Axis) 

enum class EVoxelGraphGeneratorDebugLevel : uint8;
template<> struct TIsUEnumClass<EVoxelGraphGeneratorDebugLevel> { enum { Value = true }; };
template<> VOXELGRAPH_API UEnum* StaticEnum<EVoxelGraphGeneratorDebugLevel>();
// ********** End Enum EVoxelGraphGeneratorDebugLevel **********************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
