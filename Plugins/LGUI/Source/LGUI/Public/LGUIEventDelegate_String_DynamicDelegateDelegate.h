#pragma once
#include "CoreMinimal.h"
#include "LGUIEventDelegate_String_DynamicDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_OneParam(FLGUIEventDelegate_String_DynamicDelegate, const FString&, Value);

