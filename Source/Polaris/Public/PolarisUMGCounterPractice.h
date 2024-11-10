#pragma once
#include "CoreMinimal.h"
#include "PolarisUserWidget.h"
#include "PolarisUMGCounterPractice.generated.h"

class UTexture2D;

UCLASS(EditInlineNew)
class POLARIS_API UPolarisUMGCounterPractice : public UPolarisUserWidget {
    GENERATED_BODY()
public:
    UPolarisUMGCounterPractice();

    UFUNCTION(BlueprintImplementableEvent)
    void SetVisibilityTab(bool Visible);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetSideText(const FString& sideText);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetFighterTexture(const UTexture2D* Texture);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetFighterNameTexture(const UTexture2D* Texture);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetCursorIndex(int32 Index);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetCurrentTab(int32 Index);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetButtonExistRecommend(int32 Index, bool exist);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetButtonCheck(int32 Index, bool check);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetActiveLayer(int32 Index);
    
    UFUNCTION(BlueprintImplementableEvent)
    void PlayAnimOut();
    
    UFUNCTION(BlueprintImplementableEvent)
    void PlayAnimIn();
    
    UFUNCTION(BlueprintImplementableEvent)
    void PlayAnimDecide(int32 Index);
    
    UFUNCTION(BlueprintImplementableEvent)
    bool IsAnimDecide();
    
    UFUNCTION(BlueprintCallable)
    void InvokeSelectLeftCallback(int32 ID);
    
    UFUNCTION(BlueprintCallable)
    void InvokeSelectCallback(int32 ID);
    
    UFUNCTION(BlueprintCallable)
    void InvokeDecideLeftCallback(int32 ID);
    
    UFUNCTION(BlueprintCallable)
    void InvokeDecideCallback(int32 ID);
    
    UFUNCTION(BlueprintImplementableEvent)
    void ClearData();
    
    UFUNCTION(BlueprintImplementableEvent)
    void AddHeadingData(const FString& Text);
    
    UFUNCTION(BlueprintImplementableEvent)
    void AddButtonData(int32 no, const FString& nameText, const FString& commandText, const FString& noteText, const FString& damageText, int32 difficulty, const UTexture2D* texture0, const UTexture2D* texture1, const UTexture2D* texture2, const UTexture2D* texture3, bool isRawNameText);
    
};

