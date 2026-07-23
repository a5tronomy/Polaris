#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "StoreSequencerDataStruct.generated.h"

class ULevelSequence;
class UWorld;

USTRUCT(BlueprintType)
struct POLARIS_API FStoreSequencerDataStruct : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftObjectPtr<UWorld> _level;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftObjectPtr<ULevelSequence> _sequence;
    
    FStoreSequencerDataStruct();
};

