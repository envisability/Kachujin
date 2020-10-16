// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Kachujin/KachujinGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeKachujinGameMode() {}
// Cross Module References
	KACHUJIN_API UClass* Z_Construct_UClass_AKachujinGameMode_NoRegister();
	KACHUJIN_API UClass* Z_Construct_UClass_AKachujinGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Kachujin();
// End Cross Module References
	void AKachujinGameMode::StaticRegisterNativesAKachujinGameMode()
	{
	}
	UClass* Z_Construct_UClass_AKachujinGameMode_NoRegister()
	{
		return AKachujinGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AKachujinGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AKachujinGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Kachujin,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AKachujinGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "KachujinGameMode.h" },
		{ "ModuleRelativePath", "KachujinGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AKachujinGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AKachujinGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AKachujinGameMode_Statics::ClassParams = {
		&AKachujinGameMode::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AKachujinGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AKachujinGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AKachujinGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AKachujinGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AKachujinGameMode, 124307813);
	template<> KACHUJIN_API UClass* StaticClass<AKachujinGameMode>()
	{
		return AKachujinGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AKachujinGameMode(Z_Construct_UClass_AKachujinGameMode, &AKachujinGameMode::StaticClass, TEXT("/Script/Kachujin"), TEXT("AKachujinGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AKachujinGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
