#pragma once
#include "CoreMinimal.h"
#include "EventOnFresnelEndEffectParam.generated.h"

USTRUCT(BlueprintType)
struct FEventOnFresnelEndEffectParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 player_id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool is_on_damage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool is_rage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool isZone;
    
    POLARIS_API FEventOnFresnelEndEffectParam();
};

