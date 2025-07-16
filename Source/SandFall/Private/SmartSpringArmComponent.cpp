#include "SmartSpringArmComponent.h"

USmartSpringArmComponent::USmartSpringArmComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bDoSmartLineTrace = false;
    this->SmartProbeSize = 0.00f;
}


