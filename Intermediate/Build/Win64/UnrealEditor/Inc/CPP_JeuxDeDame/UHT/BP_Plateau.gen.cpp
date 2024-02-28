// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CPP_JeuxDeDame/BP_Plateau.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBP_Plateau() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	CPP_JEUXDEDAME_API UClass* Z_Construct_UClass_ABP_Plateau();
	CPP_JEUXDEDAME_API UClass* Z_Construct_UClass_ABP_Plateau_NoRegister();
	CPP_JEUXDEDAME_API UClass* Z_Construct_UClass_APlateauCase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_CPP_JeuxDeDame();
// End Cross Module References
	DEFINE_FUNCTION(ABP_Plateau::execSetMyMaterials)
	{
		P_GET_OBJECT(UStaticMeshComponent,Z_Param_SlotComponent);
		P_GET_PROPERTY(FStrProperty,Z_Param_MaterialsPath);
		P_FINISH;
		P_NATIVE_BEGIN;
		ABP_Plateau::SetMyMaterials(Z_Param_SlotComponent,Z_Param_MaterialsPath);
		P_NATIVE_END;
	}
	void ABP_Plateau::StaticRegisterNativesABP_Plateau()
	{
		UClass* Class = ABP_Plateau::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetMyMaterials", &ABP_Plateau::execSetMyMaterials },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ABP_Plateau_SetMyMaterials_Statics
	{
		struct BP_Plateau_eventSetMyMaterials_Parms
		{
			UStaticMeshComponent* SlotComponent;
			FString MaterialsPath;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SlotComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SlotComponent;
		static const UECodeGen_Private::FStrPropertyParams NewProp_MaterialsPath;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABP_Plateau_SetMyMaterials_Statics::NewProp_SlotComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABP_Plateau_SetMyMaterials_Statics::NewProp_SlotComponent = { "SlotComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BP_Plateau_eventSetMyMaterials_Parms, SlotComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABP_Plateau_SetMyMaterials_Statics::NewProp_SlotComponent_MetaData), Z_Construct_UFunction_ABP_Plateau_SetMyMaterials_Statics::NewProp_SlotComponent_MetaData) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ABP_Plateau_SetMyMaterials_Statics::NewProp_MaterialsPath = { "MaterialsPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BP_Plateau_eventSetMyMaterials_Parms, MaterialsPath), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABP_Plateau_SetMyMaterials_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABP_Plateau_SetMyMaterials_Statics::NewProp_SlotComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABP_Plateau_SetMyMaterials_Statics::NewProp_MaterialsPath,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABP_Plateau_SetMyMaterials_Statics::Function_MetaDataParams[] = {
		{ "Category", "Materials" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Fonction Set mat\xef\xbf\xbdrials \n" },
#endif
		{ "ModuleRelativePath", "BP_Plateau.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Fonction Set mat\xef\xbf\xbdrials" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABP_Plateau_SetMyMaterials_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABP_Plateau, nullptr, "SetMyMaterials", nullptr, nullptr, Z_Construct_UFunction_ABP_Plateau_SetMyMaterials_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABP_Plateau_SetMyMaterials_Statics::PropPointers), sizeof(Z_Construct_UFunction_ABP_Plateau_SetMyMaterials_Statics::BP_Plateau_eventSetMyMaterials_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABP_Plateau_SetMyMaterials_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABP_Plateau_SetMyMaterials_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABP_Plateau_SetMyMaterials_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ABP_Plateau_SetMyMaterials_Statics::BP_Plateau_eventSetMyMaterials_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ABP_Plateau_SetMyMaterials()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABP_Plateau_SetMyMaterials_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABP_Plateau);
	UClass* Z_Construct_UClass_ABP_Plateau_NoRegister()
	{
		return ABP_Plateau::StaticClass();
	}
	struct Z_Construct_UClass_ABP_Plateau_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Plateau_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Plateau;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NbRow_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NbRow;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NbColumn_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NbColumn;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CaseType_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_CaseType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABP_Plateau_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_CPP_JeuxDeDame,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABP_Plateau_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_ABP_Plateau_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ABP_Plateau_SetMyMaterials, "SetMyMaterials" }, // 2065843228
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABP_Plateau_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_Plateau_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BP_Plateau.h" },
		{ "ModuleRelativePath", "BP_Plateau.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_Plateau_Statics::NewProp_Plateau_MetaData[] = {
		{ "Category", "StaticMesh" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/////COmposants////\n//Static Mesh Plateau\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "BP_Plateau.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "COmposants/\nStatic Mesh Plateau" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABP_Plateau_Statics::NewProp_Plateau = { "Plateau", nullptr, (EPropertyFlags)0x002008000008001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABP_Plateau, Plateau), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABP_Plateau_Statics::NewProp_Plateau_MetaData), Z_Construct_UClass_ABP_Plateau_Statics::NewProp_Plateau_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_Plateau_Statics::NewProp_NbRow_MetaData[] = {
		{ "Category", "BP_Plateau" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\n" },
#endif
		{ "ModuleRelativePath", "BP_Plateau.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ABP_Plateau_Statics::NewProp_NbRow = { "NbRow", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABP_Plateau, NbRow), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABP_Plateau_Statics::NewProp_NbRow_MetaData), Z_Construct_UClass_ABP_Plateau_Statics::NewProp_NbRow_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_Plateau_Statics::NewProp_NbColumn_MetaData[] = {
		{ "Category", "BP_Plateau" },
		{ "ModuleRelativePath", "BP_Plateau.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ABP_Plateau_Statics::NewProp_NbColumn = { "NbColumn", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABP_Plateau, NbColumn), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABP_Plateau_Statics::NewProp_NbColumn_MetaData), Z_Construct_UClass_ABP_Plateau_Statics::NewProp_NbColumn_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_Plateau_Statics::NewProp_CaseType_MetaData[] = {
		{ "Category", "BP_Plateau" },
		{ "ModuleRelativePath", "BP_Plateau.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ABP_Plateau_Statics::NewProp_CaseType = { "CaseType", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABP_Plateau, CaseType), Z_Construct_UClass_UClass, Z_Construct_UClass_APlateauCase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABP_Plateau_Statics::NewProp_CaseType_MetaData), Z_Construct_UClass_ABP_Plateau_Statics::NewProp_CaseType_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABP_Plateau_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_Plateau_Statics::NewProp_Plateau,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_Plateau_Statics::NewProp_NbRow,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_Plateau_Statics::NewProp_NbColumn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_Plateau_Statics::NewProp_CaseType,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABP_Plateau_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABP_Plateau>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ABP_Plateau_Statics::ClassParams = {
		&ABP_Plateau::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ABP_Plateau_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ABP_Plateau_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABP_Plateau_Statics::Class_MetaDataParams), Z_Construct_UClass_ABP_Plateau_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABP_Plateau_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ABP_Plateau()
	{
		if (!Z_Registration_Info_UClass_ABP_Plateau.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABP_Plateau.OuterSingleton, Z_Construct_UClass_ABP_Plateau_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ABP_Plateau.OuterSingleton;
	}
	template<> CPP_JEUXDEDAME_API UClass* StaticClass<ABP_Plateau>()
	{
		return ABP_Plateau::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABP_Plateau);
	ABP_Plateau::~ABP_Plateau() {}
	struct Z_CompiledInDeferFile_FID_CPP_JeuxDeDame_Source_CPP_JeuxDeDame_BP_Plateau_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CPP_JeuxDeDame_Source_CPP_JeuxDeDame_BP_Plateau_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ABP_Plateau, ABP_Plateau::StaticClass, TEXT("ABP_Plateau"), &Z_Registration_Info_UClass_ABP_Plateau, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABP_Plateau), 2741068948U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CPP_JeuxDeDame_Source_CPP_JeuxDeDame_BP_Plateau_h_3146817131(TEXT("/Script/CPP_JeuxDeDame"),
		Z_CompiledInDeferFile_FID_CPP_JeuxDeDame_Source_CPP_JeuxDeDame_BP_Plateau_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CPP_JeuxDeDame_Source_CPP_JeuxDeDame_BP_Plateau_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
