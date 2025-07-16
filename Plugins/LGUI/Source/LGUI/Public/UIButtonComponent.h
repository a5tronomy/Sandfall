#pragma once
#include "CoreMinimal.h"
#include "LGUIButtonDynamicDelegateDelegate.h"
#include "LGUIDelegateHandleWrapper.h"
#include "LGUIEventDelegate.h"
#include "LGUIPointerClickInterface.h"
#include "UISelectableComponent.h"
#include "UIButtonComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class LGUI_API UUIButtonComponent : public UUISelectableComponent, public ILGUIPointerClickInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FLGUIEventDelegate OnClick;
    
public:
    UUIButtonComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UnregisterClickEvent(const FLGUIDelegateHandleWrapper& InDelegateHandle);
    
    UFUNCTION(BlueprintCallable)
    FLGUIDelegateHandleWrapper RegisterClickEvent(const FLGUIButtonDynamicDelegate& InDelegate);
    

    // Fix for true pure virtual functions not being implemented
};

