#include "PolarisUMGStoreButton.h"

UPolarisUMGStoreButton::UPolarisUMGStoreButton() {
    this->cursor_x = 0;
    this->cursor_y = 0;
    this->IsFocusable = false;
    this->enable_se = true;
    this->is_selected_button = false;
}

void UPolarisUMGStoreButton::PlayDecideSE() {
}

void UPolarisUMGStoreButton::PlayCursorSE() {
}

void UPolarisUMGStoreButton::PlayCancelSE() {
}

void UPolarisUMGStoreButton::PlayAnimButtonNormal(int32 num_loop) {
}

void UPolarisUMGStoreButton::PlayAnimButtonIn(int32 num_loop) {
}

void UPolarisUMGStoreButton::PlayAnimButtonHover(int32 num_loop) {
}

void UPolarisUMGStoreButton::PlayAnimButtonClick(int32 num_loop) {
}


int32 UPolarisUMGStoreButton::GetCursorY() const {
    return 0;
}

int32 UPolarisUMGStoreButton::GetCursorX() const {
    return 0;
}

void UPolarisUMGStoreButton::CallStoreSceneEvent_Implementation() {
}

void UPolarisUMGStoreButton::CallItemDetailSceneEvent_Implementation() {
}

void UPolarisUMGStoreButton::CallBlackPenSceneEvent() {
}


