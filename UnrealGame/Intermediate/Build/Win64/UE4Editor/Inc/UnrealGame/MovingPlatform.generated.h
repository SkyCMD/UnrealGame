// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UNREALGAME_MovingPlatform_generated_h
#error "MovingPlatform.generated.h already included, missing '#pragma once' in MovingPlatform.h"
#endif
#define UNREALGAME_MovingPlatform_generated_h

#define UnrealGame_Source_UnrealGame_MovingPlatform_h_13_SPARSE_DATA
#define UnrealGame_Source_UnrealGame_MovingPlatform_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execReturnToStart);


#define UnrealGame_Source_UnrealGame_MovingPlatform_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execReturnToStart);


#define UnrealGame_Source_UnrealGame_MovingPlatform_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMovingPlatform(); \
	friend struct Z_Construct_UClass_AMovingPlatform_Statics; \
public: \
	DECLARE_CLASS(AMovingPlatform, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnrealGame"), NO_API) \
	DECLARE_SERIALIZER(AMovingPlatform)


#define UnrealGame_Source_UnrealGame_MovingPlatform_h_13_INCLASS \
private: \
	static void StaticRegisterNativesAMovingPlatform(); \
	friend struct Z_Construct_UClass_AMovingPlatform_Statics; \
public: \
	DECLARE_CLASS(AMovingPlatform, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnrealGame"), NO_API) \
	DECLARE_SERIALIZER(AMovingPlatform)


#define UnrealGame_Source_UnrealGame_MovingPlatform_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMovingPlatform(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMovingPlatform) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMovingPlatform); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMovingPlatform); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMovingPlatform(AMovingPlatform&&); \
	NO_API AMovingPlatform(const AMovingPlatform&); \
public:


#define UnrealGame_Source_UnrealGame_MovingPlatform_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMovingPlatform(AMovingPlatform&&); \
	NO_API AMovingPlatform(const AMovingPlatform&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMovingPlatform); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMovingPlatform); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMovingPlatform)


#define UnrealGame_Source_UnrealGame_MovingPlatform_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__xDistance() { return STRUCT_OFFSET(AMovingPlatform, xDistance); } \
	FORCEINLINE static uint32 __PPO__yDistance() { return STRUCT_OFFSET(AMovingPlatform, yDistance); } \
	FORCEINLINE static uint32 __PPO__zDistance() { return STRUCT_OFFSET(AMovingPlatform, zDistance); } \
	FORCEINLINE static uint32 __PPO__zSpeed() { return STRUCT_OFFSET(AMovingPlatform, zSpeed); } \
	FORCEINLINE static uint32 __PPO__ySpeed() { return STRUCT_OFFSET(AMovingPlatform, ySpeed); } \
	FORCEINLINE static uint32 __PPO__xSpeed() { return STRUCT_OFFSET(AMovingPlatform, xSpeed); } \
	FORCEINLINE static uint32 __PPO__reverseAtEnd() { return STRUCT_OFFSET(AMovingPlatform, reverseAtEnd); } \
	FORCEINLINE static uint32 __PPO__reachedEnd() { return STRUCT_OFFSET(AMovingPlatform, reachedEnd); } \
	FORCEINLINE static uint32 __PPO__useActivationBox() { return STRUCT_OFFSET(AMovingPlatform, useActivationBox); } \
	FORCEINLINE static uint32 __PPO__startMoving() { return STRUCT_OFFSET(AMovingPlatform, startMoving); } \
	FORCEINLINE static uint32 __PPO__startReturning() { return STRUCT_OFFSET(AMovingPlatform, startReturning); }


#define UnrealGame_Source_UnrealGame_MovingPlatform_h_10_PROLOG
#define UnrealGame_Source_UnrealGame_MovingPlatform_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealGame_Source_UnrealGame_MovingPlatform_h_13_PRIVATE_PROPERTY_OFFSET \
	UnrealGame_Source_UnrealGame_MovingPlatform_h_13_SPARSE_DATA \
	UnrealGame_Source_UnrealGame_MovingPlatform_h_13_RPC_WRAPPERS \
	UnrealGame_Source_UnrealGame_MovingPlatform_h_13_INCLASS \
	UnrealGame_Source_UnrealGame_MovingPlatform_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UnrealGame_Source_UnrealGame_MovingPlatform_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealGame_Source_UnrealGame_MovingPlatform_h_13_PRIVATE_PROPERTY_OFFSET \
	UnrealGame_Source_UnrealGame_MovingPlatform_h_13_SPARSE_DATA \
	UnrealGame_Source_UnrealGame_MovingPlatform_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	UnrealGame_Source_UnrealGame_MovingPlatform_h_13_INCLASS_NO_PURE_DECLS \
	UnrealGame_Source_UnrealGame_MovingPlatform_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREALGAME_API UClass* StaticClass<class AMovingPlatform>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UnrealGame_Source_UnrealGame_MovingPlatform_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
