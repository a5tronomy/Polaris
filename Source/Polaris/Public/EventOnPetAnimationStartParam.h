#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EventOnPetAnimationStartParam.generated.h"

USTRUCT(BlueprintType)
struct FEventOnPetAnimationStartParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 player_id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 no;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FTransform Location;
    
    POLARIS_API FEventOnPetAnimationStartParam();
};

