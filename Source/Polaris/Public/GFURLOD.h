#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "GFURLOD.generated.h"

USTRUCT(BlueprintType)
struct FGFURLOD {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MinDrawDistance;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float LDMaxDrawDistance;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    float CachedMaxDrawDistance;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 bNeverDistanceCull: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 bAllowCullDistanceVolume: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TEnumAsByte<EDetailMode> DetailMode;
    
    POLARIS_API FGFURLOD();
};

