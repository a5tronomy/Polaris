#pragma once
#include "CoreMinimal.h"
#include "ESkeletonMirrorAxisType.h"
#include "ESkeletonMirrorTargetType.h"
#include "SkeletonMirrorSpine.generated.h"

USTRUCT(BlueprintType)
struct FSkeletonMirrorSpine {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    ESkeletonMirrorTargetType targetType;
    
    UPROPERTY(EditAnywhere)
    ESkeletonMirrorAxisType axisType;
    
    UPROPERTY(EditAnywhere)
    FString BoneName;
    
    POLARIS_API FSkeletonMirrorSpine();
};

