#pragma once
#include "CoreMinimal.h"
#include "ELGUIRichTextCustomStyleData_SizeType.generated.h"

UENUM()
enum class ELGUIRichTextCustomStyleData_SizeType : uint8 {
    KeepOrigin,
    SizeValue,
    SizeValueAsAdditional,
};

