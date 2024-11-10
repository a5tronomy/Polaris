#pragma once
#include "CoreMinimal.h"
#include "PolarisUserWidget.h"
#include "PolarisUMGQuickCharacterSelect.generated.h"

class UTexture2D;

UCLASS(EditInlineNew)
class POLARIS_API UPolarisUMGQuickCharacterSelect : public UPolarisUserWidget {
    GENERATED_BODY()
public:
    UPolarisUMGQuickCharacterSelect();

    UFUNCTION(BlueprintImplementableEvent)
    void SetupPanel(int32 no, const UTexture2D* Icon, const FString& Name, bool Locked);
    
    UFUNCTION(BlueprintImplementableEvent)
    void Setup();
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetMouseOwnership(int32 side);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetInputEnable(bool Enable);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SelectPanel(int32 side, int32 no, bool Force);
    
    UFUNCTION(BlueprintImplementableEvent)
    void RequestDecideAnim(int32 side, int32 idx);
    
    UFUNCTION(BlueprintImplementableEvent)
    void RequestAnimIO(bool In);
    
    UFUNCTION(BlueprintCallable)
    void InvokeSelectCallback(int32 ID);
    
    UFUNCTION(BlueprintCallable)
    void InvokeDecideCallback(int32 ID);
    
    UFUNCTION(BlueprintImplementableEvent)
    bool HasIOAnimationFinished(bool In);
    
    UFUNCTION(BlueprintImplementableEvent)
    bool HasDecideAnimationFinished(int32 side, int32 idx);
    
    UFUNCTION(BlueprintImplementableEvent)
    void CreatePanel(int32 Num);
    
    UFUNCTION(BlueprintImplementableEvent)
    void ChangeLayoutToDefault();
    
    UFUNCTION(BlueprintImplementableEvent)
    void ChangeLayoutToCenter();
    
};

