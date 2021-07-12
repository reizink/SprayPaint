// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AntilatencyBracer/Public/BracerCotask.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBracerCotask() {}
// Cross Module References
	ANTILATENCYBRACER_API UClass* Z_Construct_UClass_UBracerCotask_NoRegister();
	ANTILATENCYBRACER_API UClass* Z_Construct_UClass_UBracerCotask();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_AntilatencyBracer();
// End Cross Module References
	void UBracerCotask::StaticRegisterNativesUBracerCotask()
	{
	}
	UClass* Z_Construct_UClass_UBracerCotask_NoRegister()
	{
		return UBracerCotask::StaticClass();
	}
	struct Z_Construct_UClass_UBracerCotask_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBracerCotask_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AntilatencyBracer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBracerCotask_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * An UE wrapper for the host part of the bracer task (cotask). That task can be executed on the bracer nodes to get touchpad data and execute vibration on the device.\n * Do not instantiate this class directly by calling NewObject<UBracerCotask> method,\n * use UBracerLibrary::StartBracerTask or UBracerCotask::CreateBracerCotask instead.\n */" },
		{ "IncludePath", "BracerCotask.h" },
		{ "ModuleRelativePath", "Public/BracerCotask.h" },
		{ "ToolTip", "An UE wrapper for the host part of the bracer task (cotask). That task can be executed on the bracer nodes to get touchpad data and execute vibration on the device.\nDo not instantiate this class directly by calling NewObject<UBracerCotask> method,\nuse UBracerLibrary::StartBracerTask or UBracerCotask::CreateBracerCotask instead." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBracerCotask_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBracerCotask>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBracerCotask_Statics::ClassParams = {
		&UBracerCotask::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UBracerCotask_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBracerCotask_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBracerCotask()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBracerCotask_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBracerCotask, 33571417);
	template<> ANTILATENCYBRACER_API UClass* StaticClass<UBracerCotask>()
	{
		return UBracerCotask::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBracerCotask(Z_Construct_UClass_UBracerCotask, &UBracerCotask::StaticClass, TEXT("/Script/AntilatencyBracer"), TEXT("UBracerCotask"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBracerCotask);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
