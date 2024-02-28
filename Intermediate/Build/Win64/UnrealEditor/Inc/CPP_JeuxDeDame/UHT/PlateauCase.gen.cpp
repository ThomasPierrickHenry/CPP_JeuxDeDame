// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CPP_JeuxDeDame/PlateauCase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlateauCase() {}
// Cross Module References
	CPP_JEUXDEDAME_API UClass* Z_Construct_UClass_APlateauCase();
	CPP_JEUXDEDAME_API UClass* Z_Construct_UClass_APlateauCase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_CPP_JeuxDeDame();
// End Cross Module References
	void APlateauCase::StaticRegisterNativesAPlateauCase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APlateauCase);
	UClass* Z_Construct_UClass_APlateauCase_NoRegister()
	{
		return APlateauCase::StaticClass();
	}
	struct Z_Construct_UClass_APlateauCase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Slot_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Slot;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APlateauCase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_CPP_JeuxDeDame,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APlateauCase_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlateauCase_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PlateauCase.h" },
		{ "ModuleRelativePath", "PlateauCase.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlateauCase_Statics::NewProp_Slot_MetaData[] = {
		{ "Category", "StaticMesh" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "PlateauCase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlateauCase_Statics::NewProp_Slot = { "Slot", nullptr, (EPropertyFlags)0x002008000008001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlateauCase, Slot), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlateauCase_Statics::NewProp_Slot_MetaData), Z_Construct_UClass_APlateauCase_Statics::NewProp_Slot_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APlateauCase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlateauCase_Statics::NewProp_Slot,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APlateauCase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlateauCase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_APlateauCase_Statics::ClassParams = {
		&APlateauCase::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_APlateauCase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_APlateauCase_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlateauCase_Statics::Class_MetaDataParams), Z_Construct_UClass_APlateauCase_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APlateauCase_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_APlateauCase()
	{
		if (!Z_Registration_Info_UClass_APlateauCase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APlateauCase.OuterSingleton, Z_Construct_UClass_APlateauCase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_APlateauCase.OuterSingleton;
	}
	template<> CPP_JEUXDEDAME_API UClass* StaticClass<APlateauCase>()
	{
		return APlateauCase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(APlateauCase);
	APlateauCase::~APlateauCase() {}
	struct Z_CompiledInDeferFile_FID_CPP_JeuxDeDame_Source_CPP_JeuxDeDame_PlateauCase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CPP_JeuxDeDame_Source_CPP_JeuxDeDame_PlateauCase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_APlateauCase, APlateauCase::StaticClass, TEXT("APlateauCase"), &Z_Registration_Info_UClass_APlateauCase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APlateauCase), 230838788U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CPP_JeuxDeDame_Source_CPP_JeuxDeDame_PlateauCase_h_3327529877(TEXT("/Script/CPP_JeuxDeDame"),
		Z_CompiledInDeferFile_FID_CPP_JeuxDeDame_Source_CPP_JeuxDeDame_PlateauCase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CPP_JeuxDeDame_Source_CPP_JeuxDeDame_PlateauCase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
