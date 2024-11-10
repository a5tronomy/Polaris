#pragma once
#include "CoreMinimal.h"
#include "CatwalkClothLODGenerationMeshSectionSettings.generated.h"

USTRUCT()
struct FCatwalkClothLODGenerationMeshSectionSettings {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, EditFixedSize)
    TArray<float> SectionEffectRadius;
    
    CATWALKCLOTH_API FCatwalkClothLODGenerationMeshSectionSettings();
};

