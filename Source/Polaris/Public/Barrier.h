#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BarrierGroup.h"
#include "BarrierInitializeRequestOne.h"
#include "WallBarrierGroup.h"
#include "Barrier.generated.h"

UCLASS()
class ABarrier : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Barrier")
    TArray<FWallBarrierGroup> WallBarrierGroups;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Barrier")
    TArray<FBarrierGroup> BarrierGroups;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Barrier")
    TArray<FWallBarrierGroup> WallCullBackGroups;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Barrier")
    TArray<FBarrierInitializeRequestOne> InitializeRequest;
    
    ABarrier(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, Category = "Barrier")
    FBarrierInitializeRequestOne PopInitializeRequest();
    
};

