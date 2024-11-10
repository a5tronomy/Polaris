#pragma once
#include "CoreMinimal.h"
#include "SqueezeInfoStruct.generated.h"

class UBaseCharacterItem;
class USkeletalMesh;
class USqueezeBoneAsset;

USTRUCT(BlueprintType)
struct POLARIS_API FSqueezeInfoStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UBaseCharacterItem* TargetBCI;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USkeletalMesh* ExistSkeletalMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USqueezeBoneAsset* SqueezeBoneAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool IsClothDisable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool IsOverrideUniqueBCI;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 ReleaseVersion;
    
    FSqueezeInfoStruct();
};

