#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EPostEffectType.h"
#include "EventOnRequestPostEffectParam.generated.h"

USTRUCT(BlueprintType)
struct FEventOnRequestPostEffectParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 player_id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EPostEffectType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 frame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector position;
    
    POLARIS_API FEventOnRequestPostEffectParam();
};

