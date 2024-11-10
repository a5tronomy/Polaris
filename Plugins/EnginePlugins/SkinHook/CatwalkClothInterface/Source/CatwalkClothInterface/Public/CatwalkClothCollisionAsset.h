#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "CollidingCollisions.h"
#include "ImportBoxCollisionVolume.h"
#include "ImportCapsuleCollisionVolume.h"
#include "ImportSphereCollisionVolume.h"
#include "CatwalkClothCollisionAsset.generated.h"

UCLASS()
class CATWALKCLOTHINTERFACE_API UCatwalkClothCollisionAsset : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<FImportSphereCollisionVolume> Spheres;
    
    UPROPERTY(EditAnywhere)
    TArray<FImportCapsuleCollisionVolume> Capsules;
    
    UPROPERTY(EditAnywhere)
    TArray<FImportBoxCollisionVolume> Boxes;
    
    UPROPERTY(EditAnywhere)
    TMap<FString, FCollidingCollisions> CollidingCollisions;
    
    UPROPERTY(EditAnywhere)
    TMap<FString, FCollidingCollisions> CollidingCollisionsForAttachment;
    
    UCatwalkClothCollisionAsset();

};

