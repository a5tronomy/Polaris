#pragma once
#include "CoreMinimal.h"
#include "JukeBoxSeriesTab.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FJukeBoxSeriesTab {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    int32 Index;
    
    UPROPERTY(BlueprintReadOnly)
    UTexture2D* thumbnail;
    
    UPROPERTY(BlueprintReadOnly)
    FString textId;
    
    UPROPERTY(BlueprintReadOnly)
    bool NewMark;
    
    POLARIS_API FJukeBoxSeriesTab();
};

