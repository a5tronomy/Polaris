#include "LobbyGameInstanceSubsystem.h"

ULobbyGameInstanceSubsystem::ULobbyGameInstanceSubsystem() {
    this->_levelState = 0;
    this->_isSitting = false;
    this->_seatId = -1;
    this->_seatMathicngId = -1;
    this->_bReturnToLobby = false;
    this->_bGotoCustomize = false;
    this->_bGoToAnother = false;
    this->_isFemale = false;
    this->_isRandomFemale = true;
    this->_isArcadeController = false;
    this->_dummyCosmosAddress = TEXT("localhost");
    this->_isDisableKamuiInput = false;
    this->_isUseNetwork = false;
    this->_isFixLobby = false;
    this->_isDebugLength = false;
    this->_isDebugForceFogOff = false;
    this->_bEmoteOffset = false;
    this->_isAlwaysMouseCursor = false;
    this->_isAlwaysMouseCamera = false;
    this->_isDisplayPolarisId = false;
    this->_isEnemyDirectMove = false;
    this->_isCrossPlatform = true;
    this->_platform = 0;
    this->_interval = 100;
    this->_debugUiBlankSelectTest = false;
    this->_networkObject = NULL;
    this->_watch = NULL;
    this->_lobbyEmote = NULL;
    this->_blocks = NULL;
    this->_friends = NULL;
    this->_information = NULL;
    this->_machines = NULL;
    this->_playerStatus = NULL;
    this->_inventory = NULL;
    this->_parentalcontrol = NULL;
    this->MatchingAnywhere = NULL;
    this->_lobbyNetworkSelect = NULL;
    this->_blackPen = NULL;
    this->_enemyInstance = NULL;
    this->_stamp = NULL;
    this->_templateMessage = NULL;
    this->_npcTreasure = NULL;
    this->_treasureEvent = NULL;
    this->_buddyNpc = NULL;
    this->LastEnteredPasscode = 0;
    this->_isMatchmakingStarted = false;
    this->_isMatchmakingPaused = false;
    this->_canAutoResumeMatchmaking = false;
    this->isReturnBuddyMenu = false;
    this->is_wait_comment_board_response = false;
    this->is_deploying_comment_board = false;
    this->is_active_comment_board = false;
    this->is_active_comment_board_template = false;
}

void ULobbyGameInstanceSubsystem::WarpToErrorDialogFinish() {
}

void ULobbyGameInstanceSubsystem::StopAnimation(APolarisCharacterActor* Actor) {
}

void ULobbyGameInstanceSubsystem::StartLoadCharacter(int32 fighter_id, FTransform& Transform) {
}

void ULobbyGameInstanceSubsystem::StartDeleteCharacter() {
}

void ULobbyGameInstanceSubsystem::SetWindowMangaer(UObject* Object) {
}

void ULobbyGameInstanceSubsystem::SetSpawnLobbyPlayerCharacter(AActor* Actor) {
}

void ULobbyGameInstanceSubsystem::SetReturnToLobby(int32 levelState) {
}

void ULobbyGameInstanceSubsystem::SetResumeLocationAndRotation(const FVector& Location, const FRotator& Rotation) {
}

void ULobbyGameInstanceSubsystem::SetIsLobbyMenuOpen(bool IsOpen) {
}

void ULobbyGameInstanceSubsystem::SetIsCommentBoardTemplate(bool is_active) {
}

void ULobbyGameInstanceSubsystem::SetIsActiveCommentBoard(bool is_active) {
}

void ULobbyGameInstanceSubsystem::SetGoToAnother(const AActor* Pawn) {
}

void ULobbyGameInstanceSubsystem::SetDeployCommentBoardInfo(const FString& Message, int32 template_id, int32 template_sub_id, FName stamp_name) {
}

void ULobbyGameInstanceSubsystem::ResetPushedCamera() {
}

void ULobbyGameInstanceSubsystem::Reset() {
}

void ULobbyGameInstanceSubsystem::PushCamera(const FRotator& Rotator, bool isLevelEnd) {
}

void ULobbyGameInstanceSubsystem::PrepareGotoAnotherLevel2(const AActor* Pawn, const ULobbyAvatarData* customize, bool isSitting, int32 seatId) {
}

void ULobbyGameInstanceSubsystem::PrepareGotoAnotherLevel(const AActor* Pawn, const ULobbyAvatarData* customize, bool isSitting) {
}

void ULobbyGameInstanceSubsystem::PopCamera(FRotator& Rotator, bool& Success) {
}

void ULobbyGameInstanceSubsystem::PlayAnimationByStatus(EPolarisCharacterAnimStatus Status) {
}

void ULobbyGameInstanceSubsystem::OpenWarpToErrorDialog(ULobbyGameInstanceSubsystem::FWarpErrorDelegate OnDialogFinish) {
}

bool ULobbyGameInstanceSubsystem::IsLoadingCharacter() {
    return false;
}

bool ULobbyGameInstanceSubsystem::IsInitializedNetwork() const {
    return false;
}

UObject* ULobbyGameInstanceSubsystem::GetWindowMangaer() const {
    return NULL;
}

FText ULobbyGameInstanceSubsystem::GetTekkenPowerString() {
    return FText::GetEmpty();
}

FText ULobbyGameInstanceSubsystem::GetPlayerName() {
    return FText::GetEmpty();
}

bool ULobbyGameInstanceSubsystem::GetIsCommentBoardTemplate() const {
    return false;
}

bool ULobbyGameInstanceSubsystem::GetIsActiveCommentBoard() const {
    return false;
}

void ULobbyGameInstanceSubsystem::GetDeployCommentBoardInfo(FString& Message, int32& template_id, int32& template_sub_id, FName& stamp_name) {
}

void ULobbyGameInstanceSubsystem::GetAndClearWarpTargetLounge(FString& outLoungeId, FString& outLoungeUrl, FString& outLoungeName, int32& outLoungePlatform) {
}

bool ULobbyGameInstanceSubsystem::GetAndClearLoungeRelocation() {
    return false;
}

FTransform ULobbyGameInstanceSubsystem::GetAndClearLoungeBeginTransform() {
    return FTransform{};
}

void ULobbyGameInstanceSubsystem::ForceCloseReport() {
}


