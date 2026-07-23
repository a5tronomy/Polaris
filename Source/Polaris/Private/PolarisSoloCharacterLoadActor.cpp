#include "PolarisSoloCharacterLoadActor.h"

APolarisSoloCharacterLoadActor::APolarisSoloCharacterLoadActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void APolarisSoloCharacterLoadActor::RequestCharacterUnload() {
}

bool APolarisSoloCharacterLoadActor::RequestCharacterLoad(int32 fighter_id, int32 customizeslot_id, int32 costumetype_id, const FString& overridePathToCustomizeSet) {
    return false;
}

bool APolarisSoloCharacterLoadActor::IsUnLoaded() const {
    return false;
}

bool APolarisSoloCharacterLoadActor::IsLoaded() const {
    return false;
}

bool APolarisSoloCharacterLoadActor::InMainMenu() const {
    return false;
}


