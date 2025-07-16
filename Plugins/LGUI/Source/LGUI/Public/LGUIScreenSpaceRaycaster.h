#pragma once
#include "CoreMinimal.h"
#include "LGUIBaseRaycaster.h"
#include "LGUIScreenSpaceRaycaster.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class LGUI_API ULGUIScreenSpaceRaycaster : public ULGUIBaseRaycaster {
    GENERATED_BODY()
public:
    ULGUIScreenSpaceRaycaster(const FObjectInitializer& ObjectInitializer);

};

