#pragma once
#include "CoreMinimal.h"
#include "BlackPenItemsArray.h"
#include "BlackPenLevelItemFlatList.h"
#include "BlackPenUpdateData.h"
#include "IngameStoreBlackPenWidgetName.h"
#include "PolarisUMGIngameStoreMenuBase.h"
#include "Widgets.h"
#include "PolarisUMGIngameStoreBlackPen.generated.h"

class UPolarisUMGStoreButton;
class UWidgetAnimation;

UCLASS(EditInlineNew)
class POLARIS_API UPolarisUMGIngameStoreBlackPen : public UPolarisUMGIngameStoreMenuBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite)
    int32 item_list_width;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FIngameStoreBlackPenWidgetName widget_names;
    
private:
    UPROPERTY()
    UWidgetAnimation* Unlock;
    
    UPROPERTY()
    FWidgets data_widgets;
    
public:
    UPolarisUMGIngameStoreBlackPen();

    UFUNCTION(BlueprintImplementableEvent)
    void UpdateDataToWidget(FBlackPenUpdateData Data);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetConsumeCoinMaintenanceState(bool is_maintenance);
    
protected:
    UFUNCTION(BlueprintPure)
    int32 RightX(int32 Y, int32 Offset);
    
public:
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    UPolarisUMGStoreButton* GetTargetButtonVertical(int32 cursor_x, int32 cursor_y, bool adv);
    
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    UPolarisUMGStoreButton* GetTargetButtonHorizontal(int32 cursor_x, int32 cursor_y, bool adv);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool DebugShowFlatList(FBlackPenLevelItemFlatList flat_list);
    
    UFUNCTION(BlueprintCallable)
    FBlackPenLevelItemFlatList DebugSetSourceList(FBlackPenItemsArray pdata, FBlackPenItemsArray fdata);
    
    UFUNCTION(BlueprintImplementableEvent)
    void DebugGetSourceList(FBlackPenItemsArray& pdata, FBlackPenItemsArray& fdata);
    
protected:
    UFUNCTION(BlueprintPure)
    int32 CenterX(int32 Y, int32 Offset);
    
    UFUNCTION(BlueprintCallable)
    int32 AssignRectGrid(UPolarisUMGStoreButton* Button, int32 x1, int32 x2, int32 y1, int32 y2);
    
    UFUNCTION(BlueprintCallable)
    int32 AssignGrid(UPolarisUMGStoreButton* Button, int32 X, int32 Y);
    
};

