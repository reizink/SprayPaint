// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AntilatencyStorageClient/Public/Storage.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStorage() {}
// Cross Module References
	ANTILATENCYSTORAGECLIENT_API UClass* Z_Construct_UClass_UStorage_NoRegister();
	ANTILATENCYSTORAGECLIENT_API UClass* Z_Construct_UClass_UStorage();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_AntilatencyStorageClient();
// End Cross Module References
	void UStorage::StaticRegisterNativesUStorage()
	{
	}
	UClass* Z_Construct_UClass_UStorage_NoRegister()
	{
		return UStorage::StaticClass();
	}
	struct Z_Construct_UClass_UStorage_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UStorage_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AntilatencyStorageClient,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStorage_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Provides methods to work with Antilatency Storage, such as\n * reading and writing placements and environments.\n * Do not instantiate this class directly by calling NewObject<UStorage> method,\n * use UStorageClientLibrary::GetRemoteStorage or UStorageClientLibrary::GetLocalStorage instead.\n */" },
		{ "IncludePath", "Storage.h" },
		{ "ModuleRelativePath", "Public/Storage.h" },
		{ "ToolTip", "Provides methods to work with Antilatency Storage, such as\nreading and writing placements and environments.\nDo not instantiate this class directly by calling NewObject<UStorage> method,\nuse UStorageClientLibrary::GetRemoteStorage or UStorageClientLibrary::GetLocalStorage instead." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UStorage_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStorage>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UStorage_Statics::ClassParams = {
		&UStorage::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UStorage_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UStorage_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UStorage()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UStorage_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UStorage, 242937110);
	template<> ANTILATENCYSTORAGECLIENT_API UClass* StaticClass<UStorage>()
	{
		return UStorage::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UStorage(Z_Construct_UClass_UStorage, &UStorage::StaticClass, TEXT("/Script/AntilatencyStorageClient"), TEXT("UStorage"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UStorage);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
