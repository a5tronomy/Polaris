#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "PhotoFeatureColldier.generated.h"

UCLASS()
class POLARIS_API APhotoFeatureColldier : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    FVector Velocity;
    
    UPROPERTY(BlueprintReadWrite)
    FRotator Rotattion;
    
    UPROPERTY(BlueprintReadWrite)
    FVector FixedVelocity;
    
    UPROPERTY(BlueprintReadWrite)
    bool IsThisFrameHit;
    
    UPROPERTY(BlueprintReadWrite)
    FVector ReservedVector;
    
    UPROPERTY(BlueprintReadWrite)
    bool IsFreeCamera;
    
    UPROPERTY(BlueprintReadWrite)
    FVector NewTargetPos;
    
    APhotoFeatureColldier(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void WarpReserveThisFrame(FVector Vector);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void WarpCollider(FVector Vector);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetPositionDelta(FVector Vector);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetMovementTargetCamera();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetMovement();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetCollisionVSObject();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetCollisionVSGround();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetCollisionVSDefault();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void MyDebugString(FString& Str);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsCameraOutOfStage(FVector camera_position);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    float GetCollisionRadius();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FVector GetCharacterPosition(int32 PlayerId);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FVector CalcSlideWhenSweep(FVector position_delta, FVector sweep_result_normal);
    
};

