// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SnowSence/SnowSenceGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSnowSenceGameMode() {}
// Cross Module References
	SNOWSENCE_API UClass* Z_Construct_UClass_ASnowSenceGameMode_NoRegister();
	SNOWSENCE_API UClass* Z_Construct_UClass_ASnowSenceGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_SnowSence();
// End Cross Module References
	void ASnowSenceGameMode::StaticRegisterNativesASnowSenceGameMode()
	{
	}
	UClass* Z_Construct_UClass_ASnowSenceGameMode_NoRegister()
	{
		return ASnowSenceGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ASnowSenceGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASnowSenceGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_SnowSence,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASnowSenceGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "SnowSenceGameMode.h" },
		{ "ModuleRelativePath", "SnowSenceGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASnowSenceGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASnowSenceGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASnowSenceGameMode_Statics::ClassParams = {
		&ASnowSenceGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_ASnowSenceGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASnowSenceGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASnowSenceGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASnowSenceGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASnowSenceGameMode, 406867589);
	template<> SNOWSENCE_API UClass* StaticClass<ASnowSenceGameMode>()
	{
		return ASnowSenceGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASnowSenceGameMode(Z_Construct_UClass_ASnowSenceGameMode, &ASnowSenceGameMode::StaticClass, TEXT("/Script/SnowSence"), TEXT("ASnowSenceGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASnowSenceGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
