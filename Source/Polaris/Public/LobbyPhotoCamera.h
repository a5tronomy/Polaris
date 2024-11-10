#pragma once
#include "CoreMinimal.h"
#include "Camera/CameraActor.h"
#include "LobbyPhotoCamera.generated.h"

UCLASS()
class POLARIS_API ALobbyPhotoCamera : public ACameraActor {
    GENERATED_BODY()
public:
    ALobbyPhotoCamera(const FObjectInitializer& ObjectInitializer);

};

