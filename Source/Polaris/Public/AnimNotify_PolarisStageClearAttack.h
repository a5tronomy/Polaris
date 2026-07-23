#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "AnimNotify_PolarisStageClearAttack.generated.h"

UCLASS(CollapseCategories)
class POLARIS_API UAnimNotify_PolarisStageClearAttack : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 no;
    
    UAnimNotify_PolarisStageClearAttack();

};

