#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "ELobbyMachineType.h"
#include "EventLobbyStruct.h"
#include "LobbyEnemyInfo.h"
#include "LobbyInput.h"
#include "LobbyNetwork.h"
#include "OwnGhostStruct.h"
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
    DECLARE_DYNAMIC_DELEGATE_OneParam(FLobbyOnFinishSparringGhost, bool, Result);
    DECLARE_DYNAMIC_DELEGATE(FLobbyOnFinishSimpleProfile);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FLobbyOnFinishSetIsLearning, bool, Result);
    DECLARE_DYNAMIC_DELEGATE(FLobbyOnFinishPlayData);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FLobbyOnFinishPlatformCommunicationMSGDialog, bool, Result);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FLobbyOnFinishGhostDialog, bool, Result);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FLobbyOnFinishGetOwnServerGhost, const TArray<FOwnGhostStruct>&, DataArray);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FLobbyOnFinishDeleteGhost, bool, Result, const TArray<FOwnGhostStruct>&, DataArray);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FLobbyOnFinishCheckGvG, bool, Result);
    
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
    int32 _balloonChatSubTemplate;
    
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
    void StartMatchmaking();
    
    UFUNCTION(BlueprintCallable)
    void SparringGhost(ALobbyGameMode::FLobbyOnFinishSparringGhost OnFinishSparringGhost);
    
    UFUNCTION(BlueprintCallable)
    void ShowPlayData(ALobbyGameMode::FLobbyOnFinishPlayData OnFinishPlayData);
    
    UFUNCTION(BlueprintCallable)
    void SetSimpleProfile(int64 cosmosId, int32 submenuType, ALobbyGameMode::FLobbyOnFinishSimpleProfile OnFinishSimpleProfile);
    
    UFUNCTION(BlueprintCallable)
    void SetLoadedSoundLevel();
    
    UFUNCTION(BlueprintCallable)
    void SetKeyboardActive(bool bActive);
    
    UFUNCTION(BlueprintCallable)
    void SetIsLearnigGhost(ALobbyGameMode::FLobbyOnFinishSetIsLearning OnFinishSetIsLearning);
    
    UFUNCTION(BlueprintCallable)
    void SetEnabledSwitchPlayerName(bool Enable);
    
    UFUNCTION(BlueprintCallable)
    void SetEnableAutoResumeMatchmaking(bool Enable);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetBootingFlag(bool isBooting);
    
    UFUNCTION(BlueprintCallable)
    static void SetAutoPlay(bool isAutoplay);
    
    UFUNCTION(BlueprintCallable)
    void SendSeatStatus(bool isSitting, FVector Location, FRotator Rotation);
    
    UFUNCTION(BlueprintCallable)
    void SeatingGroupMatchingStart(const FString& groupId, ELobbyMachineType machine_type);
    
    UFUNCTION(BlueprintCallable)
    void ResumeMatchmaking();
    
    UFUNCTION(BlueprintCallable)
    void RequestTakeSeat(int32 seatId, ALobbyGameMode::FLobbyOnTakeSeat OnTakeSeat);
    
    UFUNCTION(BlueprintCallable)
    void RequestLeaveSeat();
    
    UFUNCTION(BlueprintCallable)
    void RegistUnloadDefaultLevelsFlag(bool need_unload);
    
    UFUNCTION(BlueprintCallable)
    void PlatformCommunicationMSGDialog(ALobbyGameMode::FLobbyOnFinishPlatformCommunicationMSGDialog OnPlatformCommunicationMSGDialog);
    
    UFUNCTION(BlueprintCallable)
    void PauseMatchmaking(bool enableAutoResume, bool enableResetMatchingParam);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void NotifyLobbyLoginProccess();
    
    UFUNCTION(BlueprintPure)
    bool IsUnloadDefaultLobby() const;
    
    UFUNCTION(BlueprintPure)
    bool IsShowProfileSimple() const;
    
    UFUNCTION(BlueprintPure)
    bool IsSeatingMatching() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsProfileScene();
    
    UFUNCTION(BlueprintPure)
    bool IsOpenMatchDialog();
    
    UFUNCTION(BlueprintPure)
    bool IsNeedJudgeBattle();
    
    UFUNCTION(BlueprintPure)
    bool IsInvalidActionCtrl();
    
    UFUNCTION(BlueprintPure)
    bool IsForceChangeMachineType() const;
    
    UFUNCTION(BlueprintPure)
    bool IsFinishedUnlockdialog();
    
    UFUNCTION(BlueprintPure)
    bool IsBlockAnywhereMatching() const;
    
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
    void ImplChangeLobbyHudVisibility(bool Visibility);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ImplAddDummyAvatarPlanting(FVector Location, FRotator Rotation);
    
    UFUNCTION(BlueprintImplementableEvent, BlueprintPure)
    bool ImplAddDummyAvatar100();
    
    UFUNCTION(BlueprintImplementableEvent, BlueprintPure)
    bool ImplAddDummyAvatar10();
    
    UFUNCTION(BlueprintPure)
    bool HasRankMatchingSet();
    
    UFUNCTION(BlueprintPure)
    bool HasQuickMatchingSet();
    
    UFUNCTION(BlueprintPure)
    bool HasEnableEvLounge() const;
    
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
    void GotoOnlineGhostVsGhostBattle(const FString& lobbyMatchId);
    
    UFUNCTION(BlueprintCallable)
    void GotoMyReplay();
    
    UFUNCTION(BlueprintCallable)
    void GotoMainMenu();
    
    UFUNCTION(BlueprintCallable)
    void GotoLobbyMatch(const FString& lobbyMatchId);
    
    UFUNCTION(BlueprintCallable)
    void GotoLeaderboard();
    
    UFUNCTION(BlueprintCallable)
    void GotoJudgeBattle();
    
    UFUNCTION(BlueprintCallable)
    void GotoIronBird(ALobbyNpc* LobbyNpc);
    
    UFUNCTION(BlueprintCallable)
    void GotoGhostVsGhostBattle();
    
    UFUNCTION(BlueprintCallable)
    void GotoGhostSparring();
    
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
    
    UFUNCTION(BlueprintCallable)
    void GetOwnServerGhost(ALobbyGameMode::FLobbyOnFinishGetOwnServerGhost OnFinishGetOwnServerGhost);
    
    UFUNCTION(BlueprintPure)
    int64 GetOwnPlayerId();
    
    UFUNCTION(BlueprintPure)
    FLobbyNetwork GetNetwork();
    
    UFUNCTION(BlueprintCallable)
    int32 GetLobbyIndex();
    
    UFUNCTION(BlueprintCallable)
    bool GetEventTableRow(const FString& RowName, FEventLobbyStruct& OutRow);
    
    UFUNCTION(BlueprintPure)
    ELobbyMachineType GetEventMachinType() const;
    
    UFUNCTION(BlueprintCallable)
    void GetEnemiesInfo(TArray<FLobbyEnemyInfo>& EnemiesInfo);
    
    UFUNCTION(BlueprintPure)
    FString GetEnableEvLoungeName() const;
    
    UFUNCTION(BlueprintCallable)
    static bool GetAutoPlay();
    
    UFUNCTION(BlueprintCallable)
    void DeleteGhost(ALobbyGameMode::FLobbyOnFinishDeleteGhost OnFinishDeleteGhost, int32 ghost_index, bool is_server_ghost);
    
    UFUNCTION(BlueprintCallable)
    void CloseSimpleProfile();
    
    UFUNCTION(BlueprintCallable)
    void CheckOnlineGhostVsGhost(ALobbyGameMode::FLobbyOnFinishCheckGvG OnFinishCheckGvG);
    
    UFUNCTION(BlueprintCallable)
    void CheckGhostVsGhost(int64 cosmosId, const FString& playerName, const FString& onlineId, int32 platformTag, const FString& polarisId, ALobbyGameMode::FLobbyOnFinishCheckGvG OnFinishCheckGvG);
    
    UFUNCTION(BlueprintCallable)
    void CancelMatchmaking();
    
    UFUNCTION(BlueprintCallable)
    void AnywhereMatchingStart();
    
    UFUNCTION(BlueprintCallable)
    void AnywhereMatchingEnd();
    
};

