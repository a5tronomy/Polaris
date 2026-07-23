#pragma once
#include "CoreMinimal.h"
#include "OptionItemDesc.generated.h"

USTRUCT(BlueprintType)
struct FOptionItemDesc {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString Menu;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString value_text;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 Value;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool text_id_value;
    
    POLARIS_API FOptionItemDesc();
};

