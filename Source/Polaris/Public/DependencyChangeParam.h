#pragma once
#include "CoreMinimal.h"
#include "ItemPositionKey.h"
#include "DependencyChangeParam.generated.h"

USTRUCT(BlueprintType)
struct POLARIS_API FDependencyChangeParam {
    GENERATED_BODY()
public:
    UPROPERTY()
    FItemPositionKey SrcPosition;
    
    UPROPERTY()
    FItemPositionKey TgtPosition;
    
    UPROPERTY()
    int32 ChangeDepNum;
    
    UPROPERTY()
    bool IsMainMeshVisibility;
    
    UPROPERTY()
    int32 Priority;
    
    FDependencyChangeParam();
};

