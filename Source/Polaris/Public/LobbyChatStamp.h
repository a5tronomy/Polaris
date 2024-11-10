#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "LobbyChatStamp.generated.h"

UCLASS(BlueprintType)
class POLARIS_API ULobbyChatStamp : public UObject {
    GENERATED_BODY()
public:
    ULobbyChatStamp();

    UFUNCTION(BlueprintPure)
    bool IsUnlocked(int32 InUnlockStampId) const;
    
};

