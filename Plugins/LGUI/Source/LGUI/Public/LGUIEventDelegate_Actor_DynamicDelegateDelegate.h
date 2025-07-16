#pragma once
#include "CoreMinimal.h"
#include "LGUIEventDelegate_Actor_DynamicDelegateDelegate.generated.h"

class AActor;

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_OneParam(FLGUIEventDelegate_Actor_DynamicDelegate, AActor*, Value);

