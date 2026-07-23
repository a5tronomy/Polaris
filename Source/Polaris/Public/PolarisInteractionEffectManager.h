#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "AttackingCharacterInfo.h"
#include "InteractionParameter.h"
#include "PolarisInteractionEffectManager.generated.h"

class UNiagaraParameterCollection;

UCLASS()
class POLARIS_API APolarisInteractionEffectManager : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UNiagaraParameterCollection* NPC_Interaction;
    
    UPROPERTY(EditAnywhere)
    TArray<FInteractionParameter> InteractionParameter;
    
    UPROPERTY()
    TArray<FAttackingCharacterInfo> AttackingCharacterInfo;
    
    UPROPERTY(EditAnywhere)
    bool IsDebug;
    
    UPROPERTY(EditAnywhere)
    float MaxRadius;
    
    UPROPERTY(EditAnywhere)
    float MinRadius;
    
    UPROPERTY(EditAnywhere)
    float MaxForceStrength;
    
    UPROPERTY(EditAnywhere)
    float MinForceStrength;
    
    UPROPERTY(EditAnywhere)
    float StepForceStrength;
    
    UPROPERTY(EditAnywhere)
    float RadiusScale;
    
    UPROPERTY(EditAnywhere)
    float ForceScale;
    
    APolarisInteractionEffectManager(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void ResetInteractionParameter(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    void RequestOthersForce(const FVector& position, const FRotator& Rotation, const float& Radius, const float& force_strength);
    
    UFUNCTION(BlueprintCallable)
    void DebugDraw(float Radius, float force_strength, FVector Location);
    
};

