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

	isInitialCondition = true;
}

void AMyProceduralMesh::CalculateInitialPosition(float deltaTime)
{
	for (int32 y = 0; y < height; y++)
	{
		for (int32 x = 0; x < width; x++)
		{
			previousHeight.Add(0.0f);
		}
	}
	
	for (int32 y = 1; y < height - 1; y++)
	{
		for (int32 x = 1; x < width - 1; x++)
		{
			int currentIndex = x + width * y;
			//float fXY = 3.0f * (1.0f - abs(sin(vertices[currentIndex].X))) *
			//	(1.0f - abs(sin(2.0f * vertices[currentIndex].Y))) +
			//	2.0f * (1.0f - abs(sin(5.0f * vertices[currentIndex].X))) *
			//	(1.0f - abs(sin(7.0f * vertices[currentIndex].Y)));

			float fXY = cos(x);
			
			float gXY = 1.0f;
			
			// set values for frame 0 and 1
			previousHeight[currentIndex] = fXY;
			vertices[currentIndex].Z = fXY +gXY * deltaTime;
		}
	}
}

void AMyProceduralMesh::CalculateWaveHeightNumerically(float deltaTime)
{
	float r = c * deltaTime / deltaX;
	float rSq = r * r;
	
	for (int32 y = 1; y < height - 1; y++)
	{
		for (int32 x = 1; x < width - 1; x++)
		{
			int currIndex = x + width * y;
			float u = vertices[currIndex].Z;
			float uim1j = vertices[currIndex - 1].Z;
			float uip1j = vertices[currIndex + 1].Z;
			float uijm1 = vertices[x + width * (y - 1)].Z;
			float uijp1 = vertices[x + width * (y + 1)].Z;
			float uprev = previousHeight[currIndex];
			
			// update previous Height
			previousHeight[currIndex] = u;

			// update height
			vertices[currIndex].Z = rSq * (uijm1 + uijp1 + uim1j + uip1j - 4.0f * u)
				+ 2.0f * u
				- uprev;
				//+ 1.0f * deltaTime * deltaTime;

		}
	}
}

// Called when the game starts or when spawned
void AMyProceduralMesh::BeginPlay()
{
	Super::BeginPlay();

	// Setting solution parameters
	a = spacing * (width-1);
	b = spacing * (height-1);
	deltaX = spacing;
	deltaY = spacing;
	
	//PrecalculateAmn();
}

// Called every frame
void AMyProceduralMesh::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	//CalculateWaveHeight(DeltaTime);
	if(isInitialCondition)
	{
		CalculateInitialPosition(0.1f);
		isInitialCondition = false;
	}
	else
	{
		CalculateWaveHeightNumerically(0.1f);
	}
	
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

float AMyProceduralMesh::func(int i, int j)
{
	return sin(1.0f / 160.0f * vertices[i + width * j].X) * 100.0f;
	//return exp(0.01f * vertices[i + width * j].X);
	//return 100.0f;
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
					sum += func(i, j)
						* sin((x * PI * vertices[i + width * j].X) / a)
						* sin((y * PI * vertices[i + width * j].Y) / b)
						* deltaX
						* deltaY;
				}
			}

			Amn.Add(firstConstant * sum);
			Kmn.Add(PI * sqrtf((x * x) / (a * a) + (y * y) / (b * b)));
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
						* cos(Kmn[x + m * y] * c * time)
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
	previousHeight.Empty();
	vertices.Empty();
	triangles.Empty();
	uvs.Empty();
	normals.Empty();
	vertexColors.Empty();
	tangents.Empty();
}