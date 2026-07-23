#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GryphonTextBinaryAsset.generated.h"

UCLASS()
class GRYPHONLOCALIZATION_API UGryphonTextBinaryAsset : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    uint32 DataSize;
    
    UGryphonTextBinaryAsset();

};

