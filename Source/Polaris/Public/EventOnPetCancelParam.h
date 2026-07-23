#pragma once
#include "CoreMinimal.h"
#include "EventOnPetCancelParam.generated.h"

USTRUCT(BlueprintType)
struct FEventOnPetCancelParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 player_id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 no;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool IsDestory;
    
    POLARIS_API FEventOnPetCancelParam();
};

