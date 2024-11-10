#pragma once
#include "CoreMinimal.h"
#include "Components/SkeletalMeshComponent.h"
#include "LobbySkeletalMeshComponent.generated.h"

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class POLARIS_API ULobbySkeletalMeshComponent : public USkeletalMeshComponent {
    GENERATED_BODY()
public:
    ULobbySkeletalMeshComponent(const FObjectInitializer& ObjectInitializer);

};

