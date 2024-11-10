#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "PolarisStageForcusCameraSoftRef.h"
#include "Templates/SubclassOf.h"
#include "PolarisDramaManager.generated.h"

class APolarisDramaActor;
class APolarisDramaLiveLinkCameraActor;
class APolarisWindDirectionalSource;
class ULevelSequence;

UCLASS()
class POLARIS_API APolarisDramaManager : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    TArray<TSoftObjectPtr<ULevelSequence>> m_battle_start_common_camera_asset;
    
    UPROPERTY(EditAnywhere)
    TMap<int32, TSoftObjectPtr<ULevelSequence>> m_battle_start_exclusive_camera_asset;
    
    UPROPERTY(EditAnywhere)
    TArray<FPolarisStageForcusCameraSoftRef> m_stage_forcus_common_asset;
    
    UPROPERTY(VisibleAnywhere)
    TArray<ULevelSequence*> m_battle_start_common_camera;
    
    UPROPERTY(VisibleAnywhere)
    TArray<ULevelSequence*> m_stage_forcus_common_camera_1p;
    
    UPROPERTY(VisibleAnywhere)
    TArray<ULevelSequence*> m_stage_forcus_common_camera_2p;
    
    UPROPERTY(VisibleAnywhere)
    TArray<APolarisWindDirectionalSource*> m_stage_wind_list;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<APolarisDramaActor> DramaActorClass;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<APolarisDramaLiveLinkCameraActor> PolarisDramaLiveLinkCameraClass;
    
public:
    UPROPERTY(BlueprintReadOnly)
    FTransform HeaderCameraTransform;
    
    UPROPERTY(BlueprintReadOnly)
    float HeaderCameraFOV;
    
    APolarisDramaManager(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintNativeEvent)
    void ResetDramaParameterPostProc();
    
    UFUNCTION(BlueprintNativeEvent)
    void PlayPostProc(int32 DramaType);
    
};

