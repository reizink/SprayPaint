// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AntilatencyBracer/Public/BracerLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBracerLibrary() {}
// Cross Module References
	ANTILATENCYBRACER_API UClass* Z_Construct_UClass_UBracerLibrary_NoRegister();
	ANTILATENCYBRACER_API UClass* Z_Construct_UClass_UBracerLibrary();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_AntilatencyBracer();
// End Cross Module References
	void UBracerLibrary::StaticRegisterNativesUBracerLibrary()
	{
	}
	UClass* Z_Construct_UClass_UBracerLibrary_NoRegister()
	{
		return UBracerLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UBracerLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBracerLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AntilatencyBracer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBracerLibrary_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** \n * Provides methods to work with Antilatency Bracer library.\n * Do not instantiate this class directly by calling NewObject<UBracerLibrary> method,\n * use UBracerLibrary::GetLibrary instead.\n */" },
		{ "IncludePath", "BracerLibrary.h" },
		{ "ModuleRelativePath", "Public/BracerLibrary.h" },
		{ "ToolTip", "Provides methods to work with Antilatency Bracer library.\nDo not instantiate this class directly by calling NewObject<UBracerLibrary> method,\nuse UBracerLibrary::GetLibrary instead." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBracerLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBracerLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBracerLibrary_Statics::ClassParams = {
		&UBracerLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UBracerLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBracerLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBracerLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBracerLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBracerLibrary, 2543344302);
	template<> ANTILATENCYBRACER_API UClass* StaticClass<UBracerLibrary>()
	{
		return UBracerLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBracerLibrary(Z_Construct_UClass_UBracerLibrary, &UBracerLibrary::StaticClass, TEXT("/Script/AntilatencyBracer"), TEXT("UBracerLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBracerLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
