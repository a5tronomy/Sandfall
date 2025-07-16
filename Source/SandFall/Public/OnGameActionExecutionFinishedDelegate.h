#pragma once
#include "CoreMinimal.h"
#include "OnGameActionExecutionFinishedDelegate.generated.h"

class UGameActionInstance;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnGameActionExecutionFinished, UGameActionInstance*, GameActionInstance);

