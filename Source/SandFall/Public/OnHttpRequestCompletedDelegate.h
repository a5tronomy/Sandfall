#pragma once
#include "CoreMinimal.h"
#include "OnHttpRequestCompletedDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnHttpRequestCompleted, const FString&, _content, bool, bSuccess);

