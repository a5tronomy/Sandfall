#include "CustomNavModifierComponent.h"
#include "NavAreas/NavArea_Null.h"

UCustomNavModifierComponent::UCustomNavModifierComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AreaClass = UNavArea_Null::StaticClass();
    this->ComponentsToInclude = 31;
    this->ComponentTagToIgnore = TEXT("CustomNavModifier_ComponentToIgnore");
}

void UCustomNavModifierComponent::UpdateNavigationSystem() {
}


