// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ProceduralMeshComponent.h"
#include "MyProceduralMesh.generated.h"

UCLASS()
class PROCEDURALMESH_API AMyProceduralMesh : public AActor
{
	GENERATED_BODY()
	
	UPROPERTY(VisibleAnywhere, Category = "MyProceduralMesh")
	UProceduralMeshComponent* pm;

public:
	AMyProceduralMesh();

	UPROPERTY()
		TArray<FVector> vertices;
	UPROPERTY()
		TArray<FVector> normals;
	UPROPERTY()
		TArray<int32> triangles;
	UPROPERTY()
		TArray<FVector2D> uvs;
	UPROPERTY()
		TArray<FLinearColor> vertexColors;
	UPROPERTY()
		TArray<FProcMeshTangent> tangents;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MuProceduralMesh")
		int32 height;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MuProceduralMesh")
		int32 width;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MuProceduralMesh")
		float spacing;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MuProceduralMesh")
		bool generateMesh;

	virtual void OnConstruction(const FTransform& Transform) override;

	void GenerateVertices();
	void GenerateTriangles();
	void ClearMeshData();

	// 2D Wave Simulation
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MuProceduralMesh")
		TArray<float> Amn;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MuProceduralMesh")
		int32 m;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MuProceduralMesh")
		int32 n;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MuProceduralMesh")
		float k;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MuProceduralMesh")
		float a;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MuProceduralMesh")
		float b;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MuProceduralMesh")
		float c;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MuProceduralMesh")
		float deltaX;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MuProceduralMesh")
		float deltaY;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MuProceduralMesh")
		float time;
	
	void PrecalculateAmn();
	void CalculateWaveHeight(float);
	
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
