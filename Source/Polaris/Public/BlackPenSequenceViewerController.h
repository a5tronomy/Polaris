#pragma once
#include "CoreMinimal.h"
#include "BlackPenViewerControllerBase.h"
#include "BlackPenSequenceViewerController.generated.h"

class AActor;

UCLASS()
class POLARIS_API ABlackPenSequenceViewerController : public ABlackPenViewerControllerBase {
    GENERATED_BODY()
public:
    ABlackPenSequenceViewerController(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    AActor* GetSequenceSpawnRoot();
    
};

