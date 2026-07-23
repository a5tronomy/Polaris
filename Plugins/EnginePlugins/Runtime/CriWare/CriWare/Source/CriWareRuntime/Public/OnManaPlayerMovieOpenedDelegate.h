#pragma once
#include "CoreMinimal.h"
#include "OnManaPlayerMovieOpenedDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnManaPlayerMovieOpened, const FString&, OpenedUrl);

