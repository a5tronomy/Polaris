#pragma once
#include "CoreMinimal.h"
#include "InteractionParameter.generated.h"

USTRUCT(BlueprintType)
struct FInteractionParameter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString RadiusName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString AttackPositionName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString AttackVectorName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString ForceStrengthName;
    
    POLARIS_API FInteractionParameter();
};

