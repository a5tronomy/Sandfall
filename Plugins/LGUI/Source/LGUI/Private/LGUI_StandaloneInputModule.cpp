#include "LGUI_StandaloneInputModule.h"

ULGUI_StandaloneInputModule::ULGUI_StandaloneInputModule(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bOverrideMousePosition = false;
}

void ULGUI_StandaloneInputModule::InputTrigger(bool inTriggerPress, EMouseButtonType inMouseButtonType) {
}

void ULGUI_StandaloneInputModule::InputScroll(const FVector2D& inAxisValue) {
}

void ULGUI_StandaloneInputModule::InputOverrideMousePosition(const FVector2D& inMousePosition) {
}


