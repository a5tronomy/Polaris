#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ProfileCameraController.generated.h"

UCLASS()
class POLARIS_API AProfileCameraController : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Distance;
    
    AProfileCameraController(const FObjectInitializer& ObjectInitializer);

    UFUNCTION()
    void TouchBGMeshes();
    
    UFUNCTION()
    void AdjustBGToCamera();
    
};

