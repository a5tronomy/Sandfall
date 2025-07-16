#pragma once
#include "CoreMinimal.h"
#include "LGUIEventDelegate.h"
#include "LGUIEventDelegate_Object.generated.h"

USTRUCT(BlueprintType)
struct LGUI_API FLGUIEventDelegate_Object : public FLGUIEventDelegate {
    GENERATED_BODY()
public:
    FLGUIEventDelegate_Object();
};

