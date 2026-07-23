#pragma once
#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "PolarisGameInstance.generated.h"

class UKamuiManager;
class UPolarisMoviePlayer;
class USkeleton;

UCLASS(NonTransient)
class POLARIS_API UPolarisGameInstance : public UGameInstance {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    UKamuiManager* m_pKamuiManager;
    
    UPROPERTY()
    UPolarisMoviePlayer* m_pMoviePlayer;
    
    UPROPERTY(Config)
    TArray<FString> StartupPackages;
    
    UPROPERTY()
    USkeleton* m_pSKT_CH_base_msl;
    
public:
    UPolarisGameInstance();

    UFUNCTION(BlueprintPure)
    UPolarisMoviePlayer* GetMoviePlayer() const;
    
};

