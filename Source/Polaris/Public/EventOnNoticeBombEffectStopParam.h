#pragma once
#include "CoreMinimal.h"
#include "EventOnNoticeBombEffectStopParam.generated.h"

USTRUCT(BlueprintType)
struct FEventOnNoticeBombEffectStopParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 player_id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool is_rage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool isZone;
    
    POLARIS_API FEventOnNoticeBombEffectStopParam();
};

