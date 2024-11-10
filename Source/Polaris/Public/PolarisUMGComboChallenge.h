#pragma once
#include "CoreMinimal.h"
#include "PolarisUserWidget.h"
#include "PolarisUMGComboChallenge.generated.h"

class UTexture2D;

UCLASS(EditInlineNew)
class POLARIS_API UPolarisUMGComboChallenge : public UPolarisUserWidget {
    GENERATED_BODY()
public:
    UPolarisUMGComboChallenge();

    UFUNCTION(BlueprintImplementableEvent)
    void SetVisibilityMenu(bool Visible);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetFighterTexture(const UTexture2D* Texture);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetFighterNameTexture(const UTexture2D* Texture);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetCursorIndex(int32 Index);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetCurrentData(const FString& noteText, const FString& damageText, int32 difficulty);
    
    UFUNCTION(BlueprintImplementableEvent)
    void PlayMovieFadeOut();
    
    UFUNCTION(BlueprintImplementableEvent)
    void PlayMovieFadeIn();
    
    UFUNCTION(BlueprintImplementableEvent)
    void PlayAnimDecide(int32 Index);
    
    UFUNCTION(BlueprintImplementableEvent)
    bool IsAnimDecide();
    
    UFUNCTION(BlueprintCallable)
    void InvokeSelectCallback(int32 ID);
    
    UFUNCTION(BlueprintCallable)
    void InvokeDecideCallback(int32 ID);
    
    UFUNCTION(BlueprintImplementableEvent)
    void ClearCommandData();
    
    UFUNCTION(BlueprintImplementableEvent)
    void ClearButtonData();
    
    UFUNCTION(BlueprintImplementableEvent)
    void AddCommandData(const FString& commandText);
    
    UFUNCTION(BlueprintImplementableEvent)
    void AddButtonData(const FString& nameText, bool checked);
    
};

