// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AntilatencyAltTrackingAlignment/Public/TrackingAlignment.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTrackingAlignment() {}
// Cross Module References
	ANTILATENCYTRACKINGALIGNMENT_API UClass* Z_Construct_UClass_UTrackingAlignment_NoRegister();
	ANTILATENCYTRACKINGALIGNMENT_API UClass* Z_Construct_UClass_UTrackingAlignment();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_AntilatencyTrackingAlignment();
// End Cross Module References
	void UTrackingAlignment::StaticRegisterNativesUTrackingAlignment()
	{
	}
	UClass* Z_Construct_UClass_UTrackingAlignment_NoRegister()
	{
		return UTrackingAlignment::StaticClass();
	}
	struct Z_Construct_UClass_UTrackingAlignment_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTrackingAlignment_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AntilatencyTrackingAlignment,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTrackingAlignment_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n */" },
		{ "IncludePath", "TrackingAlignment.h" },
		{ "ModuleRelativePath", "Public/TrackingAlignment.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTrackingAlignment_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTrackingAlignment>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTrackingAlignment_Statics::ClassParams = {
		&UTrackingAlignment::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UTrackingAlignment_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTrackingAlignment_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTrackingAlignment()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTrackingAlignment_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTrackingAlignment, 511799911);
	template<> ANTILATENCYTRACKINGALIGNMENT_API UClass* StaticClass<UTrackingAlignment>()
	{
		return UTrackingAlignment::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTrackingAlignment(Z_Construct_UClass_UTrackingAlignment, &UTrackingAlignment::StaticClass, TEXT("/Script/AntilatencyTrackingAlignment"), TEXT("UTrackingAlignment"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTrackingAlignment);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
