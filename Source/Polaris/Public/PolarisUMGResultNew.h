#pragma once
#include "CoreMinimal.h"
#include "EPolarisUMGResultNewType.h"
#include "PolarisUMGResultNewRewardStruct.h"
#include "PolarisUserWidget.h"
#include "PolarisUMGResultNew.generated.h"

class UTexture2D;

UCLASS(EditInlineNew)
class POLARIS_API UPolarisUMGResultNew : public UPolarisUserWidget {
    GENERATED_BODY()
public:
    UPolarisUMGResultNew();

    UFUNCTION(BlueprintImplementableEvent)
    void SetRematchStatus(bool Owner, bool requested);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetPlayerName(bool Owner, const FString& player_name);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetPlatformIconTexture(bool Owner, UTexture2D* icon_tex);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetGrayOutFlag(int32 ID, bool out);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetFighterIconTexture(bool Owner, UTexture2D* icon_tex);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnShowRematchStatus(bool flag);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnSetTimeLeft(int32 ID, const FString& text_id, int32 Time);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnSetSelectMenuSide(int32 side);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnSetSelectMenuCursor(int32 ID);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnSetRewardBattlePassLv(int32 beforLevel, int32 afterLevel);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnSetRewardBattlePass(const TArray<FPolarisUMGResultNewRewardStruct>& items);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnSetReward(const TArray<FPolarisUMGResultNewRewardStruct>& items);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnSetFighterName(const FString& Name);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnPlayAnimOut();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnPlayAnimIn();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnPlayAnimDecide(int32 ID);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnAddSelectMenuItems(const TArray<FString>& items);
    
    UFUNCTION(BlueprintImplementableEvent)
    bool IsAnyRematchStatusAnimationPlaying();
    
    UFUNCTION(BlueprintCallable)
    void InvokeSelectCallback(int32 ID);
    
    UFUNCTION(BlueprintCallable)
    void InvokeDecideCallback(int32 ID);
    
    UFUNCTION(BlueprintImplementableEvent)
    bool HasInAnimationFinished();
    
    UFUNCTION(BlueprintImplementableEvent)
    FString GetTimerWidgetPathName();
    
    UFUNCTION(BlueprintImplementableEvent)
    void ClearRematchHistory();
    
    UFUNCTION(BlueprintImplementableEvent)
    void CheckRematchHistoryNum();
    
    UFUNCTION(BlueprintImplementableEvent)
    void AddRematchHistory(EPolarisUMGResultNewType result_type);
    
};

