#pragma once
#include "CoreMinimal.h"
#include "EShowcaseType.h"
#include "EStoreItemAttribute.h"
#include "OtherShowcase.generated.h"

USTRUCT(BlueprintType)
struct POLARIS_API FOtherShowcase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName _showcaseId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EShowcaseType _showcaseType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 _order;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EStoreItemAttribute _sellType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FText _titleText;
    
    FOtherShowcase();
};

