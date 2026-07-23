#pragma once
#include "CoreMinimal.h"
#include "PolarisUserWidget.h"
#include "PolarisUMGResultChatBubble.generated.h"

class UTexture2D;

UCLASS(EditInlineNew)
class POLARIS_API UPolarisUMGResultChatBubble : public UPolarisUserWidget {
    GENERATED_BODY()
public:
    UPolarisUMGResultChatBubble();

    UFUNCTION(BlueprintImplementableEvent)
    void ShowOwnMessage(int32 MessageId);
    
    UFUNCTION(BlueprintImplementableEvent)
    void ShowOppMessage(int32 MessageId);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetPlayerPlatformIcon(bool bIsOwnSide, UTexture2D* Icon);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetPlayerName(bool bIsOwnSide, const FString& NewName);
    
    UFUNCTION(BlueprintImplementableEvent)
    void HideOwnMessage();
    
    UFUNCTION(BlueprintImplementableEvent)
    void HideOppMessage();
    
};

