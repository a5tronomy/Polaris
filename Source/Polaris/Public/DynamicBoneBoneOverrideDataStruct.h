#pragma once
#include "CoreMinimal.h"
#include "DynamicBoneBoneOverrideDataStruct.generated.h"

USTRUCT(BlueprintType)
struct POLARIS_API FDynamicBoneBoneOverrideDataStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString BoneName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float RootCollisionScale;
    
    FDynamicBoneBoneOverrideDataStruct();
};

