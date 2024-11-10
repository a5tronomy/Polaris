#pragma once
#include "CoreMinimal.h"
#include "BlackPenItem.h"
#include "BlackPenLevelData.h"
#include "BlackPenLevelWidgetName.h"
#include "PolarisUMGIngameStoreMenuBase.h"
#include "UPolarisUMGStoreButton.h"
#include "PolarisUMGIngameStoreBlackPenLevel.generated.h"

class UPolarisUMGStoreButton;

UCLASS(EditInlineNew)
class POLARIS_API UPolarisUMGIngameStoreBlackPenLevel : public UPolarisUMGIngameStoreMenuBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FBlackPenLevelWidgetName widget_names;
    
    UPROPERTY(BlueprintReadOnly)
    FBlackPenLevelData Data;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float scroll_speed;
    
private:
    UPROPERTY(Instanced)
    TArray<UPolarisUMGStoreButton*> m_item_panels;
    
    UPROPERTY()
    TMap<int32, FUPolarisUMGStoreButton> m_item_panels_map;
    
public:
    UPolarisUMGIngameStoreBlackPenLevel();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetRequiredLevel(int32 new_level_required, bool force_init, bool force_scroll);
    
    UFUNCTION(BlueprintCallable)
    void ScrollRight();
    
    UFUNCTION(BlueprintCallable)
    void ScrollLeft();
    
    UFUNCTION(BlueprintCallable)
    void ResetFightMoney(int32 fight_money);
    
    UFUNCTION(BlueprintImplementableEvent)
    void RefreshCoinCount();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PurchaseLevel(int32 ID);
    
protected:
    UFUNCTION()
    void OnRewardScrolled(float current_offset);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnLevelUpdated();
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void MinimizeLevel();
    
    UFUNCTION(BlueprintImplementableEvent)
    void MaximizeLevel();
    
    UFUNCTION(BlueprintPure)
    bool IsMaxLevelRequired() const;
    
    UFUNCTION(BlueprintPure)
    bool IsFightMoneyEnough() const;
    
    UFUNCTION(BlueprintImplementableEvent)
    void IncrementLevel();
    
    UFUNCTION(BlueprintImplementableEvent)
    void DecrementLevel();
    
    UFUNCTION(BlueprintImplementableEvent)
    UPolarisUMGStoreButton* CreateItemPanel(const FBlackPenItem& Item, int32 level_now);
    
};

