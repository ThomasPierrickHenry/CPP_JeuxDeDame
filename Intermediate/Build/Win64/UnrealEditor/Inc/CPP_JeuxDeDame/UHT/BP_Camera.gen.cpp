// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CPP_JeuxDeDame/BP_Camera.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBP_Camera() {}
// Cross Module References
	CPP_JEUXDEDAME_API UClass* Z_Construct_UClass_ABP_Camera();
	CPP_JEUXDEDAME_API UClass* Z_Construct_UClass_ABP_Camera_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_CPP_JeuxDeDame();
// End Cross Module References
	void ABP_Camera::StaticRegisterNativesABP_Camera()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABP_Camera);
	UClass* Z_Construct_UClass_ABP_Camera_NoRegister()
	{
		return ABP_Camera::StaticClass();
	}
	struct Z_Construct_UClass_ABP_Camera_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraPlayer_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraPlayer;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABP_Camera_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_CPP_JeuxDeDame,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABP_Camera_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_Camera_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "BP_Camera.h" },
		{ "ModuleRelativePath", "BP_Camera.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_Camera_Statics::NewProp_CameraPlayer_MetaData[] = {
		{ "Category", "Cam\xef\xbf\xbdra" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Camera du joueur//\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "BP_Camera.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Camera du joueur" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABP_Camera_Statics::NewProp_CameraPlayer = { "CameraPlayer", nullptr, (EPropertyFlags)0x002008000008001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABP_Camera, CameraPlayer), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABP_Camera_Statics::NewProp_CameraPlayer_MetaData), Z_Construct_UClass_ABP_Camera_Statics::NewProp_CameraPlayer_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABP_Camera_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_Camera_Statics::NewProp_CameraPlayer,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABP_Camera_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABP_Camera>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ABP_Camera_Statics::ClassParams = {
		&ABP_Camera::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ABP_Camera_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ABP_Camera_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABP_Camera_Statics::Class_MetaDataParams), Z_Construct_UClass_ABP_Camera_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABP_Camera_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ABP_Camera()
	{
		if (!Z_Registration_Info_UClass_ABP_Camera.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABP_Camera.OuterSingleton, Z_Construct_UClass_ABP_Camera_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ABP_Camera.OuterSingleton;
	}
	template<> CPP_JEUXDEDAME_API UClass* StaticClass<ABP_Camera>()
	{
		return ABP_Camera::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABP_Camera);
	ABP_Camera::~ABP_Camera() {}
	struct Z_CompiledInDeferFile_FID_CPP_JeuxDeDame_Source_CPP_JeuxDeDame_BP_Camera_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CPP_JeuxDeDame_Source_CPP_JeuxDeDame_BP_Camera_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ABP_Camera, ABP_Camera::StaticClass, TEXT("ABP_Camera"), &Z_Registration_Info_UClass_ABP_Camera, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABP_Camera), 1061628902U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CPP_JeuxDeDame_Source_CPP_JeuxDeDame_BP_Camera_h_3831165242(TEXT("/Script/CPP_JeuxDeDame"),
		Z_CompiledInDeferFile_FID_CPP_JeuxDeDame_Source_CPP_JeuxDeDame_BP_Camera_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CPP_JeuxDeDame_Source_CPP_JeuxDeDame_BP_Camera_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
