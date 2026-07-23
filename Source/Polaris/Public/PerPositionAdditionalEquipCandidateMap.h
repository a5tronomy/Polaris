#pragma once
#include "CoreMinimal.h"
#include "AdditionalEquipCandidateList.h"
#include "PerPositionAdditionalEquipCandidateMap.generated.h"

USTRUCT(BlueprintType)
struct FPerPositionAdditionalEquipCandidateMap {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TMap<int32, FAdditionalEquipCandidateList> PerPositionMap;
    
    POLARIS_API FPerPositionAdditionalEquipCandidateMap();
};

