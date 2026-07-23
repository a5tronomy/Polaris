#pragma once
#include "CoreMinimal.h"
#include "EPolarisUMGSlotPanelTabAnimType.generated.h"

UENUM()
enum class EPolarisUMGSlotPanelTabAnimType : uint8 {
    CUS_CH_SLOT_PANEL_TAB_ANIM_IN,
    CUS_CH_SLOT_PANEL_TAB_ANIM_CRICK,
    CUS_CH_SLOT_PANEL_TAB_ANIM_HOVER,
    CUS_CH_SLOT_PANEL_TAB_ANIM_NORMAL,
    CUS_CH_SLOT_PANEL_TAB_ANIM_MOUSEOVER,
    CUS_CH_SLOT_PANEL_TAB_ANIM_MOUSEUNOVER,
};

