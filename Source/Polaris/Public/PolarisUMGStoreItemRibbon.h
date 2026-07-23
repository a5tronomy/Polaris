#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "StoreItemPanelStruct.h"
#include "PolarisUMGStoreItemRibbon.generated.h"

class UPolarisTextBlock;
class UWidget;
class UWidgetAnimation;

UCLASS(EditInlineNew)
class POLARIS_API UPolarisUMGStoreItemRibbon : public UUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Instanced)
    UPolarisTextBlock* tb_title;
    
    UPROPERTY(Instanced)
    UWidget* plate_free;
    
    UPROPERTY(Instanced)
    UWidget* plate_recommend;
    
    UPROPERTY(Instanced)
    UWidget* plate_popular;
    
    UPROPERTY(Instanced)
    UWidget* plate_pricedown;
    
    UPROPERTY(Instanced)
    UWidget* plate_new;
    
    UPROPERTY(Instanced)
    UWidget* frame;
    
    UPROPERTY(Instanced)
    UWidget* plate_limit;
    
    UPROPERTY(Transient)
    UWidgetAnimation* Anim_Free_GreyedOut;
    
    UPROPERTY(Transient)
    UWidgetAnimation* Anim_Recommend_GreyedOut;
    
    UPROPERTY(Transient)
    UWidgetAnimation* Anim_Popular_GreyedOut;
    
    UPROPERTY(Transient)
    UWidgetAnimation* Anim_PriceDown_GreyedOut;
    
    UPROPERTY(Transient)
    UWidgetAnimation* Anim_New_GreyedOut;
    
    UPROPERTY(Transient)
    UWidgetAnimation* Anim_Limit_GreyedOut;
    
public:
    UPolarisUMGStoreItemRibbon();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void RepItemInfo(const FStoreItemPanelStruct& sell_data, bool owned);
    
};

