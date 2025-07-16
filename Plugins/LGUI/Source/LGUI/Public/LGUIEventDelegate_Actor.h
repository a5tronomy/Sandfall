#pragma once
#include "CoreMinimal.h"
#include "LGUIEventDelegate.h"
#include "LGUIEventDelegate_Actor.generated.h"

USTRUCT(BlueprintType)
struct LGUI_API FLGUIEventDelegate_Actor : public FLGUIEventDelegate {
    GENERATED_BODY()
public:
    FLGUIEventDelegate_Actor();
};

