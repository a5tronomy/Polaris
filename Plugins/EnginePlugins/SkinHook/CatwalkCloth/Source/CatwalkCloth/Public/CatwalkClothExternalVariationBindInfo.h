#pragma once
#include "CoreMinimal.h"
#include "CatwalkClothExternalVariationBindInfo.generated.h"

USTRUCT()
struct FCatwalkClothExternalVariationBindInfo {
    GENERATED_BODY()
public:
    UPROPERTY()
    bool bValidSimulationMeshAssigned;
    
    CATWALKCLOTH_API FCatwalkClothExternalVariationBindInfo();
};

