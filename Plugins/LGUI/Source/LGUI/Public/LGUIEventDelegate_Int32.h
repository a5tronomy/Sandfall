#pragma once
#include "CoreMinimal.h"
#include "LGUIEventDelegate.h"
#include "LGUIEventDelegate_Int32.generated.h"

USTRUCT(BlueprintType)
struct LGUI_API FLGUIEventDelegate_Int32 : public FLGUIEventDelegate {
    GENERATED_BODY()
public:
    FLGUIEventDelegate_Int32();
};

