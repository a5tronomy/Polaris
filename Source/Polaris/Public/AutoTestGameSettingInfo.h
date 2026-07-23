#pragma once
#include "CoreMinimal.h"
#include "AutoTestGameSettingInfo.generated.h"

USTRUCT(BlueprintType)
struct POLARIS_API FAutoTestGameSettingInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool RematchMenu;
    
    FAutoTestGameSettingInfo();
};

