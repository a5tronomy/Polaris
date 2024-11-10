#pragma once
#include "CoreMinimal.h"
#include "EventOnChangeCharacterColorEndParam.generated.h"

USTRUCT(BlueprintType)
struct FEventOnChangeCharacterColorEndParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 player_id;
    
    POLARIS_API FEventOnChangeCharacterColorEndParam();
};

