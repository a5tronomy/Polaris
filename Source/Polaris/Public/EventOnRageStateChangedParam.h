#pragma once
#include "CoreMinimal.h"
#include "EventOnRageStateChangedParam.generated.h"

USTRUCT(BlueprintType)
struct FEventOnRageStateChangedParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 player_id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool isRage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool isZone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool isResume;
    
    POLARIS_API FEventOnRageStateChangedParam();
};

