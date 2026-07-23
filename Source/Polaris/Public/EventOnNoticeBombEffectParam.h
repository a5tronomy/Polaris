#pragma once
#include "CoreMinimal.h"
#include "EventOnNoticeBombEffectParam.generated.h"

USTRUCT(BlueprintType)
struct FEventOnNoticeBombEffectParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 player_id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool enable_glow_head;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool is_rage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool isZone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float start_time;
    
    POLARIS_API FEventOnNoticeBombEffectParam();
};

