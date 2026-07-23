#pragma once
#include "CoreMinimal.h"
#include "BoneControllers/AnimNode_SkeletalControlBase.h"
#include "UObject/NoExportTypes.h"
#include "Animation/AnimTypes.h"
#include "EMotHeadMatrixSpace.h"
#include "ESupportUEAnimationMode.h"
#include "AnimNode_MotHead.generated.h"

USTRUCT(BlueprintType)
struct MOTHEADANIMATIONRUNTIME_API FAnimNode_MotHead : public FAnimNode_SkeletalControlBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<EMotHeadMatrixSpace> MotHeadMatrixSpace;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<EBoneControlSpace> ControlSpace;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 PlayerId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector ControlLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ESupportUEAnimationMode SupportUEAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bForceFirstUpdatePhoenix;
    
    FAnimNode_MotHead();
};

