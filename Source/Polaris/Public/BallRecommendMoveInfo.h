#pragma once
#include "CoreMinimal.h"
#include "BallRecommendMoveInfo.generated.h"

USTRUCT(BlueprintType)
struct POLARIS_API FBallRecommendMoveInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString Command;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool PowerCrash;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool Homing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool Tornado;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool Zone;
    
    FBallRecommendMoveInfo();
};

