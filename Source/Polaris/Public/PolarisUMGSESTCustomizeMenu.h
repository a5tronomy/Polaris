#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ESESTCustomizeMenu_CursorDir.h"
#include "ESESTCustomizeMenu_PreviewScale.h"
#include "PolarisUserWidget.h"
#include "PolarisUMGSESTCustomizeMenu.generated.h"

class UPolarisUMGCharacterCustomizeSEST;
class UTexture;

UCLASS(EditInlineNew)
class POLARIS_API UPolarisUMGSESTCustomizeMenu : public UPolarisUserWidget {
    GENERATED_BODY()
public:
    UPolarisUMGSESTCustomizeMenu();

    UFUNCTION(BlueprintImplementableEvent)
    bool TickMoveLayerCursor();
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetSESTPreview(UTexture* thumbnail);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetSESTName(const FString& Text);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetPreviewScale(ESESTCustomizeMenu_PreviewScale Scale);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetNewLayer(int32 Index, int32 ID, const FString& Text);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetLayerNum(int32 layer_num, int32 layer_max);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetLayerArrowVisibility(bool Up, bool Down);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetLayer(int32 Index, int32 ID, int32 layer_num, UTexture* thumbnail, bool is_checked, bool is_copying);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetGridVisibility(bool is_visible);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetEmptyLayer(int32 Index);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetCDMenuVisibility(bool is_visible);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SelectCDMenu(int32 Index);
    
    UFUNCTION(BlueprintImplementableEvent)
    void ResetPreviewScroll();
    
    UFUNCTION(BlueprintImplementableEvent)
    void PlayLayerAnim(int32 Index, FName anim_name);
    
    UFUNCTION(BlueprintImplementableEvent)
    void PlayAnim(FName anim_name, bool stop_prev_anim);
    
    UFUNCTION(BlueprintImplementableEvent)
    void MovePreviewScroll(FVector2D move);
    
    UFUNCTION(BlueprintImplementableEvent)
    void MoveLayerCursor(ESESTCustomizeMenu_CursorDir dir);
    
    UFUNCTION(BlueprintImplementableEvent)
    bool IsCDMenuAnimPlaying();
    
    UFUNCTION(BlueprintImplementableEvent)
    bool IsAnimPlaying(FName anim_name);
    
    UFUNCTION(BlueprintCallable)
    void InvokeLayerClickCallback(int32 ID);
    
    UFUNCTION(BlueprintCallable)
    void InvokeLayerArrowClickCallback(ESESTCustomizeMenu_CursorDir dir);
    
    UFUNCTION(BlueprintImplementableEvent)
    UPolarisUMGCharacterCustomizeSEST* GetSESTWidget();
    
    UFUNCTION(BlueprintImplementableEvent)
    void DecideCDMenu(int32 Index);
    
    UFUNCTION(BlueprintImplementableEvent)
    void CDMenuOut();
    
    UFUNCTION(BlueprintImplementableEvent)
    void CDMenuIn(int32 Index);
    
};

