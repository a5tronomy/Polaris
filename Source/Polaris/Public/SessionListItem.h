#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SessionListData.h"
#include "SessionListItem.generated.h"

UCLASS(BlueprintType)
class POLARIS_API USessionListItem : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    FSessionListData Data;
    
    UPROPERTY(BlueprintReadWrite)
    int32 name_type;
    
    USessionListItem();

};

