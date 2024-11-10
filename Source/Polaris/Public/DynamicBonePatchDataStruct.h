#pragma once
#include "CoreMinimal.h"
#include "DynamicBonePatchDataStruct.generated.h"

USTRUCT(BlueprintType)
struct POLARIS_API FDynamicBonePatchDataStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float RootCollisionScale_Deprecated;
    
    FDynamicBonePatchDataStruct();
};

