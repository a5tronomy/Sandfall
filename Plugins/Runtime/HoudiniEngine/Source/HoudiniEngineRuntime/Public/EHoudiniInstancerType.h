#pragma once
#include "CoreMinimal.h"
#include "EHoudiniInstancerType.generated.h"

UENUM()
enum class EHoudiniInstancerType : uint8 {
    Invalid,
    ObjectInstancer,
    PackedPrimitive,
    AttributeInstancer,
    OldSchoolAttributeInstancer,
    GeometryCollection,
    SkeletalMesh,
    MotionClip,
};

