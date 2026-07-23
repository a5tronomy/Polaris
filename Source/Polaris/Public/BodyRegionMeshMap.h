#pragma once
#include "CoreMinimal.h"
#include "BodyRegionMeshMap.generated.h"

class UMeshComponent;

USTRUCT(BlueprintType)
struct POLARIS_API FBodyRegionMeshMap {
    GENERATED_BODY()
public:
    UPROPERTY(Instanced)
    TArray<UMeshComponent*> MeshComponent;
    
    FBodyRegionMeshMap();
};

