#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EventLobbyStruct.generated.h"

class UWorld;

USTRUCT(BlueprintType)
struct FEventLobbyStruct : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<TSoftObjectPtr<UWorld>> _load_levels;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool _enableUnloadDefaultLevel;
    
    POLARIS_API FEventLobbyStruct();
};

