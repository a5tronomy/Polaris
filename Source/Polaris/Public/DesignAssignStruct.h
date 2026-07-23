#pragma once
#include "CoreMinimal.h"
#include "DesignAssignStruct_Color.h"
#include "DesignAssignStruct_Pattern.h"
#include "DesignAssignStruct_Surface.h"
#include "DesignAssignStruct.generated.h"

USTRUCT(BlueprintType)
struct POLARIS_API FDesignAssignStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FDesignAssignStruct_Color DesignAssign_Color;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FDesignAssignStruct_Pattern DesignAssign_Pattern;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FDesignAssignStruct_Surface DesignAssign_Surface;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool isUseSourceMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool isEditUser;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 useSlotNumber;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    bool isEnableId;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    bool isSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 ScalpMaskIndex;
    
    FDesignAssignStruct();
};

