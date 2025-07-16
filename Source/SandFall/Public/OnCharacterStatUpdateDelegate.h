#pragma once
#include "CoreMinimal.h"
#include "OnCharacterStatUpdateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_TwoParams(FOnCharacterStatUpdate, int32, StatId, int32, StatValue);

