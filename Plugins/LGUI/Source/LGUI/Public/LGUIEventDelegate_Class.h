#pragma once
#include "CoreMinimal.h"
#include "LGUIEventDelegate.h"
#include "LGUIEventDelegate_Class.generated.h"

USTRUCT(BlueprintType)
struct LGUI_API FLGUIEventDelegate_Class : public FLGUIEventDelegate {
    GENERATED_BODY()
public:
    FLGUIEventDelegate_Class();
};

