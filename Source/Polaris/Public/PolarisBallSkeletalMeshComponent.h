#pragma once
#include "CoreMinimal.h"
#include "Components/SkeletalMeshComponent.h"
#include "PolarisBallSkeletalMeshComponent.generated.h"

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class POLARIS_API UPolarisBallSkeletalMeshComponent : public USkeletalMeshComponent {
    GENERATED_BODY()
public:
    UPolarisBallSkeletalMeshComponent(const FObjectInitializer& ObjectInitializer);

};

