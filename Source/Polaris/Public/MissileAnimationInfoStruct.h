#pragma once
#include "CoreMinimal.h"
#include "MissileAnimationInfoStruct.generated.h"

class UAnimMontage;
class UAnimSequence;

USTRUCT(BlueprintType)
struct POLARIS_API FMissileAnimationInfoStruct {
    GENERATED_BODY()
public:
    UPROPERTY(EditInstanceOnly)
    int32 REV;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName Tag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 arg;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAnimSequence* Animation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAnimMontage* AnimMontage;
    
    FMissileAnimationInfoStruct();
};

