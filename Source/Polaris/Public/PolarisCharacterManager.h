#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PolarisCharacterManager.generated.h"

class APolarisCharacterActor;

UCLASS()
class POLARIS_API APolarisCharacterManager : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    TMap<int32, APolarisCharacterActor*> CharacterArray;
    
public:
    APolarisCharacterManager(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintPure)
    APolarisCharacterActor* GetCharacterActor(int32 _EntryId);
    
};

