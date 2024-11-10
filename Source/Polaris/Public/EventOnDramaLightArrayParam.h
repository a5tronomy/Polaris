#pragma once
#include "CoreMinimal.h"
#include "EventOnDramaLightParam.h"
#include "EventOnDramaLightArrayParam.generated.h"

USTRUCT(BlueprintType)
struct FEventOnDramaLightArrayParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FEventOnDramaLightParam> drama_light_param;
    
    POLARIS_API FEventOnDramaLightArrayParam();
};

