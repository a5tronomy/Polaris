#include "StageGimmickDebugInfo.h"

FStageGimmickDebugInfo::FStageGimmickDebugInfo() {
    this->GimmickState = EStageGimmickState::Init;
    this->DestructLevel = 0;
    this->TotalDamage = 0;
    this->destroyprogress = 0;
    this->haseffect = false;
    this->hassound = false;
}

