#pragma once
#include "CoreMinimal.h"
#include "EStageLightType.h"
#include "EventOnChangeStageLightParam.generated.h"

USTRUCT(BlueprintType)
struct FEventOnChangeStageLightParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EStageLightType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool Immediate;
    
    POLARIS_API FEventOnChangeStageLightParam();
};

