#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "LobbyEnemyInfo.h"
#include "LobbyInput.h"
#include "LobbyNetwork.h"
#include "PolarisCharacterGameMode.h"
#include "Templates/SubclassOf.h"
#include "LobbyGameMode.generated.h"

class AActor;
class ALobbyNpc;
class ALobbySoundManager;
class ULobbyEnemyManager;

UCLASS(NonTransient)
class POLARIS_API ALobbyGameMode : public APolarisCharacterGameMode {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_DELEGATE_OneParam(FOnInviteLobby, bool, isSuccess);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FLobbyOnTakeSeat, bool, isSuccess);
    DECLARE_DYNAMIC_DELEGATE(FLobbyOnFinishSimpleProfile);
    DECLARE_DYNAMIC_DELEGATE(FLobbyOnFinishPlayData);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FLobbyOnFinishPlatformCommunicationMSGDialog, bool, Result);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FLobbyOnFinishGhostDialog, bool, Result);
    
    UPROPERTY(EditAnywhere)
    bool _isLobbyOnly2;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool _isUseNetwork;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool _isBeginPlayFinished;
    
    UPROPERTY(BlueprintReadOnly)
    FLobbyInput _input;
    
    UPROPERTY(BlueprintReadWrite)
    bool _isDebug;
    
    UPROPERTY(BlueprintReadWrite)
    bool _isDebugOffline;
    
    UPROPERTY(BlueprintReadOnly)
    bool _isInputActive;
    
    UPROPERTY(BlueprintReadOnly)
    bool _isDown;
    
    UPROPERTY(BlueprintReadOnly)
    bool _isLeft;
    
    UPROPERTY(BlueprintReadOnly)
    bool _isRight;
    
    UPROPERTY(BlueprintReadOnly)
    bool _isUp;
    
    UPROPERTY(BlueprintReadOnly)
    bool _isFaceBottom;
    
    UPROPERTY(BlueprintReadOnly)
    bool _isFaceLeft;
    
    UPROPERTY(BlueprintReadOnly)
    bool _isFaceRight;
    
    UPROPERTY(BlueprintReadOnly)
    bool _isFaceTop;
    
    UPROPERTY(BlueprintReadOnly)
    bool _isLeftShoulder;
    
    UPROPERTY(BlueprintReadOnly)
    bool _isLeftTrigger;
    
    UPROPERTY(BlueprintReadOnly)
    bool _isRightShoulder;
    
    UPROPERTY(BlueprintReadOnly)
    bool _isRightTrigger;
    
    UPROPERTY(BlueprintReadWrite)
    FString _balloonChat;
    
    UPROPERTY(BlueprintReadWrite)
    FString _balloonChatText;
    
    UPROPERTY(BlueprintReadWrite)
    int32 _balloonChatStamp;
    
    UPROPERTY(BlueprintReadWrite)
    int32 _balloonChatTemplate;
    
    UPROPERTY(BlueprintReadWrite)
    int32 _balloonState;
    
    UPROPERTY(BlueprintReadWrite)
    FName _balloonChatStampName;
    
    UPROPERTY(BlueprintReadWrite)
    bool _isBooting2;
    
    UPROPERTY(BlueprintReadWrite)
    bool _isDisableInput2;
    
    UPROPERTY(BlueprintReadWrite)
    ULobbyEnemyManager* _enemyManager;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<ALobbySoundManager> LobbySoundManagerClass;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    TWeakObjectPtr<ALobbySoundManager> LobbySoundManager;
    
protected:
    UPROPERTY(BlueprintReadOnly)
    TArray<FString> _hideSublevelsForProfile;
    
public:
    ALobbyGameMode(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void WatchStart(int64 cosmosId);
    
    UFUNCTION(BlueprintCallable)
    bool WatchIsWaitReady();
    
    UFUNCTION(BlueprintCallable)
    bool WatchIsReady();
    
    UFUNCTION(BlueprintCallable)
    bool WatchIsAway();
    
    UFUNCTION(BlueprintCallable)
    FName WatchGetError();
    
    UFUNCTION(BlueprintCallable)
    void WatchExit();
    
    UFUNCTION(BlueprintCallable)
    void StartServerMonitoring();
    
    UFUNCTION(BlueprintCallable)
    void StartMatchmaking(int32 Delay);
    
    UFUNCTION(BlueprintCallable)
    void ShowPlayData(ALobbyGameMode::FLobbyOnFinishPlayData OnFinishPlayData);
    
    UFUNCTION(BlueprintCallable)
    void SetSimpleProfile(int64 cosmosId, int32 submenuType, ALobbyGameMode::FLobbyOnFinishSimpleProfile OnFinishSimpleProfile);
    
    UFUNCTION(BlueprintCallable)
    void SetLoadedSoundLevel();
    
    UFUNCTION(BlueprintCallable)
    void SetKeyboardActive(bool bActive);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetBootingFlag(bool isBooting);
    
    UFUNCTION(BlueprintCallable)
    static void SetAutoPlay(bool isAutoplay);
    
    UFUNCTION(BlueprintCallable)
    void SendSeatStatus(bool isSitting, FVector Location, FRotator Rotation);
    
    UFUNCTION(BlueprintCallable)
    void ResumeMatchmaking(int32 Delay);
    
    UFUNCTION(BlueprintCallable)
    void RequestTakeSeat(int32 seatId, ALobbyGameMode::FLobbyOnTakeSeat OnTakeSeat);
    
    UFUNCTION(BlueprintCallable)
    void RequestLeaveSeat();
    
    UFUNCTION(BlueprintCallable)
    void PlatformCommunicationMSGDialog(ALobbyGameMode::FLobbyOnFinishPlatformCommunicationMSGDialog OnPlatformCommunicationMSGDialog);
    
    UFUNCTION(BlueprintCallable)
    void PauseMatchmaking();
    
    UFUNCTION(BlueprintPure)
    bool IsShowProfileSimple() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsProfileScene();
    
    UFUNCTION(BlueprintPure)
    bool IsOpenMatchDialog();
    
    UFUNCTION(BlueprintPure)
    bool IsNeedJudgeBattle();
    
    UFUNCTION(BlueprintPure)
    bool IsInvalidActionCtrl();
    
    UFUNCTION(BlueprintPure)
    bool IsFinishedUnlockdialog();
    
    UFUNCTION(BlueprintPure)
    bool IsAnywhereMatchingSuspend() const;
    
    UFUNCTION(BlueprintPure)
    bool IsAnywhereMatching() const;
    
    UFUNCTION(BlueprintCallable)
    void InviteLobby(const FString& TargetUserPlatformId, ALobbyGameMode::FOnInviteLobby OnInviteLobby);
    
    UFUNCTION(BlueprintImplementableEvent, BlueprintPure)
    bool ImplRemoveDummyAvatars();
    
    UFUNCTION(BlueprintImplementableEvent, BlueprintPure)
    bool ImplPlayerWatchReadyWait(int64 TargetCosmosId);
    
    UFUNCTION(BlueprintImplementableEvent, BlueprintPure)
    bool ImplGetIsOnlyLobby();
    
    UFUNCTION(BlueprintImplementableEvent, BlueprintPure)
    AActor* ImplGetColorDataAssetRespository();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool ImplFuncDebugEmote();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ImplDebugDummyEnemiesPlayEmote(const FName& emoteId);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ImplAddDummyAvatarPlanting(FVector Location, FRotator Rotation);
    
    UFUNCTION(BlueprintImplementableEvent, BlueprintPure)
    bool ImplAddDummyAvatar100();
    
    UFUNCTION(BlueprintImplementableEvent, BlueprintPure)
    bool ImplAddDummyAvatar10();
    
    UFUNCTION(BlueprintCallable)
    void GotoWatchByBattleId(const FString& battleId);
    
    UFUNCTION(BlueprintCallable)
    void GotoWatch2();
    
    UFUNCTION(BlueprintCallable)
    void GotoWatch();
    
    UFUNCTION(BlueprintCallable)
    void GotoTreasureGhostBattle(ALobbyNpc* LobbyNpc);
    
    UFUNCTION(BlueprintCallable)
    void GotoSwing2(int32 infoTranslation, const FString& StrParam1, int32 NumParam1);
    
    UFUNCTION(BlueprintCallable)
    void GotoSwing(int32 infoTranslation);
    
    UFUNCTION(BlueprintCallable)
    void GotoSpecialMatch(const FString& lobbyMatchId);
    
    UFUNCTION(BlueprintCallable)
    void GotoSpecial();
    
    UFUNCTION(BlueprintCallable)
    void GotoRankMatch();
    
    UFUNCTION(BlueprintCallable)
    void GotoQuickMatch();
    
    UFUNCTION(BlueprintCallable)
    void GotoPractice();
    
    UFUNCTION(BlueprintCallable)
    void GotoPlayerProfile();
    
    UFUNCTION(BlueprintCallable)
    void GotoPlayermatchSearch();
    
    UFUNCTION(BlueprintCallable)
    void GotoPlayerMatchRoom();
    
    UFUNCTION(BlueprintCallable)
    void GotoPlayermatchCreate();
    
    UFUNCTION(BlueprintCallable)
    void GotoPlayerCustomize();
    
    UFUNCTION(BlueprintCallable)
    void GotoOptionMenu();
    
    UFUNCTION(BlueprintCallable)
    void GotoOnlineReplay();
    
    UFUNCTION(BlueprintCallable)
    void GotoOnlinePractice(const FString& groupId, bool isLeader);
    
    UFUNCTION(BlueprintCallable)
    void GotoOnlineMenu();
    
    UFUNCTION(BlueprintCallable)
    void GotoMainMenu();
    
    UFUNCTION(BlueprintCallable)
    void GotoLobbyMatch(const FString& lobbyMatchId);
    
    UFUNCTION(BlueprintCallable)
    void GotoLeaderboard();
    
    UFUNCTION(BlueprintCallable)
    void GotoJudgeBattle();
    
    UFUNCTION(BlueprintCallable)
    void GotoGhostBattle();
    
    UFUNCTION(BlueprintCallable)
    void GotoCharacterCustomize();
    
    UFUNCTION(BlueprintCallable)
    void GotoAvatarCustomize();
    
    UFUNCTION(BlueprintCallable)
    void GotoAnotherLobby(const FString& loungeId, const FString& loungeUrl, const FString& loungeName, int32 loungePlatform);
    
    UFUNCTION(BlueprintCallable)
    void GotoAccessibility();
    
    UFUNCTION(BlueprintCallable)
    void GhostDialog(int64 cosmosId, const FString& playerName, bool Save, ALobbyGameMode::FLobbyOnFinishGhostDialog OnFinishGhostDialog);
    
    UFUNCTION(BlueprintCallable)
    void GhostBattleDialog(int64 cosmosId, const FString& playerName, const FString& onlineId, ALobbyGameMode::FLobbyOnFinishGhostDialog OnFinishGhostDialog);
    
    UFUNCTION(BlueprintPure)
    int64 GetOwnPlayerId();
    
    UFUNCTION(BlueprintPure)
    FLobbyNetwork GetNetwork();
    
    UFUNCTION(BlueprintCallable)
    int32 GetLobbyIndex();
    
    UFUNCTION(BlueprintCallable)
    void GetEnemiesInfo(TArray<FLobbyEnemyInfo>& EnemiesInfo);
    
    UFUNCTION(BlueprintCallable)
    static bool GetAutoPlay();
    
    UFUNCTION(BlueprintCallable)
    void CloseSimpleProfile();
    
    UFUNCTION(BlueprintCallable)
    void CancelMatchmaking();
    
    UFUNCTION(BlueprintCallable)
    void AnywhereMatchingSuspend();
    
    UFUNCTION(BlueprintCallable)
    void AnywhereMatchingStart();
    
    UFUNCTION(BlueprintCallable)
    void AnywhereMatchingResume();
    
    UFUNCTION(BlueprintCallable)
    void AnywhereMatchingEnd();
    
};

