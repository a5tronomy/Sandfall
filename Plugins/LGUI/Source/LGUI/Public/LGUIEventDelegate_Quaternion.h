#pragma once
#include "CoreMinimal.h"
#include "LGUIEventDelegate.h"
#include "LGUIEventDelegate_Quaternion.generated.h"

USTRUCT(BlueprintType)
struct LGUI_API FLGUIEventDelegate_Quaternion : public FLGUIEventDelegate {
    GENERATED_BODY()
public:
    FLGUIEventDelegate_Quaternion();
};

