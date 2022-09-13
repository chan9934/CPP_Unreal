// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TESTUNREALENGINE_TestAnimInstance_generated_h
#error "TestAnimInstance.generated.h already included, missing '#pragma once' in TestAnimInstance.h"
#endif
#define TESTUNREALENGINE_TestAnimInstance_generated_h

#define TestUnrealEngine_Source_TestUnrealEngine_TestAnimInstance_h_16_SPARSE_DATA
#define TestUnrealEngine_Source_TestUnrealEngine_TestAnimInstance_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAnimNotify_AttackHit);


#define TestUnrealEngine_Source_TestUnrealEngine_TestAnimInstance_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAnimNotify_AttackHit);


#define TestUnrealEngine_Source_TestUnrealEngine_TestAnimInstance_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTestAnimInstance(); \
	friend struct Z_Construct_UClass_UTestAnimInstance_Statics; \
public: \
	DECLARE_CLASS(UTestAnimInstance, UAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/TestUnrealEngine"), NO_API) \
	DECLARE_SERIALIZER(UTestAnimInstance)


#define TestUnrealEngine_Source_TestUnrealEngine_TestAnimInstance_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUTestAnimInstance(); \
	friend struct Z_Construct_UClass_UTestAnimInstance_Statics; \
public: \
	DECLARE_CLASS(UTestAnimInstance, UAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/TestUnrealEngine"), NO_API) \
	DECLARE_SERIALIZER(UTestAnimInstance)


#define TestUnrealEngine_Source_TestUnrealEngine_TestAnimInstance_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTestAnimInstance(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTestAnimInstance) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTestAnimInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTestAnimInstance); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTestAnimInstance(UTestAnimInstance&&); \
	NO_API UTestAnimInstance(const UTestAnimInstance&); \
public:


#define TestUnrealEngine_Source_TestUnrealEngine_TestAnimInstance_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTestAnimInstance(UTestAnimInstance&&); \
	NO_API UTestAnimInstance(const UTestAnimInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTestAnimInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTestAnimInstance); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UTestAnimInstance)


#define TestUnrealEngine_Source_TestUnrealEngine_TestAnimInstance_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Speed() { return STRUCT_OFFSET(UTestAnimInstance, Speed); } \
	FORCEINLINE static uint32 __PPO__IsFalling() { return STRUCT_OFFSET(UTestAnimInstance, IsFalling); } \
	FORCEINLINE static uint32 __PPO__AnimMontage() { return STRUCT_OFFSET(UTestAnimInstance, AnimMontage); } \
	FORCEINLINE static uint32 __PPO__Horizontal() { return STRUCT_OFFSET(UTestAnimInstance, Horizontal); } \
	FORCEINLINE static uint32 __PPO__Vertical() { return STRUCT_OFFSET(UTestAnimInstance, Vertical); }


#define TestUnrealEngine_Source_TestUnrealEngine_TestAnimInstance_h_13_PROLOG
#define TestUnrealEngine_Source_TestUnrealEngine_TestAnimInstance_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TestUnrealEngine_Source_TestUnrealEngine_TestAnimInstance_h_16_PRIVATE_PROPERTY_OFFSET \
	TestUnrealEngine_Source_TestUnrealEngine_TestAnimInstance_h_16_SPARSE_DATA \
	TestUnrealEngine_Source_TestUnrealEngine_TestAnimInstance_h_16_RPC_WRAPPERS \
	TestUnrealEngine_Source_TestUnrealEngine_TestAnimInstance_h_16_INCLASS \
	TestUnrealEngine_Source_TestUnrealEngine_TestAnimInstance_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TestUnrealEngine_Source_TestUnrealEngine_TestAnimInstance_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TestUnrealEngine_Source_TestUnrealEngine_TestAnimInstance_h_16_PRIVATE_PROPERTY_OFFSET \
	TestUnrealEngine_Source_TestUnrealEngine_TestAnimInstance_h_16_SPARSE_DATA \
	TestUnrealEngine_Source_TestUnrealEngine_TestAnimInstance_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	TestUnrealEngine_Source_TestUnrealEngine_TestAnimInstance_h_16_INCLASS_NO_PURE_DECLS \
	TestUnrealEngine_Source_TestUnrealEngine_TestAnimInstance_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TESTUNREALENGINE_API UClass* StaticClass<class UTestAnimInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TestUnrealEngine_Source_TestUnrealEngine_TestAnimInstance_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
