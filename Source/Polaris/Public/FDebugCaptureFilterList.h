#pragma once
#include "CoreMinimal.h"
#include "DebugCaptureFilter.h"
#include "FDebugCaptureFilterList.generated.h"

USTRUCT(BlueprintType)
struct FFDebugCaptureFilterList {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<FDebugCaptureFilter> Filters;
    
    POLARIS_API FFDebugCaptureFilterList();
};

