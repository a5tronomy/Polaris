#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "AtomSoundData.generated.h"

class USoundAtomCueSheet;

UCLASS(MinimalAPI)
class AAtomSoundData : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    USoundAtomCueSheet* CueSheet;
    
    AAtomSoundData(const FObjectInitializer& ObjectInitializer);

};

