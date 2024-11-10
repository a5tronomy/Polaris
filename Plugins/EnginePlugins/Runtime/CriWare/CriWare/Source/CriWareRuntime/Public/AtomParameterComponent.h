#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "AtomParameterComponent.generated.h"

class UAtom3dRegion;
class UAtomSoundObject;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class CRIWARERUNTIME_API UAtomParameterComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAtomSoundObject* SoundObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAtom3dRegion* Region;
    
    UAtomParameterComponent(const FObjectInitializer& ObjectInitializer);

};

