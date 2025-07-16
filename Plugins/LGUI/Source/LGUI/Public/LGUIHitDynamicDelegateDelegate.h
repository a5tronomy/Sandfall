#pragma once
#include "CoreMinimal.h"
#include "Engine/HitResult.h"
#include "LGUIHitDynamicDelegateDelegate.generated.h"

class USceneComponent;

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_ThreeParams(FLGUIHitDynamicDelegate, bool, isHit, const FHitResult&, HitResult, USceneComponent*, HitComponent);

