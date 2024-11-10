#include "PhotoModeActor.h"

APhotoModeActor::APhotoModeActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->postProcessColor_Copy = 0;
    this->PlayerDissable_Distance = 0.00f;
    this->IsColorFilter = false;
    this->IsVinetteFilter = false;
    this->IsChromaticAberrationFilter = false;
    this->VinetteIntensity = 0.00f;
    this->AbrrationIntensity = 0.00f;
    this->primePostProcess = NULL;
    this->m_photoFeatureCollider = NULL;
    this->IsActive = false;
    this->AutoFocusDistance1P = 0.00f;
    this->AutoFocusDistance2P = 0.00f;
    this->AutoFocus1P = false;
    this->AutoFocus2P = false;
    this->CameraSpeed = 0.00f;
    this->IsAllowEffect = false;
    this->IsUseTextID = false;
    this->CameraType = 0;
    this->IsLookAtPlayer = false;
    this->LookAtPlayerId = 0;
    this->FocalDistanceResult = 0.00f;
}


void APhotoModeActor::StartCharacterActor_Implementation() {
}



void APhotoModeActor::SetRoll_Implementation(float Roll) {
}

void APhotoModeActor::SetPlayerCameraFOV_Implementation(float lensfov) {
}


void APhotoModeActor::SetLookAt_Implementation(float FocalDistance, FTransform CineCameraTransform) {
}




float APhotoModeActor::SetDoFToUI_Implementation(float Val) {
    return 0.0f;
}










void APhotoModeActor::ParameterReset_Implementation(int32 DoF) {
}


void APhotoModeActor::MakePolarisPhotoWallNative_Implementation() {
}






void APhotoModeActor::GetMIDParameter_Implementation(int32 N, float& Val) {
}





void APhotoModeActor::EndCharacterActor_Implementation() {
}


void APhotoModeActor::DrawLookAtPoint_Implementation(FVector Pos, int32 color_type) {
}




