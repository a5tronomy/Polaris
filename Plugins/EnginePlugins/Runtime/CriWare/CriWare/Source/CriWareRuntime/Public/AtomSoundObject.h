#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "AtomSoundObject.generated.h"

UCLASS(BlueprintType)
class CRIWARERUNTIME_API UAtomSoundObject : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool EnableVoiceLimitScope;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool EnableCategoryCueLimitScope;
    
    UAtomSoundObject();

};

