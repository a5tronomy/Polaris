#pragma once
#include "CoreMinimal.h"
#include "StaffRollFontColorStruct.generated.h"

USTRUCT(BlueprintType)
struct FStaffRollFontColorStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    float R;
    
    UPROPERTY(BlueprintReadWrite)
    float G;
    
    UPROPERTY(BlueprintReadWrite)
    float B;
    
    POLARIS_API FStaffRollFontColorStruct();
};

