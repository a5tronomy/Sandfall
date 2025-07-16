#include "CSAP_SwapAssign.h"

UCSAP_SwapAssign::UCSAP_SwapAssign() {
    this->CachePoolSize = 1;
    this->m_ActiveBodySkinClass = NULL;
    this->m_ActiveFaceSkinClass = NULL;
}

void UCSAP_SwapAssign::OnSettingsChanged(const UConfigurableGameUserSettings* UserGameConfig) {
}


