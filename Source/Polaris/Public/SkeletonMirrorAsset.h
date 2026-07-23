#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SkeletonMirrorPairs.h"
#include "SkeletonMirrorSpine.h"
#include "SkeletonMirrorAsset.generated.h"

UCLASS()
class POLARIS_API USkeletonMirrorAsset : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<FSkeletonMirrorSpine> spines;
    
    UPROPERTY(EditAnywhere)
    TArray<FSkeletonMirrorPairs> pairs;
    
    USkeletonMirrorAsset();

};

