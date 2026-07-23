#pragma once
#include "CoreMinimal.h"
#include "EAtomSoundRendererType.h"
#include "AtomAsrRackConfigUI.generated.h"

USTRUCT(BlueprintType)
struct FAtomAsrRackConfigUI {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EAtomSoundRendererType::Type> SoundRendererTypeUI;
    
    UPROPERTY(VisibleAnywhere)
    int32 ElementID;
    
    UPROPERTY(EditAnywhere)
    bool bUseOutputPort;
    
    UPROPERTY(EditAnywhere)
    int32 UserIndex;
    
    CRIWARERUNTIME_API FAtomAsrRackConfigUI();
};

