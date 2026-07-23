#pragma once
#include "CoreMinimal.h"
#include "EventOnZoneEndParam.generated.h"

USTRUCT(BlueprintType)
struct FEventOnZoneEndParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 player_id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool is_doing_zone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool is_rage;
    
    POLARIS_API FEventOnZoneEndParam();
};

