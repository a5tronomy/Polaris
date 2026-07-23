#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "StoreExpiryStruct.generated.h"

USTRUCT(BlueprintType)
struct POLARIS_API FStoreExpiryStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FDateTime Limit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FDateTime issued_at;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 Num;
    
    FStoreExpiryStruct();
};

