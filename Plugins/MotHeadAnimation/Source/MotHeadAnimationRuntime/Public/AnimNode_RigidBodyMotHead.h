#pragma once
#include "CoreMinimal.h"
#include "BoneControllers/AnimNode_RigidBody.h"
#include "ERigidBodyMotHeadPart.h"
#include "AnimNode_RigidBodyMotHead.generated.h"

USTRUCT(BlueprintType)
struct MOTHEADANIMATIONRUNTIME_API FAnimNode_RigidBodyMotHead : public FAnimNode_RigidBody {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    ERigidBodyMotHeadPart Part;
    
    FAnimNode_RigidBodyMotHead();
};

