#pragma once
#include "CoreMinimal.h"
#include "LGUIEventDelegate.h"
#include "LGUIEventDelegate_PointerEvent.generated.h"

USTRUCT(BlueprintType)
struct LGUI_API FLGUIEventDelegate_PointerEvent : public FLGUIEventDelegate {
    GENERATED_BODY()
public:
    FLGUIEventDelegate_PointerEvent();
};

