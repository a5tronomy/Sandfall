#pragma once
#include "CoreMinimal.h"
#include "ELGUIEventDelegateParameterType.generated.h"

UENUM()
enum class ELGUIEventDelegateParameterType : uint8 {
    None,
    Empty,
    Bool,
    Float,
    Double,
    Int8,
    UInt8,
    Int16,
    UInt16,
    Int32,
    UInt32,
    Int64,
    UInt64,
    Vector2,
    Vector3,
    Vector4,
    Color,
    LinearColor,
    Quaternion,
    String,
    Object,
    Actor,
    PointerEvent,
    Class,
    Rotator,
    Name,
    Text,
};

