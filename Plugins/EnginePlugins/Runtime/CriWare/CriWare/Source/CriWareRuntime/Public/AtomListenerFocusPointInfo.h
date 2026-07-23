#pragma once
#include "CoreMinimal.h"
#include "AtomListenerFocusPointInfo.generated.h"

class AActor;
class USceneComponent;

USTRUCT(BlueprintType)
struct CRIWARERUNTIME_API FAtomListenerFocusPointInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TWeakObjectPtr<AActor> TargetActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export)
    TWeakObjectPtr<USceneComponent> TargetComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float DistanceLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float DirectionLevel;
    
    FAtomListenerFocusPointInfo();
};

