#include "DynamicBoneParam.h"

FDynamicBoneParam::FDynamicBoneParam() {
    this->airResistance = 0.00f;
    this->MinAngleLimitVertical = 0.00f;
    this->MaxAngleLimitVertical = 0.00f;
    this->MinAngleLimitHorizon = 0.00f;
    this->MaxAngleLimitHorizon = 0.00f;
    this->GoalStrength = 0.00f;
    this->gravityScale = 0.00f;
    this->fakeFrictionRateBust = 0.00f;
    this->goalStrengthCoefBust = 0.00f;
    this->horizontalVelocityLimit = 0.00f;
    this->horizontalProneLimitMin = 0.00f;
    this->horizontalProneLimitMax = 0.00f;
    this->verticalProneLimitMin = 0.00f;
    this->verticalProneLimitMax = 0.00f;
}

