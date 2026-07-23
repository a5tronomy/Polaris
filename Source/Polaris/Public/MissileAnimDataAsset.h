#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "MissileAnimationInfoStruct.h"
#include "MissileAnimDataAsset.generated.h"

UCLASS(BlueprintType)
class POLARIS_API UMissileAnimDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FMissileAnimationInfoStruct> AnimDatas;
    
    UMissileAnimDataAsset();

};

