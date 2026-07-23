#pragma once
#include "CoreMinimal.h"
#include "CharSelectFighterInfo.generated.h"

USTRUCT(BlueprintType)
struct FCharSelectFighterInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString style;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString Origin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString Height;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString Weight;
    
    POLARIS_API FCharSelectFighterInfo();
};

