#pragma once
#include "CoreMinimal.h"
#include "StoreButtonAnimName.generated.h"

USTRUCT(BlueprintType)
struct POLARIS_API FStoreButtonAnimName {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName click;
    
    UPROPERTY(EditAnywhere)
    FName hover;
    
    UPROPERTY(EditAnywhere)
    FName Normal;
    
    UPROPERTY(EditAnywhere)
    FName In;
    
    FStoreButtonAnimName();
};

