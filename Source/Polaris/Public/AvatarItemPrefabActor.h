#pragma once
#include "CoreMinimal.h"
#include "Animation/SkeletalMeshActor.h"
#include "AvatarItemPrefabActor.generated.h"

class UAvatarItemPrefab;

UCLASS()
class POLARIS_API AAvatarItemPrefabActor : public ASkeletalMeshActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAvatarItemPrefab* prefab;
    
    AAvatarItemPrefabActor(const FObjectInitializer& ObjectInitializer);

};

