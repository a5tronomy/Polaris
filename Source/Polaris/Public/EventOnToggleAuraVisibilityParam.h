#pragma once
#include "CoreMinimal.h"
#include "EventOnToggleAuraVisibilityParam.generated.h"

USTRUCT(BlueprintType)
struct FEventOnToggleAuraVisibilityParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 player_id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool IsVisible;
    
    POLARIS_API FEventOnToggleAuraVisibilityParam();
};

