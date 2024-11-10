#include "PhotoDebugExternalParameter.h"

FPhotoDebugExternalParameter::FPhotoDebugExternalParameter() {
    this->bUse = false;
    this->bInitialized = false;
    this->target_angle_max_x = 0.00f;
    this->target_angle_max_z = 0.00f;
    this->free_angle_max_x = 0.00f;
    this->free_angle_max_z = 0.00f;
    this->LensFlare_BokehSize = 0.00f;
    this->LensFlare_Threshold = 0.00f;
}

