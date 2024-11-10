#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "PolarisLightScenarioUpdateComponent.generated.h"

class AActor;
class USceneComponent;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class POLARIS_API UPolarisLightScenarioUpdateComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 State;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 FirstLoopCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 TotalDelayFrames;
    
    UPROPERTY(Instanced)
    TArray<USceneComponent*> UpdateList;
    
    UPROPERTY(Instanced)
    TArray<USceneComponent*> UpdateFirstList;
    
    UPROPERTY()
    TArray<AActor*> UpdateParentList;
    
    UPolarisLightScenarioUpdateComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintPure)
    bool IsProcessing();
    
    UFUNCTION(BlueprintCallable)
    void ForceUpdateImmediate();
    
    UFUNCTION(BlueprintCallable)
    void ForceStop();
    
    UFUNCTION(BlueprintCallable)
    void BeginLightScenarioUpdate();
    
};

