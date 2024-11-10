#pragma once
#include "CoreMinimal.h"
#include "EPolarisUMGMainMenuItemState.h"
#include "EPolarisUMGMainMenuShortcutType.h"
#include "PolarisUMGMainMenuInitMenuStruct.h"
#include "PolarisUMGMainMenuItemStruct.h"
#include "PolarisUserWidget.h"
#include "PolarisUMGMainMenu.generated.h"

class UTexture2D;

UCLASS(EditInlineNew)
class POLARIS_API UPolarisUMGMainMenu : public UPolarisUserWidget {
    GENERATED_BODY()
public:
    UPolarisUMGMainMenu();

    UFUNCTION(BlueprintImplementableEvent)
    void OnUpdateMenuItem(int32 item_id, bool is_favorite, int32 ignore_menu_id);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnSwapFavoriteMenuItem(int32 menu_id, int32 Index0, int32 index1);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnShowCBTMenus();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnSetShopBaloonVisibility(int32 item_id, bool Enable);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnSetBlackPenRemainingTimeTextId(const FString& textId);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnSetBlackPenLvTextId(const FString& textId);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnSelectTabButton(int32 ID);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnSelectShortcutButton(bool is_active, int32 ID);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnSelectMenus(int32 ID, int32 item_padding, const TArray<EPolarisUMGMainMenuItemState>& item_states);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnSelectBlackPenButton(bool is_active);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnSelectBannerButton(bool is_active, int32 ID, int32 from_index, int32 to_index);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnRemoveFavoriteMenuItem(int32 menu_id, int32 item_id);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnPlayOutAnimation();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnPlayInAnimation();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnLaunchNews(const FString& Param);
    
    UFUNCTION(BlueprintImplementableEvent)
    bool OnIsProcessingBlackPen();
    
    UFUNCTION(BlueprintImplementableEvent)
    bool OnIsPlayingInAnimation();
    
    UFUNCTION(BlueprintImplementableEvent)
    bool OnIsClosedNews();
    
    UFUNCTION(BlueprintImplementableEvent)
    bool OnIsAvailableBlackPen();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnInitTabButton(int32 ID);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnInitShortcutButton(bool is_active, int32 ID);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnInitSelectMenus();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnInitPlayGoMode();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnInitPlayerInformation(const FString& player_name, const UTexture2D* rank_texture);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnInitMenus(const TArray<FPolarisUMGMainMenuInitMenuStruct>& menus);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnFocusReturned();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnDecideShortcutButton(int32 item_id);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnDecideMenuButton(int32 menu_id, int32 item_id);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnDecideBlackPenButton(int32 item_id);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnDecideBannerButton();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnCreateTabButton(int32 ID, const FString& Name);
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnCreateShortcutButton(int32 ID, EPolarisUMGMainMenuShortcutType Type, const FString& Name, bool is_selectable);
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void OnCreateMenus(int32 ID, bool is_sub_menu, const TArray<FPolarisUMGMainMenuItemStruct>& items);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnCreateBlackPenButton();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnCreateBannerButton(int32 ID, const UTexture2D* Texture, const FString& Text);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnAddFavoriteMenuItem(int32 menu_id, int32 item_id, const FString& text_id, bool is_selectable, bool is_new_icon);
    
    UFUNCTION(BlueprintCallable)
    void InvokeTabDecideCallback(int32 ID);
    
    UFUNCTION(BlueprintCallable)
    void InvokeShortcutSelectCallback(int32 ID);
    
    UFUNCTION(BlueprintCallable)
    void InvokeShortcutDecideCallback(int32 ID);
    
    UFUNCTION(BlueprintCallable)
    void InvokeMenuSelectCallback(int32 menu_id, int32 item_id);
    
    UFUNCTION(BlueprintCallable)
    void InvokeMenuDecideCallback(int32 menu_id, int32 item_id);
    
    UFUNCTION(BlueprintCallable)
    void InvokeBlackPenSelectCallback();
    
    UFUNCTION(BlueprintCallable)
    void InvokeBlackPenDecideCallback();
    
    UFUNCTION(BlueprintCallable)
    void InvokeBannerSelectCallback();
    
    UFUNCTION(BlueprintCallable)
    void InvokeBannerMarkDecideCallback(int32 ID);
    
    UFUNCTION(BlueprintCallable)
    void InvokeBannerDecideCallback();
    
};

