#pragma once
#include "CoreMinimal.h"
#include "StoreMenuAnimName.generated.h"

USTRUCT(BlueprintType)
struct POLARIS_API FStoreMenuAnimName {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName In;
    
    UPROPERTY(EditAnywhere)
    FName out;
    
    FStoreMenuAnimName();
};

