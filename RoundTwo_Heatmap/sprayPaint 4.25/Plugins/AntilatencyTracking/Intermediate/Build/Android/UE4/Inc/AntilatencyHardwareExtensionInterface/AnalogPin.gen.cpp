// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AntilatencyHardwareExtensionInterface/Public/AnalogPin.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnalogPin() {}
// Cross Module References
	ANTILATENCYHARDWAREEXTENSIONINTERFACE_API UClass* Z_Construct_UClass_UAnalogPin_NoRegister();
	ANTILATENCYHARDWAREEXTENSIONINTERFACE_API UClass* Z_Construct_UClass_UAnalogPin();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_AntilatencyHardwareExtensionInterface();
// End Cross Module References
	void UAnalogPin::StaticRegisterNativesUAnalogPin()
	{
	}
	UClass* Z_Construct_UClass_UAnalogPin_NoRegister()
	{
		return UAnalogPin::StaticClass();
	}
	struct Z_Construct_UClass_UAnalogPin_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnalogPin_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AntilatencyHardwareExtensionInterface,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnalogPin_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * An UE wrapper for the Antilatency::HardwareExtensionInterface::IAnalogPin.\n * Do not instantiate this class directly by calling NewObject<UAnalogPin> method,\n * use UHardwareExtensionInterfaceCotask::CreateAnalogPin or UAnalogPin::CreateAnalogPin instead.\n */" },
		{ "IncludePath", "AnalogPin.h" },
		{ "ModuleRelativePath", "Public/AnalogPin.h" },
		{ "ToolTip", "An UE wrapper for the Antilatency::HardwareExtensionInterface::IAnalogPin.\nDo not instantiate this class directly by calling NewObject<UAnalogPin> method,\nuse UHardwareExtensionInterfaceCotask::CreateAnalogPin or UAnalogPin::CreateAnalogPin instead." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnalogPin_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnalogPin>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAnalogPin_Statics::ClassParams = {
		&UAnalogPin::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UAnalogPin_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAnalogPin_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnalogPin()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAnalogPin_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAnalogPin, 1303090841);
	template<> ANTILATENCYHARDWAREEXTENSIONINTERFACE_API UClass* StaticClass<UAnalogPin>()
	{
		return UAnalogPin::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAnalogPin(Z_Construct_UClass_UAnalogPin, &UAnalogPin::StaticClass, TEXT("/Script/AntilatencyHardwareExtensionInterface"), TEXT("UAnalogPin"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnalogPin);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
