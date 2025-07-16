#pragma once
#include "CoreMinimal.h"
#include "LGUIBaseRaycaster.h"
#include "LGUIPointerDownUpInterface.h"
#include "LGUIPointerEnterExitInterface.h"
#include "LGUIPointerScrollInterface.h"
#include "LGUIRenderTargetInteraction.generated.h"

class ULGUICanvas;
class ULGUIPointerEventData;
class UObject;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class LGUI_API ULGUIRenderTargetInteraction : public ULGUIBaseRaycaster, public ILGUIPointerEnterExitInterface, public ILGUIPointerDownUpInterface, public ILGUIPointerScrollInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    bool bAllowEventBubbleUp;
    
    UPROPERTY(AdvancedDisplay, Export, Transient, VisibleAnywhere)
    TWeakObjectPtr<ULGUICanvas> TargetCanvas;
    
    UPROPERTY(AdvancedDisplay, Transient, VisibleAnywhere)
    UObject* LineTraceSource;
    
    UPROPERTY(AdvancedDisplay, Transient, VisibleAnywhere)
    ULGUIPointerEventData* pointerEventData;
    
public:
    ULGUIRenderTargetInteraction(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

