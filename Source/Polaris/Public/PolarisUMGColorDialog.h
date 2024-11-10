#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "PolarisUserWidget.h"
#include "PolarisUMGColorDialog.generated.h"

UCLASS(EditInlineNew)
class POLARIS_API UPolarisUMGColorDialog : public UPolarisUserWidget {
    GENERATED_BODY()
public:
    UPolarisUMGColorDialog();

    UFUNCTION(BlueprintImplementableEvent)
    void OnUpdateTabPalette(bool is_storage_select, bool is_tab_select, FLinearColor default_color, FLinearColor edited_color, bool is_outer, int32 outer_cursor, const TArray<FLinearColor>& inner_color_list, int32 inner_cursor_id, int32 inner_check_id);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnUpdateTabList(const TArray<FString>& tab_list, const TArray<int32>& tab_flag_list, int32 ID, bool is_tab_select);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnUpdateTabColorMapArrow(int32 ID, int32 Direction, bool is_terminus);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnUpdateTabColorMap(bool is_storage_select, bool is_tab_select, FLinearColor default_color, FLinearColor edited_color, int32 cursor_id, bool is_outer, FVector3f edited_pos, float edited_v, int32 data_type);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnUpdateTabColorBar(bool is_storage_select, bool is_tab_select, FLinearColor default_color, FLinearColor edited_color, int32 cursor_id);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnUpdateStorage(int32 cursor_id, const TArray<FLinearColor>& color_list);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnUpdatePartCursor(int32 ID, int32 Direction, bool is_terminus);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnUpdatePartColor(int32 ID, bool is_hsv, FLinearColor Color);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnSetPosition(float X, float Y);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnReinitialize();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnGetColorDataTable(int32 ID, TArray<FLinearColor>& Data);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnDecideTabPalette(int32 ID);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnDecideTabColorMap(int32 ID);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnDecideTabColorBar(int32 ID);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnDecideStorage(int32 ID);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnCreatePart(int32 ID, bool is_hsv, FLinearColor Color);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnCreateDonePart();
    
    UFUNCTION(BlueprintCallable)
    void InvokeTabDecideCallback(int32 ID);
    
    UFUNCTION(BlueprintCallable)
    void InvokeStorageSelectCallback(int32 ID);
    
    UFUNCTION(BlueprintCallable)
    void InvokeStorageDecideCallback(int32 ID);
    
    UFUNCTION(BlueprintCallable)
    void InvokePartDecideCallback(int32 ID);
    
    UFUNCTION(BlueprintCallable)
    void InvokePartArrowDecideCallback(int32 ID);
    
    UFUNCTION(BlueprintCallable)
    void InvokePaletteSelectCallback(int32 ID);
    
    UFUNCTION(BlueprintCallable)
    void InvokePaletteDecideCallback(int32 ID);
    
    UFUNCTION(BlueprintCallable)
    void InvokeColorMapSelectCallback(int32 ID);
    
    UFUNCTION(BlueprintCallable)
    void InvokeColorMapMouseReleaseCallback(int32 ID);
    
    UFUNCTION(BlueprintCallable)
    void InvokeColorMapMouseMoveCallback(int32 ID, float pos_x, float pos_y);
    
    UFUNCTION(BlueprintCallable)
    void InvokeColorMapDecideCallback(int32 ID);
    
    UFUNCTION(BlueprintCallable)
    void InvokeColorMapArrowDecideCallback(int32 ID);
    
    UFUNCTION(BlueprintCallable)
    void InvokeColorBarSelectCallback(int32 ID);
    
    UFUNCTION(BlueprintCallable)
    void InvokeColorBarDecideCallback(int32 ID);
    
    UFUNCTION(BlueprintCallable)
    void InvokeColorBarChangeVCallback(int32 ID, float Value);
    
    UFUNCTION(BlueprintCallable)
    void InvokeColorBarChangeSCallback(int32 ID, float Value);
    
    UFUNCTION(BlueprintCallable)
    void InvokeColorBarChangeHCallback(int32 ID, float Value);
    
    UFUNCTION(BlueprintPure)
    bool CheckCurrentColorSlotTypeEnableColor(const FLinearColor& _SrcColor);
    
    UFUNCTION(BlueprintPure)
    bool CheckColorSlotTypeEnableColor(int32 ID, const FLinearColor& _SrcColor);
    
};

