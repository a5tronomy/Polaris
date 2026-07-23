#pragma once
#include "CoreMinimal.h"
#include "ResourceData.generated.h"

USTRUCT(BlueprintType)
struct FResourceData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 resourceId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString ResourceName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString uniqueId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 fileSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString createdAt;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString updatedAt;
    
    POLARIS_API FResourceData();
};

