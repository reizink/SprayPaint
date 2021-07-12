// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AntilatencyHardwareExtensionInterface/Public/PulseCounterPin.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePulseCounterPin() {}
// Cross Module References
	ANTILATENCYHARDWAREEXTENSIONINTERFACE_API UClass* Z_Construct_UClass_UPulseCounterPin_NoRegister();
	ANTILATENCYHARDWAREEXTENSIONINTERFACE_API UClass* Z_Construct_UClass_UPulseCounterPin();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_AntilatencyHardwareExtensionInterface();
// End Cross Module References
	void UPulseCounterPin::StaticRegisterNativesUPulseCounterPin()
	{
	}
	UClass* Z_Construct_UClass_UPulseCounterPin_NoRegister()
	{
		return UPulseCounterPin::StaticClass();
	}
	struct Z_Construct_UClass_UPulseCounterPin_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPulseCounterPin_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AntilatencyHardwareExtensionInterface,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPulseCounterPin_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * An UE wrapper for the Antilatency::HardwareExtensionInterface::IPulseCounterPin.\n * Do not instantiate this class directly by calling NewObject<UPulseCounterPin> method,\n * use UHardwareExtensionInterfaceCotask::CreatePulseCounterPin or UPulseCounterPin::CreatePulseCounterPin instead.\n */" },
		{ "IncludePath", "PulseCounterPin.h" },
		{ "ModuleRelativePath", "Public/PulseCounterPin.h" },
		{ "ToolTip", "An UE wrapper for the Antilatency::HardwareExtensionInterface::IPulseCounterPin.\nDo not instantiate this class directly by calling NewObject<UPulseCounterPin> method,\nuse UHardwareExtensionInterfaceCotask::CreatePulseCounterPin or UPulseCounterPin::CreatePulseCounterPin instead." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPulseCounterPin_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPulseCounterPin>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPulseCounterPin_Statics::ClassParams = {
		&UPulseCounterPin::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UPulseCounterPin_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPulseCounterPin_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPulseCounterPin()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPulseCounterPin_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPulseCounterPin, 3547311172);
	template<> ANTILATENCYHARDWAREEXTENSIONINTERFACE_API UClass* StaticClass<UPulseCounterPin>()
	{
		return UPulseCounterPin::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPulseCounterPin(Z_Construct_UClass_UPulseCounterPin, &UPulseCounterPin::StaticClass, TEXT("/Script/AntilatencyHardwareExtensionInterface"), TEXT("UPulseCounterPin"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPulseCounterPin);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
