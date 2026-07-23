#pragma once
#include "CoreMinimal.h"
#include "ResourceData.h"
#include "OnUploadedDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_ThreeParams(FOnUploaded, bool, Succeeded, int32, Status, FResourceData, ResourceData);

