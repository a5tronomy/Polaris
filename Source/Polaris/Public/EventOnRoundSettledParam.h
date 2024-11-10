#pragma once
#include "CoreMinimal.h"
#include "EventOnRoundSettledParam.generated.h"

USTRUCT(BlueprintType)
struct FEventOnRoundSettledParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 RoundResultFlag;
    
    POLARIS_API FEventOnRoundSettledParam();
};

