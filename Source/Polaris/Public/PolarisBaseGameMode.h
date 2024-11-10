#pragma once
#include "CoreMinimal.h"
#include "GameFramework/GameMode.h"
#include "EGameModeType.h"
#include "PolarisBaseGameMode.generated.h"

class UPolarisBattleInterfaceComponent;
class UPolarisCharacterInterfaceComponent;

UCLASS(NonTransient)
class POLARIS_API APolarisBaseGameMode : public AGameMode {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnExitPause);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnEnterPause);
    
    UPROPERTY(BlueprintAssignable)
    FOnEnterPause OnEnterPauseDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FOnExitPause OnExitPauseDelegate;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UPolarisBattleInterfaceComponent* BattleInterfaceComponent;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UPolarisCharacterInterfaceComponent* CharacterInterfaceComponent;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EGameModeType GameModeType;
    
    APolarisBaseGameMode(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintPure)
    bool IsPause() const;
    
    UFUNCTION(BlueprintPure)
    bool IsDebugPauseStep() const;
    
    UFUNCTION(BlueprintPure)
    bool IsDebugPauseEngineStep() const;
    
    UFUNCTION(BlueprintPure)
    float GetGameSpeedRaw() const;
    
};

