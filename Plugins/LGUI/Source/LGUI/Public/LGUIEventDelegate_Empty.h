#pragma once
#include "CoreMinimal.h"
#include "LGUIEventDelegate.h"
#include "LGUIEventDelegate_Empty.generated.h"

USTRUCT(BlueprintType)
struct LGUI_API FLGUIEventDelegate_Empty : public FLGUIEventDelegate {
    GENERATED_BODY()
public:
    FLGUIEventDelegate_Empty();
};

