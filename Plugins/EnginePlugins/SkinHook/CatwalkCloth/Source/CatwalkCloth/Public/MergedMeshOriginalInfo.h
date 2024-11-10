#pragma once
#include "CoreMinimal.h"
#include "MergedMeshOriginalInfo.generated.h"

USTRUCT()
struct FMergedMeshOriginalInfo {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<int32> SimulationChunkIndicesOnMergedMesh;
    
    CATWALKCLOTH_API FMergedMeshOriginalInfo();
};

