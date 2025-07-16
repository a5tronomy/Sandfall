#include "DragonIKTraceManagerComponent.h"

UDragonIKTraceManagerComponent::UDragonIKTraceManagerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->read_this = TEXT("Hover here to learn how to use this component.");
    this->Is_Enabled = true;
    this->bShow_Spine_Trace_Lines_InGame = false;
    this->bShow_Foot_Trace_Lines_InGame = false;
}



