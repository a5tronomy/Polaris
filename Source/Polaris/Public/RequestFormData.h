#pragma once
#include "CoreMinimal.h"
#include "RequestFormData.generated.h"

USTRUCT()
struct FRequestFormData {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<uint8> combinedContent;
    
private:
    UPROPERTY()
    FString boundaryLabel;
    
    UPROPERTY()
    FString boundaryBegin;
    
    UPROPERTY()
    FString boundaryEnd;
    
public:
    POLARIS_API FRequestFormData();
};

