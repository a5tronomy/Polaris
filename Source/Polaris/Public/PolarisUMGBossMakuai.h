#pragma once
#include "CoreMinimal.h"
#include "PolarisUserWidget.h"
#include "PolarisUMGBossMakuai.generated.h"

UCLASS(EditInlineNew)
class POLARIS_API UPolarisUMGBossMakuai : public UPolarisUserWidget {
    GENERATED_BODY()
public:
    UPolarisUMGBossMakuai();

    UFUNCTION(BlueprintImplementableEvent)
    void PlayAnimOut();
    
    UFUNCTION(BlueprintImplementableEvent)
    void PlayAnimIn();
    
    UFUNCTION(BlueprintImplementableEvent)
    bool HasAnimOutFinished();
    
    UFUNCTION(BlueprintImplementableEvent)
    bool HasAnimInFinished();
    
};

