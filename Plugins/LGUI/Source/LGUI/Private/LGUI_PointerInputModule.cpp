#include "LGUI_PointerInputModule.h"

ULGUI_PointerInputModule::ULGUI_PointerInputModule(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->EventSystem = NULL;
}

void ULGUI_PointerInputModule::InputTriggerForNavigation(bool triggerPress, int32 pointerID) {
}

void ULGUI_PointerInputModule::InputNavigation(ELGUINavigationDirection Direction, bool pressOrRelease, int32 pointerID) {
}


