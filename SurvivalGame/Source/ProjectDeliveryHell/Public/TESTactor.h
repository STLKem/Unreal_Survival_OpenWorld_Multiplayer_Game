// // TESTActor.h
// #pragma once
//
// #include "CoreMinimal.h"
// #include "GameFramework/Actor.h"
// #include "ProceduralMeshComponent.h"
// #include "TESTActor.generated.h"
//
// UCLASS()
// class YOURPROJECT_API ATESTActor : public AActor
// {
//     GENERATED_BODY()
//
// public:
//     ATESTActor();
//
// protected:
//     virtual void OnConstruction(const FTransform& Transform) override;
//
// private:
//     UPROPERTY(VisibleAnywhere)
//     UProceduralMeshComponent* Mesh;
//
//     // Параметры сетки
//     UPROPERTY(EditAnywhere, Category="Terrain")
//     int32 GridX = 512;
//
//     UPROPERTY(EditAnywhere, Category="Terrain")
//     int32 GridY = 512;
//
//     UPROPERTY(EditAnywhere, Category="Terrain")
//     float GridSpacing = 200.0f;
//
//     // Высоты
//     UPROPERTY(EditAnywhere, Category="Terrain")
//     float MinHeight = -5000.0f;
//
//     UPROPERTY(EditAnywhere, Category="Terrain")
//     float MaxHeight = 8000.0f;
//
//     // Noise settings
//     UPROPERTY(EditAnywhere, Category="Noise")
//     int32 Octaves = 6;
//
//     UPROPERTY(EditAnywhere, Category="Noise")
//     float Frequency = 0.005f;
//
//     UPROPERTY(EditAnywhere, Category="Noise")
//     float Lacunarity = 2.0f;
//
//     UPROPERTY(EditAnywhere, Category="Noise")
//     float Gain = 0.5f;
//
//     UPROPERTY(EditAnywhere, Category="Noise")
//     int32 Seed = 1337;
//
//     UPROPERTY(EditAnywhere, Category="Noise")
//     float EdgeFalloff = 0.2f;
//
//     // Noise helpers
//     TArray<int32> Permutation;
//
//     void GenerateTerrain();
//     float PerlinNoise2D(float x, float y) const;
//     float RidgedMultifractal(float x, float y) const;
//     float Fade(float t) const;
//     float Lerp(float a, float b, float t) const;
//     float GradDot(int hash, float x, float y) const;
// };
