#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PolarisBakeMeshActor.generated.h"

class UItemPrefab;
class UMeshComponent;
class USceneComponent;
class USkeletalMeshComponent;
class UStaticMeshComponent;

UCLASS()
class POLARIS_API APolarisBakeMeshActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    USkeletalMeshComponent* SrcSkeletalMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    UStaticMeshComponent* SrcStaticMeshComponent;
    
    UPROPERTY(EditAnywhere, Instanced)
    USceneComponent* DefaultSceneRoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UItemPrefab* SrcItemPrefab;
    
    APolarisBakeMeshActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SrcMeshSetting(UMeshComponent* _comp, UItemPrefab* _source_ip);
    
};

