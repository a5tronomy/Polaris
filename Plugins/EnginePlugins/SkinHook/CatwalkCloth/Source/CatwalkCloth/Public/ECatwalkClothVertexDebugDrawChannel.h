#pragma once
#include "CoreMinimal.h"
#include "ECatwalkClothVertexDebugDrawChannel.generated.h"

UENUM()
enum class ECatwalkClothVertexDebugDrawChannel {
    Collision,
    MaxDistance,
    BackstopLimit,
    FrontstopLimit,
    SelfCollision,
};

