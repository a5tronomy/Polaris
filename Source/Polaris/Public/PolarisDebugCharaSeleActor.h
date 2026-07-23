#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PolarisDebugCharaSeleActor.generated.h"

class APolarisDebugCustomizeActor;
class UCustomizeSet;

UCLASS()
class POLARIS_API APolarisDebugCharaSeleActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 FighterId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UCustomizeSet* OverrideCustomizeSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool IsMirror;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    APolarisDebugCustomizeActor* MyDebugCustomizeActor;
    
    APolarisDebugCharaSeleActor(const FObjectInitializer& ObjectInitializer);

};

