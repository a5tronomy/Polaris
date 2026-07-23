#include "BlackPenMissionItemPanel.h"

FBlackPenMissionItemPanel::FBlackPenMissionItemPanel() {
    this->mission_type = EBlackPenMissionType::Mission_None;
    this->mission_denominator = 0;
    this->mission_numerator = 0;
    this->xp_num = 0;
    this->complete_flag = false;
}

