#pragma once
#include "CoreMinimal.h"
#include "LGUIEventDelegate.h"
#include "LGUIEventDelegate_Bool.generated.h"

USTRUCT(BlueprintType)
struct LGUI_API FLGUIEventDelegate_Bool : public FLGUIEventDelegate {
    GENERATED_BODY()
public:
    FLGUIEventDelegate_Bool();
};

