#include "DebugParseSteamAPI.h"

ADebugParseSteamAPI::ADebugParseSteamAPI(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->_total_review_num = 0;
    this->_total_positive_review_num = 0;
    this->_total_negative_review_num = 0;
    this->_recent_review_num = 0;
    this->_recent_positive_review_num = 0;
    this->_recent_negative_review_num = 0;
    this->_current_player_num = 0;
    this->_average_player_num = 0;
}

void ADebugParseSteamAPI::OnResponseTitleName(const FString& res, const FString& app_id) {
}

void ADebugParseSteamAPI::OnResponseRecentReviews(const FString& res) {
}

void ADebugParseSteamAPI::OnResponseCurrentPlayerNum(const FString& res) {
}

void ADebugParseSteamAPI::OnResponseAllReviews(const FString& res) {
}

FString ADebugParseSteamAPI::GetAllReviewRankMsg(int32 rank) {
    return TEXT("");
}

int32 ADebugParseSteamAPI::CalucTargetRatePositiveNum(int32 current_total, int32 current_positive, float Rate, int32& minus_negative) {
    return 0;
}

int32 ADebugParseSteamAPI::CalucReviewRank(int32 positive_num, int32 all_num) {
    return 0;
}

int32 ADebugParseSteamAPI::CalucRequiredNextPositiveNum(int32 current_total, int32 current_positive, int32& minus_negative) {
    return 0;
}

int32 ADebugParseSteamAPI::CalucDaysUntilRateReached() {
    return 0;
}


