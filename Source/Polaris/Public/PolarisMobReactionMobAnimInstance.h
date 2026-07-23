#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Animation/AnimInstance.h"
#include "EPolarisMobReactionType.h"
#include "PolarisMobReactionAnimSequenceList.h"
#include "PolarisMobReactionContext.h"
#include "PolarisMobReactionMobAnimInstance.generated.h"

UCLASS(NonTransient)
class POLARIS_API UPolarisMobReactionMobAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Transient)
    TMap<EPolarisMobReactionType, FPolarisMobReactionAnimSequenceList> ReactionMap;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    EPolarisMobReactionType ReactionType;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    EPolarisMobReactionType RequestReactionType;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    FRandomStream RandomStream;
    
public:
    UPolarisMobReactionMobAnimInstance();

    UFUNCTION(BlueprintCallable)
    void UpdateContext(float DeltaSeconds);
    
    UFUNCTION(BlueprintPure)
    FVector GetLookAtTarget() const;
    
    UFUNCTION(BlueprintPure)
    bool GetContext(EPolarisMobReactionType _ReactionType, bool GetIdleIfFail, FPolarisMobReactionContext& OutContext) const;
    
    UFUNCTION(BlueprintCallable)
    void GenerateNextIndex(EPolarisMobReactionType _ReactionType);
    
    UFUNCTION(BlueprintCallable)
    void CalculateLookAtTarget();
    
    UFUNCTION(BlueprintCallable)
    void AdvanceContextTick(EPolarisMobReactionType _ReactionType, float DeltaSeconds, bool AffectPlayRate);
    
};

