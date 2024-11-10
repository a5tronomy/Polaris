#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "LobbyChatAddressInfo.h"
#include "LobbyChatTextSender.generated.h"

UCLASS(BlueprintType)
class POLARIS_API ULobbyChatTextSender : public UObject {
    GENERATED_BODY()
public:
    ULobbyChatTextSender();

    UFUNCTION(BlueprintCallable)
    bool SendText(const FLobbyChatAddressInfo& InSendTo, const FString& InMessage, FName InStampName, int32 InTemplateId);
    
    UFUNCTION(BlueprintPure)
    bool CanSend(float& OutParcent) const;
    
};

