#pragma once
#include "CoreMinimal.h"
#include "OnGameUserSettingsCallbackDelegate.generated.h"

class UConfigurableGameUserSettings;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnGameUserSettingsCallback, const UConfigurableGameUserSettings*, UserConfig);

