#pragma once
#include "CoreMinimal.h"
#include "BoneControllers/AnimNode_SkeletalControlBase.h"
#include "BoneControllers/AnimNode_ModifyBone.h"
#include "Animation/AnimTypes.h"
#include "BoneModifyTransformArray.h"
#include "PolarisAnimNode_ModifyBoneArray.generated.h"

USTRUCT(BlueprintType)
struct POLARIS_API FPolarisAnimNode_ModifyBoneArray : public FAnimNode_SkeletalControlBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<EBoneModificationMode> TranslationMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<EBoneModificationMode> RotationMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<EBoneModificationMode> ScaleMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<EBoneControlSpace> TranslationSpace;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<EBoneControlSpace> RotationSpace;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<EBoneControlSpace> ScaleSpace;
    
    UPROPERTY()
    FBoneModifyTransformArray BoneModifyTransformArray;
    
    FPolarisAnimNode_ModifyBoneArray();
};

