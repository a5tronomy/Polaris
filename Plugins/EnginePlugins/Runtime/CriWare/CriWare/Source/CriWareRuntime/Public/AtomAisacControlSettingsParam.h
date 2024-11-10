#pragma once
#include "CoreMinimal.h"
#include "AtomAisacControlSettingsParam.generated.h"

USTRUCT(BlueprintType)
struct FAtomAisacControlSettingsParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    int32 ID;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FString Name;
    
    CRIWARERUNTIME_API FAtomAisacControlSettingsParam();
};

