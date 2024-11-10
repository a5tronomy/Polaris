#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GameplayTagContainer.h"
#include "PolarisStageReduction.generated.h"

UCLASS()
class APolarisStageReduction : public AActor {
    GENERATED_BODY()
public:
    APolarisStageReduction(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintImplementableEvent)
    void OnReductionTagQueryChanged(const FGameplayTagQuery& NewTagQuery);
    
    UFUNCTION()
    void OnPreInitBattle();
    
};

