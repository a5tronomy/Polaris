#pragma once
#include "CoreMinimal.h"
#include "CatwalkClothLODGenerationMeshSectionSettings.h"
#include "CatwalkClothLODGenerationLODSettings.generated.h"

USTRUCT()
struct FCatwalkClothLODGenerationLODSettings {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, EditFixedSize)
    TArray<FCatwalkClothLODGenerationMeshSectionSettings> LODSetting;
    
    CATWALKCLOTH_API FCatwalkClothLODGenerationLODSettings();
};

