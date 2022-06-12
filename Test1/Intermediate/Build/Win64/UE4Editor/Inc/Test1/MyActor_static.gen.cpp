// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Test1/MyActor_static.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyActor_static() {}
// Cross Module References
	TEST1_API UClass* Z_Construct_UClass_AMyActor_static_NoRegister();
	TEST1_API UClass* Z_Construct_UClass_AMyActor_static();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Test1();
// End Cross Module References
	void AMyActor_static::StaticRegisterNativesAMyActor_static()
	{
	}
	UClass* Z_Construct_UClass_AMyActor_static_NoRegister()
	{
		return AMyActor_static::StaticClass();
	}
	struct Z_Construct_UClass_AMyActor_static_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMyActor_static_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Test1,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyActor_static_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MyActor_static.h" },
		{ "ModuleRelativePath", "MyActor_static.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMyActor_static_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyActor_static>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMyActor_static_Statics::ClassParams = {
		&AMyActor_static::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMyActor_static_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMyActor_static_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMyActor_static()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMyActor_static_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMyActor_static, 3875744175);
	template<> TEST1_API UClass* StaticClass<AMyActor_static>()
	{
		return AMyActor_static::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMyActor_static(Z_Construct_UClass_AMyActor_static, &AMyActor_static::StaticClass, TEXT("/Script/Test1"), TEXT("AMyActor_static"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyActor_static);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
