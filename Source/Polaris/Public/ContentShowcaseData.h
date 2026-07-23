#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ContentShowcaseData.generated.h"

USTRUCT(BlueprintType)
struct POLARIS_API FContentShowcaseData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FName> _include_content_ids;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText _titleText;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 _version;
    
    FContentShowcaseData();
};

