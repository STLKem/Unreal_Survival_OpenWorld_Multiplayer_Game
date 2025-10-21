// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "VoxelComponents/VoxelInvokerComponent.h"

#ifdef VOXEL_VoxelInvokerComponent_generated_h
#error "VoxelInvokerComponent.generated.h already included, missing '#pragma once' in VoxelInvokerComponent.h"
#endif
#define VOXEL_VoxelInvokerComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class AVoxelWorldInterface;
struct FVoxelInvokerSettings;

// ********** Begin Class UVoxelInvokerComponentBase ***********************************************
#define FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelComponents_VoxelInvokerComponent_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execRefreshAllVoxelInvokers); \
	DECLARE_FUNCTION(execIsInvokerEnabled); \
	DECLARE_FUNCTION(execDisableInvoker); \
	DECLARE_FUNCTION(execEnableInvoker); \
	DECLARE_FUNCTION(execGetInvokerSettings); \
	DECLARE_FUNCTION(execGetInvokerVoxelPosition); \
	DECLARE_FUNCTION(execIsLocalInvoker);


#define FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelComponents_VoxelInvokerComponent_h_18_CALLBACK_WRAPPERS
VOXEL_API UClass* Z_Construct_UClass_UVoxelInvokerComponentBase_NoRegister();

#define FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelComponents_VoxelInvokerComponent_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVoxelInvokerComponentBase(); \
	friend struct Z_Construct_UClass_UVoxelInvokerComponentBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend VOXEL_API UClass* Z_Construct_UClass_UVoxelInvokerComponentBase_NoRegister(); \
public: \
	DECLARE_CLASS2(UVoxelInvokerComponentBase, USceneComponent, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/Voxel"), Z_Construct_UClass_UVoxelInvokerComponentBase_NoRegister) \
	DECLARE_SERIALIZER(UVoxelInvokerComponentBase)


#define FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelComponents_VoxelInvokerComponent_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVoxelInvokerComponentBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UVoxelInvokerComponentBase(UVoxelInvokerComponentBase&&) = delete; \
	UVoxelInvokerComponentBase(const UVoxelInvokerComponentBase&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVoxelInvokerComponentBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVoxelInvokerComponentBase); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVoxelInvokerComponentBase) \
	NO_API virtual ~UVoxelInvokerComponentBase();


#define FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelComponents_VoxelInvokerComponent_h_15_PROLOG
#define FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelComponents_VoxelInvokerComponent_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelComponents_VoxelInvokerComponent_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelComponents_VoxelInvokerComponent_h_18_CALLBACK_WRAPPERS \
	FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelComponents_VoxelInvokerComponent_h_18_INCLASS_NO_PURE_DECLS \
	FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelComponents_VoxelInvokerComponent_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UVoxelInvokerComponentBase;

// ********** End Class UVoxelInvokerComponentBase *************************************************

// ********** Begin Class UVoxelSimpleInvokerComponent *********************************************
#define FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelComponents_VoxelInvokerComponent_h_101_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetInvokerGlobalPosition);


#define FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelComponents_VoxelInvokerComponent_h_101_CALLBACK_WRAPPERS
VOXEL_API UClass* Z_Construct_UClass_UVoxelSimpleInvokerComponent_NoRegister();

#define FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelComponents_VoxelInvokerComponent_h_101_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVoxelSimpleInvokerComponent(); \
	friend struct Z_Construct_UClass_UVoxelSimpleInvokerComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend VOXEL_API UClass* Z_Construct_UClass_UVoxelSimpleInvokerComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UVoxelSimpleInvokerComponent, UVoxelInvokerComponentBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Voxel"), Z_Construct_UClass_UVoxelSimpleInvokerComponent_NoRegister) \
	DECLARE_SERIALIZER(UVoxelSimpleInvokerComponent)


#define FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelComponents_VoxelInvokerComponent_h_101_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVoxelSimpleInvokerComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UVoxelSimpleInvokerComponent(UVoxelSimpleInvokerComponent&&) = delete; \
	UVoxelSimpleInvokerComponent(const UVoxelSimpleInvokerComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVoxelSimpleInvokerComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVoxelSimpleInvokerComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVoxelSimpleInvokerComponent) \
	NO_API virtual ~UVoxelSimpleInvokerComponent();


#define FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelComponents_VoxelInvokerComponent_h_98_PROLOG
#define FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelComponents_VoxelInvokerComponent_h_101_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelComponents_VoxelInvokerComponent_h_101_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelComponents_VoxelInvokerComponent_h_101_CALLBACK_WRAPPERS \
	FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelComponents_VoxelInvokerComponent_h_101_INCLASS_NO_PURE_DECLS \
	FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelComponents_VoxelInvokerComponent_h_101_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UVoxelSimpleInvokerComponent;

// ********** End Class UVoxelSimpleInvokerComponent ***********************************************

// ********** Begin Class UVoxelInvokerWithPredictionComponent *************************************
VOXEL_API UClass* Z_Construct_UClass_UVoxelInvokerWithPredictionComponent_NoRegister();

#define FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelComponents_VoxelInvokerComponent_h_154_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVoxelInvokerWithPredictionComponent(); \
	friend struct Z_Construct_UClass_UVoxelInvokerWithPredictionComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend VOXEL_API UClass* Z_Construct_UClass_UVoxelInvokerWithPredictionComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UVoxelInvokerWithPredictionComponent, UVoxelSimpleInvokerComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Voxel"), Z_Construct_UClass_UVoxelInvokerWithPredictionComponent_NoRegister) \
	DECLARE_SERIALIZER(UVoxelInvokerWithPredictionComponent)


#define FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelComponents_VoxelInvokerComponent_h_154_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVoxelInvokerWithPredictionComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UVoxelInvokerWithPredictionComponent(UVoxelInvokerWithPredictionComponent&&) = delete; \
	UVoxelInvokerWithPredictionComponent(const UVoxelInvokerWithPredictionComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVoxelInvokerWithPredictionComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVoxelInvokerWithPredictionComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVoxelInvokerWithPredictionComponent) \
	NO_API virtual ~UVoxelInvokerWithPredictionComponent();


#define FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelComponents_VoxelInvokerComponent_h_151_PROLOG
#define FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelComponents_VoxelInvokerComponent_h_154_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelComponents_VoxelInvokerComponent_h_154_INCLASS_NO_PURE_DECLS \
	FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelComponents_VoxelInvokerComponent_h_154_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UVoxelInvokerWithPredictionComponent;

// ********** End Class UVoxelInvokerWithPredictionComponent ***************************************

// ********** Begin Class UVoxelInvokerAutoCameraComponent *****************************************
VOXEL_API UClass* Z_Construct_UClass_UVoxelInvokerAutoCameraComponent_NoRegister();

#define FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelComponents_VoxelInvokerComponent_h_176_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVoxelInvokerAutoCameraComponent(); \
	friend struct Z_Construct_UClass_UVoxelInvokerAutoCameraComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend VOXEL_API UClass* Z_Construct_UClass_UVoxelInvokerAutoCameraComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UVoxelInvokerAutoCameraComponent, UVoxelSimpleInvokerComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Voxel"), Z_Construct_UClass_UVoxelInvokerAutoCameraComponent_NoRegister) \
	DECLARE_SERIALIZER(UVoxelInvokerAutoCameraComponent)


#define FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelComponents_VoxelInvokerComponent_h_176_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVoxelInvokerAutoCameraComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UVoxelInvokerAutoCameraComponent(UVoxelInvokerAutoCameraComponent&&) = delete; \
	UVoxelInvokerAutoCameraComponent(const UVoxelInvokerAutoCameraComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVoxelInvokerAutoCameraComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVoxelInvokerAutoCameraComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVoxelInvokerAutoCameraComponent) \
	NO_API virtual ~UVoxelInvokerAutoCameraComponent();


#define FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelComponents_VoxelInvokerComponent_h_173_PROLOG
#define FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelComponents_VoxelInvokerComponent_h_176_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelComponents_VoxelInvokerComponent_h_176_INCLASS_NO_PURE_DECLS \
	FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelComponents_VoxelInvokerComponent_h_176_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UVoxelInvokerAutoCameraComponent;

// ********** End Class UVoxelInvokerAutoCameraComponent *******************************************

// ********** Begin Class UVoxelLODVolumeInvokerComponent ******************************************
VOXEL_API UClass* Z_Construct_UClass_UVoxelLODVolumeInvokerComponent_NoRegister();

#define FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelComponents_VoxelInvokerComponent_h_187_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVoxelLODVolumeInvokerComponent(); \
	friend struct Z_Construct_UClass_UVoxelLODVolumeInvokerComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend VOXEL_API UClass* Z_Construct_UClass_UVoxelLODVolumeInvokerComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UVoxelLODVolumeInvokerComponent, UVoxelInvokerComponentBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Voxel"), Z_Construct_UClass_UVoxelLODVolumeInvokerComponent_NoRegister) \
	DECLARE_SERIALIZER(UVoxelLODVolumeInvokerComponent) \
	DECLARE_WITHIN(AVoxelLODVolume)


#define FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelComponents_VoxelInvokerComponent_h_187_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UVoxelLODVolumeInvokerComponent(UVoxelLODVolumeInvokerComponent&&) = delete; \
	UVoxelLODVolumeInvokerComponent(const UVoxelLODVolumeInvokerComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVoxelLODVolumeInvokerComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVoxelLODVolumeInvokerComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UVoxelLODVolumeInvokerComponent) \
	NO_API virtual ~UVoxelLODVolumeInvokerComponent();


#define FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelComponents_VoxelInvokerComponent_h_184_PROLOG
#define FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelComponents_VoxelInvokerComponent_h_187_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelComponents_VoxelInvokerComponent_h_187_INCLASS_NO_PURE_DECLS \
	FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelComponents_VoxelInvokerComponent_h_187_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UVoxelLODVolumeInvokerComponent;

// ********** End Class UVoxelLODVolumeInvokerComponent ********************************************

// ********** Begin Class AVoxelLODVolume **********************************************************
VOXEL_API UClass* Z_Construct_UClass_AVoxelLODVolume_NoRegister();

#define FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelComponents_VoxelInvokerComponent_h_225_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAVoxelLODVolume(); \
	friend struct Z_Construct_UClass_AVoxelLODVolume_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend VOXEL_API UClass* Z_Construct_UClass_AVoxelLODVolume_NoRegister(); \
public: \
	DECLARE_CLASS2(AVoxelLODVolume, AVolume, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Voxel"), Z_Construct_UClass_AVoxelLODVolume_NoRegister) \
	DECLARE_SERIALIZER(AVoxelLODVolume)


#define FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelComponents_VoxelInvokerComponent_h_225_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AVoxelLODVolume(AVoxelLODVolume&&) = delete; \
	AVoxelLODVolume(const AVoxelLODVolume&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AVoxelLODVolume); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AVoxelLODVolume); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AVoxelLODVolume) \
	NO_API virtual ~AVoxelLODVolume();


#define FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelComponents_VoxelInvokerComponent_h_222_PROLOG
#define FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelComponents_VoxelInvokerComponent_h_225_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelComponents_VoxelInvokerComponent_h_225_INCLASS_NO_PURE_DECLS \
	FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelComponents_VoxelInvokerComponent_h_225_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AVoxelLODVolume;

// ********** End Class AVoxelLODVolume ************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_Voxel_Public_VoxelComponents_VoxelInvokerComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
