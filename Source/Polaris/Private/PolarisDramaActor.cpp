#include "PolarisDramaActor.h"

APolarisDramaActor::APolarisDramaActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->LevelSequencePlayer = NULL;
    this->LevelSequenceActor = NULL;
    this->LevelSequence2 = NULL;
    this->MotHeadFrame = 0.00f;
    this->ResetClothCheckMoveThreshold = 0.00f;
    this->IsStopAtEnd = false;
    this->m_dummy_actor = NULL;
    this->m_camera_actor = NULL;
    this->m_movie_scene = NULL;
}

void APolarisDramaActor::UpdateCameraCut() {
}







