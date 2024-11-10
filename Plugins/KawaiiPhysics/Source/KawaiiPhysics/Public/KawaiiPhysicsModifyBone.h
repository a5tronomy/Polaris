#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "BoneContainer.h"
#include "KawaiiPhysicsSettings.h"
#include "KawaiiPhysicsModifyBone.generated.h"

USTRUCT()
struct KAWAIIPHYSICS_API FKawaiiPhysicsModifyBone {
    GENERATED_BODY()
public:
    UPROPERTY()
    FBoneReference BoneRef;
    
    UPROPERTY()
    int32 ParentIndex;
    
    UPROPERTY()
    TArray<int32> ChildIndexs;
    
    UPROPERTY()
    FKawaiiPhysicsSettings PhysicsSettings;
    
    UPROPERTY()
    FVector Location;
    
    UPROPERTY()
    FVector PrevLocation;
    
    UPROPERTY()
    FQuat PrevRotation;
    
    UPROPERTY()
    FVector PoseLocation;
    
    UPROPERTY()
    FQuat PoseRotation;
    
    UPROPERTY()
    FVector PoseScale;
    
    UPROPERTY()
    float LengthFromRoot;
    
    UPROPERTY()
    bool bDummy;
    
    FKawaiiPhysicsModifyBone();
};

