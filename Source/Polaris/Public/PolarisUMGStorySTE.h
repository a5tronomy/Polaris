#pragma once
#include "CoreMinimal.h"
#include "PolarisUserWidget.h"
#include "PolarisUMGStorySTE.generated.h"

class UTexture2D;
class UUserWidget;

UCLASS(EditInlineNew)
class POLARIS_API UPolarisUMGStorySTE : public UPolarisUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    TMap<int32, UUserWidget*> buttons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool IsPlaying;
    
public:
    UPolarisUMGStorySTE();

    UFUNCTION(BlueprintImplementableEvent)
    void SetupButton(int32 ID, int32 Type, const FString& Text, const UTexture2D* Texture, const FString& button_text);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetAnimGauge(float Time, bool is_hold);
    
    UFUNCTION(BlueprintImplementableEvent)
    void ResetButtons();
    
    UFUNCTION(BlueprintImplementableEvent)
    void PlayAnimSuccess(int32 ID, bool is_multi_mode, bool is_hold);
    
    UFUNCTION(BlueprintImplementableEvent)
    void PlayAnimMiss(bool is_hold);
    
    UFUNCTION(BlueprintImplementableEvent)
    void PlayAnimIn(int32 button_id, bool is_hold);
    
    UFUNCTION(BlueprintImplementableEvent)
    void PlayAnimHold(int32 ID, bool holding);
    
    UFUNCTION(BlueprintImplementableEvent)
    void PlayAnimGauge(float play_speed);
    
    UFUNCTION(BlueprintImplementableEvent)
    void PauseButtons(bool Pause);
    
};

