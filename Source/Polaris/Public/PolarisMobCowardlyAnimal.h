#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EPolarisMobCowardlyAnimalState.h"
#include "EPolarisMobCowardlyAnimalTargetDir.h"
#include "PolarisMobAnimal.h"
#include "PolarisMobCowardlyAnimalAnimationSet.h"
#include "PolarisMobCowardlyAnimal.generated.h"

class UAnimSequenceBase;
class UGFurAsset;
class USkeletalMeshComponent;

UCLASS(Abstract)
class POLARIS_API APolarisMobCowardlyAnimal : public APolarisMobAnimal {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    USkeletalMeshComponent* SkeletalMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftObjectPtr<UGFurAsset> FurAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FPolarisMobCowardlyAnimalAnimationSet AnimationSetA;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FPolarisMobCowardlyAnimalAnimationSet AnimationSetB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FPolarisMobCowardlyAnimalAnimationSet AnimationSetC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FPolarisMobCowardlyAnimalAnimationSet AnimationSetD;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float TargetDirSideAngleMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float TargetDirSideAngleMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EPolarisMobCowardlyAnimalState ChangeState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EPolarisMobCowardlyAnimalTargetDir LastTargetDir;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FTransform DefaultTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float WaitStartPostion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAnimSequenceBase* WaitAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAnimSequenceBase* RunAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAnimSequenceBase* AwayAnimation;
    
    APolarisMobCowardlyAnimal(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintImplementableEvent)
    void SetupFurDebug();
    
    UFUNCTION(BlueprintCallable)
    void SetAwayRotation();
    
    UFUNCTION(BlueprintPure)
    int32 GetTargetPlayerID() const;
    
    UFUNCTION(BlueprintPure)
    EPolarisMobCowardlyAnimalTargetDir GetTargetPlayerDir(int32 player_id) const;
    
    UFUNCTION(BlueprintPure)
    float GetTargetPlayerAngle(int32 player_id) const;
    
};

