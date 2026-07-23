#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "PolarisNiagaraActorParameter.h"
#include "PolarisNiagaraActorManager.generated.h"

class ANiagaraActor;
class UFXSystemComponent;
class UNiagaraSystem;

UCLASS()
class POLARIS_API APolarisNiagaraActorManager : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FPolarisNiagaraActorParameter> NiagaraLoopActorArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FPolarisNiagaraActorParameter> NiagaraLoopCallbackActorArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName RespawnUserParameterName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName RespawnIdUserParameterName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName UseRespawnTagName;
    
    APolarisNiagaraActorManager(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void Respawn(UNiagaraSystem* Asset, const int32 ID, const FVector position);
    
    UFUNCTION()
    void OnChangeStageLight();
    
    UFUNCTION(BlueprintCallable)
    void AddNiagaraComp(UFXSystemComponent* niagara_comp);
    
    UFUNCTION(BlueprintCallable)
    void AddNiagaraActor(ANiagaraActor* niagara_actor);
    
};

