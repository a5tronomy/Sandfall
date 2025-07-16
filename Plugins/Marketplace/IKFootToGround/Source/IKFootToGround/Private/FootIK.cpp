#include "FootIK.h"

UFootIK::UFootIK(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AdjustMeshCoordinate = true;
    this->MeshMaxOffset = 15.00f;
    this->GroundCollisionChannel = ECC_Visibility;
    this->bTraceByObjectType = false;
    this->InterpSpeed = 15.00f;
    this->FootHeightAdjustment = 8.00f;
    this->UseComplexTracing = false;
    this->CalculateOrientation = true;
    this->ConstraintKneeAngle = 180.00f;
    this->bDrawDebugTracing = false;
    this->bUpdateLegSizeInRuntime = false;
    this->ConstraintPelvisYMovement = 0.00f;
    this->ConstraintPelvisXMovement = 0.00f;
    this->LiftUpInAir = true;
    this->IKAlpha = 0.00f;
    this->PlayerCharacter = NULL;
    this->CharacterMesh = NULL;
    this->bIsInitialized = false;
    this->bIsEnabled = true;
    this->DefaultMeshOffset = 0.00f;
    this->CrouchedMeshOffset = 0.00f;
    this->LastPelvisOffsetX = 0.00f;
    this->LastPelvisOffsetY = 0.00f;
    this->LastPelvisOffsetZ = 0.00f;
    this->DefaultHalfHeight = 0.00f;
    this->WasCrouched = false;
}

void UFootIK::TraceForLeg(FName Tag, bool IsFalling, float DeltaTime) {
}

void UFootIK::SetLegEnabled(FName LegName, bool bNewIsEnabled) {
}

void UFootIK::SetEnabled(bool NewIsEnabled) {
}

void UFootIK::MakeTick(const float DeltaTime) {
}

bool UFootIK::IsInitialized() const {
    return false;
}

bool UFootIK::IsEnabled() const {
    return false;
}

void UFootIK::InitLeg(const FName LegTag, const FName ThighBoneName, const FName CalfBoneName, const FName FootBoneName, const EFootSide Side, const FFootCollider& FootCollider) {
}

void UFootIK::InitializeComp() {
}

FVector UFootIK::GetLocalFootGround(const FName LegTag) {
    return FVector{};
}

UPrimitiveComponent* UFootIK::GetLastFootCollision(FName LegName) const {
    return NULL;
}

float UFootIK::GetFootRotation(const FName LegTag) const {
    return 0.0f;
}

EFootIKType UFootIK::GetFootGroundIKState(const FName& LegTag) const {
    return EFootIKType::NoIK;
}

FVector UFootIK::GetFootGround(const FName LegTag) {
    return FVector{};
}

void UFootIK::AddLegToMap(FName Key, const FLegInfo& Data) {
}


