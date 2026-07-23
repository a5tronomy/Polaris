#pragma once
#include "CoreMinimal.h"
#include "PolarisUserWidget.h"
#include "PolarisUMGStoryChapterSelect.generated.h"

class UImage;
class UTexture2D;

UCLASS(EditInlineNew)
class POLARIS_API UPolarisUMGStoryChapterSelect : public UPolarisUserWidget {
    GENERATED_BODY()
public:
    UPolarisUMGStoryChapterSelect();

    UFUNCTION(BlueprintImplementableEvent)
    void SetInputEnable(bool Enable);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetClearIconVisibility(int32 cpt, bool Visible);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetChapterTitleText(const FString& Title, const FString& Info);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetBGTexture(const UTexture2D* tex);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SelectPanel(int32 cpt, bool Force);
    
    UFUNCTION(BlueprintImplementableEvent)
    void ScrollPanel(float Offset);
    
    UFUNCTION(BlueprintImplementableEvent)
    void RequestIOAnim(bool In);
    
    UFUNCTION(BlueprintCallable)
    void InvokeSelectCallback(int32 cpt);
    
    UFUNCTION(BlueprintCallable)
    void InvokeDecideCallback(int32 cpt);
    
    UFUNCTION(BlueprintCallable)
    void InvokeAllowSelectCallback(int32 ID);
    
    UFUNCTION(BlueprintCallable)
    void InvokeAllowDecideCallback(int32 ID);
    
    UFUNCTION(BlueprintImplementableEvent)
    bool HasIOAnimationFinished(bool In);
    
    UFUNCTION(BlueprintImplementableEvent)
    UImage* GetMovieImage() const;
    
    UFUNCTION(BlueprintImplementableEvent)
    void DecidePanel(int32 cpt);
    
    UFUNCTION(BlueprintImplementableEvent)
    void CreatePanel(const TArray<UTexture2D*>& tex);
    
    UFUNCTION(BlueprintImplementableEvent)
    void ChangeBgMode(bool Movie);
    
};

