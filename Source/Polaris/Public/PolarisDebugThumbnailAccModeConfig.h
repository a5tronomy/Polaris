#pragma once
#include "CoreMinimal.h"
#include "PolarisDebugThumbnailAccModeItemComponentTick.h"
#include "PolarisDebugThumbnailAccModeMeshConfig.h"
#include "PolarisDebugThumbnailAccModeConfig.generated.h"

class APolarisItemBaseActor;

USTRUCT(BlueprintType)
struct FPolarisDebugThumbnailAccModeConfig {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FPolarisDebugThumbnailAccModeMeshConfig> MeshConfigList;
    
    UPROPERTY()
    APolarisItemBaseActor* ItemActor;
    
    UPROPERTY()
    TArray<FPolarisDebugThumbnailAccModeItemComponentTick> ComponentTickList;
    
    POLARIS_API FPolarisDebugThumbnailAccModeConfig();
};

