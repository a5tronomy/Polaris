#pragma once
#include "CoreMinimal.h"
#include "PolarisUserWidget.h"
#include "PolarisUMGLinkBNIDDialog.generated.h"

class UTexture2D;

UCLASS(EditInlineNew)
class POLARIS_API UPolarisUMGLinkBNIDDialog : public UPolarisUserWidget {
    GENERATED_BODY()
public:
    UPolarisUMGLinkBNIDDialog();

    UFUNCTION(BlueprintImplementableEvent)
    void SetQrCodeImage(const UTexture2D* QRCodeTexture);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetButtonTextId(const FString& textId);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetAnnounceText(const FString& AnnounceText);
    
    UFUNCTION(BlueprintImplementableEvent)
    void Open();
    
    UFUNCTION(BlueprintImplementableEvent)
    bool IsWaitingAnimation();
    
    UFUNCTION(BlueprintCallable)
    void InvokeCancelCallback(int32 ID);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Decide();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Close();
    
};

