#pragma once
#include "CoreMinimal.h"
#include "EPolarisUMGPhotomodeTabType.h"
#include "PolarisUMGPhotoModeWinItemStruct.h"
#include "PolarisUserWidget.h"
#include "PolarisPhotomodeWidget.generated.h"

class ACineCameraActor;
class APhotoModeActor;
class UPolarisPhotomodeWidget;
class UTexture2D;

UCLASS(EditInlineNew)
class POLARIS_API UPolarisPhotomodeWidget : public UPolarisUserWidget {
    GENERATED_BODY()
public:
    UPolarisPhotomodeWidget();

    UFUNCTION(BlueprintImplementableEvent)
    void SetCameraGuideState(int32 State);
    
    UFUNCTION(BlueprintImplementableEvent)
    void PlayTextInfoAnimation(const FString& text_id);
    
    UFUNCTION(BlueprintImplementableEvent)
    void PlayOutAnimation();
    
    UFUNCTION(BlueprintImplementableEvent)
    void PlayInfomationBarAnim(bool is_play_in);
    
    UFUNCTION(BlueprintImplementableEvent)
    void PlayInAnimation();
    
    UFUNCTION(BlueprintImplementableEvent)
    void PlayGuideVisibleAnimation(bool is_show);
    
    UFUNCTION(BlueprintImplementableEvent)
    void PlayExecArrowAnimation(int32 list_idx, bool is_left);
    
    UFUNCTION(BlueprintImplementableEvent)
    void PlayEnableAnimation(bool is_enable);
    
    UFUNCTION(BlueprintImplementableEvent)
    void PlayDecideItemAnimation(int32 list_idx);
    
    UFUNCTION(BlueprintImplementableEvent)
    void PlayCameraOperationTypeAnimation(int32 Type);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnUpdateItemsEnable(const TArray<FPolarisUMGPhotoModeWinItemStruct>& items);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnSetItemValueAndText(int32 list_idx, float Value, const FString& Text);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnSetItemValue(int32 list_idx, float Value, const TArray<FString>& Params);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnSelectItem(int32 list_idx);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnEnabledGrid(bool is_enabled);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnCreateTab(const TArray<EPolarisUMGPhotomodeTabType>& id_list, const TArray<UTexture2D*>& icons);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnChangeWin(const EPolarisUMGPhotomodeTabType Type, const FString& title_id, const TArray<FPolarisUMGPhotoModeWinItemStruct>& items);
    
    UFUNCTION(BlueprintCallable)
    void InvokeTabDecideCallback(int32 Type);
    
    UFUNCTION(BlueprintCallable)
    void InvokeSliderChangeCallback(int32 ID, float Value);
    
    UFUNCTION(BlueprintCallable)
    void InvokeItemSelectCallback(int32 ID);
    
    UFUNCTION(BlueprintCallable)
    void InvokeItemDecideCallback(int32 ID);
    
    UFUNCTION(BlueprintCallable)
    void InvokeArrowDecideCallback(int32 ID);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UPolarisPhotomodeWidget* GetPhotoWin();
    
    UFUNCTION(BlueprintCallable)
    APhotoModeActor* GetPhotoModeActor();
    
    UFUNCTION(BlueprintCallable)
    ACineCameraActor* GetCineCameraActor();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AcquirePhotoManager();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AcquireCineCamera();
    
};

