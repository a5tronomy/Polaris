#pragma once
#include "CoreMinimal.h"
#include "CatwalkClothLODParameterPlaceholder.h"
#include "CatwalkClothSimulationMeshPlaceholder.generated.h"

USTRUCT()
struct FCatwalkClothSimulationMeshPlaceholder {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    FName Name;
    
    UPROPERTY(EditAnywhere, EditFixedSize)
    TArray<FCatwalkClothLODParameterPlaceholder> LODParameters;
    
    UPROPERTY(EditAnywhere, Transient)
    TSet<FString> Tags;
    
    CATWALKCLOTH_API FCatwalkClothSimulationMeshPlaceholder();
};

