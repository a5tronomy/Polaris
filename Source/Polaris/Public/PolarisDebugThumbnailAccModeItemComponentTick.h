#pragma once
#include "CoreMinimal.h"
#include "PolarisDebugThumbnailAccModeItemComponentTick.generated.h"

class UActorComponent;

USTRUCT()
struct FPolarisDebugThumbnailAccModeItemComponentTick {
    GENERATED_BODY()
public:
    UPROPERTY(Instanced)
    UActorComponent* Component;
    
    POLARIS_API FPolarisDebugThumbnailAccModeItemComponentTick();
};

