#pragma once
#include "CoreMinimal.h"
#include "ELGUIAtlasTextureSizeType.generated.h"

UENUM()
enum class ELGUIAtlasTextureSizeType : uint8 {
    SIZE_256x256,
    SIZE_512x512,
    SIZE_1024x1024,
    SIZE_2048x2048,
    SIZE_4096x4096,
    SIZE_8192x8192,
};

