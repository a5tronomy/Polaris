#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "BlackPenData.generated.h"

class UBlackPenData;

UCLASS(BlueprintType)
class POLARIS_API UBlackPenData : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_DELEGATE_OneParam(FBlackPenDownloadRewardData, bool, isSuccess);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FBlackPenDownloadDetailData, bool, isSuccess);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FBlackPenDownloadBasicData, bool, isSuccess);
    
    UPROPERTY(BlueprintReadWrite)
    bool _isLoadDataTable;
    
    UBlackPenData();

    UFUNCTION(BlueprintCallable)
    void DownloadRewardData(UBlackPenData::FBlackPenDownloadRewardData OnDownloadRewardData);
    
    UFUNCTION(BlueprintCallable)
    void DownloadDetailData(UBlackPenData::FBlackPenDownloadDetailData OnDownloadDetailData);
    
    UFUNCTION(BlueprintCallable)
    void DownloadBasicData(UBlackPenData::FBlackPenDownloadBasicData OnDownloadBasicData);
    
    UFUNCTION(BlueprintPure)
    static UBlackPenData* BlackPenData();
    
};

