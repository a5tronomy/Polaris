#pragma once
#include "CoreMinimal.h"
#include "EMobVATMovePatern.h"
#include "DummyMobAction.generated.h"

USTRUCT(BlueprintType)
struct FDummyMobAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 frame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bfired;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EMobVATMovePatern MovePatern;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 MoveFrameLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 Anchor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 NextAnchor;
    
    POLARIS_API FDummyMobAction();
};

