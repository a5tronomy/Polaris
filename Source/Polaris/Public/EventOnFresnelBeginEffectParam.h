#pragma once
#include "CoreMinimal.h"
#include "EventOnFresnelBeginEffectParam.generated.h"

USTRUCT(BlueprintType)
struct FEventOnFresnelBeginEffectParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 player_id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 fresnel_id;
    
    POLARIS_API FEventOnFresnelBeginEffectParam();
};

