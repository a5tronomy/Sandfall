#include "LGUIWorldSpaceRaycaster.h"

ULGUIWorldSpaceRaycaster::ULGUIWorldSpaceRaycaster(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->interactionTarget = ELGUIInteractionTarget::UIAndWorld;
    this->bRequireFaceIndex = false;
    this->RaycasterSourceObject = NULL;
}

void ULGUIWorldSpaceRaycaster::SetRaycasterSourceObject(ULGUIWorldSpaceRaycasterSource* NewSource) {
}

ULGUIWorldSpaceRaycasterSource* ULGUIWorldSpaceRaycaster::GetRaycasterSourceObject() const {
    return NULL;
}


