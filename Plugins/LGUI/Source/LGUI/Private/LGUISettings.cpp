#include "LGUISettings.h"

ULGUISettings::ULGUISettings() {
    this->PriorityInSceneViewExtension = 0;
    this->AutoBatchThreshold = 0.01f;
    this->bFrustumCulling = false;
    this->bScreenSpaceUIAffectByGamePause = false;
    this->bScreenSpaceUIAffectByTimeDilation = false;
    this->bWorldSpaceUIAffectByGamePause = true;
    this->bWorldSpaceUIAffectByTimeDilation = true;
    this->AntiAliasingMothod = ELGUIRendererAntiAliasingMethod::None;
    this->MSAASampleCount = ELGUIRendererMSAASampleCount::Four;
}


