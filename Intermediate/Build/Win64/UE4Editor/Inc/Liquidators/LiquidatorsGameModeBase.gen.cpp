// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Liquidators/LiquidatorsGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLiquidatorsGameModeBase() {}
// Cross Module References
	LIQUIDATORS_API UClass* Z_Construct_UClass_ALiquidatorsGameModeBase_NoRegister();
	LIQUIDATORS_API UClass* Z_Construct_UClass_ALiquidatorsGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Liquidators();
// End Cross Module References
	void ALiquidatorsGameModeBase::StaticRegisterNativesALiquidatorsGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_ALiquidatorsGameModeBase_NoRegister()
	{
		return ALiquidatorsGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_ALiquidatorsGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ALiquidatorsGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Liquidators,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALiquidatorsGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "LiquidatorsGameModeBase.h" },
		{ "ModuleRelativePath", "LiquidatorsGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ALiquidatorsGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALiquidatorsGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ALiquidatorsGameModeBase_Statics::ClassParams = {
		&ALiquidatorsGameModeBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002A8u,
		METADATA_PARAMS(Z_Construct_UClass_ALiquidatorsGameModeBase_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ALiquidatorsGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ALiquidatorsGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ALiquidatorsGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ALiquidatorsGameModeBase, 3091675366);
	template<> LIQUIDATORS_API UClass* StaticClass<ALiquidatorsGameModeBase>()
	{
		return ALiquidatorsGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ALiquidatorsGameModeBase(Z_Construct_UClass_ALiquidatorsGameModeBase, &ALiquidatorsGameModeBase::StaticClass, TEXT("/Script/Liquidators"), TEXT("ALiquidatorsGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALiquidatorsGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
