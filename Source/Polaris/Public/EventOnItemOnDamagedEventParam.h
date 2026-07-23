#pragma once
#include "CoreMinimal.h"
#include "EventOnItemOnDamagedEventParam.generated.h"

USTRUCT(BlueprintType)
struct FEventOnItemOnDamagedEventParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 player_id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool is_initbattle;
    
    POLARIS_API FEventOnItemOnDamagedEventParam();
};

