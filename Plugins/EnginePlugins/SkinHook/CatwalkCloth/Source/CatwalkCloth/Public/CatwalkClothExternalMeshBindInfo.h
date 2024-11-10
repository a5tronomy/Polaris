#pragma once
#include "CoreMinimal.h"
#include "CatwalkClothExternalVariationBindInfo.h"
#include "CatwalkClothExternalMeshBindInfo.generated.h"

USTRUCT()
struct FCatwalkClothExternalMeshBindInfo {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString SimulationMeshName;
    
    UPROPERTY()
    TMap<FName, FCatwalkClothExternalVariationBindInfo> ExternalVariationInfos;
    
    UPROPERTY()
    FCatwalkClothExternalVariationBindInfo MigratedVariationInfo;
    
    CATWALKCLOTH_API FCatwalkClothExternalMeshBindInfo();
};

