#pragma once
#include "CoreMinimal.h"
#include "EPolarisEffectVertexClutId.h"
#include "EPolarisTraceKindId.h"
#include "EPolarisTracePartsId.h"
#include "PolarisTraceInfinitySetting.generated.h"

USTRUCT(BlueprintType)
struct POLARIS_API FPolarisTraceInfinitySetting {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 LIFE;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 Length;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    EPolarisTracePartsId PartsId;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    EPolarisTraceKindId KindId;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    EPolarisEffectVertexClutId ClutId;
    
    FPolarisTraceInfinitySetting();
};

