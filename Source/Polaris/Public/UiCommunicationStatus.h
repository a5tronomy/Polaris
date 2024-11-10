#pragma once
#include "CoreMinimal.h"
#include "UiCommunicationStatus.generated.h"

USTRUCT(BlueprintType)
struct FUiCommunicationStatus {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 rtt;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 Delay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 rollback;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool is_wired;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 antenna;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool own_proc_drop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool opponent_proc_drop;
    
    POLARIS_API FUiCommunicationStatus();
};

