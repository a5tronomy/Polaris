#pragma once
#include "CoreMinimal.h"
#include "BlackPenBasic.h"
#include "BlackPenDetail.h"
#include "BlackPenItemDetail.h"
#include "BlackPenLevelItemFlatList.h"
#include "BlackPenMissionBasicItem.h"
#include "BlackPenPickup.h"
#include "BlackPenUpdateData.generated.h"

USTRUCT(BlueprintType)
struct POLARIS_API FBlackPenUpdateData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FBlackPenLevelItemFlatList flat_list;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FBlackPenBasic basic_data;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FBlackPenDetail detail_data;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<FName, FBlackPenItemDetail> free_item_details;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<FName, FBlackPenItemDetail> premium_item_details;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FBlackPenMissionBasicItem> mission_basics;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FBlackPenPickup> pickup_infos;
    
    FBlackPenUpdateData();
};

