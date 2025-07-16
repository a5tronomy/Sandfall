#pragma once
#include "CoreMinimal.h"
#include "LGUIInputActivateDynamicDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_OneParam(FLGUIInputActivateDynamicDelegate, bool, InActivate);

