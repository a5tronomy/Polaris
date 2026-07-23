#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ESpeakerType.h"
#include "AtomOutputPortDataTable.generated.h"

USTRUCT(BlueprintType)
struct FAtomOutputPortDataTable : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FString OutputPortName;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 AsrRackID;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    ESpeakerType SpeakerType;
    
    CRIWARERUNTIME_API FAtomOutputPortDataTable();
};

