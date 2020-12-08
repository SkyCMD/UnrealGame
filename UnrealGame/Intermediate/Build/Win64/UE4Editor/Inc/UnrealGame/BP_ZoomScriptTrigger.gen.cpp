// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealGame/BP_ZoomScriptTrigger.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBP_ZoomScriptTrigger() {}
// Cross Module References
	UNREALGAME_API UClass* Z_Construct_UClass_ABP_ZoomScriptTrigger_NoRegister();
	UNREALGAME_API UClass* Z_Construct_UClass_ABP_ZoomScriptTrigger();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_UnrealGame();
// End Cross Module References
	void ABP_ZoomScriptTrigger::StaticRegisterNativesABP_ZoomScriptTrigger()
	{
	}
	UClass* Z_Construct_UClass_ABP_ZoomScriptTrigger_NoRegister()
	{
		return ABP_ZoomScriptTrigger::StaticClass();
	}
	struct Z_Construct_UClass_ABP_ZoomScriptTrigger_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABP_ZoomScriptTrigger_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_ZoomScriptTrigger_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BP_ZoomScriptTrigger.h" },
		{ "ModuleRelativePath", "BP_ZoomScriptTrigger.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABP_ZoomScriptTrigger_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABP_ZoomScriptTrigger>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABP_ZoomScriptTrigger_Statics::ClassParams = {
		&ABP_ZoomScriptTrigger::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ABP_ZoomScriptTrigger_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_ZoomScriptTrigger_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABP_ZoomScriptTrigger()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABP_ZoomScriptTrigger_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABP_ZoomScriptTrigger, 1229079062);
	template<> UNREALGAME_API UClass* StaticClass<ABP_ZoomScriptTrigger>()
	{
		return ABP_ZoomScriptTrigger::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABP_ZoomScriptTrigger(Z_Construct_UClass_ABP_ZoomScriptTrigger, &ABP_ZoomScriptTrigger::StaticClass, TEXT("/Script/UnrealGame"), TEXT("ABP_ZoomScriptTrigger"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABP_ZoomScriptTrigger);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
