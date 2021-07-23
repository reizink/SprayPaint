// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AntilatencyAltTracking/Public/AltTrackingCotask.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAltTrackingCotask() {}
// Cross Module References
	ANTILATENCYALTTRACKING_API UClass* Z_Construct_UClass_UAltTrackingCotask_NoRegister();
	ANTILATENCYALTTRACKING_API UClass* Z_Construct_UClass_UAltTrackingCotask();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_AntilatencyAltTracking();
// End Cross Module References
	void UAltTrackingCotask::StaticRegisterNativesUAltTrackingCotask()
	{
	}
	UClass* Z_Construct_UClass_UAltTrackingCotask_NoRegister()
	{
		return UAltTrackingCotask::StaticClass();
	}
	struct Z_Construct_UClass_UAltTrackingCotask_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAltTrackingCotask_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AntilatencyAltTracking,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAltTrackingCotask_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * An UE wrapper for the host part of the alt tracking task (cotask). That task can be executed on the Alt tracker nodes to get tracking data.\n * Do not instantiate this class directly by calling the NewObject<UAltTrackingCotask> method,\n * use the UAltTrackingLibrary::CreateTracking or UAltTrackingCotask::CreateAltTrackingCotask instead.\n */" },
		{ "IncludePath", "AltTrackingCotask.h" },
		{ "ModuleRelativePath", "Public/AltTrackingCotask.h" },
		{ "ToolTip", "An UE wrapper for the host part of the alt tracking task (cotask). That task can be executed on the Alt tracker nodes to get tracking data.\nDo not instantiate this class directly by calling the NewObject<UAltTrackingCotask> method,\nuse the UAltTrackingLibrary::CreateTracking or UAltTrackingCotask::CreateAltTrackingCotask instead." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAltTrackingCotask_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAltTrackingCotask>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAltTrackingCotask_Statics::ClassParams = {
		&UAltTrackingCotask::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UAltTrackingCotask_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAltTrackingCotask_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAltTrackingCotask()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAltTrackingCotask_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAltTrackingCotask, 3221649947);
	template<> ANTILATENCYALTTRACKING_API UClass* StaticClass<UAltTrackingCotask>()
	{
		return UAltTrackingCotask::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAltTrackingCotask(Z_Construct_UClass_UAltTrackingCotask, &UAltTrackingCotask::StaticClass, TEXT("/Script/AntilatencyAltTracking"), TEXT("UAltTrackingCotask"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAltTrackingCotask);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
