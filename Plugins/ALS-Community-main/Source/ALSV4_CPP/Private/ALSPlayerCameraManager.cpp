#include "ALSPlayerCameraManager.h"
#include "Components/SkeletalMeshComponent.h"

AALSPlayerCameraManager::AALSPlayerCameraManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DefaultModifiers.AddDefaulted(1);
    this->ControlledCharacter = NULL;
    this->CameraBehavior = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("CameraBehavior"));
    this->ALSDebugComponent = NULL;
    this->CameraBehavior->SetupAttachment(RootComponent);
}

void AALSPlayerCameraManager::OnPossess(AALSBaseCharacter* NewCharacter) {
}

float AALSPlayerCameraManager::GetCameraBehaviorParam(FName CurveName) const {
    return 0.0f;
}


bool AALSPlayerCameraManager::CustomCameraBehavior(float DeltaTime, FVector& Location, FRotator& Rotation, float& FOV) {
    return false;
}

FVector AALSPlayerCameraManager::CalculateAxisIndependentLag(FVector CurrentLocation, FVector TargetLocation, FRotator CameraRotation, FVector LagSpeeds, float DeltaTime) {
    return FVector{};
}


