#include "BlackPenData.h"

UBlackPenData::UBlackPenData() {
    this->_isLoadDataTable = false;
}

void UBlackPenData::DownloadRewardData(UBlackPenData::FBlackPenDownloadRewardData OnDownloadRewardData) {
}

void UBlackPenData::DownloadDetailData(UBlackPenData::FBlackPenDownloadDetailData OnDownloadDetailData) {
}

void UBlackPenData::DownloadBasicData(UBlackPenData::FBlackPenDownloadBasicData OnDownloadBasicData) {
}

UBlackPenData* UBlackPenData::BlackPenData() {
    return NULL;
}


