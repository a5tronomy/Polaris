#include "PolarisDebugCustomizeCameraActor.h"

APolarisDebugCustomizeCameraActor::APolarisDebugCustomizeCameraActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CaptureLengthAround = 500.00f;
    this->CaptureLengthUpDown = 400.00f;
    this->IsCaptureProcessing = false;
}


