#pragma once
#include "CoreMinimal.h"
#include "OnAsyncHandlePlatformsSaveDataDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnAsyncHandlePlatformsSaveData, bool, bSuccess);

