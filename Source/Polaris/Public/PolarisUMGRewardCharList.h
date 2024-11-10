#pragma once
#include "CoreMinimal.h"
#include "PolarisUserWidget.h"
#include "PolarisUMGRewardCharList.generated.h"

class UTexture2D;

UCLASS(EditInlineNew)
class POLARIS_API UPolarisUMGRewardCharList : public UPolarisUserWidget {
    GENERATED_BODY()
public:
    UPolarisUMGRewardCharList();

    UFUNCTION(BlueprintImplementableEvent)
    void SetupPanel(int32 no, const UTexture2D* Icon, const FString& Name, bool Locked);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetInputEnable(bool Enable);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetFadeMode(int32 no, bool exist);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SelectPanel(int32 no, bool Force);
    
    UFUNCTION(BlueprintImplementableEvent)
    void RequestDecideAnim(int32 idx);
    
    UFUNCTION(BlueprintImplementableEvent)
    void RequestAnimIO(bool In);
    
    UFUNCTION(BlueprintImplementableEvent)
    bool HasIOAnimationFinished(bool In);
    
    UFUNCTION(BlueprintImplementableEvent)
    bool HasDecideAnimationFinished(int32 idx);
    
    UFUNCTION(BlueprintImplementableEvent)
    void CreatePanel(int32 Num);
    
};

