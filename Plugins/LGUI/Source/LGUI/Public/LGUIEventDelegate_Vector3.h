#pragma once
#include "CoreMinimal.h"
#include "LGUIEventDelegate.h"
#include "LGUIEventDelegate_Vector3.generated.h"

USTRUCT(BlueprintType)
struct LGUI_API FLGUIEventDelegate_Vector3 : public FLGUIEventDelegate {
    GENERATED_BODY()
public:
    FLGUIEventDelegate_Vector3();
};

