#pragma once
#include "CoreMinimal.h"
#include "PolarisMobAnimal.h"
#include "PolarisMobAnimalAlpaca.generated.h"

class UMobAlpacaActionSet;
class UPolarisMobAnimalAlpacaIsShake;

UCLASS()
class POLARIS_API APolarisMobAnimalAlpaca : public APolarisMobAnimal {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UMobAlpacaActionSet* ActionSet;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<UMobAlpacaActionSet*> ActionSetArray;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool HogeHoge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UPolarisMobAnimalAlpacaIsShake* IsShakeChecker;
    
    APolarisMobAnimalAlpaca(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    float GetMasterAlpha();
    
};

