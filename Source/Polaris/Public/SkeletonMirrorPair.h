#pragma once
#include "CoreMinimal.h"
#include "ESkeletonMirrorAxisType.h"
#include "ESkeletonMirrorTargetType.h"
#include "SkeletonMirrorPair.generated.h"

USTRUCT()
struct FSkeletonMirrorPair {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    ESkeletonMirrorTargetType targetType;
    
    UPROPERTY(EditAnywhere)
    ESkeletonMirrorAxisType axisType;
    
    UPROPERTY(EditAnywhere)
    FString BoneNamePair1;
    
    UPROPERTY(EditAnywhere)
    FString BoneNamePair2;
    
    POLARIS_API FSkeletonMirrorPair();
};

