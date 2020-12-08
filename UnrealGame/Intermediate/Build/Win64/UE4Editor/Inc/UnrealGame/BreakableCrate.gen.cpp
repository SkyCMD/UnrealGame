// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealGame/BreakableCrate.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBreakableCrate() {}
// Cross Module References
	UNREALGAME_API UClass* Z_Construct_UClass_ABreakableCrate_NoRegister();
	UNREALGAME_API UClass* Z_Construct_UClass_ABreakableCrate();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_UnrealGame();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void ABreakableCrate::StaticRegisterNativesABreakableCrate()
	{
	}
	UClass* Z_Construct_UClass_ABreakableCrate_NoRegister()
	{
		return ABreakableCrate::StaticClass();
	}
	struct Z_Construct_UClass_ABreakableCrate_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoxMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BoxMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_broken_MetaData[];
#endif
		static void NewProp_broken_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_broken;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_timer_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_timer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABreakableCrate_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABreakableCrate_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BreakableCrate.h" },
		{ "ModuleRelativePath", "BreakableCrate.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABreakableCrate_Statics::NewProp_BoxMesh_MetaData[] = {
		{ "Category", "Mesh" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "BreakableCrate.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABreakableCrate_Statics::NewProp_BoxMesh = { "BoxMesh", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABreakableCrate, BoxMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABreakableCrate_Statics::NewProp_BoxMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABreakableCrate_Statics::NewProp_BoxMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABreakableCrate_Statics::NewProp_broken_MetaData[] = {
		{ "Category", "Beh" },
		{ "ModuleRelativePath", "BreakableCrate.h" },
	};
#endif
	void Z_Construct_UClass_ABreakableCrate_Statics::NewProp_broken_SetBit(void* Obj)
	{
		((ABreakableCrate*)Obj)->broken = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABreakableCrate_Statics::NewProp_broken = { "broken", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ABreakableCrate), &Z_Construct_UClass_ABreakableCrate_Statics::NewProp_broken_SetBit, METADATA_PARAMS(Z_Construct_UClass_ABreakableCrate_Statics::NewProp_broken_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABreakableCrate_Statics::NewProp_broken_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABreakableCrate_Statics::NewProp_timer_MetaData[] = {
		{ "Category", "Beh" },
		{ "ModuleRelativePath", "BreakableCrate.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ABreakableCrate_Statics::NewProp_timer = { "timer", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABreakableCrate, timer), METADATA_PARAMS(Z_Construct_UClass_ABreakableCrate_Statics::NewProp_timer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABreakableCrate_Statics::NewProp_timer_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABreakableCrate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABreakableCrate_Statics::NewProp_BoxMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABreakableCrate_Statics::NewProp_broken,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABreakableCrate_Statics::NewProp_timer,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABreakableCrate_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABreakableCrate>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABreakableCrate_Statics::ClassParams = {
		&ABreakableCrate::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ABreakableCrate_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ABreakableCrate_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABreakableCrate_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABreakableCrate_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABreakableCrate()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABreakableCrate_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABreakableCrate, 2785184618);
	template<> UNREALGAME_API UClass* StaticClass<ABreakableCrate>()
	{
		return ABreakableCrate::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABreakableCrate(Z_Construct_UClass_ABreakableCrate, &ABreakableCrate::StaticClass, TEXT("/Script/UnrealGame"), TEXT("ABreakableCrate"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABreakableCrate);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
