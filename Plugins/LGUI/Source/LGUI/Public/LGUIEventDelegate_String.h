#pragma once
#include "CoreMinimal.h"
#include "LGUIEventDelegate.h"
#include "LGUIEventDelegate_String.generated.h"

USTRUCT(BlueprintType)
struct LGUI_API FLGUIEventDelegate_String : public FLGUIEventDelegate {
    GENERATED_BODY()
public:
    FLGUIEventDelegate_String();
};

