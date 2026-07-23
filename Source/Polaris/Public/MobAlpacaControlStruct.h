#pragma once
#include "CoreMinimal.h"
#include "MobAlpacaControlStruct.generated.h"

USTRUCT(BlueprintType)
struct FMobAlpacaControlStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bUseDebugBox;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bUseDebugBox2;
    
    POLARIS_API FMobAlpacaControlStruct();
};

