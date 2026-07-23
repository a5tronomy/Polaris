#pragma once
#include "CoreMinimal.h"
#include "PolarisBaseGameMode.h"
#include "Templates/SubclassOf.h"
#include "PolarisMainMenuGameMode.generated.h"

class APolarisEffectManager;

UCLASS(NonTransient)
class POLARIS_API APolarisMainMenuGameMode : public APolarisBaseGameMode {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<APolarisEffectManager> EffectManagerClass;
    
public:
    APolarisMainMenuGameMode(const FObjectInitializer& ObjectInitializer);

};

