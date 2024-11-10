#pragma once
#include "CoreMinimal.h"
#include "PolarisUMGMainMenuInitMenuStruct.generated.h"

USTRUCT(BlueprintType)
struct FPolarisUMGMainMenuInitMenuStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 Cursor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 Padding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool is_actual;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool use_red_bar;
    
    POLARIS_API FPolarisUMGMainMenuInitMenuStruct();
};

