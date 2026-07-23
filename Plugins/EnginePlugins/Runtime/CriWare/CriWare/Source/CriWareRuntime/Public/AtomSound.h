#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "AtomSound.generated.h"

class UAtomComponent;

UCLASS()
class CRIWARERUNTIME_API AAtomSound : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UAtomComponent* AtomComponent;
    
    AAtomSound(const FObjectInitializer& ObjectInitializer);

};

