#pragma once
#include "CoreMinimal.h"
#include "SpawnConfig.generated.h"

USTRUCT(BlueprintType)
struct POLARIS_API FSpawnConfig {
    GENERATED_BODY()
public:
    UPROPERTY()
    bool for_battle_;
    
    FSpawnConfig();
};

