#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EPolarisEffectVertexClutId.h"
#include "EPolarisTracePartsId.h"
#include "PolarisTraceColorPalletSetting.generated.h"

USTRUCT(BlueprintType)
struct POLARIS_API FPolarisTraceColorPalletSetting {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    EPolarisTracePartsId TracePartsId;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    EPolarisEffectVertexClutId ClutId;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FLinearColor BaseColor;
    
    FPolarisTraceColorPalletSetting();
};

