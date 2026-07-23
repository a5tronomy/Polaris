#pragma once
#include "CoreMinimal.h"
#include "PolarisUMGSelectValueDialogButtonParameter.generated.h"

USTRUCT(BlueprintType)
struct FPolarisUMGSelectValueDialogButtonParameter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    int32 ID;
    
    UPROPERTY(BlueprintReadWrite)
    FString Text;
    
    UPROPERTY(BlueprintReadWrite)
    bool IsRawTextValues;
    
    UPROPERTY(BlueprintReadWrite)
    TArray<FString> Values;
    
    UPROPERTY(BlueprintReadWrite)
    int32 SelectIndex;
    
    UPROPERTY(BlueprintReadWrite)
    int32 MinSelectIndex;
    
    UPROPERTY(BlueprintReadWrite)
    int32 DefaultSelectIndex;
    
    UPROPERTY(BlueprintReadWrite)
    bool IsFixed;
    
    UPROPERTY(BlueprintReadWrite)
    bool IsAllLaunguageFont;
    
    POLARIS_API FPolarisUMGSelectValueDialogButtonParameter();
};

