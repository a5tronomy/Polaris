#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PolarisDebugCustomizeMapActor.generated.h"

UCLASS()
class POLARIS_API APolarisDebugCustomizeMapActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool IsEnablePlayInSave;
    
    APolarisDebugCustomizeMapActor(const FObjectInitializer& ObjectInitializer);

};

