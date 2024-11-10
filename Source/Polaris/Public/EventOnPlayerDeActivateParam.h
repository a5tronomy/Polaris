#pragma once
#include "CoreMinimal.h"
#include "EventOnPlayerDeActivateParam.generated.h"

USTRUCT(BlueprintType)
struct FEventOnPlayerDeActivateParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 player_id;
    
    POLARIS_API FEventOnPlayerDeActivateParam();
};

