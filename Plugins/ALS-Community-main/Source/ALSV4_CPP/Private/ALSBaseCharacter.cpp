#include "ALSBaseCharacter.h"
#include "ALSCharacterMovementComponent.h"
#include "Net/UnrealNetwork.h"

AALSBaseCharacter::AALSBaseCharacter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<UALSCharacterMovementComponent>(TEXT("CharMoveComp"))) {
    this->bUseControllerRotationYaw = false;
    this->MyCharacterMovementComponent = NULL;
    this->DesiredRotationMode = EALSRotationMode::LookingDirection;
    this->DesiredGait = EALSGait::Running;
    this->DesiredStance = EALSStance::Standing;
    this->LookUpDownRate = 1.25f;
    this->LookLeftRightRate = 1.25f;
    this->RollDoubleTapTimeout = 0.30f;
    this->bBreakFall = false;
    this->bSprintHeld = false;
    this->ThirdPersonFOV = 90.00f;
    this->FirstPersonFOV = 90.00f;
    this->bRightShoulder = false;
    this->bIsMoving = false;
    this->bHasMovementInput = false;
    this->Speed = 0.00f;
    this->MovementInputAmount = 0.00f;
    this->AimYawRate = 0.00f;
    this->EasedMaxAcceleration = 0.00f;
    this->VisibleMesh = NULL;
    this->OverlayState = EALSOverlayState::Default;
    this->GroundedEntryState = EALSGroundedEntryState::None;
    this->MovementState = EALSMovementState::None;
    this->PrevMovementState = EALSMovementState::None;
    this->MovementAction = EALSMovementAction::None;
    this->RotationMode = EALSRotationMode::LookingDirection;
    this->Gait = EALSGait::Walking;
    this->Stance = EALSStance::Standing;
    this->ViewMode = EALSViewMode::ThirdPerson;
    this->OverlayOverrideState = 0;
    this->YawOffset = 0.00f;
    this->bBreakfallOnLand = true;
    this->BreakfallOnLandVelocity = 700.00f;
    this->bReversedPelvis = false;
    this->bRagdollOnLand = false;
    this->RagdollOnLandVelocity = 1000.00f;
    this->bRagdollOnGround = false;
    this->bRagdollFaceUp = false;
    this->CameraBehavior = NULL;
    this->ALSDebugComponent = NULL;
}

void AALSBaseCharacter::WalkAction_Implementation() {
}

void AALSBaseCharacter::VelocityDirectionAction_Implementation() {
}

void AALSBaseCharacter::StanceAction_Implementation() {
}

void AALSBaseCharacter::SprintAction_Implementation(bool bValue) {
}

void AALSBaseCharacter::SetVisibleMesh(USkeletalMesh* NewSkeletalMesh) {
}

void AALSBaseCharacter::SetViewMode(EALSViewMode NewViewMode, bool bForce) {
}

void AALSBaseCharacter::SetStance(EALSStance NewStance, bool bForce) {
}

void AALSBaseCharacter::SetRotationMode(EALSRotationMode NewRotationMode, bool bForce) {
}

void AALSBaseCharacter::SetRightShoulder(bool bNewRightShoulder) {
}

void AALSBaseCharacter::SetOverlayState(EALSOverlayState NewState, bool bForce) {
}

void AALSBaseCharacter::SetOverlayOverrideState(int32 NewState) {
}

void AALSBaseCharacter::SetMovementState(EALSMovementState NewState, bool bForce) {
}

void AALSBaseCharacter::SetMovementModel(FDataTableRowHandle Model) {
}

void AALSBaseCharacter::SetMovementAction(EALSMovementAction NewAction, bool bForce) {
}

void AALSBaseCharacter::SetGroundedEntryState(EALSGroundedEntryState NewState) {
}

void AALSBaseCharacter::SetGait(EALSGait NewGait, bool bForce) {
}

void AALSBaseCharacter::SetDesiredStance(EALSStance NewStance) {
}

void AALSBaseCharacter::SetDesiredRotationMode(EALSRotationMode NewRotMode) {
}

void AALSBaseCharacter::SetDesiredGait(EALSGait NewGait) {
}

void AALSBaseCharacter::SetCameraBehavior(UALSPlayerCameraBehavior* CamBeh) {
}

void AALSBaseCharacter::SetActorLocationAndTargetRotation(FVector NewLocation, FRotator NewRotation) {
}

void AALSBaseCharacter::Server_SetVisibleMesh_Implementation(USkeletalMesh* NewSkeletalMesh) {
}

void AALSBaseCharacter::Server_SetViewMode_Implementation(EALSViewMode NewViewMode, bool bForce) {
}

void AALSBaseCharacter::Server_SetRotationMode_Implementation(EALSRotationMode NewRotationMode, bool bForce) {
}

void AALSBaseCharacter::Server_SetOverlayState_Implementation(EALSOverlayState NewState, bool bForce) {
}

void AALSBaseCharacter::Server_SetMeshLocationDuringRagdoll_Implementation(FVector MeshLocation) {
}

void AALSBaseCharacter::Server_SetDesiredStance_Implementation(EALSStance NewStance) {
}

void AALSBaseCharacter::Server_SetDesiredRotationMode_Implementation(EALSRotationMode NewRotMode) {
}

void AALSBaseCharacter::Server_SetDesiredGait_Implementation(EALSGait NewGait) {
}

void AALSBaseCharacter::Server_RagdollStart_Implementation() {
}

void AALSBaseCharacter::Server_RagdollEnd_Implementation(FVector CharacterLocation) {
}

void AALSBaseCharacter::Server_PlayMontage_Implementation(UAnimMontage* Montage, float PlayRate) {
}

void AALSBaseCharacter::RightMovementAction_Implementation(float Value) {
}

void AALSBaseCharacter::ReplicatedRagdollStart() {
}

void AALSBaseCharacter::ReplicatedRagdollEnd() {
}

void AALSBaseCharacter::Replicated_PlayMontage_Implementation(UAnimMontage* Montage, float PlayRate) {
}

void AALSBaseCharacter::RagdollStart() {
}

void AALSBaseCharacter::RagdollEnd() {
}

void AALSBaseCharacter::RagdollAction_Implementation() {
}

void AALSBaseCharacter::OnRep_VisibleMesh(USkeletalMesh* NewVisibleMesh) {
}

void AALSBaseCharacter::OnRep_ViewMode(EALSViewMode PrevViewMode) {
}

void AALSBaseCharacter::OnRep_RotationMode(EALSRotationMode PrevRotMode) {
}

void AALSBaseCharacter::OnRep_OverlayState(EALSOverlayState PrevOverlayState) {
}

void AALSBaseCharacter::OnBreakfall_Implementation() {
}

void AALSBaseCharacter::Multicast_RagdollStart_Implementation() {
}

void AALSBaseCharacter::Multicast_RagdollEnd_Implementation(FVector CharacterLocation) {
}

void AALSBaseCharacter::Multicast_PlayMontage_Implementation(UAnimMontage* Montage, float PlayRate) {
}

void AALSBaseCharacter::Multicast_OnLanded_Implementation() {
}

void AALSBaseCharacter::Multicast_OnJumped_Implementation() {
}

void AALSBaseCharacter::LookingDirectionAction_Implementation() {
}

void AALSBaseCharacter::JumpAction_Implementation(bool bValue) {
}

bool AALSBaseCharacter::IsRightShoulder() const {
    return false;
}

bool AALSBaseCharacter::IsMoving() const {
    return false;
}

bool AALSBaseCharacter::HasMovementInput() const {
    return false;
}

EALSViewMode AALSBaseCharacter::GetViewMode() const {
    return EALSViewMode::ThirdPerson;
}

TEnumAsByte<ECollisionChannel> AALSBaseCharacter::GetThirdPersonTraceParams(FVector& TraceOrigin, float& TraceRadius) {
    return ECC_WorldStatic;
}

FTransform AALSBaseCharacter::GetThirdPersonPivotTarget() {
    return FTransform{};
}

FALSMovementSettings AALSBaseCharacter::GetTargetMovementSettings() const {
    return FALSMovementSettings{};
}

EALSStance AALSBaseCharacter::GetStance() const {
    return EALSStance::Standing;
}

float AALSBaseCharacter::GetSpeed() const {
    return 0.0f;
}

EALSRotationMode AALSBaseCharacter::GetRotationMode() const {
    return EALSRotationMode::VelocityDirection;
}


EALSMovementState AALSBaseCharacter::GetPrevMovementState() const {
    return EALSMovementState::None;
}

EALSOverlayState AALSBaseCharacter::GetOverlayState() const {
    return EALSOverlayState::Default;
}

int32 AALSBaseCharacter::GetOverlayOverrideState() const {
    return 0;
}

UALSCharacterMovementComponent* AALSBaseCharacter::GetMyMovementComponent() const {
    return NULL;
}

EALSMovementState AALSBaseCharacter::GetMovementState() const {
    return EALSMovementState::None;
}

float AALSBaseCharacter::GetMovementInputAmount() const {
    return 0.0f;
}

FVector AALSBaseCharacter::GetMovementInput() const {
    return FVector{};
}

EALSMovementAction AALSBaseCharacter::GetMovementAction() const {
    return EALSMovementAction::None;
}

EALSGroundedEntryState AALSBaseCharacter::GetGroundedEntryState() const {
    return EALSGroundedEntryState::None;
}


EALSGait AALSBaseCharacter::GetGait() const {
    return EALSGait::Walking;
}

FVector AALSBaseCharacter::GetFirstPersonCameraTarget() {
    return FVector{};
}

EALSStance AALSBaseCharacter::GetDesiredStance() const {
    return EALSStance::Standing;
}

EALSRotationMode AALSBaseCharacter::GetDesiredRotationMode() const {
    return EALSRotationMode::VelocityDirection;
}

EALSGait AALSBaseCharacter::GetDesiredGait() const {
    return EALSGait::Walking;
}

void AALSBaseCharacter::GetCameraParameters(float& TPFOVOut, float& FPFOVOut, bool& bRightShoulderOut) const {
}

float AALSBaseCharacter::GetAnimCurveValue(FName CurveName) const {
    return 0.0f;
}

EALSGait AALSBaseCharacter::GetAllowedGait_Implementation() const {
    return EALSGait::Walking;
}

float AALSBaseCharacter::GetAimYawRate() const {
    return 0.0f;
}

FRotator AALSBaseCharacter::GetAimingRotation() const {
    return FRotator{};
}

EALSGait AALSBaseCharacter::GetActualGait(EALSGait AllowedGait) const {
    return EALSGait::Walking;
}

FVector AALSBaseCharacter::GetAcceleration() const {
    return FVector{};
}

void AALSBaseCharacter::ForwardMovementAction_Implementation(float Value) {
}

void AALSBaseCharacter::EventOnLanded() {
}

void AALSBaseCharacter::EventOnJumped() {
}

bool AALSBaseCharacter::CanSprint() const {
    return false;
}

void AALSBaseCharacter::CameraUpAction_Implementation(float Value) {
}

void AALSBaseCharacter::CameraTapAction_Implementation() {
}

void AALSBaseCharacter::CameraRightAction_Implementation(float Value) {
}

void AALSBaseCharacter::CameraHeldAction_Implementation() {
}

void AALSBaseCharacter::AimAction_Implementation(bool bValue) {
}

void AALSBaseCharacter::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AALSBaseCharacter, DesiredRotationMode);
    DOREPLIFETIME(AALSBaseCharacter, DesiredGait);
    DOREPLIFETIME(AALSBaseCharacter, DesiredStance);
    DOREPLIFETIME(AALSBaseCharacter, ReplicatedCurrentAcceleration);
    DOREPLIFETIME(AALSBaseCharacter, ReplicatedControlRotation);
    DOREPLIFETIME(AALSBaseCharacter, VisibleMesh);
    DOREPLIFETIME(AALSBaseCharacter, OverlayState);
    DOREPLIFETIME(AALSBaseCharacter, RotationMode);
    DOREPLIFETIME(AALSBaseCharacter, ViewMode);
    DOREPLIFETIME(AALSBaseCharacter, TargetRagdollLocation);
}


