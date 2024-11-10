#pragma once
#include "CoreMinimal.h"
#include "HiddenCommonParams.h"
#include "HiddenParamsDrama.generated.h"

USTRUCT(BlueprintType)
struct FHiddenParamsDrama : public FHiddenCommonParams {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName DramaTag;
    
    POLARIS_API FHiddenParamsDrama();
};

