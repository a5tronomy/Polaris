#pragma once
#include "CoreMinimal.h"
#include "PolarisUserWidget.h"
#include "PolarisUMGGhostVsGhostSelect.generated.h"

class UGhostVsGhostSelectListEntry;
class UTexture2D;

UCLASS(EditInlineNew)
class POLARIS_API UPolarisUMGGhostVsGhostSelect : public UPolarisUserWidget {
    GENERATED_BODY()
public:
    UPolarisUMGGhostVsGhostSelect();

    UFUNCTION(BlueprintImplementableEvent)
    void SetSideEnable(int32 side, bool Enable);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetRankTextures(const TMap<int32, UTexture2D*>& rankTextureMap);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetPlayerInfo(int32 side, const FString& playerName, int32 platformIconIndex);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetPlatformIconTextures(const TMap<int32, UTexture2D*>& platformIconTextureMap);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetIsYou(int32 side, bool Enable);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetGhostList(int32 side, const TArray<UGhostVsGhostSelectListEntry*>& List);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetCurrentSelectionSide(int32 side);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetCharacterTextures(int32 side, const TMap<int32, UTexture2D*>& characterTextureMap);
    
    UFUNCTION(BlueprintImplementableEvent)
    void ResetGhostListCursor();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayOut(bool immidiate);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayIn();
    
    UFUNCTION(BlueprintCallable)
    void NotifyDecide(const UGhostVsGhostSelectListEntry* entry);
    
    UFUNCTION(BlueprintImplementableEvent)
    bool IsPlayOutFinish();
    
    UFUNCTION(BlueprintImplementableEvent)
    bool IsPlayInFinish();
    
    UFUNCTION(BlueprintImplementableEvent)
    void ClearSelectionSide(int32 side);
    
    UFUNCTION(BlueprintImplementableEvent)
    void ApplyInput(bool Decide, bool Up, bool Down);
    
};

