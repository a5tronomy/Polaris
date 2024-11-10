#pragma once
#include "CoreMinimal.h"
#include "BallRecommendMoveInfo.h"
#include "BallRecommendInfo.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct POLARIS_API FBallRecommendInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UTexture2D* CharacterFaceTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UTexture2D* CharacterNameTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString Caption;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FBallRecommendMoveInfo> Moves;
    
    FBallRecommendInfo();
};

