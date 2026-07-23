#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EPolarisLightDirection.h"
#include "PolarisCharacterLightBase.generated.h"

UCLASS()
class POLARIS_API APolarisCharacterLightBase : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EPolarisLightDirection OverrideLightType;
    
    UPROPERTY(BlueprintReadOnly)
    EPolarisLightDirection OverrideLightTypeCurrent;
    
    APolarisCharacterLightBase(const FObjectInitializer& ObjectInitializer);

};

