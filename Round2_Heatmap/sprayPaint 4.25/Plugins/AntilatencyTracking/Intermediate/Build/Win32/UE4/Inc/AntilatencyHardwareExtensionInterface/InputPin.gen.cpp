// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AntilatencyHardwareExtensionInterface/Public/InputPin.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInputPin() {}
// Cross Module References
	ANTILATENCYHARDWAREEXTENSIONINTERFACE_API UClass* Z_Construct_UClass_UInputPin_NoRegister();
	ANTILATENCYHARDWAREEXTENSIONINTERFACE_API UClass* Z_Construct_UClass_UInputPin();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_AntilatencyHardwareExtensionInterface();
// End Cross Module References
	void UInputPin::StaticRegisterNativesUInputPin()
	{
	}
	UClass* Z_Construct_UClass_UInputPin_NoRegister()
	{
		return UInputPin::StaticClass();
	}
	struct Z_Construct_UClass_UInputPin_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInputPin_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AntilatencyHardwareExtensionInterface,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputPin_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * An UE wrapper for the Antilatency::HardwareExtensionInterface::IInputPin.\n * Do not instantiate this class directly by calling NewObject<UInputPin> method,\n * use UHardwareExtensionInterfaceCotask::CreateInputPin or UInputPin::CreateInputPin instead.\n */" },
		{ "IncludePath", "InputPin.h" },
		{ "ModuleRelativePath", "Public/InputPin.h" },
		{ "ToolTip", "An UE wrapper for the Antilatency::HardwareExtensionInterface::IInputPin.\nDo not instantiate this class directly by calling NewObject<UInputPin> method,\nuse UHardwareExtensionInterfaceCotask::CreateInputPin or UInputPin::CreateInputPin instead." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInputPin_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInputPin>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UInputPin_Statics::ClassParams = {
		&UInputPin::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UInputPin_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInputPin_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInputPin()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UInputPin_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UInputPin, 674861057);
	template<> ANTILATENCYHARDWAREEXTENSIONINTERFACE_API UClass* StaticClass<UInputPin>()
	{
		return UInputPin::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInputPin(Z_Construct_UClass_UInputPin, &UInputPin::StaticClass, TEXT("/Script/AntilatencyHardwareExtensionInterface"), TEXT("UInputPin"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInputPin);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
