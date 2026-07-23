#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "ExtraItemActorDramaParam.generated.h"

USTRUCT(BlueprintType)
struct POLARIS_API FExtraItemActorDramaParam {
    GENERATED_BODY()
public:
    UPROPERTY()
    FName SocketName;
    
    UPROPERTY()
    FVector Location;
    
    UPROPERTY()
    FRotator Rotator;
    
    UPROPERTY()
    FVector Scale;
    
    FExtraItemActorDramaParam();
};

