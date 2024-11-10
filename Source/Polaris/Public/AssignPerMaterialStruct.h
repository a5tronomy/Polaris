#pragma once
#include "CoreMinimal.h"
#include "DesignAssignStruct.h"
#include "AssignPerMaterialStruct.generated.h"

class UMaterialInstance;

USTRUCT(BlueprintType)
struct POLARIS_API FAssignPerMaterialStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UMaterialInstance* MaterialAssign_Preview;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UMaterialInstance* MaterialAssign_Override;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FDesignAssignStruct> DesignAssignArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool isUseSourceMaterial_All;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool isEditUser_All;
    
    FAssignPerMaterialStruct();
};

