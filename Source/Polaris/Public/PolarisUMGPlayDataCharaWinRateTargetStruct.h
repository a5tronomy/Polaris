#pragma once
#include "CoreMinimal.h"
#include "PolarisUMGPlayDataCharaWinRateTargetStruct.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FPolarisUMGPlayDataCharaWinRateTargetStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UTexture2D* Icon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UTexture2D* Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UTexture2D* rank;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UTexture2D* highest_rank;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString season_num;
    
    POLARIS_API FPolarisUMGPlayDataCharaWinRateTargetStruct();
};

