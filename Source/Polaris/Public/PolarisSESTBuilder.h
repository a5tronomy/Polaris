#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SESTBuildData.h"
#include "PolarisSESTBuilder.generated.h"

class UTexture2D;
class UTextureRenderTarget2D;

UCLASS()
class POLARIS_API APolarisSESTBuilder : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditInstanceOnly)
    TArray<UTexture2D*> BaseSESTs;
    
    APolarisSESTBuilder(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintImplementableEvent)
    void ShowBuiltSESTBP(UTextureRenderTarget2D* sest_texture);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SESTBuildStartBP();
    
    UFUNCTION(BlueprintImplementableEvent)
    void SESTBuildFinishBP();
    
    UFUNCTION(BlueprintImplementableEvent)
    void ProcessSESTBuild(int32 step_num, const FSESTBuildData& step_build_data);
    
    UFUNCTION(BlueprintImplementableEvent)
    void HideBuiltSESTBP();
    
    UFUNCTION(BlueprintImplementableEvent)
    bool CopyBuiltSESTToRenderTargetBP(UTextureRenderTarget2D* target_render_target);
    
};

