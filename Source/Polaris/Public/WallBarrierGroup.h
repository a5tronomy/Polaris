#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "BarrierGroup.h"
#include "WallBarrierGroup.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FWallBarrierGroup : public FBarrierGroup {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector FacadeVector;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool LocalFacade;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool DisableBarrierIfBroken;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float EffectAlphaOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<AActor*> EffectActors;
    
    POLARIS_API FWallBarrierGroup();
};

