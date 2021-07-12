// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AntilatencyAltTracking/Public/AltTrackingLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAltTrackingLibrary() {}
// Cross Module References
	ANTILATENCYALTTRACKING_API UClass* Z_Construct_UClass_UAltTrackingLibrary_NoRegister();
	ANTILATENCYALTTRACKING_API UClass* Z_Construct_UClass_UAltTrackingLibrary();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_AntilatencyAltTracking();
// End Cross Module References
	void UAltTrackingLibrary::StaticRegisterNativesUAltTrackingLibrary()
	{
	}
	UClass* Z_Construct_UClass_UAltTrackingLibrary_NoRegister()
	{
		return UAltTrackingLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UAltTrackingLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAltTrackingLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AntilatencyAltTracking,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAltTrackingLibrary_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** \n * Antilatency::Alt::Tracking::ILibrary wrapper for UE.\n * Do not instantiate this class directly by calling NewObject<UAltTrackingLibrary> method,\n * use UAltTrackingLibrary::GetLibrary instead.\n */" },
		{ "IncludePath", "AltTrackingLibrary.h" },
		{ "ModuleRelativePath", "Public/AltTrackingLibrary.h" },
		{ "ToolTip", "Antilatency::Alt::Tracking::ILibrary wrapper for UE.\nDo not instantiate this class directly by calling NewObject<UAltTrackingLibrary> method,\nuse UAltTrackingLibrary::GetLibrary instead." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAltTrackingLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAltTrackingLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAltTrackingLibrary_Statics::ClassParams = {
		&UAltTrackingLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UAltTrackingLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAltTrackingLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAltTrackingLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAltTrackingLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAltTrackingLibrary, 631607875);
	template<> ANTILATENCYALTTRACKING_API UClass* StaticClass<UAltTrackingLibrary>()
	{
		return UAltTrackingLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAltTrackingLibrary(Z_Construct_UClass_UAltTrackingLibrary, &UAltTrackingLibrary::StaticClass, TEXT("/Script/AntilatencyAltTracking"), TEXT("UAltTrackingLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAltTrackingLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
