#pragma once
#include "CoreMinimal.h"
#include "EventOnPreKOSlowParam.generated.h"

USTRUCT(BlueprintType)
struct FEventOnPreKOSlowParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bBegin;
    
    POLARIS_API FEventOnPreKOSlowParam();
};

