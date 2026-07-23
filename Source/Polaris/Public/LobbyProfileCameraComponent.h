#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Camera/CameraComponent.h"
#include "LobbyProfileCameraComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ULobbyProfileCameraComponent : public UCameraComponent {
    GENERATED_BODY()
public:
    ULobbyProfileCameraComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetAdditiveOffset(const FTransform& Transform, float FOV);
    
};

