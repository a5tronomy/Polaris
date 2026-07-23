#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "OwnGhostStruct.generated.h"

USTRUCT(BlueprintType)
struct FOwnGhostStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 _fighter_id;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 _rank;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 _tekken_power;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 _update_at;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 _update_count;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FDateTime _date_time;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 _battle_version;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool _is_server_ghost;
    
    POLARIS_API FOwnGhostStruct();
};

