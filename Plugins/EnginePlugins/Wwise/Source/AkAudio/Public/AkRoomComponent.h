#pragma once
#include "CoreMinimal.h"
#include "AkGameObject.h"
#include "AkRoomComponent.generated.h"

class UAkAcousticTextureSetComponent;
class UPrimitiveComponent;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class AKAUDIO_API UAkRoomComponent : public UAkGameObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bEnable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bDynamic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Priority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float WallOcclusion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float AuxSendLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SimpleDisplay)
    bool AutoPost;
    
private:
    UPROPERTY(Instanced, Transient)
    UAkAcousticTextureSetComponent* GeometryComponent;
    
public:
    UAkRoomComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetGeometryComponent(UAkAcousticTextureSetComponent* textureSetComponent);
    
    UFUNCTION(BlueprintCallable)
    void SetDynamic(bool bInDynamic);
    
    UFUNCTION(BlueprintPure)
    UPrimitiveComponent* GetPrimitiveParent() const;
    
};

