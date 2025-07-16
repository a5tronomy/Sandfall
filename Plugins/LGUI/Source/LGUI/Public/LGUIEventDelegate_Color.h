#pragma once
#include "CoreMinimal.h"
#include "LGUIEventDelegate.h"
#include "LGUIEventDelegate_Color.generated.h"

USTRUCT(BlueprintType)
struct LGUI_API FLGUIEventDelegate_Color : public FLGUIEventDelegate {
    GENERATED_BODY()
public:
    FLGUIEventDelegate_Color();
};

