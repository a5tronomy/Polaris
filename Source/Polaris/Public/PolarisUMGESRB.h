#pragma once
#include "CoreMinimal.h"
#include "PolarisUserWidget.h"
#include "PolarisUMGESRB.generated.h"

UCLASS(EditInlineNew)
class POLARIS_API UPolarisUMGESRB : public UPolarisUserWidget {
    GENERATED_BODY()
public:
    UPolarisUMGESRB();

    UFUNCTION(BlueprintImplementableEvent)
    void Setup(int32 Type);
    
    UFUNCTION(BlueprintImplementableEvent)
    void RequestIOAnim(bool In);
    
    UFUNCTION(BlueprintCallable)
    void InvokeDecideCallback();
    
    UFUNCTION(BlueprintImplementableEvent)
    bool HasIOAnimationFinished(bool In);
    
    UFUNCTION(BlueprintImplementableEvent)
    bool HasDecideAnimationFinished();
    
    UFUNCTION(BlueprintImplementableEvent)
    void Decide();
    
};

