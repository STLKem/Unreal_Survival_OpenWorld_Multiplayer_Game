// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MainInteractInterface.h"

#ifdef PROJECTDELIVERYHELL_MainInteractInterface_generated_h
#error "MainInteractInterface.generated.h already included, missing '#pragma once' in MainInteractInterface.h"
#endif
#define PROJECTDELIVERYHELL_MainInteractInterface_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class AActor;

// ********** Begin Interface UMainInteractInterface ***********************************************
#define FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Source_ProjectDeliveryHell_Public_MainInteractInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void ChangeTemperature_Implementation(float TemperatureValue) {}; \
	virtual void ChangeWater_Implementation(int32 WaterValue) {}; \
	virtual void ChangeHunger_Implementation(int32 HungerValue) {}; \
	virtual void ChangeHealth_Implementation(int32 Heal) {}; \
	virtual void RemoveFromInv_Implementation() {}; \
	virtual void AddToInv_Implementation(int32 ItemID, int32 ItemQuantity) {}; \
	virtual void Interact_Implementation(AActor* Player) {}; \
	DECLARE_FUNCTION(execChangeTemperature); \
	DECLARE_FUNCTION(execChangeWater); \
	DECLARE_FUNCTION(execChangeHunger); \
	DECLARE_FUNCTION(execChangeHealth); \
	DECLARE_FUNCTION(execRemoveFromInv); \
	DECLARE_FUNCTION(execAddToInv); \
	DECLARE_FUNCTION(execInteract);


#define FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Source_ProjectDeliveryHell_Public_MainInteractInterface_h_13_CALLBACK_WRAPPERS
PROJECTDELIVERYHELL_API UClass* Z_Construct_UClass_UMainInteractInterface_NoRegister();

#define FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Source_ProjectDeliveryHell_Public_MainInteractInterface_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PROJECTDELIVERYHELL_API UMainInteractInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMainInteractInterface(UMainInteractInterface&&) = delete; \
	UMainInteractInterface(const UMainInteractInterface&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PROJECTDELIVERYHELL_API, UMainInteractInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMainInteractInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMainInteractInterface) \
	virtual ~UMainInteractInterface() = default;


#define FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Source_ProjectDeliveryHell_Public_MainInteractInterface_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUMainInteractInterface(); \
	friend struct Z_Construct_UClass_UMainInteractInterface_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PROJECTDELIVERYHELL_API UClass* Z_Construct_UClass_UMainInteractInterface_NoRegister(); \
public: \
	DECLARE_CLASS2(UMainInteractInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/ProjectDeliveryHell"), Z_Construct_UClass_UMainInteractInterface_NoRegister) \
	DECLARE_SERIALIZER(UMainInteractInterface)


#define FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Source_ProjectDeliveryHell_Public_MainInteractInterface_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Source_ProjectDeliveryHell_Public_MainInteractInterface_h_13_GENERATED_UINTERFACE_BODY() \
	FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Source_ProjectDeliveryHell_Public_MainInteractInterface_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Source_ProjectDeliveryHell_Public_MainInteractInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IMainInteractInterface() {} \
public: \
	typedef UMainInteractInterface UClassType; \
	typedef IMainInteractInterface ThisClass; \
	static void Execute_AddToInv(UObject* O, int32 ItemID, int32 ItemQuantity); \
	static void Execute_ChangeHealth(UObject* O, int32 Heal); \
	static void Execute_ChangeHunger(UObject* O, int32 HungerValue); \
	static void Execute_ChangeTemperature(UObject* O, float TemperatureValue); \
	static void Execute_ChangeWater(UObject* O, int32 WaterValue); \
	static void Execute_Interact(UObject* O, AActor* Player); \
	static void Execute_RemoveFromInv(UObject* O); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Source_ProjectDeliveryHell_Public_MainInteractInterface_h_10_PROLOG
#define FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Source_ProjectDeliveryHell_Public_MainInteractInterface_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Source_ProjectDeliveryHell_Public_MainInteractInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Source_ProjectDeliveryHell_Public_MainInteractInterface_h_13_CALLBACK_WRAPPERS \
	FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Source_ProjectDeliveryHell_Public_MainInteractInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMainInteractInterface;

// ********** End Interface UMainInteractInterface *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Source_ProjectDeliveryHell_Public_MainInteractInterface_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
