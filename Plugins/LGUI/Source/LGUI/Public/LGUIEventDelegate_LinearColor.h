#pragma once
#include "CoreMinimal.h"
#include "LGUIEventDelegate.h"
#include "LGUIEventDelegate_LinearColor.generated.h"

USTRUCT(BlueprintType)
struct LGUI_API FLGUIEventDelegate_LinearColor : public FLGUIEventDelegate {
    GENERATED_BODY()
public:
    FLGUIEventDelegate_LinearColor();
};

