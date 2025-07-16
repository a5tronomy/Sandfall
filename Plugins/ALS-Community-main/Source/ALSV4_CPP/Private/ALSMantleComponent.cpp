#include "ALSMantleComponent.h"
#include "Components/TimelineComponent.h"

UALSMantleComponent::UALSMantleComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MantleTimeline = CreateDefaultSubobject<UTimelineComponent>(TEXT("MantleTimeline"));
    this->MantleTimelineCurve = NULL;
    this->MantleObjectDetectionProfile = TEXT("IgnoreOnlyPawn");
    this->WalkableSurfaceDetectionChannel = ECC_Visibility;
    this->AcceptableVelocityWhileMantling = 10.00f;
    this->OwnerCharacter = NULL;
    this->ALSDebugComponent = NULL;
}

void UALSMantleComponent::Server_MantleStart_Implementation(float MantleHeight, const FALSComponentAndTransform& MantleLedgeWS, EALSMantleType MantleType) {
}

void UALSMantleComponent::OnOwnerRagdollStateChanged(bool bRagdollState) {
}

void UALSMantleComponent::OnOwnerJumpInput() {
}

void UALSMantleComponent::Multicast_MantleStart_Implementation(float MantleHeight, const FALSComponentAndTransform& MantleLedgeWS, EALSMantleType MantleType) {
}

void UALSMantleComponent::MantleUpdate(float BlendIn) {
}

void UALSMantleComponent::MantleStart(float MantleHeight, const FALSComponentAndTransform& MantleLedgeWS, EALSMantleType MantleType) {
}

void UALSMantleComponent::MantleEnd() {
}

bool UALSMantleComponent::MantleCheck(const FALSMantleTraceSettings& TraceSettings, TEnumAsByte<EDrawDebugTrace::Type> DebugType) {
    return false;
}



