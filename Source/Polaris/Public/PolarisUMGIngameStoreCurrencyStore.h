#pragma once
#include "CoreMinimal.h"
#include "PolarisUMGIngameStoreMenuBase.h"
#include "StoreCoinStruct.h"
#include "PolarisUMGIngameStoreCurrencyStore.generated.h"

UCLASS(EditInlineNew)
class POLARIS_API UPolarisUMGIngameStoreCurrencyStore : public UPolarisUMGIngameStoreMenuBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FStoreCoinStruct> catalog_coin_datas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool is_dialog;
    
public:
    UPolarisUMGIngameStoreCurrencyStore();

    UFUNCTION(BlueprintImplementableEvent)
    void StopAnimGrayOut();
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetErrorText(const FString& raw_text);
    
    UFUNCTION(BlueprintCallable)
    void RequestCommerceVC(FStoreCoinStruct coin_data);
    
    UFUNCTION(BlueprintImplementableEvent)
    void PlayAnimGrayOut(bool is_gray_out);
    
    UFUNCTION(BlueprintImplementableEvent)
    void AddCoinPanel(const FStoreCoinStruct& coin_datas);
    
};

