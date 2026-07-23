#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EPolarisReflectionBrightness.h"
#include "CustomizeSetDebugItem.generated.h"

UCLASS(BlueprintType)
class POLARIS_API UCustomizeSetDebugItem : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 CaptureBankID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EPolarisReflectionBrightness Brightness;
    
    UCustomizeSetDebugItem();

};

