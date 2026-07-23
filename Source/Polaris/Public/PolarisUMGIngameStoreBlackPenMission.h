#pragma once
#include "CoreMinimal.h"
#include "BlackPenMissionItemPanel.h"
#include "BlackPenMissionPanel.h"
#include "BlackPenMissionWidgetName.h"
#include "PolarisUMGIngameStoreMenuBase.h"
#include "PolarisUMGIngameStoreBlackPenMission.generated.h"

class UPolarisUMGIngameStoreMissionButton;

UCLASS(EditInlineNew)
class POLARIS_API UPolarisUMGIngameStoreBlackPenMission : public UPolarisUMGIngameStoreMenuBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FBlackPenMissionWidgetName widget_names;
    
private:
    UPROPERTY(Instanced)
    TArray<UPolarisUMGIngameStoreMissionButton*> mission_buttons;
    
public:
    UPolarisUMGIngameStoreBlackPenMission();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void MissionTypeCallButtonDecide(int32 ID);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void MissionListCallButtonDecide(int32 ID);
    
    UFUNCTION(BlueprintNativeEvent)
    bool IsPlayingAnimNotHeldOut() const;
    
    UFUNCTION(BlueprintNativeEvent)
    bool IsPlayingAnimNotHeldIn() const;
    
    UFUNCTION(BlueprintImplementableEvent)
    void CreateMissionPanelData(const TArray<FBlackPenMissionPanel>& panel_infos, bool bTimerTick);
    
    UFUNCTION(BlueprintImplementableEvent)
    void CreateMissionItemPanelData(const TArray<FBlackPenMissionItemPanel>& panel_infos, int32 mission_type_number);
    
    UFUNCTION(BlueprintNativeEvent)
    void AnimNotHeldOut();
    
    UFUNCTION(BlueprintNativeEvent)
    void AnimNotHeldIn();
    
};

