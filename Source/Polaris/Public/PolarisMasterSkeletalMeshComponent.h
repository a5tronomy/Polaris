#pragma once
#include "CoreMinimal.h"
#include "Components/SkeletalMeshComponent.h"
#include "PolarisMasterSkeletalMeshComponent.generated.h"

class UCapsuleComponent;

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class POLARIS_API UPolarisMasterSkeletalMeshComponent : public USkeletalMeshComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Instanced)
    UCapsuleComponent* MyCapsuleComponent;
    
    UPolarisMasterSkeletalMeshComponent(const FObjectInitializer& ObjectInitializer);

};

