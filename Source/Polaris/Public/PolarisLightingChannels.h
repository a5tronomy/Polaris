#pragma once
#include "CoreMinimal.h"
#include "PolarisLightingChannels.generated.h"

USTRUCT(BlueprintType)
struct FPolarisLightingChannels {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool Channel0;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool Channel1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool Channel2;
    
    POLARIS_API FPolarisLightingChannels();
};

