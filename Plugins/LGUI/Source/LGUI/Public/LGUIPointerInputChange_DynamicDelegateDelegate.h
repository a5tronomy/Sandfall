#pragma once
#include "CoreMinimal.h"
#include "ELGUIPointerInputType.h"
#include "LGUIPointerInputChange_DynamicDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_TwoParams(FLGUIPointerInputChange_DynamicDelegate, int32, pointerID, ELGUIPointerInputType, Type);

