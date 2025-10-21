// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BlocksInterface.h"

#ifdef PROJECTDELIVERYHELL_BlocksInterface_generated_h
#error "BlocksInterface.generated.h already included, missing '#pragma once' in BlocksInterface.h"
#endif
#define PROJECTDELIVERYHELL_BlocksInterface_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Interface UBlocksInterface *****************************************************
#define FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Source_ProjectDeliveryHell_Public_BlocksInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual FVector GetExtend_Implementation() { return FVector(ForceInit); }; \
	virtual void SetExtend_Implementation(FVector Extend) {}; \
	DECLARE_FUNCTION(execGetExtend); \
	DECLARE_FUNCTION(execSetExtend);


#define FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Source_ProjectDeliveryHell_Public_BlocksInterface_h_13_CALLBACK_WRAPPERS
PROJECTDELIVERYHELL_API UClass* Z_Construct_UClass_UBlocksInterface_NoRegister();

#define FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Source_ProjectDeliveryHell_Public_BlocksInterface_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PROJECTDELIVERYHELL_API UBlocksInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UBlocksInterface(UBlocksInterface&&) = delete; \
	UBlocksInterface(const UBlocksInterface&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PROJECTDELIVERYHELL_API, UBlocksInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBlocksInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBlocksInterface) \
	virtual ~UBlocksInterface() = default;


#define FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Source_ProjectDeliveryHell_Public_BlocksInterface_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUBlocksInterface(); \
	friend struct Z_Construct_UClass_UBlocksInterface_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PROJECTDELIVERYHELL_API UClass* Z_Construct_UClass_UBlocksInterface_NoRegister(); \
public: \
	DECLARE_CLASS2(UBlocksInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/ProjectDeliveryHell"), Z_Construct_UClass_UBlocksInterface_NoRegister) \
	DECLARE_SERIALIZER(UBlocksInterface)


#define FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Source_ProjectDeliveryHell_Public_BlocksInterface_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Source_ProjectDeliveryHell_Public_BlocksInterface_h_13_GENERATED_UINTERFACE_BODY() \
	FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Source_ProjectDeliveryHell_Public_BlocksInterface_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Source_ProjectDeliveryHell_Public_BlocksInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IBlocksInterface() {} \
public: \
	typedef UBlocksInterface UClassType; \
	typedef IBlocksInterface ThisClass; \
	static FVector Execute_GetExtend(UObject* O); \
	static void Execute_SetExtend(UObject* O, FVector Extend); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Source_ProjectDeliveryHell_Public_BlocksInterface_h_10_PROLOG
#define FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Source_ProjectDeliveryHell_Public_BlocksInterface_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Source_ProjectDeliveryHell_Public_BlocksInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Source_ProjectDeliveryHell_Public_BlocksInterface_h_13_CALLBACK_WRAPPERS \
	FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Source_ProjectDeliveryHell_Public_BlocksInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UBlocksInterface;

// ********** End Interface UBlocksInterface *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Source_ProjectDeliveryHell_Public_BlocksInterface_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
