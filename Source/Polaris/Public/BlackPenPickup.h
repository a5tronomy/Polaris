#pragma once
#include "CoreMinimal.h"
#include "BlackPenPickup.generated.h"

USTRUCT(BlueprintType)
struct POLARIS_API FBlackPenPickup {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 Level;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool pickup_flag;
    
    FBlackPenPickup();
};

