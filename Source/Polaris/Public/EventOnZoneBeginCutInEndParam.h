#pragma once
#include "CoreMinimal.h"
#include "EventOnZoneBeginCutInEndParam.generated.h"

USTRUCT(BlueprintType)
struct FEventOnZoneBeginCutInEndParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 player_id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool isRage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool isResume;
    
    POLARIS_API FEventOnZoneBeginCutInEndParam();
};

