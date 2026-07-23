#pragma once
#include "CoreMinimal.h"
#include "DemoAttachSkeletalMeshStruct.h"
#include "DemoCatwalkClothSettingStruct.h"
#include "DemoSlaveMeshArrayStruct.h"
#include "DemoSlaveMeshSettingStruct.h"
#include "PolarisCharacterActor.h"
#include "PolarisDemoCharacterActor.generated.h"

class UCustomizeSet;
class USkeletalMeshComponent;

UCLASS()
class POLARIS_API APolarisDemoCharacterActor : public APolarisCharacterActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    TMap<int32, FDemoSlaveMeshArrayStruct> DemoSlaveMeshComponentPosMap;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    TArray<FDemoCatwalkClothSettingStruct> DemoCatwalkClothSettingArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool IsCreateSkeletonOnConstruction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize)
    TArray<FDemoSlaveMeshSettingStruct> DemoSlaveMeshSettingArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FDemoAttachSkeletalMeshStruct> DemoAttachSkeletalMeshArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UCustomizeSet* DemoCustomizeSetForLoad;
    
    APolarisDemoCharacterActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintPure)
    TArray<USkeletalMeshComponent*> GetAllDemoMeshComponent() const;
    
    UFUNCTION(BlueprintImplementableEvent)
    void CreatedDemoSlaveMesh();
    
};

