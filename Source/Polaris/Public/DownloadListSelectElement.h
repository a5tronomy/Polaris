#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "DownloadListSelectElement.generated.h"

USTRUCT(BlueprintType)
struct POLARIS_API FDownloadListSelectElement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 fighter_id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 rank;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 tekken_power;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FDateTime update_at;
    
    FDownloadListSelectElement();
};

