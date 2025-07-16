#pragma once
#include "CoreMinimal.h"
#include "EPointerEventType.generated.h"

UENUM()
enum class EPointerEventType : uint8 {
    Click,
    Enter,
    Exit,
    Down,
    Up,
    BeginDrag,
    Drag,
    EndDrag,
    Scroll,
    DragDrop = 11,
    Select,
    Deselect,
    Navigate,
};

