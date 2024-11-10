#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "EventOnKOParam.generated.h"

USTRUCT(BlueprintType)
struct FEventOnKOParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector HitPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector HitVector;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRotator HitRotator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool IsSpecialKO;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool IsRageArts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 player_id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bPerfectWin;
    
    POLARIS_API FEventOnKOParam();
};

