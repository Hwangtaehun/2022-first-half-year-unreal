// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TEST1_MyPawn_generated_h
#error "MyPawn.generated.h already included, missing '#pragma once' in MyPawn.h"
#endif
#define TEST1_MyPawn_generated_h

#define Test1_Source_Test1_MyPawn_h_12_SPARSE_DATA
#define Test1_Source_Test1_MyPawn_h_12_RPC_WRAPPERS
#define Test1_Source_Test1_MyPawn_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define Test1_Source_Test1_MyPawn_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMyPawn(); \
	friend struct Z_Construct_UClass_AMyPawn_Statics; \
public: \
	DECLARE_CLASS(AMyPawn, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Test1"), NO_API) \
	DECLARE_SERIALIZER(AMyPawn)


#define Test1_Source_Test1_MyPawn_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAMyPawn(); \
	friend struct Z_Construct_UClass_AMyPawn_Statics; \
public: \
	DECLARE_CLASS(AMyPawn, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Test1"), NO_API) \
	DECLARE_SERIALIZER(AMyPawn)


#define Test1_Source_Test1_MyPawn_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMyPawn(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMyPawn) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyPawn); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyPawn); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyPawn(AMyPawn&&); \
	NO_API AMyPawn(const AMyPawn&); \
public:


#define Test1_Source_Test1_MyPawn_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyPawn(AMyPawn&&); \
	NO_API AMyPawn(const AMyPawn&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyPawn); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyPawn); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMyPawn)


#define Test1_Source_Test1_MyPawn_h_12_PRIVATE_PROPERTY_OFFSET
#define Test1_Source_Test1_MyPawn_h_9_PROLOG
#define Test1_Source_Test1_MyPawn_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Test1_Source_Test1_MyPawn_h_12_PRIVATE_PROPERTY_OFFSET \
	Test1_Source_Test1_MyPawn_h_12_SPARSE_DATA \
	Test1_Source_Test1_MyPawn_h_12_RPC_WRAPPERS \
	Test1_Source_Test1_MyPawn_h_12_INCLASS \
	Test1_Source_Test1_MyPawn_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Test1_Source_Test1_MyPawn_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Test1_Source_Test1_MyPawn_h_12_PRIVATE_PROPERTY_OFFSET \
	Test1_Source_Test1_MyPawn_h_12_SPARSE_DATA \
	Test1_Source_Test1_MyPawn_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Test1_Source_Test1_MyPawn_h_12_INCLASS_NO_PURE_DECLS \
	Test1_Source_Test1_MyPawn_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TEST1_API UClass* StaticClass<class AMyPawn>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Test1_Source_Test1_MyPawn_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
