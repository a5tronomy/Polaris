#pragma once
#include "CoreMinimal.h"
#include "SessionRule.generated.h"

USTRUCT(BlueprintType)
struct FSessionRule {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    FString Name;
    
    UPROPERTY(BlueprintReadOnly)
    bool is_default_name;
    
    UPROPERTY(BlueprintReadOnly)
    FString Area;
    
    UPROPERTY(BlueprintReadOnly)
    FString Language;
    
    UPROPERTY(BlueprintReadOnly)
    FString line_quality;
    
    UPROPERTY(BlueprintReadOnly)
    FString win_limit;
    
    UPROPERTY(BlueprintReadOnly)
    FString win_condition;
    
    UPROPERTY(BlueprintReadOnly)
    FString round_count;
    
    UPROPERTY(BlueprintReadOnly)
    FString round_time;
    
    UPROPERTY(BlueprintReadOnly)
    FString cross_play;
    
    UPROPERTY(BlueprintReadOnly)
    FString pass_code;
    
    UPROPERTY(BlueprintReadOnly)
    bool has_pass_code;
    
    POLARIS_API FSessionRule();
};

