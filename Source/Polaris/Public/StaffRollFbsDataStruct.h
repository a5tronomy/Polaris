#pragma once
#include "CoreMinimal.h"
#include "StaffRollFontColorStruct.h"
#include "StaffRollFbsDataStruct.generated.h"

USTRUCT(BlueprintType)
struct FStaffRollFbsDataStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    FString TextKind;
    
    UPROPERTY(BlueprintReadWrite)
    TArray<FString> TextStr;
    
    UPROPERTY(BlueprintReadWrite)
    FStaffRollFontColorStruct RGBFontColor;
    
    POLARIS_API FStaffRollFbsDataStruct();
};

