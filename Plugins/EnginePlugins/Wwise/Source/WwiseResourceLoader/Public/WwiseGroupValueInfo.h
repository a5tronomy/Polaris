#pragma once
#include "CoreMinimal.h"
#include "WwiseObjectInfo.h"
#include "WwiseGroupValueInfo.generated.h"

USTRUCT(BlueprintType)
struct WWISERESOURCELOADER_API FWwiseGroupValueInfo : public FWwiseObjectInfo {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint32 GroupShortId;
    
    FWwiseGroupValueInfo();
};

