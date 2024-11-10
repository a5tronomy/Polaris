#pragma once
#include "CoreMinimal.h"
#include "PolarisBaseGameMode.h"
#include "Templates/SubclassOf.h"
#include "PolarisCharacterGameMode.generated.h"

class APolarisDramaManager;
class APolarisEffectManager;
class APolarisStageManager;

UCLASS(NonTransient)
class POLARIS_API APolarisCharacterGameMode : public APolarisBaseGameMode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<APolarisEffectManager> EffectManagerClass;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<APolarisDramaManager> DramaManagerClass;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<APolarisStageManager> StageManagerClass;
    
protected:
    UPROPERTY()
    int32 GCSuspendedFrames;
    
    UPROPERTY()
    bool EnableGC;
    
public:
    APolarisCharacterGameMode(const FObjectInitializer& ObjectInitializer);

};

