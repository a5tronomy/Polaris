#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "LobbyChatBalloonData.h"
#include "LobbyChatTextBalloon.generated.h"

UCLASS(BlueprintType)
class POLARIS_API ULobbyChatTextBalloon : public UObject {
    GENERATED_BODY()
public:
    ULobbyChatTextBalloon();

    UFUNCTION(BlueprintCallable)
    bool GetChatBalloonData(FLobbyChatBalloonData& OutData);
    
};

