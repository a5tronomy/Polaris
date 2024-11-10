#pragma once
#include "CoreMinimal.h"
#include "ECommunityMenuItemType.generated.h"

UENUM()
enum class ECommunityMenuItemType {
    PlayersInLounge,
    NotificationsList,
    FollowList,
    FriendList,
    Rival,
    PlayedWith,
    MyProfile,
    BlockList,
};

