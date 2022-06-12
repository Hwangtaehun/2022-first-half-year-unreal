// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TEST1_MyActor_static_generated_h
#error "MyActor_static.generated.h already included, missing '#pragma once' in MyActor_static.h"
#endif
#define TEST1_MyActor_static_generated_h

#define Test1_Source_Test1_MyActor_static_h_12_SPARSE_DATA
#define Test1_Source_Test1_MyActor_static_h_12_RPC_WRAPPERS
#define Test1_Source_Test1_MyActor_static_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define Test1_Source_Test1_MyActor_static_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMyActor_static(); \
	friend struct Z_Construct_UClass_AMyActor_static_Statics; \
public: \
	DECLARE_CLASS(AMyActor_static, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Test1"), NO_API) \
	DECLARE_SERIALIZER(AMyActor_static)


#define Test1_Source_Test1_MyActor_static_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAMyActor_static(); \
	friend struct Z_Construct_UClass_AMyActor_static_Statics; \
public: \
	DECLARE_CLASS(AMyActor_static, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Test1"), NO_API) \
	DECLARE_SERIALIZER(AMyActor_static)


#define Test1_Source_Test1_MyActor_static_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMyActor_static(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMyActor_static) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyActor_static); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyActor_static); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyActor_static(AMyActor_static&&); \
	NO_API AMyActor_static(const AMyActor_static&); \
public:


#define Test1_Source_Test1_MyActor_static_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyActor_static(AMyActor_static&&); \
	NO_API AMyActor_static(const AMyActor_static&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyActor_static); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyActor_static); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMyActor_static)


#define Test1_Source_Test1_MyActor_static_h_12_PRIVATE_PROPERTY_OFFSET
#define Test1_Source_Test1_MyActor_static_h_9_PROLOG
#define Test1_Source_Test1_MyActor_static_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Test1_Source_Test1_MyActor_static_h_12_PRIVATE_PROPERTY_OFFSET \
	Test1_Source_Test1_MyActor_static_h_12_SPARSE_DATA \
	Test1_Source_Test1_MyActor_static_h_12_RPC_WRAPPERS \
	Test1_Source_Test1_MyActor_static_h_12_INCLASS \
	Test1_Source_Test1_MyActor_static_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Test1_Source_Test1_MyActor_static_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Test1_Source_Test1_MyActor_static_h_12_PRIVATE_PROPERTY_OFFSET \
	Test1_Source_Test1_MyActor_static_h_12_SPARSE_DATA \
	Test1_Source_Test1_MyActor_static_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Test1_Source_Test1_MyActor_static_h_12_INCLASS_NO_PURE_DECLS \
	Test1_Source_Test1_MyActor_static_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TEST1_API UClass* StaticClass<class AMyActor_static>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Test1_Source_Test1_MyActor_static_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
