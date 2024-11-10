#pragma once
#include "CoreMinimal.h"
#include "PolarisUserWidget.h"
#include "PolarisUMGInformationBar.generated.h"

UCLASS(EditInlineNew)
class POLARIS_API UPolarisUMGInformationBar : public UPolarisUserWidget {
    GENERATED_BODY()
public:
    UPolarisUMGInformationBar();

    UFUNCTION(BlueprintImplementableEvent)
    void OnShowInformationBar(bool flag);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnSetMessage(int32 ID, bool is_right, bool is_black_text, const FString& Message);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnPlayAnimOut();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnPlayAnimIn();
    
};

