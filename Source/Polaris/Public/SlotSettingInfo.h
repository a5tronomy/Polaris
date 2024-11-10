#pragma once
#include "CoreMinimal.h"
#include "SlotSettingInfo.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct POLARIS_API FSlotSettingInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FText SlotName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UTexture2D* SlotTexture;
    
    FSlotSettingInfo();
};

