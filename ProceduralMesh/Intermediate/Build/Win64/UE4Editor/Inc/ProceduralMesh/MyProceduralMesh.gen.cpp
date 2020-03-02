// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProceduralMesh/MyProceduralMesh.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyProceduralMesh() {}
// Cross Module References
	PROCEDURALMESH_API UClass* Z_Construct_UClass_AMyProceduralMesh_NoRegister();
	PROCEDURALMESH_API UClass* Z_Construct_UClass_AMyProceduralMesh();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_ProceduralMesh();
	PROCEDURALMESHCOMPONENT_API UScriptStruct* Z_Construct_UScriptStruct_FProcMeshTangent();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	PROCEDURALMESHCOMPONENT_API UClass* Z_Construct_UClass_UProceduralMeshComponent_NoRegister();
// End Cross Module References
	void AMyProceduralMesh::StaticRegisterNativesAMyProceduralMesh()
	{
	}
	UClass* Z_Construct_UClass_AMyProceduralMesh_NoRegister()
	{
		return AMyProceduralMesh::StaticClass();
	}
	struct Z_Construct_UClass_AMyProceduralMesh_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_time_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_time;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_deltaY_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_deltaY;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_deltaX_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_deltaX;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_c_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_c;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_b;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_a_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_a;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_k_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_k;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_n_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_n;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_m;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Amn_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Amn;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Amn_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_generateMesh_MetaData[];
#endif
		static void NewProp_generateMesh_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_generateMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_spacing_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_spacing;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_width_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_width;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_height_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_height;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_tangents_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_tangents;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_tangents_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_vertexColors_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_vertexColors;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_vertexColors_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_uvs_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_uvs;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_uvs_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_triangles_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_triangles;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_triangles_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_normals_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_normals;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_normals_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_vertices_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_vertices;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_vertices_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_pm_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_pm;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMyProceduralMesh_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ProceduralMesh,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyProceduralMesh_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MyProceduralMesh.h" },
		{ "ModuleRelativePath", "MyProceduralMesh.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyProceduralMesh_Statics::NewProp_time_MetaData[] = {
		{ "Category", "MuProceduralMesh" },
		{ "ModuleRelativePath", "MyProceduralMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMyProceduralMesh_Statics::NewProp_time = { "time", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyProceduralMesh, time), METADATA_PARAMS(Z_Construct_UClass_AMyProceduralMesh_Statics::NewProp_time_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyProceduralMesh_Statics::NewProp_time_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyProceduralMesh_Statics::NewProp_deltaY_MetaData[] = {
		{ "Category", "MuProceduralMesh" },
		{ "ModuleRelativePath", "MyProceduralMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMyProceduralMesh_Statics::NewProp_deltaY = { "deltaY", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyProceduralMesh, deltaY), METADATA_PARAMS(Z_Construct_UClass_AMyProceduralMesh_Statics::NewProp_deltaY_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyProceduralMesh_Statics::NewProp_deltaY_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyProceduralMesh_Statics::NewProp_deltaX_MetaData[] = {
		{ "Category", "MuProceduralMesh" },
		{ "ModuleRelativePath", "MyProceduralMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMyProceduralMesh_Statics::NewProp_deltaX = { "deltaX", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyProceduralMesh, deltaX), METADATA_PARAMS(Z_Construct_UClass_AMyProceduralMesh_Statics::NewProp_deltaX_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyProceduralMesh_Statics::NewProp_deltaX_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyProceduralMesh_Statics::NewProp_c_MetaData[] = {
		{ "Category", "MuProceduralMesh" },
		{ "ModuleRelativePath", "MyProceduralMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMyProceduralMesh_Statics::NewProp_c = { "c", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyProceduralMesh, c), METADATA_PARAMS(Z_Construct_UClass_AMyProceduralMesh_Statics::NewProp_c_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyProceduralMesh_Statics::NewProp_c_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyProceduralMesh_Statics::NewProp_b_MetaData[] = {
		{ "Category", "MuProceduralMesh" },
		{ "ModuleRelativePath", "MyProceduralMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMyProceduralMesh_Statics::NewProp_b = { "b", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyProceduralMesh, b), METADATA_PARAMS(Z_Construct_UClass_AMyProceduralMesh_Statics::NewProp_b_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyProceduralMesh_Statics::NewProp_b_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyProceduralMesh_Statics::NewProp_a_MetaData[] = {
		{ "Category", "MuProceduralMesh" },
		{ "ModuleRelativePath", "MyProceduralMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMyProceduralMesh_Statics::NewProp_a = { "a", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyProceduralMesh, a), METADATA_PARAMS(Z_Construct_UClass_AMyProceduralMesh_Statics::NewProp_a_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyProceduralMesh_Statics::NewProp_a_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyProceduralMesh_Statics::NewProp_k_MetaData[] = {
		{ "Category", "MuProceduralMesh" },
		{ "ModuleRelativePath", "MyProceduralMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMyProceduralMesh_Statics::NewProp_k = { "k", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyProceduralMesh, k), METADATA_PARAMS(Z_Construct_UClass_AMyProceduralMesh_Statics::NewProp_k_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyProceduralMesh_Statics::NewProp_k_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyProceduralMesh_Statics::NewProp_n_MetaData[] = {
		{ "Category", "MuProceduralMesh" },
		{ "ModuleRelativePath", "MyProceduralMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMyProceduralMesh_Statics::NewProp_n = { "n", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyProceduralMesh, n), METADATA_PARAMS(Z_Construct_UClass_AMyProceduralMesh_Statics::NewProp_n_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyProceduralMesh_Statics::NewProp_n_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyProceduralMesh_Statics::NewProp_m_MetaData[] = {
		{ "Category", "MuProceduralMesh" },
		{ "ModuleRelativePath", "MyProceduralMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMyProceduralMesh_Statics::NewProp_m = { "m", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyProceduralMesh, m), METADATA_PARAMS(Z_Construct_UClass_AMyProceduralMesh_Statics::NewProp_m_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyProceduralMesh_Statics::NewProp_m_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyProceduralMesh_Statics::NewProp_Amn_MetaData[] = {
		{ "Category", "MuProceduralMesh" },
		{ "Comment", "// 2D Wave Simulation\n" },
		{ "ModuleRelativePath", "MyProceduralMesh.h" },
		{ "ToolTip", "2D Wave Simulation" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AMyProceduralMesh_Statics::NewProp_Amn = { "Amn", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyProceduralMesh, Amn), METADATA_PARAMS(Z_Construct_UClass_AMyProceduralMesh_Statics::NewProp_Amn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyProceduralMesh_Statics::NewProp_Amn_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMyProceduralMesh_Statics::NewProp_Amn_Inner = { "Amn", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyProceduralMesh_Statics::NewProp_generateMesh_MetaData[] = {
		{ "Category", "MuProceduralMesh" },
		{ "ModuleRelativePath", "MyProceduralMesh.h" },
	};
#endif
	void Z_Construct_UClass_AMyProceduralMesh_Statics::NewProp_generateMesh_SetBit(void* Obj)
	{
		((AMyProceduralMesh*)Obj)->generateMesh = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMyProceduralMesh_Statics::NewProp_generateMesh = { "generateMesh", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AMyProceduralMesh), &Z_Construct_UClass_AMyProceduralMesh_Statics::NewProp_generateMesh_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMyProceduralMesh_Statics::NewProp_generateMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyProceduralMesh_Statics::NewProp_generateMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyProceduralMesh_Statics::NewProp_spacing_MetaData[] = {
		{ "Category", "MuProceduralMesh" },
		{ "ModuleRelativePath", "MyProceduralMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMyProceduralMesh_Statics::NewProp_spacing = { "spacing", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyProceduralMesh, spacing), METADATA_PARAMS(Z_Construct_UClass_AMyProceduralMesh_Statics::NewProp_spacing_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyProceduralMesh_Statics::NewProp_spacing_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyProceduralMesh_Statics::NewProp_width_MetaData[] = {
		{ "Category", "MuProceduralMesh" },
		{ "ModuleRelativePath", "MyProceduralMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMyProceduralMesh_Statics::NewProp_width = { "width", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyProceduralMesh, width), METADATA_PARAMS(Z_Construct_UClass_AMyProceduralMesh_Statics::NewProp_width_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyProceduralMesh_Statics::NewProp_width_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyProceduralMesh_Statics::NewProp_height_MetaData[] = {
		{ "Category", "MuProceduralMesh" },
		{ "ModuleRelativePath", "MyProceduralMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMyProceduralMesh_Statics::NewProp_height = { "height", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyProceduralMesh, height), METADATA_PARAMS(Z_Construct_UClass_AMyProceduralMesh_Statics::NewProp_height_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyProceduralMesh_Statics::NewProp_height_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyProceduralMesh_Statics::NewProp_tangents_MetaData[] = {
		{ "ModuleRelativePath", "MyProceduralMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AMyProceduralMesh_Statics::NewProp_tangents = { "tangents", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyProceduralMesh, tangents), METADATA_PARAMS(Z_Construct_UClass_AMyProceduralMesh_Statics::NewProp_tangents_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyProceduralMesh_Statics::NewProp_tangents_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMyProceduralMesh_Statics::NewProp_tangents_Inner = { "tangents", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FProcMeshTangent, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyProceduralMesh_Statics::NewProp_vertexColors_MetaData[] = {
		{ "ModuleRelativePath", "MyProceduralMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AMyProceduralMesh_Statics::NewProp_vertexColors = { "vertexColors", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyProceduralMesh, vertexColors), METADATA_PARAMS(Z_Construct_UClass_AMyProceduralMesh_Statics::NewProp_vertexColors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyProceduralMesh_Statics::NewProp_vertexColors_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMyProceduralMesh_Statics::NewProp_vertexColors_Inner = { "vertexColors", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyProceduralMesh_Statics::NewProp_uvs_MetaData[] = {
		{ "ModuleRelativePath", "MyProceduralMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AMyProceduralMesh_Statics::NewProp_uvs = { "uvs", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyProceduralMesh, uvs), METADATA_PARAMS(Z_Construct_UClass_AMyProceduralMesh_Statics::NewProp_uvs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyProceduralMesh_Statics::NewProp_uvs_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMyProceduralMesh_Statics::NewProp_uvs_Inner = { "uvs", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyProceduralMesh_Statics::NewProp_triangles_MetaData[] = {
		{ "ModuleRelativePath", "MyProceduralMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AMyProceduralMesh_Statics::NewProp_triangles = { "triangles", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyProceduralMesh, triangles), METADATA_PARAMS(Z_Construct_UClass_AMyProceduralMesh_Statics::NewProp_triangles_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyProceduralMesh_Statics::NewProp_triangles_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMyProceduralMesh_Statics::NewProp_triangles_Inner = { "triangles", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyProceduralMesh_Statics::NewProp_normals_MetaData[] = {
		{ "ModuleRelativePath", "MyProceduralMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AMyProceduralMesh_Statics::NewProp_normals = { "normals", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyProceduralMesh, normals), METADATA_PARAMS(Z_Construct_UClass_AMyProceduralMesh_Statics::NewProp_normals_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyProceduralMesh_Statics::NewProp_normals_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMyProceduralMesh_Statics::NewProp_normals_Inner = { "normals", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyProceduralMesh_Statics::NewProp_vertices_MetaData[] = {
		{ "ModuleRelativePath", "MyProceduralMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AMyProceduralMesh_Statics::NewProp_vertices = { "vertices", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyProceduralMesh, vertices), METADATA_PARAMS(Z_Construct_UClass_AMyProceduralMesh_Statics::NewProp_vertices_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyProceduralMesh_Statics::NewProp_vertices_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMyProceduralMesh_Statics::NewProp_vertices_Inner = { "vertices", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyProceduralMesh_Statics::NewProp_pm_MetaData[] = {
		{ "Category", "MyProceduralMesh" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MyProceduralMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyProceduralMesh_Statics::NewProp_pm = { "pm", nullptr, (EPropertyFlags)0x00400000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyProceduralMesh, pm), Z_Construct_UClass_UProceduralMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMyProceduralMesh_Statics::NewProp_pm_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyProceduralMesh_Statics::NewProp_pm_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMyProceduralMesh_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyProceduralMesh_Statics::NewProp_time,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyProceduralMesh_Statics::NewProp_deltaY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyProceduralMesh_Statics::NewProp_deltaX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyProceduralMesh_Statics::NewProp_c,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyProceduralMesh_Statics::NewProp_b,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyProceduralMesh_Statics::NewProp_a,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyProceduralMesh_Statics::NewProp_k,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyProceduralMesh_Statics::NewProp_n,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyProceduralMesh_Statics::NewProp_m,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyProceduralMesh_Statics::NewProp_Amn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyProceduralMesh_Statics::NewProp_Amn_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyProceduralMesh_Statics::NewProp_generateMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyProceduralMesh_Statics::NewProp_spacing,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyProceduralMesh_Statics::NewProp_width,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyProceduralMesh_Statics::NewProp_height,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyProceduralMesh_Statics::NewProp_tangents,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyProceduralMesh_Statics::NewProp_tangents_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyProceduralMesh_Statics::NewProp_vertexColors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyProceduralMesh_Statics::NewProp_vertexColors_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyProceduralMesh_Statics::NewProp_uvs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyProceduralMesh_Statics::NewProp_uvs_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyProceduralMesh_Statics::NewProp_triangles,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyProceduralMesh_Statics::NewProp_triangles_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyProceduralMesh_Statics::NewProp_normals,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyProceduralMesh_Statics::NewProp_normals_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyProceduralMesh_Statics::NewProp_vertices,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyProceduralMesh_Statics::NewProp_vertices_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyProceduralMesh_Statics::NewProp_pm,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMyProceduralMesh_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyProceduralMesh>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMyProceduralMesh_Statics::ClassParams = {
		&AMyProceduralMesh::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AMyProceduralMesh_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AMyProceduralMesh_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMyProceduralMesh_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMyProceduralMesh_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMyProceduralMesh()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMyProceduralMesh_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMyProceduralMesh, 538666399);
	template<> PROCEDURALMESH_API UClass* StaticClass<AMyProceduralMesh>()
	{
		return AMyProceduralMesh::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMyProceduralMesh(Z_Construct_UClass_AMyProceduralMesh, &AMyProceduralMesh::StaticClass, TEXT("/Script/ProceduralMesh"), TEXT("AMyProceduralMesh"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyProceduralMesh);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
