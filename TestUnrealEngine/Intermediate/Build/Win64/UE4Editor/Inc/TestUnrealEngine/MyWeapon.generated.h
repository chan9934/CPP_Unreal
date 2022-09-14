// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef TESTUNREALENGINE_MyWeapon_generated_h
#error "MyWeapon.generated.h already included, missing '#pragma once' in MyWeapon.h"
#endif
#define TESTUNREALENGINE_MyWeapon_generated_h

#define TestUnrealEngine_Source_TestUnrealEngine_MyWeapon_h_12_SPARSE_DATA
#define TestUnrealEngine_Source_TestUnrealEngine_MyWeapon_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnCharacterOverlap);


#define TestUnrealEngine_Source_TestUnrealEngine_MyWeapon_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnCharacterOverlap);


#define TestUnrealEngine_Source_TestUnrealEngine_MyWeapon_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMyWeapon(); \
	friend struct Z_Construct_UClass_AMyWeapon_Statics; \
public: \
	DECLARE_CLASS(AMyWeapon, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TestUnrealEngine"), NO_API) \
	DECLARE_SERIALIZER(AMyWeapon)


#define TestUnrealEngine_Source_TestUnrealEngine_MyWeapon_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAMyWeapon(); \
	friend struct Z_Construct_UClass_AMyWeapon_Statics; \
public: \
	DECLARE_CLASS(AMyWeapon, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TestUnrealEngine"), NO_API) \
	DECLARE_SERIALIZER(AMyWeapon)


#define TestUnrealEngine_Source_TestUnrealEngine_MyWeapon_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMyWeapon(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMyWeapon) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyWeapon); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyWeapon); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyWeapon(AMyWeapon&&); \
	NO_API AMyWeapon(const AMyWeapon&); \
public:


#define TestUnrealEngine_Source_TestUnrealEngine_MyWeapon_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyWeapon(AMyWeapon&&); \
	NO_API AMyWeapon(const AMyWeapon&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyWeapon); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyWeapon); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMyWeapon)


#define TestUnrealEngine_Source_TestUnrealEngine_MyWeapon_h_12_PRIVATE_PROPERTY_OFFSET
#define TestUnrealEngine_Source_TestUnrealEngine_MyWeapon_h_9_PROLOG
#define TestUnrealEngine_Source_TestUnrealEngine_MyWeapon_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TestUnrealEngine_Source_TestUnrealEngine_MyWeapon_h_12_PRIVATE_PROPERTY_OFFSET \
	TestUnrealEngine_Source_TestUnrealEngine_MyWeapon_h_12_SPARSE_DATA \
	TestUnrealEngine_Source_TestUnrealEngine_MyWeapon_h_12_RPC_WRAPPERS \
	TestUnrealEngine_Source_TestUnrealEngine_MyWeapon_h_12_INCLASS \
	TestUnrealEngine_Source_TestUnrealEngine_MyWeapon_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TestUnrealEngine_Source_TestUnrealEngine_MyWeapon_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TestUnrealEngine_Source_TestUnrealEngine_MyWeapon_h_12_PRIVATE_PROPERTY_OFFSET \
	TestUnrealEngine_Source_TestUnrealEngine_MyWeapon_h_12_SPARSE_DATA \
	TestUnrealEngine_Source_TestUnrealEngine_MyWeapon_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	TestUnrealEngine_Source_TestUnrealEngine_MyWeapon_h_12_INCLASS_NO_PURE_DECLS \
	TestUnrealEngine_Source_TestUnrealEngine_MyWeapon_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TESTUNREALENGINE_API UClass* StaticClass<class AMyWeapon>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TestUnrealEngine_Source_TestUnrealEngine_MyWeapon_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
