#pragma once
#include "CoreMinimal.h"
#include "PolarisUserWidget.h"
#include "PolarisUMGTAMTalk.generated.h"

UCLASS(EditInlineNew)
class POLARIS_API UPolarisUMGTAMTalk : public UPolarisUserWidget {
    GENERATED_BODY()
public:
    UPolarisUMGTAMTalk();

    UFUNCTION(BlueprintImplementableEvent)
    void OnStay();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnShowAllMessage();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnSetVisibility_Tri(bool flag);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnSetTextId(FName Text);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnSetText(FName Text);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnSetSkitId(FName skit_id);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnOut_R();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnOut_L();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnOut();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnIn_R();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnIn_L();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnIn(int32 text_type);
    
    UFUNCTION(BlueprintImplementableEvent)
    bool IsMessageFinished();
    
};

