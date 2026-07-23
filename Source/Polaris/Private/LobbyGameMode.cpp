#include "LobbyGameMode.h"

ALobbyGameMode::ALobbyGameMode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->_isLobbyOnly2 = false;
    this->_isUseNetwork = false;
    this->_isBeginPlayFinished = false;
    this->_isDebug = false;
    this->_isDebugOffline = false;
    this->_isInputActive = false;
    this->_isDown = false;
    this->_isLeft = false;
    this->_isRight = false;
    this->_isUp = false;
    this->_isFaceBottom = false;
    this->_isFaceLeft = false;
    this->_isFaceRight = false;
    this->_isFaceTop = false;
    this->_isLeftShoulder = false;
    this->_isLeftTrigger = false;
    this->_isRightShoulder = false;
    this->_isRightTrigger = false;
    this->_balloonChatStamp = 0;
    this->_balloonChatTemplate = 0;
    this->_balloonChatSubTemplate = 0;
    this->_balloonState = 0;
    this->_isBooting2 = false;
    this->_isDisableInput2 = false;
    this->_enemyManager = NULL;
    this->LobbySoundManagerClass = NULL;
}

void ALobbyGameMode::WatchStart(int64 cosmosId) {
}

bool ALobbyGameMode::WatchIsWaitReady() {
    return false;
}

bool ALobbyGameMode::WatchIsReady() {
    return false;
}

bool ALobbyGameMode::WatchIsAway() {
    return false;
}

FName ALobbyGameMode::WatchGetError() {
    return NAME_None;
}

void ALobbyGameMode::WatchExit() {
}

void ALobbyGameMode::StartServerMonitoring() {
}

void ALobbyGameMode::StartMatchmaking() {
}

void ALobbyGameMode::SparringGhost(ALobbyGameMode::FLobbyOnFinishSparringGhost OnFinishSparringGhost) {
}

void ALobbyGameMode::ShowPlayData(ALobbyGameMode::FLobbyOnFinishPlayData OnFinishPlayData) {
}

void ALobbyGameMode::SetSimpleProfile(int64 cosmosId, int32 submenuType, ALobbyGameMode::FLobbyOnFinishSimpleProfile OnFinishSimpleProfile) {
}

void ALobbyGameMode::SetLoadedSoundLevel() {
}

void ALobbyGameMode::SetKeyboardActive(bool bActive) {
}

void ALobbyGameMode::SetIsLearnigGhost(ALobbyGameMode::FLobbyOnFinishSetIsLearning OnFinishSetIsLearning) {
}

void ALobbyGameMode::SetEnabledSwitchPlayerName(bool Enable) {
}

void ALobbyGameMode::SetEnableAutoResumeMatchmaking(bool Enable) {
}


void ALobbyGameMode::SetAutoPlay(bool isAutoplay) {
}

void ALobbyGameMode::SendSeatStatus(bool isSitting, FVector Location, FRotator Rotation) {
}

void ALobbyGameMode::SeatingGroupMatchingStart(const FString& groupId, ELobbyMachineType machine_type) {
}

void ALobbyGameMode::ResumeMatchmaking() {
}

void ALobbyGameMode::RequestTakeSeat(int32 seatId, ALobbyGameMode::FLobbyOnTakeSeat OnTakeSeat) {
}

void ALobbyGameMode::RequestLeaveSeat() {
}

void ALobbyGameMode::RegistUnloadDefaultLevelsFlag(bool need_unload) {
}

void ALobbyGameMode::PlatformCommunicationMSGDialog(ALobbyGameMode::FLobbyOnFinishPlatformCommunicationMSGDialog OnPlatformCommunicationMSGDialog) {
}

void ALobbyGameMode::PauseMatchmaking(bool enableAutoResume, bool enableResetMatchingParam) {
}

void ALobbyGameMode::NotifyLobbyLoginProccess_Implementation() {
}

bool ALobbyGameMode::IsUnloadDefaultLobby() const {
    return false;
}

bool ALobbyGameMode::IsShowProfileSimple() const {
    return false;
}

bool ALobbyGameMode::IsSeatingMatching() const {
    return false;
}

bool ALobbyGameMode::IsProfileScene() {
    return false;
}

bool ALobbyGameMode::IsOpenMatchDialog() {
    return false;
}

bool ALobbyGameMode::IsNeedJudgeBattle() {
    return false;
}

bool ALobbyGameMode::IsInvalidActionCtrl() {
    return false;
}

bool ALobbyGameMode::IsForceChangeMachineType() const {
    return false;
}

bool ALobbyGameMode::IsFinishedUnlockdialog() {
    return false;
}

bool ALobbyGameMode::IsBlockAnywhereMatching() const {
    return false;
}

bool ALobbyGameMode::IsAnywhereMatchingSuspend() const {
    return false;
}

bool ALobbyGameMode::IsAnywhereMatching() const {
    return false;
}

void ALobbyGameMode::InviteLobby(const FString& TargetUserPlatformId, ALobbyGameMode::FOnInviteLobby OnInviteLobby) {
}











bool ALobbyGameMode::HasRankMatchingSet() {
    return false;
}

bool ALobbyGameMode::HasQuickMatchingSet() {
    return false;
}

bool ALobbyGameMode::HasEnableEvLounge() const {
    return false;
}

void ALobbyGameMode::GotoWatchByBattleId(const FString& battleId) {
}

void ALobbyGameMode::GotoWatch2() {
}

void ALobbyGameMode::GotoWatch() {
}

void ALobbyGameMode::GotoTreasureGhostBattle(ALobbyNpc* LobbyNpc) {
}

void ALobbyGameMode::GotoSwing2(int32 infoTranslation, const FString& StrParam1, int32 NumParam1) {
}

void ALobbyGameMode::GotoSwing(int32 infoTranslation) {
}

void ALobbyGameMode::GotoSpecialMatch(const FString& lobbyMatchId) {
}

void ALobbyGameMode::GotoSpecial() {
}

void ALobbyGameMode::GotoRankMatch() {
}

void ALobbyGameMode::GotoQuickMatch() {
}

void ALobbyGameMode::GotoPractice() {
}

void ALobbyGameMode::GotoPlayerProfile() {
}

void ALobbyGameMode::GotoPlayermatchSearch() {
}

void ALobbyGameMode::GotoPlayerMatchRoom() {
}

void ALobbyGameMode::GotoPlayermatchCreate() {
}

void ALobbyGameMode::GotoPlayerCustomize() {
}

void ALobbyGameMode::GotoOptionMenu() {
}

void ALobbyGameMode::GotoOnlineReplay() {
}

void ALobbyGameMode::GotoOnlinePractice(const FString& groupId, bool isLeader) {
}

void ALobbyGameMode::GotoOnlineMenu() {
}

void ALobbyGameMode::GotoOnlineGhostVsGhostBattle(const FString& lobbyMatchId) {
}

void ALobbyGameMode::GotoMyReplay() {
}

void ALobbyGameMode::GotoMainMenu() {
}

void ALobbyGameMode::GotoLobbyMatch(const FString& lobbyMatchId) {
}

void ALobbyGameMode::GotoLeaderboard() {
}

void ALobbyGameMode::GotoJudgeBattle() {
}

void ALobbyGameMode::GotoIronBird(ALobbyNpc* LobbyNpc) {
}

void ALobbyGameMode::GotoGhostVsGhostBattle() {
}

void ALobbyGameMode::GotoGhostSparring() {
}

void ALobbyGameMode::GotoGhostBattle() {
}

void ALobbyGameMode::GotoCharacterCustomize() {
}

void ALobbyGameMode::GotoAvatarCustomize() {
}

void ALobbyGameMode::GotoAnotherLobby(const FString& loungeId, const FString& loungeUrl, const FString& loungeName, int32 loungePlatform) {
}

void ALobbyGameMode::GotoAccessibility() {
}

void ALobbyGameMode::GhostDialog(int64 cosmosId, const FString& playerName, bool Save, ALobbyGameMode::FLobbyOnFinishGhostDialog OnFinishGhostDialog) {
}

void ALobbyGameMode::GhostBattleDialog(int64 cosmosId, const FString& playerName, const FString& onlineId, ALobbyGameMode::FLobbyOnFinishGhostDialog OnFinishGhostDialog) {
}

void ALobbyGameMode::GetOwnServerGhost(ALobbyGameMode::FLobbyOnFinishGetOwnServerGhost OnFinishGetOwnServerGhost) {
}

int64 ALobbyGameMode::GetOwnPlayerId() {
    return 0;
}

FLobbyNetwork ALobbyGameMode::GetNetwork() {
    return FLobbyNetwork{};
}

int32 ALobbyGameMode::GetLobbyIndex() {
    return 0;
}

bool ALobbyGameMode::GetEventTableRow(const FString& RowName, FEventLobbyStruct& OutRow) {
    return false;
}

ELobbyMachineType ALobbyGameMode::GetEventMachinType() const {
    return ELobbyMachineType::Single;
}

void ALobbyGameMode::GetEnemiesInfo(TArray<FLobbyEnemyInfo>& EnemiesInfo) {
}

FString ALobbyGameMode::GetEnableEvLoungeName() const {
    return TEXT("");
}

bool ALobbyGameMode::GetAutoPlay() {
    return false;
}

void ALobbyGameMode::DeleteGhost(ALobbyGameMode::FLobbyOnFinishDeleteGhost OnFinishDeleteGhost, int32 ghost_index, bool is_server_ghost) {
}

void ALobbyGameMode::CloseSimpleProfile() {
}

void ALobbyGameMode::CheckOnlineGhostVsGhost(ALobbyGameMode::FLobbyOnFinishCheckGvG OnFinishCheckGvG) {
}

void ALobbyGameMode::CheckGhostVsGhost(int64 cosmosId, const FString& playerName, const FString& onlineId, int32 platformTag, const FString& polarisId, ALobbyGameMode::FLobbyOnFinishCheckGvG OnFinishCheckGvG) {
}

void ALobbyGameMode::CancelMatchmaking() {
}

void ALobbyGameMode::AnywhereMatchingStart() {
}

void ALobbyGameMode::AnywhereMatchingEnd() {
}


