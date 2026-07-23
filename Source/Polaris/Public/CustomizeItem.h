#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "AssignPerMaterialStruct.h"
#include "DesignAssignStruct.h"
#include "ItemAddAuraEffect.h"
#include "PartsSlotItemSetStructArray.h"
#include "CustomizeItem.generated.h"

UCLASS(BlueprintType)
class POLARIS_API UCustomizeItem : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FDesignAssignStruct> DesignAssignSlotArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FAssignPerMaterialStruct> AssignPerMaterialArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FPartsSlotItemSetStructArray> PartsSlotItemSetOuterArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool UseHairMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool ChangeAltSkinColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString ItemOffsetSlotNameEdit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FTransform ItemOffsetTransformEdit;
    
    UPROPERTY(BlueprintReadOnly)
    FString ParentCustomizeItemName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FItemAddAuraEffect AddAuraEffect;
    
    UCustomizeItem();

    UFUNCTION(BlueprintPure)
    bool GetDesignAssign(int32 _Material_Num, int32 _Color_ID_Num, FDesignAssignStruct& _SourceDesignAssign) const;
    
};

