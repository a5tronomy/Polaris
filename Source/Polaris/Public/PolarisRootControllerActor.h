#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PolarisRootControllerParams.h"
#include "PolarisStageGimmickBaseActor.h"
#include "PolarisRootControllerActor.generated.h"

class USkeletalMeshComponent;

UCLASS()
class POLARIS_API APolarisRootControllerActor : public APolarisStageGimmickBaseActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Instanced, VisibleAnywhere)
    USkeletalMeshComponent* FarRootComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FPolarisRootControllerParams Params;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector ProgMoveStartPos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector ProgMoveEndPos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ProgMoveEndTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bReversePlay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bPlay;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    float ProgMoveTime;
    
    APolarisRootControllerActor(const FObjectInitializer& ObjectInitializer);

};

