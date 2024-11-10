#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "EStageCameraQuakeType.h"
#include "AnimNotify_PolarisStageStartQuakeCamera.generated.h"

UCLASS(CollapseCategories)
class POLARIS_API UAnimNotify_PolarisStageStartQuakeCamera : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EStageCameraQuakeType QuakeType;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 QuakeFrame;
    
    UAnimNotify_PolarisStageStartQuakeCamera();

};

