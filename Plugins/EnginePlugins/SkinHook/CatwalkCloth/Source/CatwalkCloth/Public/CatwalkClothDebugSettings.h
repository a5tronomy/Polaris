#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Object.h"
#include "CatwalkClothDebugSettings.generated.h"

UCLASS(Config=CatwalkClothDebug)
class CATWALKCLOTH_API UCatwalkClothDebugSettings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere)
    float VertexDebugDrawPointSize;
    
    UPROPERTY(Config, EditAnywhere)
    uint32 VertexDebugDrawChannels;
    
    UPROPERTY(Config, EditAnywhere)
    FLinearColor SimulationMeshColor;
    
    UPROPERTY(Config, EditAnywhere)
    float DebugDrawFrontBias;
    
    UCatwalkClothDebugSettings();

};

