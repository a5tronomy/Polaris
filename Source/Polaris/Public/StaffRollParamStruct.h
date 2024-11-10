#pragma once
#include "CoreMinimal.h"
#include "StaffRollParamStruct.generated.h"

USTRUCT(BlueprintType)
struct FStaffRollParamStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    float ScrollSpeed;
    
    UPROPERTY(BlueprintReadWrite)
    int32 LineSize;
    
    UPROPERTY(BlueprintReadWrite)
    int32 FontSize_TITLE_1;
    
    UPROPERTY(BlueprintReadWrite)
    int32 FontSize_TITLE_2;
    
    UPROPERTY(BlueprintReadWrite)
    int32 FontSize_TITLE_3;
    
    UPROPERTY(BlueprintReadWrite)
    int32 FontSize_TITLE_4;
    
    UPROPERTY(BlueprintReadWrite)
    int32 FontSize_TITLE_5;
    
    UPROPERTY(BlueprintReadWrite)
    int32 FontSize_BOLD;
    
    UPROPERTY(BlueprintReadWrite)
    int32 FontSize_NAME;
    
    UPROPERTY(BlueprintReadWrite)
    int32 FontSize_AUTHOR_TITLE;
    
    UPROPERTY(BlueprintReadWrite)
    int32 FontSize_RIGHT_NOTATION;
    
    POLARIS_API FStaffRollParamStruct();
};

