#pragma once
#include "CoreMinimal.h"
#include "ELGUIRichTextCustomStyleData_ColorType.generated.h"

UENUM()
enum class ELGUIRichTextCustomStyleData_ColorType : uint8 {
    KeepOrigin,
    Replace,
    Multiply,
};

