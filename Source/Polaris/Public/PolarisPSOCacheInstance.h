#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "PolarisPSOCacheInstance.generated.h"

UCLASS(BlueprintType)
class POLARIS_API UPolarisPSOCacheInstance : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UPolarisPSOCacheInstance();

    UFUNCTION(BlueprintPure)
    int32 GetNumPrecompilesRemaining();
    
};

