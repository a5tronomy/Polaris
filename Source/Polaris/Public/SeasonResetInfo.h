#pragma once
#include "CoreMinimal.h"
#include "SeasonResetInfo.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct POLARIS_API FSeasonResetInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    int32 season_num;
    
    UPROPERTY(BlueprintReadOnly)
    UTexture2D* chara_icon;
    
    UPROPERTY(BlueprintReadOnly)
    UTexture2D* rank_icon;
    
    UPROPERTY(BlueprintReadOnly)
    int32 tekken_power;
    
    FSeasonResetInfo();
};

