#pragma once
#include "CoreMinimal.h"
#include "EventOnChangeVisiblePersistentLevelParam.generated.h"

USTRUCT(BlueprintType)
struct FEventOnChangeVisiblePersistentLevelParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool Visible;
    
    POLARIS_API FEventOnChangeVisiblePersistentLevelParam();
};

