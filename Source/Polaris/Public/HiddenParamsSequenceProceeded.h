#pragma once
#include "CoreMinimal.h"
#include "HiddenCommonParams.h"
#include "HiddenParamsSequenceProceeded.generated.h"

USTRUCT(BlueprintType)
struct FHiddenParamsSequenceProceeded : public FHiddenCommonParams {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    int32 RelatedStageSequenceId;
    
    POLARIS_API FHiddenParamsSequenceProceeded();
};

