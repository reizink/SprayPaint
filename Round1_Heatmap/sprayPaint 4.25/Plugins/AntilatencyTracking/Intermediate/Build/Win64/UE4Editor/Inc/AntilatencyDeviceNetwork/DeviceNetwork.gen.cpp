// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AntilatencyDeviceNetwork/Public/DeviceNetwork.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDeviceNetwork() {}
// Cross Module References
	ANTILATENCYDEVICENETWORK_API UClass* Z_Construct_UClass_UDeviceNetwork_NoRegister();
	ANTILATENCYDEVICENETWORK_API UClass* Z_Construct_UClass_UDeviceNetwork();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_AntilatencyDeviceNetwork();
// End Cross Module References
	void UDeviceNetwork::StaticRegisterNativesUDeviceNetwork()
	{
	}
	UClass* Z_Construct_UClass_UDeviceNetwork_NoRegister()
	{
		return UDeviceNetwork::StaticClass();
	}
	struct Z_Construct_UClass_UDeviceNetwork_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDeviceNetwork_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AntilatencyDeviceNetwork,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDeviceNetwork_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * The UE wrapper for the Antilatency::DeviceNetwork::INetwork object.\n * Do not instantiate this class directly by calling the NewObject<UDeviceNetwork> method,\n * use the UAltTrackingLibrary::CreateTracking or UAltTrackingCotask::CreateAltTrackingCotask instead.\n */" },
		{ "IncludePath", "DeviceNetwork.h" },
		{ "ModuleRelativePath", "Public/DeviceNetwork.h" },
		{ "ToolTip", "The UE wrapper for the Antilatency::DeviceNetwork::INetwork object.\nDo not instantiate this class directly by calling the NewObject<UDeviceNetwork> method,\nuse the UAltTrackingLibrary::CreateTracking or UAltTrackingCotask::CreateAltTrackingCotask instead." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDeviceNetwork_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDeviceNetwork>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDeviceNetwork_Statics::ClassParams = {
		&UDeviceNetwork::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UDeviceNetwork_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDeviceNetwork_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDeviceNetwork()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDeviceNetwork_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDeviceNetwork, 4232983500);
	template<> ANTILATENCYDEVICENETWORK_API UClass* StaticClass<UDeviceNetwork>()
	{
		return UDeviceNetwork::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDeviceNetwork(Z_Construct_UClass_UDeviceNetwork, &UDeviceNetwork::StaticClass, TEXT("/Script/AntilatencyDeviceNetwork"), TEXT("UDeviceNetwork"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDeviceNetwork);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
