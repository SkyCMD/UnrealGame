// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealGame/MainPlayer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMainPlayer() {}
// Cross Module References
	UNREALGAME_API UClass* Z_Construct_UClass_AMainPlayer_NoRegister();
	UNREALGAME_API UClass* Z_Construct_UClass_AMainPlayer();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_UnrealGame();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AMainPlayer::execgetMoveDir)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->getMoveDir();
		P_NATIVE_END;
	}
	void AMainPlayer::StaticRegisterNativesAMainPlayer()
	{
		UClass* Class = AMainPlayer::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "getMoveDir", &AMainPlayer::execgetMoveDir },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMainPlayer_getMoveDir_Statics
	{
		struct MainPlayer_eventgetMoveDir_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMainPlayer_getMoveDir_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MainPlayer_eventgetMoveDir_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMainPlayer_getMoveDir_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMainPlayer_getMoveDir_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMainPlayer_getMoveDir_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "MainPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMainPlayer_getMoveDir_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMainPlayer, nullptr, "getMoveDir", nullptr, nullptr, sizeof(MainPlayer_eventgetMoveDir_Parms), Z_Construct_UFunction_AMainPlayer_getMoveDir_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMainPlayer_getMoveDir_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMainPlayer_getMoveDir_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMainPlayer_getMoveDir_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMainPlayer_getMoveDir()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMainPlayer_getMoveDir_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AMainPlayer_NoRegister()
	{
		return AMainPlayer::StaticClass();
	}
	struct Z_Construct_UClass_AMainPlayer_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraShakeTimer_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_CameraShakeTimer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DashCameraShake_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_DashCameraShake;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_dashSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_dashSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_dashDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_dashDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_dashing_MetaData[];
#endif
		static void NewProp_dashing_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_dashing;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_prepForDash_MetaData[];
#endif
		static void NewProp_prepForDash_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_prepForDash;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Camera_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Camera;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpringArm_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpringArm;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMainPlayer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AMainPlayer_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMainPlayer_getMoveDir, "getMoveDir" }, // 1529955024
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMainPlayer_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "MainPlayer.h" },
		{ "ModuleRelativePath", "MainPlayer.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMainPlayer_Statics::NewProp_CameraShakeTimer_MetaData[] = {
		{ "Category", "Dash" },
		{ "Comment", "//Number of frames the camera will shake for\n" },
		{ "ModuleRelativePath", "MainPlayer.h" },
		{ "ToolTip", "Number of frames the camera will shake for" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AMainPlayer_Statics::NewProp_CameraShakeTimer = { "CameraShakeTimer", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMainPlayer, CameraShakeTimer), METADATA_PARAMS(Z_Construct_UClass_AMainPlayer_Statics::NewProp_CameraShakeTimer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMainPlayer_Statics::NewProp_CameraShakeTimer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMainPlayer_Statics::NewProp_DashCameraShake_MetaData[] = {
		{ "Category", "Dash" },
		{ "Comment", "//Maximum amount of pixels the camera will shake per frame\n" },
		{ "ModuleRelativePath", "MainPlayer.h" },
		{ "ToolTip", "Maximum amount of pixels the camera will shake per frame" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AMainPlayer_Statics::NewProp_DashCameraShake = { "DashCameraShake", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMainPlayer, DashCameraShake), METADATA_PARAMS(Z_Construct_UClass_AMainPlayer_Statics::NewProp_DashCameraShake_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMainPlayer_Statics::NewProp_DashCameraShake_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMainPlayer_Statics::NewProp_dashSpeed_MetaData[] = {
		{ "Category", "Dash" },
		{ "Comment", "//The number of pixels the player will travel per second\n" },
		{ "ModuleRelativePath", "MainPlayer.h" },
		{ "ToolTip", "The number of pixels the player will travel per second" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AMainPlayer_Statics::NewProp_dashSpeed = { "dashSpeed", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMainPlayer, dashSpeed), METADATA_PARAMS(Z_Construct_UClass_AMainPlayer_Statics::NewProp_dashSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMainPlayer_Statics::NewProp_dashSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMainPlayer_Statics::NewProp_dashDistance_MetaData[] = {
		{ "Category", "Dash" },
		{ "Comment", "//This is the total distance the player will travel\n" },
		{ "ModuleRelativePath", "MainPlayer.h" },
		{ "ToolTip", "This is the total distance the player will travel" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AMainPlayer_Statics::NewProp_dashDistance = { "dashDistance", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMainPlayer, dashDistance), METADATA_PARAMS(Z_Construct_UClass_AMainPlayer_Statics::NewProp_dashDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMainPlayer_Statics::NewProp_dashDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMainPlayer_Statics::NewProp_dashing_MetaData[] = {
		{ "Category", "Dash" },
		{ "ModuleRelativePath", "MainPlayer.h" },
	};
#endif
	void Z_Construct_UClass_AMainPlayer_Statics::NewProp_dashing_SetBit(void* Obj)
	{
		((AMainPlayer*)Obj)->dashing = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMainPlayer_Statics::NewProp_dashing = { "dashing", nullptr, (EPropertyFlags)0x0020080000020015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AMainPlayer), &Z_Construct_UClass_AMainPlayer_Statics::NewProp_dashing_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMainPlayer_Statics::NewProp_dashing_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMainPlayer_Statics::NewProp_dashing_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMainPlayer_Statics::NewProp_prepForDash_MetaData[] = {
		{ "Category", "Dash" },
		{ "ModuleRelativePath", "MainPlayer.h" },
	};
#endif
	void Z_Construct_UClass_AMainPlayer_Statics::NewProp_prepForDash_SetBit(void* Obj)
	{
		((AMainPlayer*)Obj)->prepForDash = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMainPlayer_Statics::NewProp_prepForDash = { "prepForDash", nullptr, (EPropertyFlags)0x0020080000020015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AMainPlayer), &Z_Construct_UClass_AMainPlayer_Statics::NewProp_prepForDash_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMainPlayer_Statics::NewProp_prepForDash_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMainPlayer_Statics::NewProp_prepForDash_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMainPlayer_Statics::NewProp_Camera_MetaData[] = {
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MainPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMainPlayer_Statics::NewProp_Camera = { "Camera", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMainPlayer, Camera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMainPlayer_Statics::NewProp_Camera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMainPlayer_Statics::NewProp_Camera_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMainPlayer_Statics::NewProp_SpringArm_MetaData[] = {
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MainPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMainPlayer_Statics::NewProp_SpringArm = { "SpringArm", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMainPlayer, SpringArm), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMainPlayer_Statics::NewProp_SpringArm_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMainPlayer_Statics::NewProp_SpringArm_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMainPlayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainPlayer_Statics::NewProp_CameraShakeTimer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainPlayer_Statics::NewProp_DashCameraShake,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainPlayer_Statics::NewProp_dashSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainPlayer_Statics::NewProp_dashDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainPlayer_Statics::NewProp_dashing,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainPlayer_Statics::NewProp_prepForDash,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainPlayer_Statics::NewProp_Camera,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainPlayer_Statics::NewProp_SpringArm,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMainPlayer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMainPlayer>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMainPlayer_Statics::ClassParams = {
		&AMainPlayer::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AMainPlayer_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AMainPlayer_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMainPlayer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMainPlayer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMainPlayer()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMainPlayer_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMainPlayer, 727335183);
	template<> UNREALGAME_API UClass* StaticClass<AMainPlayer>()
	{
		return AMainPlayer::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMainPlayer(Z_Construct_UClass_AMainPlayer, &AMainPlayer::StaticClass, TEXT("/Script/UnrealGame"), TEXT("AMainPlayer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMainPlayer);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
