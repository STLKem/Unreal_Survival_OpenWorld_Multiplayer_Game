// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "VoxelNodes/VoxelGraphMacro.h"

#ifdef VOXELGRAPH_VoxelGraphMacro_generated_h
#error "VoxelGraphMacro.generated.h already included, missing '#pragma once' in VoxelGraphMacro.h"
#endif
#define VOXELGRAPH_VoxelGraphMacro_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FVoxelGraphMacroPin ***********************************************
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_VoxelGraph_Public_VoxelNodes_VoxelGraphMacro_h_13_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FVoxelGraphMacroPin_Statics; \
	VOXELGRAPH_API static class UScriptStruct* StaticStruct();


struct FVoxelGraphMacroPin;
// ********** End ScriptStruct FVoxelGraphMacroPin *************************************************

// ********** Begin Class UVoxelGraphMacroInputOutputNode ******************************************
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelGraphMacroInputOutputNode_NoRegister();

#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_VoxelGraph_Public_VoxelNodes_VoxelGraphMacro_h_44_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVoxelGraphMacroInputOutputNode(); \
	friend struct Z_Construct_UClass_UVoxelGraphMacroInputOutputNode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelGraphMacroInputOutputNode_NoRegister(); \
public: \
	DECLARE_CLASS2(UVoxelGraphMacroInputOutputNode, UVoxelNode, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/VoxelGraph"), Z_Construct_UClass_UVoxelGraphMacroInputOutputNode_NoRegister) \
	DECLARE_SERIALIZER(UVoxelGraphMacroInputOutputNode)


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_VoxelGraph_Public_VoxelNodes_VoxelGraphMacro_h_44_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVoxelGraphMacroInputOutputNode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UVoxelGraphMacroInputOutputNode(UVoxelGraphMacroInputOutputNode&&) = delete; \
	UVoxelGraphMacroInputOutputNode(const UVoxelGraphMacroInputOutputNode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVoxelGraphMacroInputOutputNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVoxelGraphMacroInputOutputNode); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVoxelGraphMacroInputOutputNode) \
	NO_API virtual ~UVoxelGraphMacroInputOutputNode();


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_VoxelGraph_Public_VoxelNodes_VoxelGraphMacro_h_41_PROLOG
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_VoxelGraph_Public_VoxelNodes_VoxelGraphMacro_h_44_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_VoxelGraph_Public_VoxelNodes_VoxelGraphMacro_h_44_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_VoxelGraph_Public_VoxelNodes_VoxelGraphMacro_h_44_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UVoxelGraphMacroInputOutputNode;

// ********** End Class UVoxelGraphMacroInputOutputNode ********************************************

// ********** Begin Class UVoxelGraphMacroInputNode ************************************************
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelGraphMacroInputNode_NoRegister();

#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_VoxelGraph_Public_VoxelNodes_VoxelGraphMacro_h_74_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVoxelGraphMacroInputNode(); \
	friend struct Z_Construct_UClass_UVoxelGraphMacroInputNode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelGraphMacroInputNode_NoRegister(); \
public: \
	DECLARE_CLASS2(UVoxelGraphMacroInputNode, UVoxelGraphMacroInputOutputNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VoxelGraph"), Z_Construct_UClass_UVoxelGraphMacroInputNode_NoRegister) \
	DECLARE_SERIALIZER(UVoxelGraphMacroInputNode)


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_VoxelGraph_Public_VoxelNodes_VoxelGraphMacro_h_74_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVoxelGraphMacroInputNode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UVoxelGraphMacroInputNode(UVoxelGraphMacroInputNode&&) = delete; \
	UVoxelGraphMacroInputNode(const UVoxelGraphMacroInputNode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVoxelGraphMacroInputNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVoxelGraphMacroInputNode); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVoxelGraphMacroInputNode) \
	NO_API virtual ~UVoxelGraphMacroInputNode();


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_VoxelGraph_Public_VoxelNodes_VoxelGraphMacro_h_71_PROLOG
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_VoxelGraph_Public_VoxelNodes_VoxelGraphMacro_h_74_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_VoxelGraph_Public_VoxelNodes_VoxelGraphMacro_h_74_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_VoxelGraph_Public_VoxelNodes_VoxelGraphMacro_h_74_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UVoxelGraphMacroInputNode;

// ********** End Class UVoxelGraphMacroInputNode **************************************************

// ********** Begin Class UVoxelGraphMacroOutputNode ***********************************************
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelGraphMacroOutputNode_NoRegister();

#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_VoxelGraph_Public_VoxelNodes_VoxelGraphMacro_h_83_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVoxelGraphMacroOutputNode(); \
	friend struct Z_Construct_UClass_UVoxelGraphMacroOutputNode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelGraphMacroOutputNode_NoRegister(); \
public: \
	DECLARE_CLASS2(UVoxelGraphMacroOutputNode, UVoxelGraphMacroInputOutputNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VoxelGraph"), Z_Construct_UClass_UVoxelGraphMacroOutputNode_NoRegister) \
	DECLARE_SERIALIZER(UVoxelGraphMacroOutputNode)


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_VoxelGraph_Public_VoxelNodes_VoxelGraphMacro_h_83_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVoxelGraphMacroOutputNode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UVoxelGraphMacroOutputNode(UVoxelGraphMacroOutputNode&&) = delete; \
	UVoxelGraphMacroOutputNode(const UVoxelGraphMacroOutputNode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVoxelGraphMacroOutputNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVoxelGraphMacroOutputNode); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVoxelGraphMacroOutputNode) \
	NO_API virtual ~UVoxelGraphMacroOutputNode();


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_VoxelGraph_Public_VoxelNodes_VoxelGraphMacro_h_80_PROLOG
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_VoxelGraph_Public_VoxelNodes_VoxelGraphMacro_h_83_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_VoxelGraph_Public_VoxelNodes_VoxelGraphMacro_h_83_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_VoxelGraph_Public_VoxelNodes_VoxelGraphMacro_h_83_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UVoxelGraphMacroOutputNode;

// ********** End Class UVoxelGraphMacroOutputNode *************************************************

// ********** Begin Class UVoxelGraphMacro *********************************************************
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelGraphMacro_NoRegister();

#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_VoxelGraph_Public_VoxelNodes_VoxelGraphMacro_h_95_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVoxelGraphMacro(); \
	friend struct Z_Construct_UClass_UVoxelGraphMacro_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelGraphMacro_NoRegister(); \
public: \
	DECLARE_CLASS2(UVoxelGraphMacro, UVoxelGraphGenerator, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VoxelGraph"), Z_Construct_UClass_UVoxelGraphMacro_NoRegister) \
	DECLARE_SERIALIZER(UVoxelGraphMacro)


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_VoxelGraph_Public_VoxelNodes_VoxelGraphMacro_h_95_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVoxelGraphMacro(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UVoxelGraphMacro(UVoxelGraphMacro&&) = delete; \
	UVoxelGraphMacro(const UVoxelGraphMacro&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVoxelGraphMacro); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVoxelGraphMacro); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVoxelGraphMacro) \
	NO_API virtual ~UVoxelGraphMacro();


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_VoxelGraph_Public_VoxelNodes_VoxelGraphMacro_h_92_PROLOG
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_VoxelGraph_Public_VoxelNodes_VoxelGraphMacro_h_95_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_VoxelGraph_Public_VoxelNodes_VoxelGraphMacro_h_95_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_VoxelGraph_Public_VoxelNodes_VoxelGraphMacro_h_95_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UVoxelGraphMacro;

// ********** End Class UVoxelGraphMacro ***********************************************************

// ********** Begin Class UVoxelGraphMacroNode *****************************************************
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelGraphMacroNode_NoRegister();

#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_VoxelGraph_Public_VoxelNodes_VoxelGraphMacro_h_131_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVoxelGraphMacroNode(); \
	friend struct Z_Construct_UClass_UVoxelGraphMacroNode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelGraphMacroNode_NoRegister(); \
public: \
	DECLARE_CLASS2(UVoxelGraphMacroNode, UVoxelNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VoxelGraph"), Z_Construct_UClass_UVoxelGraphMacroNode_NoRegister) \
	DECLARE_SERIALIZER(UVoxelGraphMacroNode)


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_VoxelGraph_Public_VoxelNodes_VoxelGraphMacro_h_131_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVoxelGraphMacroNode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UVoxelGraphMacroNode(UVoxelGraphMacroNode&&) = delete; \
	UVoxelGraphMacroNode(const UVoxelGraphMacroNode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVoxelGraphMacroNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVoxelGraphMacroNode); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVoxelGraphMacroNode) \
	NO_API virtual ~UVoxelGraphMacroNode();


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_VoxelGraph_Public_VoxelNodes_VoxelGraphMacro_h_128_PROLOG
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_VoxelGraph_Public_VoxelNodes_VoxelGraphMacro_h_131_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_VoxelGraph_Public_VoxelNodes_VoxelGraphMacro_h_131_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_VoxelGraph_Public_VoxelNodes_VoxelGraphMacro_h_131_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UVoxelGraphMacroNode;

// ********** End Class UVoxelGraphMacroNode *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VoxelPro_Source_VoxelGraph_Public_VoxelNodes_VoxelGraphMacro_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
