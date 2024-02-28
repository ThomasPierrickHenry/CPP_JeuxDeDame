// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CPP_JeuxDeDame/CPP_Pion.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCPP_Pion() {}
// Cross Module References
	CPP_JEUXDEDAME_API UClass* Z_Construct_UClass_ACPP_Pion();
	CPP_JEUXDEDAME_API UClass* Z_Construct_UClass_ACPP_Pion_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_CPP_JeuxDeDame();
// End Cross Module References
	DEFINE_FUNCTION(ACPP_Pion::execOnMouseOverEnd)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_TouchedComponent);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnMouseOverEnd(Z_Param_TouchedComponent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACPP_Pion::execOnMouseOverBegin)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_TouchedComponent);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnMouseOverBegin(Z_Param_TouchedComponent);
		P_NATIVE_END;
	}
	void ACPP_Pion::StaticRegisterNativesACPP_Pion()
	{
		UClass* Class = ACPP_Pion::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnMouseOverBegin", &ACPP_Pion::execOnMouseOverBegin },
			{ "OnMouseOverEnd", &ACPP_Pion::execOnMouseOverEnd },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ACPP_Pion_OnMouseOverBegin_Statics
	{
		struct CPP_Pion_eventOnMouseOverBegin_Parms
		{
			UPrimitiveComponent* TouchedComponent;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TouchedComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TouchedComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACPP_Pion_OnMouseOverBegin_Statics::NewProp_TouchedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACPP_Pion_OnMouseOverBegin_Statics::NewProp_TouchedComponent = { "TouchedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CPP_Pion_eventOnMouseOverBegin_Parms, TouchedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACPP_Pion_OnMouseOverBegin_Statics::NewProp_TouchedComponent_MetaData), Z_Construct_UFunction_ACPP_Pion_OnMouseOverBegin_Statics::NewProp_TouchedComponent_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACPP_Pion_OnMouseOverBegin_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACPP_Pion_OnMouseOverBegin_Statics::NewProp_TouchedComponent,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACPP_Pion_OnMouseOverBegin_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Appell\xef\xbf\xbd quand la souris passe sur le pion\n" },
#endif
		{ "ModuleRelativePath", "CPP_Pion.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Appell\xef\xbf\xbd quand la souris passe sur le pion" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACPP_Pion_OnMouseOverBegin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACPP_Pion, nullptr, "OnMouseOverBegin", nullptr, nullptr, Z_Construct_UFunction_ACPP_Pion_OnMouseOverBegin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACPP_Pion_OnMouseOverBegin_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACPP_Pion_OnMouseOverBegin_Statics::CPP_Pion_eventOnMouseOverBegin_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACPP_Pion_OnMouseOverBegin_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACPP_Pion_OnMouseOverBegin_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACPP_Pion_OnMouseOverBegin_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ACPP_Pion_OnMouseOverBegin_Statics::CPP_Pion_eventOnMouseOverBegin_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ACPP_Pion_OnMouseOverBegin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACPP_Pion_OnMouseOverBegin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACPP_Pion_OnMouseOverEnd_Statics
	{
		struct CPP_Pion_eventOnMouseOverEnd_Parms
		{
			UPrimitiveComponent* TouchedComponent;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TouchedComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TouchedComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACPP_Pion_OnMouseOverEnd_Statics::NewProp_TouchedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACPP_Pion_OnMouseOverEnd_Statics::NewProp_TouchedComponent = { "TouchedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CPP_Pion_eventOnMouseOverEnd_Parms, TouchedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACPP_Pion_OnMouseOverEnd_Statics::NewProp_TouchedComponent_MetaData), Z_Construct_UFunction_ACPP_Pion_OnMouseOverEnd_Statics::NewProp_TouchedComponent_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACPP_Pion_OnMouseOverEnd_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACPP_Pion_OnMouseOverEnd_Statics::NewProp_TouchedComponent,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACPP_Pion_OnMouseOverEnd_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Appell\xef\xbf\xbd ne passe plus la souris sur le pion\n" },
#endif
		{ "ModuleRelativePath", "CPP_Pion.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Appell\xef\xbf\xbd ne passe plus la souris sur le pion" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACPP_Pion_OnMouseOverEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACPP_Pion, nullptr, "OnMouseOverEnd", nullptr, nullptr, Z_Construct_UFunction_ACPP_Pion_OnMouseOverEnd_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACPP_Pion_OnMouseOverEnd_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACPP_Pion_OnMouseOverEnd_Statics::CPP_Pion_eventOnMouseOverEnd_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACPP_Pion_OnMouseOverEnd_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACPP_Pion_OnMouseOverEnd_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACPP_Pion_OnMouseOverEnd_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ACPP_Pion_OnMouseOverEnd_Statics::CPP_Pion_eventOnMouseOverEnd_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ACPP_Pion_OnMouseOverEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACPP_Pion_OnMouseOverEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACPP_Pion);
	UClass* Z_Construct_UClass_ACPP_Pion_NoRegister()
	{
		return ACPP_Pion::StaticClass();
	}
	struct Z_Construct_UClass_ACPP_Pion_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeshPion_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MeshPion;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IndexPionOwner_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_IndexPionOwner;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACPP_Pion_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_CPP_JeuxDeDame,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_Pion_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_ACPP_Pion_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ACPP_Pion_OnMouseOverBegin, "OnMouseOverBegin" }, // 4103796888
		{ &Z_Construct_UFunction_ACPP_Pion_OnMouseOverEnd, "OnMouseOverEnd" }, // 1970353156
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_Pion_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_Pion_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "CPP_Pion.h" },
		{ "ModuleRelativePath", "CPP_Pion.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_Pion_Statics::NewProp_MeshPion_MetaData[] = {
		{ "Category", "StaticMesh" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Static Mesh du Pion//\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "CPP_Pion.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Static Mesh du Pion" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACPP_Pion_Statics::NewProp_MeshPion = { "MeshPion", nullptr, (EPropertyFlags)0x002008000008001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACPP_Pion, MeshPion), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_Pion_Statics::NewProp_MeshPion_MetaData), Z_Construct_UClass_ACPP_Pion_Statics::NewProp_MeshPion_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_Pion_Statics::NewProp_IndexPionOwner_MetaData[] = {
		{ "Category", "Integer" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Variable Index du propri\xef\xbf\xbdtaire du pion d\xef\xbf\xbd""fini dans l'\xef\xbf\xbd""diteur\n" },
#endif
		{ "ModuleRelativePath", "CPP_Pion.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Variable Index du propri\xef\xbf\xbdtaire du pion d\xef\xbf\xbd""fini dans l'\xef\xbf\xbd""diteur" },
#endif
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ACPP_Pion_Statics::NewProp_IndexPionOwner = { "IndexPionOwner", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACPP_Pion, IndexPionOwner), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_Pion_Statics::NewProp_IndexPionOwner_MetaData), Z_Construct_UClass_ACPP_Pion_Statics::NewProp_IndexPionOwner_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACPP_Pion_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_Pion_Statics::NewProp_MeshPion,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_Pion_Statics::NewProp_IndexPionOwner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACPP_Pion_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACPP_Pion>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ACPP_Pion_Statics::ClassParams = {
		&ACPP_Pion::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ACPP_Pion_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_Pion_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_Pion_Statics::Class_MetaDataParams), Z_Construct_UClass_ACPP_Pion_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_Pion_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ACPP_Pion()
	{
		if (!Z_Registration_Info_UClass_ACPP_Pion.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACPP_Pion.OuterSingleton, Z_Construct_UClass_ACPP_Pion_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ACPP_Pion.OuterSingleton;
	}
	template<> CPP_JEUXDEDAME_API UClass* StaticClass<ACPP_Pion>()
	{
		return ACPP_Pion::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACPP_Pion);
	ACPP_Pion::~ACPP_Pion() {}
	struct Z_CompiledInDeferFile_FID_CPP_JeuxDeDame_Source_CPP_JeuxDeDame_CPP_Pion_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CPP_JeuxDeDame_Source_CPP_JeuxDeDame_CPP_Pion_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ACPP_Pion, ACPP_Pion::StaticClass, TEXT("ACPP_Pion"), &Z_Registration_Info_UClass_ACPP_Pion, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACPP_Pion), 3160180523U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CPP_JeuxDeDame_Source_CPP_JeuxDeDame_CPP_Pion_h_4275705775(TEXT("/Script/CPP_JeuxDeDame"),
		Z_CompiledInDeferFile_FID_CPP_JeuxDeDame_Source_CPP_JeuxDeDame_CPP_Pion_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CPP_JeuxDeDame_Source_CPP_JeuxDeDame_CPP_Pion_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
