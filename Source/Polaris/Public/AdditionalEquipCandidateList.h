#pragma once
#include "CoreMinimal.h"
#include "AdditionalEquipCandidateList.generated.h"

USTRUCT()
struct FAdditionalEquipCandidateList {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<FString> List;
    
    POLARIS_API FAdditionalEquipCandidateList();
};

