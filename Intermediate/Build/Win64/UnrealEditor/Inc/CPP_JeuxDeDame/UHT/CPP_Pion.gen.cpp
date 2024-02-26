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
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_CPP_JeuxDeDame();
// End Cross Module References
	void ACPP_Pion::StaticRegisterNativesACPP_Pion()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACPP_Pion);
	UClass* Z_Construct_UClass_ACPP_Pion_NoRegister()
	{
		return ACPP_Pion::StaticClass();
	}
	struct Z_Construct_UClass_ACPP_Pion_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeshPion_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MeshPion;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACPP_Pion_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_CPP_JeuxDeDame,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_Pion_Statics::DependentSingletons) < 16);
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
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACPP_Pion_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_Pion_Statics::NewProp_MeshPion,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACPP_Pion_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACPP_Pion>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ACPP_Pion_Statics::ClassParams = {
		&ACPP_Pion::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ACPP_Pion_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
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
		{ Z_Construct_UClass_ACPP_Pion, ACPP_Pion::StaticClass, TEXT("ACPP_Pion"), &Z_Registration_Info_UClass_ACPP_Pion, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACPP_Pion), 263076009U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CPP_JeuxDeDame_Source_CPP_JeuxDeDame_CPP_Pion_h_3364110303(TEXT("/Script/CPP_JeuxDeDame"),
		Z_CompiledInDeferFile_FID_CPP_JeuxDeDame_Source_CPP_JeuxDeDame_CPP_Pion_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CPP_JeuxDeDame_Source_CPP_JeuxDeDame_CPP_Pion_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
