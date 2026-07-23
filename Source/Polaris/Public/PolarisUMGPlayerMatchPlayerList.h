#pragma once
#include "CoreMinimal.h"
#include "PlayerMatchPlayerInfo.h"
#include "PolarisUserWidget.h"
#include "PolarisUMGPlayerMatchPlayerList.generated.h"

UCLASS(EditInlineNew)
class POLARIS_API UPolarisUMGPlayerMatchPlayerList : public UPolarisUserWidget {
    GENERATED_BODY()
public:
    UPolarisUMGPlayerMatchPlayerList();

    UFUNCTION(BlueprintImplementableEvent)
    void UpdateCursor(int32 vertical_cursor, int32 horizontal_cursor);
    
    UFUNCTION(BlueprintImplementableEvent)
    void Show(const TArray<FPlayerMatchPlayerInfo>& player_info_list, int32 max_join_num);
    
    UFUNCTION(BlueprintImplementableEvent)
    void RefreshPlayerNames();
    
    UFUNCTION(BlueprintImplementableEvent)
    void PlayShowAnimation();
    
    UFUNCTION(BlueprintImplementableEvent)
    void PlayHideAnimation();
    
    UFUNCTION(BlueprintImplementableEvent)
    bool IsWaitingAnimation();
    
    UFUNCTION(BlueprintCallable)
    void InvokeDecideCallback();
    
    UFUNCTION(BlueprintCallable)
    void InvokeCancelCallback();
    
    UFUNCTION(BlueprintImplementableEvent)
    FString GetSelectedPlayerId();
    
    UFUNCTION(BlueprintImplementableEvent)
    void Decide();
    
    UFUNCTION(BlueprintImplementableEvent)
    void Cancel();
    
};

