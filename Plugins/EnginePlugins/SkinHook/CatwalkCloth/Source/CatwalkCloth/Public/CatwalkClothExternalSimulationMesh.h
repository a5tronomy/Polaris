#pragma once
#include "CoreMinimal.h"
#include "CatwalkClothExternalSimulationMesh.generated.h"

class USkeletalMesh;

USTRUCT(BlueprintType)
struct FCatwalkClothExternalSimulationMesh {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    FString SimulationMeshName;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<USkeletalMesh> SkeletalMesh;
    
    CATWALKCLOTH_API FCatwalkClothExternalSimulationMesh();
};

