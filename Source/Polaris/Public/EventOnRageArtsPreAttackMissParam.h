#pragma once
#include "CoreMinimal.h"
#include "EventOnRageArtsPreAttackMissParam.generated.h"

USTRUCT(BlueprintType)
struct FEventOnRageArtsPreAttackMissParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 player_id;
    
    POLARIS_API FEventOnRageArtsPreAttackMissParam();
};

