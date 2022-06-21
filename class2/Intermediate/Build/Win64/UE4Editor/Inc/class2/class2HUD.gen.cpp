// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "class2/class2HUD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeclass2HUD() {}
// Cross Module References
	CLASS2_API UClass* Z_Construct_UClass_Aclass2HUD_NoRegister();
	CLASS2_API UClass* Z_Construct_UClass_Aclass2HUD();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_class2();
// End Cross Module References
	void Aclass2HUD::StaticRegisterNativesAclass2HUD()
	{
	}
	UClass* Z_Construct_UClass_Aclass2HUD_NoRegister()
	{
		return Aclass2HUD::StaticClass();
	}
	struct Z_Construct_UClass_Aclass2HUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_Aclass2HUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_class2,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Aclass2HUD_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "class2HUD.h" },
		{ "ModuleRelativePath", "class2HUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_Aclass2HUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<Aclass2HUD>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_Aclass2HUD_Statics::ClassParams = {
		&Aclass2HUD::StaticClass,
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
		0x008002ACu,
		METADATA_PARAMS(Z_Construct_UClass_Aclass2HUD_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_Aclass2HUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_Aclass2HUD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_Aclass2HUD_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(Aclass2HUD, 262364438);
	template<> CLASS2_API UClass* StaticClass<Aclass2HUD>()
	{
		return Aclass2HUD::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_Aclass2HUD(Z_Construct_UClass_Aclass2HUD, &Aclass2HUD::StaticClass, TEXT("/Script/class2"), TEXT("Aclass2HUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(Aclass2HUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
