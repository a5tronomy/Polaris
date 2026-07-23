#pragma once
#include "CoreMinimal.h"
#include "AtomStringWithComment.h"
#include "AtomDspBusSettingsParam.generated.h"

USTRUCT(BlueprintType)
struct FAtomDspBusSettingsParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FString BusSettingsName;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    TArray<FAtomStringWithComment> Snapshot;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    TArray<FAtomStringWithComment> Bus;
    
    CRIWARERUNTIME_API FAtomDspBusSettingsParam();
};

