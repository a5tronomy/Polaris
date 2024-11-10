#include "ProfileGameInstanceSubsystem.h"

UProfileGameInstanceSubsystem::UProfileGameInstanceSubsystem() {
    this->ProfileController = NULL;
    this->InputActor = NULL;
    this->reportScreenType = ELobbyReportScreenType::Invalid;
    this->ProfileMenu = NULL;
}

void UProfileGameInstanceSubsystem::StopAnimation(APolarisCharacterActor* Actor) {
}

void UProfileGameInstanceSubsystem::SetViewUserId(const FString& user_id) {
}

void UProfileGameInstanceSubsystem::SetViewProfileData(const FPlayerProfileData& profile_data) {
}

void UProfileGameInstanceSubsystem::SetReportScreenType(ELobbyReportScreenType screen_type) {
}

void UProfileGameInstanceSubsystem::SetReportBattleId(const FString& report_battle_id) {
}

void UProfileGameInstanceSubsystem::SetRefProfileMenu(ULobbyUserWidget* Menu) {
}

void UProfileGameInstanceSubsystem::SetProfileController(AProfileController* Controller) {
}

void UProfileGameInstanceSubsystem::SetProfileCloseCallback(UProfileGameInstanceSubsystem::FProfileCloseCallback Callback) {
}

void UProfileGameInstanceSubsystem::SetOwnProfileData(const FPlayerProfileData& profile_data) {
}

void UProfileGameInstanceSubsystem::SetInputManager(ALobbyInputActor* input_actor) {
}

int64 UProfileGameInstanceSubsystem::GetViewUserIdToInt64() {
    return 0;
}

FString UProfileGameInstanceSubsystem::GetViewUserId() const {
    return TEXT("");
}

FPlayerProfileData UProfileGameInstanceSubsystem::GetViewProfileData() {
    return FPlayerProfileData{};
}

ELobbyReportScreenType UProfileGameInstanceSubsystem::GetReportScreenType() {
    return ELobbyReportScreenType::Invalid;
}

FString UProfileGameInstanceSubsystem::GetReportBattleId() {
    return TEXT("");
}

AProfileController* UProfileGameInstanceSubsystem::GetProfileController() {
    return NULL;
}

FPlayerProfileData UProfileGameInstanceSubsystem::GetOwnProfileData() {
    return FPlayerProfileData{};
}

ALobbyInputActor* UProfileGameInstanceSubsystem::GetInputManager() {
    return NULL;
}

void UProfileGameInstanceSubsystem::ExitScene() {
}

void UProfileGameInstanceSubsystem::ExecuteProfileCloseCallback() {
}

void UProfileGameInstanceSubsystem::ClearRefProfileMenu() {
}


