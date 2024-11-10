#pragma once
#include "CoreMinimal.h"
#include "BlackPenViewerControllerBase.h"
#include "BlackPenCharacterViewerController.generated.h"

class AActor;
class UItemPrefab;

UCLASS()
class POLARIS_API ABlackPenCharacterViewerController : public ABlackPenViewerControllerBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly)
    AActor* character_spawn_root;
    
public:
    ABlackPenCharacterViewerController(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowEffectOnly(const TSoftObjectPtr<UItemPrefab>& ItemPrefab, int32 ItemId);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowAccessoryOnly(const TSoftObjectPtr<UItemPrefab>& ItemPrefab, int32 ItemId);
    
    UFUNCTION(BlueprintCallable)
    void SetCharacterSpawnRoot(AActor* Root);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DestroyPreviewActors();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DestroyAccessory();
    
};

