#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "CustomizeSetDebugItem.generated.h"

UCLASS(BlueprintType)
class POLARIS_API UCustomizeSetDebugItem : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 CaptureBankID;
    
    UCustomizeSetDebugItem();

};

