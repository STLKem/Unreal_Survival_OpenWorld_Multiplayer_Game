// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ResourceInterface.h"

#ifdef PROJECTDELIVERYHELL_ResourceInterface_generated_h
#error "ResourceInterface.generated.h already included, missing '#pragma once' in ResourceInterface.h"
#endif
#define PROJECTDELIVERYHELL_ResourceInterface_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class AActor;

// ********** Begin Interface UResourceInterface ***************************************************
#define FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Source_ProjectDeliveryHell_Public_ResourceInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void RemoveFromInv_Implementation() {}; \
	virtual void AddToInv_Implementation(int32 ItemID, int32 ItemQuantity) {}; \
	virtual void Interact_Implementation(AActor* Player) {}; \
	DECLARE_FUNCTION(execRemoveFromInv); \
	DECLARE_FUNCTION(execAddToInv); \
	DECLARE_FUNCTION(execInteract);


#define FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Source_ProjectDeliveryHell_Public_ResourceInterface_h_13_CALLBACK_WRAPPERS
PROJECTDELIVERYHELL_API UClass* Z_Construct_UClass_UResourceInterface_NoRegister();

#define FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Source_ProjectDeliveryHell_Public_ResourceInterface_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PROJECTDELIVERYHELL_API UResourceInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UResourceInterface(UResourceInterface&&) = delete; \
	UResourceInterface(const UResourceInterface&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PROJECTDELIVERYHELL_API, UResourceInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UResourceInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UResourceInterface) \
	virtual ~UResourceInterface() = default;


#define FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Source_ProjectDeliveryHell_Public_ResourceInterface_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUResourceInterface(); \
	friend struct Z_Construct_UClass_UResourceInterface_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PROJECTDELIVERYHELL_API UClass* Z_Construct_UClass_UResourceInterface_NoRegister(); \
public: \
	DECLARE_CLASS2(UResourceInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/ProjectDeliveryHell"), Z_Construct_UClass_UResourceInterface_NoRegister) \
	DECLARE_SERIALIZER(UResourceInterface)


#define FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Source_ProjectDeliveryHell_Public_ResourceInterface_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Source_ProjectDeliveryHell_Public_ResourceInterface_h_13_GENERATED_UINTERFACE_BODY() \
	FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Source_ProjectDeliveryHell_Public_ResourceInterface_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Source_ProjectDeliveryHell_Public_ResourceInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IResourceInterface() {} \
public: \
	typedef UResourceInterface UClassType; \
	typedef IResourceInterface ThisClass; \
	static void Execute_AddToInv(UObject* O, int32 ItemID, int32 ItemQuantity); \
	static void Execute_Interact(UObject* O, AActor* Player); \
	static void Execute_RemoveFromInv(UObject* O); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Source_ProjectDeliveryHell_Public_ResourceInterface_h_10_PROLOG
#define FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Source_ProjectDeliveryHell_Public_ResourceInterface_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Source_ProjectDeliveryHell_Public_ResourceInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Source_ProjectDeliveryHell_Public_ResourceInterface_h_13_CALLBACK_WRAPPERS \
	FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Source_ProjectDeliveryHell_Public_ResourceInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UResourceInterface;

// ********** End Interface UResourceInterface *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Source_ProjectDeliveryHell_Public_ResourceInterface_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
