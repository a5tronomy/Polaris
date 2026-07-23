#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "BlackPenViewerSubsystem.generated.h"

class ABlackPenAvatarViewerController;
class ABlackPenCharacterViewerController;
class ABlackPenImageViewerController;
class ABlackPenPlCustViewerController;
class ABlackPenProfCustViewerController;
class ABlackPenSequenceViewerController;

UCLASS(BlueprintType)
class POLARIS_API UBlackPenViewerSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    ABlackPenCharacterViewerController* m_character_viewer_controller;
    
    UPROPERTY()
    ABlackPenAvatarViewerController* m_avatar_viewer_controller;
    
    UPROPERTY()
    ABlackPenPlCustViewerController* m_plcust_viewer_controller;
    
    UPROPERTY()
    ABlackPenProfCustViewerController* m_profcust_viewer_controller;
    
    UPROPERTY()
    ABlackPenImageViewerController* m_image_viewer_controller;
    
    UPROPERTY()
    ABlackPenSequenceViewerController* m_sequence_viewer_controller;
    
public:
    UBlackPenViewerSubsystem();

    UFUNCTION(BlueprintCallable)
    void SetSequenceViewerController(ABlackPenSequenceViewerController* Controller);
    
    UFUNCTION(BlueprintCallable)
    void SetProfCustViewerController(ABlackPenProfCustViewerController* Controller);
    
    UFUNCTION(BlueprintCallable)
    void SetPlCustViewerController(ABlackPenPlCustViewerController* Controller);
    
    UFUNCTION(BlueprintCallable)
    void SetImageViewerController(ABlackPenImageViewerController* Controller);
    
    UFUNCTION(BlueprintCallable)
    void SetCharacterViewerController(ABlackPenCharacterViewerController* Controller);
    
    UFUNCTION(BlueprintCallable)
    void SetAvatarViewerController(ABlackPenAvatarViewerController* Controller);
    
    UFUNCTION(BlueprintPure)
    ABlackPenSequenceViewerController* GetSequenceViewerController() const;
    
    UFUNCTION(BlueprintPure)
    ABlackPenProfCustViewerController* GetProfCustViewerController() const;
    
    UFUNCTION(BlueprintPure)
    ABlackPenPlCustViewerController* GetPlCustViewerController() const;
    
    UFUNCTION(BlueprintPure)
    ABlackPenImageViewerController* GetImageViewerController() const;
    
    UFUNCTION(BlueprintPure)
    ABlackPenCharacterViewerController* GetCharacterViewerController() const;
    
    UFUNCTION(BlueprintPure)
    ABlackPenAvatarViewerController* GetAvatarViewerController() const;
    
};

