#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Styling/SlateColor.h"
#include "StoreTitleTextColorStruct.generated.h"

USTRUCT(BlueprintType)
struct POLARIS_API FStoreTitleTextColorStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSlateColor title_main_color;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FLinearColor title_outline_color;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 title_outline_size;
    
    FStoreTitleTextColorStruct();
};

