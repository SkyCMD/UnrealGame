// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealGame/DashCameraShake.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDashCameraShake() {}
// Cross Module References
	UNREALGAME_API UClass* Z_Construct_UClass_UDashCameraShake_NoRegister();
	UNREALGAME_API UClass* Z_Construct_UClass_UDashCameraShake();
	ENGINE_API UClass* Z_Construct_UClass_UCameraShake();
	UPackage* Z_Construct_UPackage__Script_UnrealGame();
// End Cross Module References
	void UDashCameraShake::StaticRegisterNativesUDashCameraShake()
	{
	}
	UClass* Z_Construct_UClass_UDashCameraShake_NoRegister()
	{
		return UDashCameraShake::StaticClass();
	}
	struct Z_Construct_UClass_UDashCameraShake_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDashCameraShake_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCameraShake,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDashCameraShake_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "DashCameraShake.h" },
		{ "ModuleRelativePath", "DashCameraShake.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDashCameraShake_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDashCameraShake>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDashCameraShake_Statics::ClassParams = {
		&UDashCameraShake::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDashCameraShake_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDashCameraShake_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDashCameraShake()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDashCameraShake_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDashCameraShake, 1909263365);
	template<> UNREALGAME_API UClass* StaticClass<UDashCameraShake>()
	{
		return UDashCameraShake::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDashCameraShake(Z_Construct_UClass_UDashCameraShake, &UDashCameraShake::StaticClass, TEXT("/Script/UnrealGame"), TEXT("UDashCameraShake"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDashCameraShake);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
