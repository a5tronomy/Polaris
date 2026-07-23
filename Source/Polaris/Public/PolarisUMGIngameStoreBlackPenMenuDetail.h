#pragma once
#include "CoreMinimal.h"
#include "BlackPenItem.h"
#include "BlackPenMenuDetailWidgetName.h"
#include "PolarisUMGStoreButton.h"
#include "PolarisUMGIngameStoreBlackPenMenuDetail.generated.h"

UCLASS(EditInlineNew)
class POLARIS_API UPolarisUMGIngameStoreBlackPenMenuDetail : public UPolarisUMGStoreButton {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FBlackPenItem bp_item_data;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FBlackPenMenuDetailWidgetName widget_names;
    
    UPROPERTY(BlueprintReadWrite)
    int32 max_column_num;
    
public:
    UPolarisUMGIngameStoreBlackPenMenuDetail();

    UFUNCTION(BlueprintImplementableEvent)
    void SetPartTextID(const FString& text_id);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void RepItemInfo(const FBlackPenItem& item_data, bool Create, bool Root);
    
    UFUNCTION(BlueprintPure)
    int32 GetDefaultColumnNum() const;
    
    UFUNCTION(BlueprintImplementableEvent)
    void AddWarningText(const FString& raw_text);
    
};

