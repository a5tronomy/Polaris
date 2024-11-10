#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "HoudiniEvent.generated.h"

USTRUCT()
struct FHoudiniEvent {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FVector position;
    
    UPROPERTY(EditAnywhere)
    FVector Normal;
    
    UPROPERTY(EditAnywhere)
    float Impulse;
    
    UPROPERTY(EditAnywhere)
    FVector Velocity;
    
    UPROPERTY(EditAnywhere)
    int32 POINTID;
    
    UPROPERTY(EditAnywhere)
    float Time;
    
    UPROPERTY(EditAnywhere)
    float LIFE;
    
    UPROPERTY(EditAnywhere)
    FLinearColor Color;
    
    UPROPERTY(EditAnywhere)
    int32 Type;
    
    HOUDININIAGARA_API FHoudiniEvent();
};

