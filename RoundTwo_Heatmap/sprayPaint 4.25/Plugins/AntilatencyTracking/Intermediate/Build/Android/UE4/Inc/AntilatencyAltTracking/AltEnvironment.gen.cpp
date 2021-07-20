// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AntilatencyAltTracking/Public/AltEnvironment.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAltEnvironment() {}
// Cross Module References
	ANTILATENCYALTTRACKING_API UClass* Z_Construct_UClass_UAltEnvironment_NoRegister();
	ANTILATENCYALTTRACKING_API UClass* Z_Construct_UClass_UAltEnvironment();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_AntilatencyAltTracking();
// End Cross Module References
	void UAltEnvironment::StaticRegisterNativesUAltEnvironment()
	{
	}
	UClass* Z_Construct_UClass_UAltEnvironment_NoRegister()
	{
		return UAltEnvironment::StaticClass();
	}
	struct Z_Construct_UClass_UAltEnvironment_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAltEnvironment_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AntilatencyAltTracking,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAltEnvironment_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** The UE wrapper for the Antilatency tracking environment (IR markers pattern). */" },
		{ "IncludePath", "AltEnvironment.h" },
		{ "ModuleRelativePath", "Public/AltEnvironment.h" },
		{ "ToolTip", "The UE wrapper for the Antilatency tracking environment (IR markers pattern)." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAltEnvironment_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAltEnvironment>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAltEnvironment_Statics::ClassParams = {
		&UAltEnvironment::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAltEnvironment_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAltEnvironment_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAltEnvironment()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAltEnvironment_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAltEnvironment, 2633710387);
	template<> ANTILATENCYALTTRACKING_API UClass* StaticClass<UAltEnvironment>()
	{
		return UAltEnvironment::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAltEnvironment(Z_Construct_UClass_UAltEnvironment, &UAltEnvironment::StaticClass, TEXT("/Script/AntilatencyAltTracking"), TEXT("UAltEnvironment"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAltEnvironment);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
