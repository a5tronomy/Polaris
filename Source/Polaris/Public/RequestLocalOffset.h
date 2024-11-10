#pragma once
#include "CoreMinimal.h"
#include "RequestLocalOffset.generated.h"

class UNiagaraSystem;

USTRUCT()
struct FRequestLocalOffset {
    GENERATED_BODY()
public:
    UPROPERTY()
    UNiagaraSystem* niagara_asset;
    
    POLARIS_API FRequestLocalOffset();
};

