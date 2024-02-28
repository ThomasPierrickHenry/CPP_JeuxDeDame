// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CPP_JeuxDeDame/PC_Game.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePC_Game() {}
// Cross Module References
	CPP_JEUXDEDAME_API UClass* Z_Construct_UClass_APC_Game();
	CPP_JEUXDEDAME_API UClass* Z_Construct_UClass_APC_Game_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_CPP_JeuxDeDame();
// End Cross Module References
	void APC_Game::StaticRegisterNativesAPC_Game()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APC_Game);
	UClass* Z_Construct_UClass_APC_Game_NoRegister()
	{
		return APC_Game::StaticClass();
	}
	struct Z_Construct_UClass_APC_Game_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APC_Game_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_CPP_JeuxDeDame,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APC_Game_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APC_Game_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "PC_Game.h" },
		{ "ModuleRelativePath", "PC_Game.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APC_Game_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APC_Game>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_APC_Game_Statics::ClassParams = {
		&APC_Game::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APC_Game_Statics::Class_MetaDataParams), Z_Construct_UClass_APC_Game_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_APC_Game()
	{
		if (!Z_Registration_Info_UClass_APC_Game.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APC_Game.OuterSingleton, Z_Construct_UClass_APC_Game_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_APC_Game.OuterSingleton;
	}
	template<> CPP_JEUXDEDAME_API UClass* StaticClass<APC_Game>()
	{
		return APC_Game::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(APC_Game);
	APC_Game::~APC_Game() {}
	struct Z_CompiledInDeferFile_FID_CPP_JeuxDeDame_Source_CPP_JeuxDeDame_PC_Game_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CPP_JeuxDeDame_Source_CPP_JeuxDeDame_PC_Game_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_APC_Game, APC_Game::StaticClass, TEXT("APC_Game"), &Z_Registration_Info_UClass_APC_Game, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APC_Game), 3111569820U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CPP_JeuxDeDame_Source_CPP_JeuxDeDame_PC_Game_h_798506356(TEXT("/Script/CPP_JeuxDeDame"),
		Z_CompiledInDeferFile_FID_CPP_JeuxDeDame_Source_CPP_JeuxDeDame_PC_Game_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CPP_JeuxDeDame_Source_CPP_JeuxDeDame_PC_Game_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
