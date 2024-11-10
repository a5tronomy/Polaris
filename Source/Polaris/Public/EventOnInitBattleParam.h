#pragma once
#include "CoreMinimal.h"
#include "EInitBattleMode.h"
#include "EventOnInitBattleParam.generated.h"

USTRUCT(BlueprintType)
struct FEventOnInitBattleParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EInitBattleMode Mode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 param32;
    
    POLARIS_API FEventOnInitBattleParam();
};

