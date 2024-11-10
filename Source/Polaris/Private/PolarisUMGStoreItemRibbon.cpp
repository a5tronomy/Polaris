#include "PolarisUMGStoreItemRibbon.h"

UPolarisUMGStoreItemRibbon::UPolarisUMGStoreItemRibbon() : UUserWidget(FObjectInitializer::Get()) {
    this->tb_title = NULL;
    this->plate_free = NULL;
    this->plate_recommend = NULL;
    this->plate_popular = NULL;
    this->plate_pricedown = NULL;
    this->plate_new = NULL;
    this->frame = NULL;
    this->plate_limit = NULL;
    this->Anim_Free_GreyedOut = NULL;
    this->Anim_Recommend_GreyedOut = NULL;
    this->Anim_Popular_GreyedOut = NULL;
    this->Anim_PriceDown_GreyedOut = NULL;
    this->Anim_New_GreyedOut = NULL;
    this->Anim_Limit_GreyedOut = NULL;
}

void UPolarisUMGStoreItemRibbon::RepItemInfo_Implementation(const FStoreItemPanelStruct& sell_data, bool owned) {
}


