// // TESTActor.cpp
// #include "TESTActor.h"
// #include "Kismet/KismetMathLibrary.h"
// #include "Materials/Material.h"
// #include "UObject/ConstructorHelpers.h"
//
// ATESTActor::ATESTActor()
// {
//     PrimaryActorTick.bCanEverTick = false;
//
//     Mesh = CreateDefaultSubobject<UProceduralMeshComponent>(TEXT("GeneratedMesh"));
//     RootComponent = Mesh;
//     Mesh->bUseAsyncCooking = true;
//
//     // init permutation table
//     Permutation.SetNum(512);
//     for (int32 i = 0; i < 256; ++i)
//     {
//         Permutation[i] = i;
//     }
//     FRandomStream Rand(Seed);
//     for (int32 i = 255; i > 0; --i)
//     {
//         int32 j = Rand.RandRange(0, i);
//         Permutation.Swap(i, j);
//     }
//     for (int32 i = 0; i < 256; ++i)
//     {
//         Permutation[256 + i] = Permutation[i];
//     }
//
//     // Применяем стандартный материал движка
//     static ConstructorHelpers::FObjectFinder<UMaterial> MatFinder(TEXT("Material'/Engine/BasicShapes/BasicShapeMaterial.BasicShapeMaterial'"));
//     if (MatFinder.Succeeded())
//     {
//         Mesh->SetMaterial(0, MatFinder.Object);
//     }
// }
//
// void ATESTActor::OnConstruction(const FTransform& Transform)
// {
//     GenerateTerrain();
// }
//
// void ATESTActor::GenerateTerrain()
// {
//     TArray<FVector> Vertices;
//     TArray<int32> Triangles;
//     TArray<FVector> Normals;
//     TArray<FVector2D> UVs;
//     TArray<FProcMeshTangent> Tangents;
//
//     Vertices.SetNum(GridX * GridY);
//
//     for (int32 y = 0; y < GridY; ++y)
//     {
//         for (int32 x = 0; x < GridX; ++x)
//         {
//             float WorldX = x * GridSpacing;
//             float WorldY = y * GridSpacing;
//
//             float NoiseValue = RidgedMultifractal(WorldX * Frequency, WorldY * Frequency);
//
//             float Normalized = (NoiseValue + 1.0f) * 0.5f;
//             Normalized = FMath::SmoothStep(0.0f, 1.0f, Normalized);
//             Normalized = FMath::Pow(Normalized, 1.08f);
//
//             float Height = FMath::Lerp(MinHeight, MaxHeight, Normalized);
//
//             // Falloff к краям
//             float DistX = (float)x / (float)GridX;
//             float DistY = (float)y / (float)GridY;
//             float EdgeFactor = FMath::Min(DistX, FMath::Min(1.0f - DistX, FMath::Min(DistY, 1.0f - DistY)));
//             EdgeFactor = FMath::Clamp(EdgeFactor / EdgeFalloff, 0.0f, 1.0f);
//
//             Height *= EdgeFactor;
//
//             Vertices[y * GridX + x] = FVector(WorldX, WorldY, Height);
//             UVs.Add(FVector2D((float)x / GridX, (float)y / GridY));
//         }
//     }
//
//     for (int32 y = 0; y < GridY - 1; ++y)
//     {
//         for (int32 x = 0; x < GridX - 1; ++x)
//         {
//             int32 i0 = y * GridX + x;
//             int32 i1 = i0 + 1;
//             int32 i2 = i0 + GridX;
//             int32 i3 = i2 + 1;
//
//             Triangles.Add(i0);
//             Triangles.Add(i2);
//             Triangles.Add(i3);
//
//             Triangles.Add(i0);
//             Triangles.Add(i3);
//             Triangles.Add(i1);
//         }
//     }
//
//     Mesh->CreateMeshSection_LinearColor(0, Vertices, Triangles, Normals, UVs, {}, Tangents, true);
//     Mesh->ContainsPhysicsTriMeshData(true);
// }
//
// float ATESTActor::Fade(float t) const
// {
//     return t * t * t * (t * (t * 6 - 15) + 10);
// }
//
// float ATESTActor::Lerp(float a, float b, float t) const
// {
//     return a + t * (b - a);
// }
//
// float ATESTActor::GradDot(int hash, float x, float y) const
// {
//     int h = hash & 7;
//     float u = h < 4 ? x : y;
//     float v = h < 4 ? y : x;
//     return ((h & 1) ? -u : u) + ((h & 2) ? -2.0f * v : 2.0f * v);
// }
//
// float ATESTActor::PerlinNoise2D(float x, float y) const
// {
//     int X = FMath::FloorToInt(x) & 255;
//     int Y = FMath::FloorToInt(y) & 255;
//
//     float xf = x - FMath::FloorToFloat(x);
//     float yf = y - FMath::FloorToFloat(y);
//
//     float u = Fade(xf);
//     float v = Fade(yf);
//
//     int aa = Permutation[X + Permutation[Y]];
//     int ab = Permutation[X + Permutation[Y + 1]];
//     int ba = Permutation[X + 1 + Permutation[Y]];
//     int bb = Permutation[X + 1 + Permutation[Y + 1]];
//
//     float x1 = Lerp(GradDot(aa, xf, yf), GradDot(ba, xf - 1.0f, yf), u);
//     float x2 = Lerp(GradDot(ab, xf, yf - 1.0f), GradDot(bb, xf - 1.0f, yf - 1.0f), u);
//
//     return Lerp(x1, x2, v);
// }
//
// float ATESTActor::RidgedMultifractal(float x, float y) const
// {
//     float sum = 0.0f;
//     float freq = 1.0f;
//     float amp = 0.5f;
//     float prev = 1.0f;
//
//     for (int i = 0; i < Octaves; i++)
//     {
//         float n = PerlinNoise2D(x * freq, y * freq);
//         n = 1.0f - FMath::Abs(n);
//         n *= n;
//         sum += n * amp * prev;
//
//         prev = n;
//         freq *= Lacunarity;
//         amp *= Gain;
//     }
//
//     return sum * 2.0f - 1.0f;
// }
