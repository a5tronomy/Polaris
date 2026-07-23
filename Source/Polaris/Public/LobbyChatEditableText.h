#pragma once
#include "CoreMinimal.h"
#include "Input/Events.h"
#include "Layout/Geometry.h"
#include "Input/Events.h"
#include "OnLobbyChatEditableTextFocusDelegate.h"
#include "PolarisEditableText.h"
#include "LobbyChatEditableText.generated.h"

UCLASS()
class POLARIS_API ULobbyChatEditableText : public UPolarisEditableText {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnEditableTextKeyDownEvent, const FGeometry&, MyGeometry, const FKeyEvent&, InKeyEvent);
    
    UPROPERTY(BlueprintAssignable)
    FOnEditableTextKeyDownEvent OnKeyDown;
    
    UPROPERTY(BlueprintAssignable)
    FOnLobbyChatEditableTextFocus OnTextFocusCallback;
    
    UPROPERTY(BlueprintAssignable)
    FOnLobbyChatEditableTextFocus OnTextFocusLostCallback;
    
    ULobbyChatEditableText();

    UFUNCTION(BlueprintCallable)
    void ShowVirtualKeyboard();
    
    UFUNCTION(BlueprintCallable)
    void OnFocusTextInput(const FFocusEvent& InFocusEvent);
    
    UFUNCTION(BlueprintCallable)
    void OnFocusLostTextInput(const FFocusEvent& InFocusEvent);
    
};

