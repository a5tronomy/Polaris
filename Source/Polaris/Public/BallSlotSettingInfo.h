#pragma once
#include "CoreMinimal.h"
#include "BallSlotSettingInfo.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct POLARIS_API FBallSlotSettingInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString SlotName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UTexture2D* SlotTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool Locked;
    
    FBallSlotSettingInfo();
};

