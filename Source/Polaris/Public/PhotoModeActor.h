#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "PhotoDebugExternalParameter.h"
#include "PhotoMouseInput.h"
#include "PhotoModeActor.generated.h"

class APhotoFeatureColldier;
class APolarisPhotoModeWallActor;
class UCineCameraComponent;
class UPostProcessComponent;

UCLASS()
class POLARIS_API APhotoModeActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    FLinearColor postProcessColor;
    
    UPROPERTY(BlueprintReadWrite)
    int32 postProcessColor_Copy;
    
    UPROPERTY(BlueprintReadWrite)
    float PlayerDissable_Distance;
    
    UPROPERTY(BlueprintReadWrite)
    bool IsColorFilter;
    
    UPROPERTY(BlueprintReadWrite)
    bool IsVinetteFilter;
    
    UPROPERTY(BlueprintReadWrite)
    bool IsChromaticAberrationFilter;
    
    UPROPERTY(BlueprintReadWrite)
    float VinetteIntensity;
    
    UPROPERTY(BlueprintReadWrite)
    float AbrrationIntensity;
    
    UPROPERTY(BlueprintReadWrite, Instanced)
    UPostProcessComponent* primePostProcess;
    
    UPROPERTY(BlueprintReadWrite)
    APhotoFeatureColldier* m_photoFeatureCollider;
    
    UPROPERTY(BlueprintReadWrite)
    bool IsActive;
    
    UPROPERTY(BlueprintReadWrite)
    float AutoFocusDistance1P;
    
    UPROPERTY(BlueprintReadWrite)
    float AutoFocusDistance2P;
    
    UPROPERTY(BlueprintReadWrite)
    bool AutoFocus1P;
    
    UPROPERTY(BlueprintReadWrite)
    bool AutoFocus2P;
    
    UPROPERTY(BlueprintReadWrite)
    FVector FocusSocketLocation1P;
    
    UPROPERTY(BlueprintReadWrite)
    FVector FocusSocketLocation2P;
    
    UPROPERTY(BlueprintReadWrite)
    float CameraSpeed;
    
    UPROPERTY(BlueprintReadWrite)
    bool IsAllowEffect;
    
    UPROPERTY(BlueprintReadWrite)
    FVector PhotoColliderLocation;
    
    UPROPERTY(BlueprintReadWrite)
    FPhotoMouseInput Mouse;
    
    UPROPERTY(BlueprintReadWrite)
    TArray<AActor*> PostProcessFitler;
    
    UPROPERTY(BlueprintReadWrite)
    TArray<FString> TextIDList;
    
    UPROPERTY(BlueprintReadWrite)
    bool IsUseTextID;
    
    UPROPERTY(BlueprintReadWrite)
    int32 CameraType;
    
    UPROPERTY(BlueprintReadWrite)
    FPhotoDebugExternalParameter External;
    
    UPROPERTY(BlueprintReadWrite)
    FVector LookAtLocation;
    
    UPROPERTY(BlueprintReadWrite)
    bool IsLookAtPlayer;
    
    UPROPERTY(BlueprintReadWrite)
    int32 LookAtPlayerId;
    
    UPROPERTY(BlueprintReadWrite)
    float FocalDistanceResult;
    
    UPROPERTY(BlueprintReadWrite)
    TArray<APolarisPhotoModeWallActor*> WallActors;
    
    APhotoModeActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UIAllFunction(float Val, float Delta, int32 _id, float power);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void StartCharacterActor();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Start();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SpawnDebugWindow(bool Active);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetRoll(float Roll);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetPlayerCameraFOV(float lensfov);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetMaterialColor();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetLookAt(float FocalDistance, FTransform CineCameraTransform);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetLensFoVOnly(float FOV);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetLensFlareThreshold(float Threshold);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetFoVToLens(float& _fov);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float SetDoFToUI(float Val);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    float SetDoFByAutoFocus(float DoF);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetComponentLocation();
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetColosseumMaterialForceVisible(bool is_visible);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetCineCameraTransform(FVector Pos, FVector rot);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetCineCameraParamTest(float F);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetCharacterVisivility(int32 visibility_type);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetAutoFocus2P();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetAutoFocus1P();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ResetViewTarget();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ParameterReset(int32 DoF);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void MakeWallCollisionProperty(APolarisPhotoModeWallActor* wall, FName collision_profile_name);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void MakePolarisPhotoWallNative();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void MakePolarisPhotoWall();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HogeHoge();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    float GetProgramFoVOnly();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UPostProcessComponent* GetPostProcessComponent();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FVector2D GetMousePositionMove();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void GetMIDParameter(int32 N, float& Val);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    float GetFovFromLens();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UPostProcessComponent* GetCineCameraPostProcessComponent();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UCineCameraComponent* GetCineCameraComponent();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    AActor* GetCineCameraActor();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void EndCharacterActor();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void End();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void DrawLookAtPoint(FVector Pos, int32 color_type);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CheckCameraDistanceToPlayer2(int32 PlayerId, int32 State);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CheckCameraDistanceToPlayer();
    
};

