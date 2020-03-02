// Fill out your copyright notice in the Description page of Project Settings.


#include "MyProceduralMesh.h"

// Sets default values
AMyProceduralMesh::AMyProceduralMesh()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	pm = CreateDefaultSubobject<UProceduralMeshComponent>(TEXT("ProceduralMesh"));
	pm->AttachToComponent(GetRootComponent(), FAttachmentTransformRules::KeepRelativeTransform);

	width = 4;
	height = 4;
	spacing = 50.0f;
	
	generateMesh = true;

	time = 0.0f;
	m = 5;
	n = 5;
	c = 1.0f;
}

// Called when the game starts or when spawned
void AMyProceduralMesh::BeginPlay()
{
	Super::BeginPlay();

	// Setting solution parameters
	a = spacing * (width-1);
	b = spacing * (height-1);
	k = PI * sqrtf((m * m) / (a * a) + (n * n) / (b * b));
	deltaX = spacing;
	deltaY = spacing;
	
	PrecalculateAmn();
}

// Called every frame
void AMyProceduralMesh::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	CalculateWaveHeight(DeltaTime);

	pm->UpdateMeshSection(0, vertices, TArray<FVector>(), TArray<FVector2D>(), TArray<FColor>(), TArray<FProcMeshTangent>());
}

void AMyProceduralMesh::OnConstruction(const FTransform& Transform)
{
	if (generateMesh)
	{
		generateMesh = false;

		ClearMeshData();

		GenerateVertices();
		GenerateTriangles();

		//Function that creates mesh section
		pm->CreateMeshSection_LinearColor(0, vertices, triangles, normals, uvs, vertexColors, tangents, false);
	}
}

void AMyProceduralMesh::GenerateVertices()
{
	float uvSpacing = 1.0f / FMath::Max(height, width);

	for (int32 y = 0; y < height; y++)
	{
		for (int32 x = 0; x < width; x++)
		{
			vertices.Add(FVector(x * spacing, y * spacing, 0.0f));
			normals.Add(FVector(0.0f, 0.0f, 1.0f));
			uvs.Add(FVector2D(x * uvSpacing, y * uvSpacing));
			vertexColors.Add(FLinearColor(0.0f, 0.0f, 0.0f, 1.0f));
			tangents.Add(FProcMeshTangent(1.0f, 0.0f, 0.0f));
		}
	}
}

void AMyProceduralMesh::GenerateTriangles()
{
	for (int32 y = 0; y < height - 1; y++)
	{
		for (int32 x = 0; x < width - 1; x++)
		{
			triangles.Add(x + (y * width));					//current vertex
			triangles.Add(x + (y * width) + width);			//current vertex + row
			triangles.Add(x + (y * width) + width + 1);		//current vertex + row + one right

			triangles.Add(x + (y * width));					//current vertex
			triangles.Add(x + (y * width) + width + 1);		//current vertex + row + one right
			triangles.Add(x + (y * width) + 1);				//current vertex + one right
		}
	}
}

void AMyProceduralMesh::PrecalculateAmn()
{
	float firstConstant = 4.0f / (a * b);
	
	for (int32 y = 0; y < n; y++)
	{
		for (int32 x = 0; x < m; x++)
		{
			float sum = 0.0f;
			for (int32 j = 0; j < height; j++)
			{
				for (int32 i = 0; i < width; i++)
				{
					sum += sin(vertices[i + width * j].X*(vertices[i+ width*j].Y))*100.0f
						* sin((x * PI * vertices[i + width * j].X) / a)
						* sin((y * PI * vertices[i + width * j].Y) / b)
						* deltaX
						* deltaY;
				}
			}

			Amn.Add(firstConstant * sum);
		}
	}
}

void AMyProceduralMesh::CalculateWaveHeight(float deltaTime)
{
	time += deltaTime;
	for (int32 j = 0; j < height; j++)
	{
		for (int32 i = 0; i < width; i++)
		{
			float sum = 0.0f;
			for (int32 y = 0; y < n; y++)
			{
				for (int32 x = 0; x < m; x++)
				{
					sum += Amn[x + m * y]
						* cos(k * c * time)
						* sin((x * PI * vertices[i + width * j].X) / a)
						* sin((y * PI * vertices[i + width * j].Y) / b);
				}
			}
			
			vertices[i + width * j].Z = sum;
		}
	}
}


void AMyProceduralMesh::ClearMeshData()
{
	vertices.Empty();
	triangles.Empty();
	uvs.Empty();
	normals.Empty();
	vertexColors.Empty();
	tangents.Empty();
}