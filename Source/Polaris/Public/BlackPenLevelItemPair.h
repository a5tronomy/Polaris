#pragma once
#include "CoreMinimal.h"
#include "BlackPenItem.h"
#include "BlackPenLevelItemPair.generated.h"

USTRUCT(BlueprintType)
struct POLARIS_API FBlackPenLevelItemPair {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 Level;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FBlackPenItem item_premium;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FBlackPenItem item_free;
    
    FBlackPenLevelItemPair();
};

