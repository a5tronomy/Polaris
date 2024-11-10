#pragma once
#include "CoreMinimal.h"
#include "PolarisUserWidget.h"
#include "PolarisUMGTitle.generated.h"

UCLASS(EditInlineNew)
class POLARIS_API UPolarisUMGTitle : public UPolarisUserWidget {
    GENERATED_BODY()
public:
    UPolarisUMGTitle();

    UFUNCTION(BlueprintImplementableEvent)
    void SetVersionText(const FString& raw_text);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnPlayAnimTimeOut();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnPlayAnimIn();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnPlayAnimDecideOut();
    
    UFUNCTION(BlueprintImplementableEvent)
    bool IsAnimOutFinished();
    
};

