#pragma once
#include "CoreMinimal.h"
#include "PolarisUserWidget.h"
#include "PolarisUMGGenericCharacterSelect.generated.h"

class UTexture2D;

UCLASS(EditInlineNew)
class POLARIS_API UPolarisUMGGenericCharacterSelect : public UPolarisUserWidget {
    GENERATED_BODY()
public:
    UPolarisUMGGenericCharacterSelect();

    UFUNCTION(BlueprintImplementableEvent)
    void SetupPanel(int32 no, const UTexture2D* Icon, const FString& Name, bool Locked);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetInputEnable(bool Enable);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SelectPanel(int32 no, bool Force);
    
    UFUNCTION(BlueprintImplementableEvent)
    void RequestDecideAnim(int32 idx);
    
    UFUNCTION(BlueprintImplementableEvent)
    void RequestAnimIO(bool In);
    
    UFUNCTION(BlueprintCallable)
    void InvokeSelectCallback(int32 ID);
    
    UFUNCTION(BlueprintCallable)
    void InvokeDecideCallback(int32 ID);
    
    UFUNCTION(BlueprintImplementableEvent)
    bool HasIOAnimationFinished(bool In);
    
    UFUNCTION(BlueprintImplementableEvent)
    bool HasDecideAnimationFinished(int32 idx);
    
    UFUNCTION(BlueprintImplementableEvent)
    void CreatePanel(int32 Num);
    
};

