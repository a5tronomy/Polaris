#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "BoneModifyTransform.generated.h"

USTRUCT(BlueprintType)
struct POLARIS_API FBoneModifyTransform {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 BoneIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector Translation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FQuat Rotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector Scale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector FirstTranslation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector SecondTranslation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector FirstVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector SecondVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector NewTranslation;
    
    FBoneModifyTransform();
};

