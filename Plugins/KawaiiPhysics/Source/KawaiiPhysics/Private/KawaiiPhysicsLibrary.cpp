#include "KawaiiPhysicsLibrary.h"

UKawaiiPhysicsLibrary::UKawaiiPhysicsLibrary() {
}

FKawaiiPhysicsReference UKawaiiPhysicsLibrary::SetWindScale(const FKawaiiPhysicsReference& KawaiiPhysics, float WindScale) {
    return FKawaiiPhysicsReference{};
}

FKawaiiPhysicsReference UKawaiiPhysicsLibrary::SetTeleportRotationThreshold(const FKawaiiPhysicsReference& KawaiiPhysics, float TeleportRotationThreshold) {
    return FKawaiiPhysicsReference{};
}

FKawaiiPhysicsReference UKawaiiPhysicsLibrary::SetTeleportDistanceThreshold(const FKawaiiPhysicsReference& KawaiiPhysics, float TeleportDistanceThreshold) {
    return FKawaiiPhysicsReference{};
}

FKawaiiPhysicsReference UKawaiiPhysicsLibrary::SetPhysicsSettings(const FKawaiiPhysicsReference& KawaiiPhysics, FKawaiiPhysicsSettings& PhysicsSettings) {
    return FKawaiiPhysicsReference{};
}

FKawaiiPhysicsReference UKawaiiPhysicsLibrary::SetNeedWarmUp(const FKawaiiPhysicsReference& KawaiiPhysics, bool NeedWarmUp) {
    return FKawaiiPhysicsReference{};
}

FKawaiiPhysicsReference UKawaiiPhysicsLibrary::SetGravity(const FKawaiiPhysicsReference& KawaiiPhysics, FVector Gravity) {
    return FKawaiiPhysicsReference{};
}

FKawaiiPhysicsReference UKawaiiPhysicsLibrary::SetEnableWind(const FKawaiiPhysicsReference& KawaiiPhysics, bool EnableWind) {
    return FKawaiiPhysicsReference{};
}

FKawaiiPhysicsReference UKawaiiPhysicsLibrary::SetDummyBoneLength(const FKawaiiPhysicsReference& KawaiiPhysics, float DummyBoneLength) {
    return FKawaiiPhysicsReference{};
}

FKawaiiPhysicsReference UKawaiiPhysicsLibrary::SetAllowWorldCollision(const FKawaiiPhysicsReference& KawaiiPhysics, bool AllowWorldCollision) {
    return FKawaiiPhysicsReference{};
}

FKawaiiPhysicsReference UKawaiiPhysicsLibrary::ResetDynamics(const FKawaiiPhysicsReference& KawaiiPhysics) {
    return FKawaiiPhysicsReference{};
}

float UKawaiiPhysicsLibrary::GetWindScale(const FKawaiiPhysicsReference& KawaiiPhysics) {
    return 0.0f;
}

float UKawaiiPhysicsLibrary::GetTeleportRotationThreshold(const FKawaiiPhysicsReference& KawaiiPhysics) {
    return 0.0f;
}

float UKawaiiPhysicsLibrary::GetTeleportDistanceThreshold(const FKawaiiPhysicsReference& KawaiiPhysics) {
    return 0.0f;
}

FKawaiiPhysicsSettings UKawaiiPhysicsLibrary::GetPhysicsSettings(const FKawaiiPhysicsReference& KawaiiPhysics) {
    return FKawaiiPhysicsSettings{};
}

bool UKawaiiPhysicsLibrary::GetNeedWarmUp(const FKawaiiPhysicsReference& KawaiiPhysics) {
    return false;
}

FVector UKawaiiPhysicsLibrary::GetGravity(const FKawaiiPhysicsReference& KawaiiPhysics) {
    return FVector{};
}

bool UKawaiiPhysicsLibrary::GetEnableWind(const FKawaiiPhysicsReference& KawaiiPhysics) {
    return false;
}

float UKawaiiPhysicsLibrary::GetDummyBoneLength(const FKawaiiPhysicsReference& KawaiiPhysics) {
    return 0.0f;
}

bool UKawaiiPhysicsLibrary::GetAllowWorldCollision(const FKawaiiPhysicsReference& KawaiiPhysics) {
    return false;
}

void UKawaiiPhysicsLibrary::ConvertToKawaiiPhysicsPure(const FAnimNodeReference& Node, FKawaiiPhysicsReference& KawaiiPhysics, bool& Result) {
}

FKawaiiPhysicsReference UKawaiiPhysicsLibrary::ConvertToKawaiiPhysics(const FAnimNodeReference& Node, EAnimNodeReferenceConversionResult& Result) {
    return FKawaiiPhysicsReference{};
}


