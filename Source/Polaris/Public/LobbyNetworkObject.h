#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "LobbyOtherState.h"
#include "LobbyNetworkObject.generated.h"

UCLASS(BlueprintType)
class POLARIS_API ULobbyNetworkObject : public UObject {
    GENERATED_BODY()
public:
    ULobbyNetworkObject();

    UFUNCTION(BlueprintCallable)
    void SetResponseDebugOwner();
    
    UFUNCTION(BlueprintCallable)
    void SetInterval(int32 Interval);
    
    UFUNCTION(BlueprintCallable)
    void SetCoordinateDebug(bool bCoordinateDebug);
    
    UFUNCTION(BlueprintCallable)
    void QuickChange(int32 slotId);
    
    UFUNCTION(BlueprintCallable)
    bool IsResponseDebugOwner(float& delayMin, float& delayMax);
    
    UFUNCTION(BlueprintCallable)
    void InitializeResume();
    
    UFUNCTION(BlueprintCallable)
    TArray<int64> GetSpawnEnemies();
    
    UFUNCTION(BlueprintCallable)
    FLobbyOtherState GetOtherState(int64 cosmosId);
    
    UFUNCTION(BlueprintPure)
    int32 GetEnemyStateIndex(int64 enemyId) const;
    
    UFUNCTION(BlueprintCallable)
    void GetEnemiesCosmosIdAndNames(TMap<FName, FString>& Result);
    
    UFUNCTION(BlueprintCallable)
    bool GetCoordinateDebug();
    
};

