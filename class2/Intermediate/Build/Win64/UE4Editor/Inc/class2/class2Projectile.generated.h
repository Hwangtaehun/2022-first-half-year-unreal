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
struct FVector;
struct FHitResult;
#ifdef CLASS2_class2Projectile_generated_h
#error "class2Projectile.generated.h already included, missing '#pragma once' in class2Projectile.h"
#endif
#define CLASS2_class2Projectile_generated_h

#define class2_Source_class2_class2Projectile_h_15_SPARSE_DATA
#define class2_Source_class2_class2Projectile_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit);


#define class2_Source_class2_class2Projectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define class2_Source_class2_class2Projectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAclass2Projectile(); \
	friend struct Z_Construct_UClass_Aclass2Projectile_Statics; \
public: \
	DECLARE_CLASS(Aclass2Projectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/class2"), NO_API) \
	DECLARE_SERIALIZER(Aclass2Projectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define class2_Source_class2_class2Projectile_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAclass2Projectile(); \
	friend struct Z_Construct_UClass_Aclass2Projectile_Statics; \
public: \
	DECLARE_CLASS(Aclass2Projectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/class2"), NO_API) \
	DECLARE_SERIALIZER(Aclass2Projectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define class2_Source_class2_class2Projectile_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API Aclass2Projectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(Aclass2Projectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, Aclass2Projectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(Aclass2Projectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API Aclass2Projectile(Aclass2Projectile&&); \
	NO_API Aclass2Projectile(const Aclass2Projectile&); \
public:


#define class2_Source_class2_class2Projectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API Aclass2Projectile(Aclass2Projectile&&); \
	NO_API Aclass2Projectile(const Aclass2Projectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, Aclass2Projectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(Aclass2Projectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(Aclass2Projectile)


#define class2_Source_class2_class2Projectile_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CollisionComp() { return STRUCT_OFFSET(Aclass2Projectile, CollisionComp); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(Aclass2Projectile, ProjectileMovement); }


#define class2_Source_class2_class2Projectile_h_12_PROLOG
#define class2_Source_class2_class2Projectile_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	class2_Source_class2_class2Projectile_h_15_PRIVATE_PROPERTY_OFFSET \
	class2_Source_class2_class2Projectile_h_15_SPARSE_DATA \
	class2_Source_class2_class2Projectile_h_15_RPC_WRAPPERS \
	class2_Source_class2_class2Projectile_h_15_INCLASS \
	class2_Source_class2_class2Projectile_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define class2_Source_class2_class2Projectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	class2_Source_class2_class2Projectile_h_15_PRIVATE_PROPERTY_OFFSET \
	class2_Source_class2_class2Projectile_h_15_SPARSE_DATA \
	class2_Source_class2_class2Projectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	class2_Source_class2_class2Projectile_h_15_INCLASS_NO_PURE_DECLS \
	class2_Source_class2_class2Projectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CLASS2_API UClass* StaticClass<class Aclass2Projectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID class2_Source_class2_class2Projectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
