// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AntilatencyHardwareExtensionInterface/Public/HardwareExtensionInterfaceCotask.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHardwareExtensionInterfaceCotask() {}
// Cross Module References
	ANTILATENCYHARDWAREEXTENSIONINTERFACE_API UClass* Z_Construct_UClass_UHardwareExtensionInterfaceCotask_NoRegister();
	ANTILATENCYHARDWAREEXTENSIONINTERFACE_API UClass* Z_Construct_UClass_UHardwareExtensionInterfaceCotask();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_AntilatencyHardwareExtensionInterface();
// End Cross Module References
	void UHardwareExtensionInterfaceCotask::StaticRegisterNativesUHardwareExtensionInterfaceCotask()
	{
	}
	UClass* Z_Construct_UClass_UHardwareExtensionInterfaceCotask_NoRegister()
	{
		return UHardwareExtensionInterfaceCotask::StaticClass();
	}
	struct Z_Construct_UClass_UHardwareExtensionInterfaceCotask_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHardwareExtensionInterfaceCotask_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AntilatencyHardwareExtensionInterface,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHardwareExtensionInterfaceCotask_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * An UE wrapper for the host part of the hardware extension interface task (cotask).\n * Do not instantiate this class directly by calling NewObject<UHardwareExtensionInterfaceCotask> method,\n * use UHardwareExtensionInterfaceLibrary::StartHardwareExtensionInterfaceTask or UHardwareExtensionInterfaceCotask::CreateHardwareExtensionInterfaceCotask instead.\n */" },
		{ "IncludePath", "HardwareExtensionInterfaceCotask.h" },
		{ "ModuleRelativePath", "Public/HardwareExtensionInterfaceCotask.h" },
		{ "ToolTip", "An UE wrapper for the host part of the hardware extension interface task (cotask).\nDo not instantiate this class directly by calling NewObject<UHardwareExtensionInterfaceCotask> method,\nuse UHardwareExtensionInterfaceLibrary::StartHardwareExtensionInterfaceTask or UHardwareExtensionInterfaceCotask::CreateHardwareExtensionInterfaceCotask instead." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHardwareExtensionInterfaceCotask_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHardwareExtensionInterfaceCotask>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UHardwareExtensionInterfaceCotask_Statics::ClassParams = {
		&UHardwareExtensionInterfaceCotask::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UHardwareExtensionInterfaceCotask_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHardwareExtensionInterfaceCotask_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHardwareExtensionInterfaceCotask()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UHardwareExtensionInterfaceCotask_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHardwareExtensionInterfaceCotask, 3612641976);
	template<> ANTILATENCYHARDWAREEXTENSIONINTERFACE_API UClass* StaticClass<UHardwareExtensionInterfaceCotask>()
	{
		return UHardwareExtensionInterfaceCotask::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHardwareExtensionInterfaceCotask(Z_Construct_UClass_UHardwareExtensionInterfaceCotask, &UHardwareExtensionInterfaceCotask::StaticClass, TEXT("/Script/AntilatencyHardwareExtensionInterface"), TEXT("UHardwareExtensionInterfaceCotask"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHardwareExtensionInterfaceCotask);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
