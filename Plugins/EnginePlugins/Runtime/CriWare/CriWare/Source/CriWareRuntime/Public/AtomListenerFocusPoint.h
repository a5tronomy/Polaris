#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "AtomListenerFocusPoint.generated.h"

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class CRIWARERUNTIME_API UAtomListenerFocusPoint : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float DistanceFocusLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float DirectionFocusLevel;
    
    UAtomListenerFocusPoint(const FObjectInitializer& ObjectInitializer);

};

