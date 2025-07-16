#pragma once
#include "CoreMinimal.h"
#include "AchievementsMap.h"
#include "OnWriteAchievementsFinishedDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_TwoParams(FOnWriteAchievementsFinishedDelegate, const FAchievementsMap, AchievementsMap, const bool, bSuccess);

