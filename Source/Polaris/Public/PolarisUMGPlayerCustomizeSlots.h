#pragma once
#include "CoreMinimal.h"
#include "EPolarisUMGPlayerCustomizeSlotsMenuEndType.h"
#include "PolarisUserWidget.h"
#include "PolarisUMGPlayerCustomizeSlots.generated.h"

class UTexture2D;

UCLASS(EditInlineNew)
class POLARIS_API UPolarisUMGPlayerCustomizeSlots : public UPolarisUserWidget {
    GENERATED_BODY()
public:
    UPolarisUMGPlayerCustomizeSlots();

    UFUNCTION(BlueprintImplementableEvent)
    void SetShogoTextID(int32 slotIndex, const FString& textId);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetShogoBGTexture(int32 slotIndex, const UTexture2D* Icon);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetPlayerPanelTexture(int32 slotIndex, const UTexture2D* Icon);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetMirrorOn(int32 slotIndex, bool IsMirrorOn);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetMainSlotIndex(int32 slotIndex);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetIsSlotEmpty(int32 slotIndex, bool IsEmpty);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetIsFromCharacterSelect(bool IsFromCharacterSelect);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetGaugeTexture(int32 slotIndex, const UTexture2D* Icon);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetCopySourceSlotIndex(int32 slotIndex);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SelectCopyDeleteMenu(int32 Index);
    
    UFUNCTION(BlueprintImplementableEvent)
    void RemoveCopyDeleteMenu();
    
    UFUNCTION(BlueprintImplementableEvent)
    void RefreshSlotDisplay(int32 slotIndex);
    
    UFUNCTION(BlueprintImplementableEvent)
    void PlayAnimOut();
    
    UFUNCTION(BlueprintImplementableEvent)
    void PlayAnimIn(bool ShouldDelaySlotAnimIn);
    
    UFUNCTION(BlueprintImplementableEvent)
    void PlayAnimHover(int32 slotIndex);
    
    UFUNCTION(BlueprintImplementableEvent)
    void PlayAnimDecide();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OpenCopyDeleteMenu();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsPlayingAnim();
    
    UFUNCTION(BlueprintImplementableEvent, BlueprintPure)
    bool IsCopyDeleteMenuPlayingAnim();
    
    UFUNCTION(BlueprintImplementableEvent, BlueprintPure)
    bool IsActiveCopyDeleteMenu();
    
    UFUNCTION(BlueprintCallable)
    void InvokeSelectCallback(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    void InvokeDecideCallback();
    
    UFUNCTION(BlueprintCallable)
    void InvokeCopyDeleteMenuSelectCallback(int32 Index);
    
    UFUNCTION(BlueprintImplementableEvent)
    void InitialzeSlots(int32 SlotsAmount);
    
    UFUNCTION(BlueprintImplementableEvent)
    EPolarisUMGPlayerCustomizeSlotsMenuEndType GetCopyDeleteMenuEndReason();
    
    UFUNCTION(BlueprintImplementableEvent)
    void DecideCopyDeleteMenu();
    
    UFUNCTION(BlueprintImplementableEvent)
    void CancelCopyDeleteMenu();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CallMenuDecideDelegate();
    
};

