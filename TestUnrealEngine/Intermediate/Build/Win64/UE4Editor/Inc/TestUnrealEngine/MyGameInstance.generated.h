// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TESTUNREALENGINE_MyGameInstance_generated_h
#error "MyGameInstance.generated.h already included, missing '#pragma once' in MyGameInstance.h"
#endif
#define TESTUNREALENGINE_MyGameInstance_generated_h

#define TestUnrealEngine_Source_TestUnrealEngine_MyGameInstance_h_13_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMyCharacterData_Statics; \
	TESTUNREALENGINE_API static class UScriptStruct* StaticStruct(); \
	typedef FTableRowBase Super;


template<> TESTUNREALENGINE_API UScriptStruct* StaticStruct<struct FMyCharacterData>();

#define TestUnrealEngine_Source_TestUnrealEngine_MyGameInstance_h_30_SPARSE_DATA
#define TestUnrealEngine_Source_TestUnrealEngine_MyGameInstance_h_30_RPC_WRAPPERS
#define TestUnrealEngine_Source_TestUnrealEngine_MyGameInstance_h_30_RPC_WRAPPERS_NO_PURE_DECLS
#define TestUnrealEngine_Source_TestUnrealEngine_MyGameInstance_h_30_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMyGameInstance(); \
	friend struct Z_Construct_UClass_UMyGameInstance_Statics; \
public: \
	DECLARE_CLASS(UMyGameInstance, UGameInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/TestUnrealEngine"), NO_API) \
	DECLARE_SERIALIZER(UMyGameInstance)


#define TestUnrealEngine_Source_TestUnrealEngine_MyGameInstance_h_30_INCLASS \
private: \
	static void StaticRegisterNativesUMyGameInstance(); \
	friend struct Z_Construct_UClass_UMyGameInstance_Statics; \
public: \
	DECLARE_CLASS(UMyGameInstance, UGameInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/TestUnrealEngine"), NO_API) \
	DECLARE_SERIALIZER(UMyGameInstance)


#define TestUnrealEngine_Source_TestUnrealEngine_MyGameInstance_h_30_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMyGameInstance(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMyGameInstance) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMyGameInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMyGameInstance); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMyGameInstance(UMyGameInstance&&); \
	NO_API UMyGameInstance(const UMyGameInstance&); \
public:


#define TestUnrealEngine_Source_TestUnrealEngine_MyGameInstance_h_30_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMyGameInstance(UMyGameInstance&&); \
	NO_API UMyGameInstance(const UMyGameInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMyGameInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMyGameInstance); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMyGameInstance)


#define TestUnrealEngine_Source_TestUnrealEngine_MyGameInstance_h_30_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__MyStats() { return STRUCT_OFFSET(UMyGameInstance, MyStats); }


#define TestUnrealEngine_Source_TestUnrealEngine_MyGameInstance_h_27_PROLOG
#define TestUnrealEngine_Source_TestUnrealEngine_MyGameInstance_h_30_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TestUnrealEngine_Source_TestUnrealEngine_MyGameInstance_h_30_PRIVATE_PROPERTY_OFFSET \
	TestUnrealEngine_Source_TestUnrealEngine_MyGameInstance_h_30_SPARSE_DATA \
	TestUnrealEngine_Source_TestUnrealEngine_MyGameInstance_h_30_RPC_WRAPPERS \
	TestUnrealEngine_Source_TestUnrealEngine_MyGameInstance_h_30_INCLASS \
	TestUnrealEngine_Source_TestUnrealEngine_MyGameInstance_h_30_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TestUnrealEngine_Source_TestUnrealEngine_MyGameInstance_h_30_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TestUnrealEngine_Source_TestUnrealEngine_MyGameInstance_h_30_PRIVATE_PROPERTY_OFFSET \
	TestUnrealEngine_Source_TestUnrealEngine_MyGameInstance_h_30_SPARSE_DATA \
	TestUnrealEngine_Source_TestUnrealEngine_MyGameInstance_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
	TestUnrealEngine_Source_TestUnrealEngine_MyGameInstance_h_30_INCLASS_NO_PURE_DECLS \
	TestUnrealEngine_Source_TestUnrealEngine_MyGameInstance_h_30_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TESTUNREALENGINE_API UClass* StaticClass<class UMyGameInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TestUnrealEngine_Source_TestUnrealEngine_MyGameInstance_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
