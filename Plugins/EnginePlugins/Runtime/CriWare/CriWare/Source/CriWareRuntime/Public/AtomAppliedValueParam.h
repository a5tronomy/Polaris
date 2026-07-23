#pragma once
#include "CoreMinimal.h"
#include "AtomSelectorParam.h"
#include "BusSendLevelByNameParam.h"
#include "BusSendLevelOffsetByNameParam.h"
#include "BusSendLevelOffsetParam.h"
#include "BusSendLevelParam.h"
#include "AtomAppliedValueParam.generated.h"

USTRUCT(BlueprintType)
struct CRIWARERUNTIME_API FAtomAppliedValueParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    float PitchValue;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FBusSendLevelParam BusSendLevelParam;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    TArray<FBusSendLevelByNameParam> BusSendLevelByNameParams;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FBusSendLevelOffsetParam BusSendLevelOffsetParam;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    TArray<FBusSendLevelOffsetByNameParam> BusSendLevelOffsetByNameParams;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    int32 BlockIndex;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FAtomSelectorParam AtomSelectorParam;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    TArray<int32> AsrRackIDs;
    
    FAtomAppliedValueParam();
};

