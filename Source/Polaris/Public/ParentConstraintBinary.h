#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ParentConstraintBinary.generated.h"

UCLASS(BlueprintType)
class POLARIS_API UParentConstraintBinary : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    TArray<uint8> RawData;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    int32 Version;
    
    UParentConstraintBinary();

};

