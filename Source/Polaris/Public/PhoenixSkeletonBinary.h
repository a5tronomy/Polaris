#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "PhoenixSkeletonBinary.generated.h"

UCLASS(BlueprintType)
class POLARIS_API UPhoenixSkeletonBinary : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    TArray<uint8> RawData;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    int32 Version;
    
    UPhoenixSkeletonBinary();

};

