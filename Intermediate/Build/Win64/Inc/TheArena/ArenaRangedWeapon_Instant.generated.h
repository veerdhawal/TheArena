// Copyright 1998-2014 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectBase.h"

#ifdef THEARENA_ArenaRangedWeapon_Instant_generated_h
#error "ArenaRangedWeapon_Instant.generated.h already included, missing '#pragma once' in ArenaRangedWeapon_Instant.h"
#endif
#define THEARENA_ArenaRangedWeapon_Instant_generated_h

extern THEARENA_API FName THEARENA_ServerNotifyHit;
extern THEARENA_API FName THEARENA_ServerNotifyMiss;
#define AArenaRangedWeapon_Instant_USTRUCT_BODY_LINE_11 \
	friend THEARENA_API class UScriptStruct* Z_Construct_UScriptStruct_AArenaRangedWeapon_Instant_FInstantHitInfo(); \
	THEARENA_API static class UScriptStruct* StaticStruct();


#define AArenaRangedWeapon_Instant_USTRUCT_BODY_LINE_26 \
	friend THEARENA_API class UScriptStruct* Z_Construct_UScriptStruct_AArenaRangedWeapon_Instant_FInstantWeaponData(); \
	THEARENA_API static class UScriptStruct* StaticStruct();


#define AArenaRangedWeapon_Instant_EVENTPARMS \
struct ArenaRangedWeapon_Instant_eventServerNotifyHit_Parms \
{ \
	struct FHitResult Impact; \
	struct FVector_NetQuantizeNormal ShootDir; \
	int32 RandomSeed; \
	float ReticleSpread; \
}; \
struct ArenaRangedWeapon_Instant_eventServerNotifyMiss_Parms \
{ \
	struct FVector_NetQuantizeNormal ShootDir; \
	int32 RandomSeed; \
	float ReticleSpread; \
};


#define AArenaRangedWeapon_Instant_RPC_WRAPPERS \
	 virtual bool ServerNotifyMiss_Validate(struct FVector_NetQuantizeNormal ShootDir, int32 RandomSeed, float ReticleSpread); \
	virtual void ServerNotifyMiss_Implementation(struct FVector_NetQuantizeNormal ShootDir, int32 RandomSeed, float ReticleSpread); \
 \
	DECLARE_FUNCTION(execServerNotifyMiss) \
	{ \
		P_GET_STRUCT(struct FVector_NetQuantizeNormal,ShootDir); \
		P_GET_PROPERTY(UIntProperty,RandomSeed); \
		P_GET_PROPERTY(UFloatProperty,ReticleSpread); \
		P_FINISH; \
		if (!this->ServerNotifyMiss_Validate(ShootDir,RandomSeed,ReticleSpread)) \
		{ \
			RPC_ValidateFailed(TEXT("ServerNotifyMiss_Validate")); \
			return; \
		} \
		this->ServerNotifyMiss_Implementation(ShootDir,RandomSeed,ReticleSpread); \
	} \
	 virtual bool ServerNotifyHit_Validate(const struct FHitResult Impact, struct FVector_NetQuantizeNormal ShootDir, int32 RandomSeed, float ReticleSpread); \
	virtual void ServerNotifyHit_Implementation(const struct FHitResult Impact, struct FVector_NetQuantizeNormal ShootDir, int32 RandomSeed, float ReticleSpread); \
 \
	DECLARE_FUNCTION(execServerNotifyHit) \
	{ \
		P_GET_STRUCT(struct FHitResult,Impact); \
		P_GET_STRUCT(struct FVector_NetQuantizeNormal,ShootDir); \
		P_GET_PROPERTY(UIntProperty,RandomSeed); \
		P_GET_PROPERTY(UFloatProperty,ReticleSpread); \
		P_FINISH; \
		if (!this->ServerNotifyHit_Validate(Impact,ShootDir,RandomSeed,ReticleSpread)) \
		{ \
			RPC_ValidateFailed(TEXT("ServerNotifyHit_Validate")); \
			return; \
		} \
		this->ServerNotifyHit_Implementation(Impact,ShootDir,RandomSeed,ReticleSpread); \
	} \
	DECLARE_FUNCTION(execOnRep_HitNotify) \
	{ \
		P_FINISH; \
		this->OnRep_HitNotify(); \
	}


#define AArenaRangedWeapon_Instant_CALLBACK_WRAPPERS
#define AArenaRangedWeapon_Instant_INCLASS \
	private: \
	static void StaticRegisterNativesAArenaRangedWeapon_Instant(); \
	friend THEARENA_API class UClass* Z_Construct_UClass_AArenaRangedWeapon_Instant(); \
	public: \
	DECLARE_CLASS(AArenaRangedWeapon_Instant, AArenaRangedWeapon, COMPILED_IN_FLAGS(CLASS_Abstract), 0, TheArena, NO_API) \
	DECLARE_SERIALIZER(AArenaRangedWeapon_Instant) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	UObject* _getUObject() const { return const_cast<AArenaRangedWeapon_Instant*>(this); } \
	virtual void GetLifetimeReplicatedProps( TArray< FLifetimeProperty > & OutLifetimeProps ) const override;


#define AArenaRangedWeapon_Instant_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AArenaRangedWeapon_Instant(const class FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AArenaRangedWeapon_Instant) \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API AArenaRangedWeapon_Instant(const AArenaRangedWeapon_Instant& InCopy); \
public:


#define AArenaRangedWeapon_Instant_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AArenaRangedWeapon_Instant(const class FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) { }; \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API AArenaRangedWeapon_Instant(const AArenaRangedWeapon_Instant& InCopy); \
public: \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AArenaRangedWeapon_Instant)


#undef UCLASS_CURRENT_FILE_NAME
#define UCLASS_CURRENT_FILE_NAME AArenaRangedWeapon_Instant


#undef UCLASS
#undef UINTERFACE
#if UE_BUILD_DOCS
#define UCLASS(...)
#else
#define UCLASS(...) \
AArenaRangedWeapon_Instant_EVENTPARMS
#endif


#undef GENERATED_UCLASS_BODY
#undef GENERATED_BODY
#undef GENERATED_IINTERFACE_BODY
#define GENERATED_UCLASS_BODY() \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AArenaRangedWeapon_Instant_RPC_WRAPPERS \
	AArenaRangedWeapon_Instant_CALLBACK_WRAPPERS \
	AArenaRangedWeapon_Instant_INCLASS \
	AArenaRangedWeapon_Instant_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GENERATED_BODY() \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AArenaRangedWeapon_Instant_RPC_WRAPPERS \
	AArenaRangedWeapon_Instant_CALLBACK_WRAPPERS \
	AArenaRangedWeapon_Instant_INCLASS \
	AArenaRangedWeapon_Instant_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class ArenaRangedWeapon_Instant."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


