// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AntilatencyHardwareExtensionInterface/Public/HardwareExtensionInterfaceLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHardwareExtensionInterfaceLibrary() {}
// Cross Module References
	ANTILATENCYHARDWAREEXTENSIONINTERFACE_API UClass* Z_Construct_UClass_UHardwareExtensionInterfaceLibrary_NoRegister();
	ANTILATENCYHARDWAREEXTENSIONINTERFACE_API UClass* Z_Construct_UClass_UHardwareExtensionInterfaceLibrary();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_AntilatencyHardwareExtensionInterface();
// End Cross Module References
	void UHardwareExtensionInterfaceLibrary::StaticRegisterNativesUHardwareExtensionInterfaceLibrary()
	{
	}
	UClass* Z_Construct_UClass_UHardwareExtensionInterfaceLibrary_NoRegister()
	{
		return UHardwareExtensionInterfaceLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UHardwareExtensionInterfaceLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHardwareExtensionInterfaceLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AntilatencyHardwareExtensionInterface,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHardwareExtensionInterfaceLibrary_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** \n * Provides methods to work with Antilatency Hardware Extension Interface library.\n * Do not instantiate this class directly by calling NewObject<UHardwareExtensionInterfaceLibrary> method,\n * use UHardwareExtensionInterfaceLibrary::GetLibrary instead.\n */" },
		{ "IncludePath", "HardwareExtensionInterfaceLibrary.h" },
		{ "ModuleRelativePath", "Public/HardwareExtensionInterfaceLibrary.h" },
		{ "ToolTip", "Provides methods to work with Antilatency Hardware Extension Interface library.\nDo not instantiate this class directly by calling NewObject<UHardwareExtensionInterfaceLibrary> method,\nuse UHardwareExtensionInterfaceLibrary::GetLibrary instead." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHardwareExtensionInterfaceLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHardwareExtensionInterfaceLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UHardwareExtensionInterfaceLibrary_Statics::ClassParams = {
		&UHardwareExtensionInterfaceLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UHardwareExtensionInterfaceLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHardwareExtensionInterfaceLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHardwareExtensionInterfaceLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UHardwareExtensionInterfaceLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHardwareExtensionInterfaceLibrary, 2854637555);
	template<> ANTILATENCYHARDWAREEXTENSIONINTERFACE_API UClass* StaticClass<UHardwareExtensionInterfaceLibrary>()
	{
		return UHardwareExtensionInterfaceLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHardwareExtensionInterfaceLibrary(Z_Construct_UClass_UHardwareExtensionInterfaceLibrary, &UHardwareExtensionInterfaceLibrary::StaticClass, TEXT("/Script/AntilatencyHardwareExtensionInterface"), TEXT("UHardwareExtensionInterfaceLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHardwareExtensionInterfaceLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
