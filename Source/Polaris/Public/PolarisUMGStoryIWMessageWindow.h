#pragma once
#include "CoreMinimal.h"
#include "PolarisUserWidget.h"
#include "PolarisUMGStoryIWMessageWindow.generated.h"

class UTexture2D;

UCLASS(EditInlineNew)
class POLARIS_API UPolarisUMGStoryIWMessageWindow : public UPolarisUserWidget {
    GENERATED_BODY()
public:
    UPolarisUMGStoryIWMessageWindow();

    UFUNCTION(BlueprintImplementableEvent)
    void StopAll();
    
    UFUNCTION(BlueprintNativeEvent)
    void Show(bool flag, bool Ignore);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetTextByString(const FString& Text);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetTextById(const FString& text_id);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetFighterInfoByString(const UTexture2D* Texture, const FString& Name);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetFighterInfoById(const UTexture2D* Texture, const FString& Name);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetFighterInfo(const UTexture2D* Texture, const FString& Name, const FString& text_id);
    
    UFUNCTION(BlueprintImplementableEvent)
    bool HasAnimationFinished();
    
    UFUNCTION(BlueprintImplementableEvent)
    void FrameOut(bool enemy_side);
    
    UFUNCTION(BlueprintImplementableEvent)
    void FrameIn(bool enemy_side);
    
};

