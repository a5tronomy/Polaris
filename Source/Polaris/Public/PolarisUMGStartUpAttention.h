#pragma once
#include "CoreMinimal.h"
#include "PolarisUserWidget.h"
#include "PolarisUMGStartUpAttention.generated.h"

UCLASS(EditInlineNew)
class POLARIS_API UPolarisUMGStartUpAttention : public UPolarisUserWidget {
    GENERATED_BODY()
public:
    UPolarisUMGStartUpAttention();

    UFUNCTION(BlueprintImplementableEvent)
    void OnPlayAnimOut();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnPlayAnimIn();
    
    UFUNCTION(BlueprintImplementableEvent)
    bool IsAnimOutFinished();
    
};

