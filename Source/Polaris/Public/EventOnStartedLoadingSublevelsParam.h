#pragma once
#include "CoreMinimal.h"
#include "EventOnStartedLoadingSublevelsParam.generated.h"

USTRUCT(BlueprintType)
struct FEventOnStartedLoadingSublevelsParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 light_type;
    
    POLARIS_API FEventOnStartedLoadingSublevelsParam();
};

