#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "AssignTargetDependencyMeshStruct.h"
#include "DependencyMeshOffsetMapStruct.h"
#include "OverrideAssignTargetDependencyMeshStruct.h"
#include "SqueezeInfoStruct.h"
#include "BaseCharacterItem.generated.h"

class UParentConstraintBinary;

UCLASS(BlueprintType)
class POLARIS_API UBaseCharacterItem : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 FighterId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<UParentConstraintBinary*> ParentConstraintBinariesItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FSqueezeInfoStruct> SqueezeBoneInfoArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<FString, FTransform> ItemOptionalOffsetMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<FString, FTransform> ItemOptionalAbilityOffsetMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<int32, FDependencyMeshOffsetMapStruct> ItemOptionalDependencyMeshOffsetMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FAssignTargetDependencyMeshStruct> AssignTargetDependencyMeshArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FOverrideAssignTargetDependencyMeshStruct> OverrideAssignTargetDependencyMeshArray;
    
    UBaseCharacterItem();

};

