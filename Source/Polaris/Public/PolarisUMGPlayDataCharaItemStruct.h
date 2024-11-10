#pragma once
#include "CoreMinimal.h"
#include "PolarisUMGPlayDataCharaItemStruct.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FPolarisUMGPlayDataCharaItemStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString fighter_id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UTexture2D* chara_icon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UTexture2D* rank_icon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FText wins;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FText win_rate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FText use_rate;
    
    POLARIS_API FPolarisUMGPlayDataCharaItemStruct();
};

