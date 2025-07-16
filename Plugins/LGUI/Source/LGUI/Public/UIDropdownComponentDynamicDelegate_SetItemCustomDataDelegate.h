#pragma once
#include "CoreMinimal.h"
#include "UIDropdownComponentDynamicDelegate_SetItemCustomDataDelegate.generated.h"

class AActor;
class UUIDropdownItemComponent;

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_ThreeParams(FUIDropdownComponentDynamicDelegate_SetItemCustomData, int32, InItemIndex, UUIDropdownItemComponent*, InItemScript, AActor*, InItemActor);

