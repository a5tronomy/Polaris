#pragma once
#include "CoreMinimal.h"
#include "PolarisUMGPlayDataCharaWinRateItemStruct.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FPolarisUMGPlayDataCharaWinRateItemStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UTexture2D* Icon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString fighter_id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString win_rate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString matches;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString encounter_rate;
    
    POLARIS_API FPolarisUMGPlayDataCharaWinRateItemStruct();
};

