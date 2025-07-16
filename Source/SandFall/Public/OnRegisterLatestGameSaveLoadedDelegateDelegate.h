#pragma once
#include "CoreMinimal.h"
#include "OnRegisterLatestGameSaveLoadedDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_TwoParams(FOnRegisterLatestGameSaveLoadedDelegate, const FString&, Filename, bool, bSuccess);

