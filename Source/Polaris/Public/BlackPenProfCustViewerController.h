#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "BlackPenViewerControllerBase.h"
#include "PlayerProfileData.h"
#include "BlackPenProfCustViewerController.generated.h"

class AActor;
class ULevelSequence;
class UTexture2D;

UCLASS()
class POLARIS_API ABlackPenProfCustViewerController : public ABlackPenViewerControllerBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite)
    UTexture2D* BGTexture;
    
public:
    ABlackPenProfCustViewerController(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void StartLoadCharacter(int32 FighterId, FTransform position);
    
    UFUNCTION(BlueprintCallable)
    void StartDeleteCharacter();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetBGTexture(UTexture2D* Texture);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayCharaAnimation();
    
    UFUNCTION(BlueprintCallable)
    void PlayAnimationBySequencer(ULevelSequence* sequencer, int32 light_variation_id);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void LoadCharacter(FPlayerProfileData ProfileData, const TArray<int32>& avatar_item_list);
    
    UFUNCTION(BlueprintImplementableEvent, BlueprintPure)
    int32 GetCurrentDynamicsWarmupStepNum() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    AActor* GetCameraController();
    
};

