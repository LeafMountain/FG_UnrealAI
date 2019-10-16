// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealAI/UnrealAIPlayerController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUnrealAIPlayerController() {}
// Cross Module References
	UNREALAI_API UClass* Z_Construct_UClass_AUnrealAIPlayerController_NoRegister();
	UNREALAI_API UClass* Z_Construct_UClass_AUnrealAIPlayerController();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_UnrealAI();
// End Cross Module References
	void AUnrealAIPlayerController::StaticRegisterNativesAUnrealAIPlayerController()
	{
	}
	UClass* Z_Construct_UClass_AUnrealAIPlayerController_NoRegister()
	{
		return AUnrealAIPlayerController::StaticClass();
	}
	struct Z_Construct_UClass_AUnrealAIPlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AUnrealAIPlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealAI,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUnrealAIPlayerController_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "UnrealAIPlayerController.h" },
		{ "ModuleRelativePath", "UnrealAIPlayerController.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AUnrealAIPlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AUnrealAIPlayerController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AUnrealAIPlayerController_Statics::ClassParams = {
		&AUnrealAIPlayerController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AUnrealAIPlayerController_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AUnrealAIPlayerController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AUnrealAIPlayerController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AUnrealAIPlayerController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AUnrealAIPlayerController, 4170159586);
	template<> UNREALAI_API UClass* StaticClass<AUnrealAIPlayerController>()
	{
		return AUnrealAIPlayerController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AUnrealAIPlayerController(Z_Construct_UClass_AUnrealAIPlayerController, &AUnrealAIPlayerController::StaticClass, TEXT("/Script/UnrealAI"), TEXT("AUnrealAIPlayerController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AUnrealAIPlayerController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
