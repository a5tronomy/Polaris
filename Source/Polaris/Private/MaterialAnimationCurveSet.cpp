#include "MaterialAnimationCurveSet.h"

FMaterialAnimationCurveSet::FMaterialAnimationCurveSet() {
    this->StartCurve = NULL;
    this->LoopCurve = NULL;
    this->OneShotStartCurve = NULL;
    this->OneShotEndCurve = NULL;
    this->DefaultValue = 0.00f;
}

