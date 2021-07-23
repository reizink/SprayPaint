// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AntilatencyHardwareExtensionInterface/Public/OutputPin.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOutputPin() {}
// Cross Module References
	ANTILATENCYHARDWAREEXTENSIONINTERFACE_API UClass* Z_Construct_UClass_UOutputPin_NoRegister();
	ANTILATENCYHARDWAREEXTENSIONINTERFACE_API UClass* Z_Construct_UClass_UOutputPin();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_AntilatencyHardwareExtensionInterface();
// End Cross Module References
	void UOutputPin::StaticRegisterNativesUOutputPin()
	{
	}
	UClass* Z_Construct_UClass_UOutputPin_NoRegister()
	{
		return UOutputPin::StaticClass();
	}
	struct Z_Construct_UClass_UOutputPin_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOutputPin_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AntilatencyHardwareExtensionInterface,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOutputPin_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * An UE wrapper for the Antilatency::HardwareExtensionInterface::IOutputPin.\n * Do not instantiate this class directly by calling NewObject<UOutputPin> method,\n * use UHardwareExtensionInterfaceCotask::CreateOutputPin or UOutputPin::CreateOutputPin instead.\n */" },
		{ "IncludePath", "OutputPin.h" },
		{ "ModuleRelativePath", "Public/OutputPin.h" },
		{ "ToolTip", "An UE wrapper for the Antilatency::HardwareExtensionInterface::IOutputPin.\nDo not instantiate this class directly by calling NewObject<UOutputPin> method,\nuse UHardwareExtensionInterfaceCotask::CreateOutputPin or UOutputPin::CreateOutputPin instead." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOutputPin_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOutputPin>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UOutputPin_Statics::ClassParams = {
		&UOutputPin::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UOutputPin_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOutputPin_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOutputPin()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UOutputPin_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UOutputPin, 2316790783);
	template<> ANTILATENCYHARDWAREEXTENSIONINTERFACE_API UClass* StaticClass<UOutputPin>()
	{
		return UOutputPin::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UOutputPin(Z_Construct_UClass_UOutputPin, &UOutputPin::StaticClass, TEXT("/Script/AntilatencyHardwareExtensionInterface"), TEXT("UOutputPin"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOutputPin);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
