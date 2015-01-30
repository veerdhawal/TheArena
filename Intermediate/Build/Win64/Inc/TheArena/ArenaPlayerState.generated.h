// Copyright 1998-2014 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectBase.h"

#ifdef THEARENA_ArenaPlayerState_generated_h
#error "ArenaPlayerState.generated.h already included, missing '#pragma once' in ArenaPlayerState.h"
#endif
#define THEARENA_ArenaPlayerState_generated_h

extern THEARENA_API FName THEARENA_InformAboutKill;
#define AArenaPlayerState_EVENTPARMS \
struct ArenaPlayerState_eventInformAboutKill_Parms \
{ \
	class AArenaPlayerState* KillerPlayerState; \
	const class UDamageType* KillerDamageType; \
	class AArenaPlayerState* KilledPlayerState; \
};


#define AArenaPlayerState_RPC_WRAPPERS \
	DECLARE_FUNCTION(execOnRep_TeamColor) \
	{ \
		P_FINISH; \
		this->OnRep_TeamColor(); \
	} \
	virtual void InformAboutKill_Implementation(class AArenaPlayerState* KillerPlayerState, const class UDamageType* KillerDamageType, class AArenaPlayerState* KilledPlayerState); \
 \
	DECLARE_FUNCTION(execInformAboutKill) \
	{ \
		P_GET_OBJECT(AArenaPlayerState,KillerPlayerState); \
		P_GET_OBJECT(UDamageType,KillerDamageType); \
		P_GET_OBJECT(AArenaPlayerState,KilledPlayerState); \
		P_FINISH; \
		this->InformAboutKill_Implementation(KillerPlayerState,KillerDamageType,KilledPlayerState); \
	}


#define AArenaPlayerState_CALLBACK_WRAPPERS
#define AArenaPlayerState_INCLASS \
	private: \
	static void StaticRegisterNativesAArenaPlayerState(); \
	friend THEARENA_API class UClass* Z_Construct_UClass_AArenaPlayerState(); \
	public: \
	DECLARE_CLASS(AArenaPlayerState, APlayerState, COMPILED_IN_FLAGS(0), 0, TheArena, NO_API) \
	DECLARE_SERIALIZER(AArenaPlayerState) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	UObject* _getUObject() const { return const_cast<AArenaPlayerState*>(this); } \
	virtual void GetLifetimeReplicatedProps( TArray< FLifetimeProperty > & OutLifetimeProps ) const override;


#define AArenaPlayerState_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AArenaPlayerState(const class FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AArenaPlayerState) \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API AArenaPlayerState(const AArenaPlayerState& InCopy); \
public:


#define AArenaPlayerState_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AArenaPlayerState(const class FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) { }; \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API AArenaPlayerState(const AArenaPlayerState& InCopy); \
public: \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AArenaPlayerState)


#undef UCLASS_CURRENT_FILE_NAME
#define UCLASS_CURRENT_FILE_NAME AArenaPlayerState


#undef UCLASS
#undef UINTERFACE
#if UE_BUILD_DOCS
#define UCLASS(...)
#else
#define UCLASS(...) \
AArenaPlayerState_EVENTPARMS
#endif


#undef GENERATED_UCLASS_BODY
#undef GENERATED_BODY
#undef GENERATED_IINTERFACE_BODY
#define GENERATED_UCLASS_BODY() \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AArenaPlayerState_RPC_WRAPPERS \
	AArenaPlayerState_CALLBACK_WRAPPERS \
	AArenaPlayerState_INCLASS \
	AArenaPlayerState_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GENERATED_BODY() \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AArenaPlayerState_RPC_WRAPPERS \
	AArenaPlayerState_CALLBACK_WRAPPERS \
	AArenaPlayerState_INCLASS \
	AArenaPlayerState_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class ArenaPlayerState."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


