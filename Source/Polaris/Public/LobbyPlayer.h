#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Character.h"
#include "ELobbyPlayerStatus.h"
#include "LobbyPlayerSoundAmbientNoiseSetting.h"
#include "LobbyPlayer.generated.h"

class AActor;
class ULobbyAvatarData;
class ULobbyFootstepComponent;
class ULobbyPlayerStatus;

UCLASS()
class POLARIS_API ALobbyPlayer : public ACharacter {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly)
    bool _isOnlyLobby;
    
    UPROPERTY(BlueprintReadWrite)
    int64 _watchTargetCosmosId;
    
    UPROPERTY(BlueprintReadWrite)
    bool _isReserveAnywhereMatching;
    
    UPROPERTY(BlueprintReadOnly)
    bool _isFirstJudgeBattle;
    
public:
    UPROPERTY(BlueprintReadOnly)
    bool _isEnableUpdate;
    
    UPROPERTY(BlueprintReadWrite)
    bool _isReturnFromTreasure;
    
    UPROPERTY(BlueprintReadOnly)
    FString _treasureEventId;
    
    UPROPERTY(BlueprintReadOnly)
    bool _treasureSuccess;
    
private:
    UPROPERTY()
    ULobbyPlayerStatus* _lobbyPlayerStatus;
    
public:
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    ULobbyFootstepComponent* LobbyFootstepComponent;
    
    UPROPERTY(BlueprintReadOnly)
    bool _isResumed;
    
    UPROPERTY(BlueprintReadWrite)
    bool _isDebugPlanting;
    
protected:
    UPROPERTY(BlueprintReadOnly)
    int32 _nearEnemyCount;
    
    UPROPERTY(BlueprintReadOnly)
    int32 _farEnemyCount;
    
    UPROPERTY(BlueprintReadWrite)
    TArray<FLobbyPlayerSoundAmbientNoiseSetting> _ambientNoizeSettings;
    
public:
    UPROPERTY(BlueprintReadOnly)
    TArray<int32> _enemyAndNpcNums;
    
    ALobbyPlayer(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    static void StartAnywhereBattle();
    
protected:
    UFUNCTION(BlueprintCallable)
    void SkipSendLocationAndRotation();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SittingOffAndLeaveSeat();
    
    UFUNCTION(BlueprintCallable)
    void ShortWarp();
    
    UFUNCTION(BlueprintCallable)
    void SetStandingLocationAndRotation();
    
    UFUNCTION(BlueprintCallable)
    void SetSeatId(int32 seatId);
    
    UFUNCTION(BlueprintCallable)
    void SetKeepAnimationSpeed();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetIsGotoBattle();
    
    UFUNCTION(BlueprintCallable)
    void SetGroundSurfaceType(uint8 groundSurfaceType);
    
    UFUNCTION(BlueprintCallable)
    void SetEnableUpdate();
    
    UFUNCTION(BlueprintCallable)
    void SetChatRange(float chatRange);
    
    UFUNCTION(BlueprintCallable)
    void SetActorRotation2(FRotator NewRotation, const FString& Debug);
    
    UFUNCTION(BlueprintCallable)
    void SetActorLocationAndRotation2(FVector NewLocation, FRotator NewRotation, const FString& Debug);
    
    UFUNCTION(BlueprintCallable)
    void SetActorLocation2(FVector NewLocation, const FString& Debug);
    
    UFUNCTION(BlueprintCallable)
    void SendTouch();
    
    UFUNCTION(BlueprintCallable)
    void SendStatusChat();
    
    UFUNCTION(BlueprintCallable)
    void SendStatus(ELobbyPlayerStatus Status);
    
    UFUNCTION(BlueprintCallable)
    void SendJump();
    
    UFUNCTION(BlueprintCallable)
    void SendEmoteStop();
    
    UFUNCTION(BlueprintCallable)
    void SendEmote(const FName& emoteIndex);
    
    UFUNCTION(BlueprintCallable)
    void ResumePreviousStandingLocationAndRotation();
    
    UFUNCTION(BlueprintCallable)
    void Relocation2();
    
    UFUNCTION(BlueprintCallable)
    void Relocation(FVector NewLocation, FRotator NewRotation);
    
    UFUNCTION(BlueprintCallable)
    void PushCustomize(const ULobbyAvatarData* pAvatarData);
    
    UFUNCTION(BlueprintCallable)
    void LongWarp();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ImplSetWarpAnimation();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ImplSetupAmbientNoiseSetting();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ImplSetEmoteRequest(const FName& emoteId);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ImplSetEmoteCancel();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ImplRemoveTarget(AActor* Actor);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ImplPostCancelEmote();
    
    UFUNCTION(BlueprintImplementableEvent, BlueprintPure)
    bool ImplIsPlayingDisableCancelEmote();
    
    UFUNCTION(BlueprintImplementableEvent, BlueprintPure)
    bool ImplIsEmotePlaying();
    
    UFUNCTION(BlueprintImplementableEvent, BlueprintPure)
    float ImplGetTargetEnemyDist();
    
    UFUNCTION(BlueprintImplementableEvent, BlueprintPure)
    FTransform ImplGetFollowCameraTransform();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ImplDebugWarp();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ImplCancelEmote();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ImplAddTarget(AActor* Actor);
    
    UFUNCTION(BlueprintPure)
    FRotator GetStandingRotation() const;
    
    UFUNCTION(BlueprintPure)
    FVector GetStandingLocation() const;
    
    UFUNCTION(BlueprintCallable)
    bool GetSkipFlagForAnywhereSettingDialogAndClear();
    
    UFUNCTION(BlueprintPure)
    int32 GetSeatId();
    
    UFUNCTION(BlueprintPure)
    ELobbyPlayerStatus GetOverheadStatus();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    ULobbyAvatarData* GetAvatarData();
    
    UFUNCTION(BlueprintCallable)
    bool GetAndClearPreviousSitting();
    
    UFUNCTION(BlueprintCallable)
    void ClearStatusChat();
    
    UFUNCTION(BlueprintCallable)
    void ClearStatus();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ClearIsTakeSeatWait();
    
    UFUNCTION(BlueprintCallable)
    void AddNpcLocation(const AActor* pActor);
    
};

