#pragma once
#include "CoreMinimal.h"
#include "PolarisTAMMessages.h"
#include "PolarisTAMTalkData.generated.h"

USTRUCT(BlueprintType)
struct POLARIS_API FPolarisTAMTalkData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FPolarisTAMMessages> Normal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FPolarisTAMMessages> BattleStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FPolarisTAMMessages> Win;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FPolarisTAMMessages> Lose;
    
    FPolarisTAMTalkData();
};

