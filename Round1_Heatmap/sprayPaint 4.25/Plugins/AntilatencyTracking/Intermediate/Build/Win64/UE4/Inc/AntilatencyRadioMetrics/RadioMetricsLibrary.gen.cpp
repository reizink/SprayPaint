// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AntilatencyRadioMetrics/Public/RadioMetricsLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRadioMetricsLibrary() {}
// Cross Module References
	ANTILATENCYRADIOMETRICS_API UClass* Z_Construct_UClass_URadioMetricsLibrary_NoRegister();
	ANTILATENCYRADIOMETRICS_API UClass* Z_Construct_UClass_URadioMetricsLibrary();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_AntilatencyRadioMetrics();
// End Cross Module References
	void URadioMetricsLibrary::StaticRegisterNativesURadioMetricsLibrary()
	{
	}
	UClass* Z_Construct_UClass_URadioMetricsLibrary_NoRegister()
	{
		return URadioMetricsLibrary::StaticClass();
	}
	struct Z_Construct_UClass_URadioMetricsLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URadioMetricsLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AntilatencyRadioMetrics,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URadioMetricsLibrary_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** \n * Provides methods to work with Antilatency Radio Metrics library.\n * Do not instantiate this class directly by calling NewObject<URadioMetricsLibrary> method,\n * use URadioMetricsLibrary::GetLibrary instead.\n */" },
		{ "IncludePath", "RadioMetricsLibrary.h" },
		{ "ModuleRelativePath", "Public/RadioMetricsLibrary.h" },
		{ "ToolTip", "Provides methods to work with Antilatency Radio Metrics library.\nDo not instantiate this class directly by calling NewObject<URadioMetricsLibrary> method,\nuse URadioMetricsLibrary::GetLibrary instead." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_URadioMetricsLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URadioMetricsLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_URadioMetricsLibrary_Statics::ClassParams = {
		&URadioMetricsLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_URadioMetricsLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URadioMetricsLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URadioMetricsLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_URadioMetricsLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(URadioMetricsLibrary, 421762688);
	template<> ANTILATENCYRADIOMETRICS_API UClass* StaticClass<URadioMetricsLibrary>()
	{
		return URadioMetricsLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_URadioMetricsLibrary(Z_Construct_UClass_URadioMetricsLibrary, &URadioMetricsLibrary::StaticClass, TEXT("/Script/AntilatencyRadioMetrics"), TEXT("URadioMetricsLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(URadioMetricsLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
