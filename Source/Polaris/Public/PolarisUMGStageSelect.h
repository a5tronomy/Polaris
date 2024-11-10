#pragma once
#include "CoreMinimal.h"
#include "PolarisUserWidget.h"
#include "StageGimmickInfo.h"
#include "StagePanelInfo.h"
#include "PolarisUMGStageSelect.generated.h"

class UTexture2D;

UCLASS(EditInlineNew)
class POLARIS_API UPolarisUMGStageSelect : public UPolarisUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    TMap<int32, UTexture2D*> m_bg_textures;
    
    UPROPERTY()
    TMap<int32, UTexture2D*> m_name_textures;
    
    UPROPERTY()
    TMap<int32, UTexture2D*> m_map_textures;
    
    UPROPERTY()
    TMap<int32, UTexture2D*> m_panel_textures;
    
    UPROPERTY()
    TArray<int32> m_selectable_stage_list;
    
public:
    UPolarisUMGStageSelect();

    UFUNCTION(BlueprintImplementableEvent)
    void UseCATPatch();
    
    UFUNCTION(BlueprintImplementableEvent)
    void Setup(bool is_blue_cursor);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SelectPanel(int32 ID);
    
    UFUNCTION(BlueprintImplementableEvent)
    void PlayAnimDecide(int32 ID);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnChangedSubPanel();
    
    UFUNCTION(BlueprintImplementableEvent)
    bool IsSubPanelSwitchingComplete();
    
    UFUNCTION(BlueprintImplementableEvent)
    bool IsInitializing();
    
    UFUNCTION(BlueprintImplementableEvent)
    bool IsFinishAnimation();
    
    UFUNCTION(BlueprintCallable)
    void InvokeSelectCallback(int32 ID);
    
    UFUNCTION(BlueprintCallable)
    void InvokeDecideMovieCallback();
    
    UFUNCTION(BlueprintCallable)
    void InvokeDecideCallback(int32 ID);
    
    UFUNCTION(BlueprintPure)
    TArray<int32> GetStageSelectableList();
    
    UFUNCTION(BlueprintCallable)
    FString GetStageNameTextId(int32 stageId);
    
    UFUNCTION(BlueprintPure)
    UTexture2D* GetPanelTexture(const int32 stageId);
    
    UFUNCTION(BlueprintPure)
    UTexture2D* GetNameTexture(const int32 stageId);
    
    UFUNCTION(BlueprintPure)
    UTexture2D* GetMapTexture(const int32 stageId);
    
    UFUNCTION(BlueprintPure)
    FString GetLoopMovieName(int32 stageId);
    
    UFUNCTION(BlueprintPure)
    FString GetDecideMovieName(int32 stageId);
    
    UFUNCTION(BlueprintPure)
    UTexture2D* GetBgTexture(const int32 stageId);
    
    UFUNCTION(BlueprintImplementableEvent)
    void EnablePanel(bool flag);
    
    UFUNCTION(BlueprintImplementableEvent)
    void DarkenPanel(int32 ID);
    
    UFUNCTION(BlueprintImplementableEvent)
    void AddPanelInfoW(int32 ID, FStagePanelInfo main_panel_info, FStagePanelInfo sub_panel_info);
    
    UFUNCTION(BlueprintImplementableEvent)
    void AddPanelInfo(int32 ID, FStagePanelInfo panel_info);
    
    UFUNCTION(BlueprintImplementableEvent)
    void AddPanel(int32 ID, int32 stageId, FStageGimmickInfo gimmick_info);
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void _SetSelectedStageID(int32 ID, bool is_random);
    
    UFUNCTION(BlueprintImplementableEvent)
    void _DecideSelectedStageID(int32 ID, bool is_random);
    
};

