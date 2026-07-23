#pragma once
#include "CoreMinimal.h"
#include "PolarisUserWidget.h"
#include "DebugBnidWidget.generated.h"

class UImage;
class UTextBlock;
class UTexture2D;

UCLASS(EditInlineNew)
class POLARIS_API UDebugBnidWidget : public UPolarisUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Instanced)
    UImage* QrCodeImage;
    
    UPROPERTY(Instanced)
    UTextBlock* AnnounceTextBlock;
    
public:
    UDebugBnidWidget();

    UFUNCTION(BlueprintCallable)
    void SetQrCodeImage(UTexture2D* QRCodeTexture);
    
    UFUNCTION(BlueprintCallable)
    void SetAnnounceText(const FString& newText);
    
};

