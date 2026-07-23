#pragma once
#include "CoreMinimal.h"
#include "EventOnShowItemOutlineParam.generated.h"

USTRUCT(BlueprintType)
struct FEventOnShowItemOutlineParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 player_id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 item_pos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 acc_num;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool Enable;
    
    POLARIS_API FEventOnShowItemOutlineParam();
};

