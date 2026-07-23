#pragma once
#include "CoreMinimal.h"
#include "EPolarisParentalControlType.generated.h"

UENUM()
enum class EPolarisParentalControlType : uint8 {
    Multiplay,
    Ugc,
    Chat,
    CrossPlay,
    Clubs,
    Sessions,
    Broadcast,
    ManageProfilePrivacy,
    GameDvr,
    MultiplayerParties,
    CloudManageSession,
    CloudJoinSession,
    CloudSavedGames,
    SocialNetworkSharing,
    AddFriends,
    END,
};

