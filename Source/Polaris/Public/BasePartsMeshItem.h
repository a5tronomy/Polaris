#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SkeletalMeshRigSetArray.h"
#include "BasePartsMeshItem.generated.h"

UCLASS(BlueprintType)
class POLARIS_API UBasePartsMeshItem : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize)
    TArray<FSkeletalMeshRigSetArray> SourceSkeletalMeshSetArray;
    
    UBasePartsMeshItem();

};

