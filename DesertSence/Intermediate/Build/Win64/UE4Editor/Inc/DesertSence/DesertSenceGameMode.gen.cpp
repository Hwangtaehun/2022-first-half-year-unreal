// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DesertSence/DesertSenceGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDesertSenceGameMode() {}
// Cross Module References
	DESERTSENCE_API UClass* Z_Construct_UClass_ADesertSenceGameMode_NoRegister();
	DESERTSENCE_API UClass* Z_Construct_UClass_ADesertSenceGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_DesertSence();
// End Cross Module References
	void ADesertSenceGameMode::StaticRegisterNativesADesertSenceGameMode()
	{
	}
	UClass* Z_Construct_UClass_ADesertSenceGameMode_NoRegister()
	{
		return ADesertSenceGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ADesertSenceGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADesertSenceGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_DesertSence,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADesertSenceGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "DesertSenceGameMode.h" },
		{ "ModuleRelativePath", "DesertSenceGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADesertSenceGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADesertSenceGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ADesertSenceGameMode_Statics::ClassParams = {
		&ADesertSenceGameMode::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ADesertSenceGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ADesertSenceGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADesertSenceGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ADesertSenceGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ADesertSenceGameMode, 2447988124);
	template<> DESERTSENCE_API UClass* StaticClass<ADesertSenceGameMode>()
	{
		return ADesertSenceGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ADesertSenceGameMode(Z_Construct_UClass_ADesertSenceGameMode, &ADesertSenceGameMode::StaticClass, TEXT("/Script/DesertSence"), TEXT("ADesertSenceGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADesertSenceGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
