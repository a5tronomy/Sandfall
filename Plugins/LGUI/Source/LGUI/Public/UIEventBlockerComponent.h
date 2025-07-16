#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "LGUIPointerClickInterface.h"
#include "LGUIPointerDownUpInterface.h"
#include "LGUIPointerDragDropInterface.h"
#include "LGUIPointerDragInterface.h"
#include "LGUIPointerEnterExitInterface.h"
#include "LGUIPointerScrollInterface.h"
#include "LGUIPointerSelectDeselectInterface.h"
#include "UIEventBlockerComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class LGUI_API UUIEventBlockerComponent : public UActorComponent, public ILGUIPointerEnterExitInterface, public ILGUIPointerDownUpInterface, public ILGUIPointerClickInterface, public ILGUIPointerDragInterface, public ILGUIPointerDragDropInterface, public ILGUIPointerScrollInterface, public ILGUIPointerSelectDeselectInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    bool AllowEventBubbleUp;
    
public:
    UUIEventBlockerComponent(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

