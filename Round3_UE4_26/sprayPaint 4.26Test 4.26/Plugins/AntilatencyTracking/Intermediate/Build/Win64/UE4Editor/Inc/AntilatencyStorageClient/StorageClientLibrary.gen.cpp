// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AntilatencyStorageClient/Public/StorageClientLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStorageClientLibrary() {}
// Cross Module References
	ANTILATENCYSTORAGECLIENT_API UClass* Z_Construct_UClass_UStorageClientLibrary_NoRegister();
	ANTILATENCYSTORAGECLIENT_API UClass* Z_Construct_UClass_UStorageClientLibrary();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_AntilatencyStorageClient();
// End Cross Module References
	void UStorageClientLibrary::StaticRegisterNativesUStorageClientLibrary()
	{
	}
	UClass* Z_Construct_UClass_UStorageClientLibrary_NoRegister()
	{
		return UStorageClientLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UStorageClientLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UStorageClientLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AntilatencyStorageClient,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStorageClientLibrary_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Provides methods to work with the Antilatency Storage Client library.\n * Do not instantiate this class directly by calling NewObject<UStorageClientLibrary> method,\n * use UStorageClientLibrary::GetLibrary instead.\n */" },
		{ "IncludePath", "StorageClientLibrary.h" },
		{ "ModuleRelativePath", "Public/StorageClientLibrary.h" },
		{ "ToolTip", "Provides methods to work with the Antilatency Storage Client library.\nDo not instantiate this class directly by calling NewObject<UStorageClientLibrary> method,\nuse UStorageClientLibrary::GetLibrary instead." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UStorageClientLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStorageClientLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UStorageClientLibrary_Statics::ClassParams = {
		&UStorageClientLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UStorageClientLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UStorageClientLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UStorageClientLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UStorageClientLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UStorageClientLibrary, 106983773);
	template<> ANTILATENCYSTORAGECLIENT_API UClass* StaticClass<UStorageClientLibrary>()
	{
		return UStorageClientLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UStorageClientLibrary(Z_Construct_UClass_UStorageClientLibrary, &UStorageClientLibrary::StaticClass, TEXT("/Script/AntilatencyStorageClient"), TEXT("UStorageClientLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UStorageClientLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
