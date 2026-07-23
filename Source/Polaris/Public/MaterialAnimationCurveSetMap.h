#pragma once
#include "CoreMinimal.h"
#include "MaterialAnimationCurveSet.h"
#include "MaterialAnimationCurveSetMap.generated.h"

USTRUCT(BlueprintType)
struct POLARIS_API FMaterialAnimationCurveSetMap {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<FString, FMaterialAnimationCurveSet> CurveSetMap;
    
    FMaterialAnimationCurveSetMap();
};

