#include "ALSMathLibrary.h"

UALSMathLibrary::UALSMathLibrary() {
}

FTransform UALSMathLibrary::TransformSub(const FTransform& T1, const FTransform& T2) {
    return FTransform{};
}

FTransform UALSMathLibrary::TransformAdd(const FTransform& T1, const FTransform& T2) {
    return FTransform{};
}

FTransform UALSMathLibrary::MantleComponentLocalToWorld(const FALSComponentAndTransform& CompAndTransform) {
    return FTransform{};
}

FVector UALSMathLibrary::GetCapsuleLocationFromBase(FVector BaseLocation, float ZOffset, UCapsuleComponent* Capsule) {
    return FVector{};
}

FVector UALSMathLibrary::GetCapsuleBaseLocation(float ZOffset, UCapsuleComponent* Capsule) {
    return FVector{};
}

bool UALSMathLibrary::CapsuleHasRoomCheck(UCapsuleComponent* Capsule, FVector TargetLocation, float HeightOffset, float RadiusOffset, TEnumAsByte<EDrawDebugTrace::Type> DebugType, bool DrawDebugTrace) {
    return false;
}

EALSMovementDirection UALSMathLibrary::CalculateQuadrant(EALSMovementDirection Current, float FRThreshold, float FLThreshold, float BRThreshold, float BLThreshold, float Buffer, float Angle) {
    return EALSMovementDirection::Forward;
}

bool UALSMathLibrary::AngleInRange(float Angle, float MinAngle, float MaxAngle, float Buffer, bool IncreaseBuffer) {
    return false;
}


