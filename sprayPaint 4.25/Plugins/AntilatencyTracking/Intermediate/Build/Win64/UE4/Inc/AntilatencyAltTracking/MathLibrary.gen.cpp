// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AntilatencyAltTracking/Public/MathLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMathLibrary() {}
// Cross Module References
	ANTILATENCYALTTRACKING_API UClass* Z_Construct_UClass_UMathLibrary_NoRegister();
	ANTILATENCYALTTRACKING_API UClass* Z_Construct_UClass_UMathLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_AntilatencyAltTracking();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FQuat();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
// End Cross Module References
	DEFINE_FUNCTION(UMathLibrary::execFQuatAngularDistance)
	{
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_q1);
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_q2);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UMathLibrary::FQuatAngularDistance(Z_Param_Out_q1,Z_Param_Out_q2);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMathLibrary::execNormalizeFQuat)
	{
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_q);
		P_GET_PROPERTY(FFloatProperty,Z_Param_tolerance);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FQuat*)Z_Param__Result=UMathLibrary::NormalizeFQuat(Z_Param_Out_q,Z_Param_tolerance);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMathLibrary::execSLerpFQuat)
	{
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_q1);
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_q2);
		P_GET_PROPERTY(FFloatProperty,Z_Param_alpha);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FQuat*)Z_Param__Result=UMathLibrary::SLerpFQuat(Z_Param_Out_q1,Z_Param_Out_q2,Z_Param_alpha);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMathLibrary::execFastLerpFQuat)
	{
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_q1);
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_q2);
		P_GET_PROPERTY(FFloatProperty,Z_Param_alpha);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FQuat*)Z_Param__Result=UMathLibrary::FastLerpFQuat(Z_Param_Out_q1,Z_Param_Out_q2,Z_Param_alpha);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMathLibrary::execInverseFQuat)
	{
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_q);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FQuat*)Z_Param__Result=UMathLibrary::InverseFQuat(Z_Param_Out_q);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMathLibrary::execMultFQuatFQuat)
	{
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_q1);
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_q2);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FQuat*)Z_Param__Result=UMathLibrary::MultFQuatFQuat(Z_Param_Out_q1,Z_Param_Out_q2);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMathLibrary::execFQuatToFRotator)
	{
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_q);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FRotator*)Z_Param__Result=UMathLibrary::FQuatToFRotator(Z_Param_Out_q);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMathLibrary::execFRotatorToFQuat)
	{
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_r);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FQuat*)Z_Param__Result=UMathLibrary::FRotatorToFQuat(Z_Param_Out_r);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMathLibrary::execFQuatIdentity)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FQuat*)Z_Param__Result=UMathLibrary::FQuatIdentity();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMathLibrary::execMakeFQuat)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_x);
		P_GET_PROPERTY(FFloatProperty,Z_Param_y);
		P_GET_PROPERTY(FFloatProperty,Z_Param_z);
		P_GET_PROPERTY(FFloatProperty,Z_Param_w);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FQuat*)Z_Param__Result=UMathLibrary::MakeFQuat(Z_Param_x,Z_Param_y,Z_Param_z,Z_Param_w);
		P_NATIVE_END;
	}
	void UMathLibrary::StaticRegisterNativesUMathLibrary()
	{
		UClass* Class = UMathLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FastLerpFQuat", &UMathLibrary::execFastLerpFQuat },
			{ "FQuatAngularDistance", &UMathLibrary::execFQuatAngularDistance },
			{ "FQuatIdentity", &UMathLibrary::execFQuatIdentity },
			{ "FQuatToFRotator", &UMathLibrary::execFQuatToFRotator },
			{ "FRotatorToFQuat", &UMathLibrary::execFRotatorToFQuat },
			{ "InverseFQuat", &UMathLibrary::execInverseFQuat },
			{ "MakeFQuat", &UMathLibrary::execMakeFQuat },
			{ "MultFQuatFQuat", &UMathLibrary::execMultFQuatFQuat },
			{ "NormalizeFQuat", &UMathLibrary::execNormalizeFQuat },
			{ "SLerpFQuat", &UMathLibrary::execSLerpFQuat },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMathLibrary_FastLerpFQuat_Statics
	{
		struct MathLibrary_eventFastLerpFQuat_Parms
		{
			FQuat q1;
			FQuat q2;
			float alpha;
			FQuat ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_alpha;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_q2_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_q2;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_q1_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_q1;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMathLibrary_FastLerpFQuat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MathLibrary_eventFastLerpFQuat_Parms, ReturnValue), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMathLibrary_FastLerpFQuat_Statics::NewProp_alpha = { "alpha", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MathLibrary_eventFastLerpFQuat_Parms, alpha), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMathLibrary_FastLerpFQuat_Statics::NewProp_q2_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMathLibrary_FastLerpFQuat_Statics::NewProp_q2 = { "q2", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MathLibrary_eventFastLerpFQuat_Parms, q2), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UFunction_UMathLibrary_FastLerpFQuat_Statics::NewProp_q2_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMathLibrary_FastLerpFQuat_Statics::NewProp_q2_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMathLibrary_FastLerpFQuat_Statics::NewProp_q1_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMathLibrary_FastLerpFQuat_Statics::NewProp_q1 = { "q1", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MathLibrary_eventFastLerpFQuat_Parms, q1), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UFunction_UMathLibrary_FastLerpFQuat_Statics::NewProp_q1_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMathLibrary_FastLerpFQuat_Statics::NewProp_q1_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMathLibrary_FastLerpFQuat_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMathLibrary_FastLerpFQuat_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMathLibrary_FastLerpFQuat_Statics::NewProp_alpha,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMathLibrary_FastLerpFQuat_Statics::NewProp_q2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMathLibrary_FastLerpFQuat_Statics::NewProp_q1,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMathLibrary_FastLerpFQuat_Statics::Function_MetaDataParams[] = {
		{ "Category", "Math" },
		{ "Comment", "/**\n     * Fast Linear Quaternion Interpolation. Result is NOT normalized.\n     * @param q1 First quaternion.\n     * @param q2 Second quaternion.\n     * @param alpha Interpolation value.\n     * @return Result quaternion, not normalized.\n     */" },
		{ "CompactNodeTitle", "Fast Lerp" },
		{ "DisplayName", "Fast Lerp Quaternion" },
		{ "Keywords", "fast lerp" },
		{ "ModuleRelativePath", "Public/MathLibrary.h" },
		{ "ToolTip", "Fast Linear Quaternion Interpolation. Result is NOT normalized.\n@param q1 First quaternion.\n@param q2 Second quaternion.\n@param alpha Interpolation value.\n@return Result quaternion, not normalized." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMathLibrary_FastLerpFQuat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMathLibrary, nullptr, "FastLerpFQuat", nullptr, nullptr, sizeof(MathLibrary_eventFastLerpFQuat_Parms), Z_Construct_UFunction_UMathLibrary_FastLerpFQuat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMathLibrary_FastLerpFQuat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMathLibrary_FastLerpFQuat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMathLibrary_FastLerpFQuat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMathLibrary_FastLerpFQuat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMathLibrary_FastLerpFQuat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMathLibrary_FQuatAngularDistance_Statics
	{
		struct MathLibrary_eventFQuatAngularDistance_Parms
		{
			FQuat q1;
			FQuat q2;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_q2_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_q2;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_q1_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_q1;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMathLibrary_FQuatAngularDistance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MathLibrary_eventFQuatAngularDistance_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMathLibrary_FQuatAngularDistance_Statics::NewProp_q2_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMathLibrary_FQuatAngularDistance_Statics::NewProp_q2 = { "q2", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MathLibrary_eventFQuatAngularDistance_Parms, q2), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UFunction_UMathLibrary_FQuatAngularDistance_Statics::NewProp_q2_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMathLibrary_FQuatAngularDistance_Statics::NewProp_q2_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMathLibrary_FQuatAngularDistance_Statics::NewProp_q1_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMathLibrary_FQuatAngularDistance_Statics::NewProp_q1 = { "q1", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MathLibrary_eventFQuatAngularDistance_Parms, q1), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UFunction_UMathLibrary_FQuatAngularDistance_Statics::NewProp_q1_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMathLibrary_FQuatAngularDistance_Statics::NewProp_q1_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMathLibrary_FQuatAngularDistance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMathLibrary_FQuatAngularDistance_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMathLibrary_FQuatAngularDistance_Statics::NewProp_q2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMathLibrary_FQuatAngularDistance_Statics::NewProp_q1,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMathLibrary_FQuatAngularDistance_Statics::Function_MetaDataParams[] = {
		{ "Category", "Math" },
		{ "Comment", "/**\n     * Find the angular distance between two rotation quaternions (in radians).\n     * @param q1 First quaternion.\n     * @param q2 Second quaternion.\n     * @return The angular distance between two rotation quaternions (in radians).\n     */" },
		{ "CompactNodeTitle", "Angle" },
		{ "DisplayName", "Angular Distance" },
		{ "Keywords", "angle angular distance" },
		{ "ModuleRelativePath", "Public/MathLibrary.h" },
		{ "ToolTip", "Find the angular distance between two rotation quaternions (in radians).\n@param q1 First quaternion.\n@param q2 Second quaternion.\n@return The angular distance between two rotation quaternions (in radians)." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMathLibrary_FQuatAngularDistance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMathLibrary, nullptr, "FQuatAngularDistance", nullptr, nullptr, sizeof(MathLibrary_eventFQuatAngularDistance_Parms), Z_Construct_UFunction_UMathLibrary_FQuatAngularDistance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMathLibrary_FQuatAngularDistance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMathLibrary_FQuatAngularDistance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMathLibrary_FQuatAngularDistance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMathLibrary_FQuatAngularDistance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMathLibrary_FQuatAngularDistance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMathLibrary_FQuatIdentity_Statics
	{
		struct MathLibrary_eventFQuatIdentity_Parms
		{
			FQuat ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMathLibrary_FQuatIdentity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MathLibrary_eventFQuatIdentity_Parms, ReturnValue), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMathLibrary_FQuatIdentity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMathLibrary_FQuatIdentity_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMathLibrary_FQuatIdentity_Statics::Function_MetaDataParams[] = {
		{ "Category", "Math" },
		{ "Comment", "/**\n     * Create identity FQuat.\n     * @return Identity FQuat (x = 0.0, y = 0.0, z = 0.0, w = 1.0).\n     */" },
		{ "CompactNodeTitle", "Identity Quat" },
		{ "DisplayName", "Identity Quaternion" },
		{ "ModuleRelativePath", "Public/MathLibrary.h" },
		{ "ToolTip", "Create identity FQuat.\n@return Identity FQuat (x = 0.0, y = 0.0, z = 0.0, w = 1.0)." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMathLibrary_FQuatIdentity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMathLibrary, nullptr, "FQuatIdentity", nullptr, nullptr, sizeof(MathLibrary_eventFQuatIdentity_Parms), Z_Construct_UFunction_UMathLibrary_FQuatIdentity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMathLibrary_FQuatIdentity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMathLibrary_FQuatIdentity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMathLibrary_FQuatIdentity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMathLibrary_FQuatIdentity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMathLibrary_FQuatIdentity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMathLibrary_FQuatToFRotator_Statics
	{
		struct MathLibrary_eventFQuatToFRotator_Parms
		{
			FQuat q;
			FRotator ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_q_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_q;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMathLibrary_FQuatToFRotator_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MathLibrary_eventFQuatToFRotator_Parms, ReturnValue), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMathLibrary_FQuatToFRotator_Statics::NewProp_q_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMathLibrary_FQuatToFRotator_Statics::NewProp_q = { "q", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MathLibrary_eventFQuatToFRotator_Parms, q), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UFunction_UMathLibrary_FQuatToFRotator_Statics::NewProp_q_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMathLibrary_FQuatToFRotator_Statics::NewProp_q_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMathLibrary_FQuatToFRotator_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMathLibrary_FQuatToFRotator_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMathLibrary_FQuatToFRotator_Statics::NewProp_q,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMathLibrary_FQuatToFRotator_Statics::Function_MetaDataParams[] = {
		{ "Category", "Math" },
		{ "Comment", "/**\n     * Convert FQuat to FRotator.\n     * @param q A quaternion to convert to rotator.\n     * @return A rotator created from provided quaternion.\n     */" },
		{ "CompactNodeTitle", "To Rotator" },
		{ "DisplayName", "Quaternion to Rotator" },
		{ "ModuleRelativePath", "Public/MathLibrary.h" },
		{ "ToolTip", "Convert FQuat to FRotator.\n@param q A quaternion to convert to rotator.\n@return A rotator created from provided quaternion." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMathLibrary_FQuatToFRotator_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMathLibrary, nullptr, "FQuatToFRotator", nullptr, nullptr, sizeof(MathLibrary_eventFQuatToFRotator_Parms), Z_Construct_UFunction_UMathLibrary_FQuatToFRotator_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMathLibrary_FQuatToFRotator_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMathLibrary_FQuatToFRotator_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMathLibrary_FQuatToFRotator_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMathLibrary_FQuatToFRotator()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMathLibrary_FQuatToFRotator_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMathLibrary_FRotatorToFQuat_Statics
	{
		struct MathLibrary_eventFRotatorToFQuat_Parms
		{
			FRotator r;
			FQuat ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_r_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_r;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMathLibrary_FRotatorToFQuat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MathLibrary_eventFRotatorToFQuat_Parms, ReturnValue), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMathLibrary_FRotatorToFQuat_Statics::NewProp_r_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMathLibrary_FRotatorToFQuat_Statics::NewProp_r = { "r", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MathLibrary_eventFRotatorToFQuat_Parms, r), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UFunction_UMathLibrary_FRotatorToFQuat_Statics::NewProp_r_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMathLibrary_FRotatorToFQuat_Statics::NewProp_r_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMathLibrary_FRotatorToFQuat_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMathLibrary_FRotatorToFQuat_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMathLibrary_FRotatorToFQuat_Statics::NewProp_r,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMathLibrary_FRotatorToFQuat_Statics::Function_MetaDataParams[] = {
		{ "Category", "Math" },
		{ "Comment", "/**\n     * Convert FRotator to FQuat.\n     * @param r A rotator to convert to FQuat.\n     * @return A quaternion created from provided rotator.\n     */" },
		{ "CompactNodeTitle", "To Quat" },
		{ "CPP_Default_r", "" },
		{ "DisplayName", "Rotator to Quaternion" },
		{ "ModuleRelativePath", "Public/MathLibrary.h" },
		{ "ToolTip", "Convert FRotator to FQuat.\n@param r A rotator to convert to FQuat.\n@return A quaternion created from provided rotator." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMathLibrary_FRotatorToFQuat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMathLibrary, nullptr, "FRotatorToFQuat", nullptr, nullptr, sizeof(MathLibrary_eventFRotatorToFQuat_Parms), Z_Construct_UFunction_UMathLibrary_FRotatorToFQuat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMathLibrary_FRotatorToFQuat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMathLibrary_FRotatorToFQuat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMathLibrary_FRotatorToFQuat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMathLibrary_FRotatorToFQuat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMathLibrary_FRotatorToFQuat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMathLibrary_InverseFQuat_Statics
	{
		struct MathLibrary_eventInverseFQuat_Parms
		{
			FQuat q;
			FQuat ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_q_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_q;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMathLibrary_InverseFQuat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MathLibrary_eventInverseFQuat_Parms, ReturnValue), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMathLibrary_InverseFQuat_Statics::NewProp_q_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMathLibrary_InverseFQuat_Statics::NewProp_q = { "q", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MathLibrary_eventInverseFQuat_Parms, q), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UFunction_UMathLibrary_InverseFQuat_Statics::NewProp_q_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMathLibrary_InverseFQuat_Statics::NewProp_q_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMathLibrary_InverseFQuat_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMathLibrary_InverseFQuat_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMathLibrary_InverseFQuat_Statics::NewProp_q,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMathLibrary_InverseFQuat_Statics::Function_MetaDataParams[] = {
		{ "Category", "Math" },
		{ "Comment", "/**\n     * Inverse quaternion.\n     * @param q A quaternion to inverse.\n     * @return Inverse of the provided quaternion.\n     */" },
		{ "CompactNodeTitle", "Inverse" },
		{ "DisplayName", "Inverse Quaternion" },
		{ "Keywords", "inverse" },
		{ "ModuleRelativePath", "Public/MathLibrary.h" },
		{ "ToolTip", "Inverse quaternion.\n@param q A quaternion to inverse.\n@return Inverse of the provided quaternion." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMathLibrary_InverseFQuat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMathLibrary, nullptr, "InverseFQuat", nullptr, nullptr, sizeof(MathLibrary_eventInverseFQuat_Parms), Z_Construct_UFunction_UMathLibrary_InverseFQuat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMathLibrary_InverseFQuat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMathLibrary_InverseFQuat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMathLibrary_InverseFQuat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMathLibrary_InverseFQuat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMathLibrary_InverseFQuat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMathLibrary_MakeFQuat_Statics
	{
		struct MathLibrary_eventMakeFQuat_Parms
		{
			float x;
			float y;
			float z;
			float w;
			FQuat ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_w;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_z;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_y;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_x;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMathLibrary_MakeFQuat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MathLibrary_eventMakeFQuat_Parms, ReturnValue), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMathLibrary_MakeFQuat_Statics::NewProp_w = { "w", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MathLibrary_eventMakeFQuat_Parms, w), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMathLibrary_MakeFQuat_Statics::NewProp_z = { "z", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MathLibrary_eventMakeFQuat_Parms, z), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMathLibrary_MakeFQuat_Statics::NewProp_y = { "y", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MathLibrary_eventMakeFQuat_Parms, y), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMathLibrary_MakeFQuat_Statics::NewProp_x = { "x", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MathLibrary_eventMakeFQuat_Parms, x), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMathLibrary_MakeFQuat_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMathLibrary_MakeFQuat_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMathLibrary_MakeFQuat_Statics::NewProp_w,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMathLibrary_MakeFQuat_Statics::NewProp_z,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMathLibrary_MakeFQuat_Statics::NewProp_y,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMathLibrary_MakeFQuat_Statics::NewProp_x,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMathLibrary_MakeFQuat_Statics::Function_MetaDataParams[] = {
		{ "Category", "Math" },
		{ "Comment", "/**\n     * Create FQuat.\n     * @param x Result quaternion's X value.\n     * @param y Result quaternion's Y value.\n     * @param z Result quaternion's Z value.\n     * @param w Result quaternion's W value.\n     * @return FQuat constructed from provided values.\n     */" },
		{ "CompactNodeTitle", "Make Quat" },
		{ "CPP_Default_w", "1.000000" },
		{ "CPP_Default_x", "0.000000" },
		{ "CPP_Default_y", "0.000000" },
		{ "CPP_Default_z", "0.000000" },
		{ "DisplayName", "Make Quaternion" },
		{ "ModuleRelativePath", "Public/MathLibrary.h" },
		{ "ToolTip", "Create FQuat.\n@param x Result quaternion's X value.\n@param y Result quaternion's Y value.\n@param z Result quaternion's Z value.\n@param w Result quaternion's W value.\n@return FQuat constructed from provided values." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMathLibrary_MakeFQuat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMathLibrary, nullptr, "MakeFQuat", nullptr, nullptr, sizeof(MathLibrary_eventMakeFQuat_Parms), Z_Construct_UFunction_UMathLibrary_MakeFQuat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMathLibrary_MakeFQuat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMathLibrary_MakeFQuat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMathLibrary_MakeFQuat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMathLibrary_MakeFQuat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMathLibrary_MakeFQuat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMathLibrary_MultFQuatFQuat_Statics
	{
		struct MathLibrary_eventMultFQuatFQuat_Parms
		{
			FQuat q1;
			FQuat q2;
			FQuat ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_q2_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_q2;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_q1_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_q1;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMathLibrary_MultFQuatFQuat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MathLibrary_eventMultFQuatFQuat_Parms, ReturnValue), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMathLibrary_MultFQuatFQuat_Statics::NewProp_q2_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMathLibrary_MultFQuatFQuat_Statics::NewProp_q2 = { "q2", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MathLibrary_eventMultFQuatFQuat_Parms, q2), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UFunction_UMathLibrary_MultFQuatFQuat_Statics::NewProp_q2_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMathLibrary_MultFQuatFQuat_Statics::NewProp_q2_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMathLibrary_MultFQuatFQuat_Statics::NewProp_q1_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMathLibrary_MultFQuatFQuat_Statics::NewProp_q1 = { "q1", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MathLibrary_eventMultFQuatFQuat_Parms, q1), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UFunction_UMathLibrary_MultFQuatFQuat_Statics::NewProp_q1_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMathLibrary_MultFQuatFQuat_Statics::NewProp_q1_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMathLibrary_MultFQuatFQuat_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMathLibrary_MultFQuatFQuat_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMathLibrary_MultFQuatFQuat_Statics::NewProp_q2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMathLibrary_MultFQuatFQuat_Statics::NewProp_q1,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMathLibrary_MultFQuatFQuat_Statics::Function_MetaDataParams[] = {
		{ "Category", "Math" },
		{ "Comment", "/**\n     * Combines two quaternions.\n     * Order matters when composing quaternions: C = A * B will yield a quaternion C that logically first applies B then A to any subsequent transformation (right first, then left).\n     * @return The result quaternion.\n     */" },
		{ "CompactNodeTitle", "*" },
		{ "DisplayName", "Multiply Quaternions" },
		{ "Keywords", "* multiply" },
		{ "ModuleRelativePath", "Public/MathLibrary.h" },
		{ "ToolTip", "Combines two quaternions.\nOrder matters when composing quaternions: C = A * B will yield a quaternion C that logically first applies B then A to any subsequent transformation (right first, then left).\n@return The result quaternion." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMathLibrary_MultFQuatFQuat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMathLibrary, nullptr, "MultFQuatFQuat", nullptr, nullptr, sizeof(MathLibrary_eventMultFQuatFQuat_Parms), Z_Construct_UFunction_UMathLibrary_MultFQuatFQuat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMathLibrary_MultFQuatFQuat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMathLibrary_MultFQuatFQuat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMathLibrary_MultFQuatFQuat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMathLibrary_MultFQuatFQuat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMathLibrary_MultFQuatFQuat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMathLibrary_NormalizeFQuat_Statics
	{
		struct MathLibrary_eventNormalizeFQuat_Parms
		{
			FQuat q;
			float tolerance;
			FQuat ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_tolerance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_q_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_q;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMathLibrary_NormalizeFQuat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MathLibrary_eventNormalizeFQuat_Parms, ReturnValue), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMathLibrary_NormalizeFQuat_Statics::NewProp_tolerance = { "tolerance", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MathLibrary_eventNormalizeFQuat_Parms, tolerance), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMathLibrary_NormalizeFQuat_Statics::NewProp_q_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMathLibrary_NormalizeFQuat_Statics::NewProp_q = { "q", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MathLibrary_eventNormalizeFQuat_Parms, q), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UFunction_UMathLibrary_NormalizeFQuat_Statics::NewProp_q_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMathLibrary_NormalizeFQuat_Statics::NewProp_q_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMathLibrary_NormalizeFQuat_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMathLibrary_NormalizeFQuat_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMathLibrary_NormalizeFQuat_Statics::NewProp_tolerance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMathLibrary_NormalizeFQuat_Statics::NewProp_q,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMathLibrary_NormalizeFQuat_Statics::Function_MetaDataParams[] = {
		{ "Category", "Math" },
		{ "Comment", "/**\n     * Normalize this quaternion if it is large enough. If it is too small, returns an identity quaternion.\n     * @param q A quaternion to normalize.\n     * @param tolerance Minimum squared length of quaternion for normalization.\n     * @return Normalized quaternion.\n     */" },
		{ "CompactNodeTitle", "Normalize" },
		{ "DisplayName", "Normalize Quaternion" },
		{ "Keywords", "normalize" },
		{ "ModuleRelativePath", "Public/MathLibrary.h" },
		{ "ToolTip", "Normalize this quaternion if it is large enough. If it is too small, returns an identity quaternion.\n@param q A quaternion to normalize.\n@param tolerance Minimum squared length of quaternion for normalization.\n@return Normalized quaternion." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMathLibrary_NormalizeFQuat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMathLibrary, nullptr, "NormalizeFQuat", nullptr, nullptr, sizeof(MathLibrary_eventNormalizeFQuat_Parms), Z_Construct_UFunction_UMathLibrary_NormalizeFQuat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMathLibrary_NormalizeFQuat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMathLibrary_NormalizeFQuat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMathLibrary_NormalizeFQuat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMathLibrary_NormalizeFQuat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMathLibrary_NormalizeFQuat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMathLibrary_SLerpFQuat_Statics
	{
		struct MathLibrary_eventSLerpFQuat_Parms
		{
			FQuat q1;
			FQuat q2;
			float alpha;
			FQuat ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_alpha;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_q2_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_q2;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_q1_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_q1;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMathLibrary_SLerpFQuat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MathLibrary_eventSLerpFQuat_Parms, ReturnValue), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMathLibrary_SLerpFQuat_Statics::NewProp_alpha = { "alpha", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MathLibrary_eventSLerpFQuat_Parms, alpha), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMathLibrary_SLerpFQuat_Statics::NewProp_q2_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMathLibrary_SLerpFQuat_Statics::NewProp_q2 = { "q2", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MathLibrary_eventSLerpFQuat_Parms, q2), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UFunction_UMathLibrary_SLerpFQuat_Statics::NewProp_q2_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMathLibrary_SLerpFQuat_Statics::NewProp_q2_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMathLibrary_SLerpFQuat_Statics::NewProp_q1_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMathLibrary_SLerpFQuat_Statics::NewProp_q1 = { "q1", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MathLibrary_eventSLerpFQuat_Parms, q1), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UFunction_UMathLibrary_SLerpFQuat_Statics::NewProp_q1_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMathLibrary_SLerpFQuat_Statics::NewProp_q1_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMathLibrary_SLerpFQuat_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMathLibrary_SLerpFQuat_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMathLibrary_SLerpFQuat_Statics::NewProp_alpha,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMathLibrary_SLerpFQuat_Statics::NewProp_q2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMathLibrary_SLerpFQuat_Statics::NewProp_q1,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMathLibrary_SLerpFQuat_Statics::Function_MetaDataParams[] = {
		{ "Category", "Math" },
		{ "Comment", "/**\n     * Spherical interpolation. Will correct alignment. Result is normalized.\n     * @param q1 First quaternion.\n     * @param q2 Second quaternion.\n     * @param alpha Interpolation value.\n     * @return Result quaternion, normalized.\n     */" },
		{ "CompactNodeTitle", "SLerp" },
		{ "DisplayName", "Spherical Lerp Quaternion" },
		{ "Keywords", "spherical lerp" },
		{ "ModuleRelativePath", "Public/MathLibrary.h" },
		{ "ToolTip", "Spherical interpolation. Will correct alignment. Result is normalized.\n@param q1 First quaternion.\n@param q2 Second quaternion.\n@param alpha Interpolation value.\n@return Result quaternion, normalized." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMathLibrary_SLerpFQuat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMathLibrary, nullptr, "SLerpFQuat", nullptr, nullptr, sizeof(MathLibrary_eventSLerpFQuat_Parms), Z_Construct_UFunction_UMathLibrary_SLerpFQuat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMathLibrary_SLerpFQuat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMathLibrary_SLerpFQuat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMathLibrary_SLerpFQuat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMathLibrary_SLerpFQuat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMathLibrary_SLerpFQuat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMathLibrary_NoRegister()
	{
		return UMathLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UMathLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMathLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_AntilatencyAltTracking,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMathLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMathLibrary_FastLerpFQuat, "FastLerpFQuat" }, // 1799680906
		{ &Z_Construct_UFunction_UMathLibrary_FQuatAngularDistance, "FQuatAngularDistance" }, // 2617071150
		{ &Z_Construct_UFunction_UMathLibrary_FQuatIdentity, "FQuatIdentity" }, // 1700138249
		{ &Z_Construct_UFunction_UMathLibrary_FQuatToFRotator, "FQuatToFRotator" }, // 4256709089
		{ &Z_Construct_UFunction_UMathLibrary_FRotatorToFQuat, "FRotatorToFQuat" }, // 2138400912
		{ &Z_Construct_UFunction_UMathLibrary_InverseFQuat, "InverseFQuat" }, // 2707057353
		{ &Z_Construct_UFunction_UMathLibrary_MakeFQuat, "MakeFQuat" }, // 3561106289
		{ &Z_Construct_UFunction_UMathLibrary_MultFQuatFQuat, "MultFQuatFQuat" }, // 1171822257
		{ &Z_Construct_UFunction_UMathLibrary_NormalizeFQuat, "NormalizeFQuat" }, // 2264949416
		{ &Z_Construct_UFunction_UMathLibrary_SLerpFQuat, "SLerpFQuat" }, // 2133782579
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMathLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Provides several useful math methods in blueprints.\n */" },
		{ "IncludePath", "MathLibrary.h" },
		{ "ModuleRelativePath", "Public/MathLibrary.h" },
		{ "ToolTip", "Provides several useful math methods in blueprints." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMathLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMathLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMathLibrary_Statics::ClassParams = {
		&UMathLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMathLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMathLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMathLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMathLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMathLibrary, 1333746516);
	template<> ANTILATENCYALTTRACKING_API UClass* StaticClass<UMathLibrary>()
	{
		return UMathLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMathLibrary(Z_Construct_UClass_UMathLibrary, &UMathLibrary::StaticClass, TEXT("/Script/AntilatencyAltTracking"), TEXT("UMathLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMathLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
