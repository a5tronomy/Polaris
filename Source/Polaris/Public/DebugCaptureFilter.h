#pragma once
#include "CoreMinimal.h"
#include "EDebugCaptureCategory.h"
#include "EDebugCaptureItemFilterExecution.h"
#include "DebugCaptureFilter.generated.h"

class UItemPrefab;

USTRUCT()
struct FDebugCaptureFilter {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint8 Timing;
    
    UPROPERTY(EditAnywhere)
    EDebugCaptureCategory SourceCategory;
    
    UPROPERTY(EditAnywhere)
    EDebugCaptureItemFilterExecution Execution;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UItemPrefab> ReplaceItem;
    
    POLARIS_API FDebugCaptureFilter();
};

