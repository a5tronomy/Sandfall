#include "LGUIWorldSpaceRaycasterSource_World.h"

ULGUIWorldSpaceRaycasterSource_World::ULGUIWorldSpaceRaycasterSource_World() {
    this->RayDirectionType = ELGUISceneComponentDirection::PositiveX;
    this->clickThresholdRelateToRayDistance = true;
    this->rayDistanceMultiply = 0.00f;
}


