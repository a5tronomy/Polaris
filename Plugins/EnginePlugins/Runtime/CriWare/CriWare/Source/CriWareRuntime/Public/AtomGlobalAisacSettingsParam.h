#pragma once
#include "CoreMinimal.h"
#include "AtomGlobalAisacSettingsParam.generated.h"

USTRUCT(BlueprintType)
struct FAtomGlobalAisacSettingsParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString AisacControl;
    
    CRIWARERUNTIME_API FAtomGlobalAisacSettingsParam();
};

