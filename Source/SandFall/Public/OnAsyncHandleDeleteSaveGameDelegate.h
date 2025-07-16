#pragma once
#include "CoreMinimal.h"
#include "OnAsyncHandleDeleteSaveGameDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnAsyncHandleDeleteSaveGame, bool, bSuccess);

