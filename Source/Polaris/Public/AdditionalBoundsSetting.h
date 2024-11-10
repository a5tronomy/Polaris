#pragma once
#include "CoreMinimal.h"
#include "ItemPositionKey.h"
#include "AdditionalBoundsSetting.generated.h"

USTRUCT(BlueprintType)
struct POLARIS_API FAdditionalBoundsSetting {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FName> AdditinalBoundsTargetBone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FItemPositionKey> AdditinalBoundsTargetPosition;
    
    FAdditionalBoundsSetting();
};

