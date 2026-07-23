#pragma once
#include "CoreMinimal.h"
#include "PolarisUMGPhotoModeWinItemStruct.generated.h"

USTRUCT(BlueprintType)
struct FPolarisUMGPhotoModeWinItemStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 item_id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString title_id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Value;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Min;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Max;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString value_text;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool is_enable;
    
    POLARIS_API FPolarisUMGPhotoModeWinItemStruct();
};

