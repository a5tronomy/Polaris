#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ELobbyPlayerStatus.h"
#include "LobbyCoordinate.h"
#include "LobbyLoungeEnemy.h"
#include "LobbyOtherState.h"
#include "LobbyEnemy.generated.h"

class ALobbyEnemy;
class ULobbyFootstepComponent;

UCLASS()
class POLARIS_API ALobbyEnemy : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite)
    bool _isRival;
    
    UPROPERTY(BlueprintReadWrite)
    bool _isFriend;
    
    UPROPERTY(BlueprintReadWrite)
    bool _isFollow;
    
    UPROPERTY(BlueprintReadOnly)
    int32 _rank;
    
    UPROPERTY(BlueprintReadOnly)
    int32 _platform012;
    
public:
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    ULobbyFootstepComponent* LobbyFootstepComponent;
    
    UPROPERTY(BlueprintReadWrite)
    int32 _currentMilliSeconds;
    
    UPROPERTY(BlueprintReadWrite)
    int32 _playingEmoteMilliSeconds;
    
    UPROPERTY(BlueprintReadOnly)
    int32 _charaId;
    
    UPROPERTY(BlueprintReadOnly)
    int32 _rankId;
    
    UPROPERTY(BlueprintReadOnly)
    TArray<FString> _displayNames2;
    
    UPROPERTY(BlueprintReadWrite)
    int64 _cosmosId3;
    
    ALobbyEnemy(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UpdateOtherState(ELobbyPlayerStatus& playerStatus, int32& shortStatus, FLobbyOtherState& otherState);
    
    UFUNCTION(BlueprintCallable)
    void UpdateEmote();
    
    UFUNCTION(BlueprintCallable)
    void SetCosmosId(const FName& cosmosId, int64 cosmosId2);
    
    UFUNCTION(BlueprintCallable)
    static void LobbyGetLoungeEnemies(TMap<int64, FLobbyLoungeEnemy>& loungeEnemies);
    
    UFUNCTION(BlueprintCallable)
    static void LobbyGetEnemies(TMap<int64, ALobbyEnemy*>& enemies);
    
    UFUNCTION(BlueprintCallable)
    static ALobbyEnemy* LobbyFindEnemy(int64 cosmosId);
    
    UFUNCTION(BlueprintCallable)
    static bool LobbyEnemyIsWatchTarget(int64 cosmosId);
    
    UFUNCTION(BlueprintPure)
    static void LobbyEnemyGetDisplayNames(int64 cosmosId, TArray<FString>& displayNames);
    
    UFUNCTION(BlueprintCallable)
    void LeaveSeatWarp();
    
    UFUNCTION(BlueprintCallable)
    bool IsReadyEmote(FLobbyCoordinate& coordinate);
    
protected:
    UFUNCTION(BlueprintPure)
    bool IsCloseLevel();
    
public:
    UFUNCTION(BlueprintCallable)
    bool IsCancelPlayingEmote(bool& isNextEmote, FLobbyCoordinate& coordinate);
    
    UFUNCTION(BlueprintCallable)
    bool InterpolationMove();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ImplUpdateStatusIcon();
    
public:
    UFUNCTION(BlueprintCallable)
    int32 GetSeatId();
    
    UFUNCTION(BlueprintCallable)
    void DirectMove();
    
};

