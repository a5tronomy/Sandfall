#pragma once
#include "CoreMinimal.h"
#include "EUIText_RichTextTagFilterFlags.generated.h"

UENUM()
enum class EUIText_RichTextTagFilterFlags {
    Bold,
    Italic,
    Underline,
    Strikethrough,
    Size,
    Color,
    Superscript,
    Subscript,
    CustomTag,
    Image,
};

