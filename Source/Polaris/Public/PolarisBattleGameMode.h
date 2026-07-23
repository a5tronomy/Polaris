#pragma once
#include "CoreMinimal.h"
#include "PolarisBaseGameMode.h"
#include "Templates/SubclassOf.h"
#include "PolarisBattleGameMode.generated.h"

class APolarisBallManager;
class APolarisBattleEventManager;
class APolarisDramaManager;
class APolarisEffectManager;
class APolarisMobManager;
class APolarisStageManager;

UCLASS(NonTransient)
class POLARIS_API APolarisBattleGameMode : public APolarisBaseGameMode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<APolarisEffectManager> EffectManagerClass;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<APolarisBattleEventManager> BattleEventManagerClass;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<APolarisStageManager> StageManagerClass;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<APolarisDramaManager> DramaManagerClass;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<APolarisMobManager> MobManagerClass;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<APolarisBallManager> BallManagerClass;
    
protected:
    UPROPERTY()
    bool EnableGC;
    
    UPROPERTY()
    int32 SpawnDummyEffectStep;
    
    UPROPERTY()
    int32 SpawnDummyEffectCounter;
    
    UPROPERTY()
    bool IsWaitAndProcessSublevelReady;
    
public:
    APolarisBattleGameMode(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool WaitAndProcessSublevelReady();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnSpawnDummyEffect(int32 category_number, float Numerator, float Denominator);
    
};

