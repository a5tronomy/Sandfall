#pragma once
#include "CoreMinimal.h"
#include "StringCVarChangedEventDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FStringCVarChangedEvent, const FString&, NewValue);

