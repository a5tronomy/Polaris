#include "PolarisGameInstance.h"

UPolarisGameInstance::UPolarisGameInstance() {
    this->m_pKamuiManager = NULL;
    this->m_pMoviePlayer = NULL;
    this->StartupPackages.AddDefaulted(12);
    this->m_pSKT_CH_base_msl = NULL;
}

UPolarisMoviePlayer* UPolarisGameInstance::GetMoviePlayer() const {
    return NULL;
}


