#pragma once
#include "CoreMinimal.h"
#include "LGUITextInputDynamicDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_OneParam(FLGUITextInputDynamicDelegate, const FString&, InString);

