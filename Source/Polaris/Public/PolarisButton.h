#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "PolarisButton.generated.h"

UCLASS(EditInlineNew)
class POLARIS_API UPolarisButton : public UUserWidget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_DELEGATE_OneParam(FAction, int32, ID);
    
    UPROPERTY(EditAnywhere)
    FName ButtonName;
    
    UPolarisButton();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Unselect();
    
    UFUNCTION(BlueprintCallable)
    void SetPressReleaseEnable(bool flag);
    
    UFUNCTION(BlueprintCallable)
    void SetEnable(bool flag);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Select();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Release();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Press();
    
    UFUNCTION(BlueprintPure)
    int32 GetId() const;
    
    UFUNCTION(BlueprintPure)
    bool GetEnable() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FrameOut();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FrameIn();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void DecideArrow();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Decide();
    
    UFUNCTION(BlueprintCallable)
    void ConfigurePressRelease(int32 ID, UPolarisButton::FAction onPress, UPolarisButton::FAction OnRelease);
    
    UFUNCTION(BlueprintCallable)
    void ConfigureDecideArrow(int32 ID, UPolarisButton::FAction onDecideArrow);
    
    UFUNCTION(BlueprintCallable)
    void Configure(int32 ID, UPolarisButton::FAction OnDecide, UPolarisButton::FAction OnSelect, UPolarisButton::FAction onUnselect);
    
};

