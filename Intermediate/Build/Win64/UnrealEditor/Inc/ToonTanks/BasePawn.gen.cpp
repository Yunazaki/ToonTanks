// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ToonTanks/BasePawn.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBasePawn() {}
// Cross Module References
	TOONTANKS_API UClass* Z_Construct_UClass_ABasePawn_NoRegister();
	TOONTANKS_API UClass* Z_Construct_UClass_ABasePawn();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_ToonTanks();
	ENGINE_API UClass* Z_Construct_UClass_UCapsuleComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	TOONTANKS_API UClass* Z_Construct_UClass_AProjectile_NoRegister();
// End Cross Module References
	void ABasePawn::StaticRegisterNativesABasePawn()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABasePawn);
	UClass* Z_Construct_UClass_ABasePawn_NoRegister()
	{
		return ABasePawn::StaticClass();
	}
	struct Z_Construct_UClass_ABasePawn_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_capsuleComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_capsuleComp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_baseMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_baseMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_turretMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_turretMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_projectileSpawnPoint_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_projectileSpawnPoint;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_projectileClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_projectileClass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABasePawn_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_ToonTanks,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABasePawn_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "BasePawn.h" },
		{ "ModuleRelativePath", "BasePawn.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABasePawn_Statics::NewProp_capsuleComp_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "BasePawn.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABasePawn_Statics::NewProp_capsuleComp = { "capsuleComp", nullptr, (EPropertyFlags)0x00400000000a000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABasePawn, capsuleComp), Z_Construct_UClass_UCapsuleComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABasePawn_Statics::NewProp_capsuleComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABasePawn_Statics::NewProp_capsuleComp_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABasePawn_Statics::NewProp_baseMesh_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "BasePawn.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABasePawn_Statics::NewProp_baseMesh = { "baseMesh", nullptr, (EPropertyFlags)0x00400000000a000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABasePawn, baseMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABasePawn_Statics::NewProp_baseMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABasePawn_Statics::NewProp_baseMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABasePawn_Statics::NewProp_turretMesh_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "BasePawn.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABasePawn_Statics::NewProp_turretMesh = { "turretMesh", nullptr, (EPropertyFlags)0x00400000000a000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABasePawn, turretMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABasePawn_Statics::NewProp_turretMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABasePawn_Statics::NewProp_turretMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABasePawn_Statics::NewProp_projectileSpawnPoint_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "BasePawn.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABasePawn_Statics::NewProp_projectileSpawnPoint = { "projectileSpawnPoint", nullptr, (EPropertyFlags)0x00400000000a000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABasePawn, projectileSpawnPoint), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABasePawn_Statics::NewProp_projectileSpawnPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABasePawn_Statics::NewProp_projectileSpawnPoint_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABasePawn_Statics::NewProp_projectileClass_MetaData[] = {
		{ "Category", "BasePawn" },
		{ "ModuleRelativePath", "BasePawn.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ABasePawn_Statics::NewProp_projectileClass = { "projectileClass", nullptr, (EPropertyFlags)0x0044000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABasePawn, projectileClass), Z_Construct_UClass_AProjectile_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ABasePawn_Statics::NewProp_projectileClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABasePawn_Statics::NewProp_projectileClass_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABasePawn_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABasePawn_Statics::NewProp_capsuleComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABasePawn_Statics::NewProp_baseMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABasePawn_Statics::NewProp_turretMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABasePawn_Statics::NewProp_projectileSpawnPoint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABasePawn_Statics::NewProp_projectileClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABasePawn_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABasePawn>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ABasePawn_Statics::ClassParams = {
		&ABasePawn::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ABasePawn_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ABasePawn_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABasePawn_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABasePawn_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABasePawn()
	{
		if (!Z_Registration_Info_UClass_ABasePawn.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABasePawn.OuterSingleton, Z_Construct_UClass_ABasePawn_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ABasePawn.OuterSingleton;
	}
	template<> TOONTANKS_API UClass* StaticClass<ABasePawn>()
	{
		return ABasePawn::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABasePawn);
	struct Z_CompiledInDeferFile_FID_ToonTanks_Source_ToonTanks_BasePawn_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ToonTanks_Source_ToonTanks_BasePawn_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ABasePawn, ABasePawn::StaticClass, TEXT("ABasePawn"), &Z_Registration_Info_UClass_ABasePawn, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABasePawn), 2758465985U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ToonTanks_Source_ToonTanks_BasePawn_h_1494163731(TEXT("/Script/ToonTanks"),
		Z_CompiledInDeferFile_FID_ToonTanks_Source_ToonTanks_BasePawn_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ToonTanks_Source_ToonTanks_BasePawn_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
