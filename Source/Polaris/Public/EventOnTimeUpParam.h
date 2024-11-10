#pragma once
#include "CoreMinimal.h"
#include "EventOnTimeUpParam.generated.h"

USTRUCT(BlueprintType)
struct FEventOnTimeUpParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 WinningPlayerId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bMatchDraw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bGameDecided;
    
    POLARIS_API FEventOnTimeUpParam();
};

