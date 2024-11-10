#pragma once
#include "CoreMinimal.h"
#include "EGeneralBattleEvent.h"
#include "EventOnGeneralBattleEventParam.generated.h"

USTRUCT(BlueprintType)
struct FEventOnGeneralBattleEventParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EGeneralBattleEvent event_type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 param32;
    
    POLARIS_API FEventOnGeneralBattleEventParam();
};

