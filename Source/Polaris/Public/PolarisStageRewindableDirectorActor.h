#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "EStageLightType.h"
#include "EventOnGeneralBattleEventParam.h"
#include "PolarisStageDirectorInfo.h"
#include "PolarisStageDirectorTransition.h"
#include "PolarisStageRewindableDirectorActor.generated.h"

class ALevelSequenceActor;

UCLASS()
class POLARIS_API APolarisStageRewindableDirectorActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    bool bInterrupted;
    
private:
    UPROPERTY(EditAnywhere)
    bool bEnableOverrideRandomSeed;
    
    UPROPERTY(EditAnywhere)
    FRandomStream RandomSeed;
    
    UPROPERTY(EditAnywhere)
    TMap<FString, FPolarisStageDirectorInfo> StageDirectorInfoMap;
    
    UPROPERTY(EditAnywhere)
    TArray<FPolarisStageDirectorTransition> TransitionList;
    
    UPROPERTY(Transient)
    TMap<FString, ALevelSequenceActor*> SequenceActorMap;
    
    UPROPERTY(EditAnywhere)
    FString InitialSequenceKey;
    
    UPROPERTY(EditAnywhere)
    EStageLightType RelatedStageLightType;
    
    UPROPERTY(EditAnywhere)
    TArray<TWeakObjectPtr<AActor>> RelatedActorList;
    
public:
    APolarisStageRewindableDirectorActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void RequestNewSequence(const FString& NewSequenceKey);
    
    UFUNCTION(BlueprintNativeEvent)
    void OnSequenceEnd();
    
private:
    UFUNCTION()
    void OnGeneralBattleEvent(FEventOnGeneralBattleEventParam Param);
    
public:
    UFUNCTION(BlueprintPure)
    FString GetRequestSequenceKey() const;
    
    UFUNCTION(BlueprintPure)
    EStageLightType GetRelatedStageLightType() const;
    
    UFUNCTION(BlueprintPure)
    FString GetCurrentSequenceKey() const;
    
    UFUNCTION(BlueprintPure)
    float GetCurrentSequenceActorTime() const;
    
    UFUNCTION(BlueprintCallable)
    void ClearCurrentSequence();
    
};

