#pragma once
#include "CoreMinimal.h"
#include "GameFramework/PlayerStart.h"
#include "EStoryTwAct.h"
#include "EStoryTwPointType.h"
#include "PolarisTwEnemyStart.generated.h"

class APolarisTwEnemyNavObj;

UCLASS()
class POLARIS_API APolarisTwEnemyStart : public APlayerStart {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EStoryTwPointType PointType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EStoryTwAct Act;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString FormationType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 RepopInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 RepopLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<APolarisTwEnemyNavObj*> NavRoots;
    
    APolarisTwEnemyStart(const FObjectInitializer& ObjectInitializer);

};

