#pragma once
#include "CoreMinimal.h"
#include "ELGUINavigationDirection.h"
#include "LGUIBaseInputModule.h"
#include "LGUI_PointerInputModule.generated.h"

class ULGUIEventSystem;

UCLASS(Abstract, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class LGUI_API ULGUI_PointerInputModule : public ULGUIBaseInputModule {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Instanced, Transient)
    ULGUIEventSystem* EventSystem;
    
public:
    ULGUI_PointerInputModule(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void InputTriggerForNavigation(bool triggerPress, int32 pointerID);
    
    UFUNCTION(BlueprintCallable)
    void InputNavigation(ELGUINavigationDirection Direction, bool pressOrRelease, int32 pointerID);
    
};

