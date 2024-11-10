#pragma once
#include "CoreMinimal.h"
#include "AtomAisacInfo.generated.h"

USTRUCT(BlueprintType)
struct FAtomAisacInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool DefaultControlFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float DefaultControlValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 ControlId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString ControlName;
    
    CRIWARERUNTIME_API FAtomAisacInfo();
};

