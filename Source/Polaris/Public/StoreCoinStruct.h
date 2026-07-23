#pragma once
#include "CoreMinimal.h"
#include "StoreCoinStruct.generated.h"

USTRUCT(BlueprintType)
struct POLARIS_API FStoreCoinStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName catalog_id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 coin_num;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FText coin_price_text;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FText established_price;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 rarity;
    
    FStoreCoinStruct();
};

