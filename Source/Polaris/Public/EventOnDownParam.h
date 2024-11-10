#pragma once
#include "CoreMinimal.h"
#include "EventOnDownParam.generated.h"

USTRUCT(BlueprintType)
struct FEventOnDownParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 player_id;
    
    POLARIS_API FEventOnDownParam();
};

