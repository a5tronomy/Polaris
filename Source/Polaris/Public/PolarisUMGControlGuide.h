#pragma once
#include "CoreMinimal.h"
#include "PolarisUserWidget.h"
#include "PolarisUMGControlGuide.generated.h"

UCLASS(EditInlineNew)
class POLARIS_API UPolarisUMGControlGuide : public UPolarisUserWidget {
    GENERATED_BODY()
public:
    UPolarisUMGControlGuide();

    UFUNCTION(BlueprintImplementableEvent)
    void SetButtonText(int32 side, int32 no, const FString& ButtonText);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetButtonShow(int32 side, int32 no, bool Show);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetButtonForceHide(int32 side, int32 no);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetButtonData(int32 side, int32 no, const FString& ButtonText, const FString& moveText, int32 Type);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnAnimStayRage(int32 side, int32 no);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnAnimStayHeat(int32 side, int32 no);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnAnimOutEffect(int32 side, int32 no);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnAnimInRage(int32 side, int32 no);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnAnimInHeat(int32 side, int32 no);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnAnimFlashWait(int32 side, int32 no);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnAnimFlashStop(int32 side, int32 no);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnAnimFlash(int32 side, int32 no);
    
};

