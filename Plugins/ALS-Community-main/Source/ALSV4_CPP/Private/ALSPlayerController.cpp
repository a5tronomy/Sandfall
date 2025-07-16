#include "ALSPlayerController.h"

AALSPlayerController::AALSPlayerController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ClickEventKeys.AddDefaulted(1);
    this->PossessedCharacter = NULL;
    this->bApplyDefaultInputMappingContexts = false;
    this->DefaultInputMappingContext = NULL;
    this->DebugInputMappingContext = NULL;
}

void AALSPlayerController::WalkAction(const FInputActionValue& Value) {
}

void AALSPlayerController::VelocityDirectionAction(const FInputActionValue& Value) {
}

void AALSPlayerController::StanceAction(const FInputActionValue& Value) {
}

void AALSPlayerController::SprintAction(const FInputActionValue& Value) {
}

void AALSPlayerController::RightMovementAction(const FInputActionValue& Value) {
}

void AALSPlayerController::RagdollAction(const FInputActionValue& Value) {
}

void AALSPlayerController::LookingDirectionAction(const FInputActionValue& Value) {
}

void AALSPlayerController::JumpAction(const FInputActionValue& Value) {
}

void AALSPlayerController::ForwardMovementAction(const FInputActionValue& Value) {
}

void AALSPlayerController::DebugToggleTracesAction(const FInputActionValue& Value) {
}

void AALSPlayerController::DebugToggleSlomoAction(const FInputActionValue& Value) {
}

void AALSPlayerController::DebugToggleShapesAction(const FInputActionValue& Value) {
}

void AALSPlayerController::DebugToggleMeshAction(const FInputActionValue& Value) {
}

void AALSPlayerController::DebugToggleLayerColorsAction(const FInputActionValue& Value) {
}

void AALSPlayerController::DebugToggleHudAction(const FInputActionValue& Value) {
}

void AALSPlayerController::DebugToggleDebugViewAction(const FInputActionValue& Value) {
}

void AALSPlayerController::DebugToggleCharacterInfoAction(const FInputActionValue& Value) {
}

void AALSPlayerController::DebugOverlayMenuCycleAction(const FInputActionValue& Value) {
}

void AALSPlayerController::DebugOpenOverlayMenuAction(const FInputActionValue& Value) {
}

void AALSPlayerController::DebugFocusedCharacterCycleAction(const FInputActionValue& Value) {
}

void AALSPlayerController::CameraUpAction(const FInputActionValue& Value) {
}

void AALSPlayerController::CameraTapAction(const FInputActionValue& Value) {
}

void AALSPlayerController::CameraRightAction(const FInputActionValue& Value) {
}

void AALSPlayerController::CameraHeldAction(const FInputActionValue& Value) {
}

bool AALSPlayerController::AreStreamingSourcesEnabled_Implementation() const {
    return false;
}

void AALSPlayerController::AimAction(const FInputActionValue& Value) {
}


