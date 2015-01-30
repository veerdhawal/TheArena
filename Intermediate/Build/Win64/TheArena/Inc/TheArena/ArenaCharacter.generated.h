// Copyright 1998-2014 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectBase.h"

#ifdef THEARENA_ArenaCharacter_generated_h
#error "ArenaCharacter.generated.h already included, missing '#pragma once' in ArenaCharacter.h"
#endif
#define THEARENA_ArenaCharacter_generated_h

extern THEARENA_API FName THEARENA_ServerEquipWeapon;
extern THEARENA_API FName THEARENA_ServerIdleTimer;
extern THEARENA_API FName THEARENA_ServerJump;
extern THEARENA_API FName THEARENA_ServerSetCrouched;
extern THEARENA_API FName THEARENA_ServerSetRunning;
extern THEARENA_API FName THEARENA_ServerSetTargeting;
extern THEARENA_API FName THEARENA_ServerStartThrow;
extern THEARENA_API FName THEARENA_ServerStopThrow;
#define AArenaCharacter_USTRUCT_BODY_LINE_12 \
	friend THEARENA_API class UScriptStruct* Z_Construct_UScriptStruct_AArenaCharacter_FPlayerData(); \
	THEARENA_API static class UScriptStruct* StaticStruct();


#define AArenaCharacter_EVENTPARMS \
struct ArenaCharacter_eventServerEquipWeapon_Parms \
{ \
	class AArenaRangedWeapon* NewWeapon; \
}; \
struct ArenaCharacter_eventServerIdleTimer_Parms \
{ \
	float idleTimer; \
	class AArenaCharacter* client; \
}; \
struct ArenaCharacter_eventServerJump_Parms \
{ \
	class AArenaCharacter* client; \
}; \
struct ArenaCharacter_eventServerSetCrouched_Parms \
{ \
	bool bNewCrouched; \
	bool bToggle; \
}; \
struct ArenaCharacter_eventServerSetRunning_Parms \
{ \
	bool bNewRunning; \
	bool bToggle; \
}; \
struct ArenaCharacter_eventServerSetTargeting_Parms \
{ \
	bool bNewTargeting; \
};


#define AArenaCharacter_RPC_WRAPPERS \
	 virtual bool ServerStopThrow_Validate(); \
	virtual void ServerStopThrow_Implementation(); \
 \
	DECLARE_FUNCTION(execServerStopThrow) \
	{ \
		P_FINISH; \
		if (!this->ServerStopThrow_Validate()) \
		{ \
			RPC_ValidateFailed(TEXT("ServerStopThrow_Validate")); \
			return; \
		} \
		this->ServerStopThrow_Implementation(); \
	} \
	 virtual bool ServerStartThrow_Validate(); \
	virtual void ServerStartThrow_Implementation(); \
 \
	DECLARE_FUNCTION(execServerStartThrow) \
	{ \
		P_FINISH; \
		if (!this->ServerStartThrow_Validate()) \
		{ \
			RPC_ValidateFailed(TEXT("ServerStartThrow_Validate")); \
			return; \
		} \
		this->ServerStartThrow_Implementation(); \
	} \
	 virtual bool ServerSetTargeting_Validate(bool bNewTargeting); \
	virtual void ServerSetTargeting_Implementation(bool bNewTargeting); \
 \
	DECLARE_FUNCTION(execServerSetTargeting) \
	{ \
		P_GET_UBOOL(bNewTargeting); \
		P_FINISH; \
		if (!this->ServerSetTargeting_Validate(bNewTargeting)) \
		{ \
			RPC_ValidateFailed(TEXT("ServerSetTargeting_Validate")); \
			return; \
		} \
		this->ServerSetTargeting_Implementation(bNewTargeting); \
	} \
	 virtual bool ServerSetRunning_Validate(bool bNewRunning, bool bToggle); \
	virtual void ServerSetRunning_Implementation(bool bNewRunning, bool bToggle); \
 \
	DECLARE_FUNCTION(execServerSetRunning) \
	{ \
		P_GET_UBOOL(bNewRunning); \
		P_GET_UBOOL(bToggle); \
		P_FINISH; \
		if (!this->ServerSetRunning_Validate(bNewRunning,bToggle)) \
		{ \
			RPC_ValidateFailed(TEXT("ServerSetRunning_Validate")); \
			return; \
		} \
		this->ServerSetRunning_Implementation(bNewRunning,bToggle); \
	} \
	 virtual bool ServerSetCrouched_Validate(bool bNewCrouched, bool bToggle); \
	virtual void ServerSetCrouched_Implementation(bool bNewCrouched, bool bToggle); \
 \
	DECLARE_FUNCTION(execServerSetCrouched) \
	{ \
		P_GET_UBOOL(bNewCrouched); \
		P_GET_UBOOL(bToggle); \
		P_FINISH; \
		if (!this->ServerSetCrouched_Validate(bNewCrouched,bToggle)) \
		{ \
			RPC_ValidateFailed(TEXT("ServerSetCrouched_Validate")); \
			return; \
		} \
		this->ServerSetCrouched_Implementation(bNewCrouched,bToggle); \
	} \
	 virtual bool ServerJump_Validate(class AArenaCharacter* client); \
	virtual void ServerJump_Implementation(class AArenaCharacter* client); \
 \
	DECLARE_FUNCTION(execServerJump) \
	{ \
		P_GET_OBJECT(AArenaCharacter,client); \
		P_FINISH; \
		if (!this->ServerJump_Validate(client)) \
		{ \
			RPC_ValidateFailed(TEXT("ServerJump_Validate")); \
			return; \
		} \
		this->ServerJump_Implementation(client); \
	} \
	 virtual bool ServerIdleTimer_Validate(const float idleTimer, class AArenaCharacter* client); \
	virtual void ServerIdleTimer_Implementation(const float idleTimer, class AArenaCharacter* client); \
 \
	DECLARE_FUNCTION(execServerIdleTimer) \
	{ \
		P_GET_PROPERTY(UFloatProperty,idleTimer); \
		P_GET_OBJECT(AArenaCharacter,client); \
		P_FINISH; \
		if (!this->ServerIdleTimer_Validate(idleTimer,client)) \
		{ \
			RPC_ValidateFailed(TEXT("ServerIdleTimer_Validate")); \
			return; \
		} \
		this->ServerIdleTimer_Implementation(idleTimer,client); \
	} \
	 virtual bool ServerEquipWeapon_Validate(class AArenaRangedWeapon* NewWeapon); \
	virtual void ServerEquipWeapon_Implementation(class AArenaRangedWeapon* NewWeapon); \
 \
	DECLARE_FUNCTION(execServerEquipWeapon) \
	{ \
		P_GET_OBJECT(AArenaRangedWeapon,NewWeapon); \
		P_FINISH; \
		if (!this->ServerEquipWeapon_Validate(NewWeapon)) \
		{ \
			RPC_ValidateFailed(TEXT("ServerEquipWeapon_Validate")); \
			return; \
		} \
		this->ServerEquipWeapon_Implementation(NewWeapon); \
	} \
	DECLARE_FUNCTION(execOnRep_Throw) \
	{ \
		P_FINISH; \
		this->OnRep_Throw(); \
	} \
	DECLARE_FUNCTION(execOnRep_LastTakeHitInfo) \
	{ \
		P_FINISH; \
		this->OnRep_LastTakeHitInfo(); \
	} \
	DECLARE_FUNCTION(execOnRep_CurrentWeapon) \
	{ \
		P_GET_OBJECT(AArenaRangedWeapon,LastWeapon); \
		P_FINISH; \
		this->OnRep_CurrentWeapon(LastWeapon); \
	} \
	DECLARE_FUNCTION(execIsThrowing) \
	{ \
		P_FINISH; \
		*(bool*)Result=this->IsThrowing(); \
	} \
	DECLARE_FUNCTION(execIsTargeting) \
	{ \
		P_FINISH; \
		*(bool*)Result=this->IsTargeting(); \
	} \
	DECLARE_FUNCTION(execIsRunning) \
	{ \
		P_FINISH; \
		*(bool*)Result=this->IsRunning(); \
	} \
	DECLARE_FUNCTION(execIsFiring) \
	{ \
		P_FINISH; \
		*(bool*)Result=this->IsFiring(); \
	} \
	DECLARE_FUNCTION(execGetWeapon) \
	{ \
		P_FINISH; \
		*(class AArenaRangedWeapon**)Result=this->GetWeapon(); \
	} \
	DECLARE_FUNCTION(execGetTargetingMovementSpeed) \
	{ \
		P_FINISH; \
		*(float*)Result=this->GetTargetingMovementSpeed(); \
	} \
	DECLARE_FUNCTION(execGetRunningMovementSpeed) \
	{ \
		P_FINISH; \
		*(float*)Result=this->GetRunningMovementSpeed(); \
	} \
	DECLARE_FUNCTION(execGetMaxStamina) \
	{ \
		P_FINISH; \
		*(int32*)Result=this->GetMaxStamina(); \
	} \
	DECLARE_FUNCTION(execGetMaxHealth) \
	{ \
		P_FINISH; \
		*(int32*)Result=this->GetMaxHealth(); \
	} \
	DECLARE_FUNCTION(execGetMaxEnergy) \
	{ \
		P_FINISH; \
		*(int32*)Result=this->GetMaxEnergy(); \
	} \
	DECLARE_FUNCTION(execGetIdleTime) \
	{ \
		P_FINISH; \
		*(float*)Result=this->GetIdleTime(); \
	} \
	DECLARE_FUNCTION(execGetCurrentStamina) \
	{ \
		P_FINISH; \
		*(float*)Result=this->GetCurrentStamina(); \
	} \
	DECLARE_FUNCTION(execGetCurrentHealth) \
	{ \
		P_FINISH; \
		*(float*)Result=this->GetCurrentHealth(); \
	} \
	DECLARE_FUNCTION(execGetCurrentEnergy) \
	{ \
		P_FINISH; \
		*(float*)Result=this->GetCurrentEnergy(); \
	} \
	DECLARE_FUNCTION(execGetCrouchedMovementSpeed) \
	{ \
		P_FINISH; \
		*(float*)Result=this->GetCrouchedMovementSpeed(); \
	} \
	DECLARE_FUNCTION(execGetBaseMovementSpeed) \
	{ \
		P_FINISH; \
		*(float*)Result=this->GetBaseMovementSpeed(); \
	} \
	DECLARE_FUNCTION(execGetAimOffsets) \
	{ \
		P_FINISH; \
		*(FRotator*)Result=this->GetAimOffsets(); \
	}


#define AArenaCharacter_CALLBACK_WRAPPERS
#define AArenaCharacter_INCLASS \
	private: \
	static void StaticRegisterNativesAArenaCharacter(); \
	friend THEARENA_API class UClass* Z_Construct_UClass_AArenaCharacter(); \
	public: \
	DECLARE_CLASS(AArenaCharacter, ACharacter, COMPILED_IN_FLAGS(CLASS_Abstract), 0, TheArena, NO_API) \
	DECLARE_SERIALIZER(AArenaCharacter) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	UObject* _getUObject() const { return const_cast<AArenaCharacter*>(this); } \
	virtual void GetLifetimeReplicatedProps( TArray< FLifetimeProperty > & OutLifetimeProps ) const override;


#define AArenaCharacter_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AArenaCharacter(const class FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AArenaCharacter) \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API AArenaCharacter(const AArenaCharacter& InCopy); \
public:


#define AArenaCharacter_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AArenaCharacter(const class FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) { }; \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API AArenaCharacter(const AArenaCharacter& InCopy); \
public: \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AArenaCharacter)


#undef UCLASS_CURRENT_FILE_NAME
#define UCLASS_CURRENT_FILE_NAME AArenaCharacter


#undef UCLASS
#undef UINTERFACE
#if UE_BUILD_DOCS
#define UCLASS(...)
#else
#define UCLASS(...) \
AArenaCharacter_EVENTPARMS
#endif


#undef GENERATED_UCLASS_BODY
#undef GENERATED_BODY
#undef GENERATED_IINTERFACE_BODY
#define GENERATED_UCLASS_BODY() \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AArenaCharacter_RPC_WRAPPERS \
	AArenaCharacter_CALLBACK_WRAPPERS \
	AArenaCharacter_INCLASS \
	AArenaCharacter_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GENERATED_BODY() \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AArenaCharacter_RPC_WRAPPERS \
	AArenaCharacter_CALLBACK_WRAPPERS \
	AArenaCharacter_INCLASS \
	AArenaCharacter_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class ArenaCharacter."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


