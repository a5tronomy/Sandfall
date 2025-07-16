#pragma once
#include "CoreMinimal.h"
#include "ELGUIRichTextCustomStyleData_SupOrSubType.generated.h"

UENUM()
enum class ELGUIRichTextCustomStyleData_SupOrSubType : uint8 {
    KeepOrigin,
    None,
    Superscript,
    Subscript,
};

