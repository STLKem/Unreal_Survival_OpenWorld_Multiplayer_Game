// Fill out your copyright notice in the Description page of Project Settings.


#include "WorldGeneration.h"
#include "ProceduralMeshComponent.h"
#include "KismetProceduralMeshLibrary.h"

// Sets default values
AWorldGeneration::AWorldGeneration()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	TerrainMesh = CreateDefaultSubobject<UProceduralMeshComponent>("TerrainMesh");
	TerrainMesh->SetupAttachment(GetRootComponent());

}

// void AWorldGeneration::GenerateTerrain()
// {
//
// 	TArray<FVector> Vertices;
// 	FVector Vertex;
// 	
// 	TArray<FVector2D> UVs;
// 	FVector2D UV;
// 	
// 	TArray<int32> Triangles;
// 	TArray<FVector> Normals;
// 	TArray<FProcMeshTangent> Tangents;
// 	
// 	for(int32 iVY = -1; iVY <= YVertexCount; iVY ++)
// 	{
// 		for(int32 iVX = 0; iVX <= XVertexCount; iVX ++)
// 		{
// 			
// 			Vertex.X = iVX * CellSize;
// 			Vertex.Y = iVY * CellSize;
// 			Vertex.Z = 0;
// 			Vertices.Add(Vertex);
//
// 			UV.X = iVX * CellSize / 100;
// 			UV.Y = iVY * CellSize / 100;
// 			UVs.Add(UV);
// 		}
// 	}
// 	
// 	for(int32 iTY = -1; iTY <= YVertexCount; iTY ++)
//     	{
//     		for(int32 iTX = 0; iTX <= XVertexCount; iTX ++)
//     		{
//     			
//     			Triangles.Add(iTX + iTY * (XVertexCount + 2));
//     			Triangles.Add(iTX + (iTY + 1) * (XVertexCount + 2));
//     			Triangles.Add(iTX + iTY * (XVertexCount + 2) + 1);
//
//     			Triangles.Add(iTX + (iTY + 1) * (XVertexCount + 2));
//     			Triangles.Add(iTX + (iTY + 1) * (XVertexCount + 2) + 1);
//     			Triangles.Add(iTX + iTY * (XVertexCount + 2) + 1);
//     		}
//     	}
//
// 	
// 	UKismetProceduralMeshLibrary::CalculateTangentsForMesh(Vertices, Triangles, UVs, Normals, Tangents);
//
// 	TerrainMesh->CreateMeshSection_LinearColor(0, Vertices, Triangles, Normals, UVs,TArray<FLinearColor>(), Tangents, true);
// 	
// }

void AWorldGeneration::GenerateTerrain()
{
	if (XVertexCount < 1 || YVertexCount < 1)
	{
		UE_LOG(LogTemp, Error, TEXT("XVertexCount and YVertexCount must be >= 1! Current values: X=%d, Y=%d"), XVertexCount, YVertexCount);
		return;
	}

	TArray<FVector> Vertices;
	TArray<FVector2D> UVs;
	TArray<int32> Triangles;
	TArray<FVector> Normals;
	TArray<FProcMeshTangent> Tangents;

	int32 RowSize = XVertexCount + 1;

	// Вершины
	for (int32 y = 0; y <= YVertexCount; y++)
	{
		for (int32 x = 0; x <= XVertexCount; x++)
		{
			Vertices.Add(FVector(x * CellSize, y * CellSize, GetHeight(FVector2D(x * CellSize, y * CellSize))));
			UVs.Add(FVector2D((float)x / XVertexCount, (float)y / YVertexCount));
		}
	}

	// Треугольники
	for (int32 y = 0; y < YVertexCount; y++)
	{
		for (int32 x = 0; x < XVertexCount; x++)
		{
			int32 i0 = x + y * RowSize;
			int32 i1 = i0 + 1;
			int32 i2 = i0 + RowSize;
			int32 i3 = i2 + 1;

			// Debug
			if (i0 < 0 || i1 < 0 || i2 < 0 || i3 < 0 ||
				i0 >= Vertices.Num() || i1 >= Vertices.Num() || i2 >= Vertices.Num() || i3 >= Vertices.Num())
			{
				UE_LOG(LogTemp, Error, TEXT("Invalid triangle indices: i0=%d, i1=%d, i2=%d, i3=%d, Vertices.Num=%d"), 
					   i0, i1, i2, i3, Vertices.Num());
				continue;
			}

			Triangles.Add(i0);
			Triangles.Add(i2);
			Triangles.Add(i1);

			Triangles.Add(i1);
			Triangles.Add(i2);
			Triangles.Add(i3);
		}
	}

	UKismetProceduralMeshLibrary::CalculateTangentsForMesh(Vertices, Triangles, UVs, Normals, Tangents);

	TerrainMesh->CreateMeshSection_LinearColor(
		0, Vertices, Triangles, Normals, UVs,
		TArray<FLinearColor>(), Tangents, true);
}

// float AWorldGeneration::GetHeight(FVector2D Location)
// {
//
// 	float EdgeNoise = PerlinNoiseExtended(Location, 0.05f, 0.3f, FVector2D(0.0f, 0.0f));
//
// 	float Blend = FMath::Clamp((Location.X - 40.0f * CellSize) / (20.0f * CellSize), 0.0f, 1.0f);
// 	Blend += EdgeNoise;
// 	Blend = FMath::Clamp(Blend, 0.0f, 1.0f);
//
// 	// float SmoothBlend = Blend * Blend * (3 - 2 * Blend);
// 	// return FMath::Lerp(MountainHeight, PlainHeight, SmoothBlend);
//
//
//
// 	float MountainHeight = PerlinNoiseExtended(Location, .00001f, 20000, FVector2D(.1f))+
// 			PerlinNoiseExtended(Location, .0001f, 5000, FVector2D(.2f))+
// 				PerlinNoiseExtended(Location, .001f, 500, FVector2D(.3f))+
// 					PerlinNoiseExtended(Location, .01f, 100, FVector2D(.4f));
//
// 	float PlainHeight = PerlinNoiseExtended(Location, .001f, 100, FVector2D(.3f));
//
// 	return FMath::Lerp(MountainHeight, PlainHeight, Blend);
// 	
// 	// return
// 	// {
// 	// 	PerlinNoiseExtended(Location, .00001f, 20000, FVector2D(.1f))+
// 	// 		PerlinNoiseExtended(Location, .0001f, 5000, FVector2D(.2f))+
// 	// 			PerlinNoiseExtended(Location, .001f, 500, FVector2D(.3f))+
// 	// 				PerlinNoiseExtended(Location, .01f, 100, FVector2D(.4f))
// 	// };
// 	
// }

float AWorldGeneration::PerlinNoiseExtended(const FVector2D Location, const float Scale, const float Amplitude,
	const FVector2D offset)
{

	return FMath::PerlinNoise2D(Location * Scale + FVector2D(.1f, .1f) + offset) * Amplitude;
	
}

// Пример: рваный переход между горами (слева) и полем (справа).
// float AWorldGeneration::GetHeight(FVector2D Location)
// {
//     // ----- вспомогательные функции -----
//     auto Hash01 = [](int32 xi, int32 yi, float seed = 0.0f) -> float
//     {
//         // простая детерминированная "рандом"-функция на основе координат
//         float n = xi * 127.1f + yi * 311.7f + seed * 13.7f;
//         return FMath::Frac(FMath::Sin(n) * 43758.5453123f); // -> [0,1)
//     };
//
//     auto SmoothStep = [](float edge0, float edge1, float x) -> float
//     {
//         if (edge1 <= edge0) return x >= edge1 ? 1.0f : 0.0f;
//         x = FMath::Clamp((x - edge0) / (edge1 - edge0), 0.0f, 1.0f);
//         return x * x * (3.0f - 2.0f * x); // Smoothstep
//     };
//
//     // ----- 1) Базовые высоты для гор и равнины -----
//     float MountainHeight = PerlinNoiseExtended(Location, .00001f, 20000, FVector2D(.1f))+
// 			PerlinNoiseExtended(Location, .0001f, 5000, FVector2D(.2f))+
// 				PerlinNoiseExtended(Location, .001f, 500, FVector2D(.3f))+
// 					PerlinNoiseExtended(Location, .01f, 100, FVector2D(.4f));
//
//     float PlainHeight =
//         PerlinNoiseExtended(Location, 0.001f, 100.0f, FVector2D(0.3f, 0.3f)) +
//         PerlinNoiseExtended(Location, 0.01f, 30.0f, FVector2D(0.4f, 0.4f));
//
//     // ----- 2) Параметры всей зоны перехода -----
//     const float TransitionStartX = 40.0f;
//     const float TransitionEndX   = 60.0f;
//     const float TransitionWidth  = TransitionEndX - TransitionStartX; // 20
//
//     // нормализованное положение в зоне перехода (0..1)
//     float tGlobal = (Location.X - TransitionStartX) / TransitionWidth;
//     tGlobal = FMath::Clamp(tGlobal, 0.0f, 1.0f);
//
//     // быстрый выход для точек вне зоны (экономия)
//     if (tGlobal <= 0.0f) return MountainHeight;
//     if (tGlobal >= 1.0f) return PlainHeight;
//
//     // ----- 3) Получаем детерминированные случайные параметры для "колонки" X -----
//     // используем floor(Location.X) — так каждая целая X-колонка получает свои параметры
//     float fx = Location.X;
//     int32 xi = FMath::FloorToInt(fx);
//     float fracX = fx - (float)xi;
//
//     // Чтобы не было "пиксельных" вертикальных швов, интерполируем хеш между колонками
//     float h0 = Hash01(xi,   0, 123.45f);
//     float h1 = Hash01(xi+1, 0, 123.45f);
//     float colRand = FMath::Lerp(h0, h1, fracX); // одно значение в [0..1]
//
//     float h2_0 = Hash01(xi,   1, 987.65f);
//     float h2_1 = Hash01(xi+1, 1, 987.65f);
//     float colRand2 = FMath::Lerp(h2_0, h2_1, fracX); // второе значение для ширины
//
//     // ----- 4) Параметры контролирующие "рваность" -----
//     // maxShift: насколько сильно можно сдвинуть центр перехода влево/вправо (в нормализованном t)
//     // значение 1.0 даст shift в диапазоне примерно [-0.5, +0.5]
//     float maxShift = 0.8f;        // увеличь → сильнее разброс столбцов (попробуй 0.2..1.0)
//     float shift = (colRand - 0.5f) * maxShift;
//
//     // ширина локального перехода (чем меньше — тем резче/быстрее переключение в этой колонке)
//     float minWidth = 0.05f;       // очень резкий переход
//     float maxWidth = 0.6f;        // плавный, растянутый
//     float localWidth = FMath::Lerp(minWidth, maxWidth, colRand2);
//
//     // центр локального перехода (в нормализованных координатах 0..1)
//     float center = 0.5f + shift;
//     // локальные границы перехода [a,b]
//     float a = center - localWidth * 0.5f;
//     float b = center + localWidth * 0.5f;
//
//     // ----- 5) Получаем "колоночный" бленд (0..1) по SmoothStep с локальными границами -----
//     float colBlend = SmoothStep(a, b, tGlobal);
//
//     // ----- 6) Смешаем глобальную тенденцию (tGlobal) и столбцовую случайность -----
//     // randomnessInfluence = 0 => используем только глобальный плавный переход
//     // randomnessInfluence = 1 => полагаемся только на локальные колонки
//     float randomnessInfluence = 0.9f; // регулировать: 0.0..1.0
//     float finalBlend = FMath::Clamp(FMath::Lerp(tGlobal, colBlend, randomnessInfluence), 0.0f, 1.0f);
//
//     // ----- 7) Финальная высота -----
//     float Height = FMath::Lerp(MountainHeight, PlainHeight, finalBlend);
//     return Height;
// }

// float AWorldGeneration::GetHeight(FVector2D Location)
// {
//     // ----- вспомогательные функции -----
//     auto Hash01 = [](int32 xi, int32 yi, float seed = 0.0f) -> float
//     {
//         float n = xi * 127.1f + yi * 311.7f + seed * 13.7f;
//         return FMath::Frac(FMath::Sin(n) * 43758.5453123f); // -> [0,1)
//     };
//
//     auto SmoothStep = [](float edge0, float edge1, float x) -> float
//     {
//         if (edge1 <= edge0) return x >= edge1 ? 1.0f : 0.0f;
//         x = FMath::Clamp((x - edge0) / (edge1 - edge0), 0.0f, 1.0f);
//         return x * x * (3.0f - 2.0f * x); // Smoothstep
//     };
//
//     // ----- 1) Базовые высоты -----
//     float MountainHeight =
//         PerlinNoiseExtended(Location, .00001f, 20000, FVector2D(.1f)) +
//         PerlinNoiseExtended(Location, .0001f, 5000, FVector2D(.2f)) +
//         PerlinNoiseExtended(Location, .001f, 500, FVector2D(.3f)) +
//         PerlinNoiseExtended(Location, .01f, 100, FVector2D(.4f));
//
//     float PlainHeight =
//         PerlinNoiseExtended(Location, 0.01f, 40.0f, FVector2D(0.3f, 0.3f));
//
//     // ----- 2) Зона перехода -----
//     const float TransitionStartCells = 40.0f;
//     const float TransitionEndCells   = 60.0f;
//     const float TransitionStart = TransitionStartCells * CellSize;
//     const float TransitionEnd   = TransitionEndCells   * CellSize;
//     const float TransitionWidth = TransitionEnd - TransitionStart;
//
//     float tGlobal = (Location.X - TransitionStart) / TransitionWidth;
//     tGlobal = FMath::Clamp(tGlobal, 0.0f, 1.0f);
//
//     if (tGlobal <= 0.0f) return MountainHeight;
//     if (tGlobal >= 1.0f) return PlainHeight;
//
//     // ----- 3) Координаты в ячейках -----
//     float fxCells = Location.X / CellSize;
//     float fyCells = Location.Y / CellSize;
//     int32 xi = FMath::FloorToInt(fxCells);
//     int32 yi = FMath::FloorToInt(fyCells);
//     float fracX = fxCells - (float)xi;
//
//     // ----- 4) Случайные параметры -----
//     float h0 = Hash01(xi,   yi, 12345.67f);
//     float h1 = Hash01(xi+1, yi, 12345.67f);
//     float colRand  = FMath::Lerp(h0, h1, fracX);
//
//     float h2_0 = Hash01(xi,   yi, 98765.43f);
//     float h2_1 = Hash01(xi+1, yi, 98765.43f);
//     float colRand2 = FMath::Lerp(h2_0, h2_1, fracX);
//
//     // ----- 5) Ограниченные параметры -----
//     float maxShift = 0.3f;  // раньше было 0.8f → слишком рвало
//     float shift = (colRand - 0.5f) * maxShift;
//
//     float minWidth = 0.25f; // увеличил минимум для мягкости
//     float maxWidth = 0.6f;
//     float localWidth = FMath::Lerp(minWidth, maxWidth, colRand2);
//
//     float center = 0.5f + shift;
//     float a = center - localWidth * 0.5f;
//     float b = center + localWidth * 0.5f;
//
//     // ----- 6) Колоночный бленд -----
//     float colBlend = SmoothStep(a, b, tGlobal);
//
//     // ----- 7) Финальное смешивание с дополнительным сглаживанием -----
//     float randomnessInfluence = 0.6f; // меньше рандома → плавнее
//     float finalBlend = FMath::Lerp(tGlobal, colBlend, randomnessInfluence);
//
//     // Дополнительное сглаживание финала (убирает спайки)
//     finalBlend = SmoothStep(0.0f, 1.0f, finalBlend);
//
//     // ----- 8) Итоговая высота -----
//     return FMath::Lerp(MountainHeight, PlainHeight, finalBlend);
// }

// float AWorldGeneration::GetHeight(FVector2D Location)
// {
//     // ----- вспомогательная функция -----
//     auto SmoothStep = [](float edge0, float edge1, float x) -> float
//     {
//         if (edge1 <= edge0) return x >= edge1 ? 1.0f : 0.0f;
//         x = FMath::Clamp((x - edge0) / (edge1 - edge0), 0.0f, 1.0f);
//         return x * x * (3.0f - 2.0f * x); // Smoothstep
//     };
//
//     // ----- 1) Базовые высоты -----
//     float MountainHeight =
//         PerlinNoiseExtended(Location, .00001f, 20000, FVector2D(.1f)) +
//         PerlinNoiseExtended(Location, .0001f, 5000, FVector2D(.2f)) +
//         PerlinNoiseExtended(Location, .001f, 500, FVector2D(.3f)) +
//         PerlinNoiseExtended(Location, .01f, 100, FVector2D(.4f));
//
//     float PlainHeight =
//         PerlinNoiseExtended(Location, 0.01f, 40.0f, FVector2D(0.3f, 0.3f));
//
//     // ----- 2) Глобальная зона перехода -----
//     const float TransitionStartCells = 40.0f;
//     const float TransitionEndCells   = 60.0f;
//     const float TransitionStart = TransitionStartCells * CellSize;
//     const float TransitionEnd   = TransitionEndCells   * CellSize;
//     const float TransitionWidth = TransitionEnd - TransitionStart;
//
//     float tGlobal = (Location.X - TransitionStart) / TransitionWidth;
//     tGlobal = FMath::Clamp(tGlobal, 0.0f, 1.0f);
//
//     if (tGlobal <= 0.0f) return MountainHeight;
//     if (tGlobal >= 1.0f) return PlainHeight;
//
//     // ----- 3) Локальная случайность через 2D noise -----
//     float noiseShift = PerlinNoiseExtended(Location * 0.001f, 0.0f, 1.0f, FVector2D(12.34f));
//     float noiseWidth = PerlinNoiseExtended(Location * 0.001f, 0.0f, 1.0f, FVector2D(56.78f));
//
//     // shift = сдвиг центра перехода
//     float maxShift = 0.3f;
//     float shift = (noiseShift - 0.5f) * maxShift;
//
//     // width = ширина зоны плавности
//     float minWidth = 0.25f;
//     float maxWidth = 0.6f;
//     float localWidth = FMath::Lerp(minWidth, maxWidth, noiseWidth);
//
//     // ----- 4) Параметры локального бленда -----
//     float center = 0.5f + shift;
//     float a = center - localWidth * 0.5f;
//     float b = center + localWidth * 0.5f;
//
//     float localBlend = SmoothStep(a, b, tGlobal);
//
//     // ----- 5) Дополнительное сглаживание -----
//     float finalBlend = SmoothStep(0.0f, 1.0f, localBlend);
//
//     // ----- 6) Итоговая высота -----
//     return FMath::Lerp(MountainHeight, PlainHeight, finalBlend);
// }

// float AWorldGeneration::GetHeight(FVector2D Location)
// {
//     auto SmoothStep = [](float edge0, float edge1, float x) -> float
//     {
//         if (edge1 <= edge0) return x >= edge1 ? 1.0f : 0.0f;
//         x = FMath::Clamp((x - edge0) / (edge1 - edge0), 0.0f, 1.0f);
//         return x * x * (3.0f - 2.0f * x);
//     };
//
//     // ----- 1) Базовые высоты -----
//     float MountainHeight =
//         PerlinNoiseExtended(Location, .00001f, 20000, FVector2D(.1f)) +
//         PerlinNoiseExtended(Location, .0001f, 5000, FVector2D(.2f)) +
//         PerlinNoiseExtended(Location, .001f, 500, FVector2D(.3f)) +
//         PerlinNoiseExtended(Location, .01f, 100, FVector2D(.4f));
//
//     float PlainHeight =
//         PerlinNoiseExtended(Location, 0.01f, 40.0f, FVector2D(0.3f, 0.3f));
//
//     // ----- 2) Глобальная зона перехода по X -----
//     const float TransitionStartCells = 40.0f;
//     const float TransitionEndCells   = 60.0f;
//     const float TransitionStart = TransitionStartCells * CellSize;
//     const float TransitionEnd   = TransitionEndCells   * CellSize;
//     const float TransitionWidth = TransitionEnd - TransitionStart;
//
//     float tGlobal = (Location.X - TransitionStart) / TransitionWidth;
//     tGlobal = FMath::Clamp(tGlobal, 0.0f, 1.0f);
//
//     if (tGlobal <= 0.0f) return MountainHeight;
//     if (tGlobal >= 1.0f) return PlainHeight;
//
//     // ----- 3) Случайные искажения через 2D шум -----
//     float noiseShift  = PerlinNoiseExtended(Location * 0.001f, 0.0f, 1.0f, FVector2D(11.11f));
//     float noiseWidth  = PerlinNoiseExtended(Location * 0.001f, 0.0f, 1.0f, FVector2D(22.22f));
//     float noiseSpeed  = PerlinNoiseExtended(Location * 0.001f, 0.0f, 1.0f, FVector2D(33.33f));
//
//     // сдвигаем центр перехода (где-то горы уходят дальше, где-то ближе)
//     float shift = (noiseShift - 0.5f) * 0.4f;
//
//     // делаем локальную ширину перехода разной
//     float localWidth = FMath::Lerp(0.25f, 0.7f, noiseWidth);
//
//     // регулируем скорость (резкость) перехода
//     float speed = FMath::Lerp(0.8f, 2.0f, noiseSpeed);
//
//     // ----- 4) Финальное вычисление бленда -----
//     float center = 0.5f + shift;
//     float a = center - localWidth * 0.5f;
//     float b = center + localWidth * 0.5f;
//
//     float blend = SmoothStep(a, b, tGlobal);
//
//     // Доп. управление "скоростью" (экспонента)
//     blend = FMath::Pow(blend, speed);
//
//     // ----- 5) Итог -----
//     return FMath::Lerp(MountainHeight, PlainHeight, blend);
// }

// float AWorldGeneration::GetHeight(FVector2D Location) 
// {
// 	auto Hash01 = [](int32 xi, int32 yi, float seed = 0.0f) -> float
// 	{
// 		float n = xi * 127.1f + yi * 311.7f + seed * 13.7f;
// 		return FMath::Frac(FMath::Sin(n) * 43758.5453123f); // [0,1)
// 	};
//
// 	auto SmoothStep = [](float edge0, float edge1, float x) -> float
// 	{
// 		if (edge1 <= edge0) return x >= edge1 ? 1.0f : 0.0f;
// 		x = FMath::Clamp((x - edge0) / (edge1 - edge0), 0.0f, 1.0f);
// 		return x * x * (3.0f - 2.0f * x);
// 	};
//
// 	// ----- 1) Базовые высоты -----
// 	float MountainHeight =
// 		PerlinNoiseExtended(Location, .00001f, 20000, FVector2D(.1f)) +
// 		PerlinNoiseExtended(Location, .0001f, 5000, FVector2D(.2f)) +
// 		PerlinNoiseExtended(Location, .001f, 500, FVector2D(.3f)) +
// 		PerlinNoiseExtended(Location, .01f, 100, FVector2D(.4f));
//
// 	float PlainHeight =
// 		PerlinNoiseExtended(Location, 0.01f, 40.0f, FVector2D(0.3f, 0.3f));
//
// 	// ----- 2) Определяем линию Y -----
// 	int32 yi = FMath::FloorToInt(Location.Y / CellSize);
//
// 	// ----- 3) Генерация уникальных параметров для этой линии -----
// 	float randStart = FMath::Lerp(30.0f * CellSize, 45.0f * CellSize, Hash01(0, yi, 1234.0f));
// 	float randEnd   = FMath::Lerp(55.0f * CellSize, 70.0f * CellSize, Hash01(0, yi, 5678.0f));
// 	float randSpeed = FMath::Lerp(0.8f, 2.0f, Hash01(0, yi, 91011.0f));
//
// 	float TransitionStart = randStart;
// 	float TransitionEnd   = randEnd;
// 	float TransitionWidth = TransitionEnd - TransitionStart;
//
// 	// ----- 4) Локальный бленд по X -----
// 	float t = (Location.X - TransitionStart) / TransitionWidth;
// 	t = FMath::Clamp(t, 0.0f, 1.0f);
//
// 	if (t <= 0.0f) return MountainHeight;
// 	if (t >= 1.0f) return PlainHeight;
//
// 	float blend = SmoothStep(0.0f, 1.0f, t);
//
// 	// управляем резкостью
// 	blend = FMath::Pow(blend, randSpeed);
//
// 	// ----- 5) Итог -----
// 	return FMath::Lerp(MountainHeight, PlainHeight, blend);
// }


// float AWorldGeneration::GetHeight(FVector2D Location)
// {
//     auto SmoothStep = [](float edge0, float edge1, float x) -> float
//     {
//         if (edge1 <= edge0) return x >= edge1 ? 1.0f : 0.0f;
//         x = FMath::Clamp((x - edge0) / (edge1 - edge0), 0.0f, 1.0f);
//         return x * x * (3.0f - 2.0f * x);
//     };
//
//     // ----- 1) Базовые высоты -----
//     float MountainHeight =
//         PerlinNoiseExtended(Location, .00001f, 20000, FVector2D(.1f)) +
//         PerlinNoiseExtended(Location, .0001f, 5000, FVector2D(.2f)) +
//         PerlinNoiseExtended(Location, .001f, 500, FVector2D(.3f)) +
//         PerlinNoiseExtended(Location, .01f, 100, FVector2D(.4f));
//
//     float PlainHeight =
//         PerlinNoiseExtended(Location, 0.01f, 40.0f, FVector2D(0.3f, 0.3f));
//
//     // ----- 2) Плавные случайные параметры вдоль Y -----
//     // масштаб шума вдоль Y (чем меньше, тем медленнее меняется)
//     float yNoiseScale = 0.002f;
//
//     // берём PerlinNoiseExtended только по Y, но можно и по (X,Y) если нужен хаос
//     float noiseStart = PerlinNoiseExtended(FVector2D(0, Location.Y * yNoiseScale), 0, 1, FVector2D(1111.0f));
//     float noiseEnd   = PerlinNoiseExtended(FVector2D(0, Location.Y * yNoiseScale), 0, 1, FVector2D(2222.0f));
//     float noiseSpeed = PerlinNoiseExtended(FVector2D(0, Location.Y * yNoiseScale), 0, 1, FVector2D(3333.0f));
//
//     float randStart = FMath::Lerp(30.0f * CellSize, 45.0f * CellSize, noiseStart);
//     float randEnd   = FMath::Lerp(55.0f * CellSize, 70.0f * CellSize, noiseEnd);
//     float randSpeed = FMath::Lerp(0.8f, 2.0f, noiseSpeed);
//
//     float TransitionStart = randStart;
//     float TransitionEnd   = randEnd;
//     float TransitionWidth = TransitionEnd - TransitionStart;
//
//     // ----- 3) Локальный бленд по X -----
//     float t = (Location.X - TransitionStart) / TransitionWidth;
//     t = FMath::Clamp(t, 0.0f, 1.0f);
//
//     if (t <= 0.0f) return MountainHeight;
//     if (t >= 1.0f) return PlainHeight;
//
//     float blend = SmoothStep(0.0f, 1.0f, t);
//
//     // управляем резкостью перехода
//     blend = FMath::Pow(blend, randSpeed);
//
//     // ----- 4) Итог -----
//     return FMath::Lerp(MountainHeight, PlainHeight, blend);
// }


float AWorldGeneration::GetHeight(FVector2D Location) // TODO: THE BEST SO FAR
{
    auto SmoothStep = [](float edge0, float edge1, float x) -> float
    {
        if (edge1 <= edge0) return x >= edge1 ? 1.0f : 0.0f;
        x = FMath::Clamp((x - edge0) / (edge1 - edge0), 0.0f, 1.0f);
        return x * x * (3.0f - 2.0f * x);
    };

    // ----- 1) Базовые высоты -----
    float MountainHeight =
        PerlinNoiseExtended(Location, .00001f, 20000, FVector2D(.1f)) +
        PerlinNoiseExtended(Location, .0001f, 5000, FVector2D(.2f)) +
        PerlinNoiseExtended(Location, .001f, 500, FVector2D(.3f)) +
        PerlinNoiseExtended(Location, .01f, 100, FVector2D(.4f));

    float PlainHeight =
        PerlinNoiseExtended(Location, 0.01f, 40.0f, FVector2D(0.3f, 0.3f));

    // ----- 2) Определяем линию Y -----
    float yi = Location.Y / CellSize;  // не целое, чтобы шум был плавный

    // ----- 3) Параметры перехода через шум -----
    // все noise функции вернут [0,1], плавно изменяющиеся вдоль Y
    float noiseY1 = PerlinNoiseExtended(FVector2D(0.0f, yi * 0.05f), 1.0f, 1.0f, FVector2D(0.1f));
    float noiseY2 = PerlinNoiseExtended(FVector2D(100.0f, yi * 0.05f), 1.0f, 1.0f, FVector2D(0.2f));
    float noiseY3 = PerlinNoiseExtended(FVector2D(200.0f, yi * 0.05f), 1.0f, 1.0f, FVector2D(0.3f));

    float TransitionStart = FMath::Lerp(30.0f * CellSize, 45.0f * CellSize, noiseY1);
    float TransitionEnd   = FMath::Lerp(55.0f * CellSize, 70.0f * CellSize, noiseY2);
    float randSpeed       = FMath::Lerp(0.8f, 2.0f, noiseY3);

    float TransitionWidth = TransitionEnd - TransitionStart;

    // ----- 4) Локальный бленд по X -----
    float t = (Location.X - TransitionStart) / TransitionWidth;
    t = FMath::Clamp(t, 0.0f, 1.0f);

    if (t <= 0.0f) return MountainHeight;
    if (t >= 1.0f) return PlainHeight;

    float blend = SmoothStep(0.0f, 1.0f, t);

    // управляем резкостью
    blend = FMath::Pow(blend, randSpeed);

    // ----- 5) Итог -----
    return FMath::Lerp(MountainHeight, PlainHeight, blend);
}










// Called when the game starts or when spawned
void AWorldGeneration::BeginPlay()
{
	Super::BeginPlay();
	GenerateTerrain();
}