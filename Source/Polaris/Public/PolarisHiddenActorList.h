#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "HiddenParamsDrama.h"
#include "HiddenParamsSequenceProceeded.h"
#include "PolarisHiddenActorList.generated.h"

UCLASS()
class POLARIS_API APolarisHiddenActorList : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FHiddenParamsSequenceProceeded> ActorList_SequenceProceeded;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FHiddenParamsDrama> ActorList_DramaStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FHiddenParamsDrama> ActorList_DramaEnd;
    
    APolarisHiddenActorList(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void SequenceProceeded(int32 StageSequenceId, bool is_reverse_flag);
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void OnSequenceProceeded(int32 StageSequenceId);
    
protected:
    UFUNCTION(BlueprintCallable)
    void DramaStart(FName Tag);
    
    UFUNCTION(BlueprintCallable)
    void DramaEnd(FName Tag);
    
    UFUNCTION(BlueprintCallable)
    void AddActorSequenceProceeded(int32 Index, AActor* pActor);
    
    UFUNCTION(BlueprintCallable)
    void AddActorDramaStart(int32 Index, AActor* pActor);
    
    UFUNCTION(BlueprintCallable)
    void AddActorDramaEnd(int32 Index, AActor* pActor);
    
};

