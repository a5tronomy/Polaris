#pragma once
#include "CoreMinimal.h"
#include "PolarisUMGPlayDataStageItemStruct.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FPolarisUMGPlayDataStageItemStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString text_id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 Rate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UTexture2D* Icon;
    
    POLARIS_API FPolarisUMGPlayDataStageItemStruct();
};

