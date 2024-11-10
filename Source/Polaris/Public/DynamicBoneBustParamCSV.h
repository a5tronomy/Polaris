#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "DynamicBoneBustParamCSV.generated.h"

class UItemPrefab;

USTRUCT()
struct FDynamicBoneBustParamCSV : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UItemPrefab* AssetPath;
    
    UPROPERTY(EditAnywhere)
    int32 ID;
    
    UPROPERTY(EditAnywhere)
    int32 RefId;
    
    UPROPERTY(EditAnywhere)
    int32 RVer;
    
    UPROPERTY(EditAnywhere)
    FString BoneName_L_Bust;
    
    UPROPERTY(EditAnywhere)
    float airResistance_L_Bust;
    
    UPROPERTY(EditAnywhere)
    float MinAngleLimitVertical_L_Bust;
    
    UPROPERTY(EditAnywhere)
    float MaxAngleLimitVertical_L_Bust;
    
    UPROPERTY(EditAnywhere)
    float MinAngleLimitHorizon_L_Bust;
    
    UPROPERTY(EditAnywhere)
    float MaxAngleLimitHorizon_L_Bust;
    
    UPROPERTY(EditAnywhere)
    float goalStrength_L_Bust;
    
    UPROPERTY(EditAnywhere)
    float gravityScale_L_Bust;
    
    UPROPERTY(EditAnywhere)
    float fakeFrictionRateBust_L_Bust;
    
    UPROPERTY(EditAnywhere)
    float goalStrengthCoefBust_L_Bust;
    
    UPROPERTY(EditAnywhere)
    float horizontalVelocityLimit_L_Bust;
    
    UPROPERTY(EditAnywhere)
    float horizontalProneLimitMin_L_Bust;
    
    UPROPERTY(EditAnywhere)
    float horizontalProneLimitMax_L_Bust;
    
    UPROPERTY(EditAnywhere)
    float verticalProneLimitMin_L_Bust;
    
    UPROPERTY(EditAnywhere)
    float verticalProneLimitMax_L_Bust;
    
    UPROPERTY(EditAnywhere)
    FString BoneName_R_Bust;
    
    UPROPERTY(EditAnywhere)
    float airResistance_R_Bust;
    
    UPROPERTY(EditAnywhere)
    float MinAngleLimitVertical_R_Bust;
    
    UPROPERTY(EditAnywhere)
    float MaxAngleLimitVertical_R_Bust;
    
    UPROPERTY(EditAnywhere)
    float MinAngleLimitHorizon_R_Bust;
    
    UPROPERTY(EditAnywhere)
    float MaxAngleLimitHorizon_R_Bust;
    
    UPROPERTY(EditAnywhere)
    float goalStrength_R_Bust;
    
    UPROPERTY(EditAnywhere)
    float gravityScale_R_Bust;
    
    UPROPERTY(EditAnywhere)
    float fakeFrictionRateBust_R_Bust;
    
    UPROPERTY(EditAnywhere)
    float goalStrengthCoefBust_R_Bust;
    
    UPROPERTY(EditAnywhere)
    float horizontalVelocityLimit_R_Bust;
    
    UPROPERTY(EditAnywhere)
    float horizontalProneLimitMin_R_Bust;
    
    UPROPERTY(EditAnywhere)
    float horizontalProneLimitMax_R_Bust;
    
    UPROPERTY(EditAnywhere)
    float verticalProneLimitMin_R_Bust;
    
    UPROPERTY(EditAnywhere)
    float verticalProneLimitMax_R_Bust;
    
    UPROPERTY(EditAnywhere)
    float verticalRotOffset;
    
    UPROPERTY(EditAnywhere)
    float verticalRotOffsetAdd;
    
    UPROPERTY(EditAnywhere)
    float turnBoostOffset;
    
    POLARIS_API FDynamicBoneBustParamCSV();
};

