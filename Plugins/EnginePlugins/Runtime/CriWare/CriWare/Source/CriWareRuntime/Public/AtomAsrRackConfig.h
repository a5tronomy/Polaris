#pragma once
#include "CoreMinimal.h"
#include "AtomAsrRackConfig.generated.h"

USTRUCT(BlueprintType)
struct FAtomAsrRackConfig {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    int32 SoundRendererType;
    
    UPROPERTY(VisibleAnywhere)
    int32 ElementID;
    
    UPROPERTY(EditAnywhere)
    bool bUseOutputPort;
    
    UPROPERTY(EditAnywhere)
    int32 UserIndex;
    
    CRIWARERUNTIME_API FAtomAsrRackConfig();
};

