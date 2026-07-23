#pragma once
#include "CoreMinimal.h"
#include "HiddenCommonParams.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FHiddenCommonParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FName> HiddenActorsTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<AActor*> HiddenActors;
    
    UPROPERTY(EditAnywhere)
    bool HiddenFlag;
    
    UPROPERTY(EditAnywhere)
    bool CollisionFlag;
    
    UPROPERTY(EditAnywhere)
    bool DestroyFlag;
    
    UPROPERTY()
    TArray<TWeakObjectPtr<AActor>> ActorArray;
    
    POLARIS_API FHiddenCommonParams();
};

